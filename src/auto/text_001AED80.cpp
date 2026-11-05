/* 17 functions from 0x001AED80 to 0x001AFCC0, found by Ghidra. */
#include "common.h"
struct C_001AF0B0 {
    int unk0;
    int unk4;
    int unk8;
    C_001AF0B0* func_001AF0B0(void);
};

struct C_001AF320 {
    int unk0;
    void func_001AF320(void);
};


C_001AF0B0* C_001AF0B0::func_001AF0B0(void) {
    extern int D_0028C290;
    unk0 = (int)&D_0028C290;
    unk4 = -1;
    unk8 = 0;
    return this;
}

void C_001AF320::func_001AF320(void) {
    extern int D_0028C2AC;
    int func_00157660(...);
    unk0 = (int)&D_0028C2AC;
    func_00157660();
}
