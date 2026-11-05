/* 13 functions from 0x001ADFD0 to 0x001AED80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
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
