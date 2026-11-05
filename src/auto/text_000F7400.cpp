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
extern float D_0027DE74, D_00278C48;

struct BmxUIPageGameOptions {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28(int, int);
    char pad4[0x124 - 4];
    S_000F75D0_A *unk124;
    char pad128[0x280 - 0x128];
    int unk280, unk284;
    union { int unk288; float timer288; };
    int unk28c, unk290;
    char pad294[4];
    S_000F7F80_Widget *unk298;
    S_000F7F80_Widget *unk29c;
    char pad2a0[0x2ac - 0x2a0];
    int unk2ac;
    int unk2b0;
    char pad2b4[0x2bc - 0x2b4];
    int unk2bc;
    int unk2c0, unk2c4;
    float unk2c8;
    int unk2cc;
    char pad2d0[0x2f8 - 0x2d0];
    S_000F7F80_Obj93120 *unk2f8;
    char pad2fc[0x308 - 0x2fc];
    int unk308, unk30c, unk310, unk314;
    float unk318, unk31c;
    char pad320[8];
    int unk328;
    char pad32c[8];
    unsigned char *unk334;
    void func_000F7400(float);
    void func_000F63D0();
    void func_001BED00(float);
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


void BmxUIPageGameOptions::func_000F75D0(void) {
    if (unk2bc != 0) {
        func_000F4E00();
        unk2bc = 0;
    }
    if (unk328 != 0) {
        func_000F58F0();
        unk328 = 0;
    }
    if (unk2b0 != 0) {
        func_000C9940();
        unk2b0 = 0;
    }
    S_000F75D0_B *b = unk124->unk25c;
    if (b->unk74->func_000301D0() == 0) {
        S_000F75D0_Root *r = D_002B91AC;
        r->f3c->func_001D6600();
    }
    S_000F75D0_Root *r2 = D_002B91AC;
    r2->f34->func_001D6600();
    func_000CB3B0();
    func_00157960();
}

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

