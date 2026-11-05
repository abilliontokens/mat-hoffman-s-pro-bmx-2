/* 8 functions from 0x0012C540 to 0x0012D460, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
extern int D_00284274;
extern int D_002A3FD8, D_002A3FDC, D_002A3FE0, D_002A3FE4;
extern int D_002A3FF8, D_002A3FFC, D_002A4000, D_002A4004;

struct C_0012C940 {
    void func_00171270(int a0);
    void func_001719D0(float a0);
    C_0012C940 *func_0012C940(int a0);
};

struct C_0013B210 {
    void func_0013B210(void *);
};
extern C_0013B210 *D_002BEAAC;
void func_001E891B(void *);

struct C_0012C8F0 {
    undefined4 func_0012C8F0(byte param_1);
};

struct C_0012C910 {
    void func_0012C540(int a, int b);
    void func_001D3F50();
    void func_0012C910(int a, int b);
};

struct C_0012CC20 {
    char pad0[0x228];
    int unk228;
    void func_0012CC20(int a);
};

struct C_0012CCA0_Ref {
    int unk0;
    u32 unk4;
    void *unk8;
};

struct C_0012CCA0 {
    void *vtbl;
    char pad4[0x410];
    C_0012CCA0_Ref *unk414;
    char pad418[0xE8];
    void *unk500;
    void func_00170B50();
    void func_0012CCA0();
};


undefined4 C_0012C8F0::func_0012C8F0(byte param_1)
{
  int func_0012C4E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012C4E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_0012C910::func_0012C910(int a, int b)
{
    func_0012C540(a, b);
    func_001D3F50();
}

float func_0012C930(float a, float b)
{
    return (float)fmod(a, b);
}

C_0012C940 *C_0012C940::func_0012C940(int a0)
{
    int *u;
    int *p;
    func_00171270(a0);
    u = (int *)this;
    u[0] = (int)&D_00284274;
    p = &u[0x418 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x428 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x438 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x448 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x458 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x468 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x478 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x488 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    u[0x4A4 / 4] = 0; u[0x404 / 4] = 0; u[0x498 / 4] = 0; u[0x49C / 4] = 0;
    u[0x4A8 / 4] = 0; u[0x4B4 / 4] = 0; u[0x4B8 / 4] = 0; u[0x4BC / 4] = 0;
    u[0x4C0 / 4] = 0x42f00000;
    u[0x4C8 / 4] = 0; u[0x4CC / 4] = 0; u[0x4D0 / 4] = 0;
    u[0x4F0 / 4] = 0x3f000000; u[0x4F4 / 4] = 0x3e4ccccd;
    u[0x4DC / 4] = 0; u[0x4E0 / 4] = 0; u[0x4E4 / 4] = 0; u[0x4E8 / 4] = 0; u[0x4EC / 4] = 0;
    u[0x4F8 / 4] = 0xff7fffff;
    u[0x4B0 / 4] = 1; u[0x4A0 / 4] = 1;
    u[0x418 / 4] = D_002A3FD8; u[0x41C / 4] = D_002A3FDC; u[0x420 / 4] = D_002A3FE0; u[0x424 / 4] = D_002A3FE4;
    u[0x428 / 4] = D_002A3FD8; u[0x42C / 4] = D_002A3FDC; u[0x430 / 4] = D_002A3FE0; u[0x434 / 4] = D_002A3FE4;
    u[0x438 / 4] = D_002A3FD8; u[0x43C / 4] = D_002A3FDC; u[0x440 / 4] = D_002A3FE0; u[0x444 / 4] = D_002A3FE4;
    u[0x448 / 4] = D_002A3FD8; u[0x44C / 4] = D_002A3FDC; u[0x450 / 4] = D_002A3FE0; u[0x454 / 4] = D_002A3FE4;
    u[0x458 / 4] = D_002A3FD8; u[0x45C / 4] = D_002A3FDC; u[0x460 / 4] = D_002A3FE0; u[0x464 / 4] = D_002A3FE4;
    u[0x468 / 4] = D_002A3FF8; u[0x46C / 4] = D_002A3FFC; u[0x470 / 4] = D_002A4000; u[0x474 / 4] = D_002A4004;
    u[0x4FC / 4] = 0; u[0x400 / 4] = 0; u[0x500 / 4] = 0; u[0x408 / 4] = 0;
    u[0x40C / 4] = 0; u[0x410 / 4] = 0; u[0x414 / 4] = 0; u[0x4AC / 4] = 0;
    func_001719D0(10000.0f);
    return this;
}

void C_0012CC20::func_0012CC20(int a)
{
    unk228 = a;
}

void C_0012CCA0::func_0012CCA0()
{
    vtbl = &D_00284274;
    if (unk500) {
        func_001E891B(unk500);
    }
    if (unk414) {
        unk414->unk4--;
        if (unk414->unk4 <= 0) {
            D_002BEAAC->func_0013B210(unk414);
            func_001E891B(unk414->unk8);
            func_001E891B(unk414);
        }
    }
    func_00170B50();
}

