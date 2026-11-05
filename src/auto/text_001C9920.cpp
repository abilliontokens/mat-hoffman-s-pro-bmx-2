/* 10 functions from 0x001C9920 to 0x001CA480, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001C9AF0 {
    undefined4 func_001C9AF0(byte param_1);
};

struct C_001CA1D0 {
    char pad0[0x24];
    int unk24;
    char pad28[0x28];
    int unk50;
    C_001CA1D0* func_001CA1D0(int a0, int a1, int a2, int a3, int a4, int a5);
};

struct C_001CA1C0 {
    int unk0;
    void func_001CA1C0(void);
};


void func_001C99D0(void) {
    int func_00157BF0(...);
    func_00157BF0();
}

undefined4 C_001C9AF0::func_001C9AF0(byte param_1)
{
  int func_001C8740(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001C8740();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001CA1C0::func_001CA1C0(void) {
    extern int D_0028EC24;
    int func_00157660(...);
    unk0 = (int)&D_0028EC24;
    func_00157660();
}

C_001CA1D0* C_001CA1D0::func_001CA1D0(int a0, int a1, int a2, int a3, int a4, int a5) {
    unk24 = a0;
    unk50 = a2;
    return this;
}

