/* 19 functions from 0x001A0C90 to 0x001A1C90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
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

bool C_001A1850::func_001A1850(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x1bc) != 0;
}
