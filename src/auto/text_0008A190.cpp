/* 27 functions from 0x0008A190 to 0x0008AED0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0008A8F0 {
    undefined4 func_0008A8F0(int param_1);
};

struct C_0008AB90 {
    char pad0[0x28];
    int unk28;
    int func_0008AB90(int a0);
};

struct C_0008A9A0 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A9A0(void);
};

struct C_0008A990 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A990(void);
};

struct C_0008A980 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A980(void);
};

struct C_0008A970 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A970(void);
};

struct C_0008A960 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A960(void);
};

struct C_0008A950 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A950(void);
};

struct C_0008A940 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A940(void);
};

struct C_0008A930 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A930(void);
};

struct C_0008A920 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A920(void);
};

struct C_0008A910 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A910(void);
};


undefined4 C_0008A8F0::func_0008A8F0(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 == 0) {
    return 0;
  }
  *(int *)(in_ECX + 0x4d0) = param_1;
  return 1;
}

void C_0008A910::func_0008A910(void) {
    unk4D8 = 1;
}

void C_0008A920::func_0008A920(void) {
    unk4D8 = 2;
}

void C_0008A930::func_0008A930(void) {
    unk4D8 = 3;
}

void C_0008A940::func_0008A940(void) {
    unk4D8 = 4;
}

void C_0008A950::func_0008A950(void) {
    unk4D8 = 6;
}

void C_0008A960::func_0008A960(void) {
    unk4D8 = 5;
}

void C_0008A970::func_0008A970(void) {
    unk4D8 = 7;
}

void C_0008A980::func_0008A980(void) {
    unk4D8 = 8;
}

void C_0008A990::func_0008A990(void) {
    unk4D8 = 9;
}

void C_0008A9A0::func_0008A9A0(void) {
    unk4D8 = 10;
}

int C_0008AB90::func_0008AB90(int a0) {
    unk28 = a0;
    return 1;
}

