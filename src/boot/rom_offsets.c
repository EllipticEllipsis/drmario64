#include "segment_symbols.h"
#include "rom_offsets.h"


RomOffsetPair D_8000E740 = {
    SEGMENT_ROM_START(segment_1A3610),
    SEGMENT_ROM_END(segment_1A3610)
};

RomOffsetPair D_8000E748 = {
    SEGMENT_ROM_START(segment_1A0D40),
    SEGMENT_ROM_END(segment_1A0D40)
};

RomOffsetPair D_8000E750 = {
    SEGMENT_ROM_START(segment_1A20C0),
    SEGMENT_ROM_END(segment_1A20C0)
};

RomOffsetPair D_8000E758 = {
    SEGMENT_ROM_START(segment_212B20),
    SEGMENT_ROM_END(segment_212B20)
};

RomOffsetPair D_8000E760 = {
    SEGMENT_ROM_START(segment_21B120),
    SEGMENT_ROM_END(segment_21B120)
};

RomOffsetPair D_8000E768 = {
    SEGMENT_ROM_START(segment_1B0E60),
    SEGMENT_ROM_END(segment_1B0E60)
};

RomOffsetPair D_8000E770 = {
    SEGMENT_ROM_START(segment_211E10),
    SEGMENT_ROM_END(segment_211E10)
};

RomOffsetPair D_8000E778[] = {
    { 0x00000000, 0x00000000 },
    { SEGMENT_ROM_START(segment_22DA20), SEGMENT_ROM_END(segment_22DA20) },
    { SEGMENT_ROM_START(segment_21F6D0), SEGMENT_ROM_END(segment_21F6D0) },
    { SEGMENT_ROM_START(segment_24E620), SEGMENT_ROM_END(segment_24E620) },
    { SEGMENT_ROM_START(segment_2264C0), SEGMENT_ROM_END(segment_2264C0) },
    { SEGMENT_ROM_START(segment_240160), SEGMENT_ROM_END(segment_240160) },
    { SEGMENT_ROM_START(segment_23B7E0), SEGMENT_ROM_END(segment_23B7E0) },
    { SEGMENT_ROM_START(segment_257670), SEGMENT_ROM_END(segment_257670) },
    { SEGMENT_ROM_START(segment_25E690), SEGMENT_ROM_END(segment_25E690) },
    { SEGMENT_ROM_START(segment_25E690), SEGMENT_ROM_END(segment_25E690) },
    { SEGMENT_ROM_START(segment_25E690), SEGMENT_ROM_END(segment_25E690) },
    { 0x00000000, 0x00000000 },
    { 0x00000000, 0x00000000 },
    { SEGMENT_ROM_START(segment_22DA20), SEGMENT_ROM_END(segment_22DA20) },
    { SEGMENT_ROM_START(segment_21F6D0), SEGMENT_ROM_END(segment_21F6D0) },
    { SEGMENT_ROM_START(segment_24E620), SEGMENT_ROM_END(segment_24E620) },
    { SEGMENT_ROM_START(segment_2264C0), SEGMENT_ROM_END(segment_2264C0) },
    { SEGMENT_ROM_START(segment_245AE0), SEGMENT_ROM_END(segment_245AE0) },
    { SEGMENT_ROM_START(segment_234CF0), SEGMENT_ROM_END(segment_234CF0) },
    { SEGMENT_ROM_START(segment_257670), SEGMENT_ROM_END(segment_257670) },
    { SEGMENT_ROM_START(segment_25E690), SEGMENT_ROM_END(segment_25E690) },
    { SEGMENT_ROM_START(segment_25E690), SEGMENT_ROM_END(segment_25E690) },
    { SEGMENT_ROM_START(segment_25E690), SEGMENT_ROM_END(segment_25E690) },
    { 0x00000000, 0x00000000 },
};

