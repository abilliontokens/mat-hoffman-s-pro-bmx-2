/* 11 functions from 0x001596C0 to 0x0015A660, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0015A4F0 {
    char pad0[0x3C];
    int unk3C;
    void func_0015A4F0(int a0, int a1);
    void func_001A4790(int, int, int, int, int, int, int);
};

struct C_0015A640 {
    undefined4 func_0015A640(byte param_1);
};


void C_0015A4F0::func_0015A4F0(int a0, int a1) {
    ((C_0015A4F0*)((char*)this + 64))->func_001A4790(unk3C, 1, a0, a1, 0, 0, 0);
}

undefined4 C_0015A640::func_0015A640(byte param_1)
{
  int func_0015A580(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015A580();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
