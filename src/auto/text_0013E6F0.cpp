/* 11 functions from 0x0013E6F0 to 0x0013F690, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern int D_00284DEC;
extern int D_00284EA0;
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

void *func_001E8A44(int size);

/* Eco3DDataItem */
struct C_0013F650 {
    void *vtbl;
    char pad4[0xD0 - 4];
    int fD0;
    int fD4;
    int fD8;
    float fDC;
};
extern int D_0004035C;
extern int D_00040340;

void __fastcall func_001FD020(void *p, int v);
void __fastcall func_001FEC30(int n, void *p);
int __fastcall func_001FEBD0(int n, void *p);

struct C_001387B0 {
    void func_001387B0(int a);
};

struct C_00149310 {
    void func_00149310(int a1, int a2, int a3, int a4);
};

struct C_0013E8C0 {
    void *vtbl;
    char pad04[0x10C];
    u32 f110;
    u32 f114[6];
    u32 f12C[6];
    C_0013E8C0 *func_0013E8C0(int param_1);
};

struct C_0013E6F0 {
    char pad00[0xA4];
    void *fA4;
    char padA8[4];
    int fAC;
    char padB0[0x110 - 0xB0];
    int f110;
    struct Surf { char pad[8]; int f8; char pad2[0xA4 - 0xC]; int fA4; char pad3[0xB8 - 0xA8]; void *fB8; } *f114[6];
    int f12C[6];
    int func_0013E6F0(char *name, int b, int c);
};
char *func_001E8AC0(char *s, int ch);
int func_001ADCC0(char *buf, int n, void *fmt, char *name, int idx);
int func_001D6E20(char *buf, int b, int c);
extern char D_002772CC[];
int __stdcall func_001FCF20(int a, int b, int c, int d, int e, int f, int g);
int __stdcall func_001FCED0(int a, int b, int c);
int __stdcall func_00201210(int a, int b, int c, int d);
int __stdcall func_001FCEA0(int a, int b, int c, int d, int e);
int __stdcall func_001FCE40(int a, int b, int c);
void *func_001B2CB0(int a);
void __stdcall func_00201100(void *a);
extern "C" void *memset(void *, int, unsigned int);
extern "C" void *memcpy(void *, const void *, unsigned int);
extern "C" unsigned int strlen(const char *);

struct C_0013ECA0 {
    char pad00[0x10];
    char f10[0x40];
    char f50[0x40];
    char f90[0x40];
    char fD0[0x10];
    int fE0;
    void func_0013ECA0(void);
};

struct C_0013ECF0_Arg {
    char pad00[0x10];
    int *f10;
};

struct C_0013ECF0 {
    char pad00[0x21D0];
    C_00149310 *f21D0;
    void func_0013ECF0(int a1, int a2, C_0013ECF0_Arg *a3, int a4, int a5);
};

struct C_0013E900 {
    undefined4 func_0013E900(byte param_1);
};

struct S_0013E9B0_Obj {
    char pad00[0x1CC];
    float f1CC;
    float f1D0;
    char pad1D4[0x200 - 0x1D4];
    C_00149310 *f200;
    int f204;
    float func_0014C860(int a);
    float func_0014C830(int a);
};
struct S_0013E9B0_Glob {
    char pad00[0x54];
    S_0013E9B0_Obj *f54[1];
    char pad58[0x578 - 0x58];
    float f578;
};
extern S_0013E9B0_Glob *D_002BF250;
extern float D_002BEB34;
extern float D_00284ED0;
extern float D_0027988C;
extern float D_00284ECC;
struct S_0013E9B0_G2 { int f0; char *f4; };
extern S_0013E9B0_G2 *D_002EFDB8;
struct C_0015E420 { void func_0015E420(void *a, void *b, int c); };
extern C_0015E420 *D_002E2930;
void func_000263B0(void *a, void *b, void *c);
void func_0011AC30(void *out, void *in);

struct __declspec(align(16)) S_0013E9B0_Mat {
    float m[16];
};

