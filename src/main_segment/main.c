/**
 * Original filename: main.c
 */

#include "ultra64.h"
#include "include_asm.h"
#include "unk.h"
#include "macros_defines.h"
#include "boot_functions.h"
#include "boot_variables.h"
#include "main_segment_functions.h"
#include "main_segment_variables.h"
#include "audio/audio_stuff.h"
#include "buffers.h"

/**
 * Original name: mainproc
 */
void mainproc(void) {
    EepRom_DumpDataSize();

    switch (osTvType) {
        case OS_TV_NTSC:
            func_80029ED0(&B_800EB670, OS_VI_NTSC_LAN1, 1);
            main_no = MAIN_NO_0;
            break;

        case OS_TV_MPAL:
            func_80029ED0(&B_800EB670, OS_VI_MPAL_LAN1, 1);
            main_no = MAIN_NO_0;
            break;

        case OS_TV_PAL:
            func_80029ED0(&B_800EB670, OS_VI_PAL_LAN1, 1);
            main_no = MAIN_NO_9;
            break;

        default:
            func_80029ED0(&B_800EB670, OS_VI_NTSC_LAN1, 1);
            main_no = MAIN_NO_9;
            break;
    }

    dm_audio_init_driver(&B_800EB670);
    gfxInit(D_80205000);
    gfxCreateGraphicThread(&B_800EB670);
    osViSetSpecialFeatures(OS_VI_DITHER_FILTER_ON | OS_VI_GAMMA_DITHER_OFF | OS_VI_GAMMA_OFF);
    joyInit(MAXCONTROLLERS);
    evs_playmax = joyResponseCheck();

    if ((evs_playmax == 0) && (main_no == MAIN_NO_0)) {
        main_no = MAIN_NO_8;
    }

    aifFirstInit();
    func_80000488(func_8006D620);

    while (true) {
        enum_main_no temp_s0 = main_no;

        switch (main_no) {
            case MAIN_NO_0:
                main_no = main11();
                break;

            case MAIN_NO_1:
                main_no = main12();
                break;

            case MAIN_NO_3:
                main_no = dm_title_main(&B_800EB670);
                break;

            case MAIN_NO_4:
                main_no = dm_manual_main(&B_800EB670);
                break;

            case MAIN_NO_5:
                main_no = dm_game_main(&B_800EB670);
                break;

            case MAIN_NO_6:
                main_no = main_menu(&B_800EB670);
                break;

            case MAIN_NO_7:
                main_no = main_techmes(&B_800EB670);
                break;

            case MAIN_NO_8:
            case MAIN_NO_9:
            case MAIN_NO_10:
                main_no = main_boot_error(&B_800EB670);
                break;

            case MAIN_NO_2:
                main_story(&B_800EB670);
                if ((story_proc_no == 0) | (story_proc_no == 0xC)) {
                    story_proc_no++;
                    main_no = MAIN_NO_2;
                } else if ((u32)(story_proc_no - 0xA) >= 2U && (u32)(story_proc_no - 0x16) >= 2U) {
                    main_no = MAIN_NO_1;
                } else {
                    main_no = MAIN_NO_7;
                }
                break;
        }

        main_old = temp_s0;
    }
}
