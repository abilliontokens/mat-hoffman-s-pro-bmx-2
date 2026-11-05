/* 23 functions from 0x0013F690 to 0x00140680, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct C_0013FBD0 {
    void *vtbl;
    void *func_0013FBD0(int flags);
};

struct C_0013FC00 {
    void *vtbl;
    char pad0[0xc];
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void func_0013FC00();
};

struct C_0013FC60 {
    void *vtbl;
    int f4;
    int f8;
    int f0c;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    short *f20;
    int f24;
    int f28;
    void func_0013FC60(int count);
};

struct C_0013FCF0 {
    void *vtbl;
    int f4;
    int f8;
    int f0c;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void func_0013FCF0();
};

struct C_00140660 {
    undefined4 func_00140660(byte param_1);
};

struct C_0013FA70 {
    undefined4 func_0013FA70(undefined4 param_1);
};


struct C_0013FA10 {
    void *vtbl;
    void *func_0013FA10(int a0);
};

struct C_0013F7B0 {
    void *vtbl;
};

struct C_0013FA30_Data {
    void *vtbl;
    int f4;
    int f8;
    void func_0015B150();
};

struct C_0013FA30_VT {
    virtual void vfunc0();
    virtual int vfunc1();
};

struct C_0013FA30 {
    char pad0[0x24];
    C_0013FA30_Data *f24;
    void func_0013FA30(void);
};

struct C_0013FA90 {
    void *vtbl;
    void func_0015B170();
    void *func_0013FA90(int flags);
};

C_0013F7B0 *func_0013F7B0(void)
{
  void *func_001E8A44(int size);
  extern int D_00284EB8;
  C_0013F7B0 *p;

  p = (C_0013F7B0 *)func_001E8A44(4);
  if (p != 0) {
    p->vtbl = (void *)&D_00284EB8;
    return p;
  }
  return 0;
}

void *C_0013FA10::func_0013FA10(int a0)
{
  int __stdcall func_0015B1A0(int);
  extern int D_00284EF4;

  func_0015B1A0(a0);
  vtbl = (void *)&D_00284EF4;
  return this;
}

void C_0013FA30::func_0013FA30(void)
{
  void *func_001E8A44(int size);
  extern int D_00284EE4;
  C_0013FA30_Data *p;
  C_0013FA30_Data *q;

  p = (C_0013FA30_Data *)func_001E8A44(0xc);
  if (p != 0) {
    p->func_0015B150();
    p->vtbl = (void *)&D_00284EE4;
    q = p;
  } else {
    q = 0;
  }
  f24 = q;
  ((C_0013FA30_VT *)q)->vfunc1();
}

undefined4 C_0013FA70::func_0013FA70(undefined4 param_1)
{
  int __stdcall func_0015B210(int);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015B210((int)(param_1));
  return in_ECX;
}

void *C_0013FA90::func_0013FA90(int flags)
{
  extern int D_00284EE4;
  void func_001E891B(void *);

  vtbl = (void *)&D_00284EE4;
  func_0015B170();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

void *C_0013FBD0::func_0013FBD0(int flags)
{
  extern int D_00284EF4;
  void func_0015B1C0();
  void func_001E891B(void *);

  vtbl = (void *)&D_00284EF4;
  func_0015B1C0();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

undefined4 C_00140660::func_00140660(byte param_1)
{
  int func_0013FC00(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0013FC00();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

