/* 19 functions from 0x00142F30 to 0x00143C00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00143BD0 {
    undefined4 func_00143BD0(byte param_1);
};


undefined4 C_00143BD0::func_00143BD0(byte param_1)
{
  int func_001439D0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001439D0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
