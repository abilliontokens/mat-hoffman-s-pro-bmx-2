/* 28 functions from 0x00192470 to 0x00193240, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00192BD0 {
    undefined4 func_00192BD0(int param_1);
};

struct C_00192B50 {
    undefined4 func_00192B50(byte param_1);
};

struct C_001926D0 {
    undefined4 func_001926D0(byte param_1);
};


struct C_00192470 {
    char pad0[0x28];
    int f28;
    int f2c;
    int f30;
    int **f34;
    int *f38;
    int f3C;
    int f40;
    int *func_00192470(int *param_1);
    void func_001924E0(int a1, int *a2, int a3, int a4);
    int func_00192570();
};

struct C_00192CA0 {
    int unk0;
    C_00192CA0 *func_00192CA0(unsigned int flags);
};

undefined4 C_001926D0::func_001926D0(byte param_1)
{
  int func_00192420(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00192420();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00192B50::func_00192B50(byte param_1)
{
  int in_ECX = (int)this;
  
  if ((param_1 & 1) != 0) {
    return *(undefined4 *)(in_ECX + 0x28);
  }
  if ((param_1 & 2) != 0) {
    return *(undefined4 *)(in_ECX + 0x2c);
  }
  return 0;
}

undefined4 C_00192BD0::func_00192BD0(int param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x34)) {
    piVar2 = *(int **)(in_ECX + 0x30);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x34));
  }
  return 0;
}

