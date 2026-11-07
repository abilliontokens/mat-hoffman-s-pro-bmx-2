/* 13 functions from 0x001A4B60 to 0x001A5B10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

extern int D_0028B84C;
extern int D_0028B8DC;
void func_001E891B(void *p);
void func_00030AC0(float *out, float *v, float *m);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct C_00157600 {
    void func_00157600(void *a);
    void func_00157660(void);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);
extern char D_00275678[];
extern char D_002A5348[];
extern char D_0028B960[];
extern char D_002769F8[];
extern char D_0028B950[];
extern char D_0028B94C[];
extern char D_002867E8[];
extern char D_0028B948[];

struct C_00168280 {
    C_00168280 *func_00168280(void);
    int func_00169490(char *buf, int flag);
    void func_00169710(const char *s);
    void func_00168A10(const char *key, int *out);
    void func_00168550(const char *key, void *dst, int size);
    void func_001691E0(void);
};

/* SplashScreenManager */
struct SplashScreenManager {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    char pad2C[0x80];
    int fAC;
    int fB0;
    int fB4;
    int fB8;
    u8 fBC;
    char padBD[0x103];
    int f1C0;
    int f1C4;
    int f1C8;
    void **f1CC;
    int f1D0;
    void **f1D4;
    int f1D8;
    int f1DC;
    SplashScreenManager *func_001A58D0(void *a);
    void func_001A5950(void);
    void func_001A59F0(void);
};

struct Vec4 {
    int x, y, z, w;
};

struct C_000264C0 {
    void func_000264C0(void *param_1);
};

struct C_00199C20 {
    void func_00199C20(int a, void *out);
};

struct __declspec(align(16)) S_Matrix16 {
    f32 m[16];
};

/* SphereCollisionObject */
struct C_SphereCollisionObject {
    void *vtbl;
    char pad4[0x24];
    Vec4 f28;
    char pad38[0x10];
    int f48;
    char pad4c[0x8];
    void *f54;
    char pad58[0x50];
    Vec4 fA8;
    char padB8[0x8];
    __declspec(align(16)) f32 matrix[16];
    int f100;
    char pad104[0x4];
    f32 f108;
    f32 f10C;
    void *f110;
    int func_001A4B60(char *other);
    void func_00133E60();
    void func_001A52D0(void *a);
    void func_001A5370(void);
    void func_001A53C0(f32 *center, f32 *extent);
    void func_001A57E0(int a, int b, int c, int d, f32 r, void *e);
    void *func_001A57A0(unsigned int flags);
};

struct C_SphereCollisionObjectVT {
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
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void func_001A52D0(void *a);
};

struct S_001A5730_Item {
    f32 x, y, z, w;
};

struct S_001A53C0_V4 {
    f32 x, y, z, w;
    S_001A53C0_V4() { z = 0; y = 0; x = 0; w = 1.0f; }
    S_001A53C0_V4(f32 a, f32 b, f32 c) { x = a; y = b; z = c; w = 1.0f; }
    S_001A53C0_V4(const f32 *p) { x=p[0]; y=p[1]; z=p[2]; w=1.0f; }
    void set(const f32 *p) { x=p[0]; y=p[1]; z=p[2]; w=1.0f; }
    S_001A53C0_V4 operator*(f32 s) const { return S_001A53C0_V4(x * s, y * s, z * s); }
};

