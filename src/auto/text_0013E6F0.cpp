/* 11 functions from 0x0013E6F0 to 0x0013F690, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00284DEC;
extern int D_0004035C;
extern int D_00040340;

void __fastcall func_001FD020(void *p, int v);
void __fastcall func_001FEC30(int n, void *p);
int __fastcall func_001FEBD0(int n, void *p);

struct C_001387B0 {
    void func_001387B0(int a);
};

struct C_00149310 {
    void func_00149310(int a1, int a2, int a3, int a4);
};

struct C_0013E8C0 {
    void *vtbl;
    char pad04[0x10C];
    u32 f110;
    u32 f114[6];
    u32 f12C[6];
    C_0013E8C0 *func_0013E8C0(int param_1);
};

struct C_0013ECA0 {
    char pad00[0x10];
    char f10[0xC0];
    char fD0[0x10];
    char fE0_pad[0];
    void func_0013ECA0(void);
};

struct C_0013ECF0_Arg {
    char pad00[0x10];
    int *f10;
};

struct C_0013ECF0 {
    char pad00[0x21D0];
    C_00149310 *f21D0;
    void func_0013ECF0(int a1, int a2, C_0013ECF0_Arg *a3, int a4, int a5);
};

struct C_0013E900 {
    undefined4 func_0013E900(byte param_1);
};


undefined4 C_0013E900::func_0013E900(byte param_1)
{
  int func_0013E6A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0013E6A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
