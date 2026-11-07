/* 30 functions from 0x0014F600 to 0x00150480, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
#include <stdarg.h>
#include "asm_helpers.h"
/* One entry of the sine/cosine table func_0014F6E0 interpolates in. */
struct S_SinCosEntry {
    float a;
    float b;
};

extern S_SinCosEntry *D_002CF6B4;

extern float D_00275460;
extern float D_00275F58;

/* clamp into [D_00275F58, D_00275460]; inlined into its callers */
static float clampf(float x)
{
    if (x > D_00275460) {
        return D_00275460;
    }
    if (x < D_00275F58) {
        return D_00275F58;
    }
    return x;
}

extern float D_00275544;
extern "C" unsigned int strlen(const char *);
void *func_001E8920(void *d, const void *s, int n);
static int min_0014FF00(int a, int b) { return a < b ? a : b; }
/* Truncate towards zero into *out; inlined into its callers. */
static void storeftoi(int * volatile out, float f)
{
    *out = _mm_cvttss_si32(*(__m128 *)&f);
}

/* one entry of the table func_0014F9A0 frees; the table ends where D_002DF874 starts */
struct S_0014F9A0_Entry {
    void *f0;
    int f4;
    int f8;
};

extern S_0014F9A0_Entry D_002DF748[];
extern float D_00275544;
extern float D_002DF740[];
extern float D_002DF744[];
extern float D_002DF874;
extern float *D_002DF87C;

void func_001E8390(void *p);
int func_001E9AB6(char *buf, int count, const char *fmt, va_list ap);
int __cdecl func_001E9A58(void *stream, const char *fmt, ...);

extern int D_00286B04;

struct S_002EFDB8_Fog {
    char pad0[0x2c];
    float f2C;
};

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
    char pad8[0x24];
    int f2C;
};

extern S_00150440_Device *D_002EFDB8;

struct C_00157600 {
    void func_00157600(int a0);
};

/* Fog: a GameObject (0x24 bytes) followed by the fog blend state */
struct C_00150360 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    int f38;
    int f3C;
    int f40;
    float f44;
    float f48;
    float f4C;
    int f50;
    C_00150360 *func_00150360(int a0);
    void func_00150390(float a, float b, float c, int d);
    void func_00150390(int a, float b, float c, int d);
    void func_001503E0(float a, float b, float c);
};

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

struct V_1500 { float x,y,z,w; V_1500() { x=y=z=0; w=1; } };
struct T_1500 {
 V_1500 *func_00199B00(V_1500 *, int);
 V_1500 func_00199B00(int);
 void func_00197B40(V_1500 *, V_1500 *);
};
void func_0011F400(void *, float, float, float, float, float);
void func_000263B0(void *, void *, void *);
void func_00030AC0(void *, void *, void *);
float func_0014F510(float);
float func_0014F550(float);
static __forceinline void cross_1500(V_1500 * volatile out, V_1500 * volatile a, V_1500 * volatile b) {
 V_1500 *pa=a, *pb=b;
 __m128 va = _mm_loadu_ps(&pa->x);
 __m128 vb = _mm_loadu_ps(&pb->x);
 __m128 sa = va, sb = vb;
 sa = _mm_shuffle_ps(sa,sa,0xc9);
 sb = _mm_shuffle_ps(sb,sb,0xc9);
 vb = _mm_mul_ps(vb,sa);
 va = _mm_mul_ps(va,sb);
 va = _mm_sub_ps(va,vb);
 va = _mm_shuffle_ps(va,va,0xc9);
 _mm_storeu_ps(&out->x,va);
}
/* FirstPersonCam */
struct C_001500A0 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    float f14;
    C_001500A0 *func_001500A0(void);
 void func_001500D0(int, int *, V_1500 *, int, float *, V_1500 *, V_1500 *, int *);
};

static float fabs_0014FB30(float x)
{
    volatile int tmp;
    tmp = *(int *)&x & 0x7fffffff;
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
    extern float D_002756D0, D_002DF870, D_002DF874;
    float func_00016D60(float);
    float v = (func_00016D60(a) + D_002756D0) * D_002DF870;
    AsmFloatToInt(v, (int *)&a);
    int i = *(int *)&a;
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
    extern float D_002DF86C;
    int i;
    float v, f;
    if (x > D_00275460)
        x = D_00275460;
    else if (x < D_00275F58)
        x = D_00275F58;
    v = (x + D_00275460) * D_002DF86C;
    i = (int)v;
    f = v - (float)i;
    return (D_00275460 - f) * D_002DF87C[i] + f * D_002DF87C[i + 1];
}

float func_0014F870(float x)
{
    extern float D_002756D4;
    float func_0014F7E0(float x);

    return D_002756D4 - func_0014F7E0(x);
}

