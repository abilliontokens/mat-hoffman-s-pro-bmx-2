/* 6 functions from 0x000F0DC0 to 0x000F1D90, found by Ghidra. */
#include "common.h"

extern int D_0028248C;

struct C_001D6600 {
    void func_001D6600(void);
};

struct S_002B91AC_000F1B60 {
    char pad0[0x34];
    C_001D6600 *f34;
};

extern S_002B91AC_000F1B60 *D_002B91AC;

struct C_000F1B60 {
    void func_000F1B60(void);
};

struct BmxUIPageHPHChoice_000F1D00 {
    void *vtbl;
    char pad4[0x280 - 4];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    int unk294;
    int unk298;
    int unk29C;
    int unk2A0;
    int unk2A4;
    int unk2A8;
    int unk2AC;
    int unk2B0;
    int unk2B4;
    int unk2B8;
    int unk2BC;
    int unk2C0;
    void func_001BE360(int a0);
    BmxUIPageHPHChoice_000F1D00 *func_000F1D00(int a0);
};

void C_000F1B60::func_000F1B60(void) {
    int i;

    for (i = 14; i < 16; i++)
        ((C_001D6600 **)D_002B91AC)[i]->func_001D6600();
    D_002B91AC->f34->func_001D6600();
}

BmxUIPageHPHChoice_000F1D00 *BmxUIPageHPHChoice_000F1D00::func_000F1D00(int a0) {
    int i;
    int *p;
    func_001BE360(1);
    vtbl = &D_0028248C;
    p = &unk2B4;
    for (i = 0; i < 4; i++)
        p[i] = 0;
    unk284 = 0;
    unk288 = 0;
    unk28C = 0;
    unk298 = 0;
    unk29C = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2A8 = 0;
    unk2AC = 0;
    unk2B0 = 0;
    unk290 = 0;
    unk294 = 0;
    unk280 = 1;
    return this;
}

