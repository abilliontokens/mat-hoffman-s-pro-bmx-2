/* 10 functions from 0x0012E380 to 0x0012F0F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void *func_001E8A44(int size);

struct C_0013B210 {
    int func_0013B930(int a, void *b, int c, int d);
    void func_0013C8A0(int a, void *b, int c, int d);
};
extern C_0013B210 *D_002BEAAC;
extern int D_002843F4;
extern f32 D_002755EC;
extern f32 D_00275460;

struct C_0012C940 {
    void func_0012C940(int a);
};

/* the 0x18-byte block CarProceduralExtended::f414 points to */
struct S_0012E5F0 {
    int count; /* number of 0x18-byte elements in arr */
    u32 f4;
    void *arr;
    u32 fC;
    u32 f10;
};

/* (0, 0, 0, 1) vector, stored z, y, x, w */
struct V4_0012E5F0 {
    float x;
    float y;
    float z;
    float w;
    V4_0012E5F0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

/* 0x18-byte element of S_0012E5F0::arr */
struct S_0012E5F0_Elem {
    u32 f0;
    u32 f4;
    V4_0012E5F0 v;
};

void *operator new[](unsigned int size);

/* CarProceduralExtended */
struct C_0012EF30 {
    void *vtbl;
    char pad4[0x410];
    S_0012E5F0 *f414;
    char pad418[0xF8];
    f32 f510;
    u32 f514;
    void *f518;
    void *f51c;
    C_0012EF30 *func_0012EF30(int a);
    void func_0012E5F0(int a);
    void func_0012E6B0(int a);
};

struct C_0012E6F0 {
    undefined4 func_0012E6F0(byte param_1);
};


void C_0012EF30::func_0012E5F0(int param_1)
{
    S_0012E5F0 *t = (S_0012E5F0 *)func_001E8A44(0x18);
    f414 = t;
    D_002BEAAC->func_0013C8A0(param_1, t, 4, 1);
    int n = f414->count;
    u32 *arr = 0;
    u32 *q = (u32 *)func_001E8A44(n * 0x18);
    if (q != 0) {
        u32 *p = q + 2;
        int i;
        for (i = 0; i < n; i++) {
            p[2] = 0;
            p[1] = 0;
            p[0] = 0;
            p[3] = 0x3f800000;
            p += 6;
        }
        arr = q;
    }
    f414->arr = arr;
    D_002BEAAC->func_0013C8A0(param_1, f414->arr, 0x18, f414->count);
    f414->f4 = 1;
    f414->f10 = 0;
    f414->fC = 0;
}

void C_0012EF30::func_0012E6B0(int param_1)
{
    D_002BEAAC->func_0013B930(param_1, f414, 4, 1);
    S_0012E5F0 *t = f414;
    D_002BEAAC->func_0013B930(param_1, t->arr, 0x18, t->count);
}

undefined4 C_0012E6F0::func_0012E6F0(byte param_1)
{
  int func_0012CCA0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012CCA0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0012EF30 *C_0012EF30::func_0012EF30(int a)
{
    ((C_0012C940 *)this)->func_0012C940(a);
    f510 = 0;
    f518 = 0;
    f51c = 0;
    vtbl = (void *)&D_002843F4;
    return this;
}

