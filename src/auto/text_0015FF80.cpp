/* 19 functions from 0x0015FF80 to 0x00160D30, found by Ghidra. */
#include "common.h"
struct C_00160A60 {
    int unk0;
    int unk4;
    int unk8;
    C_00160A60* func_00160A60(void);
};

struct C_00160BF0 {
    int unk0;
    void func_00160BF0(void);
};


C_00160A60* C_00160A60::func_00160A60(void) {
    unk0 = 0;
    unk4 = 0;
    unk8 = 0;
    return this;
}

void C_00160BF0::func_00160BF0(void) {
    extern int D_00287A44;
    unk0 = (int)&D_00287A44;
}
