/* 35 functions from 0x001B0A20 to 0x001B19C0, found by Ghidra. */
#include "common.h"
struct C_001B15E0 {
    char pad0[0x9C];
    float unk9C;
    float func_001B15E0(void);
};

struct C_001B0E90 {
    int unk0;
    void func_001B0E90(void);
};


void C_001B0E90::func_001B0E90(void) {
    extern int D_0028C6E8;
    unk0 = (int)&D_0028C6E8;
}

int __stdcall func_001B1190(int a0, int a1, int a2, int a3, int a4, int a5, int a6) {
    return 0;
}

float C_001B15E0::func_001B15E0(void) {
    return unk9C;
}

