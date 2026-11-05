/* 2 functions from 0x00153DF0 to 0x00154C10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00154BF0 {
    undefined4 func_00154BF0(byte param_1);
};


undefined4 C_00154BF0::func_00154BF0(byte param_1)
{
  int func_001532E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001532E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
