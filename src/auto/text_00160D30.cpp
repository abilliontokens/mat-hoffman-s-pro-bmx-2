/* 25 functions from 0x00160D30 to 0x00161C70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct C_00161600 {
    undefined4 func_00161600(byte param_1);
};

struct C_00161850 {
    undefined4 func_00161850(int param_1);
};

extern int D_00287AF4;
extern int D_00287AD8;
extern int D_002EB254;
extern int D_002E2978;
extern int D_002EB250;
extern int D_002EB268;
extern int D_002EBE68;
extern int D_002EBE70;
extern int D_002EBE78;
extern void **D_002EBE7C;

void func_001E891B(void *p);
void *func_001E8A44(int size);
extern "C" double cos(double x);
extern "C" double sin(double x);
#pragma intrinsic(cos, sin)
int __stdcall func_001DCA56(void *a, void *b);
void func_001613B0(void);

struct S_002A8490 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual int v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    void func_001D13D0(char *a0);
};
extern S_002A8490 *D_002A8490;

struct S_00161620_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    S_00161620_Obj *func_00147490();
    void func_001B0A20(int a);
    void func_001B0620();
    void func_001B0650();
};

struct S_001B0FC0 {
    void func_001B0FC0();
};
extern S_001B0FC0 *D_002F0630;
extern int D_002EBE98;
int func_001EA426(const char *a, const char *b);
void func_00162530(float *m, float a2, float a3, float a4, float a5, int a6);

struct __declspec(align(16)) S_Matrix16_00161AA0 {
    float m[16];
};

struct S_00161620_Entry {
    int f0;
    S_00161620_Obj *f4;
    int f8;
    int fC;
};

struct C_00161870 {
    void *vtbl;
    char pad4[4];
    int f8;
    char padC[8];
    S_00161620_Entry *f14;
    char pad18[8];
    char f20;
    char pad21[0xb];
    void *func_00161870(unsigned int flags);
    void func_001616F0();
    void func_00161760();
    int func_001617F0(const char *name, int unused);
    void func_00161620();
    void func_00161680();
    void func_001AC3D0();
};

struct S_00161170 {
    int unk0;
    int unk4;
    int unk8;
};

struct S_001B2340_Elem {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct S_001B22E0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    void func_001B22E0();
    S_001B2340_Elem *func_001B2340();
    void func_001B2370(S_001B2340_Elem *e);
    void func_001B22F0();
};

struct C_00161580 {
    void *vtbl;
    int unk4;
    S_001B22E0 sub8;
    int unk18;
    void *func_00161580(void);
    void func_0001DFE0();
    void func_0001DFF0();
    void func_001615B0(void);
};


void __fastcall func_00161170(int unused, S_00161170 *table)
{
    unsigned int i;
    for (i = 0; i < 0x88cf; i++) {
        unsigned int hi = i >> 8;
        unsigned int lo = i & 0xff;
        table[(hi << 8) + lo].unk0 = -1;
    }
    D_002EB254 = 0x103;
    D_002E2978 = 9;
    D_002EB250 = 0x1ff;
}

int func_001614C0(void)
{
    char buf[256];
    int i;

    if (func_001DCA56(&D_002EBE68, &D_002EB268) == 0 && D_002EBE68 == 3) {
        func_001613B0();
    }
    D_002A8490->v2();
    buf[0] = 0;
    D_002A8490->func_001D13D0(buf);
    D_002EBE70 = 1;
    while (D_002A8490->v10() != 0) {
    }
    D_002A8490->v17();
    for (i = 0; i < D_002EBE78; i++) {
        func_001E891B(D_002EBE7C[i]);
    }
    func_001E891B(D_002EBE7C);
    return 0;
}

void *C_00161580::func_00161580(void)
{
    func_0001DFE0();
    vtbl = &D_00287AD8;
    sub8.func_001B22E0();
    unk18 = -1;
    return this;
}

void C_00161580::func_001615B0(void)
{
    S_001B2340_Elem *e;

    vtbl = &D_00287AD8;
    e = sub8.func_001B2340();
    while (e != 0) {
        sub8.func_001B2370(e);
        e->v2();
        e = sub8.func_001B2340();
    }
    sub8.func_001B22F0();
    func_0001DFF0();
}

undefined4 C_00161600::func_00161600(byte param_1)
{
  int func_001615B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001615B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00161870::func_00161620()
{
    int i;

    for (i = 0; i < f8; i++) {
        if (f14[i].f4 != 0) {
            f14[i].f4->v2();
            f14[i].f4 = 0;
            f14[i].fC = 0;
        }
    }
}

void func_00161670(void) {
    int func_001AC440(...);
    func_001AC440();
}

void C_00161870::func_00161680()
{
    int i;

    for (i = 0; i < f8; i++) {
        if (f14[i].fC > 0 && f14[i].f4 == 0) {
            void *mem = func_001E8A44(0x15c);
            S_00161620_Obj *p = mem != 0 ? ((S_00161620_Obj *)mem)->func_00147490() : 0;
            p->func_001B0A20(f14[i].f0);
            f14[i].f4 = p;
        }
    }
}

void C_00161870::func_001616F0()
{
    int i;

    if (D_002F0630 != 0) {
        D_002F0630->func_001B0FC0();
        for (i = 0; i < f8; i++) {
            if (f14[i].f4 != 0) {
                f14[i].f4->func_001B0620();
            }
        }
    }
    for (i = 0; i < f8; i++) {
        if (f14[i].f4 != 0) {
            f14[i].f4->func_001B0650();
        }
    }
    f20++;
}

void func_00161840(void) {
    int func_001AC750(...);
    func_001AC750();
}

undefined4 C_00161850::func_00161850(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(param_1 * 0x10 + 8 + *(int *)(in_ECX + 0x14));
}

void *C_00161870::func_00161870(unsigned int flags)
{
    vtbl = &D_00287AF4;
    func_00161620();
    func_001AC3D0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_00161910(float a, float *s, float *c)
{
    *c = (float)cos(a);
    *s = (float)sin(a);
}

S_Matrix16_00161AA0 func_00161AA0(float a1, float a2, float a3, float a4)
{
    S_Matrix16_00161AA0 m;

    func_00162530(m.m, a3, a4, a1, a2, 1);
    return m;
}

void func_00161BE0(char *dst, char *src, float *m, int count, int dstStride, int srcStride)
{
    __m128 r0, r1, r2, r3;

    if (count != 0) {
        if (srcStride == 0) {
            srcStride = dstStride;
        }
        r0 = _mm_load_ps(m);
        r1 = _mm_load_ps(m + 4);
        r2 = _mm_load_ps(m + 8);
        r3 = _mm_load_ps(m + 12);
        do {
            __m128 v = _mm_loadu_ps((float *)src);
            __m128 t0 = _mm_mul_ps(r0, v);
            __m128 t2 = _mm_mul_ps(r2, v);
            __m128 t1 = _mm_mul_ps(r1, v);
            __m128 t3 = _mm_mul_ps(r3, v);
            __m128 s01 = _mm_add_ps(_mm_unpacklo_ps(t0, t1), _mm_unpackhi_ps(t0, t1));
            __m128 s23 = _mm_add_ps(_mm_unpacklo_ps(t2, t3), _mm_unpackhi_ps(t2, t3));
            __m128 res = _mm_add_ps(_mm_movelh_ps(s01, s23), _mm_movehl_ps(s23, s01));
            _mm_storeu_ps((float *)dst, res);
            src += srcStride;
            dst += dstStride;
            count--;
        } while (count != 0);
    }
}

