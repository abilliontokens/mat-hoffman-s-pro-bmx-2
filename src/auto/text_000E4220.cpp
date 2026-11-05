/* 6 functions from 0x000E4220 to 0x000E51B0, found by Ghidra. */
#include "common.h"

struct C_000E5150_Slots {
    char pad0[0x62C];
    int f62C[3];
    int f638[1];
};

struct C_0005C020 {
    C_000E5150_Slots *func_0005C020(int param);
};

struct C_000E5150_Mgr {
    char pad0[0x2C0];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
};

struct C_000E5150_Global {
    char pad0[0x2E0];
    C_000E5150_Mgr *f2E0;
};

extern C_000E5150_Global *D_002A8490;
