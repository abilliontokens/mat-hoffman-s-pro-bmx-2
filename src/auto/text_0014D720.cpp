/* 5 functions from 0x0014D720 to 0x0014E630, found by Ghidra. */
#include "common.h"

extern int D_002BF278;

struct C_0013E9B0 {
    void func_0013E9B0(int param_1);
};

struct C_0014E1C0 {
    char pad0[0x21d8];
    int *unk21D8;
    void func_0014E1C0(C_0013E9B0 **param_1, int param_2);
};

void C_0014E1C0::func_0014E1C0(C_0013E9B0 **param_1, int param_2)
{
    for (int i = 0; i < param_2; i++) {
        param_1[i]->func_0013E9B0(unk21D8[i]);
    }
    D_002BF278 += param_2;
}
