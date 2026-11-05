/* 21 functions from 0x00092810 to 0x00093620, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00092870 {
    undefined4 func_00092870(byte param_1);
};

struct C_000928E0 {
    char pad0[0x254];
    int unk254;
    int func_000928E0(void);
};

struct C_001B1980 {
    void func_001B1980(void);
};

struct C_00157600 {
    void func_00157600(int a);
};

struct C_001D4300 {
    int func_001D4300(int a);
    void func_001D41D0(int a);
};

struct S_00092A10_Sub {
    char pad0[0xc];
    int fc;
    char pad10[0x2bc];
    C_001D4300 *f2cc;
};

struct S_00092A10_Root {
    char pad0[0x2e0];
    S_00092A10_Sub *f2e0;
};

extern S_00092A10_Root *D_002A8490;
extern int D_0027A0C4;

struct C_00092890 {
    void *vtbl;
    char pad4[0x20];
    C_001B1980 *f24[8];
    int f44;
    int f48;
    char f4c;
    char pad4d[0x103];
    char f150;
    char pad151[0x103];
    char f254;
    char pad255[0x4f];
    int f64_unused_placeholder;
    C_00092890 *func_00092890(int a);
    void func_00093120(void);
    C_00092890 *func_00092810(int a0, int a1, int a2, int a3);
};

struct C_000928D0 {
    char pad0[0x150];
    int unk150;
    int func_000928D0(void);
};


undefined4 C_00092870::func_00092870(byte param_1)
{
  int func_0008D910(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0008D910();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_000928D0::func_000928D0(void) {
    return (int)&unk150;
}

int C_000928E0::func_000928E0(void) {
    return (int)&unk254;
}

void __stdcall func_00093280(int a0) {
}

