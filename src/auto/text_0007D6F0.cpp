/* 10 functions from 0x0007D6F0 to 0x0007E690, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0007E0A0 {
    undefined4 func_0007E0A0(byte param_1);
};


undefined4 C_0007E0A0::func_0007E0A0(byte param_1)
{
  int func_0006C470(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0006C470();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
