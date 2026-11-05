/* 5 functions from 0x00162B70 to 0x00163A50, found by Ghidra. */
#include "common.h"

extern int D_0015B970;
extern int D_0015BA70;
void *func_001E8A44(int size);
void __stdcall func_00011FF0(void *p, int step, int count, int *ctor);

struct S_00162DF0_A {
    char pad0[0x18];
};

struct S_00162DF0_B {
    char pad0[0x18];
};

struct C_00162DF0 {
    char pad0[0xC];
    S_00162DF0_A *unkC;
    S_00162DF0_B *unk10;
    char pad14[4];
    void **unk18;
    char pad1C[0xC];
    int unk28;
    void func_00162DF0(int count);
};
