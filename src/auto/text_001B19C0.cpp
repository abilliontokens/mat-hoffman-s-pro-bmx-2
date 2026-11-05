/* 33 functions from 0x001B19C0 to 0x001B2910, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
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


int C_001B1B20::func_001B1B20(void)
{
  int in_ECX = (int)this;
  
  return (int)*(short *)(*(int *)(in_ECX + 0x24) + 0x4c);
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

