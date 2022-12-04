#ifndef MAIN_SEGMENT_VARIABLES_H
#define MAIN_SEGMENT_VARIABLES_H

#include "ultra64.h"
#include "libc/stdint.h"
#include "libc/stdbool.h"
#include "PR/sched.h"
#include "unknown_structs.h"
#include "unk.h"
#include "alignment.h"


// data

extern UNK_TYPE D_80088100;
extern s8 D_80088104;
// extern UNK_TYPE D_80088105;
extern u64* D_80088110[][2];
// extern UNK_TYPE D_80088114;
extern s32 D_80088120;
extern s32 D_80088124;
extern u32 D_80088128;
extern Vp D_80088130;
extern s32 D_80088140;
extern Gfx D_80088150[];
extern Gfx D_800881B8[];
extern Gfx D_800881E0[];
extern Gfx D_80088228[];
extern Gfx D_80088308[];
extern Gfx D_80088328[];

// extern UNK_TYPE D_80088400;
extern u8 D_80088401; // maybe part of a struct?
// extern UNK_TYPE D_80088402;
// extern UNK_TYPE D_80088403;
// extern UNK_TYPE D_80088404;
// extern UNK_TYPE D_80088405;
extern u8 D_80088406;
// extern UNK_TYPE D_80088407;
// extern UNK_TYPE D_80088408;
// extern UNK_TYPE D_80088409;
// extern UNK_TYPE D_8008840A;
// extern UNK_TYPE D_8008840C;
// extern UNK_TYPE D_8008840D;
// extern UNK_TYPE D_8008840E;
extern u8 D_8008840F;
extern s8 D_80088410;
// extern UNK_TYPE D_80088414;
// extern UNK_TYPE D_80088418;
// extern UNK_TYPE D_8008841C;
// extern UNK_TYPE D_8008841D;
// extern UNK_TYPE D_80088430;
// extern UNK_TYPE D_80088431;
// extern UNK_TYPE D_80088433;
// extern UNK_TYPE D_80088434;
// extern UNK_TYPE D_8008846C;
extern s32 D_80088480;
// extern UNK_TYPE D_80088484;
// extern UNK_TYPE D_800884A8;
// extern UNK_TYPE D_800884C0;
// extern UNK_TYPE D_800884D8;
// extern UNK_TYPE D_800884F0;
// extern UNK_TYPE D_80088508;
// extern UNK_TYPE D_8008850C;
// extern UNK_TYPE D_80088524;
// extern UNK_TYPE D_8008852C;
// extern UNK_TYPE D_80088534;
// extern UNK_TYPE D_80088535;
// extern UNK_TYPE D_8008853C;
// extern UNK_TYPE D_8008854C;
// extern UNK_TYPE D_8008855E;
// extern UNK_TYPE D_80088564;
// extern UNK_TYPE D_8008856A;
// extern UNK_TYPE D_8008856C;
// extern UNK_TYPE D_80088570;
// extern UNK_TYPE D_80088572;
// extern UNK_TYPE D_80088574;
// extern UNK_TYPE D_80088584;
// extern UNK_TYPE D_80088588;
// extern UNK_TYPE D_8008858C;
// extern UNK_TYPE D_80088590;
// extern UNK_TYPE D_80088592;
// extern UNK_TYPE D_80088594;
// extern UNK_TYPE D_80088596;
// extern UNK_TYPE D_80088598;
// extern UNK_TYPE D_8008859A;
// extern UNK_TYPE D_8008859C;
// extern UNK_TYPE D_800885A0;
// extern UNK_TYPE D_800885A4;
// extern UNK_TYPE D_800885A6;
// extern UNK_TYPE D_800885A8;
// extern UNK_TYPE D_800885AA;
// extern UNK_TYPE D_800885AC;
// extern UNK_TYPE D_800885AE;
// extern UNK_TYPE D_800885B0;
// extern UNK_TYPE D_800885B4;
// extern UNK_TYPE D_800885B8;
// extern UNK_TYPE D_800885BA;
// extern UNK_TYPE D_800885BC;
// extern UNK_TYPE D_800885BE;
// extern UNK_TYPE D_800885C0;
// extern UNK_TYPE D_800885C2;
// extern UNK_TYPE D_800885C4;
// extern UNK_TYPE D_800885C6;
// extern UNK_TYPE D_800885C8;
// extern UNK_TYPE D_800885CA;
// extern UNK_TYPE D_800885CC;
// extern UNK_TYPE D_800885D2;
// extern UNK_TYPE D_800885D4;
// extern UNK_TYPE D_800885D6;
// extern UNK_TYPE D_800885D8;
// extern UNK_TYPE D_800885F8;
// extern UNK_TYPE D_80088638;
// extern UNK_TYPE D_80088660;
// extern UNK_TYPE D_800890E0;
// extern UNK_TYPE D_800897A0;
// extern UNK_TYPE D_800897A2;
// extern UNK_TYPE D_800897A8;
// extern UNK_TYPE D_800899A8;
// extern UNK_TYPE D_8008CF90;
// extern UNK_TYPE D_8008CFA0;
extern s32 D_8008CFE0;

