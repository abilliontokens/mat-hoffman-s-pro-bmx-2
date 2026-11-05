/* 13 functions from 0x001ADFD0 to 0x001AED80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
struct C_001AEBB0 {
    undefined4 func_001AEBB0(byte param_1);
};

void func_001E891B(void *p);
void __stdcall func_00201100(void *p);

struct C_001AEB70Obj {
    virtual void v0(int flags);
};

struct C_001AEB70 {
    void *vtbl;
    int f4;
    C_001AEB70Obj *f8;
    void func_001D5490(void);
    void *func_001AEB70(int flags);
};

struct C_001AE810Mgr {
    void func_001B26C0(int a0);
};

struct C_001AE810F10 {
    void func_0014A540(void);
};

struct C_001AE810F14 {
    void func_00012140(void);
};

extern C_001AE810Mgr *D_002AA6C0;

struct C_001AE810 {
    void *vtbl;
    C_001AEB70Obj *f4;
    int f8;
    int fC;
    C_001AE810F10 *f10;
    C_001AE810F14 *f14;
    int f18;
    void *f1C;
    void *f20;
    void func_001AE810(void);
};


void C_001AE810::func_001AE810(void)
{
    extern int D_0028C1D0;
    extern int D_0028C1A4;
    extern int D_00284E94;

    vtbl = (void *)&D_0028C1D0;
    if (f1C != 0) {
        func_00201100(f1C);
    }
    if (f20 != 0) {
        func_00201100(f20);
    }
    D_002AA6C0->func_001B26C0(fC);
    if (f10 != 0) {
        f10->func_0014A540();
        func_001E891B(f10);
    }
    if (f14 != 0) {
        f14->func_00012140();
        func_001E891B(f14);
    }
    vtbl = (void *)&D_0028C1A4;
    if (f4 != 0) {
        f4->v0(1);
    }
    vtbl = (void *)&D_00284E94;
}

void *C_001AEB70::func_001AEB70(int flags)
{
    extern int D_0028C208;

    vtbl = (void *)&D_0028C208;
    if (f8 != 0) {
        f8->v0(1);
    }
    func_001D5490();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_001AEBB0::func_001AEBB0(byte param_1)
{
  int func_001AE460(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001AE460();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
