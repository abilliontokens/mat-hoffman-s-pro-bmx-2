/* 13 functions from 0x001A4B60 to 0x001A5B10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

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

static __forceinline void Xform_001A4B60(f32 *volatile outArg, const __m128 *volatile matArg, const S_001A53C0_V4 *volatile vArg)
{
    const S_001A53C0_V4 *v=vArg;
    const __m128 *mat=matArg;
    f32 *out=outArg;
    __m128 t=_mm_loadu_ps(&v->x);
    __m128 r0=mat[0];
    _mm_storeh_pi((__m64 *)&out[2],t);
    __m128 r1=mat[1];
    out[3]=1.0f;
    __m128 r2=mat[2];
    t=_mm_loadh_pi(t,(__m64 *)&out[2]);
    r0=_mm_mul_ps(r0,t); r1=_mm_mul_ps(r1,t); r2=_mm_mul_ps(r2,t);
    __m128 hi=r0;
    r0=_mm_unpacklo_ps(r0,r1); hi=_mm_unpackhi_ps(hi,r1);
    __m128 upper=_mm_movehl_ps(r2,r2);
    r0=_mm_add_ps(r0,hi); r2=_mm_add_ps(r2,upper);
    hi=_mm_movehl_ps(hi,r0); r0=_mm_movelh_ps(r0,r2); hi=_mm_shuffle_ps(hi,r2,0x14);
    _mm_storeu_ps(out,_mm_add_ps(r0,hi)); out[3]=1.0f;
}

static inline f32 Fabs_001A53C0(f32 x)
{
    int i = *(int *)&x & 0x7fffffff;
    return *(f32 *)&i;
}

static inline void SetIdentity(f32 *m)
{
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


int C_001A4FC0::func_001A4FC0(char *a)
{
    char *self = (char *)this;
    int bounds[2];
    char *hit;
    int i;
    if (a[0x21] & 1) {
    switch (*(int *)(a+0x50)) {
    case 1:
        if (!func_001225C0(a+0xa8,a+0xb8,self+0x28,*(int *)(self+0x100),*(int *)(self+0x104),a+0x130)) return 0;
        for (i=0;i<*(int *)(a+0x190);i++) {
            hit=(*(char ***)(a+0x1a0))[i];
            bounds[1]=*(int *)(hit+0x1c8); bounds[0]=*(int *)(hit+0x1c4);
            if (func_00123940(self+0x28,*(int *)(self+0x100),*(int *)(self+0x104),0,bounds,hit+0xb0,hit+0x1b0,1)) {
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
        bounds[0]=*(int *)(a+0x1c4); bounds[1]=*(int *)(a+0x1c8);
        hit=a+0xb0;
        if (!func_00123940(self+0x28,*(int *)(self+0x100),*(int *)(self+0x104),0,bounds,hit,a+0x1b0,1)) return 0;
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
        memset(matrix, 0, 0x40);
        matrix[0] = 1.0f;
        matrix[5] = 1.0f;
        matrix[10] = 1.0f;
        matrix[15] = 1.0f;
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
    int *p = (int *)func_001E8A44(0x90);
    if (p)
        p = (int *)((C_001A5730 *)p)->func_001A5730();
    p[0] = 3;
    p[1] = 0;
    f54 = p;
    f110 = e;
    fA8.x = a;
    fA8.y = b;
    fA8.z = c;
    fA8.w = d;
    *(f32 *)&f100 = r;
    ((f32 *)&f100)[1] = r * r;
    ((f32 *)&f100)[2] = 1.0f;
    ((f32 *)&f100)[3] = 1.0f;
    __m128 z = _mm_setzero_ps();
    f32 *m = matrix;
    _mm_store_ps(m, z);
    _mm_store_ps(m + 4, z);
    _mm_store_ps(m + 8, z);
    _mm_store_ps(m + 12, z);
    m[0] = 1.0f;
    m[5] = 1.0f;
    m[10] = 1.0f;
    m[15] = 1.0f;
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

