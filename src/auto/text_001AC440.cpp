/* 16 functions from 0x001AC440 to 0x001ACFE0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001AC900 {
    undefined4 func_001AC900(byte param_1);
};

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

undefined4 C_001AC900::func_001AC900(byte param_1)
{
  int func_001AC3D0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001AC3D0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

