#ifndef UNKNOWN_STRUCTS_H
#define UNKNOWN_STRUCTS_H

#include "libc/stdint.h"
#include "unk.h"

typedef struct struct_80029C04 {
    romoffset_t segmentRom;
    size_t segmentSize;
} struct_80029C04;

typedef struct struct_800EB670_unk_668 {
    /* 0x0 */ struct struct_800EB670_unk_668 *unk_0;
    /* 0x4 */ OSMesgQueue *unk_4;
} struct_800EB670_unk_668; // size >= 0x8

typedef struct struct_800EB670 {
    /* 0x000 */ s16 unk_000;
    /* 0x002 */ s16 unk_002;
    /* 0x004 */ OSMesgQueue unk_004;
    /* 0x01C */ OSMesg unk_01C[8];
    /* 0x03C */ OSMesgQueue unk_03C;
    /* 0x054 */ OSMesg unk_054[8];
    /* 0x074 */ OSMesgQueue unk_074;
    /* 0x08C */ OSMesg unk_08C[8];
    /* 0x0AC */ OSMesgQueue unk_0AC;
    /* 0x0C4 */ OSMesg unk_0C4[8];
    /* 0x0E4 */ OSMesgQueue unk_0E4;
    /* 0x0FC */ OSMesg unk_0FC[8];
    /* 0x11C */ OSMesgQueue unk_11C;
    /* 0x134 */ OSMesg unk_134[8];
    /* 0x154 */ UNK_TYPE1 unk_154[0x4];
    /* 0x158 */ OSThread unk_158;
    /* 0x308 */ OSThread unk_308;
    /* 0x4B8 */ OSThread unk_4B8;
    /* 0x668 */ struct_800EB670_unk_668 *unk_668;
    /* 0x66C */ UNK_TYPE unk_66C;
    /* 0x670 */ UNK_TYPE unk_670;
    /* 0x674 */ UNK_TYPE unk_674;
    /* 0x678 */ UNK_TYPE unk_678;
} struct_800EB670; // size >= 0x67C

typedef void (*StartThreadFunc)(void *);

typedef struct struct_800FAF98_unk_14 {
    /* 0x0 */ UNK_TYPE4 unk_0;
    /* 0x4 */ UNK_TYPE4 unk_4;
    /* 0x8 */ UNK_TYPE4 unk_8;
} struct_800FAF98_unk_14; // size = 0xC

typedef struct struct_800FAF98 {
    /* 0x00 */ UNK_TYPE unk_00;
    /* 0x04 */ UNK_TYPE unk_04;
    /* 0x08 */ UNK_TYPE unk_08;
    /* 0x0C */ void *unk_0C; // vram
    /* 0x10 */ UNK_TYPE unk_10;
    /* 0x14 */ struct_800FAF98_unk_14* unk_14;
    /* 0x18 */ UNK_TYPE unk_18;
    /* 0x1C */ UNK_TYPE unk_1C;
    /* 0x20 */ UNK_TYPE unk_20;
    /* 0x24 */ UNK_TYPE4 *unk_24;
    /* 0x28 */ UNK_TYPE unk_28;
    /* 0x2C */ OSMesgQueue unk_2C;
    /* 0x44 */ OSMesg unk_44[8];
    /* 0x64 */ UNK_TYPE1 unk_64[0x58];
    /* 0xBC */ UNK_TYPE unk_BC;
} struct_800FAF98; // size >= 0xC0


#endif
