/* 8 functions from 0x0016D6A0 to 0x0016E320, found by Ghidra. */
#include "common.h"

extern int D_00288084;
extern int D_00288894;

void func_001E891B(void *p);

struct C_00169C50 {
    void func_00169C50(void *param);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_Quad {
    float a;
    float b;
    float c;
    float d;
};

struct C_IntQuad {
    int a, b, c, d;
    void Set(int a_, int b_, int c_, int d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

struct C_0016D8A0 {
    char pad0[0x54];
    C_IntQuad f54;
    void func_0016D8A0(int a, int b, int c, int d);
};

struct C_0016DA40 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x150];
    int f194;
    char pad198[0x58];
    int f1F0, f1F4, f1F8, f1FC, f200, f204, f208, f20C;
    C_0016DA40 *func_0016DA40(void *param);
};

struct C_0016E2E0 {
    void *vtbl;
    char pad4[0x1B8];
    void *f1BC;
    void *func_0016E2E0(unsigned int flags);
};

void C_0016D8A0::func_0016D8A0(int a, int b, int c, int d)
{
    C_Quad *p = (C_Quad *)&f54;
    p->a = *(float *)&a;
    p->b = *(float *)&b;
    p->c = *(float *)&c;
    p->d = *(float *)&d;
}

C_0016DA40 *C_0016DA40::func_0016DA40(void *param)
{
    u32 *p;
    ((C_00169C50 *)this)->func_00169C50(param);
    vtbl = (void *)&D_00288894;
    p = (u32 *)&f1F0;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f200;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f34 = f24;
    f194 = 0;
    return this;
}

void *C_0016E2E0::func_0016E2E0(unsigned int flags)
{
    vtbl = (void *)&D_00288084;
    if (f1BC != 0) {
        func_001E891B(f1BC);
    }
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

