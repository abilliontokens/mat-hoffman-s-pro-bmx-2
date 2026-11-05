/* 2 functions from 0x000F2CC0 to 0x000F3C70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000F3C50 {
    undefined4 func_000F3C50(byte param_1);
};


undefined4 C_000F3C50::func_000F3C50(byte param_1)
{
  int func_000C5980(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C5980();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
