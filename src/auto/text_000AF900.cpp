/* 5 functions from 0x000AF900 to 0x000B03A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct S_000B0340_B {
    int unk0;
    int unk4;
};

struct S_000B0340_A {
    char pad0[0x2E0];
    S_000B0340_B *unk2E0;
};

extern S_000B0340_A *D_002A8490;

struct C_000B0340 {
    void func_000AC8F0(void);
    void func_000A2F20(void);
    void func_000AF7D0(void);
    void func_000AC890(void);
    void func_000A1E90(void);
    void func_000ACCF0(void);
    void func_000ACD50(void);
    void func_000AF8A0(void);
    void func_000ACDB0(void);
    void func_000A1EF0(void);
    void func_000B0340(void);
};

struct C_000B0320 {
    undefined4 func_000B0320(byte param_1);
};

struct C_000B0300 {
    undefined4 func_000B0300(byte param_1);
};


undefined4 C_000B0300::func_000B0300(byte param_1)
{
  int func_000AE6E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AE6E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000B0320::func_000B0320(byte param_1)
{
  int func_000AEF10(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AEF10();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_000B0340::func_000B0340(void) {
    func_000AC8F0();
    func_000A2F20();
    func_000AF7D0();
    func_000AC890();
    func_000A1E90();
    func_000ACCF0();
    func_000ACD50();
    func_000AF8A0();
    func_000ACDB0();
    if (D_002A8490->unk2E0->unk4 == 10) {
        func_000A1EF0();
    }
}

