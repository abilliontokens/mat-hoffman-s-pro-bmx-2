/* 10 functions from 0x0018DE60 to 0x0018EB70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0018E720 {
    undefined4 func_0018E720(byte param_1);
};


undefined4 C_0018E720::func_0018E720(byte param_1)
{
  int func_0018CA20(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0018CA20();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
