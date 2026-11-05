/* 18 functions from 0x00187670 to 0x001884F0, found by Ghidra. */
#include "common.h"
struct C_001884D0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_001884D0* func_001884D0(void);
};


int __stdcall func_00188230(int a0) {
    int __stdcall func_001880A0(int);
    func_001880A0(a0);
    return 1;
}

C_001884D0* C_001884D0::func_001884D0(void) {
    extern int D_00289F70;
    unk4 = 0;
    unk0 = (int)&D_00289F70;
    unk8 = 0;
    unkC = 0;
    return this;
}

