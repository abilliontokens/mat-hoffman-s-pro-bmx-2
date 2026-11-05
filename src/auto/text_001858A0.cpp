/* 16 functions from 0x001858A0 to 0x001867D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00186540 {
    void func_00186540(int param_1);
};


void C_00186540::func_00186540(int param_1)
{
  int func_001E8A44(...);
  int in_ECX = (int)this;
  undefined4 uVar1;
  
  *(int *)(in_ECX + 0x28) = param_1;
  if (0 < param_1) {
    uVar1 = func_001E8A44(param_1 << 4);
    *(undefined4 *)(in_ECX + 0x30) = uVar1;
    uVar1 = func_001E8A44(param_1 * 4);
    *(undefined4 *)(in_ECX + 0x34) = uVar1;
  }
  return;
}
