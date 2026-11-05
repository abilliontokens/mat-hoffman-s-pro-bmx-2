/* 20 functions from 0x000261F0 to 0x00026B60, found by Ghidra. */
#include "common.h"
struct C_00026280 {
    char pad0[0x3C];
    int unk3C;
    void func_00026280(int a0);
};

struct C_00026270 {
    char pad0[0x30];
    int unk30;
    void func_00026270(int a0);
};


void C_00026270::func_00026270(int a0) {
    unk30 = a0;
}

void C_00026280::func_00026280(int a0) {
    unk3C = a0;
}