// extern UNK_TYPE D_8008CFF0;
// extern UNK_TYPE D_8008CFF4;
// extern UNK_TYPE D_8008CFF8;
// extern UNK_TYPE D_8008D020;
// extern UNK_TYPE D_8008D024;
// extern UNK_TYPE D_8008D028;
// extern UNK_TYPE D_8008D080;
// extern UNK_TYPE D_8008D08C;
// extern UNK_TYPE D_8008D0A8;
// extern UNK_TYPE D_8008D0AC;
// extern UNK_TYPE D_8008D0B0;
// extern UNK_TYPE D_8008D0B8;
// extern UNK_TYPE D_8008D0BC;
extern UNK_TYPE4 D_8008D0C0[];
extern UNK_TYPE4 D_8008D0C8[];
// extern UNK_TYPE D_8008D0D8;
extern Gfx D_8008D0E8[];
// extern UNK_TYPE D_8008D183;
// extern UNK_TYPE D_8008D187;
// extern UNK_TYPE D_8008D18B;
// extern UNK_TYPE D_8008D1B3;
// extern UNK_TYPE D_8008D1B7;
// extern UNK_TYPE D_8008D1BB;
// extern UNK_TYPE D_8008D1E0;
// extern UNK_TYPE D_8008D1F4;
// extern UNK_TYPE D_8008D248;
// extern UNK_TYPE D_8008D290;
// extern UNK_TYPE D_8008D2D0;
// extern UNK_TYPE D_8008D500;
// extern UNK_TYPE D_8008E1B0;
// extern UNK_TYPE D_8008E290;
// extern UNK_TYPE D_8008E340;
// extern UNK_TYPE D_8008E358;
// extern UNK_TYPE D_8008E364;
// extern UNK_TYPE D_8008E370;
// extern UNK_TYPE D_8008E380;
// extern UNK_TYPE D_8008E398;
// extern UNK_TYPE D_8008E3B8;
// extern UNK_TYPE D_8008E3BC;
// extern UNK_TYPE D_8008E3C0;
// extern UNK_TYPE D_8008E400;
// extern UNK_TYPE D_8008E420;
// extern UNK_TYPE D_8008E454;
// extern UNK_TYPE D_8008E480;
// extern UNK_TYPE D_8008E490;
// extern UNK_TYPE D_8008E4A0;
// extern UNK_TYPE D_8008E4AC;
// extern UNK_TYPE D_8008E4DC;
// extern UNK_TYPE D_8008E4F0;
// extern UNK_TYPE D_8008E508;
// extern UNK_TYPE D_8008E538;
// extern UNK_TYPE D_8008E540;
// extern UNK_TYPE D_8008E548;
// extern UNK_TYPE D_8008E554;
// extern UNK_TYPE D_8008E558;
// extern UNK_TYPE D_8008E564;
// extern UNK_TYPE D_8008E568;
// extern UNK_TYPE D_8008E574;
// extern UNK_TYPE D_8008E57C;
// extern UNK_TYPE D_8008E584;
// extern UNK_TYPE D_8008E590;
// extern UNK_TYPE D_8008E598;
// extern UNK_TYPE D_8008E5A0;
// extern UNK_TYPE D_8008E5B0;
// extern UNK_TYPE D_8008E5B4;
extern s32 D_8008E5D0;
// extern UNK_TYPE D_8008E5E0;
extern Gfx D_8008E650[];
extern Gfx D_8008E6B8[];
// extern UNK_TYPE D_8008E728;
extern Gfx D_8008E748[];
// extern UNK_TYPE D_8008E770;
// extern UNK_TYPE D_8008E778;
// extern UNK_TYPE D_8008E788;
// extern UNK_TYPE D_8008E78C;
// extern UNK_TYPE D_8008E79C;
// extern UNK_TYPE D_8008E7B4;
// extern UNK_TYPE D_8008E7D0;
// extern UNK_TYPE D_8008E7DC;
// extern UNK_TYPE D_8008E7F0;
// extern UNK_TYPE D_8008E804;
// extern UNK_TYPE D_8008E814;
// extern UNK_TYPE D_8008E820;
// extern UNK_TYPE D_8008E85C;
// extern UNK_TYPE D_8008E86C;
// extern UNK_TYPE D_8008E870;
// extern UNK_TYPE D_8008E87C;
// extern UNK_TYPE D_8008E8B4;
// extern UNK_TYPE D_8008E8C0;
// extern UNK_TYPE D_8008F800;
// extern UNK_TYPE D_8008FB00;
// extern UNK_TYPE D_80094350;
// extern UNK_TYPE D_8009F870;
// extern UNK_TYPE D_800A0E78;
extern u8 D_800A3A88[];
// extern UNK_TYPE D_800A3AD0;
// extern UNK_TYPE D_800A3BD0;
extern UNK_TYPE2 D_800A3CD0[];
extern u16 D_800A6D90[];
// extern UNK_TYPE D_800A6F70;
// extern UNK_TYPE D_800A6F80;
// extern UNK_TYPE D_800A6F8C;
// extern UNK_TYPE D_800A6F90;
// extern UNK_TYPE D_800A6F9C;
// extern UNK_TYPE D_800A6FAC;
// extern UNK_TYPE D_800A6FC4;
// extern UNK_TYPE D_800A6FC8;
// extern UNK_TYPE D_800A6FD8;
// extern UNK_TYPE D_800A6FEC;
// extern UNK_TYPE D_800A7040;
// extern UNK_TYPE D_800A709C;
// extern UNK_TYPE D_800A70F4;
// extern UNK_TYPE D_800A7150;
// extern UNK_TYPE D_800A71A4;
// extern UNK_TYPE D_800A727C;
// extern UNK_TYPE D_800A72D8;
// extern UNK_TYPE D_800A7354;
// extern UNK_TYPE D_800A7360;
// extern UNK_TYPE D_800A7374;
// extern UNK_TYPE D_800A7378;
// extern UNK_TYPE D_800A7379;
// extern UNK_TYPE D_800A737A;
// extern UNK_TYPE D_800A737B;
extern u32 D_800A7390;
extern s32 D_800A7394;
extern s32 D_800A7398;
extern s32 D_800A739C;
// extern UNK_TYPE D_800A73C0;
// extern UNK_TYPE D_800A76C0;
extern u8 D_800A82C0[];
extern UNK_TYPE D_800A8AC0; // probably part of a struct/array
extern UNK_TYPE D_800A8AC4; // probably part of a struct/array
extern UNK_TYPE D_800A8AC8; // probably part of a struct/array
// extern UNK_TYPE D_800A8ACC;
// extern UNK_TYPE D_800A8AD0;
// extern UNK_TYPE D_800A923C;
// extern UNK_TYPE D_800A9278;
// extern UNK_TYPE D_800A92C0;
// extern UNK_TYPE D_800A92D8;
// extern UNK_TYPE D_800A9314;
// extern UNK_TYPE D_800A935C;
// extern UNK_TYPE D_800A9390;
// extern UNK_TYPE D_800A93B0;
// extern UNK_TYPE D_800A93F0;
// extern UNK_TYPE D_800A9418;
// extern UNK_TYPE D_800A9444;
// extern UNK_TYPE D_800A9484;
// extern UNK_TYPE D_800A94D4;
// extern UNK_TYPE D_800A9520;
// extern UNK_TYPE D_800A9558;
// extern UNK_TYPE D_800A959C;
// extern UNK_TYPE D_800A95D4;
// extern UNK_TYPE D_800A95EC;
// extern UNK_TYPE D_800A962C;
// extern UNK_TYPE D_800A965C;
// extern UNK_TYPE D_800A96A0;
// extern UNK_TYPE D_800A96D8;
// extern UNK_TYPE D_800A9720;
// extern UNK_TYPE D_800A9764;
// extern UNK_TYPE D_800A97AC;
// extern UNK_TYPE D_800A97EC;
// extern UNK_TYPE D_800A9838;
// extern UNK_TYPE D_800A9878;
// extern UNK_TYPE D_800A9890;
// extern UNK_TYPE D_800A98D4;
// extern UNK_TYPE D_800A9918;
// extern UNK_TYPE D_800A9930;
// extern UNK_TYPE D_800A9974;
// extern UNK_TYPE D_800A99B0;
// extern UNK_TYPE D_800A99EC;
// extern UNK_TYPE D_800A9A18;
// extern UNK_TYPE D_800A9A50;
// extern UNK_TYPE D_800A9A94;
// extern UNK_TYPE D_800A9ACC;
// extern UNK_TYPE D_800A9AF4;
// extern UNK_TYPE D_800A9B30;
// extern UNK_TYPE D_800A9B6C;
// extern UNK_TYPE D_800A9BB8;
// extern UNK_TYPE D_800A9BE0;
// extern UNK_TYPE D_800A9C18;
// extern UNK_TYPE D_800A9C58;
// extern UNK_TYPE D_800A9C74;
// extern UNK_TYPE D_800A9CA0;
// extern UNK_TYPE D_800A9CF0;
// extern UNK_TYPE D_800A9D20;
// extern UNK_TYPE D_800A9D5C;
// extern UNK_TYPE D_800A9DA0;
// extern UNK_TYPE D_800A9DDC;
// extern UNK_TYPE D_800A9DFC;
// extern UNK_TYPE D_800A9E44;
// extern UNK_TYPE D_800A9E7C;
// extern UNK_TYPE D_800A9EB8;
// extern UNK_TYPE D_800A9ED4;
// extern UNK_TYPE D_800A9EFC;
// extern UNK_TYPE D_800A9F48;
// extern UNK_TYPE D_800A9F7C;
// extern UNK_TYPE D_800A9FB4;
// extern UNK_TYPE D_800A9FD4;
// extern UNK_TYPE D_800AA014;
// extern UNK_TYPE D_800AA040;
// extern UNK_TYPE D_800AA07C;
// extern UNK_TYPE D_800AA09C;
// extern UNK_TYPE D_800AA0C4;
// extern UNK_TYPE D_800AA104;
// extern UNK_TYPE D_800AA130;
// extern UNK_TYPE D_800AA168;
// extern UNK_TYPE D_800AA194;
// extern UNK_TYPE D_800AA1BC;
// extern UNK_TYPE D_800AA200;
// extern UNK_TYPE D_800AA238;
// extern UNK_TYPE D_800AA26C;
// extern UNK_TYPE D_800AA29C;
// extern UNK_TYPE D_800AA2C4;
// extern UNK_TYPE D_800AA300;
// extern UNK_TYPE D_800AA318;
// extern UNK_TYPE D_800AA334;
// extern UNK_TYPE D_800AA354;
// extern UNK_TYPE D_800AA398;
// extern UNK_TYPE D_800AA3DC;
// extern UNK_TYPE D_800AA41C;
// extern UNK_TYPE D_800AA454;
// extern UNK_TYPE D_800AA474;
// extern UNK_TYPE D_800AA494;
// extern UNK_TYPE D_800AA4DC;
// extern UNK_TYPE D_800AA4EC;
// extern UNK_TYPE D_800AA528;
// extern UNK_TYPE D_800AA538;
// extern UNK_TYPE D_800AA570;
// extern UNK_TYPE D_800AA5AC;
// extern UNK_TYPE D_800AA5C4;
// extern UNK_TYPE D_800AA604;
// extern UNK_TYPE D_800AA63C;
// extern UNK_TYPE D_800AA668;
// extern UNK_TYPE D_800AA688;
// extern UNK_TYPE D_800AA6CC;
// extern UNK_TYPE D_800AA714;
// extern UNK_TYPE D_800AA758;
// extern UNK_TYPE D_800AA778;
// extern UNK_TYPE D_800AA7C4;
// extern UNK_TYPE D_800AA808;
// extern UNK_TYPE D_800AA844;
// extern UNK_TYPE D_800AA864;
// extern UNK_TYPE D_800AA894;
// extern UNK_TYPE D_800AA8CC;
// extern UNK_TYPE D_800AA8F0;
// extern UNK_TYPE D_800AA928;
// extern UNK_TYPE D_800AA96C;
// extern UNK_TYPE D_800AA9A8;
// extern UNK_TYPE D_800AA9E0;
// extern UNK_TYPE D_800AAA10;
// extern UNK_TYPE D_800AAA4C;
// extern UNK_TYPE D_800AAA80;
// extern UNK_TYPE D_800AAAA0;
// extern UNK_TYPE D_800AAAE0;
// extern UNK_TYPE D_800AAB18;
// extern UNK_TYPE D_800AAB5C;
// extern UNK_TYPE D_800AAB7C;
// extern UNK_TYPE D_800AABB4;
// extern UNK_TYPE D_800AABC8;
// extern UNK_TYPE D_800AABE0;
// extern UNK_TYPE D_800AAC10;
// extern UNK_TYPE D_800AAC5C;
// extern UNK_TYPE D_800AAC74;
// extern UNK_TYPE D_800AAC7C;
// extern UNK_TYPE D_800AAC80;
// extern UNK_TYPE D_800AAC84;
// extern UNK_TYPE D_800AACCC;
// extern UNK_TYPE D_800AACD0;
// extern UNK_TYPE D_800AACD4;
extern s32 D_800AACEC;
// extern UNK_TYPE D_800AACF0;
// extern UNK_TYPE D_800AAD04;
extern s32 D_800AAD08;
extern s32 D_800AAD0C;
extern UNK_TYPE4 D_800AAD10;
extern UNK_TYPE4 D_800AAD14;
extern s32 D_800AAD18;
extern UNK_TYPE4 D_800AAD1C;
extern UNK_TYPE4 D_800AAD20;
extern UNK_TYPE4 D_800AAD24;
extern UNK_TYPE4 D_800AAD28;
extern s32 D_800AAD2C;
extern s32 D_800AAD34;
// extern UNK_TYPE D_800AAD38;
extern void *D_800AAD3C;
// extern UNK_TYPE D_800AAD40;
extern s32 D_800AAD44;
// extern UNK_TYPE D_800AAD48;
// extern UNK_TYPE D_800AAD4C;
// extern UNK_TYPE D_800AAD50;
extern Vp D_800AAD58;
extern Gfx D_800AAD68[];
// extern UNK_TYPE D_800AAE00;
// extern UNK_TYPE D_800AAE60;
// extern UNK_TYPE D_800AAFF4;
// extern UNK_TYPE D_800AB170;
// extern UNK_TYPE D_800AB1B4;
// extern UNK_TYPE D_800AB1D4;
// extern UNK_TYPE D_800AB1EC;
// extern UNK_TYPE D_800AB1FC;
// extern UNK_TYPE D_800AB20C;
// extern UNK_TYPE D_800AB21C;
// extern UNK_TYPE D_800AB29C;
// extern UNK_TYPE D_800AB320;
// extern UNK_TYPE D_800AB32C;
// extern UNK_TYPE D_800AB334;
// extern UNK_TYPE D_800AB3B4;
extern u16 D_800AB440[];
// extern UNK_TYPE D_800ABC50;
// extern UNK_TYPE D_800ABD10;
// extern UNK_TYPE D_800ABD78;
// extern UNK_TYPE D_800ABE00;
// extern UNK_TYPE D_800ABE28;
// extern UNK_TYPE D_800ABEB0;
// extern UNK_TYPE D_800ABED8;
// extern UNK_TYPE D_800ABF00;
// extern UNK_TYPE D_800ABF04;
// extern UNK_TYPE D_800ABF20;
// extern UNK_TYPE D_800ABF2C;
// extern UNK_TYPE D_800ABF30;
// extern UNK_TYPE D_800ABF40;

