/* 30 functions from 0x0014F600 to 0x00150480, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
/* One entry of the sine/cosine table func_0014F6E0 interpolates in. */
struct S_SinCosEntry {
    float a;
    float b;
};

extern S_SinCosEntry *D_002CF6B4;

/* Truncate towards zero into *out; inlined into its callers. */
static void storeftoi(int * volatile out, float f)
{
    *out = _mm_cvttss_si32(_mm_load_ss(&f));
}

/* one entry of the table func_0014F9A0 frees; the table ends where D_002DF874 starts */
struct S_0014F9A0_Entry {
    void *f0;
    int f4;
    int f8;
};

extern S_0014F9A0_Entry D_002DF748[];
extern float D_002DF874;
extern float *D_002DF87C;

void func_001E8390(void *p);

extern int D_00286B04;

struct S_00150440_Renderer {
    void func_0012AAE0(float a, int b);
};

struct S_00150440_Device {
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
    virtual void v13(int a, int b);
    S_00150440_Renderer *f4;
};

extern S_00150440_Device *D_002EFDB8;

struct C_00150440 {
    char pad0[0x28];
    int f28;
    int f2C;
    int func_00150440(void);
};

struct C_00150350 {
    int unk0;
    void func_00150350(void);
};

/* CameraBehavior, the base of FirstPersonCam */
struct C_0012B510R {
    void *vtbl;
    C_0012B510R *func_0012B510(void);
};

/* FirstPersonCam */
struct C_001500A0 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    float f14;
    C_001500A0 *func_001500A0(void);
};

static float fabs_0014FB30(float v)
{
    volatile float x;
    volatile int tmp;
    x = v;
    tmp = *(volatile int *)&x & 0x7fffffff;
    return *(float *)&tmp;
}

extern float D_00275460;
extern float D_002755E4;
extern float D_00286AB8;
extern float D_00286ABC;
extern float D_002BF2AC[];
extern float D_002CF6B0;
extern float D_002CF738;
extern float D_002CF73C[];
extern unsigned char D_002CF6B8[];
extern unsigned char D_002CF6F8;
extern unsigned int D_002CF2B0[];
extern unsigned int D_002CF4B0[];


float func_0014F600(float x)
{
    extern float D_002A773C;
    extern float D_002A7738;
    extern float D_002A7734;
    extern float D_002A7730;
    extern float D_00275460;
    extern float D_002A7720;
    extern float D_002A771C;
    extern float D_002A7718;
    extern float D_002A7714;
    extern float D_002A7710;
    float x2 = x * x;
    return ((((D_002A773C * x2 + D_002A7738) * x2 + D_002A7734) * x2 + D_002A7730) * x2 + D_00275460) * x /
           (((((D_002A7720 * x2 + D_002A771C) * x2 + D_002A7718) * x2 + D_002A7714) * x2 + D_002A7710) * x2 + D_00275460);
}

void func_0014F670(float x, float *num, float *den)
{
    extern float D_002A773C;
    extern float D_002A7738;
    extern float D_002A7734;
    extern float D_002A7730;
    extern float D_00275460;
    extern float D_002A7720;
    extern float D_002A771C;
    extern float D_002A7718;
    extern float D_002A7714;
    extern float D_002A7710;
    float x2 = x * x;
    *num = ((((D_002A773C * x2 + D_002A7738) * x2 + D_002A7734) * x2 + D_002A7730) * x2 + D_00275460) * x;
    *den = (((((D_002A7720 * x2 + D_002A771C) * x2 + D_002A7718) * x2 + D_002A7714) * x2 + D_002A7710) * x2 + D_00275460);
}

void func_0014F6E0(float a, float *s, float *c)
{
    extern float D_002756D0;
    extern float D_002DF870;
    extern float D_002DF874;
    float func_00016D60(float);
    int i;
    float v = (func_00016D60(a) + D_002756D0) * D_002DF870;
    storeftoi(&i, v);
    float f = (v - (float)i) * D_002DF874;
    *s = f * D_002CF6B4[i].a + D_002CF6B4[i].b;
    *c = D_002CF6B4[i].a - f * D_002CF6B4[i].b;
}

void func_0014F760(float x, float *num, float *den, float *q)
{
    extern float D_002A773C;
    extern float D_002A7738;
    extern float D_002A7734;
    extern float D_002A7730;
    extern float D_00275460;
    extern float D_002A7720;
    extern float D_002A771C;
    extern float D_002A7718;
    extern float D_002A7714;
    extern float D_002A7710;
    float x2 = x * x;
    *num = ((((D_002A773C * x2 + D_002A7738) * x2 + D_002A7734) * x2 + D_002A7730) * x2 + D_00275460) * x;
    *den = (((((D_002A7720 * x2 + D_002A771C) * x2 + D_002A7718) * x2 + D_002A7714) * x2 + D_002A7710) * x2 + D_00275460);
    *q = *num / *den;
}

