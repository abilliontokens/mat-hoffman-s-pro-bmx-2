/* 3 functions from 0x000E9180 to 0x000EA070, found by Ghidra. */
#include "common.h"
struct C_000E9FD0 {
    char pad0[0x784];
    int unk784;
    void func_000E9FD0(void);
};


struct C_001B1980 {
    void func_001B1980(void);
};

struct C_000E9FE0 {
    char pad0[0x340];
    C_001B1980 *unk340;
    C_001B1980 *unk344;
    C_001B1980 *unk348;
    C_001B1980 *unk34C;
    C_001B1980 *unk350;
    char pad354[0x12C];
    int unk480;
    char pad484[0xC];
    int unk490;
    int unk494;
    int unk498;
    int unk49C;
    int unk4A0;
    char pad4A4[0x24];
    int unk4C8;
    int unk4CC;
    char pad4D0[0x2B8];
    int unk788;
    void func_000E86C0(void);
    void func_000E9FE0(void);
};

void C_000E9FD0::func_000E9FD0(void) {
    int func_001BF220(...);
    unk784 = 1;
    func_001BF220();
}

void C_000E9FE0::func_000E9FE0(void) {
    func_000E86C0();
    unk490 = 0;
    unk494 = 255;
    unk498 = unk480;
    unk49C = 0;
    unk4A0 = 0;
    unk34C->func_001B1980();
    unk350->func_001B1980();
    unk340->func_001B1980();
    unk344->func_001B1980();
    unk348->func_001B1980();
    unk4C8 = 0;
    unk4CC = 0;
    unk788 = 1;
}

