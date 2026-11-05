/* 10 functions from 0x00049470 to 0x0004A360, found by Ghidra. */
#include "common.h"
struct C_00049BD0 {
    int unk0;
    int unk4;
    char pad8[0x78];
    int unk80;
    int unk84;
    int unk88;
    int unk8C;
    C_00049BD0* func_00049BD0(void);
};


C_00049BD0* C_00049BD0::func_00049BD0(void) {
    extern int D_00277184;
    unk0 = (int)&D_00277184;
    unk4 = 0;
    unk80 = 0;
    unk84 = 0;
    unk88 = 0;
    unk8C = 0;
    return this;
}
