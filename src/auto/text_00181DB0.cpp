/* 21 functions from 0x00181DB0 to 0x00182CC0, found by Ghidra. */
#include "common.h"
struct C_001827E0 {
    char pad0[0x4C];
    int unk4C;
    int unk50;
    void func_001827E0(int a0, int a1);
};

struct C_00182800 {
    int unk0;
    void func_00182800(void);
};


void C_001827E0::func_001827E0(int a0, int a1) {
    unk50 = a1;
    unk4C = a0;
}

void C_00182800::func_00182800(void) {
    extern int D_0028933C;
    unk0 = (int)&D_0028933C;
}
