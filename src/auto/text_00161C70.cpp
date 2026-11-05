/* 24 functions from 0x00161C70 to 0x00162B70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
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
extern float D_00275460;
extern float D_00275544;
extern float D_002755EC;
int func_00162020(float *a, float *b, int c);
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
void func_00162470(float *m, float a2, float a3, float a4, float a5, float a6, float a7, int a8);
void func_00162530(float *m, float a2, float a3, float a4, float a5, int a6);

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


float C_00161F80::func_00161F80(float param)
{
    float t;
    int n;
    float f;
    float a;
    float b;
    if (D_002A8314 != 0) {
        D_002A8314 = 0;
        func_00161D90();
    }
    t = param + D_00287B6C;
    n = (int)t;
    D_002ED708 = n;
    f = t - (float)D_002ED708;
    a = D_002ED710[D_002EEF28[D_002ED708 & 0xff]];
    b = D_002ED710[D_002EEF28[(D_002ED708 + 1) & 0xff]];
    return f * a + (D_002755EC - 2.0f * f) * f * f * ((f - 1.0f) * b - f * a);
}

int func_00162210(float *out, float *m)
{
    float det;
    float s;
    det = (m[10] * m[5] - m[9] * m[6]) * m[0] - (m[4] * m[10] - m[8] * m[6]) * m[1] + (m[9] * m[4] - m[8] * m[5]) * m[2];
    if (det == 0.0f) {
        return 0;
    }
    func_00162020(out, m, 1);
    s = D_00275460 / det;
    *(__m128 *)out = _mm_mul_ps(*(__m128 *)out, _mm_set1_ps(s));
    *(__m128 *)(out + 4) = _mm_mul_ps(*(__m128 *)(out + 4), _mm_set1_ps(s));
    *(__m128 *)(out + 8) = _mm_mul_ps(*(__m128 *)(out + 8), _mm_set1_ps(s));
    *(__m128 *)(out + 12) = _mm_mul_ps(*(__m128 *)(out + 12), _mm_set1_ps(s));
    return 1;
}

void func_001622C0(float *m, void *arg)
{
    float v[2];
    func_0014F6E0(arg, &v[0], &v[1]);
    m[0] = v[1];
    m[4] = v[0];
    m[5] = v[1];
    m[1] = -v[0];
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

void func_00162470(float *m, float a2, float a3, float a4, float a5, float a6, float a7, int a8)
{
    int ortho = a8;
    m[13] = 0.0f;
    m[9] = 0.0f;
    m[1] = 0.0f;
    m[12] = 0.0f;
    m[8] = 0.0f;
    m[4] = 0.0f;
    m[15] = 0.0f;
    m[7] = 0.0f;
    m[3] = 0.0f;
    m[14] = 1.0f;
    m[0] = (a6 + a6) / (a3 - a2);
    m[5] = (a6 + a6) / (a5 - a4);
    m[2] = (a2 + a3) / (a3 - a2);
    m[6] = (a4 + a5) / (a5 - a4);
    if (ortho != 0) {
        m[10] = a7 / (a7 - a6);
        m[11] = -(a6 * a7 / (a7 - a6));
    } else {
        float num;
        m[10] = (a6 + a7) / (a7 - a6);
        num = a6 * a7;
        m[11] = num * D_00287B80 / (a7 - a6);
    }
}

void func_00162530(float *m, float a2, float a3, float a4, float a5, int a6)
{
    float h;
    float v;
    float w;
    h = a2 * D_002755E8;
    v = func_0014F590(h) * a4;
    w = v / a3;
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

void C_00162720::func_00162720(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  *(undefined4 *)(in_ECX + 0x30) = 2;
  *(byte *)(in_ECX + 0x39) = *(byte *)(in_ECX + 0x39) | 1;
  return;
}

int C_001628A0::func_001628A0(float t)
{
    if (t > f38) {
        return 1;
    }
    return 0;
}

void *LinearPositionController::func_001629A0(unsigned char flags)
{
    if (flags & 2) {
        int count = ((int *)this)[-1];
        char *base = (char *)this - 4;
        PositionElement *p = (PositionElement *)((char *)this + count * 0x18);
        int n = count - 1;
        if (n >= 0) {
            int k = n + 1;
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

