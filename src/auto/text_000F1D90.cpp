/* 16 functions from 0x000F1D90 to 0x000F2CC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000F2CA0 {
    undefined4 func_000F2CA0(byte param_1);
};


undefined4 C_000F2CA0::func_000F2CA0(byte param_1)
{
  int func_000C45E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C45E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
