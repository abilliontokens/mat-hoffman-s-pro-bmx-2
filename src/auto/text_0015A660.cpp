/* 30 functions from 0x0015A660 to 0x0015B660, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0015A8E0 {
    int unk0;
    void func_00157660();
    void *func_0015A8E0(int flags);
};

struct ARec {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int pad20;
    int f24;
    char f28;
    char pad29[0x27];
};

struct C_0015A740 {
    char pad0[0x2C];
    int f2C;
    int f30;
    char pad34[4];
    ARec recs[150];
    void func_0015A740(void);
};

struct C_0015A910 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    unsigned char f14;
    char pad15[3];
    int f18;
    C_0015A910 *func_0015A910(int a);
    void func_0015A940(void);
};

struct C_0015ABF0 {
    undefined4 func_0015ABF0(int param_1);
};

struct C_0015B4C0 {
    void func_0015B4C0(void);
};

struct C_0015B150 {
    int unk0;
    int unk4;
    int unk8;
    C_0015B150* func_0015B150(void);
};


undefined4 C_0015ABF0::func_0015ABF0(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 != 0) {
    *(byte *)(in_ECX + 0x6b4) = *(byte *)(in_ECX + 0x6b4) | 4;
    return 1;
  }
  *(byte *)(in_ECX + 0x6b4) = *(byte *)(in_ECX + 0x6b4) & 0xfb;
  return 1;
}

C_0015B150* C_0015B150::func_0015B150(void) {
    extern int D_002876E0;
    unk0 = (int)&D_002876E0;
    unk4 = 0;
    unk8 = 0;
    return this;
}

void C_0015B4C0::func_0015B4C0(void)
{
  extern undefined4 D_002E28F4;
  int func_001E891B(...);
  int* in_ECX = (int*)this;
  
  D_002E28F4 = 0;
  if (*in_ECX != 0) {
    func_001E891B(*in_ECX);
  }
  return;
}

