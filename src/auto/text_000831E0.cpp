/* 18 functions from 0x000831E0 to 0x00083B50, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00083710 {
    void func_00083710(undefined4 param_1, undefined4 param_2);
};

struct C_000836A0 {
    char pad0[0xCC];
    int unkCC;
    float unkD0;
    void func_000836A0(float a0);
};

struct C_00083B00 {
    char pad0[0x17C];
    int unk17C;
    int unk180;
    void func_00083B00(int a0);
};

struct C_00083960 {
    char pad0[0x204];
    int unk204;
    void func_00083960(void);
};

struct C_00083950 {
    char pad0[0x200];
    int unk200;
    void func_00083950(void);
};


void C_000836A0::func_000836A0(float a0) {
    unkCC = 1;
    unkD0 = a0 + unkD0;
}

void C_00083710::func_00083710(undefined4 param_1, undefined4 param_2)
{
  int func_001ADCC0(...);
  extern undefined D_00276F28;
  int in_ECX = (int)this;
  
  func_001ADCC0(in_ECX + 0xca4,0x32,((undefined *)&D_00276F28),param_1);
  *(undefined4 *)(in_ECX + 0x150) = 1;
  *(undefined4 *)(in_ECX + 0x58) = 1;
  *(undefined4 *)(in_ECX + 0x5c) = param_2;
  return;
}

void C_00083950::func_00083950(void) {
    unk200 = 1;
}

void C_00083960::func_00083960(void) {
    unk204 = 1;
}

void C_00083B00::func_00083B00(int a0) {
    unk17C = 1;
    unk180 = a0;
}

