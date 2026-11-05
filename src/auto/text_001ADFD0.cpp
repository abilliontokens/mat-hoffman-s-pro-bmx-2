/* 13 functions from 0x001ADFD0 to 0x001AED80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001AEBB0 {
    undefined4 func_001AEBB0(byte param_1);
};


undefined4 C_001AEBB0::func_001AEBB0(byte param_1)
{
  int func_001AE460(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001AE460();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