// bss

extern UNK_TYPE B_800B3640;
// extern UNK_TYPE B_800BFEF7;
// extern UNK_TYPE B_800C00D2;
// extern UNK_TYPE B_800DB40B;
// extern UNK_TYPE B_800DF300;
// extern UNK_TYPE B_800E42B4;
extern u32 B_800E4640[0x270];
// extern UNK_TYPE B_800E5000;
// extern UNK_TYPE B_800E5008;
// extern UNK_TYPE B_800E5198;
// extern UNK_TYPE B_800E519C;
// extern UNK_TYPE B_800E51A0;
// extern UNK_TYPE B_800E51B0;
// extern UNK_TYPE B_800E53B0;
extern s32 B_800E53C0;
// extern UNK_TYPE B_800E53C4;
// extern UNK_TYPE B_800E53C8;
extern UNK_PTR B_800E53CC;
// extern UNK_TYPE B_800E53D0;
// extern UNK_TYPE B_800E53D4;
// extern UNK_TYPE B_800E53D8;
// extern UNK_TYPE B_800E53DC;
// extern UNK_TYPE B_800E53E0;
// extern UNK_TYPE B_800E53E4;
// extern UNK_TYPE B_800E53E8;
// extern UNK_TYPE B_800E53EC;
// extern UNK_TYPE B_800E53F0;
extern UNK_PTR B_800E53F4;
// extern UNK_TYPE B_800E53F8;
// extern UNK_TYPE B_800E53FC;
// extern UNK_TYPE B_800E5400;
// extern UNK_TYPE B_800E5404;
// extern UNK_TYPE B_800E5410;
// extern UNK_TYPE B_800E5414;
// extern UNK_TYPE B_800E5418;
// extern UNK_TYPE B_800E541C;
// extern UNK_TYPE B_800E5420;
// extern UNK_TYPE B_800E5424;
// extern UNK_TYPE B_800E5428;
// extern UNK_TYPE B_800E54A8;
// extern UNK_TYPE B_800E54C8;
extern Mtx B_800E5818;
// extern UNK_TYPE B_800E5860;
// extern UNK_TYPE B_800E5890;
// extern UNK_TYPE B_800E58B0;
// extern UNK_TYPE B_800E58B4;
// extern UNK_TYPE B_800E58B8;
// extern UNK_TYPE B_800E58BC;
// extern UNK_TYPE B_800E58BE;
// extern UNK_TYPE B_800E58C0;
// extern UNK_TYPE B_800E58C2;
// extern UNK_TYPE B_800E58C4;
// extern UNK_TYPE B_800E58C6;
// extern UNK_TYPE B_800E5910;
// extern UNK_TYPE B_800E5914;
// extern UNK_TYPE B_800E5918;
// extern UNK_TYPE B_800E591C;
// extern UNK_TYPE B_800E5920;
// extern UNK_TYPE B_800E5924;
// extern UNK_TYPE B_800E5928;
// extern UNK_TYPE B_800E592C;
// extern UNK_TYPE B_800E5930;
// extern UNK_TYPE B_800E5934;
// extern UNK_TYPE B_800E5938;
// extern UNK_TYPE B_800E5968;
// extern UNK_TYPE B_800E5969;
// extern UNK_TYPE B_800E596C;
// extern UNK_TYPE B_800E5970;
// extern UNK_TYPE B_800E5974;
// extern UNK_TYPE B_800E5978;
// extern UNK_TYPE B_800E597C;
// extern UNK_TYPE B_800E5980;
// extern UNK_TYPE B_800E5990;
// extern UNK_TYPE B_800E5994;
extern s32 B_800E59A0;
extern s32 B_800E59A4;
extern s32 B_800E59A8;
// extern UNK_TYPE B_800E59B0;
// extern UNK_TYPE B_800E59B4;
// extern UNK_TYPE B_800E59B8;
// extern UNK_TYPE B_800E59BC;
// extern UNK_TYPE B_800E59C0;
// extern UNK_TYPE B_800E59C4;
// extern UNK_TYPE B_800E59C8;
// extern UNK_TYPE B_800E59CC;
// extern UNK_TYPE B_800E59D0;
// extern UNK_TYPE B_800E59D4;
extern s32 B_800E59D8;
extern s32 B_800E59DC;
extern void **B_800E59E0;
extern void *B_800E59E4;
extern void **B_800E59E8;
extern void *B_800E59EC;
extern struct_800E5A70 B_800E59F0;
// extern UNK_TYPE B_800E5A70;
// extern UNK_TYPE B_800E5A8C;
// extern UNK_TYPE B_800E5A90;
// extern UNK_TYPE B_800E5A94;
// extern UNK_TYPE B_800E5AA0;
// extern UNK_TYPE B_800E5AA4;
// extern UNK_TYPE B_800E5AAC;
// extern UNK_TYPE B_800E5AB8;
// extern UNK_TYPE B_800E5AC4;
// extern UNK_TYPE B_800E5ACC;
// extern UNK_TYPE B_800E5AF0;
// extern UNK_TYPE B_800E5EF0;
// extern UNK_TYPE B_800E5EF4;
// extern UNK_TYPE B_800E5EF8;
// extern UNK_TYPE B_800E5EFC;
// extern UNK_TYPE B_800E5F00;
// extern UNK_TYPE B_800E5F04;
extern Mtx B_800E5F08;
extern struct_800F1DF8 B_800E5F50[2];
extern void *B_800E8750;
extern void *B_800E87A8;
extern void *B_800E87AC;
extern void *B_800E87B0;
// extern UNK_TYPE B_800E87B4;
extern struct_800E87C0 B_800E87C0[0x40];
// extern UNK_TYPE B_800E97C0;
// extern UNK_TYPE B_800E97C8;
// extern UNK_TYPE B_800E97CA;
// extern UNK_TYPE B_800E98A0;
// extern UNK_TYPE B_800E98B0;
// extern UNK_TYPE B_800E98B8;
// extern UNK_TYPE B_800E98BC;
// extern UNK_TYPE B_800E98C0;
// extern UNK_TYPE B_800E98C4;
// extern UNK_TYPE B_800E98C8;
// extern UNK_TYPE B_800E98D0;
// extern UNK_TYPE B_800E98E0;
// extern UNK_TYPE B_800E98F0;
// extern UNK_TYPE B_800E9900;
// extern UNK_TYPE B_800E9904;
// extern UNK_TYPE B_800E9910;
// extern UNK_TYPE B_800E9914;
// extern UNK_TYPE B_800E9918;
// extern UNK_TYPE B_800E9924;
// extern UNK_TYPE B_800E9928;
// extern UNK_TYPE B_800E992C;
// extern UNK_TYPE B_800E9930;
// extern UNK_TYPE B_800E9934;
// extern UNK_TYPE B_800E9938;
// extern UNK_TYPE B_800E993C;
// extern UNK_TYPE B_800E993E;
// extern UNK_TYPE B_800E9940;
// extern UNK_TYPE B_800E9944;
// extern UNK_TYPE B_800E9948;
// extern UNK_TYPE B_800E994C;
// extern UNK_TYPE B_800E9950;
// extern UNK_TYPE B_800E9954;
// extern UNK_TYPE B_800E9958;
// extern UNK_TYPE B_800E995C;
// extern UNK_TYPE B_800E9960;
// extern UNK_TYPE B_800E9964;
// extern UNK_TYPE B_800E9968;
// extern UNK_TYPE B_800E996C;
// extern UNK_TYPE B_800E9970;
// extern UNK_TYPE B_800E9980;
// extern UNK_TYPE B_800E9984;
// extern UNK_TYPE B_800E9988;
// extern UNK_TYPE B_800E998C;
// extern UNK_TYPE B_800E9990;
// extern UNK_TYPE B_800E9994;
// extern UNK_TYPE B_800E9998;
// extern UNK_TYPE B_800E99A0;
// extern UNK_TYPE B_800E99B8;
// extern UNK_TYPE B_800E99C0;
// extern UNK_TYPE B_800E99C4;
// extern UNK_TYPE B_800E99D0;
// extern UNK_TYPE B_800E9B80;
// extern UNK_TYPE B_800E9B84;
// extern UNK_TYPE B_800E9B88;
// extern UNK_TYPE B_800E9B90;
// extern UNK_TYPE B_800E9B94;
// extern UNK_TYPE B_800E9BA0;
// extern UNK_TYPE B_800E9BA4;
// extern UNK_TYPE B_800E9BAC;
// extern UNK_TYPE B_800E9BB0;
// extern UNK_TYPE B_800E9BB4;
extern s16 B_800E9BB6;
// extern UNK_TYPE B_800E9BC0;
// extern UNK_TYPE B_800EA0D0;
// extern UNK_TYPE B_800EA280;
// extern UNK_TYPE B_800EA284;
extern struct_800EA290 B_800EA290;
// extern UNK_TYPE B_800EB290;
extern s32 B_800EB4CC;
extern s32 B_800EB4D0;
extern OSContPad B_800EB4D8[MAXCONTROLLERS];
extern u32 B_800EB4F0;
// extern UNK_TYPE B_800EB4F4;
// extern UNK_TYPE B_800EB4F8;
// extern UNK_TYPE B_800EB4F9;
// extern UNK_TYPE B_800EB50A;
// extern UNK_TYPE B_800EB50B;
// extern UNK_TYPE B_800EB64C;
// extern UNK_TYPE B_800EB64D;
// extern UNK_TYPE B_800EB660;
extern struct_800EB670 B_800EB670;
extern u32 B_800EBCF0;
extern Gfx* B_800EBCF4; // main display list head
extern u16 B_800EBCF8[];
// extern UNK_TYPE B_800EBD02;
// extern UNK_TYPE B_800EBD03;
// extern UNK_TYPE B_800EBD04;
// extern UNK_TYPE B_800EBD05;
// extern UNK_TYPE B_800EBD07;
// extern UNK_TYPE B_800EBD0B;
// extern UNK_TYPE B_800EBD10;
// extern UNK_TYPE B_800EBD14;
// extern UNK_TYPE B_800EBD15;
extern u8 B_800EBD16[];
extern OSThread B_800EBD20;
extern OSMesg B_800EBED0[8];
extern struct_800EBEF0 B_800EBEF0;
extern s16 B_800ED430;
extern STACK(B_800ED440, 0x2000);
extern UNK_PTR B_800EF440[2];
// extern UNK_TYPE B_800EF448;
// extern UNK_TYPE B_800EF449;
// extern UNK_TYPE B_800EF548;
// extern UNK_TYPE B_800EF54C;

