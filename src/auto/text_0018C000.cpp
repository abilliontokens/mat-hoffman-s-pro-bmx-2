/* 25 functions from 0x0018C000 to 0x0018CF40, found by Ghidra. */
#include "common.h"
struct C_0018C800 {
    char pad0[0x24];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    void func_0018C800(void);
};

struct C_0018C7F0 {
    int unk0;
    void func_0018C7F0(void);
};


void C_0018C7F0::func_0018C7F0(void) {
    extern int D_0028A784;
    int func_00157660(...);
    unk0 = (int)&D_0028A784;
    func_00157660();
}

void C_0018C800::func_0018C800(void) {
    unk24 = -1082130432;
    unk28 = 0;
    unk2C = -1;
    unk30 = -1;
    unk34 = 0;
}

