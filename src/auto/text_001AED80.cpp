/* 17 functions from 0x001AED80 to 0x001AFCC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001AF090 {
    undefined4 func_001AF090(byte param_1);
};

struct C_001AF0B0 {
    int unk0;
    int unk4;
    int unk8;
    C_001AF0B0* func_001AF0B0(void);
};

struct C_001AF320 {
    int unk0;
    void func_001AF320(void);
};

struct C_001AF300 {
    void *vtbl;
    void *func_001AF300(int a0);
    void func_00157600(int a0);
};

struct C_001AF0D0 {
    void *vtbl;
    int f4;
    int f8;
    void func_001AF0D0();
};

struct C_0013B210 {
    void func_0013C8A0(int a0, void *a1, int a2, int a3);
};

extern C_0013B210 *D_002BEAAC;

struct C_001AF100 {
    char pad0[4];
    int func_001AF100(int a0, int a1, int a2, int a3);
};

struct C_002A829C_Sel {
    char pad0[0xc];
    int fC;
};

struct C_002A829C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a0, int a1);
    char pad4[0x10];
    C_002A829C_Sel *arr;
    int func_00161850(int a0);
    void func_001B26C0(int a0);
};

extern C_002A829C *D_002A829C;

struct C_001AF250 {
    char pad0[4];
    int f4;
    int func_001AF250(int a0, int a1);
};


undefined4 C_001AF090::func_001AF090(byte param_1)
{
  int func_001AE810(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001AE810();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001AF0B0* C_001AF0B0::func_001AF0B0(void) {
    extern int D_0028C290;
    unk0 = (int)&D_0028C290;
    unk4 = -1;
    unk8 = 0;
    return this;
}

void C_001AF0D0::func_001AF0D0()
{
    extern int D_0028C290;
    int func_001E891B(...);
    vtbl = (void *)&D_0028C290;
    if (f4 >= 0) {
        D_002A829C->func_001B26C0(f4);
    }
    if (f8) {
        func_001E891B(f8);
    }
}

int C_001AF100::func_001AF100(int a0, int a1, int a2, int a3)
{
    D_002BEAAC->func_0013C8A0(a0, (char *)this + 4, 4, 1);
    return 1;
}

int C_001AF250::func_001AF250(int a0, int a1)
{
    if (f4 == a0) {
        f4 = a1;
        int v = D_002A829C->func_00161850(a0);
        D_002A829C->v6(a1, v);
        if (D_002A829C->arr[a0].fC != 0) {
            D_002A829C->func_001B26C0(a0);
        }
    }
    return f4;
}

void *C_001AF300::func_001AF300(int a0)
{
    extern int D_0028C2AC;
    func_00157600(a0);
    vtbl = (void *)&D_0028C2AC;
    return this;
}

void C_001AF320::func_001AF320(void) {
    extern int D_0028C2AC;
    int func_00157660(...);
    unk0 = (int)&D_0028C2AC;
    func_00157660();
}
