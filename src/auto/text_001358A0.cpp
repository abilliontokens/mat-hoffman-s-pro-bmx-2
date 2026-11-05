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

int func_00135C70(int param_1, int param_2, int *param_3, int param_4)
{
    int __stdcall func_0015AC20(int);
    if ((*param_3 == param_1) && (param_3[1] == param_2)) {
        if (param_2 != 0) {
            return 1;
        }
        if ((*(int *)(*(int *)((char *)D_002A8490 + 8) + 0x38) != 0) && (func_0015AC20(param_4) != 0)) {
            return 1;
        }
    }
    return 0;
}

void C_00135CB0::func_00135CB0()
{
    int *in_ECX = (int *)this;
    int *puVar1;
    int *puVar2;
    int iVar3;
    int iVar4;
    puVar2 = (int *)((char *)in_ECX + 0xa68);
    iVar4 = 0x4a;
    do {
        puVar2[-0x29a] = -1;
        puVar1 = puVar2 - 0x250;
        iVar3 = 8;
        do {
            *puVar1 = -1;
            puVar1 = puVar1 + 0x4a;
            iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
        *puVar2 = -1;
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
}

void C_00135D70::func_00135D70(int a0, int a1) {
    unkC = a0;
    unk10 = a1;
}

int func_00135E80()
{
    return ++D_002BA700;
}

