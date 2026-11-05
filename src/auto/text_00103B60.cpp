/* 17 functions from 0x00103B60 to 0x00104B00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001041C0 {
    void func_001041C0(void);
};

struct C_001048E0 {
    char pad0[0xC4];
    int unkC4;
    char padC8[0x18];
    char unkE0;
    void func_001048E0(void);
};

struct C_001048C0 {
    char pad0[0xC4];
    int unkC4;
    char padC8[0x18];
    char unkE0;
    void func_001048C0(void);
};

struct C_001041A0 {
    void func_001041A0(void);
};

struct C_00104190 {
    void func_00104190(void);
};

extern int D_002828F4;

/* BmxVCRController */
struct C_00104120 {
    void *vtbl;
    char pad4[0xD0 - 4];
    int unkD0;
    int unkD4;
    int unkD8;
    int unkDC;
    char unkE0;
    char padE1[3];
    int unkE4;
    int unkE8;
    void func_00195D90(void);
    C_00104120 *func_00104120(int param_1);
};

struct C_00104900 {
    char pad0[0x74];
    int unk74;
    char pad78[0x8C - 0x78];
    int *unk8C;
    char pad90[0xE8 - 0x90];
    int unkE8;
    void func_00104900(void);
    void func_00104930(void);
};


void C_00104190::func_00104190(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xc0) = *(byte *)(in_ECX + 0xc0) | 4;
  return;
}

void C_001041A0::func_001041A0(void)
{
  int func_00197590(...);
  int in_ECX = (int)this;
  
  func_00197590();
  *(byte *)(in_ECX + 0xc0) = *(byte *)(in_ECX + 0xc0) | 2;
  return;
}

void C_001041C0::func_001041C0(void)
{
  int func_00196BD0(...);
  int in_ECX = (int)this;
  
  func_00196BD0();
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  return;
}

void func_001041E0(void) {
    int func_00196290(...);
    func_00196290();
}

void C_001048C0::func_001048C0(void) {
    unkE0 = 1;
    unkC4 = 1;
}

void C_001048E0::func_001048E0(void) {
    unkE0 = 0;
    unkC4 = 1;
}