static inline void Xform_001A53C0(f32 *out, const __m128 *mat, const S_001A53C0_V4 *v)
{
    __m128 t = _mm_loadu_ps(&v->x);
    _mm_storeh_pi((__m64 *)&out[2], t);
    out[3] = 1.0f;
    t = _mm_loadh_pi(t, (__m64 *)&out[2]);
    __m128 r0 = _mm_mul_ps(mat[0], t);
    __m128 r1 = _mm_mul_ps(mat[1], t);
    __m128 r2 = _mm_mul_ps(mat[2], t);
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

static __forceinline void Xform_001A4B60(S_001A53C0_V4 *dst, const float *v, const float *m)
{
    AsmTransformPoint(&dst->x, v, m);
}

static inline f32 Fabs_001A53C0(f32 x)
{
    int i = *(int *)&x & 0x7fffffff;
    return *(f32 *)&i;
}

static __forceinline void SetIdentity(f32 *volatile arg)
{
    f32 *m = arg;
    __m128 z = _mm_setzero_ps();
    _mm_store_ps(m, z);
    _mm_store_ps(m + 4, z);
    _mm_store_ps(m + 8, z);
    _mm_store_ps(m + 12, z);
    m[0] = 1.0f;
    m[5] = 1.0f;
    m[10] = 1.0f;
    m[15] = 1.0f;
}
struct C_001A5730;
struct C_001A5730 {
    char pad0[0x14];
    f32 f14;
    f32 f18;
    f32 f1c;
    f32 f20;
    S_001A5730_Item arr24[3];
    S_001A5730_Item arr54[3];
        C_001A5730 *func_001A5730(void);
};

extern char *D_002B92EC;
int func_001225C0(void *, void *, void *, int, int, void *);
int func_00123940(void *, int, int, int, void *, void *, void *, int);
void func_0001C680(void *, Vec4, void *);
struct C_001A4FC0 {
    int func_001A4FC0(char *a);
};
struct C_001A52C0 {
    void func_001A52C0(void);
};


int func_00122730(float *, float, float *, float *, float, float *);
float *func_000110E0(float *, float *, float *);
float *func_00011110(float *, float *, float *);
float *func_0001C5E0(float *, float, float *);
int C_SphereCollisionObject::func_001A4B60(char *o)
{
    S_001A53C0_V4 c;
    Xform_001A4B60(&c, (float *)&fA8, matrix);
    switch (*(int *)(o + 0x50)) {
    case 5:
        return func_00122730((float *)&fA8, *(f32 *)&f100, matrix, (float *)(o + 0xa8), *(f32 *)(o + 0x100), (float *)(o + 0xc0));
    case 6: {
        S_001A53C0_V4 a;
        a = *(S_001A53C0_V4 *)&fA8 * f10C;
        func_00030AC0(&a.x, &a.x, matrix);
        return func_001225C0(o + 0xf0, o + 0x100, &a, f100, *(int *)((char *)this + 0x104), o + 0xb0);
    }
    case 3: {
        S_Matrix16 m;
        AsmIdentityMatrix(&m);
        return func_00122730((float *)&fA8, *(f32 *)&f100, matrix, (float *)(o + 0x28), *(f32 *)(o + 0xe8), (float *)&m);
    }
    case 0: {
        S_001A53C0_V4 a(*(float **)(o + 0x1c4) + 3);
        S_001A53C0_V4 b(*(float **)(o + 0x1c4) + 6);
        return func_001225C0(&a, &b, &c, f100, *(int *)((char *)this + 0x104), o + 0x130);
    }
    case 1:
        return func_001225C0(o + 0xa8, o + 0xb8, &c, f100, *(int *)((char *)this + 0x104), o + 0x130);
    case 2: {
        S_001A53C0_V4 a, b;
        if (*(float **)(o + 0xfc)) {
            a.set(*(float **)(o + 0xfc) + 3);
            b.set(*(float **)(o + 0xfc) + 6);
        } else {
            float t[4], u[4], v[4], w[4];
            a = *(S_001A53C0_V4 *)func_0001C5E0(u, 0.5f, func_000110E0(t, (float *)(*(char **)(o + 0x100) + 0x10), *(float **)(o + 0x100)));
            b = *(S_001A53C0_V4 *)func_0001C5E0(w, 0.5f, func_00011110(v, (float *)(*(char **)(o + 0x100) + 0x10), *(float **)(o + 0x100)));
        }
        return func_001225C0(&a, &b, &c, f100, *(int *)((char *)this + 0x104), o + 0xb0);
    }
    }
    return 0;
}

int C_001A4FC0::func_001A4FC0(char *a)
{
    char *self = (char *)this;
    struct B2 { int lo, hi; };
    char *hit;
    B2 bounds;
    int i;
    if (a[0x21] & 1) {
    switch (*(int *)(a+0x50)) {
    case 1:
        if (!func_001225C0(a+0xa8,a+0xb8,self+0x28,*(int *)(self+0x100),*(int *)(self+0x104),a+0x130)) return 0;
        for (i=0;i<*(int *)(a+0x190);i++) {
            hit=(*(char ***)(a+0x1a0))[i];
            bounds.hi=*(int *)(hit+0x1c8); bounds.lo=*(int *)(hit+0x1c4);
            if (func_00123940(self+0x28,*(int *)(self+0x100),*(int *)(self+0x104),0,&bounds,hit+0xb0,hit+0x1b0,1)) {
                char *out=D_002B92EC;
                *(Vec4 *)(out+0x14)=*(Vec4 *)(self+0x28);
                for(i=0;i<*(int *)(out+4);i++) if (!((int *)(out+0x84))[i]) {
                    func_0001C680(out+0x24+i*16,*(Vec4 *)(out+0x24+i*16),hit+0xb0);
                    func_00030AC0((float *)(out+0x54+i*16),(float *)(out+0x54+i*16),(float *)(hit+0xb0));
                    ((int *)(out+0x84))[i]=1;
                }
                return 1;
            }
        }
        return 0;
    case 0:
        bounds.lo=*(int *)(a+0x1c4); bounds.hi=*(int *)(a+0x1c8);
        hit=a+0xb0;
        if (!func_00123940(self+0x28,*(int *)(self+0x100),*(int *)(self+0x104),0,&bounds,hit,a+0x1b0,1)) return 0;
        {
            char *out=D_002B92EC;
            *(Vec4 *)(out+0x14)=*(Vec4 *)(self+0x28);
            for(i=0;i<*(int *)(out+4);i++) if (!((int *)(out+0x84))[i]) {
                func_0001C680(out+0x24+i*16,*(Vec4 *)(out+0x24+i*16),hit);
                func_00030AC0((float *)(out+0x54+i*16),(float *)(out+0x54+i*16),(float *)hit);
                ((int *)(out+0x84))[i]=1;
            }
        }
        return 1;
    }
    }
    return 0;
}

void C_001A52C0::func_001A52C0(void)
{
  int* in_ECX = (int*)this;
  
                      
                      
  (**(code **)(*in_ECX + 0x80))();
  return;
}

void C_SphereCollisionObject::func_001A52D0(void *a)
{
    if (a == 0) {
        AsmIdentityMatrix(matrix);
    } else {
        ((C_000264C0 *)matrix)->func_000264C0(a);
    }
    f28 = fA8;
    f48 = f100;
    func_00030AC0((float *)&f28, (float *)&f28, matrix);
}

void C_SphereCollisionObject::func_001A5370(void)
{
    if (f110) {
        S_Matrix16 m;
        ((C_00199C20 *)f110)->func_00199C20(0, &m);
        ((C_SphereCollisionObjectVT *)this)->func_001A52D0(&m);
    } else {
        ((C_SphereCollisionObjectVT *)this)->func_001A52D0(0);
    }
}

void C_SphereCollisionObject::func_001A53C0(f32 *center, f32 *extent)
{
    volatile f32 r = f10C;
    volatile f32 scratch[4];
    int bits;
    S_001A53C0_V4 v(*(f32 *)&fA8.x * r, *(f32 *)&fA8.y * r, *(f32 *)&fA8.z * r);
    f32 t = f108 * *(f32 *)&f100;
    S_001A53C0_V4 a[3];
    a[0] = S_001A53C0_V4(t, 0, 0);
    a[1] = S_001A53C0_V4(0, t, 0);
    a[2] = S_001A53C0_V4(0, 0, t);
    Vec4 c0 = *(Vec4 *)&a[0];
    AsmTransformPoint(center, &v.x, matrix);
    func_0001C680(&a[0], c0, matrix);
    func_0001C680(&a[1], *(Vec4 *)&a[1], matrix);
    func_0001C680(&a[2], *(Vec4 *)&a[2], matrix);
    scratch[1] = a[0].x; bits = *(volatile int *)&scratch[1]; bits &= 0x7fffffff; *(volatile int *)&scratch[3] = bits;
    scratch[1] = a[1].x; bits = *(volatile int *)&scratch[1]; bits &= 0x7fffffff; *(volatile int *)&scratch[2] = bits;
    scratch[1] = a[2].x; bits = *(volatile int *)&scratch[1]; bits &= 0x7fffffff; *(volatile int *)&scratch[0] = bits;
    extent[0] = scratch[0] + scratch[2] + scratch[3];
    scratch[3] = a[0].y; bits = *(volatile int *)&scratch[3]; bits &= 0x7fffffff; *(volatile int *)&scratch[0] = bits;
    scratch[3] = a[1].y; bits = *(volatile int *)&scratch[3]; bits &= 0x7fffffff; *(volatile int *)&scratch[1] = bits;
    scratch[3] = a[2].y; bits = *(volatile int *)&scratch[3]; bits &= 0x7fffffff; *(volatile int *)&scratch[2] = bits;
    extent[1] = scratch[2] + scratch[1] + scratch[0];
    scratch[3] = a[0].z; bits = *(volatile int *)&scratch[3]; bits &= 0x7fffffff; *(volatile int *)&scratch[0] = bits;
    scratch[3] = a[1].z; bits = *(volatile int *)&scratch[3]; bits &= 0x7fffffff; *(volatile int *)&scratch[1] = bits;
    scratch[3] = a[2].z; bits = *(volatile int *)&scratch[3]; bits &= 0x7fffffff; *(volatile int *)&scratch[2] = bits;
    extent[2] = scratch[2] + scratch[1] + scratch[0];
}

C_001A5730 *C_001A5730::func_001A5730(void)
{
    u32 *p;
    int n;

    p = (u32 *)&f14;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&arr24[0];
    n = 3;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--n != 0);
    p = (u32 *)&arr54[0];
    n = 3;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--n != 0);
    return this;
}

