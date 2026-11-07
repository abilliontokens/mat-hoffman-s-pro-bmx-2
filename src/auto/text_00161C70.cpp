/* 24 functions from 0x00161C70 to 0x00162B70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <math.h>
#include <string.h>
#define VF_00162020(x) (*(volatile float *)&(x))
struct M4_00162020 { float f[16]; };
struct __declspec(align(16)) S_Matrix_00162330 { float m[16]; };
static __forceinline void translate_00162330(float *s, float x, float y, float z)
{
    s[3]=x; s[7]=y; s[11]=z;
    s[0]=1.0f; s[4]=0.0f; s[8]=0.0f; s[12]=0.0f;
    s[1]=0.0f; s[5]=1.0f; s[9]=0.0f; s[13]=0.0f;
    s[2]=0.0f; s[6]=0.0f; s[10]=1.0f; s[14]=0.0f; s[15]=1.0f;
}
static __forceinline void setmatrix_00162330(float *p, float x0, float y0, float z0, float x1, float y1, float z1, float x2, float y2, float z2)
{
    p[0]=x0; p[4]=x1; p[8]=x2;
    p[1]=y0; p[5]=y1; p[9]=y2;
    p[2]=z0; p[6]=z1; p[10]=z2;
}
static __forceinline void setrow_00162330(float *p, float x, float y, float z)
{
    p[0] = x; p[1] = y; p[2] = z;
}
struct C_00162720 {
    void func_00162720(undefined4 param_1);
};

struct C_001625D0 {
    int unk0;
    void func_001625D0(void);
};

void func_001E891B(void *p);

struct PositionElement {
    char pad[0x18];
    void func_0015B680();
};

struct LinearPositionController {
    void *func_001629A0(unsigned char flags);
};

extern int D_00287B94;
extern int D_002A8314;
extern int D_002ED708;
extern int D_002EEF28[];
extern float D_002ED710[];
extern float D_00287B6C;
extern float D_00287B68;
extern float D_002EDF18[][2];
extern float D_002EBEF0[][3];
int func_001E8833(void);
extern float D_00275460;
extern float D_00275544;
extern float D_002755EC;
void func_00162020(float *a, float *b, int c);
int func_0014F6E0(void *a, void *b, void *c);
void func_001622C0(float *m, void *arg);

struct C_001625E0 {
    void *vtbl;
    void *func_001625E0(int flags);
};

struct C_00161F80 {
    void func_00161D90();
    float func_00161F80(float param);
};

extern float D_00287B80;
extern float D_002755E8;
float func_0014F590(float x);

extern int D_0015B660;
extern int D_0015B7A0;
void *func_001E8A44(int size);
void __stdcall func_00011FF0(void *p, int step, int count, int *ctor);

struct C_001628C0 {
    char pad0[4];
    char *f4;
    char *f8;
    char padC[8];
    void **f14;
    char pad18[0x14];
    int f2c;
    void func_001628C0(int count);
};

struct C_001625A0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    char pad2c[0x30 - 0x2c];
    int f30;
    int f34;
    unsigned char f38;
    void func_00157600(int a);
    C_001625A0 *func_001625A0(int a);
};

struct C_001628A0 {
    char pad0[0x38];
    float f38;
    int func_001628A0(float t);
};

void *func_001E83E8(void *p, int size);
int func_001EA426(const char *a, const char *b);

/* polymorphic helper object held in the item's f4..f10 arrays (virtual destructor, slot 0) */
struct S_00162790_Virt {
    virtual ~S_00162790_Virt();
    static void operator delete[](void *p) { func_001E891B(p); }
};

/* ref-counted item stored in C_00162A80's table */
struct C_00162790 {
    char *unk0;
    S_00162790_Virt *unk4;
    S_00162790_Virt *unk8;
    S_00162790_Virt *unkC;
    S_00162790_Virt *unk10;
    void *unk14;
    void *unk18;
    int unk1C;
    int unk20;
    unsigned char unk24;
    char pad25[3];
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    C_00162790 *func_00162790(void);
    void func_001627E0(void);
};

struct C_00162A80 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    C_00162790 **unk18;
    void func_00162A80(C_00162790 *item);
    C_00162790 *func_00162B20(const char *name, int unused);
};

extern int D_00287C24;
extern int D_002AA46C;
void *func_001E8A44(int size);

