/* 16 functions from 0x001BB4F0 to 0x001BC310, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001BC020 {
    undefined4 func_001BC020(byte param_1);
};


undefined4 C_001BC020::func_001BC020(byte param_1)
{
  int func_001BB860(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001BB860();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
