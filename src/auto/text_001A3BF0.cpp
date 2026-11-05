/* 18 functions from 0x001A3BF0 to 0x001A4B60, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct C_001A40E0 {
    undefined4 func_001A40E0(byte param_1);
};

struct C_001A4420 {
    undefined4 func_001A4420(byte param_1);
};

struct C_001CFE90 {
    int func_001CFE90(int a1, int a2, int a3, int a4, int a5, int a6);
};

struct C_001A4440_Holder {
    char pad0[0xb4];
    C_001CFE90 *fb4;
};

struct C_001A4440_List {
    int count;
    void **items;
    int base;
    int capacity;
    int func_0015ACA0(int a);
};

struct C_001A4440 {
    undefined4 func_001A4440(int a1, int a2, int *a3);
};

struct C_001A4500 {
    undefined4 func_001A4500(int a1, int *a2, int a3);
};
struct C_001A4B30 {
    void func_001A4B30(void);
};

struct C_001A3D80 {
    undefined4 func_001A3D80(byte param_1);
};


undefined4 C_001A3D80::func_001A3D80(byte param_1)
{
  int func_001A2620(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001A2620();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_001A40E0::func_001A40E0(byte param_1)
{
  int func_001A2CF0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_001A2CF0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_001A4420::func_001A4420(byte param_1)
{
  int func_001A3210(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_001A3210();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_001A4440::func_001A4440(int a1, int a2, int *a3)
{
  int func_001E8A44(...);
  int in_ECX = (int)this;
  C_001A4440_List *list;
  int *piVar2;
  int iVar1;
  int iVar3;

  if (a3 != 0) {
    *(int *)(in_ECX + 0x48) = a3[3];
    *(int *)(in_ECX + 0x4c) = a3[4];
  }
  iVar3 = in_ECX + 0x3c;
  iVar1 = ((C_001A4440_Holder *)*(int *)(in_ECX + 0x1a4))->fb4->func_001CFE90(*(int *)(in_ECX + 0x24), a2, 9, 1, iVar3, 0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)func_001E8A44(0x10);
  piVar2[1] = a1;
  *piVar2 = iVar1;
  if (a3 != 0) {
    piVar2[2] = a3[3];
    piVar2[3] = a3[4];
  } else {
    piVar2[2] = 0;
    piVar2[3] = 0;
  }
  list = (C_001A4440_List *)(in_ECX + 0x1c0);
  if (list->count >= list->capacity) {
    if (!list->func_0015ACA0(list->base + list->count)) {
      return 1;
    }
  }
  list->items[list->count] = piVar2;
  list->count++;
  return 1;
}

undefined4 C_001A4500::func_001A4500(int a1, int *a2, int a3)
{
  int in_ECX = (int)this;
  C_001A4440_List *list;
  int iVar1;

  *(int *)(in_ECX + 0x48) = a2[9];
  *(int *)(in_ECX + 0x4c) = a2[10];
  iVar1 = ((C_001A4440_Holder *)*(int *)(in_ECX + 0x1a4))->fb4->func_001CFE90(*(int *)(in_ECX + 0x24), a1, 0x89, 1, in_ECX + 0x3c, 0);
  if (iVar1 == 0) {
    return 0;
  }
  *a2 = iVar1;
  list = (C_001A4440_List *)(in_ECX + (a1 ? 0x1d4 : 0x1e8));
  if (list->count >= list->capacity) {
    if (!list->func_0015ACA0(list->base + list->count)) {
      return 1;
    }
  }
  list->items[list->count] = a2;
  list->count++;
  return 1;
}

void C_001A4B30::func_001A4B30(void)
{
  int func_00133D80(...);
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xa7) = *(byte *)(in_ECX + 0xa7) & 0xdf;
  func_00133D80(*(undefined4 *)(in_ECX + 0x54));
  *(undefined4 *)(*(int *)(in_ECX + 0x54) + 4) = 0;
  return;
}

