/* 11 functions from 0x0013E6F0 to 0x0013F690, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0013E900 {
    undefined4 func_0013E900(byte param_1);
};


undefined4 C_0013E900::func_0013E900(byte param_1)
{
  int func_0013E6A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0013E6A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
