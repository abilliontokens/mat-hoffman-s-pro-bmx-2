/* 18 functions from 0x0002FA80 to 0x00030A30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_0002FA80_Sub {
    char name[0x10c];
};

struct S_0002FA80_Entry {
    void *f0;
    int subCount;
    S_0002FA80_Sub *subs;
    int curSub;
    int id;
    char name[0x118 - 0x14];

    int func_0002FFD0(const char *subName);
};

struct C_000B5870 {
    void func_000B5870(void);
};

struct C_0012B7D0 {
    void func_0012B7D0(int handle, int a, int b, int c, int d);
};

struct C_0002FA80 {
    C_0012B7D0 *f0;
    S_0002FA80_Entry *entries;
    int count;
    int cur;

    undefined4 func_00030020(const char *name);
    bool func_000300C0(const char *subName);
    void func_000301D0(void);
};

struct C_000300F0 {
    bool func_000300F0(undefined4 param_1);
};

struct C_00030A10 {
    undefined4 func_00030A10(byte param_1);
};


bool C_000300F0::func_000300F0(undefined4 param_1)
{
  int func_001EA426(...);
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = func_001EA426(param_1,*(int *)(in_ECX + 0xc) * 0x118 + 0x14 + *(int *)(in_ECX + 4));
  return iVar1 == 0;
}

undefined4 C_00030A10::func_00030A10(byte param_1)
{
  int func_000308F0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000308F0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
