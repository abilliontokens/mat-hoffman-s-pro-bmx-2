/* 32 functions from 0x001941F0 to 0x00195190, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00194720 {
    undefined4 func_00194720(byte param_1);
};

struct C_00194310 {
    char pad0[0x44];
    int unk44;
    int unk48;
    void func_00194310(int a0, int a1);
};

struct C_00194C70 {
    char pad0[0xC];
    int unkC;
    char pad10[0x14];
    int unk24;
    int func_00194C70(void);
};

struct C_00194F90 {
    char pad0[0x48];
    int unk48;
    void func_00194F90(int a0);
};

struct C_00194DB0 {
    int unk0;
    void func_00194DB0(void);
};

struct C_00194C60 {
    char pad0[0x24];
    int unk24;
    void func_00194C60(void);
};


void C_00194310::func_00194310(int a0, int a1) {
    unk48 = a0;
    unk44 = a1;
}

undefined4 C_00194720::func_00194720(byte param_1)
{
  int func_001942C0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001942C0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00194C60::func_00194C60(void) {
    unk24 = 0;
}

int C_00194C70::func_00194C70(void) {
    unkC = 0;
    unk24 = 0;
    return 1;
}

void C_00194DB0::func_00194DB0(void) {
    extern int D_0028AED0;
    int func_0012B540(...);
    unk0 = (int)&D_0028AED0;
    func_0012B540();
}

void C_00194F90::func_00194F90(int a0) {
    unk48 = a0;
}

