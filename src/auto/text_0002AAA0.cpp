/* 5 functions from 0x0002AAA0 to 0x0002B1C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern char D_002766F0[];
extern char D_002766E0[];
extern char D_002766D0[];

struct C_00168B90 {
    int func_00168B90(const char *name, float *out);
    int func_00168A10(const char *name, int *out);
};

struct C_0002B140 {
    float unk0;
    int unk4;
    float unk8;
    void func_0002B140(C_00168B90 *param_1);
};

struct C_0002B1A0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int func_0002B1A0(void);
};

struct C_0002B180 {
    void func_0002B180(void);
};


void C_0002B140::func_0002B140(C_00168B90 *param_1) {
    param_1->func_00168B90(D_002766F0, &unk0);
    param_1->func_00168A10(D_002766E0, &unk4);
    param_1->func_00168B90(D_002766D0, &unk8);
}

void C_0002B180::func_0002B180(void)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 8);
  if (*(int *)(in_ECX + 0xc) < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
    return;
  }
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 4);
  return;
}

int C_0002B1A0::func_0002B1A0(void) {
    return unkC >= unk4;
}

