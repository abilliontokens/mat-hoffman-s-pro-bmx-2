/* 20 functions from 0x000261F0 to 0x00026B60, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct C_00026290 {
    int unk0;
    void *func_00026290(int flags);
};

struct C_000261F0 {
    char pad0[4];
    float f4;
    char pad8[0x1C];
    float f24;
    float f28;
    void func_000261F0(float delta);
};

struct C_000262B0 {
    char pad0[0x18];
    float f18;
    float f1C;
    void func_000262B0(void);
};

int func_000262C0(float *a, float *b);

struct C_00026A70 {
    undefined4 func_00026A70(int param_1);
};

struct C_00026280 {
    char pad0[0x3C];
    int unk3C;
    void func_00026280(int a0);
};

struct C_00026270 {
    char pad0[0x30];
    int unk30;
    void func_00026270(int a0);
};


void C_000261F0::func_000261F0(float delta)
{
    f4 += delta;
    f4 = f4 > f24 ? f4 : f24;
    f4 = f4 < f28 ? f4 : f28;
}

void C_00026270::func_00026270(int a0) {
    unk30 = a0;
}

void C_00026280::func_00026280(int a0) {
    unk3C = a0;
}

void *C_00026290::func_00026290(int flags) {
    extern int D_00276534;
    void func_001E891B(void *);
    unk0 = (int)&D_00276534;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_000262B0::func_000262B0(void) {
    f18 = f1C;
}

int func_000262C0(float *a, float *b)
{
    if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2]) {
        return 1;
    }
    return 0;
}

undefined4 C_00026A70::func_00026A70(int param_1)
{
  int in_ECX = (int)this;
  
  if ((*(int *)(in_ECX + 0x1d8) != 0) && (*(int *)(*(int *)(in_ECX + 0x1d8) + 0x68) == param_1)) {
    return 1;
  }
  return 0;
}

