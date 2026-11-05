/* 9 functions from 0x00136860 to 0x00137810, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00136B40 {
    undefined4 func_00136B40(byte param_1);
};


undefined4 C_00136B40::func_00136B40(byte param_1)
{
  int func_00136A70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00136A70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
