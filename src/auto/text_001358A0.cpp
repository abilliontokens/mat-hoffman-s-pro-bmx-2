/* 28 functions from 0x001358A0 to 0x00136860, found by Ghidra. */
#include "common.h"
struct C_00135D70 {
    char pad0[0xC];
    int unkC;
    int unk10;
    void func_00135D70(int a0, int a1);
};


struct C_00135CB0 {
    void func_00135CB0();
    void func_00135D00(int a0, int a1);
};
extern int D_002BA700;
extern void *D_002A8490;

void C_00135D70::func_00135D70(int a0, int a1) {
    unkC = a0;
    unk10 = a1;
}

int func_00135E80()
{
    return ++D_002BA700;
}

