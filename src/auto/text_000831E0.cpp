/* 18 functions from 0x000831E0 to 0x00083B50, found by Ghidra. */
#include "common.h"
struct C_00083B00 {
    char pad0[0x17C];
    int unk17C;
    int unk180;
    void func_00083B00(int a0);
};

struct C_00083960 {
    char pad0[0x204];
    int unk204;
    void func_00083960(void);
};

struct C_00083950 {
    char pad0[0x200];
    int unk200;
    void func_00083950(void);
};


void C_00083950::func_00083950(void) {
    unk200 = 1;
}

void C_00083960::func_00083960(void) {
    unk204 = 1;
}

void C_00083B00::func_00083B00(int a0) {
    unk17C = 1;
    unk180 = a0;
}

