/* 42 functions from 0x0005B8D0 to 0x0005C720, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0005C120 {
    undefined4 func_0005C120(int param_1);
};

struct C_0005C710 {
    char pad0[0xCE8];
    int unkCE8;
    void func_0005C710(void);
};

struct C_0005C390 {
    char pad0[0xCE4];
    int unkCE4;
    void func_0005C390(void);
};

struct C_0005C370 {
    char pad0[0xCE0];
    int unkCE0;
    void func_0005C370(void);
};

struct C_0005C110 {
    char pad0[0xB34];
    int unkB34;
    void func_0005C110(void);
};

struct C_0005C100 {
    char pad0[0xB30];
    int unkB30;
    void func_0005C100(void);
};

struct C_0005C090 {
    char pad0[0xCEC];
    int unkCEC;
    void func_0005C090(void);
};

struct C_0005C6A0 {
    undefined * func_0005C6A0(void);
};

struct C_0005C700 {
    char pad0[0xCE8];
    int unkCE8;
    int func_0005C700(void);
};

struct C_0005C380 {
    char pad0[0xCE4];
    int unkCE4;
    int func_0005C380(void);
};

struct C_0005C360 {
    char pad0[0xCE0];
    int unkCE0;
    int func_0005C360(void);
};

struct C_0005C0F0 {
    char pad0[0xB34];
    int unkB34;
    int func_0005C0F0(void);
};

struct C_0005C0E0 {
    char pad0[0xB30];
    int unkB30;
    int func_0005C0E0(void);
};

struct C_0005C0A0 {
    char pad0[0xCEC];
    int unkCEC;
    int func_0005C0A0(void);
};


void C_0005C090::func_0005C090(void) {
    unkCEC = 1;
}

int C_0005C0A0::func_0005C0A0(void) {
    return unkCEC;
}

int C_0005C0E0::func_0005C0E0(void) {
    return unkB30;
}

int C_0005C0F0::func_0005C0F0(void) {
    return unkB34;
}

void C_0005C100::func_0005C100(void) {
    unkB30 = 1;
}

void C_0005C110::func_0005C110(void) {
    unkB34 = 1;
}

undefined4 C_0005C120::func_0005C120(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xb38 + param_1 * 4);
}

int C_0005C360::func_0005C360(void) {
    return unkCE0;
}

void C_0005C370::func_0005C370(void) {
    unkCE0 = 1;
}

int C_0005C380::func_0005C380(void) {
    return unkCE4;
}

void C_0005C390::func_0005C390(void) {
    unkCE4 = 1;
}

undefined * C_0005C6A0::func_0005C6A0(void)
{
  extern undefined D_00014970;
  int in_ECX = (int)this;
  
  return ((undefined *)&D_00014970) + in_ECX;
}

int C_0005C700::func_0005C700(void) {
    return unkCE8;
}

void C_0005C710::func_0005C710(void) {
    unkCE8 = 1;
}

