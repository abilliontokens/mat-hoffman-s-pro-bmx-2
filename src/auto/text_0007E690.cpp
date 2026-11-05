/* 10 functions from 0x0007E690 to 0x0007EE80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_0007EB00 {
    undefined4 func_0007EB00(byte param_1);
};

struct C_0007EAE0 {
    undefined4 func_0007EAE0(byte param_1);
};


undefined4 C_0007EAE0::func_0007EAE0(byte param_1)
{
  int func_00072D30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00072D30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0007EB00::func_0007EB00(byte param_1)
{
  int func_00073C30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00073C30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

