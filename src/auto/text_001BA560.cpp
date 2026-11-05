/* 18 functions from 0x001BA560 to 0x001BB4F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001BA9A0 {
    undefined4 func_001BA9A0(byte param_1);
};

struct C_001BB4D0 {
    void func_001BB4D0(int param_1);
};


undefined4 C_001BA9A0::func_001BA9A0(byte param_1)
{
  int func_001B8480(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001B8480();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001BB4D0::func_001BB4D0(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xf0 + param_1 * 4) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  return;
}
