/* 15 functions from 0x00134A10 to 0x001358A0, found by Ghidra. */
#include "common.h"
struct C_00135850 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    C_00135850* func_00135850(void);
};

struct C_00135420 {
    char pad0[0x8710];
    int unk8710;
    int func_00135420(void);
};

struct C_00135410 {
    char pad0[0x710];
    int unk710;
    int func_00135410(void);
};

struct C_00135400 {
    char pad0[0x10];
    int unk10;
    int func_00135400(void);
};


int C_00135400::func_00135400(void) {
    return (int)&unk10;
}

int C_00135410::func_00135410(void) {
    return (int)&unk710;
}

int C_00135420::func_00135420(void) {
    return (int)&unk8710;
}

C_00135850* C_00135850::func_00135850(void) {
    extern int D_002847F0;
    unk0 = (int)&D_002847F0;
    unk4 = 0;
    unk8 = 0;
    unkC = 0;
    unk10 = 0;
    unk14 = 0;
    return this;
}

