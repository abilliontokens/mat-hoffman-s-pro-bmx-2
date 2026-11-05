/* 17 functions from 0x00086530 to 0x000874E0, found by Ghidra. */
#include "common.h"
struct C_000874D0 {
    char pad0[0x40];
    int unk40;
    void func_000874D0(void);
};

struct C_00086C30 {
    char pad0[0x44];
    int unk44;
    void func_00086C30(int a0);
};

struct C_00086C60 {
    char pad0[0x44];
    int unk44;
    int func_00086C60(void);
};


void C_00086C30::func_00086C30(int a0) {
    unk44 = a0;
}

int C_00086C60::func_00086C60(void) {
    return unk44;
}

void C_000874D0::func_000874D0(void) {
    unk40 = 0;
}

