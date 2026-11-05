/* 7 functions from 0x0017AA90 to 0x0017BA00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0017ABC0 {
    undefined4 func_0017ABC0(byte param_1);
};

struct C_0017B9E0 {
    int unk0;
    int unk4;
    C_0017B9E0* func_0017B9E0(int a0, int a1);
};

struct C_0017AB70 {
    char pad0[0x158];
    int *unk158;
    int unk15C;
    int func_0017AB70(int param_1);
};


undefined4 C_0017ABC0::func_0017ABC0(byte param_1)
{
  int func_0017A640(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0017A640();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0017B9E0* C_0017B9E0::func_0017B9E0(int a0, int a1) {
    unk0 = a0;
    unk4 = a1;
    return this;
}
