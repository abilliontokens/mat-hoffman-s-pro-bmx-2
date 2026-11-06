/* 4 functions from 0x00023CB0 to 0x00024380, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>

struct S_00024210_Vec {
    float x;
    float y;
    float z;
    float w;
};

static __forceinline float sqrt_24210(float x) { return _mm_sqrt_ss(*(__m128 *)&x).m128_f32[0]; }

struct C_00199B00 {
    S_00024210_Vec func_00199B00(int a);
    S_00024210_Vec *func_00199B00(S_00024210_Vec *out, int a);
    void func_00199600(S_00024210_Vec v);
};

struct C_00198390 {
    void func_00198390(void);
};

struct S_00024210_Player {
    char pad0[0x22C];
    C_00199B00 *f22C;
};

struct S_00024210_Slot {
    char pad0[0x1E0];
    S_00024210_Player *f1E0;
};

struct S_00024210_List {
    char pad0[0x1A8];
    S_00024210_Slot *a1A8[1];
};

struct S_00024210_G {
    char pad0[0x4E0];
    S_00024210_List *f4E0;
};

struct S_00024210_Cur {
    char pad0[0x120];
    int f120;
};

struct S_00024210_A {
    char pad0[0x2A4];
    S_00024210_Cur *f2A4;
};

extern S_00024210_A *D_002A8490;
extern S_00024210_G *D_002B9120;
extern float D_0027554C;

struct C_000229C0 {
    char pad0[0x70];
    int *f70;
    void func_000229C0(int a0);
};

void *func_001E8A44(int size);
extern int D_00276294;

struct C_00157600 {
    void func_00157600(int a);
};

/* the 0x1e0-byte object stored at +0x2c */
struct C_00143580 {
    C_00143580 *func_00143580(int a);
};

/* AmbientDebrisType */
struct C_00023C30 {
    float f0;
    float f4;
    float f8;
    int f10;
    int f14;
    int f18;
    int f1C;
    S_00024210_Vec f20;
    S_00024210_Vec f30;
    int f44;
    int f48;
    C_00199B00 *f4C;
    C_00023C30 *func_00023C30(int a, int b, int c, int d);
    int func_00023CB0(int a, S_00024210_Vec v, float len);
    int func_00021B90(int a, S_00024210_Vec v, float len);
};

/* the 0x30-byte record tying the other two together */
struct S_00024140_Link {
    C_00023C30 *f0;
    C_00143580 *f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
    void func_00022060(int a);
    S_00024140_Link *Init(C_00023C30 *a, C_00143580 *b, int c)
    {
        f0 = a;
        fC = 0;
        f10 = 0;
        f14 = 0;
        f18 = 0;
        f1C = 0;
        f20 = 0;
        f24 = 0;
        f28 = 0;
        f2C = 0;
        f4 = b;
        f8 = c;
        return this;
    }
};

struct AmbientDebris {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_00143580 *f2c;
    C_00023C30 *f30;
    S_00024140_Link *f34;
    AmbientDebris *func_00024140(int a, int b);
    int func_00024210(int a);
};

extern C_000229C0 *D_002B7E18;

int C_00023C30::func_00023CB0(int a, S_00024210_Vec v, float len)
{
    return 1;
}

AmbientDebris *AmbientDebris::func_00024140(int a, int b)
{
    void *m;
    S_00024140_Link *link;

    ((C_00157600 *)this)->func_00157600(1);
    vtbl = &D_00276294;
    m = func_001E8A44(0x1e0);
    f2c = m ? ((C_00143580 *)m)->func_00143580(1) : 0;
    m = func_001E8A44(0x54);
    f30 = m ? ((C_00023C30 *)m)->func_00023C30(a, b, (int)f2c, *D_002B7E18->f70) : 0;
    m = func_001E8A44(0x30);
    if (m != 0) {
        link = ((S_00024140_Link *)m)->Init(f30, f2c, *D_002B7E18->f70);
    } else {
        link = 0;
    }
    f24 = 0;
    f28 = 0;
    f34 = link;
    return this;
}

int AmbientDebris::func_00024210(int a)
{
    if (f24 != 0 && f28 != 0) {
        S_00024210_Vec tmpP;
        S_00024210_Vec tmpQ;
        S_00024210_Vec d;
        S_00024210_Vec *p = D_002B9120->f4E0->a1A8[D_002A8490->f2A4->f120]->f1E0->f22C->func_00199B00(&tmpP, 0);
        S_00024210_Vec *q = ((C_00199B00 *)f2c)->func_00199B00(&tmpQ, 0);
        float len;

        d.x = q->x - p->x;
        d.y = q->y - p->y;
        d.z = q->z - p->z;
        d.w = 1.0f;
        len = sqrtf(d.z * d.z + d.y * d.y + d.x * d.x);
        if (len > D_0027554C) {
            f24 = 0;
            ((C_00198390 *)f2c)->func_00198390();
        } else {
            f30->func_00023CB0(a, d, len);
            f34->func_00022060(a);
            return 1;
        }
    }
    return 0;
}

void func_00024360(int a0) {
    D_002B7E18->func_000229C0(a0);
}
