/* 18 functions from 0x0002FA80 to 0x00030A30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00030A10 {
    undefined4 func_00030A10(byte param_1);
};


undefined4 C_00030A10::func_00030A10(byte param_1)
{
  int func_000308F0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000308F0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