static __forceinline void XformV_0013E9B0(float *volatile outArg, float *volatile inArg, float *volatile mArg)
{
    float *in = inArg;
    float *m = mArg;
    float *out = outArg;
    __m128 v = _mm_loadu_ps(in);
    __m128 r0 = _mm_load_ps(&m[0]);
    _mm_storeh_pi((__m64 *)(out + 2), v);
    __m128 r1 = _mm_load_ps(&m[4]);
    out[3] = 1.0f;
    __m128 r2 = _mm_load_ps(&m[8]);
    v = _mm_loadh_pi(v, (const __m64 *)(out + 2));
    r0 = _mm_mul_ps(r0, v);
    r1 = _mm_mul_ps(r1, v);
    r2 = _mm_mul_ps(r2, v);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 junk = _mm_movehl_ps(r2, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, junk);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(out, lo);
    out[3] = 1.0f;
}

static __forceinline void Trunc_0013E9B0(int *volatile out, float f)
{
    *out = _mm_cvttss_si32(*(__m128 *)&f);
}

static __forceinline int Min_0013E9B0(volatile int a, int b)
{
    volatile int r = a > b ? b : a;
    return r;
}

struct S_0013E9B0_Arg {
    char pad00[0x10];
    char f10[0x40];
    float f50[16];
    char f90[0x3C];
    float fCC;
    float fD0[4];
    int fE0;
};

struct C_0013E9B0 {
    char pad00[8];
    u16 f8;
    u16 fA;
    u16 fC;
    u8 fE;
    u8 fF;
    u8 f10;
    u8 f11;
    char pad12[2];
    s16 f14;
    s16 f16;
    int func_0013E9B0(S_0013E9B0_Arg *arg);
};

extern float D_002756DC;
extern float D_0027A060;
extern float D_00275544;
float func_0001E960(float x);
int func_001E8858(float x);
int *__stdcall func_001FF410(int a, int b);

static __forceinline float MinF_0013ED30(float a, float b)
{
    float r;
    _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b)));
    return r;
}
struct V4_0013ED30 { float x, y, z, w; };
void func_0013E920(V4_0013ED30 *out, V4_0013ED30 *in);

struct C_0013ED30 {
    char pad00[0x21EC];
    int f21EC[3];
    int f21F8;
    void func_0013ED30(void);
};

int C_0013E6F0::func_0013E6F0(char *name, int b, int c)
{
    char buf[0x104];
    fAC = c;
    char *p = func_001E8AC0(name, 0x2e);
    if (p) {
        memset(p, 0, strlen(p));
    }
    int t;
    {
        int w, h;
        int i;
        for (i = 0; i < 6; i++) {
            func_001ADCC0(buf, 0x104, D_002772CC, name, i);
            f114[i] = (Surf *)func_001D6E20(buf, b, c);
            if (!f114[i]) return 0;
            if (i == 0) {
                h = f114[i]->f8;
                w = f114[i]->fA4;
            }
        }
        fA4 = (void *)w;
        t = func_001FCF20(h, h, 1, 1, 1, w, 5);
        f110 = t;
    }
    long hr = t ? 0 : 0x8007000e;
    if (hr >= 0) {
        int i;
        int lr[2];
        int lock[2];
        int desc[7];
        for (i = 0; i < 6; i++) {
            f12C[i] = func_001FCED0(f110, i, 0);
            func_00201210((int)*(void **)&f12C[i], (int)lock, 0, 0);
            func_001FCEA0((int)f114[i]->fB8, 0, (int)lr, 0, 0);
            func_001FCE40((int)f114[i]->fB8, 0, (int)desc);
            void *src = (void *)lr[1];
            func_001B2CB0((int)fA4);
            memcpy((void *)lock[1], src, desc[3]);
            func_00201100(f114[i]->fB8);
            f114[i]->fB8 = 0;
        }
        return 1;
    }
    return 0;
}

C_0013E8C0 *C_0013E8C0::func_0013E8C0(int param_1)
{
    ((C_001387B0 *)this)->func_001387B0(param_1);
    vtbl = (void *)&D_00284DEC;
    f110 = 0;
    for (int i = 0; i < 6; i++) {
        f114[i] = 0;
        f12C[i] = 0;
    }
    return this;
}

