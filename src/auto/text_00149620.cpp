/* 10 functions from 0x00149620 to 0x0014A610, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_0014A360 {
    undefined4 func_0014A360(int param_1);
};

struct C_0014A540 {
    void func_0014A540(void);
};

struct C_0014A500 {
    undefined4 func_0014A500(byte param_1);
};

struct C_0014A520 {
    int unk0;
    int unk4;
    int unk8;
    C_0014A520* func_0014A520(int a0);
};


undefined4 C_0014A360::func_0014A360(int param_1)
{
  int __stdcall func_00149ED0(int, int);
  int __stdcall func_001FFF40(int, int, int, int, int);
  int in_ECX = (int)this;
  
  func_00149ED0((int)(param_1), (int)(0));
  if (*(int *)(in_ECX + 0x4c) != 0) {
    func_001FFF40((int)(*(undefined4 *)(in_ECX + 0x24 + param_1 * 4)), (int)(0), (int)(0), (int)(*(int *)(in_ECX + 0x4c)), (int)(0));
    return 1;
  }
  return 0;
}

undefined4 C_0014A500::func_0014A500(byte param_1)
{
  int func_0014A420(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0014A420();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0014A520* C_0014A520::func_0014A520(int a0) {
    unk0 = 0;
    unk4 = a0;
    unk8 = 0;
    return this;
}

void C_0014A540::func_0014A540(void)
{
  int func_001E8390(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 8) != 0) {
    func_001E8390(*(int *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  return;
}

