/* 9 functions from 0x001D2A40 to 0x001D3860, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D3700 {
    void func_001D3700(int param_1, int param_2);
};


void C_001D3700::func_001D3700(int param_1, int param_2)
{
  int in_ECX = (int)this;
  int *piVar1;
  
  piVar1 = *(int **)(in_ECX + 0x44);
  *(int *)(in_ECX + 0x54) = param_1;
  *(int *)(in_ECX + 0x58) = param_2;
  if (piVar1 != (int *)0x0) {
    *(int *)(in_ECX + 0x5c) = *piVar1 + param_1;
    *(int *)(in_ECX + 0x60) = piVar1[1] + param_2;
  }
  return;
}