undefined4 C_0013E900::func_0013E900(byte param_1)
{
  int func_0013E6A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0013E6A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void func_0013E990(void)
{
    func_001FD020(&D_0004035C, 0);
    func_001FD020(&D_00040340, 1);
}

int C_0013E9B0::func_0013E9B0(S_0013E9B0_Arg *arg)
{
    C_0013E9B0 * volatile self = this;
    S_0013E9B0_Mat m;
    S_0013E9B0_Mat mat;
    S_0013E9B0_Obj *obj = D_002BF250->f54[fE];
    float s = obj->func_0014C860(f11) * obj->f1D0 * D_002BEB34;
    float t = obj->func_0014C830(self->f10) * obj->f1CC;
    float a = self->f14 * s;
    float b = self->f16 * s;
    m.m[0] = a;
    m.m[1] = 0.0f;
    m.m[2] = -b;
    m.m[3] = self->f8 * D_002BF250->f578;
    m.m[4] = 0.0f;
    m.m[5] = t;
    m.m[6] = 0.0f;
    m.m[7] = self->fA * D_002BF250->f578;
    m.m[8] = b;
    m.m[9] = 0.0f;
    m.m[10] = a;
    m.m[11] = self->fC * D_002BF250->f578;
    m.m[12] = 0.0f;
    m.m[13] = 0.0f;
    m.m[14] = 0.0f;
    m.m[15] = 1.0f;
    float r = D_0027988C - (self->fF - 16) * D_00284ED0;
    if (r > D_0027988C)
        r = 64.0f;
    Trunc_0013E9B0(&arg->fE0, r);
    arg->fE0 = Min_0013E9B0(arg->fE0, 0xff);
    char *base = D_002EFDB8->f4;
    func_000263B0(arg->f10, &m, base + 0x250);
    func_0011AC30(&mat, &m);
    XformV_0013E9B0(arg->fD0, (float *)(base + 0x170), mat.m);
    D_002E2930->func_0015E420(arg->f50, arg->f90, 0);
    XformV_0013E9B0(arg->f50, arg->f50, mat.m);
    arg->fCC = r * D_00284ECC;
    obj->f200->func_00149310(obj->f204, (int)arg, 0, 0);
    return 1;
}

void C_0013ECA0::func_0013ECA0(void)
{
    func_001FEC30(0x18, f10);
    func_001FEBD0(2, fD0);
    func_001FEC30(4, f50);
    func_001FEC30(8, f90);
    func_001FD020(&D_00040340, fE0);
}

void C_0013ECF0::func_0013ECF0(int a1, int a2, C_0013ECF0_Arg *a3, int a4, int a5)
{
    int *p = a3->f10;
    p[1] = a2;
    p[2] = a1;
    f21D0->func_00149310((int)a3, a4, a5, 0);
}

void __stdcall func_001FEE00(int a, int b, int c);
void __stdcall func_001FEE00(int, int, int);
void func_0013F2F0(void)
{
    char *p = D_002EFDB8->f4;

    func_001FEC30(0x18, p + 0x250);
    func_001FEBD0(0x2, p + 0x170);
    func_001FEE00(0, *(int *)((char *)D_002BF250 + 0x21e4), 0xc);
    func_001FEE00(1, *(int *)((char *)D_002BF250 + 0x21e8), 0xc);
    func_001FEE00(2, *(int *)((char *)D_002BF250 + 0x21ec + *(int *)((char *)D_002BF250 + 0x21f8) * 4), 0x4);
}

C_0013F650 *func_0013F650(void)
{
    C_0013F650 *p = (C_0013F650 *)func_001E8A44(0xf0);
    if (p != 0) {
        p->vtbl = (void *)&D_00284EA0;
        p->fD8 = 0;
        p->fD4 = 0;
        p->fD0 = 0;
        p->fDC = 1.0f;
        return p;
    }
    return 0;
}

