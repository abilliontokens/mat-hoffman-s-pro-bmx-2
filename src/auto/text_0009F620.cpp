/* 12 functions from 0x0009F620 to 0x000A0260, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0009FE40 {
    void func_0009FE40(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4);
};

struct C_000A0090 {
    char pad0[0x38];
    int unk38;
    void func_000A0090(int a0, int a1);
};

struct C_0009FE70 {
    char pad0[0x40];
    int unk40;
    void func_0009FE70(int a0);
};

struct C_0009FAC0 {
    char pad0[0x4];
    int unk4;
    void func_0009FAC0(int a0);
};

struct C_0009FAD0 {
    char pad0[8];
    int unk8;
    int unkC;
    char pad10[0x40];
    float unk50;
    int unk54;
    void func_0009FAD0(int a0, int a1, float a2);
};


void C_0009FAC0::func_0009FAC0(int a0) {
    unk4 = a0;
}

void C_0009FE40::func_0009FE40(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x8c);
  *param_2 = *(undefined4 *)(in_ECX + 0x90);
  *param_3 = *(undefined4 *)(in_ECX + 0x4c);
  *param_4 = *(undefined4 *)(in_ECX + 0x3c);
  return;
}

void C_0009FE70::func_0009FE70(int a0) {
    unk40 = a0;
}

void C_000A0090::func_000A0090(int a0, int a1) {
    unk38 = 1;
}

