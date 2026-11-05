/* 12 functions from 0x00051CF0 to 0x00052C10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00052BB0 {
    undefined4 func_00052BB0(byte param_1);
};


undefined4 C_00052BB0::func_00052BB0(byte param_1)
{
  int func_00051260(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00051260();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
