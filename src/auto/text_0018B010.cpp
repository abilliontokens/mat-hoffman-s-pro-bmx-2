/* 18 functions from 0x0018B010 to 0x0018C000, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0018B3B0 {
    undefined4 func_0018B3B0(byte param_1);
};


undefined4 C_0018B3B0::func_0018B3B0(byte param_1)
{
  int func_00188920(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00188920();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