/* object with a deleting destructor in slot 0; the vertex streams hold one more virtual */
struct S_00162610_Stream {
    virtual void destroyObject(int flags);
    virtual void v1(int arg, int d);
    S_00162610_Stream *func_00144640(void);
};

struct C_00162610 {
    void *vtbl;
    char pad4[0x20];
    S_00162610_Stream *f24;
    int f28;
    int *f2C;
    int f30;
    int f34;
    char f38;
    unsigned char f39;
    void func_00157600(int a);
    void func_00157660(void);
    C_00162610 *func_00162610(int a);
    void func_00162660(void);
    C_00162610 *func_00162690(int p1, char flag, int count, int *arr, int p5);
    void *func_00162740(unsigned int flags);
};


void func_00161C70(float t, int n, float *dst, float *src)
{
    float *prev = src; src += n;
    for (int i=0; i<n; ++i) {
        *dst += (*prev * 3.0f - *src) * t * 0.5f;
        *src++ = *prev++;
        ++dst;
    }
}

void C_00161F80::func_00161D90()
{
    int i, j, k;
    float s;
    float *v;
    for (i = 0; i < 256; i++) {
        D_002EEF28[i] = i;
        D_002ED710[i] = (float)(func_001E8833() % 512 - 256) * D_00287B68;
        for (j = 0; j < 2; j++)
            D_002EDF18[i][j] = (float)(func_001E8833() % 512 - 256) * D_00287B68;
        v = D_002EDF18[i];
        s = D_00275460 / (float)sqrt(v[0] * v[0] + v[1] * v[1]);
        v[0] = s * v[0];
        v[1] = s * v[1];
        for (j = 0; j < 3; j++)
            D_002EBEF0[i][j] = (float)(func_001E8833() % 512 - 256) * D_00287B68;
        v = D_002EBEF0[i];
        s = D_00275460 / (float)sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
        v[0] = s * v[0];
        v[1] = s * v[1];
        v[2] = s * v[2];
    }
    while (--i) {
        k = D_002EEF28[i];
        D_002EEF28[i] = D_002EEF28[j = func_001E8833() % 256];
        D_002EEF28[j] = k;
    }
    for (i = 0; i < 0x102; i++) {
        D_002EEF28[256 + i] = D_002EEF28[i];
        D_002ED710[256 + i] = D_002ED710[i];
        for (j = 0; j < 2; j++)
            D_002EDF18[256 + i][j] = D_002EDF18[i][j];
        for (j = 0; j < 3; j++)
            D_002EBEF0[256 + i][j] = D_002EBEF0[i][j];
    }
}

static __forceinline void Ftoi_00161F80(int *out, float f)
{
    *out = _mm_cvttss_si32(*(__m128 *)&f);
}

void func_00161D90(void);
float func_00161F80(float param)
{
    float v;
    float f;
    float fa;
    int *p;
    volatile float t;
    if (D_002A8314 != 0) {
        D_002A8314 = 0;
        func_00161D90();
    }
    v = param;
    v += D_00287B6C;
    p = &D_002ED708;
    t = v;
    *p = _mm_cvttss_si32(*(__m128 *)&t);
    f = v - (float)D_002ED708;
    fa = f * D_002ED710[D_002EEF28[D_002ED708 & 0xff]];
    return fa + (D_002755EC - (f + f)) * f * f * ((f - D_00275460) * D_002ED710[D_002EEF28[(D_002ED708 + 1) & 0xff]] - fa);
}

