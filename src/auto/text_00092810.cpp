/* 21 functions from 0x00092810 to 0x00093620, found by Ghidra. */
#include "common.h"
struct C_000928E0 {
    char pad0[0x254];
    int unk254;
    int func_000928E0(void);
};

struct C_000928D0 {
    char pad0[0x150];
    int unk150;
    int func_000928D0(void);
};


int C_000928D0::func_000928D0(void) {
    return (int)&unk150;
}

int C_000928E0::func_000928E0(void) {
    return (int)&unk254;
}

void __stdcall func_00093280(int a0) {
}

