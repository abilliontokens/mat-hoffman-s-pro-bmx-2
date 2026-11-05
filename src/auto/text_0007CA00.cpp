/* 3 functions from 0x0007CA00 to 0x0007D6F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0007D6D0 {
    undefined4 func_0007D6D0(byte param_1);
};


undefined4 C_0007D6D0::func_0007D6D0(byte param_1)
{
  int func_0006A1A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0006A1A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
