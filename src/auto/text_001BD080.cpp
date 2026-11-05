/* 23 functions from 0x001BD080 to 0x001BDFB0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028D58C;

struct C_00157600 {
    void func_00157600(int a);
};

struct C_001BD9C0 {
    void *vtbl;
    char pad4[0x24 - 4];
    int f24;
    int f28;
    int f2c;
    int f30;
    C_001BD9C0 *func_001BD9C0(int a);
};

struct C_001BD790 {
    void func_001577A0(void *a, int b);
    undefined4 func_001BD790(void);
};

struct C_001BD7E0_Global {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
};

extern C_001BD7E0_Global *D_002EFDB8;

struct C_001BD7E0 {
    undefined4 func_001BD7E0(void);
};

struct C_002A829C {
    void func_00161680();
    void func_001616F0();
};

struct C_002AA6C0 {
    void func_001B2640();
};

extern C_002A829C *D_002A829C;
extern C_002AA6C0 *D_002AA6C0;

struct C_001BD840 {
    void func_001BD840(void);
};
struct C_001BDA50 {
    void func_001BDA50(void);
};

struct C_001BDA20 {
    void func_001BDA20(void);
};

struct C_001BD9F0 {
    void func_001BD9F0(void);
};


undefined4 C_001BD790::func_001BD790(void)
{
  int in_ECX = (int)this;
  int iVar1;
  int iVar2;

  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x124)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x120) + iVar1 * 4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x14) == 0)) {
        func_001577A0((void *)iVar2, -1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x124));
  }
  return 1;
}

C_001BD9C0 *C_001BD9C0::func_001BD9C0(int a)
{
  ((C_00157600 *)this)->func_00157600(a);
  f24 = 0;
  f28 = 0;
  f2c = 0;
  f30 = 0;
  vtbl = (void *)&D_0028D58C;
  return this;
}

void C_001BD9F0::func_001BD9F0(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + iVar1 * 4) + 0x1c))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x28));
  }
  return;
}

void C_001BDA20::func_001BDA20(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + iVar1 * 4) + 0x14))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x28));
  }
  return;
}

void C_001BDA50::func_001BDA50(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + iVar1 * 4) + 0x70))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x28));
  }
  return;
}

