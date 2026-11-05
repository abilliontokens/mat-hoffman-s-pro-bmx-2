/* 17 functions from 0x00091820 to 0x00092810, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00091820 {
    undefined4 func_00091820(byte param_1);
};


undefined4 C_00091820::func_00091820(byte param_1)
{
  int func_00084980(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00084980();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
