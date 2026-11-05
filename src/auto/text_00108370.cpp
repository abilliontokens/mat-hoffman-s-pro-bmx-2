/* 24 functions from 0x00108370 to 0x00109370, found by Ghidra. */
#include "common.h"
struct C_00108680 {
    char pad0[0xA2C];
    int unkA2C;
    void func_00108680(int a0);
};

struct C_00108670 {
    char pad0[0x20A0];
    int unk20A0;
    int func_00108670(void);
};

struct C_00108660 {
    char pad0[0x20A4];
    int unk20A4;
    int func_00108660(void);
};


int C_00108660::func_00108660(void) {
    return unk20A4;
}

int C_00108670::func_00108670(void) {
    return unk20A0;
}

void C_00108680::func_00108680(int a0) {
    unkA2C = a0;
}

