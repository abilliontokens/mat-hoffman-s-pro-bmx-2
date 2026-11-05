/* 18 functions from 0x001A3BF0 to 0x001A4B60, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001A4B30 {
    void func_001A4B30(void);
};

struct C_001A3D80 {
    undefined4 func_001A3D80(byte param_1);
};


undefined4 C_001A3D80::func_001A3D80(byte param_1)
{
  int func_001A2620(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001A2620();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001A4B30::func_001A4B30(void)
{
  int func_00133D80(...);
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xa7) = *(byte *)(in_ECX + 0xa7) & 0xdf;
  func_00133D80(*(undefined4 *)(in_ECX + 0x54));
  *(undefined4 *)(*(int *)(in_ECX + 0x54) + 4) = 0;
  return;
}

