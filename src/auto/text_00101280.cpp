/* 8 functions from 0x00101280 to 0x00101CF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00101A10 {
    undefined4 func_00101A10(byte param_1);
};

struct C_00101B20 {
    undefined4 func_00101B20(byte param_1);
};

struct C_00101CB0 {
    undefined4 func_00101CB0(byte param_1);
};

struct C_00101CD0 {
    undefined4 func_00101CD0(byte param_1);
};


undefined4 C_00101A10::func_00101A10(byte param_1)
{
  int func_000EE3B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000EE3B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00101B20::func_00101B20(byte param_1)
{
  int func_000F0D20(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000F0D20();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00101CB0::func_00101CB0(byte param_1)
{
  int func_000F1D90(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000F1D90();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

