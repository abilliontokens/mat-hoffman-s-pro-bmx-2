/* 6 functions from 0x0011BBB0 to 0x0011CB40, found by Ghidra. */
#include "common.h"

struct S_0011CA20_V4 {
    int x;
    int y;
    int z;
    int w;
};
extern S_0011CA20_V4 D_002A3BBC;

void *func_001E83E8(void *block, unsigned int size);

struct C_001334E0 {
    void func_001334E0(int a);
    void func_001334F0(void *a);
};

struct C_0011CA60 {
    char pad0[0x24];
    S_0011CA20_V4 f24;
    S_0011CA20_V4 f34;
    void func_0011CA60(int a, int b, int c, int d);
};

struct C_0011CAA0 {
    char pad0[0x9C];
    C_001334E0 *f9C;
    C_001334E0 *fA0;
    C_001334E0 *fA4;
    char padA8[0x48];
    void **fF0;
    int fF4;
    void func_0011CAA0(void *a);
};

struct C_0011CA20 {
    char pad0[0x5C];
    S_0011CA20_V4 unk5C;
    char pad6C[0x50];
    int unkBC;
    char padC0[0x6C];
    int unk12C;
    void func_0011CA20();
};

void C_0011CA20::func_0011CA20()
{
    unk5C = D_002A3BBC;
    unkBC = 0;
    unk12C = 0;
}

void C_0011CA60::func_0011CA60(int a, int b, int c, int d)
{
    f34 = f24;
    f24.x = a;
    f24.y = b;
    f24.z = c;
    f24.w = d;
}

void C_0011CAA0::func_0011CAA0(void *a)
{
    f9C->func_001334E0(1);
    f9C->func_001334F0(a);
    fA0->func_001334E0(1);
    fA0->func_001334F0(a);
    fA4->func_001334E0(1);
    fA4->func_001334F0(a);
    fF0 = (void **)func_001E83E8(fF0, fF4 * 4 + 4);
    fF0[fF4] = a;
    fF4++;
}

