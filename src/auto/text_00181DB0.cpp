/* 21 functions from 0x00181DB0 to 0x00182CC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00182810 {
    void func_00182810(void);
};

extern int D_0028933C;

struct C_001827B0 {
    void *vtbl;
    int f4;
    char pad8[8];
    int f10;
    int f14;
    int f18;
    char pad1C[8];
    int f24;
    char pad28[8];
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    void func_001827B0(void);
    C_001827B0(void);
};

struct C_001824E0_Vec {
    int x;
    int y;
    int z;
    int w;
};

struct C_001824E0 {
    char pad0[0x1C0];
    C_001824E0_Vec f1C0;
    void func_001824E0(C_001824E0_Vec *out, int x, int y, int z);
};

struct C_00182750_Global {
    char pad0[0x284];
    int f284;
};

extern C_00182750_Global *D_002A8490;

struct C_00182750 {
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
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual unsigned char v39();
    virtual void v40();
    char pad4[0x23];
    unsigned char f27;
    char pad28[0x159];
    unsigned char f181_0 : 1;
    int func_00182750(void);
    void func_00181E10(void);
};

struct C_00182830_Target {
    char pad0[0x204];
    int f204;
    int f208;
    void func_0012B390(int a, int b, int c);
};

struct C_00182830 {
    int pad0;
    C_00182830_Target *f4;
    int f8;
    int fC;
    void func_00182830(C_00182830_Target *p);
};

struct C_00182550 {
    undefined4 func_00182550(byte param_1);
};

struct C_00182530 {
    longdouble func_00182530(undefined4 param_1);
};

struct C_001827E0 {
    char pad0[0x4C];
    int unk4C;
    int unk50;
    void func_001827E0(int a0, int a1);
};

struct C_00182800 {
    int unk0;
    void func_00182800(void);
};

struct C_00182730 {
    undefined4 func_00182730(byte param_1);
};

struct C_00181DB0_Mgr {
    void func_001B0520(void *a0);
    void func_001B05A0(int a0, int a1, void *a2);
};

struct C_00181DB0_Entry {
    int f0;
    C_00181DB0_Mgr *f4;
    char pad8[8];
};

struct C_00181DB0_Global {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a0, int a1);
    char pad4[0x10];
    C_00181DB0_Entry *f14;
    char pad18[8];
    char f20;
    int func_00161850(int a0);
    void func_001B26C0(int a0);
};

extern C_00181DB0_Global *D_002A829C;

struct C_00181DB0 {
    char pad0[0x1A1];
    char f1A1;
    char pad1A2[0x12];
    int f1B4;
    int *f1B8;
    int f1BC;
    void func_00181DB0(int a0);
    int func_00182020(int a0, int a1);
    void func_001820B0(int a0, int a1, int a2);
};


void C_00181DB0::func_00181DB0(int a0)
{
  int i = 0;

  if (f1B4 > 0) {
    do {
      int v = f1B8[i];
      if (a0 == -1 || a0 == v) {
        D_002A829C->f14[v].f4->func_001B0520(this);
      }
      i++;
    } while (i < f1B4);
  }
}

int C_00181DB0::func_00182020(int a0, int a1)
{
  int i;
  int result;

  f1A1 = D_002A829C->f20 - 1;
  f1BC = 0;
  result = a0;
  if (f1B4 > 0) {
    for (i = 0; i < f1B4; i++) {
      if (f1B8[i] == a0) {
        int r = D_002A829C->func_00161850(a0);
        D_002A829C->v6(a1, r);
        D_002A829C->func_001B26C0(f1B8[i]);
        f1B8[i] = a1;
        result = a1;
      }
    }
  }
  return result;
}

void C_00181DB0::func_001820B0(int a0, int a1, int a2)
{
  int i = 0;

  if (f1B4 > 0) {
    do {
      int v = f1B8[i];
      if (a2 == -1 || a2 == v) {
        D_002A829C->f14[v].f4->func_001B05A0(a0, a1, this);
      }
      i++;
    } while (i < f1B4);
  }
}

void C_001824E0::func_001824E0(C_001824E0_Vec *out, int x, int y, int z)
{
    C_001824E0_Vec old = f1C0;
    f1C0.x = x;
    f1C0.y = y;
    f1C0.z = z;
    *out = old;
}

longdouble C_00182530::func_00182530(undefined4 param_1)
{
  int in_ECX = (int)this;
  float fVar1;
  
  fVar1 = *(float *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1cc) = param_1;
  return (longdouble)fVar1;
}

undefined4 C_00182550::func_00182550(byte param_1)
{
  int func_00181440(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00181440();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00182730::func_00182730(byte param_1)
{
  int func_00181540(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_00181540();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_00182750::func_00182750(void)
{
    if (f27 & 4) {
        f181_0 = 0;
        return 1;
    }
    f181_0 = v39();
    if (f181_0) {
        func_00181E10();
    }
    D_002A8490->f284++;
    return 1;
}

void C_001827B0::func_001827B0(void)
{
    vtbl = &D_0028933C;
    f4 = 0;
    f30 = 0;
    f10 = 0;
    f14 = 0;
    f18 = 0;
    f24 = 0;
    f34 = 0;
    f38 = 0;
    f3C = 0;
    f40 = 0;
}

void C_001827E0::func_001827E0(int a0, int a1) {
    unk50 = a1;
    unk4C = a0;
}

void C_00182800::func_00182800(void) {
    extern int D_0028933C;
    unk0 = (int)&D_0028933C;
}

void C_00182810::func_00182810(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x14) + 1;
  *(int *)(in_ECX + 0x14) = iVar1;
  if (iVar1 == *(int *)(in_ECX + 0x10)) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
  return;
}

void C_00182830::func_00182830(C_00182830_Target *p)
{
    f4 = p;
    if (p != 0) {
        if (f8 != p->f204 || fC != p->f208) {
            p->func_0012B390(0x3f9f49f5, 0x280, 0x1c0);
        }
    }
}

