#ifndef SEGMENT_SYMBOLS_H
#define SEGMENT_SYMBOLS_H

#include "ultra64.h"
#include "libc/stdint.h"

#define DECLARE_SEGMENT(name)  \
    extern u32 name ## _VRAM[]; \
    extern u32 name ## _VRAM_END[];

#define DECLARE_ROM_SEGMENT(name)   \
    extern u32 name ## _ROM_START[]; \
    extern u32 name ## _ROM_END[];

#define DECLARE_BSS_SEGMENT(name)   \
    extern u32 name ## _BSS_START[]; \
    extern u32 name ## _BSS_END[];

#define SEGMENT_START(segment) (segment ## _VRAM)
#define SEGMENT_END(segment)   (segment ## _VRAM_END)
#define SEGMENT_SIZE(segment)  ((uintptr_t)SEGMENT_END(segment) - (uintptr_t)SEGMENT_START(segment))

#define SEGMENT_ROM_START(segment) ((romoffset_t)segment ## _ROM_START)
#define SEGMENT_ROM_END(segment)   ((romoffset_t)segment ## _ROM_END)
#define SEGMENT_ROM_SIZE(segment)  (SEGMENT_ROM_END(segment) - SEGMENT_ROM_START(segment))

#define SEGMENT_BSS_START(segment) (segment ## _BSS_START)
#define SEGMENT_BSS_END(segment)   (segment ## _BSS_END)
#define SEGMENT_BSS_SIZE(segment)  ((uintptr_t)SEGMENT_BSS_END(segment) - (uintptr_t)SEGMENT_BSS_START(segment))

DECLARE_SEGMENT(header)
DECLARE_ROM_SEGMENT(header)
DECLARE_BSS_SEGMENT(header)

DECLARE_SEGMENT(ipl3)
DECLARE_ROM_SEGMENT(ipl3)
DECLARE_BSS_SEGMENT(ipl3)

DECLARE_SEGMENT(entry)
DECLARE_ROM_SEGMENT(entry)
DECLARE_BSS_SEGMENT(entry)

DECLARE_SEGMENT(boot)
DECLARE_ROM_SEGMENT(boot)
DECLARE_BSS_SEGMENT(boot)

DECLARE_SEGMENT(dma_table)
DECLARE_ROM_SEGMENT(dma_table)
DECLARE_BSS_SEGMENT(dma_table)

DECLARE_SEGMENT(main_segment)
DECLARE_ROM_SEGMENT(main_segment)
DECLARE_BSS_SEGMENT(main_segment)

DECLARE_ROM_SEGMENT(main_segment_compressed)

DECLARE_SEGMENT(segment_4F980)
DECLARE_ROM_SEGMENT(segment_4F980)
DECLARE_BSS_SEGMENT(segment_4F980)

#endif
