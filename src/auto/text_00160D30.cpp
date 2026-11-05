/* 25 functions from 0x00160D30 to 0x00161C70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <string.h>

struct V4_00161930 {
    float x, y, z, w;
};

struct V3_00161930 {
    float x, y, z;
};

V4_00161930 *func_001618A0(V4_00161930 *out, V4_00161930 *in);

static __forceinline void cross_001619D0(float *out, float *a, float *b)
{
    __m128 va = _mm_loadu_ps(a);
    __m128 vb = _mm_loadu_ps(b);
    __m128 sa = va;
    __m128 sb = vb;

    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(out, va);
}

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
char *func_001E95A4(char *str, char *delim);
extern unsigned int D_00287ABC;
extern unsigned int D_00287AC0;
extern unsigned int D_00287AC4;
extern unsigned short D_00287AC8;
extern unsigned char D_00287ACA;
extern char D_002789B8[];

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

extern float D_00275544;

inline void cross_00161AE0(V4_00161930 *out, V4_00161930 *a, V4_00161930 *b)
{
    __m128 va = _mm_loadu_ps(&a->x);
    __m128 vb = _mm_loadu_ps(&b->x);
    __m128 sa = va;
    __m128 sb = vb;

    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(&out->x, va);
}
void func_00162330(S_Matrix16_00161AA0 *out, V4_00161930 *a, V4_00161930 *b, V4_00161930 *c, V4_00161930 *d);
S_Matrix16_00161AA0 func_001622C0(float a);
void func_0011ACC0(S_Matrix16_00161AA0 *out, S_Matrix16_00161AA0 *a, S_Matrix16_00161AA0 *b);

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

void func_001613B0(void)
{
    char *s;
    char *p;
    char *q;
    char *dst;
    char *tok;
    char c;
    int len;

    s = (char *)&D_002EB268;
    p = s;
    do {
        c = *p++;
    } while (c != 0);
    len = p - (s + 1);
    if (len != 0) {
        D_002EBE7C = (void **)func_001E8A44(0x400);
        D_002EBE78 = 1;
        D_002EBE7C[0] = func_001E8A44(0xf);
        dst = (char *)D_002EBE7C[0];
        *(unsigned int *)dst = D_00287ABC;
        *(unsigned int *)(dst + 4) = D_00287AC0;
        *(unsigned int *)(dst + 8) = D_00287AC4;
        *(unsigned short *)(dst + 0xc) = D_00287AC8;
        dst[0xe] = D_00287ACA;
        tok = func_001E95A4(s, D_002789B8);
        while (tok != 0) {
            p = tok;
            do {
                c = *p++;
            } while (c != 0);
            D_002EBE7C[D_002EBE78] = func_001E8A44(p - (tok + 1) + 1);
            dst = (char *)D_002EBE7C[D_002EBE78];
            q = tok;
            do {
                c = *q++;
                *dst++ = c;
            } while (c != 0);
            tok = func_001E95A4(0, D_002789B8);
            D_002EBE78++;
        }
    }
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

void C_00161870::func_00161760()
{
    int i;
    S_00161620_Obj *p;

    if (D_002F0630 != 0) {
        D_002F0630->func_001B0FC0();
    }
    for (i = 0; i < f8; i++) {
        if (f14[i].f4 != 0) {
            f14[i].f4->v2();
            p = (S_00161620_Obj *)func_001E8A44(0x15c);
            p = p != 0 ? p->func_00147490() : 0;
            p->func_001B0A20(f14[i].f0);
            f14[i].f4 = p;
            p->func_001B0620();
            p->func_001B0650();
        }
    }
    f20++;
}

int C_00161870::func_001617F0(const char *name, int unused)
{
    int i;

    for (i = 0; i < f8; i++) {
        if (func_001EA426(name, (const char *)f14[i].f0) == 0) {
            return i;
        }
    }
    D_002EBE98 = 1;
    return 0;
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

void func_00161930(V3_00161930 *a, V3_00161930 *n, V4_00161930 *out)
{
    float v[4];
    V4_00161930 r;
    float d;
    float p0, p1, p2;

    p0 = a->x * n->x;
    p1 = n->y * a->y;
    d = p0 + p1;
    p2 = n->z * a->z;
    d = d + p2;
    r.w = 1.0f;
    r.x = n->x + n->x;
    r.y = n->y + n->y;
    r.z = n->z + n->z;
    v[0] = r.x * d;
    v[1] = r.y * d;
    v[2] = r.z * d;
    r.x = a->x - v[0];
    r.y = a->y - v[1];
    r.z = a->z - v[2];
    *out = r;
    func_001618A0(out, out);
}

void func_001619D0(V3_00161930 *a, V3_00161930 *b, V3_00161930 *c, V4_00161930 *out, float *d)
{
    V4_00161930 v2;
    V4_00161930 v1;
    V4_00161930 *n;

    v1.w = 1.0f;
    v1.x = c->x - a->x;
    v1.y = c->y - a->y;
    v1.z = c->z - a->z;
    v2.w = 1.0f;
    v2.x = b->x - a->x;
    v2.y = b->y - a->y;
    v2.z = b->z - a->z;
    cross_001619D0((float *)out, (float *)&v2, (float *)&v1);
    n = func_001618A0(out, out);
    if (d != 0) {
        *d = -(n->y * a->y + a->x * n->x + n->z * a->z);
    }
}

S_Matrix16_00161AA0 func_00161AA0(float a1, float a2, float a3, float a4)
{
    S_Matrix16_00161AA0 m;

    func_00162530(m.m, a3, a4, a1, a2, 1);
    return m;
}

void func_00161BE0(char *dst, char *src, __m128 *m, int count, int dstStride, int srcStride)
{
    if (count != 0) {
        if (srcStride == 0) {
            srcStride = dstStride;
        }
        do {
            __m128 v = _mm_loadu_ps((float *)src);
            __m128 t0 = _mm_mul_ps(m[0], v);
            __m128 t2 = _mm_mul_ps(m[2], v);
            __m128 t1 = _mm_mul_ps(m[1], v);
            __m128 t3 = _mm_mul_ps(m[3], v);
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

