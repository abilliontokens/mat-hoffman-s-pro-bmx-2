/* 17 functions from 0x00193240 to 0x001941F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00194110 {
    undefined4 func_00194110(byte param_1);
};


undefined4 C_00194110::func_00194110(byte param_1)
{
  int func_00193BC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00193BC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
