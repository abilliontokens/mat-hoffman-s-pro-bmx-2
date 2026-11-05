/* 7 functions from 0x000F7400 to 0x000F83C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"

struct S_000F7F80_Obj93120 {
    void func_00093120(void);
};

struct S_000F7F80_Widget {
    void func_001B17D0(int v);
    void func_001B1A30(float a1, float a2, float a3);
};

struct S_000F7F80_Data {
    char pad0[0x7a8];
    int f7a8;
    char pad7ac[0x938 - 0x7ac];
    int f938;
};

struct S_000F7F80_Mid {
    char pad0[4];
    S_000F7F80_Data *p4;
};

struct S_000F7F80_Root {
    char pad0[0x2e8];
    S_000F7F80_Mid *p2e8;
};

extern S_000F7F80_Root *D_002A8490;

struct S_000F75D0_Obj301D0 {
    int func_000301D0(void);
};

struct S_000F75D0_B {
    char pad0[0x74];
    S_000F75D0_Obj301D0 *unk74;
};

struct S_000F75D0_A {
    char pad0[0x25c];
    S_000F75D0_B *unk25c;
};

struct S_000F75D0_Obj1D6600 {
    void func_001D6600(void);
};

struct S_000F75D0_Root {
    char pad0[0x34];
    S_000F75D0_Obj1D6600 *f34;
    char pad38[4];
    S_000F75D0_Obj1D6600 *f3c;
};

extern S_000F75D0_Root *D_002B91AC;

struct BmxUIPageGameOptions {
    char pad0[0x124];
    S_000F75D0_A *unk124;
    char pad128[0x288 - 0x128];
    int unk288;
    char pad28c[0x298 - 0x28c];
    S_000F7F80_Widget *unk298;
    S_000F7F80_Widget *unk29c;
    char pad2a0[0x2b0 - 0x2a0];
    int unk2b0;
    char pad2b4[0x2bc - 0x2b4];
    int unk2bc;
    char pad2c0[0x2f8 - 0x2c0];
    S_000F7F80_Obj93120 *unk2f8;
    char pad2fc[0x328 - 0x2fc];
    int unk328;
    void func_000F7F80(void);
    void func_000F75D0(void);
    void func_000CC0B0(void);
    void func_000F4E00(void);
    void func_000F58F0(void);
    void func_000C9940(void);
    void func_000CB3B0(void);
    void func_00157960(void);
};

struct C_000F83A0 {
    undefined4 func_000F83A0(byte param_1);
};

struct C_000F7670 {
    undefined4 func_000F7670(byte param_1);
};


undefined4 C_000F7670::func_000F7670(byte param_1)
{
  int func_000CB650(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000CB650();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void BmxUIPageGameOptions::func_000F7F80(void) {
    unk2f8->func_00093120();
    unk298->func_001B17D0(D_002A8490->p2e8->p4->f938);
    unk298->func_001B1A30(320.0f, 120.0f, 0.0f);
    unk29c->func_001B17D0(D_002A8490->p2e8->p4->f7a8);
    if (unk288 != 0) {
        func_000CC0B0();
        unk288 = 0;
    }
}

undefined4 C_000F83A0::func_000F83A0(byte param_1)
{
  int func_000CCB10(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000CCB10();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

