/* 7 functions from 0x0019C710 to 0x0019D6C0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <new>
#include <math.h>
#include "asm_helpers.h"

void *func_001E8A44(int size);
void func_00133D80(void *p);
extern int D_002B92E0;
extern int D_002B92F0;

/* (0, 0, 0, 1) vector */
struct V4_0019CB00 {
    float x;
    float y;
    float z;
    float w;
    V4_0019CB00() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    V4_0019CB00(int) { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

/* the 0x38-byte transform stored at +0x54 */
struct S_0019CB00_Xform {
    V4_0019CB00 a;
    V4_0019CB00 b;
    V4_0019CB00 c;
    float f30;
    float f34;
    S_0019CB00_Xform *Init(void)
    {
        a.z = 0.0f;
        a.y = 0.0f;
        a.x = 0.0f;
        a.w = 1.0f;
        b.z = 0.0f;
        b.y = 0.0f;
        b.x = 0.0f;
        b.w = 1.0f;
        c.z = 0.0f;
        c.y = 0.0f;
        c.x = 0.0f;
        c.w = 1.0f;
        return this;
    }
};

struct VObj_0019C710 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0a(); virtual void v0b();
    virtual void v0c(); virtual void v0d(); virtual void v0e(); virtual void v0f();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1a(); virtual void v1b();
};

/* the engine's file wrapper (D_002BEAAC): read(file, dst, size, count) */
struct S_19CCE0_File {
    void func_0013C8A0(int file, void *dst, int size, int count);
};
extern S_19CCE0_File *D_002BEAAC;
#define RD_19CCE0(dst, size) D_002BEAAC->func_0013C8A0(file, dst, size, 1)
void __stdcall func_00011FF0(void *p, int stride, int count, void (*ctor)());
void func_0019B6F0(void);
void D_00021290(void);

/* 3 x u16 (the engine's 16-bit rgb), zeroed by its constructor */
struct S_19CCE0_Rgb16 {
    unsigned short f0, f2, f4;
    S_19CCE0_Rgb16() { f4 = 0; f2 = 0; f0 = 0; }
};
/* the same without constructor */
struct S_19CCE0_Raw16 {
    unsigned short f0, f2, f4;
};
struct S_19CCE0_Vec3 {
    float x, y, z;
    S_19CCE0_Vec3() {}
    S_19CCE0_Vec3(const S_19CCE0_Vec3 &o) { x = o.x; y = o.y; z = o.z; }
};
struct S_19CCE0_V3z {
    float x, y, z;
    S_19CCE0_V3z() { z = 0; y = 0; x = 0; }
    static void *operator new[](unsigned int n) { return func_001E8A44(n); }
};
struct S_19CCE0_Color {
    short r, g, b;
    S_19CCE0_Color *func_0001AF00(const void *v);
};
/* 0x24-byte record of the second table */
struct S_19CCE0_Elem {
    int f0;
    float len;
    unsigned short f8, fA;
    S_19CCE0_V3z a;
    S_19CCE0_V3z b;
    static void *operator new[](unsigned int n) { return func_001E8A44(n); }
};
extern "C" float __cdecl sqrtf(float);
/* the stack frame of func_0019CCE0, laid out as the original has it (0x54 bytes from esp+0x10) */
struct S_19CCE0_Frame {
    struct SoultreeCollisionObject * volatile self;
    float vf[3];
    int hasColor;
    int nRec;
    int count;
    int x2;
    int y1;
    int x1;
    volatile float sqx;
    char A[12];
    char ta[12];
    char B[16];
};
extern "C" void *__cdecl memset(void *, int, unsigned int);
static __forceinline void Identity_19C710(float *m)
{
    float *volatile p = m;
    __m128 z = _mm_setzero_ps();
    _mm_store_ps(p, z);
    _mm_store_ps(p + 4, z);
    _mm_store_ps(p + 8, z);
    _mm_store_ps(p + 12, z);
    m[0] = 1.0f;
    m[5] = 1.0f;
    m[10] = 1.0f;
    m[15] = 1.0f;
}
static __forceinline void Set3_19CCE0(S_19CCE0_Vec3 *dst, S_19CCE0_Vec3 src)
{
    *dst = src;
}
static __forceinline void Sqrt_19CCE0(float *out, float x)
{
    _mm_store_ss(out, _mm_sqrt_ss(_mm_load_ss(&x)));
}
/* 0x14-byte record of the third table */
struct S_19CCE0_Rec {
    unsigned short f0, f2, f4;
    unsigned short pad6;
    int f8;
    S_19CCE0_Color col;
    unsigned short pad12;
};

struct SoultreeCollisionObject {
    int vtbl;
    char pad_0[0x50];
    S_0019CB00_Xform *unk54;
    char pad_58[0xa4 - 0x58];
    unsigned short unkA4;
    unsigned char unkA6;
    unsigned char unkA7;
    char pad_A8[0xb0 - 0xa8];
    char unkB0[0x40];
    float unkF0[4][4];
    char pad_130[0x80];
    union {
        char unk1B0[0xc];
        struct {
            void *unk1B0p;
            void *unk1B4p;
            int unk1B8;
        };
    };
    unsigned short unk1BC;
    short pad_1BE;
    int unk1C0;
    int unk1C4;
    int unk1C8;
    unsigned short unk1CC;
    short unk1CE;
    float unk1D0;
    char *unk1D4;
    void func_0019CCE0(int file);
    void func_0019C710(float *src, int a2, short a3, int n);
    void func_0019CB00(void);
    void func_0019CCA0(int param_1);
    void func_0019CBF0(int param_1, int param_2);
    int func_0019D680(void *param_1);
    void func_00157A00(int param_1);
    int func_0019BB80(void *param_1);
    void func_0019BA70();
    void func_0019B890();
    void func_0019B760();
    void func_00133E60();
    void *func_0019D650(int flags);
};

extern "C" void __stdcall func_0019BBD0(unsigned short param_1, int *param_2, int param_3, char *param_4, char *param_5);
extern "C" void __stdcall func_0019BD20(unsigned short param_1, int *param_2, char *param_3, char *param_4, int param_5);

void SoultreeCollisionObject::func_0019C710(float *src, int a2, short a3, int n)
{
    void *func_001E8AA5(int size);
    void func_00129510(int *, int *, float *, float *, int, short, int);
    struct V3 { float x, y, z; };
    SoultreeCollisionObject *volatile self = this;
    int i;
    ((VObj_0019C710 *)this)->v1b();
    AsmIdentityMatrix((char *)self + 0xb0);
    AsmIdentityMatrix((char *)self + 0xf0);
    AsmIdentityMatrix((char *)self + 0x130);
    AsmIdentityMatrix((char *)self + 0x170);
    self->unk1BC = 0;
    self->unk1C0 = 0;
    self->unk1C4 = 0;
    self->unk1C8 = 0;
    self->unk1CC = (unsigned short)n;
    char *o = (char *)func_001E8AA5(0x80);
    self->unk1D4 = o;
    self->unk1CE = a3;
    self->unk1B8 = 0;
    S_19CCE0_V3z *v = new S_19CCE0_V3z[n];
    self->unk1B0p = v;
    self->unk1B4p = 0;
    for (i = 0; i < n; i++) {
        V3 *d = (V3 *)self->unk1B0p + i;
        const float *s = (const float *)((const char *)src + i * 16);
        d->x = s[0];
        d->y = s[1];
        d->z = s[2];
    }
    func_00129510(&self->unk1C4, &self->unk1C8, self->unkF0[0], src, a2, a3, n);
    *(int *)self->unk1D4 = 0;
    *(short *)(self->unk1D4 + 8) = self->unk1CC;
    *(short *)(self->unk1D4 + 0xa) = self->unk1CE;
    *(int *)(self->unk1D4 + 0xc) = self->unk1C4;
    *(int *)(self->unk1D4 + 0x10) = self->unk1C8;
    *(short *)(self->unk1D4 + 0x20) = 0;
    *(int *)(self->unk1D4 + 0x70) = 1;
    *(V3 *)(self->unk1D4 + 0x14) = *(V3 *)((char *)self + 0x1b0);
    float *p = (float *)(self->unk1C4 + self->unk1BC * 36 + 0x18);
    float s = p[0] * p[0] + p[1] * p[1] + p[2] * p[2];
    float len = AsmSqrtF(s);
    *(volatile float *)&self->unk1D0 = len;
}

void SoultreeCollisionObject::func_0019CB00(void)
{
    S_0019CB00_Xform *p;

    D_002B92E0 = 0;
    D_002B92F0 = 0;
    if (unk54 == 0) {
        void *m = func_001E8A44(0x38);
        unk54 = m != 0 ? ((S_0019CB00_Xform *)m)->Init() : 0;
    }
    func_00133D80(unk54);
    p = unk54;
    V4_0019CB00 t(0);
    p->a = t;
    V4_0019CB00 u(0);
    p->b = u;
    p->f34 = 0.0f;
    p->f30 = 1.0f;
}

void SoultreeCollisionObject::func_0019CBF0(int param_1, int param_2)
{
    int local[2];
    local[0] = unk1C4;
    local[1] = unk1C8;
    switch (unkA6) {
    case 1:
        func_0019BBD0(unk1BC, local, param_1, unkB0, unk1B0);
        return;
    case 2:
    case 3:
    case 4:
    case 5:
        return;
    case 6:
        func_0019BD20(unk1BC, local, unk1B0, unkB0, 1);
        return;
    case 7:
        func_0019BD20(unk1BC, local, unk1B0, unkB0, 0);
        return;
    }
}

void SoultreeCollisionObject::func_0019CCA0(int param_1)
{
    if (unkA6 != 0) {
        func_0019CBF0(unkA4, unkA6);
    }
    unkA7 = unkA7 & 0xef;
    func_00157A00(param_1);
}

#pragma optimize("a", on)
void SoultreeCollisionObject::func_0019CCE0(int volatile file)
{
    S_19CCE0_Frame L;
    S_19CCE0_Vec3 &v = *(S_19CCE0_Vec3 *)L.vf;
    S_19CCE0_Raw16 &s = *(S_19CCE0_Raw16 *)L.A;
    S_19CCE0_Color &c = *(S_19CCE0_Color *)L.A;
    volatile float &sqr = *(volatile float *)L.A;
    float *w4 = (float *)L.B;
    int i;
    void *mem;

    L.self = this;
    RD_19CCE0(&this->unkF0[0][0], 4);
    RD_19CCE0(&L.self->unkF0[1][0], 4);
    RD_19CCE0(&L.self->unkF0[2][0], 4);
    *(volatile float *)&L.self->unkF0[3][0] = 0.0f;
    RD_19CCE0(&L.self->unkF0[0][1], 4);
    RD_19CCE0(&L.self->unkF0[1][1], 4);
    RD_19CCE0(&L.self->unkF0[2][1], 4);
    *(volatile float *)&L.self->unkF0[3][1] = 0.0f;
    RD_19CCE0(&L.self->unkF0[0][2], 4);
    RD_19CCE0(&L.self->unkF0[1][2], 4);
    RD_19CCE0(&L.self->unkF0[2][2], 4);
    *(volatile float *)&L.self->unkF0[3][2] = 0.0f;
    RD_19CCE0(&L.self->unkF0[0][3], 4);
    RD_19CCE0(&L.self->unkF0[1][3], 4);
    RD_19CCE0(&L.self->unkF0[2][3], 4);
    *(volatile float *)&L.self->unkF0[3][3] = 1.0f;
    RD_19CCE0(&L.x1, 4);
    RD_19CCE0(&L.x2, 4);
    L.self->unk1CC = (short)L.x2;
    RD_19CCE0(&L.count, 4);
    RD_19CCE0(&L.nRec, 4);
    L.hasColor = 1;
    RD_19CCE0(&L.hasColor, 4);
    L.self->unk1B8 = L.hasColor;
    if (L.hasColor != 0) {
        int n = L.self->unk1CC;
        mem = func_001E8A44(n * 6);
        if (mem != 0) {
            func_00011FF0(mem, 6, n, func_0019B6F0);
        } else {
            mem = 0;
        }
        L.self->unk1B0p = mem;
        for (i = 0; i < L.self->unk1CC; i++) {
            s.f4 = 0;
            s.f2 = 0;
            s.f0 = 0;
            RD_19CCE0(&s.f0, 2);
            RD_19CCE0(&s.f2, 2);
            RD_19CCE0(&s.f4, 2);
            ((S_19CCE0_Raw16 *)L.self->unk1B0p)[i] = s;
        }
    } else {
        int n = L.self->unk1CC;
        mem = func_001E8A44(n * 12);
        if (mem != 0) {
            func_00011FF0(mem, 12, n, D_00021290);
        } else {
            mem = 0;
        }
        L.self->unk1B0p = mem;
        for (i = 0; i < L.self->unk1CC; i++) {
            RD_19CCE0(&v.x, 4);
            RD_19CCE0(&v.y, 4);
            RD_19CCE0(&v.z, 4);
            S_19CCE0_Vec3 &t = *new ((void *)L.A) S_19CCE0_Vec3(v);
            ((S_19CCE0_Vec3 *)L.self->unk1B0p)[i] = t;
        }
    }
    RD_19CCE0(&L.y1, 4);
    if (L.y1 != 0) {
        if (L.hasColor != 0) {
            L.self->unk1B4p = func_001E8A44(L.self->unk1CC * 6);
            for (i = 0; i < L.self->unk1CC; i++) {
                RD_19CCE0(&s.f0, 2);
                RD_19CCE0(&s.f2, 2);
                RD_19CCE0(&s.f4, 2);
                ((S_19CCE0_Raw16 *)L.self->unk1B4p)[i] = s;
            }
        } else {
            L.self->unk1B4p = new S_19CCE0_V3z[L.self->unk1CC];
            for (i = 0; i < L.self->unk1CC; i++) {
                RD_19CCE0(&v.x, 4);
                RD_19CCE0(&v.y, 4);
                RD_19CCE0(&v.z, 4);
                S_19CCE0_Vec3 &t = *new ((void *)L.A) S_19CCE0_Vec3(v);
                ((S_19CCE0_Vec3 *)L.self->unk1B4p)[i] = t;
            }
        }
    } else {
        L.self->unk1B4p = 0;
    }
    L.self->unk1C4 = (int)new S_19CCE0_Elem[L.count];
    for (i = 0; i < L.count; i++) {
        S_19CCE0_Elem *e = &((S_19CCE0_Elem *)L.self->unk1C4)[i];
        float fx, fy, fz;
        RD_19CCE0(&e->f0, 4);
        RD_19CCE0(&v.x, 4);
        RD_19CCE0(&v.y, 4);
        RD_19CCE0(&v.z, 4);
        S_19CCE0_Vec3 &ta = *new ((void *)L.ta) S_19CCE0_Vec3(v);
        *(S_19CCE0_Vec3 *)&e->a = ta;
        RD_19CCE0(&v.x, 4);
        RD_19CCE0(&v.y, 4);
        RD_19CCE0(&v.z, 4);
        fx = v.x;
        fy = v.y;
        fz = v.z;
        S_19CCE0_Vec3 &tb = *new ((void *)L.B) S_19CCE0_Vec3(v);
        *(S_19CCE0_Vec3 *)&e->b = tb;
        L.sqx = fz * fz + fy * fy + fx * fx;
        sqr = sqrtf(L.sqx);
        e->len = sqr;
        RD_19CCE0(&e->f8, 2);
        RD_19CCE0(&e->fA, 2);
    }
    L.self->unk1CE = (short)L.nRec;
    L.self->unk1C8 = (int)func_001E8A44(L.nRec * 0x14);
    for (i = 0; i < L.nRec; i++) {
        S_19CCE0_Rec *rec = &((S_19CCE0_Rec *)L.self->unk1C8)[i];
        RD_19CCE0(&rec->f8, 4);
        RD_19CCE0(&v.x, 4);
        RD_19CCE0(&v.y, 4);
        RD_19CCE0(&v.z, 4);
        w4[0] = v.x;
        w4[2] = v.z;
        w4[1] = v.y;
        w4[3] = 1.0f;
        rec->col = *c.func_0001AF00(w4);
        RD_19CCE0(&rec->f0, 2);
        RD_19CCE0(&rec->f2, 2);
        RD_19CCE0(&rec->f4, 2);
    }
    L.self->unk1BC = 0;
}
#pragma optimize("a", off)
void *SoultreeCollisionObject::func_0019D650(int flags)
{
    extern int D_0028B1C4;
    void func_001E891B(void *);
    vtbl = (int)&D_0028B1C4;
    func_0019B760();
    func_00133E60();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