void func_00162020(float *out, float *m, int transpose)
{
 __declspec(align(16)) float t[16];
 float a = VF_00162020(m[10])*m[5]-VF_00162020(m[9])*m[6];
 t[0]=a;
 t[4]=-(VF_00162020(m[1])*m[10]-VF_00162020(m[9])*m[2]);
 t[8]=VF_00162020(m[6])*m[1]-VF_00162020(m[5])*m[2];
 float b = VF_00162020(m[11])*m[6]-VF_00162020(m[7])*m[10];
 float c = VF_00162020(m[11])*m[5]-VF_00162020(m[9])*m[7];
 t[12]=-(b*m[1]-c*m[2]+a*m[3]);
 float d = VF_00162020(m[4])*m[10]-VF_00162020(m[6])*m[8];
 t[1]=-d;
 t[5]=VF_00162020(m[0])*m[10]-VF_00162020(m[8])*m[2];
 t[9]=-(VF_00162020(m[6])*m[0]-VF_00162020(m[4])*m[2]);
 t[3]=0; t[7]=0; t[11]=0;
 float e = VF_00162020(m[11])*m[4]-VF_00162020(m[7])*m[8];
 t[13]=b*m[0]-e*m[2]+d*m[3];
 float f = VF_00162020(m[9])*m[4]-VF_00162020(m[8])*m[5];
 t[2]=f;
 t[6]=-(VF_00162020(m[9])*m[0]-VF_00162020(m[1])*m[8]);
 t[10]=VF_00162020(m[0])*m[5]-VF_00162020(m[4])*m[1];
 t[14]=-(c*m[0]-e*m[1]+f*m[3]);
 t[15]=a*m[0]-d*m[1]+f*m[2];
 if(transpose) {
 float * volatile p=t;
 float *src=p;
 __m128 r0;
 r0 = _mm_loadl_pi(r0, (__m64*)src);
 r0 = _mm_loadh_pi(r0, (__m64*)(src+4));
 __m128 r1;
 r1 = _mm_loadl_pi(r1, (__m64*)(src+2));
 r1 = _mm_loadh_pi(r1, (__m64*)(src+6));
 __m128 r2;
 r2 = _mm_loadl_pi(r2, (__m64*)(src+8));
 r2 = _mm_loadh_pi(r2, (__m64*)(src+12));
 __m128 r3;
 r3 = _mm_loadl_pi(r3, (__m64*)(src+10));
 r3 = _mm_loadh_pi(r3, (__m64*)(src+14));
 __m128 a0=_mm_shuffle_ps(r0,r2,0x88), a1=_mm_shuffle_ps(r0,r2,0xdd), a2=_mm_shuffle_ps(r1,r3,0x88), a3=_mm_shuffle_ps(r1,r3,0xdd);
 *(__m128*)out=a0; *(__m128*)(out+4)=a1; *(__m128*)(out+8)=a2; *(__m128*)(out+12)=a3;
 } else {
 float * volatile p=t;
 float *src=p;
 __m128 a0=*(__m128*)src,a1=*(__m128*)(src+4),a2=*(__m128*)(src+8),a3=*(__m128*)(src+12);
 *(__m128*)out=a0; *(__m128*)(out+4)=a1; *(__m128*)(out+8)=a2; *(__m128*)(out+12)=a3;
 }
}

int func_00162210(float *out, float *m)
{
    float det;
    float s;
    __m128 v;
    __m128 *p;
    det = (m[10] * m[5] - m[9] * m[6]) * m[0] - (m[4] * m[10] - m[8] * m[6]) * m[1] + (m[9] * m[4] - m[8] * m[5]) * m[2];
    if (det == D_00275544) {
        return 0;
    }
    func_00162020(out, m, 1);
    s = D_00275460 / det;
    v = _mm_set1_ps(s);
    p = (__m128 *)out;
    p[0] = _mm_mul_ps(p[0], v);
    p[1] = _mm_mul_ps(p[1], v);
    p[2] = _mm_mul_ps(p[2], v);
    p[3] = _mm_mul_ps(p[3], v);
    return 1;
}

void func_001622C0(float *m, void *arg)
{
    float v[2];
    float n;
    func_0014F6E0(arg, &v[0], &v[1]);
    m[0] = v[1];
    n = -v[0];
    m[4] = v[0];
    m[5] = v[1];
    m[1] = n;
    m[8] = 0.0f;
    m[12] = 0.0f;
    m[9] = 0.0f;
    m[13] = 0.0f;
    m[2] = 0.0f;
    m[6] = 0.0f;
    m[10] = 1.0f;
    m[14] = 0.0f;
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[11] = 0.0f;
    m[15] = 1.0f;
}

void func_0011ACC0(void *out, void *a, void *b);
void func_00162330(void *a, float *n, float *p1, float *p2, float *p3)
{
    __m128 mat[4];
    float *m=(float *)mat;
    __m128 trans[4];
    float *s=(float *)trans;
    setmatrix_00162330(m,p1[0],p1[1],p1[2],p2[0],p2[1],p2[2],p3[0],p3[1],p3[2]);
    m[12]=0.0f; m[13]=0.0f; m[14]=0.0f;
    m[3]=0.0f; m[7]=0.0f; m[11]=0.0f; m[15]=1.0f;
    translate_00162330(s,-n[0],-n[1],-n[2]);
    func_0011ACC0(a,s,m);
}

