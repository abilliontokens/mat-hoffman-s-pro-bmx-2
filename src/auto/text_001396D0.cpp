/* 2 functions from 0x001396D0 to 0x00139B50, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00139B30 {
    undefined4 func_00139B30(byte param_1);
};


undefined4 C_00139B30::func_00139B30(byte param_1)
{
  int func_00138890(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00138890();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
