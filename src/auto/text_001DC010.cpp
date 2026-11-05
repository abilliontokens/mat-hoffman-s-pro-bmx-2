/* 12 functions from 0x001DC010 to 0x001DCDC7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001DC540 {
    undefined4 func_001DC540(byte param_1);
};


undefined4 C_001DC540::func_001DC540(byte param_1)
{
  int func_001DBA40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001DBA40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
