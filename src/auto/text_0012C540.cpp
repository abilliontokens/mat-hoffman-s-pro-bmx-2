/* 8 functions from 0x0012C540 to 0x0012D460, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0012C8F0 {
    undefined4 func_0012C8F0(byte param_1);
};


undefined4 C_0012C8F0::func_0012C8F0(byte param_1)
{
  int func_0012C4E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012C4E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