void func_001A5790(void) {
    int func_001A4FC0(...);
    func_001A4FC0();
}

void *C_SphereCollisionObject::func_001A57A0(unsigned int flags)
{
    vtbl = (void *)&D_0028B84C;
    if (f54) {
        func_001E891B(f54);
        f54 = 0;
    }
    func_00133E60();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void *func_001E8A44(unsigned int size);
void C_SphereCollisionObject::func_001A57E0(int a, int b, int c, int d, f32 r, void *e)
{
 int *p=(int*)func_001E8A44(0x90);
 if(p) p=(int*)((C_001A5730*)p)->func_001A5730();
 else p=0;
 p[0]=3; p[1]=0;
 f54=p;
 f110=e;
 int *v=(int*)&fA8;
 v[0]=a; v[1]=b; v[2]=c; v[3]=d;
 *(float*)&f100=r;
 float q=*(float*)&f100;
 ((float*)&f100)[1]=q*q;
 f108=1.0f;
 f10C=1.0f;
 AsmIdentityMatrix((void *)matrix);
}

SplashScreenManager *SplashScreenManager::func_001A58D0(void *a)
{
    ((C_00157600 *)this)->func_00157600(a);
    fAC = 0;
    fB0 = 0;
    fBC = 0;
    f24 = 0;
    f28 = 0;
    f1C0 = 0;
    fB4 = 0;
    fB8 = 0;
    f1C8 = 0;
    f1CC = 0;
    f1D0 = 0;
    f1D4 = 0;
    f1D8 = 0;
    f1DC = 0;
    vtbl = (void *)&D_0028B8DC;
    f1C4 = 1;
    return this;
}

void SplashScreenManager::func_001A5950(void)
{
    int i;

    vtbl = (void *)&D_0028B8DC;
    if (f1CC != 0) {
        for (i = 0; i < f1D0; i++) {
            func_001E891B(f1CC[i]);
        }
        func_001E891B(f1CC);
    }
    if (f1D4 != 0) {
        for (i = 0; i < f1D8; i++) {
            func_001E891B(f1D4[i]);
        }
        func_001E891B(f1D4);
    }
    ((C_00157600 *)this)->func_00157660();
}

void SplashScreenManager::func_001A59F0(void)
{
    char buf[0x104];
    char name[0x28];
    C_00168280 *obj;
    void *mem;
    int i;

    func_001ADCC0(buf, 0x104, D_00275678, D_002A5348, D_0028B960);
    mem = func_001E8A44(0x4cc);
    obj = mem != 0 ? ((C_00168280 *)mem)->func_00168280() : 0;
    if (obj->func_00169490(buf, 0) != 0) {
        obj->func_00169710(D_002769F8);
        obj->func_00168A10(D_0028B950, &f1D0);
        f1CC = (void **)func_001E8A44(f1D0 * 4);
        for (i = 0; i < f1D0; i++) {
            f1CC[i] = func_001E8A44(0x104);
            func_001ADCC0(name, 0x28, D_002867E8, D_0028B94C, i + 1);
            obj->func_00169710(name);
            obj->func_00168550(D_0028B948, f1CC[i], -1);
        }
    }
    if (obj != 0) {
        obj->func_001691E0();
        func_001E891B(obj);
    }
}

