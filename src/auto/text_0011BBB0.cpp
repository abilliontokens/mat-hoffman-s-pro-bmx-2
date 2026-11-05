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

struct C_0011C900_A {
    char pad0[0x18];
    int f18;
    char pad1C[0x1E8];
    S_0011CA20_V4 *f204;
    void func_00166C80(int a, int b);
};
struct C_0011C900_B {
    void func_00199A70(int a, S_0011CA20_V4 *b);
};
struct C_0011C900 {
    char pad0[0x24];
    S_0011CA20_V4 f24;
    S_0011CA20_V4 f34;
    int f44;
    S_0011CA20_V4 f48;
    char pad58[4];
    S_0011CA20_V4 f5C;
    S_0011CA20_V4 f6C;
    int f7C;
    char pad80[4];
    C_0011C900_A *f84;
    C_0011C900_B *f88;
    int f8C;
    char pad90[0x28];
    int fB8;
    int fBC;
    int fC0;
    int fC4;
    char padC8[0x64];
    int f12C;
    char pad130[0x58];
    S_0011CA20_V4 f188;
    void func_0011C900(S_0011CA20_V4 a, S_0011CA20_V4 b, S_0011CA20_V4 c, int d);
};

static inline void SetV4(S_0011CA20_V4 *v, int x, int y, int z, int w)
{
    v->x = x;
    v->y = y;
    v->z = z;
    v->w = w;
}

static inline void CopyV4(S_0011CA20_V4 *dst, S_0011CA20_V4 src)
{
    *dst = src;
}

void C_0011CA20::func_0011CA20()
{
    unk5C = D_002A3BBC;
    unkBC = 0;
    unk12C = 0;
}

void C_0011CA60::func_0011CA60(int a, int b, int c, int d)
{
    f34 = f24;
    S_0011CA20_V4 *p = &f24;
    p->x = a;
    p->y = b;
    p->z = c;
    p->w = d;
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

