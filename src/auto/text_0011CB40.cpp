/* 4 functions from 0x0011CB40 to 0x0011D2F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0011CEE0 {
    undefined4 func_0011CEE0(byte param_1);
};

extern int D_00283E1C;

/* BMXWrecker */
struct C_0011CB40 {
    void *vtbl;
    char pad4[0xa4];
    void *fA8;
    void *fAC;
    void *fB0;
    void *fB4;
    char padB8[0x10];
    void *fC8;
    char padCC[0x24];
    void *fF0;
    char padF4[4];
    void *fF8;
    void *fFC;
    void *f100;
    void *f104;
    void *f108;
    void func_0011CB40(void);
    void func_00157660(void);
};


void C_0011CB40::func_0011CB40(void)
{
    void func_001E891B(void *p);
    void func_001E8390(void *p);

    vtbl = &D_00283E1C;
    func_001E891B(fA8);
    func_001E891B(fAC);
    func_001E891B(fB0);
    func_001E891B(fB4);
    func_001E891B(fF8);
    func_001E891B(fFC);
    func_001E891B(f100);
    func_001E891B(f104);
    func_001E891B(f108);
    if (fF0 != 0) {
        func_001E8390(fF0);
    }
    if (fC8 != 0) {
        func_001E8390(fC8);
    }
    func_00157660();
}

undefined4 C_0011CEE0::func_0011CEE0(byte param_1)
{
  int func_0011CB40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0011CB40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
