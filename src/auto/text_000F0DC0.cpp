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
