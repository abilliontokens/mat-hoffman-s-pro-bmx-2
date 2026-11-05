/* 28 functions from 0x001358A0 to 0x00136860, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00135A60 {
    undefined4 func_00135A60(byte param_1);
};

struct C_00135D70 {
    char pad0[0xC];
    int unkC;
    int unk10;
    void func_00135D70(int a0, int a1);
};


/* binding table: 9 rows of 0x4a entries; rows 1..8 are the per-player ones */
struct C_00135CB0 {
    int tbl[9][0x4a];
    void func_00135CB0();
    void func_00135D00(int a0, int a1);
    void func_00135D30(int idx, int *out, int row);
};
extern int D_002BA700;
extern void *D_002A8490;
extern int D_00284834;

struct S_00136300_Target {
    virtual void v0(int a);
};

struct C_00136300 {
    S_00136300_Target *f0;
    int f4;
    void func_00136300(void);
};

struct C_00135D90 {
    char pad0[0x24];
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    void func_00135D90(float a, float b);
};

/* ControlInterface */
struct C_00135E00 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14[8];
    int f34;
    int f38;
    int f3C;
    char pad40[0xc80];
    int fCC0;
    int fCC4[8];
    int fCE4[8];
    C_00135E00 *func_00135E00(void);
};

undefined4 C_00135A60::func_00135A60(byte param_1)
{
  int func_00135740(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00135740();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int func_00135C70(int param_1, int param_2, int *param_3, int param_4)
{
    int __stdcall func_0015AC20(int);
    if ((*param_3 == param_1) && (param_3[1] == param_2)) {
        if (param_2 != 0) {
            return 1;
        }
        if (*(int *)(*(int *)((char *)D_002A8490 + 8) + 0x38) != 0) {
            if (func_0015AC20(param_4) != 0) {
                return 1;
            }
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

void C_00135CB0::func_00135D00(int param_1, int param_2)
{
    int *puVar1;
    int iVar2;
    if (param_1 >= 0 && param_1 < 0x4a) {
        puVar1 = (int *)((char *)this + 0x128 + param_1 * 4);
        iVar2 = 8;
        do {
            *puVar1 = param_2;
            puVar1 = puVar1 + 0x4a;
            iVar2 = iVar2 - 1;
        } while (iVar2 != 0);
    }
}

void C_00135CB0::func_00135D30(int idx, int *out, int row)
{
    if (idx >= 0 && idx < 0x4a && row < 8) {
        *out = tbl[row + 1][idx];
    } else {
        *out = -1;
    }
}

void C_00135D70::func_00135D70(int a0, int a1) {
    unkC = a0;
    unk10 = a1;
}

int func_00135E80()
{
    return ++D_002BA700;
}

void C_00136300::func_00136300(void)
{
    if (*(int *)((char *)D_002A8490 + 8) != 0 && f0 != 0) {
        f0->v0(f4);
    }
}

