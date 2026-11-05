/* 4 functions from 0x0011CB40 to 0x0011D2F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0011CEE0 {
    undefined4 func_0011CEE0(byte param_1);
};

extern int D_00283E1C;

/* BMXWrecker */
struct C_0011CB40 {
    void *vtbl;
    char pad4[0xa4];
    void *fA8;
    void *fAC;
    void *fB0;
    void *fB4;
    char padB8[0x10];
    void *fC8;
    char padCC[0x24];
    void *fF0;
    char padF4[4];
    void *fF8;
    void *fFC;
    void *f100;
    void *f104;
    void *f108;
    void func_0011CB40(void);
    void func_00157660(void);
    C_0011CB40 *func_0011CBF0(int a0);
    void func_00157600(int a0);
};

extern int D_002A3BBC[4];


void C_0011CB40::func_0011CB40(void)
{
    void func_001E891B(void *p);
    void func_001E8390(void *p);

    vtbl = &D_00283E1C;
    func_001E891B(fA8);
    func_001E891B(fAC);
    func_001E891B(fB0);
    func_001E891B(fB4);
    func_001E891B(fF8);
    func_001E891B(fFC);
    func_001E891B(f100);
    func_001E891B(f104);
    func_001E891B(f108);
    if (fF0 != 0) {
        func_001E8390(fF0);
    }
    if (fC8 != 0) {
        func_001E8390(fC8);
    }
    func_00157660();
}

void *func_001E8A44(unsigned int n);
C_0011CB40 *C_0011CB40::func_0011CBF0(int a0)
{
    struct Q4 { int x, y, z, w; };
    int *u;
    int *p;
    int i;
    func_00157600(a0);
    u = (int *)this;
    u[0] = (int)&D_00283E1C;
    p = &u[0x24 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x34 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x48 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x5c / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x6c / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xd0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xe0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x134 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x154 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x168 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x178 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x188 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x198 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x1c0 / 4];
    i = 3;
    do { p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000; p += 4; } while (--i);
    p = &u[0x1f0 / 4];
    i = 3;
    do { p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000; p += 4; } while (--i);
    p = (int *)func_001E8A44(0x14);
    if (p) { p[0] = 0; p[1] = 0x3dcccccd; p[3] = 0x7f7fffff; p[4] = 0xff7fffff; p[2] = 0x3f800000; } else p = 0;
    u[0xa8 / 4] = (int)p;
    p = (int *)func_001E8A44(0x14);
    if (p) { p[0] = 0x3f800000; p[1] = 0x3dcccccd; p[3] = 0x7f7fffff; p[4] = 0xff7fffff; p[2] = 0x3f800000; } else p = 0;
    u[0xac / 4] = (int)p;
    p = (int *)func_001E8A44(0x14);
    if (p) { p[0] = 0; p[1] = 0x3dcccccd; p[3] = 0x7f7fffff; p[4] = 0xff7fffff; p[2] = 0x3f800000; } else p = 0;
    u[0xb0 / 4] = (int)p;
    p = (int *)func_001E8A44(0x14);
    if (p) { p[0] = 0; p[1] = 0x40600000; p[3] = 0x7f7fffff; p[4] = 0xff7fffff; p[2] = 0x3f800000; } else p = 0;
    u[0xb4 / 4] = (int)p;
    u[0x8c / 4] = 0; u[0x90 / 4] = 0; u[0x80 / 4] = 0; u[0x84 / 4] = 0;
    u[0xbc / 4] = 0; u[0xc0 / 4] = 0; u[0x12c / 4] = 0; u[0xf0 / 4] = 0;
    u[0xf4 / 4] = 0; u[0xc8 / 4] = 0; u[0xcc / 4] = 0;
    *(Q4 *)&u[0x6c / 4] = *(Q4 *)D_002A3BBC;
    u[0x7c / 4] = 0; u[0xf8 / 4] = 0; u[0xfc / 4] = 0; u[0x100 / 4] = 0;
    u[0x104 / 4] = 0; u[0x108 / 4] = 0; u[0x120 / 4] = 0; u[0x124 / 4] = 0;
    u[0x128 / 4] = 0; u[0x130 / 4] = 0; u[0x44 / 4] = 0;
    *(Q4 *)&u[0x48 / 4] = *(Q4 *)D_002A3BBC;
    u[0x1ac / 4] = 0;
    return this;
}

undefined4 C_0011CEE0::func_0011CEE0(byte param_1)
{
  int func_0011CB40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0011CB40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