/* The part of the projection matrix that doesn't depend on the far plane. */
static __forceinline void setprojcommon(float *m, float a2, float a3, float a4, float a5, float a6)
{
    m[14] = 1.0f;
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[15] = 0.0f;
    m[4] = 0.0f;
    m[8] = 0.0f;
    m[12] = 0.0f;
    m[1] = 0.0f;
    m[9] = 0.0f;
    m[13] = 0.0f;
    m[0] = (a6 + a6) / (a3 - a2);
    m[5] = (a6 + a6) / (a5 - a4);
    m[2] = (a2 + a3) / (a3 - a2);
    m[6] = (a4 + a5) / (a5 - a4);
}

float *func_00162470(float * const m, const float a2, const float a3, const float a4, const float a5, const float a6, const float a7, int a8) { if(a8) { m[14]=1.0f; m[3]=0.0f; m[7]=0.0f; m[15]=0.0f; m[4]=0.0f; m[8]=0.0f; m[12]=0.0f; m[1]=0.0f; m[9]=0.0f; m[13]=0.0f;
m[0]=(a6+a6)/(a3-a2);
volatile float &h=*(volatile float *)&a8; h=a5-a4;
m[5]=(a6+a6)/h; m[2]=(a2+a3)/(a3-a2); m[6]=(a4+a5)/h; m[10]=a7/(a7-a6); m[11]=-(a6*a7/(a7-a6)); } else { m[14]=1.0f; m[3]=0.0f; m[7]=0.0f; m[15]=0.0f; m[4]=0.0f; m[8]=0.0f; m[12]=0.0f; m[1]=0.0f; m[9]=0.0f; m[13]=0.0f;
m[0]=(a6+a6)/(a3-a2);
volatile float &h=*(volatile float *)&a8; h=a5-a4;
m[5]=(a6+a6)/h; m[2]=(a2+a3)/(a3-a2); m[6]=(a4+a5)/h; m[10]=(a6+a7)/(a7-a6); m[11]=a6*a7*-2.0f/(a7-a6); } return m; }

void func_00162530(float *m, float a2, float a3, float a4, float a5, int a6)
{
    float v;
    float w;
    v = func_0014F590(a2 * 0.5f);
    w = (v *= a4) / a3;
    func_00162470(m, -v, v, -w, w, a4, a5, a6);
}

C_001625A0 *C_001625A0::func_001625A0(int a)
{
    func_00157600(a);
    f24 = 0;
    f28 = 0;
    f30 = 0;
    f34 = 0;
    f38 &= ~1;
    vtbl = (void *)&D_00287B94;
    return this;
}

void C_001625D0::func_001625D0(void) {
    extern int D_00287B94;
    int func_00157660(...);
    unk0 = (int)&D_00287B94;
    func_00157660();
}

