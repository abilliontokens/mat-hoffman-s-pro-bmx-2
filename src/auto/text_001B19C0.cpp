/* 33 functions from 0x001B19C0 to 0x001B2910, found by Ghidra. */
#include "common.h"
struct C_001B2340 {
    char pad0[0x4];
    int unk4;
    int unk8;
    void func_001B2340(void);
};

struct C_001B2330 {
    int unk0;
    char pad4[0x4];
    int unk8;
    void func_001B2330(void);
};


void C_001B2330::func_001B2330(void) {
    unk8 = unk0;
}

void C_001B2340::func_001B2340(void) {
    unk8 = unk4;
}

