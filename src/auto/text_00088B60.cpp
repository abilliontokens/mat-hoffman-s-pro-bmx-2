/* 10 functions from 0x00088B60 to 0x00089290, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern int D_002799BC;
extern int D_00279A44;

struct C_00157600 {
    void func_00157600(int a0);
};

struct S_00088F70_Child {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
    virtual void v6(int a);
    virtual int v7();
};

struct C_00088F70 {
    void *vtbl;
    char pad4[0x24];
    u32 f28;
    u32 f2C;
    f32 f30;
    f32 f34;
    f32 f38;
    u32 f3C;
    S_00088F70_Child *f40;
    C_00088F70 *func_00088DA0(int a0);
    void func_00088F70(int a, int b);
    void func_00089010();
};

struct C_000891A0 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    char pad34[0x68];
    u32 f9C;
    u32 fA0[16];
    u32 fE0[16];
    u32 f120;
    u32 f124;
    u32 f128;
    u32 f12C;
    C_000891A0 *func_000891A0(int unused);
};

struct C_00089040 {
    bool func_00089040(void);
};

struct C_00088F60 {
    void func_00088F60(int param_1);
};


C_00088F70 *C_00088F70::func_00088DA0(int a0)
{
    ((C_00157600 *)this)->func_00157600(a0);
    f2C = 0;
    f28 = 0;
    f30 = 0;
    f34 = 0;
    f3C = 0;
    f38 = 0;
    vtbl = &D_002799BC;
    return this;
}

void C_00088F60::func_00088F60(int param_1)
{
  int in_ECX = (int)this;
  
  *(float *)(in_ECX + 0x30) = (float)param_1;
  return;
}

void C_00088F70::func_00089010()
{
    f34 = f30;
    f3C = 0xff;
    if (f40->v7() != 0) {
        f40->v6(0);
    }
}

bool C_00089040::func_00089040(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x3c) == 0xff;
}

