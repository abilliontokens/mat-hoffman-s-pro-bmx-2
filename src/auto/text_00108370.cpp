/* 24 functions from 0x00108370 to 0x00109370, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001084E0 {
    void func_001084E0(void);
};

struct C_00108610 {
    char pad0[0x20B4];
    int unk20B4;
    int unk20B8;
    void func_00108610(int a0, int a1);
};

struct C_001092D0 {
    char pad0[0x20C0];
    int unk20C0;
    void func_001092D0(int a0);
};

struct C_00108680 {
    char pad0[0xA2C];
    int unkA2C;
    void func_00108680(int a0);
};

struct C_00108670 {
    char pad0[0x20A0];
    int unk20A0;
    int func_00108670(void);
};

struct C_00108660 {
    char pad0[0x20A4];
    int unk20A4;
    int func_00108660(void);
};


void C_001084E0::func_001084E0(void)
{
  int func_00027D40(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x20a8) == 0) {
    *(undefined4 *)(in_ECX + 0x209c) = 1;
    *(undefined4 *)(in_ECX + 0x20a8) = 1;
    func_00027D40();
    return;
  }
  return;
}

void C_00108610::func_00108610(int a0, int a1) {
    unk20B4 = a1;
    unk20B8 = a0;
}

int C_00108660::func_00108660(void) {
    return unk20A4;
}

int C_00108670::func_00108670(void) {
    return unk20A0;
}

void C_00108680::func_00108680(int a0) {
    unkA2C = a0;
}

void C_001092D0::func_001092D0(int a0) {
    unk20C0 = a0;
}

