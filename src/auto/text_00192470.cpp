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
    char pad0[0xE];
    unsigned char fE;
    char padF[0x19];
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
    void func_00192610();
    void func_00192630();
    void func_00192680();
    void func_00192840(void *row, void *limit);
    void func_001927C0(void *row, int limit);
};

struct C_00192CA0 {
    int unk0;
    C_00192CA0 *func_00192CA0(unsigned int flags);
};

int *C_00192470::func_00192470(int *param_1)
{
    void *func_001E83E8(void *, int);
    void *func_001E8AA5(int);
    int *p = param_1;
    if (p == 0) {
        p = f38;
        if (p == 0) {
            if (f30 == f28) {
                f34 = (int **)func_001E83E8(f34, f2c * 4 + 4);
                f34[f2c] = (int *)func_001E8AA5(f28 * 4);
                f2c++;
                f30 = 0;
            }
            p = f34[f2c - 1] + f30;
        }
    }
    return p;
}

void C_00192470::func_001924E0(int a1, int *a2, int a3, int a4)
{
    if (f38 != 0 && a2 == f38) {
        f38 = (int *)(*(int *)f38 & 0xfffffffc);
        *a2 = a1;
    } else {
        f30++;
        *a2 = a1;
    }
}

int C_00192470::func_00192570()
{
    int *row;
    if (f34 != 0) {
        int count = f2c;
        row = f34[f3C];
        while (f3C < f2c - 1) {
            while (f40 < f28 && (row[f40] & 2) != 0) {
                f40++;
            }
            if (f40 < f28) {
                goto found;
            }
            f3C++;
            row = f34[f3C];
            f40 = 0;
        }
        if (f3C < count) {
            while (f40 < f30 && (row[f40] & 2) != 0) {
                f40++;
            }
            if (f40 < f30) {
                goto found;
            }
            f3C++;
        }
    }
    return 0;
found:
    return row[f40++];
}

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

C_00192CA0 *C_00192CA0::func_00192CA0(unsigned int flags)
{
    void func_001E891B(void *);
    void func_00192930();
    func_00192930();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

