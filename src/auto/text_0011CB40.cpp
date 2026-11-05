/* 4 functions from 0x0011CB40 to 0x0011D2F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0011CEE0 {
    undefined4 func_0011CEE0(byte param_1);
};


undefined4 C_0011CEE0::func_0011CEE0(byte param_1)
{
  int func_0011CB40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0011CB40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