RomOffsetPair D_8000E838[] = {
    { SEGMENT_ROM_START(n64_wave_tables), SEGMENT_ROM_END(n64_wave_tables) }, // N64WaveTables
    { SEGMENT_ROM_START(n64_ptr_tables_v2), SEGMENT_ROM_END(n64_ptr_tables_v2) }, // N64PtrTables
    { SEGMENT_ROM_START(segment_172130), SEGMENT_ROM_END(segment_172130) },
    { SEGMENT_ROM_START(segment_172D60), SEGMENT_ROM_END(segment_172D60) },
    { SEGMENT_ROM_START(segment_177420), SEGMENT_ROM_END(segment_177420) },
    { SEGMENT_ROM_START(segment_17C1E0), SEGMENT_ROM_END(segment_17C1E0) },
    { SEGMENT_ROM_START(segment_17E090), SEGMENT_ROM_END(segment_17E090) },
    { SEGMENT_ROM_START(segment_184FF0), SEGMENT_ROM_END(segment_184FF0) },
    { SEGMENT_ROM_START(segment_1750C0), SEGMENT_ROM_END(segment_1750C0) },
    { SEGMENT_ROM_START(segment_179620), SEGMENT_ROM_END(segment_179620) },
    { SEGMENT_ROM_START(segment_17D130), SEGMENT_ROM_END(segment_17D130) },
    { SEGMENT_ROM_START(segment_181840), SEGMENT_ROM_END(segment_181840) },
    { SEGMENT_ROM_START(segment_186FF0), SEGMENT_ROM_END(segment_186FF0) },
    { SEGMENT_ROM_START(segment_188FF0), SEGMENT_ROM_END(segment_188FF0) },
    { SEGMENT_ROM_START(segment_189D40), SEGMENT_ROM_END(segment_189D40) },
    { SEGMENT_ROM_START(segment_17B790), SEGMENT_ROM_END(segment_17B790) },
    { SEGMENT_ROM_START(segment_18CB40), SEGMENT_ROM_END(segment_18CB40) },
    { SEGMENT_ROM_START(segment_18F160), SEGMENT_ROM_END(segment_18F160) },
    { SEGMENT_ROM_START(segment_1906E0), SEGMENT_ROM_END(segment_1906E0) },
    { SEGMENT_ROM_START(segment_1911D0), SEGMENT_ROM_END(segment_1911D0) },
    { SEGMENT_ROM_START(segment_1936C0), SEGMENT_ROM_END(segment_1936C0) },
    { SEGMENT_ROM_START(segment_1937F0), SEGMENT_ROM_END(segment_1937F0) },
    { SEGMENT_ROM_START(segment_194070), SEGMENT_ROM_END(segment_194070) },
    { SEGMENT_ROM_START(segment_194150), SEGMENT_ROM_END(segment_194150) },
    { SEGMENT_ROM_START(segment_194910), SEGMENT_ROM_END(segment_194910) },
    { SEGMENT_ROM_START(segment_195290), SEGMENT_ROM_END(segment_195290) },
    { SEGMENT_ROM_START(segment_18DB90), SEGMENT_ROM_END(segment_18DB90) },
    { SEGMENT_ROM_START(segment_2F96A0), SEGMENT_ROM_END(segment_2F96A0) },
    { SEGMENT_ROM_START(segment_2FD060), SEGMENT_ROM_END(segment_2FD060) },
    { SEGMENT_ROM_START(segment_2FEC70), SEGMENT_ROM_END(segment_2FEC70) },
    { SEGMENT_ROM_START(segment_301920), SEGMENT_ROM_END(segment_301920) },
    { SEGMENT_ROM_START(segment_303A60), SEGMENT_ROM_END(segment_303A60) },
    { SEGMENT_ROM_START(segment_3057A0), SEGMENT_ROM_END(segment_3057A0) },
    { SEGMENT_ROM_START(segment_307ED0), SEGMENT_ROM_END(segment_307ED0) },
    { SEGMENT_ROM_START(segment_30A220), SEGMENT_ROM_END(segment_30A220) },
    { SEGMENT_ROM_START(segment_30BE80), SEGMENT_ROM_END(segment_30BE80) },
    { SEGMENT_ROM_START(segment_30E3A0), SEGMENT_ROM_END(segment_30E3A0) },
    { SEGMENT_ROM_START(segment_310250), SEGMENT_ROM_END(segment_310250) },
    { SEGMENT_ROM_START(segment_311DC0), SEGMENT_ROM_END(segment_311DC0) },
    { SEGMENT_ROM_START(segment_3142D0), SEGMENT_ROM_END(segment_3142D0) },
    { SEGMENT_ROM_START(segment_3165B0), SEGMENT_ROM_END(segment_3165B0) },
    { SEGMENT_ROM_START(segment_3185A0), SEGMENT_ROM_END(segment_3185A0) },
    { SEGMENT_ROM_START(segment_31AB50), SEGMENT_ROM_END(segment_31AB50) },
    { SEGMENT_ROM_START(segment_326990), SEGMENT_ROM_END(segment_326990) },
    { SEGMENT_ROM_START(segment_327CE0), SEGMENT_ROM_END(segment_327CE0) },
    { SEGMENT_ROM_START(segment_328B80), SEGMENT_ROM_END(segment_328B80) },
    { SEGMENT_ROM_START(segment_3299F0), SEGMENT_ROM_END(segment_3299F0) },
    { SEGMENT_ROM_START(segment_2CEA50), SEGMENT_ROM_END(segment_2CEA50) },
    { SEGMENT_ROM_START(segment_2D3E80), SEGMENT_ROM_END(segment_2D3E80) },
    { SEGMENT_ROM_START(segment_2D7830), SEGMENT_ROM_END(segment_2D7830) },
    { SEGMENT_ROM_START(segment_2DC490), SEGMENT_ROM_END(segment_2DC490) },
    { SEGMENT_ROM_START(segment_2E6500), SEGMENT_ROM_END(segment_2E6500) },
    { SEGMENT_ROM_START(segment_2F8E80), SEGMENT_ROM_END(segment_2F8E80) },
    { SEGMENT_ROM_START(segment_195620), SEGMENT_ROM_END(segment_195620) },
    { SEGMENT_ROM_START(segment_266490), SEGMENT_ROM_END(segment_266490) },
    { SEGMENT_ROM_START(segment_26FDF0), SEGMENT_ROM_END(segment_26FDF0) },
    { SEGMENT_ROM_START(segment_27A310), SEGMENT_ROM_END(segment_27A310) },
    { SEGMENT_ROM_START(segment_2866D0), SEGMENT_ROM_END(segment_2866D0) },
    { SEGMENT_ROM_START(segment_2990C0), SEGMENT_ROM_END(segment_2990C0) },
    { SEGMENT_ROM_START(segment_29DE20), SEGMENT_ROM_END(segment_29DE20) },
    { SEGMENT_ROM_START(segment_2A2430), SEGMENT_ROM_END(segment_2A2430) },
    { SEGMENT_ROM_START(segment_2A93C0), SEGMENT_ROM_END(segment_2A93C0) },
    { SEGMENT_ROM_START(segment_2AF9A0), SEGMENT_ROM_END(segment_2AF9A0) },
    { SEGMENT_ROM_START(segment_2BD670), SEGMENT_ROM_END(segment_2BD670) },
    { SEGMENT_ROM_START(segment_2C9600), SEGMENT_ROM_END(segment_2C9600) },
    { SEGMENT_ROM_START(segment_2CC150), SEGMENT_ROM_END(segment_2CC150) },
};

RomOffsetPair D_8000EA48 = {
    SEGMENT_ROM_START(segment_329FF0),
    SEGMENT_ROM_END(segment_329FF0)
};