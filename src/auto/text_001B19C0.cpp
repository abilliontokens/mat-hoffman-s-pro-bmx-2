/* 33 functions from 0x001B19C0 to 0x001B2910, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001B2270 {
    void func_001B2270(undefined4 param_1);
};

struct C_001B1BF0 {
    void func_001B1BF0(float param_1);
};

struct C_001B2350 {
    undefined4 func_001B2350(void);
};

struct C_001B1C10 {
    void func_001B1C10(int param_1);
};

struct C_001B22E0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_001B22E0* func_001B22E0(void);
};

struct C_001B1B20 {
    int func_001B1B20(void);
};

struct C_001B2340 {
    char pad0[0x4];
    int unk4;
    int unk8;
    void func_001B2340(void);
};

struct C_001B2330 {
    int unk0;
    char pad4[0x4];
    int unk8;
    void func_001B2330(void);
};

struct C_001D6410 {
    void func_001D6410(void);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_001B22A0 {
    undefined4 *func_001B22A0(byte param_1);
};

struct C_001B1B30 {
    void func_001B1B30(float param_1, undefined4 param_2);
};

struct C_001B1B80 {
    void func_001B1B80(undefined4 param_1, float param_2, float param_3,
                       undefined4 param_4, undefined4 param_5, undefined4 param_6);
};

struct C_001B22F0 {
    void func_001B22F0(void);
};


int C_001B1B20::func_001B1B20(void)
{
  int in_ECX = (int)this;
  
  return (int)*(short *)(*(int *)(in_ECX + 0x24) + 0x4c);
}

void C_001B1BF0::func_001B1BF0(float param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if (*(float *)(iVar1 + 0x3c) != param_1) {
    *(float *)(iVar1 + 0x3c) = param_1;
    *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) | 4;
  }
  return;
}

void C_001B1C10::func_001B1C10(int param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if (*(int *)(iVar1 + 0x44) != param_1) {
    *(int *)(iVar1 + 0x44) = param_1;
    *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) | 6;
  }
  return;
}

void C_001B2270::func_001B2270(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0xc0) == 0) {
    *(undefined4 *)(in_ECX + 0x174) = 1;
    *(undefined4 *)(in_ECX + 0x164) = param_1;
  }
  return;
}

undefined4 *C_001B22A0::func_001B22A0(byte param_1)
{
  extern int D_0028C7EC;
  void func_001E891B(void *);
  undefined4 *in_ECX = (undefined4 *)this;
  C_001D6410 *p = (C_001D6410 *)in_ECX[9];

  *in_ECX = (undefined4)&D_0028C7EC;
  if (p != 0) {
    p->func_001D6410();
    func_001E891B(p);
  }
  ((C_00157660 *)in_ECX)->func_00157660();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001B22E0* C_001B22E0::func_001B22E0(void) {
    unk8 = 0;
    unk4 = 0;
    unk0 = 0;
    unkC = 0;
    return this;
}

void C_001B2330::func_001B2330(void) {
    unk8 = unk0;
}

void C_001B2340::func_001B2340(void) {
    unk8 = unk4;
}

undefined4 C_001B2350::func_001B2350(void)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 8) != 0) {
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x98);
  }
  return *(undefined4 *)(in_ECX + 8);
}

