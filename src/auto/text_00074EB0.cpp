/* 7 functions from 0x00074EB0 to 0x00075C70, found by Ghidra. */
#include "common.h"

extern int D_0027850C;
extern int D_00278DF4;

struct C_00075B20 {
    void *vtbl;                  /* 0x00 */
    char pad04[0x14];            /* 0x04 */
    u32 unk18;                   /* 0x18 */
    char pad1C[0x08];            /* 0x1C */
    u32 unk24[8];                /* 0x24 */
    u32 unk44[8];                /* 0x44 */
    u32 unk64[3];                /* 0x64 */
    u32 unk70[3];                /* 0x70 */
    u32 unk7C[3];                /* 0x7C */
    u32 unk88[3];                /* 0x88 */
    u32 unk94[3];                /* 0x94 */
    char padA0[0x0C];            /* 0xA0 */
    u32 unkAC[2];                /* 0xAC */
    u32 unkB4[5];                /* 0xB4 */
    u32 unkC8[5];                /* 0xC8 */
    u32 unkDC[6];                /* 0xDC */
    char padF4[0x04];            /* 0xF4 */
    u32 unkF8;                   /* 0xF8 */
    u32 unkFC;                   /* 0xFC */
    u32 unk100;                  /* 0x100 */
    u32 unk104;                  /* 0x104 */
    u32 unk108;                  /* 0x108 */
    u32 unk10C;                  /* 0x10C */
    u32 unk110;                  /* 0x110 */
    u32 unk114;                  /* 0x114 */
    u32 unk118;                  /* 0x118 */
    u32 unk11C;                  /* 0x11C */
    u32 unk120;                  /* 0x120 */
    u32 unk124;                  /* 0x124 */
    char pad128[0x04];           /* 0x128 */
    u32 unk12C[8];               /* 0x12C */
    u32 unk14C[8];               /* 0x14C */
    u32 unk16C[8];               /* 0x16C */
    char pad18C[0x08];           /* 0x18C */
    u32 unk194;                  /* 0x194 */
    u32 unk198[2];               /* 0x198 */
    u32 unk1A0[2];               /* 0x1A0 */
    u32 unk1A8;                  /* 0x1A8 */
    u32 unk1AC;                  /* 0x1AC */
    char pad1B0[0x04];           /* 0x1B0 */
    u32 unk1B4;                  /* 0x1B4 */
    u32 unk1B8;                  /* 0x1B8 */
    char pad1BC[0x04];           /* 0x1BC */
    u32 unk1C0;                  /* 0x1C0 */
    void *func_00075B20(int param_1);
    void func_00157600(int a0);
};
