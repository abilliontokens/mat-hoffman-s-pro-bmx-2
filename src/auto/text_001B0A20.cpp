/* 35 functions from 0x001B0A20 to 0x001B19C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001B0E40 {
    undefined4 func_001B0E40(byte param_1);
};

struct C_001B1840 {
    char pad0[0x64];
    int unk64;
    char pad68[0xC];
    int unk74;
    char pad78[0x48];
    int unkC0;
    void func_001B1840(int a0, int a1, int a2);
};

struct C_001B19A0 {
    void func_001B19A0(undefined4 param_1);
};

struct C_001B1980 {
    char pad0[0x64];
    int unk64;
    char pad68[0x10];
    int unk78;
    int unk7C;
    char pad80[0x40];
    int unkC0;
    void func_001B1980(void);
};

struct C_001B10D0 {
    void func_001B10D0(undefined4 param_1, int param_2);
};

struct C_001B10B0 {
    void func_001B10B0(undefined4 param_1, int param_2);
};

struct C_001B17F0 {
    undefined4 func_001B17F0(void);
};

struct C_001B15E0 {
    char pad0[0x9C];
    float unk9C;
    float func_001B15E0(void);
};

struct C_001B0E90 {
    int unk0;
    void func_001B0E90(void);
};

extern int D_0028C5BC;
extern int D_0028C6E8;

struct C_001D6290 {
    void func_001D6290(int param_1);
};

struct C_001B1800 {
    char pad0[0x24];
    int f24;
    void func_001B1800(int param_1);
};

struct C_001B0E60 {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    void func_001B0E60(int param_1);
};

struct Elem_001B0DC0 {
    void func_001B0970(void);
};

struct Arr_001B0DC0 {
    int count;
    int unk4;
    Elem_001B0DC0 *elems[1];
};

struct C_001B0DC0 {
    void *vtbl;
    char pad4[8];
    Elem_001B0DC0 *unkC;
    Arr_001B0DC0 *unk10;
    void func_001B0DC0(void);
    void func_0001DFF0(void);
};

struct C_001AFCC0 {
    void *func_001AFCC0(int *a0, int a1, int a2, int a3);
};

struct C_001B0D00 {
    char pad0[0xA];
    u8 unkA;
    char padB[1];
    void *unkC;
    int func_001B0280(int a0, int a1);
    int func_001B03A0(int a0);
    int func_001B0460(int a0);
    void func_001B0D00(int param_1);
};


undefined4 C_001B0E40::func_001B0E40(byte param_1)
{
  int func_001B0DC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001B0DC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001B0E90::func_001B0E90(void) {
    extern int D_0028C6E8;
    unk0 = (int)&D_0028C6E8;
}

void C_001B10B0::func_001B10B0(undefined4 param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x10 + param_2 * 4) + 4) = param_1;
  return;
}

void C_001B10D0::func_001B10D0(undefined4 param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x10 + param_2 * 4) + 0xc) = param_1;
  return;
}

int __stdcall func_001B1190(int a0, int a1, int a2, int a3, int a4, int a5, int a6) {
    return 0;
}

float C_001B15E0::func_001B15E0(void) {
    return unk9C;
}

undefined4 C_001B17F0::func_001B17F0(void)
{
  int in_ECX = (int)this;
  
  return **(undefined4 **)(in_ECX + 0x24);
}

void C_001B1840::func_001B1840(int a0, int a1, int a2) {
    unkC0 = a2;
    unk64 = a0;
    unk74 = a1;
}

void C_001B1980::func_001B1980(void) {
    unk64 = 0;
    unk7C = 0;
    unk78 = -1082130432;
    unkC0 = 0;
}

void C_001B19A0::func_001B19A0(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0xc0) == 0) {
    *(undefined4 *)(in_ECX + 0x68) = param_1;
  }
  return;
}

