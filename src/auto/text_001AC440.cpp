/* 16 functions from 0x001AC440 to 0x001ACFE0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001AC790 {
    void func_001AC790(int param_1);
};


void C_001AC790::func_001AC790(int param_1)
{
  int in_ECX = (int)this;
  int *piVar1;
  
  piVar1 = (int *)(param_1 * 0x10 + 0xc + *(int *)(in_ECX + 0x14));
  *piVar1 = *piVar1 + -1;
  return;
}
