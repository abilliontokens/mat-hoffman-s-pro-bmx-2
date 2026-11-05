/* 32 functions from 0x001941F0 to 0x00195190, found by Ghidra. */
#include "common.h"
struct C_00194F90 {
    char pad0[0x48];
    int unk48;
    void func_00194F90(int a0);
};

struct C_00194DB0 {
    int unk0;
    void func_00194DB0(void);
};

struct C_00194C60 {
    char pad0[0x24];
    int unk24;
    void func_00194C60(void);
};


void C_00194C60::func_00194C60(void) {
    unk24 = 0;
}

void C_00194DB0::func_00194DB0(void) {
    extern int D_0028AED0;
    int func_0012B540(...);
    unk0 = (int)&D_0028AED0;
    func_0012B540();
}

void C_00194F90::func_00194F90(int a0) {
    unk48 = a0;
}

