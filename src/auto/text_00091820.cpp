/* 17 functions from 0x00091820 to 0x00092810, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00091820 {
    undefined4 func_00091820(byte param_1);
};

extern int D_00279C3C;
extern int D_0027993C;
extern int D_002799BC;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410();
};

struct C_001D57E0 {
    void func_001D57E0();
};

struct C_00091900_Item {
    virtual void destroyObject(int flags);
};

struct C_00092710 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    void func_00157660();
    void *func_00092710(int flags);
};

struct C_000918C0 {
    char pad0[0x88];
    void func_00157660();
    void *func_000918C0(int flags);
};

struct C_00091900 {
    void *vtbl;
    char pad4[0x24];
    C_00091900_Item *f28;
    C_00091900_Item *f2c;
    void func_00157660();
    void *func_00091900(int flags);
};

struct C_00091950 {
    void *vtbl;
    char pad4[0x28];
    C_00091900_Item *f2c;
    void func_00157660();
    void *func_00091950(int flags);
};


undefined4 C_00091820::func_00091820(byte param_1)
{
  int func_00084980(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00084980();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *C_000918C0::func_000918C0(int flags)
{
    ((C_001D57E0 *)((char *)this + 0x88))->func_001D57E0();
    ((C_001D57E0 *)((char *)this + 0x24))->func_001D57E0();
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00092710::func_00092710(int flags)
{
    vtbl = (void *)&D_00279C3C;
    if (f24) {
        ((C_001D6410 *)f24)->func_001D6410();
        func_001E891B((void *)f24);
    }
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

