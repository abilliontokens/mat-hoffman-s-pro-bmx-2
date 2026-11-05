/* 7 functions from 0x00130C90 to 0x00131510, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001314E0 {
    void func_001314E0(undefined4 *param_1);
};

struct S_001313C0_Data {
    int w[10];
};

struct C_001313C0 {
    char pad0[0x9C];
    int f9C;
    char padA0[0xC];
    S_001313C0_Data fAC;
    void func_001313C0(S_001313C0_Data *src);
};


void C_001313C0::func_001313C0(S_001313C0_Data *src)
{
    if (src->w[4] != 0) {
        f9C = (f9C == 0);
    }
    fAC = *src;
}

void C_001314E0::func_001314E0(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = *(undefined4 *)(in_ECX + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = 0;
  return;
}
