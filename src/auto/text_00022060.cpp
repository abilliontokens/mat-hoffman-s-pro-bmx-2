/* 9 functions from 0x00022060 to 0x00022E30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00022530 {
    undefined4 func_00022530(byte param_1);
};


undefined4 C_00022530::func_00022530(byte param_1)
{
  int func_000214B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000214B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
