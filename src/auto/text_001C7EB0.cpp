/* 3 functions from 0x001C7EB0 to 0x001C8960, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001C8720 {
    undefined4 func_001C8720(byte param_1);
};


undefined4 C_001C8720::func_001C8720(byte param_1)
{
  int func_001C75A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001C75A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