void *C_001625E0::func_001625E0(int flags)
{
    int func_00157660(...);
    vtbl = (void *)&D_00287B94;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_00162610 *C_00162610::func_00162610(int a)
{
    func_00157600(a);
    f28 = 0;
    f2C = 0;
    f38 = 0;
    f24 = 0;
    vtbl = (void *)&D_00287C24;
    f30 = 1;
    f34 = 0xff7f7f7f;
    f39 = (f39 & 0xfd) | 1;
    return this;
}

void C_00162610::func_00162660(void)
{
    vtbl = (void *)&D_00287C24;
    if (f2C != 0) {
        func_001E891B(f2C);
    }
    if (f24 != 0) {
        f24->destroyObject(1);
    }
    func_00157660();
}

C_00162610 *C_00162610::func_00162690(int p1, char flag, int count, int *arr, int p5)
{
    int i;
    S_00162610_Stream *s;
    void *m;

    f38 = flag;
    f28 = count;
    f2C = (int *)func_001E8A44(count * 4);
    f30 = (p5 == 0);
    for (i = 0; i < count; i++) {
        f2C[i] = arr[i];
    }
    m = func_001E8A44(0x14);
    if (m != 0) {
        s = ((S_00162610_Stream *)m)->func_00144640();
    } else {
        s = 0;
    }
    f24 = s;
    s->v1(p1, D_002AA46C);
    return this;
}

void C_00162720::func_00162720(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  *(undefined4 *)(in_ECX + 0x30) = 2;
  *(byte *)(in_ECX + 0x39) = *(byte *)(in_ECX + 0x39) | 1;
  return;
}

void *C_00162610::func_00162740(unsigned int flags)
{
    vtbl = (void *)&D_00287C24;
    if (f2C != 0) {
        func_001E891B(f2C);
    }
    if (f24 != 0) {
        f24->destroyObject(1);
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_00162790 *C_00162790::func_00162790(void)
{
    unk0 = 0;
    unk3C = 0;
    unk30 = 0;
    unk24 &= 0xfe;
    unk4 = 0;
    unk8 = 0;
    unkC = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    unk1C = 0;
    unk20 = 0;
    unk28 = 0;
    unk2C = 1;
    unk40 = 0;
    unk38 = 0;
    unk34 = 0;
    return this;
}

void C_00162790::func_001627E0(void)
{
    if (unk4 != 0) {
        delete[] unk4;
    }
    if (unk8 != 0) {
        delete[] unk8;
    }
    if (unkC != 0) {
        delete[] unkC;
    }
    if (unk10 != 0) {
        delete[] unk10;
    }
    if (unk18 != 0) {
        func_001E891B(unk18);
    }
    if (unk14 != 0) {
        func_001E891B(unk14);
    }
    if (unk0 != 0) {
        func_001E891B(unk0);
    }
}

int C_001628A0::func_001628A0(float t)
{
    if (t > f38) {
        return 1;
    }
    return 0;
}

void C_001628C0::func_001628C0(int count) {
    int i;
    int *mem;
    char *a;
    char *b;

    if (count == 0) {
        f14 = 0;
        return;
    }
    f14 = (void **)func_001E8A44(count * 4);
    if (f2c == 0) {
        mem = (int *)func_001E8A44(count * 0x18 + 4);
        if (mem != 0) {
            a = (char *)(mem + 1);
            *mem = count;
            func_00011FF0(a, 0x18, count, &D_0015B660);
        } else {
            a = 0;
        }
        f4 = a;
        for (i = 0; i < count; i++) {
            f14[i] = f4 + i * 0x18;
        }
    } else if (f2c == 1) {
        mem = (int *)func_001E8A44(count * 0x18 + 4);
        if (mem != 0) {
            b = (char *)(mem + 1);
            *mem = count;
            func_00011FF0(b, 0x18, count, &D_0015B7A0);
        } else {
            b = 0;
        }
        f8 = b;
        for (i = 0; i < count; i++) {
            f14[i] = f8 + i * 0x18;
        }
    }
}

void *LinearPositionController::func_001629A0(unsigned char flags)
{
    if (flags & 2) {
        int count = ((int *)this)[-1];
        char *base = (char *)this - 4;
        PositionElement *p = (PositionElement *)((char *)this + count * 0x18);
        if (--count >= 0) {
            int k = count + 1;
            do {
                p = (PositionElement *)((char *)p - 0x18);
                p->func_0015B680();
            } while (--k);
        }
        if (flags & 1)
            func_001E891B(base);
        return base;
    }
    ((PositionElement *)this)->func_0015B680();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void C_00162A80::func_00162A80(C_00162790 *item)
{
    int idx = 0;
    int i;

    for (i = 0; i < unk0; i++) {
        if (unk18[i] == item) {
            idx = i;
        }
    }
    item->unk40--;
    if (item->unk40 <= 0 && unk10 == 0) {
        item->func_001627E0();
        func_001E891B(item);
        unk18[idx] = 0;
        for (i = idx; i < unk0 - 1; i++) {
            unk18[i] = unk18[i + 1];
        }
        unk18 = (C_00162790 **)func_001E83E8(unk18, --unk0 * 4);
    }
}

C_00162790 *C_00162A80::func_00162B20(const char *name, int unused)
{
    int i;

    for (i = 0; i < unk0; i++) {
        if (func_001EA426(unk18[i]->unk0, name) == 0) {
            return unk18[i];
        }
    }
    return 0;
}