// extern UNK_TYPE B_800EF550;
extern u16 B_800EF554;
// extern UNK_TYPE B_800EF556;
extern struct_800EF560 B_800EF560[9];

// extern UNK_TYPE B_800EFCB0;
extern s32 B_800EFCD0;
extern STACK(B_800EFCE0, 0x2000);
extern u8 B_800F1CE0;
// extern UNK_TYPE B_800F1CE8;
// extern UNK_TYPE B_800F1CE9;
extern struct_800F1DF8 *B_800F1DF8;
// extern UNK_TYPE B_800F1E00;
extern u16 B_800F1E20;
extern STACK(B_800F1E30, 0x2000);
// extern UNK_TYPE B_800F3E30;
// extern UNK_TYPE B_800F3E32;
// extern UNK_TYPE B_800F3E34;
extern OSMesgQueue B_800F3E38;
extern struct_800F3E50 *B_800F3E50;
// extern UNK_TYPE B_800F3E54;
// extern UNK_TYPE B_800F3E56;
// extern UNK_TYPE B_800F3E5C;
extern OSMesg B_800F3E60[1];
extern u16 B_800F3E64[];
// extern UNK_TYPE B_800F3E6E;
// extern UNK_TYPE B_800F3E6F;
// extern UNK_TYPE B_800F3E70;
// extern UNK_TYPE B_800F3E71;
// extern UNK_TYPE B_800F3E73;
// extern UNK_TYPE B_800F3E77;
extern u8 B_800F3E78[];
// extern UNK_TYPE B_800F3E7C;
// extern UNK_TYPE B_800F3E90;
// extern UNK_TYPE B_800F3E94;
// extern UNK_TYPE B_800F3E98;
// extern UNK_TYPE B_800F3E9C;
// extern UNK_TYPE B_800F3EA0;
// extern UNK_TYPE B_800F4890;
// extern UNK_TYPE B_800F4894;
extern OSMesgQueue B_800F4898;
extern struct_800FAF98_unk_64 B_800F48B0;
extern UNK_TYPE2 B_800F48B8[4];
extern UNK_PTR B_800F48C0;
extern u16 B_800F48C4[];
// extern UNK_TYPE B_800F48D0;
// extern UNK_TYPE B_800F5350;
extern OSContStatus B_800F5358[4];
// extern UNK_TYPE B_800F5370;
// extern UNK_TYPE B_800F5371;
// extern UNK_TYPE B_800F5372;
// extern UNK_TYPE B_800F5373;
// extern UNK_TYPE B_800F5374;
// extern UNK_TYPE B_800F5378;
// extern UNK_TYPE B_800F5384;
// extern UNK_TYPE B_800F538E;
// extern UNK_TYPE B_800F6C70;
// extern UNK_TYPE B_800F6C71;
// extern UNK_TYPE B_800F6CD4;
extern u16 B_800F6CD8[4];
// extern UNK_TYPE B_800F6CDE;
// extern UNK_TYPE B_800F6CE0;
// extern UNK_TYPE B_800F6CF0;
// extern UNK_TYPE B_800F6CF1;
// extern UNK_TYPE B_800F6CF2;
// extern UNK_TYPE B_800F72F0;
extern struct_800F7470 B_800F7470;
// extern UNK_TYPE B_800F7474;
// extern UNK_TYPE B_800F7478;
// extern UNK_TYPE B_800F747C;
// extern UNK_TYPE B_800F7480;
// extern UNK_TYPE B_800F7484;
// extern UNK_TYPE B_800F7485;
// extern UNK_TYPE B_800F7488;
// extern UNK_TYPE B_800F748C;
extern STACK(B_800F7490, 0xC00);
// extern UNK_TYPE B_800F8C90;
extern struct_800FACE0 B_800FACE0;
extern STACK(B_800F8CE0, 0x2000);
// extern UNK_TYPE B_800FAD28;
extern u32 B_800FAD2C;
// extern UNK_TYPE B_800FAD30;
extern UNK_TYPE1 B_800FAD31[4];
// extern UNK_TYPE B_800FAD36;
// extern UNK_TYPE B_800FAD38;
// extern UNK_TYPE B_800FAD40;
// extern UNK_TYPE B_800FAD41;
// extern UNK_TYPE B_800FAE50;
// extern UNK_TYPE B_800FAE60;
// extern UNK_TYPE B_800FAE64;
// extern UNK_TYPE B_800FAE68;
// extern UNK_TYPE B_800FAE6C;
// extern UNK_TYPE B_800FAE70;
// extern UNK_TYPE B_800FAE74;
// extern UNK_TYPE B_800FAE78;
// extern UNK_TYPE B_800FAE79;
extern OSScTask B_800FAE80[];
extern u16 B_800FAF88[];
// extern UNK_TYPE B_800FAF92;
extern OSMesgQueue *B_800FAF94;