float func_0014F890(float x) {
 volatile float sign, offset;
 if (x > D_00275460) { x = D_00275460; goto positive; }
 if (x < D_00275F58) { x = D_00275F58; goto negative; }
 if (x < D_00275544) goto negative;
positive:
 offset = 0.0f; sign = 1.0f; x = D_00275460 - x;
 goto lookup;
negative:
 offset = 3.14159265358979323846f; sign = -1.0f; x += D_00275460;
lookup:
 int n = ((*(unsigned int *)&x >> 23) & 255) - 102;
 if (n > 24) n = 24;
 else if (n < 0) n = 0;
 float v = (x - D_002DF740[n * 3]) * D_002DF744[n * 3];
 int * volatile p = (int *)&x;
 *p = (int)v;
 float f = v - (float)*(volatile int *)&x;
 float *table = (float *)D_002DF748[n].f0 + *(int *)&x;
 return ((D_00275460 - f) * table[0] + f * table[1]) * sign + offset;
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

static __forceinline float Sqrt_0014F9F0(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x)); return r; }

#pragma intrinsic(sqrt)
void func_0014F9F0(void)
{
 float t;
 unsigned int a, b;
 for(unsigned int i=0;i<0x80;i++) {
 a=(i|0x3f80)<<16;
 t=AsmSqrtF(*(float *)&a);
 D_002CF2B0[i]=*(unsigned int *)&t&0x7f0000;
 b=(i|0x4000)<<16;
 t=AsmSqrtF(*(float *)&b);
 D_002CF4B0[i]=*(unsigned int *)&t&0x7f0000;
 }
}
void func_0014FA70(void)
{
    int i;
    for (i = 0; i < 0x80; i++) {
        unsigned int a = (i | 0x1f80) << 17;
        float root = AsmSqrtF(*(float *)&a);
        float r = D_00275460 / root;
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

float func_0014FB30(float v)
{
    extern float D_00275460;
    extern float D_00286AC0;
    extern float D_002756D4;
    extern float D_00275544;
    struct {
        volatile int tmp;
        volatile float x;
    } s;
    float ax;
    float r;
    float sq;
    int bits;

    s.x = v;
    bits = *(volatile int *)&s.x;
    s.tmp = bits & 0x7fffffff;
    ax = *(float *)&s.tmp;
    if (ax > D_00275460) {
        sq = ax * ax;
        r = D_002756D4 - ax / (sq + D_00286AC0);
    } else {
        sq = ax * ax;
        r = ax / (sq * D_00286AC0 + D_00275460);
    }
    if (v < D_00275544) {
        r = -r;
    }
    return r;
}

float func_0014FBA0(volatile float y, volatile float x)
{
    extern float D_002756D0;
    extern float D_002756D4;
    extern float D_00286AC0;
    extern float D_00286AC4;
    float q;
    float d;
    int a;
    int b;

    if (x != D_00275544) {
        if (y == D_00275544) {
            if (x > D_00275544) {
                return D_00275544;
            }
            return D_002756D0;
        }
        if (y > D_00275544) {
            if (x > D_00275544) {
                q = y / x;
                a = *(int *)&q;
                b = a & 0x7fffffff;
                *(int *)&x = b;
                if (x > D_00275460) {
                    d = x * x + D_00286AC0;
                    return D_002756D4 - x / d;
                }
                d = x * x * D_00286AC0 + D_00275460;
                return x / d;
            }
            q = y / x;
            a = *(int *)&q;
            b = a & 0x7fffffff;
            *(int *)&x = b;
            if (x > D_00275460) {
                d = x * x + D_00286AC0;
                return x / d + D_002756D4;
            }
            d = x * x * D_00286AC0 + D_00275460;
            return D_002756D0 - x / d;
        }
        if (x > D_00275544) {
            q = y / x;
            a = *(int *)&q;
            b = a & 0x7fffffff;
            *(int *)&x = b;
            if (x > D_00275460) {
                d = x * x + D_00286AC0;
                return x / d - D_002756D4;
            }
            d = x * x * D_00286AC0 + D_00275460;
            return -(x / d);
        }
        q = y / x;
        a = *(int *)&q;
        b = a & 0x7fffffff;
        *(int *)&x = b;
        if (x > D_00275460) {
            d = x * x + D_00286AC0;
            return D_00286AC4 - x / d;
        }
        d = x * x * D_00286AC0 + D_00275460;
        return x / d - D_002756D0;
    }
    if (y > D_00275544) {
        return D_002756D4;
    }
    if (y < D_00275544) {
        return D_00286AC4;
    }
    return D_00275544;
}

void func_0014FD80(float *p)
{
    extern double D_002843A0;
    extern float D_002756D0;
    extern float D_002756B8;
    extern float D_002756E8;

    *p = (float)fmod(*p, D_002843A0);
    if (*p > D_002756D0) {
        *p = *p - D_002756B8;
    } else if (*p < D_002756E8) {
        *p = *p + D_002756B8;
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
    char *s;
    int off;
    char c;

    if (path[1] != ':') {
        func_001ADCC0(buf, 0x100, D_00275678, D_00286AD0, path);
    } else {
        s = (char *)path;
        off = buf - s;
        do {
            c = *s;
            s[off] = c;
            s++;
        } while (c != 0);
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

void func_0014FE90(void *stream, const char *fmt, ...)
{
    char buf[256];
    va_list ap;

    va_start(ap, fmt);
    func_001E9AB6(buf, 0x100, fmt, ap);
    func_001E9A58(stream, buf);
}

void func_0014FED0(void)
{
    int func_001E9B9B(...);
    func_001E9B9B();
}

void func_0014FF00(char *path, char *drive, char *dir, char *fname, char *ext)
{
 char *dot=0; char *p; char *slash; int n; volatile int lens[3]; lens[2]=255;
 if(strlen(path)>=1 && path[1]==':') { if(drive) {func_001E8920(drive,path,2); drive[2]=0;} path+=3; }
 else if(drive) *drive=0;
 slash=0; p=path;
 char c=*p;
 if(c) do { if(c=='/' || c=='\\') slash=p+1; else if(c=='.') dot=p; c=p[1]; ++p; } while(c);
 if(slash) {if(dir) {lens[0]=slash-path; lens[1]=min_0014FF00(lens[2],lens[0]); n=lens[1]; func_001E8920(dir,path,n); dir[n]=0;} path=slash;} else if(dir) *dir=0;
 if(dot && dot>=path) {
 if(fname) {lens[0]=dot-path; lens[1]=min_0014FF00(lens[2],lens[0]); n=lens[1]; func_001E8920(fname,path,n); fname[n]=0;}
 if(ext) {lens[0]=p-dot; lens[1]=min_0014FF00(lens[2],lens[0]); n=lens[1]; func_001E8920(ext,dot,n); ext[n]=0;}
 } else {if(fname) {lens[0]=p-path; lens[1]=min_0014FF00(lens[2],lens[0]); n=lens[1]; func_001E8920(fname,path,n); fname[n]=0;} if(ext) *ext=0;}
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

void C_001500A0::func_001500D0(int a, int *b, V_1500 *c, int d, float *e, V_1500 *f, V_1500 *g, int *h) {
 C_001500A0 *self=this;
 if (f4) {
 V_1500 v,u,r;
 
 float m[16],n[16],o[16]; V_1500 p;
 p=((T_1500 *)self->f4)->func_00199B00(0);
 ((T_1500 *)self->f4)->func_00197B40(&v,&u);
 p.y+=*(float *)&self->f8;
 cross_1500(&r,&v,&u);
 float ax=r.x, ay=r.y, az=r.z;
 float angle=*(float *)&self->fC;
 float s=func_0014F510(angle);
 float co=func_0014F550(angle);
 func_0011F400(m,ax,ay,az,s,co);
 angle=*(float *)&self->f10;
 s=func_0014F510(angle);
 co=func_0014F550(angle);
 func_0011F400(n,0,1,0,s,co);
 func_000263B0(o,m,n);
 func_00030AC0(&u,&u,o);
 func_00030AC0(&r,&r,o);
 *b=0; *c=p; *e=self->f14; *f=u; *g=r; *h=0;
 }
}

void C_00150350::func_00150350(void) {
    extern int D_00286AE8;
    int func_0012B540(...);
    unk0 = (int)&D_00286AE8;
    func_0012B540();
}

C_00150360 *C_00150360::func_00150360(int a0)
{
    ((C_00157600 *)this)->func_00157600(a0);
    f38 = 0;
    f40 = 0;
    f3C = 1;
    f50 = 1;
    vtbl = (void *)&D_00286B04;
    return this;
}

void C_00150360::func_00150390(int a, float b, float c, int d)
{
    f24 = a;
    f30 = b;
    f34 = c;
    f2C = (f44 - f48) * b + f48;
    f28 = (D_00275460 - c) * (f2C - f4C);
    D_002EFDB8->f2C = a;
    f50 = 1;
}

void C_00150360::func_001503E0(float a, float b, float c)
{
    double s;
    double t;

    f44 = a;
    f48 = b;
    f4C = c;
    s = f30;
    f30 = (float)s;
    t = f34;
    f34 = (float)t;
    f2C = (a - b) * s + b;
    f28 = (D_00275460 - t) * (f2C - c);
    D_002EFDB8->f2C = f24;
    f50 = 1;
}

int C_00150440::func_00150440(void)
{
    D_002EFDB8->f4->func_0012AAE0(1.0f, f2C);
    D_002EFDB8->v13(f28, f2C);
    return 1;
}

