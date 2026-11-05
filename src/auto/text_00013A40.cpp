/* 5 functions from 0x00013A40 to 0x000149A0, found by Ghidra. */
#include "common.h"

struct S_11FF0_State3 {
    void *vtbl;
    int f4;
    char pad8[8];
    int f10;
    char pad14[8];
    int **f1c;
    void func_00012240(void *arg1, float arg2);
};

struct S_11FF0_StateA {
    void *vtbl;
    char pad4[4];
    int f8;
    char padC[8];
    int f14;
    char pad18[8];
    int **f20;
    void func_000122E0(void *arg1, float arg2);
};

struct S_11FF0_StateB {
    void *vtbl;
    char pad4[8];
    int fC;
    char pad10[8];
    int f18;
    char pad1C[8];
    int **f24;
    void func_00012380(void *arg1, float arg2);
};

struct C_00013F50_Dst {
    char pad0[0x3AC];
    int f3ac;
    char pad3b0[0x31];
    u8 f3e1;
};

struct C_00013F50 {
    char pad0[4];
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int *f1c;
    int *f20;
    int *f24;
    void func_00013F50(C_00013F50_Dst *dst, int kind, void *arg1, float arg2);
};

extern int D_002754CC;
extern int D_002754B8;

void func_001E891B(void *p);

/* an owned component with a virtual teardown at slot 2 */
struct S_00014020_Part {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
};

/* a small heap object whose destructor only resets its vtable */
struct S_00014020_Small {
    void *vtbl;
};

/* the ref-counted block shared by every instance */
struct S_00014020_Shared {
    int refs;
    char pad4[0x18];
    void *f1c;
    void *f20;
    void *f24;
};

extern S_00014020_Shared *D_002AF44C;

/* AIPedestrian */
struct C_00014020 {
    void *vtbl;
    char pad4[0x380];
    S_00014020_Part *f384;
    S_00014020_Small *f388;
    S_00014020_Small *f38C;
    S_00014020_Small *f390;
    S_00014020_Small *f394;
    S_00014020_Small *f398;
    S_00014020_Small *f39C;
    S_00014020_Small *f3A0;
    S_00014020_Small *f3A4;
    S_00014020_Small *f3A8;
    void func_00014020();
    void func_001C75A0();
};

void C_00013F50::func_00013F50(C_00013F50_Dst *dst, int kind, void *arg1, float arg2)
{
    dst->f3ac = 0;
    switch (kind) {
    case 0:
        if (f20 != 0) {
            ((S_11FF0_StateA *)this)->func_000122E0(arg1, arg2);
            dst->f3ac = f20[f8];
            dst->f3e1 = 1;
        }
        break;
    case 1:
        if (f1c != 0) {
            ((S_11FF0_State3 *)this)->func_00012240(arg1, arg2);
            dst->f3ac = f1c[f4];
            dst->f3e1 = 1;
        }
        break;
    case 2:
        if (f24 != 0) {
            ((S_11FF0_StateB *)this)->func_00012380(arg1, arg2);
            dst->f3ac = f24[fC];
            dst->f3e1 = 1;
        }
        break;
    }
}

void C_00014020::func_00014020()
{
    S_00014020_Small *p;
    S_00014020_Shared *s;

    vtbl = &D_002754CC;
    if (f384 != 0) {
        f384->vf2();
    }
    p = f388;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f38C;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f390;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f394;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f398;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f39C;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f3A0;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f3A4;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f3A8;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    D_002AF44C->refs--;
    s = D_002AF44C;
    if (s->refs <= 0) {
        func_001E891B(s->f1c);
        func_001E891B(s->f20);
        func_001E891B(s->f24);
        func_001E891B(s);
        D_002AF44C = 0;
    }
    func_001C75A0();
}

