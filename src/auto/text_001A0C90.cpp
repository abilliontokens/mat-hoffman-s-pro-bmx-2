/* 19 functions from 0x001A0C90 to 0x001A1C90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001A1650 {
    undefined4 func_001A1650(undefined4 *param_1);
};

struct C_001A1620 {
    undefined4 func_001A1620(undefined4 *param_1);
};

struct C_001A15F0 {
    undefined4 func_001A15F0(undefined4 *param_1);
};

struct C_001A15C0 {
    undefined4 func_001A15C0(undefined4 *param_1);
};

struct C_001A1850 {
    bool func_001A1850(void);
};

extern int D_0028B3A0;
void func_001CBC10(int e, void *file, int line);

/* returns true (and reports) when hr is a failure code */
static inline bool CheckFailed(int hr, int line) {
    if (hr < 0) {
        func_001CBC10(hr, &D_0028B3A0, line);
        return true;
    }
    return false;
}

/* object held at +4 of C_001A13F0 */
struct S_001A13F0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    int func_001D7D00(void);
    int func_001D6C40(int a, int b);
};

struct C_001A13F0 {
    char pad0[4];
    S_001A13F0_Obj *unk4;
    void func_001A13F0(void);
    bool func_001A1410(void);
    bool func_001A1450(int a);
};

/* object held at +0x1BC of C_001A1C70 */
struct S_001A1C70_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual int v8(int a);
};

struct C_001A1C70 {
    char pad0[0x1BC];
    S_001A1C70_Obj *unk1BC;
    int func_001A1C70(int a);
};


undefined4 C_001A15C0::func_001A15C0(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return 1;
}

undefined4 C_001A15F0::func_001A15F0(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 8) = *param_1;
  *(undefined4 *)(iVar1 + 0xc) = param_1[1];
  *(undefined4 *)(iVar1 + 0x10) = param_1[2];
  return 1;
}

undefined4 C_001A1620::func_001A1620(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x38);
  param_1[1] = *(undefined4 *)(iVar1 + 0x3c);
  param_1[2] = *(undefined4 *)(iVar1 + 0x40);
  return 1;
}

undefined4 C_001A1650::func_001A1650(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x38) = *param_1;
  *(undefined4 *)(iVar1 + 0x3c) = param_1[1];
  *(undefined4 *)(iVar1 + 0x40) = param_1[2];
  return 1;
}

bool C_001A1850::func_001A1850(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x1bc) != 0;
}
