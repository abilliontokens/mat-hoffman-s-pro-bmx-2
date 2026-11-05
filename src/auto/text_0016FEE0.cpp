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
extern int D_00288A94;
void func_001E891B(void *p);
void __stdcall func_00201100(void *p);

struct S_Obj {
    virtual void v0(int flags);
    virtual void v4();
    virtual void v8();
};

struct S_Obj154 {
    void func_0014A540(void);
};

struct C_001703B0 {
    void *vtbl;
    char pad4[0x20];
    u32 f24, f28, f2c, f30, f34, f38, f3c, f40;
    u32 vectors[4][4];
    char pad84[0x80];
    void *f104;
    char pad108[8];
    void *f110;
    char pad114[0x128 - 0x114];
    S_Obj *f128;
    void *f12c;
    void *f130;
    void *f134;
    char pad138[0x148 - 0x138];
    S_Obj *f148;
    char pad14c[8];
    S_Obj154 *f154;
    S_Obj *f158;
    void *f15c;
    void *f160;
    char pad164[0x170 - 0x164];
    S_Obj *f170;
    void func_00157660(void);
    void func_001703B0(void);
};

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


int C_001701F0::func_001701F0(void)
{
    if (f170 != 0 && f170->fA8 != 0) {
        float v = D_002EFDB8->f4->f1d8;
        f170->fA0 = v;
        f170->func_00142AF0();
    }
    if (f11c > 0 && f120 > 0) {
        func_0016FBC0();
        S_001701F0_Node *node = D_002A829C->f14[f148->f4].f4;
        node->func_001B07A0();
        f144 = D_002F0630->f10[node->fD4];
        f148->f10 = f158;
        f144->func_00149310((int)f148, 0, 0, 0);
    }
    return 1;
}

void C_001703B0::func_001703B0(void)
{
    vtbl = (void *)&D_00288A94;
    if (f128) f128->v8();
    if (f12c) func_001E891B(f12c);
    if (f130) func_001E891B(f130);
    if (f104) func_001E891B(f104);
    if (f134) func_001E891B(f134);
    if (f148) f148->v0(1);
    if (f110) func_001E891B(f110);
    if (f170) f170->v8();
    S_Obj154 *p = f154;
    if (p) {
        p->func_0014A540();
        func_001E891B(p);
        f154 = 0;
    }
    if (f158) f158->v0(1);
    if (f15c) func_00201100(f15c);
    if (f160) func_00201100(f160);
    func_00157660();
}

void *C_00170AD0::func_00170AD0(unsigned int flags)
{
    unk4 = 0;
    vtbl = (void *)&D_00284E94;
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}

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