// extern UNK_TYPE B_800FAF9C;
extern STACK(B_800FAFA0, 0x400);
// extern UNK_TYPE B_800FB3A0;
// extern UNK_TYPE B_800FB3A4;
// extern UNK_TYPE B_800FB3A8;
// extern UNK_TYPE B_800FB3AC;
// extern UNK_TYPE B_800FB3B0;
// extern UNK_TYPE B_800FB3B4;
// extern UNK_TYPE B_800FB3B8;
// extern UNK_TYPE B_800FB3BC;
// extern UNK_TYPE B_800FB3C0;
// extern UNK_TYPE B_800FB3C4;
// extern UNK_TYPE B_800FB3C8;
// extern UNK_TYPE B_800FB3CC;
// extern UNK_TYPE B_800FB3D0;
extern Gfx B_800FB670[][0x1000];
extern u16 B_80113670[4][0x10];
extern u64 B_801136F0[];
extern u32 B_801236F0;
// extern UNK_TYPE B_80123700;
// extern UNK_TYPE B_80123704;
// extern UNK_TYPE B_80123706;
// extern UNK_TYPE B_80123708;
// extern UNK_TYPE B_8012370A;
// extern UNK_TYPE B_8012370C;
// extern UNK_TYPE B_80123720;
// extern UNK_TYPE B_80123725;
// extern UNK_TYPE B_80123726;
// extern UNK_TYPE B_8012372C;
// extern UNK_TYPE B_80123744;
// extern UNK_TYPE B_8012374A;
// extern UNK_TYPE B_8012374B;
// extern UNK_TYPE B_8012374C;
// extern UNK_TYPE B_8012374D;
// extern UNK_TYPE B_8012374E;
// extern UNK_TYPE B_8012374F;
// extern UNK_TYPE B_80123750;
// extern UNK_TYPE B_80123790;
// extern UNK_TYPE B_80123794;
// extern UNK_TYPE B_801237D4;
// extern UNK_TYPE B_80123840;
// extern UNK_TYPE B_80123864;
// extern UNK_TYPE B_8012386C;
// extern UNK_TYPE B_80123870;
// extern UNK_TYPE B_8012393D;
// extern UNK_TYPE B_8012393E;
// extern UNK_TYPE B_80123942;
// extern UNK_TYPE B_80123992;
// extern UNK_TYPE B_80123994;
// extern UNK_TYPE B_8012399B;
// extern UNK_TYPE B_80123B10;
// extern UNK_TYPE B_80123B11;
// extern UNK_TYPE B_80123B12;
// extern UNK_TYPE B_80123B54;



#endif
