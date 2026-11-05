/* 21 functions from 0x001884F0 to 0x00189060, found by Ghidra. */
#include "common.h"
struct C_00188700 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_00188700* func_00188700(void);
};


C_00188700* C_00188700::func_00188700(void) {
    extern int D_00289F80;
    unk0 = (int)&D_00289F80;
    unk4 = 0;
    unk8 = 0;
    unkC = 0;
    return this;
}
