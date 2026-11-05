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
void func_0008BBE0();

struct C_000927F0 {
    void *func_000927F0(unsigned int flags);
};

extern int D_00279DEC;

struct C_0008ADF0 {
    void func_0008ADF0();
};

struct C_00092790 {
    void *vtbl;
    void *func_00092790(int flags);
};

struct C_000927B0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    void func_00157660();
    void *func_000927B0(int flags);
};

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

extern int D_00279CCC;

struct C_00091860 {
    void func_000864D0();
    void *func_00091860(int flags);
};

struct C_00091A00 {
    void func_0008A350();
    void *func_00091A00(int flags);
};

struct C_00092750 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    void func_00157660();
    void *func_00092750(int flags);
};

struct S_002A8490 {
    char pad0[0x274];
    int unk274;
};
extern S_002A8490 *D_002A8490;

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_000919B0 {
    void func_0008A190();
    void func_00089FA0();
    void func_00157960();
    int func_000919B0();
};

struct C_00091840 {
    void func_00085520();
    void *func_00091840(int flags);
};

struct C_00091880 {
    void func_00086E00();
    void *func_00091880(int flags);
};

struct C_000918A0 {
    void func_00087700();
    void *func_000918A0(int flags);
};

struct C_00091990 {
    void func_00089210();
    void *func_00091990(int flags);
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

void *C_00091840::func_00091840(int flags) {
    func_00085520();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_00091860::func_00091860(int flags) {
    func_000864D0();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00091880::func_00091880(int flags) {
    func_00086E00();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_000918C0::func_000918C0(int flags)
{
    ((C_001D57E0 *)((char *)this + 0x88))->func_001D57E0();
    ((C_001D57E0 *)((char *)this + 0x24))->func_001D57E0();
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00091900::func_00091900(int flags)
{
    vtbl = (void *)&D_0027993C;
    if (f28) {
        f28->destroyObject(1);
        f28 = 0;
    }
    if (f2c) {
        f2c->destroyObject(1);
        f2c = 0;
    }
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00091950::func_00091950(int flags)
{
    vtbl = (void *)&D_002799BC;
    if (f2c) {
        f2c->destroyObject(1);
        f2c = 0;
    }
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00092710::func_00092710(int flags)
{
    C_001D6410 *p = (C_001D6410 *)f24;
    vtbl = (void *)&D_00279C3C;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00092790::func_00092790(int flags)
{
    ((C_0008ADF0 *)this)->func_0008ADF0();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void *C_000927B0::func_000927B0(int flags)
{
    C_001D6410 *p = (C_001D6410 *)f24;
    vtbl = (void *)&D_00279DEC;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_000927F0::func_000927F0(unsigned int flags)
{
    func_0008BBE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

