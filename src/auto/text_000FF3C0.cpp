/* 16 functions from 0x000FF3C0 to 0x001002A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_000FF3C0 {
    undefined4 func_000FF3C0(byte param_1);
};

struct C_000FF400 {
    undefined4 func_000FF400(byte param_1);
};

struct C_000FF3E0 {
    undefined4 func_000FF3E0(byte param_1);
};


undefined4 C_000FF3C0::func_000FF3C0(byte param_1)
{
  int func_000D4DD0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D4DD0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF3E0::func_000FF3E0(byte param_1)
{
  int func_000D5E00(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D5E00();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF400::func_000FF400(byte param_1)
{
  int func_000D6D50(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D6D50();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

