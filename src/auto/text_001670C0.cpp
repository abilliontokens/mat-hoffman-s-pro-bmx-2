/* 15 functions from 0x001670C0 to 0x00167FE0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00167750 {
    undefined4 func_00167750(void);
};

struct C_001677B0 {
    char pad0[0x358];
    int unk358;
    void func_001677B0(int a0);
};

extern int D_00287F64;
extern float D_00275544;
extern float D_00287EC8;
extern float D_00275460;
extern float D_00287EC4;
extern float D_00287EC0;
extern float D_002755EC;

void *func_001E8AA5(unsigned int size);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00167AC0_Sub {
    char pad0[0x8];
    void func_001D3F50(void);
};

struct C_00167AC0 {
    C_00167AC0_Sub subs[4];
    C_00167AC0 *func_00167AC0(void);
};

struct C_001676D0 {
    int *f0;
    int f4;
    C_001676D0 *func_001676D0(int n);
};

struct C_00167760 {
    void *vtbl;
    char pad4[0x24];
    u32 f28;
    char pad2c[0x320];
    u32 f34c;
    u32 f350;
    u32 f354;
    u32 f358;
    u32 f35c;
    void *f360;
    C_00167760 *func_00167760(int a0);
};

struct S_001677C0_Block {
    u32 w[16];
};

struct S_001677C0_Src {
    char pad0[0x70];
    S_001677C0_Block blk;
};

struct C_001677C0_Dst {
    char pad0[0x10];
    S_001677C0_Block blk;
    void *f50;
    u32 f54;
    u32 f58;
    u32 f5c;
    u32 f60;
};

struct C_001677C0 {
    char pad0[0x24];
    S_001677C0_Src *f24;
    void func_001677C0(C_001677C0_Dst *dst);
};


C_001676D0 *C_001676D0::func_001676D0(int n)
{
    float t;
    int i;

    f4 = n + 1;
    f0 = (int *)func_001E8AA5((n + 1) * 4);
    t = D_00275544;
    i = 0;
    if (f4 > 0) {
        do {
            i++;
            ((float *)f0)[i - 1] = t * t * D_00287EC4 + (D_00275460 - t * D_00287EC8) - t * t * t * D_00287EC0;
            t = t + D_002755EC / f4;
        } while (i < f4);
    }
    return this;
}

undefined4 C_00167750::func_00167750(void)
{
  int func_001D3F50(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D3F50();
  return in_ECX;
}

C_00167760 *C_00167760::func_00167760(int a0)
{
    ((C_00157600 *)this)->func_00157600(a0);
    f350 = 0;
    f28 = 0;
    f34c = 0;
    f360 = 0;
    vtbl = &D_00287F64;
    f358 = 0x43fa0000;
    f35c = 0x43c80000;
    return this;
}

void C_001677B0::func_001677B0(int a0) {
    unk358 = a0;
}

void C_001677C0::func_001677C0(C_001677C0_Dst *dst)
{
    S_001677C0_Block * volatile src;
    S_001677C0_Block * volatile dp;
    volatile u32 a;
    volatile u32 b;
    volatile u32 c;
    volatile u32 d;
    u32 *p;

    dst->f50 = f24;
    src = &f24->blk;
    dp = &dst->blk;
    *dp = *src;
    ((u32 *)&dst->blk)[3] = 0x3f000000;
    ((u32 *)&dst->blk)[7] = 0x3f000000;
    p = (u32 *)&dst->f54;
    a = 0x3f800000;
    p[0] = a;
    b = 0x3f800000;
    p[1] = b;
    c = 0x3f800000;
    p[2] = c;
    d = 0x3e99999a;
    p[3] = d;
}

C_00167AC0 *C_00167AC0::func_00167AC0(void)
{
    C_00167AC0_Sub *p = subs;
    int n = 4;

    do {
        p->func_001D3F50();
        p++;
        n--;
    } while (n != 0);
    return this;
}