float func_0014F7E0(float x)
{
    extern float D_00275460;
    extern float D_00275F58;
    extern float D_002DF86C;
    int i;
    float t;
    int * volatile p = &i;
    float v;
    float f;

    v = x;
    if (x > D_00275460) {
        v = D_00275460;
    } else if (x < D_00275F58) {
        v = D_00275F58;
    }
    v = (v + D_00275460) * D_002DF86C;
    t = v;
    *p = _mm_cvttss_si32(*(__m128 *)&t);
    f = v - (float)i;
    return (D_00275460 - f) * D_002DF87C[i] + f * D_002DF87C[i + 1];
}

float func_0014F870(float x)
{
    extern float D_002756D4;
    float func_0014F7E0(float x);

    return D_002756D4 - func_0014F7E0(x);
}

float func_0014F990(float x)
{
    return (float)atan(x);
}

void func_0014F9A0(void)
{
    S_0014F9A0_Entry *p;

    if (D_002DF87C != 0) {
        func_001E8390(D_002DF87C);
    }
    p = D_002DF748;
    do {
        if (p->f0 != 0) {
            func_001E8390(p->f0);
        }
        p++;
    } while ((int)p < (int)&D_002DF874);
    if (D_002CF6B4 != 0) {
        func_001E8390(D_002CF6B4);
    }
}

void func_0014F9F0(void)
{
    unsigned int i;
    for (i = 0; i < 0x80; i++) {
        unsigned int a = (i | 0x3f80) << 16;
        float r = sqrtf(*(float *)&a);
        D_002CF2B0[i] = *(unsigned int *)&r & 0x7f0000;
        unsigned int b = (i | 0x4000) << 16;
        float s = sqrtf(*(float *)&b);
        D_002CF4B0[i] = *(unsigned int *)&s & 0x7f0000;
    }
}

void func_0014FA70(void)
{
    int i;
    for (i = 0; i < 0x80; i++) {
        unsigned int a = (i | 0x1f80) << 17;
        float r = D_00275460 / sqrtf(*(float *)&a);
        D_002CF6B8[i] = (*(unsigned int *)&r + 0x2000) >> 15;
    }
    D_002CF6F8 = 0xff;
}

void func_0014FAD0(void)
{
    unsigned int i;
    D_002CF6B0 = 10429.7412109375f;
    D_002CF738 = 2607.435302734375f;
    for (i = 0; i < 0x4000; i++) {
        D_002BF2AC[i + 1] = (float)sin(D_00286ABC * (float)i);
        D_002CF73C[i + 1] = (float)tan((float)i * D_00286AB8);
    }
}

void func_0014FD80(float *p)
{
    extern double D_002843A0;
    extern float D_002756D0;
    extern float D_002756B8;
    extern float D_002756E8;
    double r = fmod(*p, D_002843A0);

    *p = (float)r;
    if (r > D_002756D0) {
        *p = (float)(r - D_002756B8);
    } else if (r < D_002756E8) {
        *p = (float)(r + D_002756B8);
    }
}

void func_0014FDD0(void)
{
  int func_0014F190(...);
  int func_0014F350(...);
  int func_0014F270(...);
  int func_0014F9F0(...);
  int func_0014FA70(...);
  int func_0014FAD0(...);
  func_0014F190();
  func_0014F350();
  func_0014F270();
  func_0014F9F0();
  func_0014FA70();
  func_0014FAD0();
  return;
}

void *func_0014FDF0(const char *path, const char *mode)
{
    extern char D_00275678[];
    extern char D_00286AD0[];
    int func_001ADCC0(char *buf, int size, const char *fmt, ...);
    void *func_001E9701(const char *name, const char *mode);
    char buf[0x100];
    const char *s;
    char *d;
    char c;

    if (path[1] == ':') {
        s = path;
        d = buf;
        do {
            c = *s++;
            *d++ = c;
        } while (c != 0);
    } else {
        func_001ADCC0(buf, 0x100, D_00275678, D_00286AD0, path);
    }
    return func_001E9701(buf, mode);
}

void func_0014FE50(void) {
    int func_001E9760(...);
    func_001E9760();
}

void func_0014FE60(int a0, int a1, int a2) {
    int func_001E98A9(...);
    func_001E98A9(a0, 1, a1, a2);
}

void func_0014FE80(void) {
    int func_001E9A0C(...);
    func_001E9A0C();
}

void func_0014FED0(void)
{
    int func_001E9B9B(...);
    func_001E9B9B();
}

C_001500A0 *C_001500A0::func_001500A0(void)
{
    extern int D_00286AE8;

    ((C_0012B510R *)this)->func_0012B510();
    f4 = 0;
    f8 = 0;
    fC = 0;
    f10 = 0;
    vtbl = (void *)&D_00286AE8;
    f14 = 90.0f;
    return this;
}

void C_00150350::func_00150350(void) {
    extern int D_00286AE8;
    int func_0012B540(...);
    unk0 = (int)&D_00286AE8;
    func_0012B540();
}

int C_00150440::func_00150440(void)
{
    D_002EFDB8->f4->func_0012AAE0(1.0f, f2C);
    D_002EFDB8->v13(f28, f2C);
    return 1;
}

