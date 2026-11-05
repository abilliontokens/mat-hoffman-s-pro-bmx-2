/* 9 functions from 0x00155890 to 0x00156880, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001567E0 {
    undefined4 func_001567E0(byte param_1);
};


undefined4 C_001567E0::func_001567E0(byte param_1)
{
  int func_00156740(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00156740();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
