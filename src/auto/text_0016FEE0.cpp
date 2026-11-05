/* 10 functions from 0x0016FEE0 to 0x00170DB0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_00170B30 {
    undefined4 * func_00170B30(undefined4 param_1);
};

struct C_00170B10 {
    undefined4 func_00170B10(byte param_1);
};

struct C_00170B50 {
    int unk0;
    void func_00170B50(void);
};

extern int D_00284E94;
void func_001E891B(void *p);

struct C_00170AD0 {
    void *vtbl;
    int unk4;
    void *func_00170AD0(unsigned int flags);
};

struct S_001701F0_Node {
    char pad0[0xd4];
    int fD4;
    void func_001B07A0(void);
};

struct S_001701F0_Entry {
    int f0;
    S_001701F0_Node *f4;
    int f8;
    int fC;
};

struct S_001701F0_Mgr {
    char pad0[0x14];
    S_001701F0_Entry *f14;
};

struct C_00149310 {
    void func_00149310(int a1, int a2, int a3, int a4);
};

struct S_001701F0_Tbl {
    char pad0[0x10];
    C_00149310 *f10[1];
};

struct S_001701F0_Inner {
    char pad0[0x1d8];
    float f1d8;
};

struct S_001701F0_Global {
    char pad0[4];
    S_001701F0_Inner *f4;
};

extern S_001701F0_Global *D_002EFDB8;
extern S_001701F0_Mgr *D_002A829C;
extern S_001701F0_Tbl *D_002F0630;

struct S_001701F0_170 {
    char pad0[0xa0];
    float fA0;
    char padA4[4];
    int fA8;
    void func_00142AF0(void);
};

struct S_001701F0_148 {
    int f0;
    int f4;
    char pad8[8];
    int f10;
};

struct C_001701F0 {
    char pad0[0x11c];
    int f11c;
    int f120;
    char pad124[0x144 - 0x124];
    C_00149310 *f144;
    S_001701F0_148 *f148;
    char pad14c[0x158 - 0x14c];
    int f158;
    char pad15c[0x170 - 0x15c];
    S_001701F0_170 *f170;
    void func_0016FBC0(void);
    int func_001701F0(void);
};


undefined4 C_00170B10::func_00170B10(byte param_1)
{
  int func_001703B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001703B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 * C_00170B30::func_00170B30(undefined4 param_1)
{
  int func_001DC974(...);
  undefined4* in_ECX = (undefined4*)this;
  undefined4 uVar1;
  
  in_ECX[1] = 0;
  uVar1 = func_001DC974();
  *in_ECX = uVar1;
  in_ECX[2] = param_1;
  return in_ECX;
}

void C_00170B50::func_00170B50(void) {
    extern int D_00288B4C;
    int func_00171980(...);
    unk0 = (int)&D_00288B4C;
    func_00171980();
}
