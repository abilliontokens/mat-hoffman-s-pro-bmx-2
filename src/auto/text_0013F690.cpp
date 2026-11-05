/* 23 functions from 0x0013F690 to 0x00140680, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
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

void *C_0013FA10::func_0013FA10(int a0)
{
  int __stdcall func_0015B1A0(int);
  extern int D_00284EF4;

  func_0015B1A0(a0);
  vtbl = (void *)&D_00284EF4;
  return this;
}

undefined4 C_0013FA70::func_0013FA70(undefined4 param_1)
{
  int __stdcall func_0015B210(int);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015B210((int)(param_1));
  return in_ECX;
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

