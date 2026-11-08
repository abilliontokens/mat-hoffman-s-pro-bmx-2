/* 18 functions from 0x00197B90 to 0x00198B70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"
static __forceinline float Sqrt_00197B90(float x) { __m128 r = _mm_sqrt_ss(_mm_load_ss(&x)); return r.m128_f32[0]; }
extern float D_00275460;
extern float D_00278C48;
struct C_00197B90 {
    char pad0[0xB0];
    float m[12];
    void func_00197B90(float *out);
};
void *func_001E8A44(int size);
int func_001EA426(void *a, void *b);
struct C_001982F0 {
    void func_001982F0(void);
};

struct C_000264C0 {
    void func_000264C0(void *src);
};

struct C_00197EA0 {
    char padB0[0xB0];
    void func_00197EA0(void *dst);
};

struct C_00197EC0_Vec4 {
    float x;
    float y;
    float z;
    float w;
};

struct __declspec(align(16)) M_00198040 { __m128 m[4]; };

static __forceinline void Copy_00198120(M_00198040 *dst, const M_00198040 *src)
{
    *dst = *src;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

static __forceinline void Copy4_00198040(__m128 * volatile src, __m128 * volatile dst)
{
    __m128 *s = src;
    __m128 *d = dst;
    _ReadWriteBarrier();
    __m128 a0 = s[0], a1 = s[1], a2 = s[2], a3 = s[3];
    _ReadWriteBarrier();
    d[0] = a0; d[1] = a1; d[2] = a2; d[3] = a3;
}

static __forceinline void Xform_00198120(C_00197EC0_Vec4 *out, const M_00198040 *mat, const float *v)
{
    __m128 t = _mm_loadu_ps(v);
    _mm_storeh_pi((__m64 *)&out->z, t);
    out->w = 1.0f;
    t = _mm_loadh_pi(t, (__m64 *)&out->z);
    __m128 r0 = _mm_mul_ps(mat->m[0], t);
    __m128 r1 = _mm_mul_ps(mat->m[1], t);
    __m128 r2 = _mm_mul_ps(mat->m[2], t);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 junk;
    junk = _mm_movehl_ps(junk, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, junk);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&out->x, lo);
    out->w = 1.0f;
}

struct C_00197EC0 {
    char padF0[0xF0];
    float fF0;
    float fF4;
    float fF8;
    char padFC[4];
    float f100;
    float f104;
    float f108;
    char pad10C[4];
    float f110;
    float f114;
    float f118;
    char pad11C[0x14];
    float f130[4];
    float f140[4];
    char pad150[0x24];
    C_00197EC0 *f174;
    C_00197EC0 *f178;
    char pad17C[4];
    u8 f180;
    char pad181[3];
    float f184;
    void func_00198440(float *pos, float *maxDist, int recurse);
    void func_001985D0(int *flag, C_00197EC0_Vec4 *mn, C_00197EC0_Vec4 *mx, float *m, int n);
    void func_00197AA0(void);
    C_00197EC0_Vec4 func_00197EC0(float *v);
    C_00197EC0_Vec4 func_00197F70(float *v);
    C_00197EC0_Vec4 func_00198040(C_00197EC0_Vec4 *v);
    C_00197EC0_Vec4 *func_00198040(C_00197EC0_Vec4 *out, C_00197EC0_Vec4 *v);
    C_00197EC0_Vec4 func_00198120(float *v);
};

void func_0011AC30(void *out, void *in);
void func_0011F540(C_00197EC0_Vec4 *out, C_00197EC0_Vec4 pos, float *m);
void func_00030A30(C_00197EC0_Vec4 *out, C_00197EC0_Vec4 v, float *m);

extern float D_00275544;

static float fabs_00198440(float x)
{
    volatile int tmp;
    tmp = *(int *)&x & 0x7fffffff;
    return *(float *)&tmp;
}

static __forceinline float max_00198440(float a, float b)
{
    return b > a ? b : a;
}

/* SceneNode: children list at 0x174 (siblings) and 0x178 (first child chain) */
struct C_00198230 {
    char pad0[0x174];
    C_00198230 *f174;
    C_00198230 *f178;
    C_00198230 *f17C;
    void func_00198230(C_00198230 *child);
    int func_00198270(void);
};

struct C_00197E70 {
    void func_00197E70(undefined4 *param_1);
};

struct C_001983A0 {
    void func_001983A0(void);
};

struct C_00198390 {
    void func_00198390(void);
};

struct C_00197820 {
    void *func_00197820(int a);
};

struct C_001983B0 {
    void func_001983B0(void **out);
};

struct C_001982A0 {
    char pad0[0x174];
    C_001982A0 *f174;
    C_001982A0 *f178;
    void func_001982A0(int *count, C_001982A0 **array);
};

struct C_00198330 {
    char pad0[0x174];
    C_00198330 *f174;
    C_00198330 *f178;
    C_00198330 *func_00198330(void *arg);
};

struct C_001983E0_V4 {
    int x;
    int y;
    int z;
    int w;
};

struct C_001983E0 {
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
    char pad4[0x12C];
    C_001983E0_V4 f130;
    C_001983E0_V4 f140;
    char pad150[0x30];
    u8 f180;
    void func_001983E0(void *out0, void *out1);
};


void C_00197B90::func_00197B90(float *out)
{
    float a = (m[0] + m[5] + m[10] + 1.0f) * 0.25f;
    float b = (m[0] + 1.0f - m[5] - m[10]) * 0.25f;
    float c = (1.0f - m[0] + m[5] - m[10]) * 0.25f;
    float d = (1.0f - m[0] - m[5] + m[10]) * 0.25f;
    if (a > b && a > c && a > d) {
        out[0] = AsmSqrtF(a);
        float inv = 0.25f / out[0];
        out[1] = (m[9] - m[6]) * inv;
        out[2] = (m[2] - m[8]) * inv;
        out[3] = (m[4] - m[1]) * inv;
    } else if (b > c && b > d) {
        out[1] = AsmSqrtF(b);
        float inv = 0.25f / out[1];
        out[0] = (m[9] - m[6]) * inv;
        out[2] = (m[4] + m[1]) * inv;
        out[3] = (m[8] + m[2]) * inv;
    } else if (c > d) {
        out[2] = AsmSqrtF(c);
        float inv = 0.25f / out[2];
        out[0] = (m[2] - m[8]) * inv;
        out[1] = (m[4] + m[1]) * inv;
        out[3] = (m[9] + m[6]) * inv;
    } else {
        out[3] = AsmSqrtF(d);
        float inv = 0.25f / out[3];
        out[0] = (m[4] - m[1]) * inv;
        out[1] = (m[8] + m[2]) * inv;
        out[2] = (m[9] + m[6]) * inv;
    }
}

void C_00197E70::func_00197E70(undefined4 *param_1)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xbc);
  param_1[1] = *(undefined4 *)(in_ECX + 0xcc);
  param_1[2] = *(undefined4 *)(in_ECX + 0xdc);
  return;
}

void C_00197EA0::func_00197EA0(void *dst)
{
    ((C_000264C0 *)dst)->func_000264C0((char *)this + 0xB0);
}

C_00197EC0_Vec4 C_00197EC0::func_00197EC0(float *v)
{
    C_00197EC0_Vec4 r;
    float *m = &fF0;

    r.w = 1.0f;
    func_00197AA0();
    r.x = m[1] * v[1] + m[2] * v[2] + m[0] * v[0];
    r.y = m[5] * v[1] + m[4] * v[0] + m[6] * v[2];
    r.z = m[9] * v[1] + m[8] * v[0] + m[10] * v[2];
    return r;
}

C_00197EC0_Vec4 C_00197EC0::func_00197F70(float *vin)
{
    C_00197EC0_Vec4 q;

    q.z = 0;
    q.y = 0;
    q.x = 0;
    q.w = 1.0f;
    func_00197AA0();
    AsmTransformPoint(&q.x, vin, &fF0);
    return q;
}

void func_0001C680(C_00197EC0_Vec4 *out, C_00197EC0_Vec4 v, float *m);
C_00197EC0_Vec4 C_00197EC0::func_00198040(C_00197EC0_Vec4 *v)
{
    C_00197EC0_Vec4 q;
    M_00198040 m;
    q.z = 0; q.y = 0; q.x = 0; q.w = 1.0f;
    func_00197AA0();
    AsmCopyMatrix(&m, &fF0);
    func_0011AC30(&m, &m);
    func_0001C680(&q, *v, (float *)&m);
    return q;
}

C_00197EC0_Vec4 C_00197EC0::func_00198120(float *v)
{
    struct Slots { C_00197EC0 *self; void *dst; void *src; };
    volatile Slots L;
    C_00197EC0_Vec4 q;
    M_00198040 m;
    L.self = this;
    q.z = 0; q.y = 0; q.x = 0; q.w = 1.0f;
    func_00197AA0();
    L.src = (void *)&L.self->fF0;
    L.dst = (void *)&m;
    {
        __m128 *s = (__m128 *)L.src;
        __m128 *d = (__m128 *)L.dst;
        _ReadWriteBarrier();
        __m128 a0 = s[0], a1 = s[1], a2 = s[2], a3 = s[3];
        _ReadWriteBarrier();
        d[0] = a0; d[1] = a1; d[2] = a2; d[3] = a3;
        _ReadWriteBarrier();
    }
    func_0011AC30(&m, &m);
    _ReadWriteBarrier();
    L.dst = (void *)&m;
    L.src = (void *)&q;
    {
        float *pv = v;
        M_00198040 *mm = (M_00198040 *)L.dst;
        C_00197EC0_Vec4 *oo = (C_00197EC0_Vec4 *)L.src;
        __m128 t = _mm_loadu_ps(pv);
        _mm_storeh_pi((__m64 *)&oo->z, t);
        oo->w = 1.0f;
        t = _mm_loadh_pi(t, (__m64 *)&oo->z);
        __m128 r0 = _mm_mul_ps(mm->m[0], t);
        __m128 r1 = _mm_mul_ps(mm->m[1], t);
        __m128 r2 = _mm_mul_ps(mm->m[2], t);
        __m128 lo = _mm_unpacklo_ps(r0, r1);
        __m128 hi = _mm_unpackhi_ps(r0, r1);
        __m128 junk;
        junk = _mm_movehl_ps(junk, r2);
        lo = _mm_add_ps(lo, hi);
        r2 = _mm_add_ps(r2, junk);
        hi = _mm_movehl_ps(hi, lo);
        lo = _mm_movelh_ps(lo, r2);
        hi = _mm_shuffle_ps(hi, r2, 0x14);
        lo = _mm_add_ps(lo, hi);
        _mm_storeu_ps(&oo->x, lo);
        oo->w = 1.0f;
    }
    return q;
}

void C_00198230::func_00198230(C_00198230 *child)
{
    C_00198230 *node = this;
    C_00198230 *next = node->f178;
    C_00198230 **pp = &node->f178;

    while (next != 0) {
        node = *pp;
        next = node->f178;
        pp = &node->f178;
    }
    node->f178 = child;
    child->f17C = node;
}

int C_00198230::func_00198270(void)
{
    int n = 0;

    if (f178 != 0) {
        n = f178->func_00198270();
    }
    if (f174 != 0) {
        n += f174->func_00198270();
    }
    return n + 1;
}

void C_001982A0::func_001982A0(int *count, C_001982A0 **array)
{
    C_001982A0 *p = f174;
    while (p != 0) {
        array[*count] = p;
        p = p->f178;
        (*count)++;
    }
    for (p = f174; p != 0; p = p->f178) {
        p->func_001982A0(count, array);
    }
}

void C_001982F0::func_001982F0(void)
{
  int in_ECX = (int)this;
  int iVar1;
  int *piVar2;
  
  *(byte *)(in_ECX + 0x180) = *(byte *)(in_ECX + 0x180) | 0x80;
  piVar2 = (int *)(in_ECX + 0x170);
  for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x170)) {
    iVar1 = *piVar2;
    *(byte *)(iVar1 + 0x180) = *(byte *)(iVar1 + 0x180) | 0x80;
    piVar2 = (int *)(iVar1 + 0x170);
  }
  return;
}

void *func_001E8A44(int size);
int func_001EA426(void *a, void *b);
C_00198330 *C_00198330::func_00198330(void *arg)
{
    C_00198330 *result = 0;
    if (func_001EA426((char *)this + 0x28, arg) == 0) {
        return this;
    }
    if (f178 != 0) {
        result = f178->func_00198330(arg);
        if (result != 0) {
            return result;
        }
    }
    if (f174 != 0) {
        result = f174->func_00198330(arg);
    }
    return result;
}

void C_00198390::func_00198390(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0x27) = *(byte *)(in_ECX + 0x27) | 4;
  return;
}

void C_001983A0::func_001983A0(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0x27) = *(byte *)(in_ECX + 0x27) & 0xfb;
  return;
}

void C_001983B0::func_001983B0(void **out)
{
    C_00197820 *p = (C_00197820 *)func_001E8A44(0x1a0);
    *out = p ? p->func_00197820(1) : 0;
}

void C_001983E0::func_001983E0(void *out0, void *out1)
{
    if ((f180 & 0x20) == 0) {
        v30();
    }
    *(C_001983E0_V4 *)out0 = f130;
    *(C_001983E0_V4 *)out1 = f140;
}

void C_00197EC0::func_00198440(float * volatile pos, float * volatile maxDist, int recurse)
{
 C_00197EC0_Vec4 v;
 C_00197EC0 * volatile self=this;
 if (f180 & 4) {
  if (*maxDist > D_00275544) {
   v = func_00197F70(f130);
   float x = fabs_00198440(v.x-pos[0]);
   float m = x;
   float e = fabs_00198440(v.y-pos[1]);
   if (e > m) m=e;
   float f = fabs_00198440(v.z-pos[2]);
   if (f > m) m=f;
   float r=m+self->f184;
   if(r>*maxDist) *maxDist=r;
  } else {
   *maxDist=f184;
   *(C_00197EC0_Vec4*)pos=func_00197F70(f130);
  }
 }
 if(recurse) for(C_00197EC0 *c=self->f174;c;c=c->f178) c->func_00198440(pos,maxDist,1);
}

void C_00197EC0::func_001985D0(int *flag, C_00197EC0_Vec4 *mn, C_00197EC0_Vec4 *mx, float *m, int n)
{
    C_00197EC0 * volatile self = this;
    if (self->f180 & 4) {
        C_00197EC0_Vec4 p;
        C_00197EC0_Vec4 center;
        C_00197EC0_Vec4 ax, ay, az;
        ax.x = self->f140[0]; ax.y = 0.0f; ax.z = 0.0f; ax.w = 1.0f;
        ay.x = 0.0f; ay.y = self->f140[1]; ay.z = 0.0f; ay.w = 1.0f;
        az.x = 0.0f; az.y = 0.0f; az.z = self->f140[2]; az.w = 1.0f;
        center = self->func_00197F70(self->f130);
        ax = self->func_00197EC0((float *)&ax);
        ay = self->func_00197EC0((float *)&ay);
        az = self->func_00197EC0((float *)&az);
        func_0011F540(&p, center, m);
        func_00030A30(&ax, ax, m);
        func_00030A30(&ay, ay, m);
        func_00030A30(&az, az, m);
        center.x = fabs_00198440(ax.x) + fabs_00198440(ay.x) + fabs_00198440(az.x);
        center.y = fabs_00198440(ax.y) + fabs_00198440(ay.y) + fabs_00198440(az.y);
        center.z = fabs_00198440(ax.z) + fabs_00198440(ay.z) + fabs_00198440(az.z);
        if (*flag == 0) {
            mn->x = p.x - center.x; mn->y = p.y - center.y; mn->z = p.z - center.z; mn->w = 1.0f;
            mx->x = p.x + center.x; mx->y = p.y + center.y; mx->z = p.z + center.z; mx->w = 1.0f;
            *flag = 1;
        } else {
            float lo, hi;
            lo = p.x - center.x; mn->x = AsmMinF(mn->x, lo);
            lo = p.y - center.y; mn->y = AsmMinF(mn->y, lo);
            lo = p.z - center.z; mn->z = AsmMinF(mn->z, lo);
            hi = p.x + center.x; mx->x = AsmMaxF(mx->x, hi);
            hi = p.y + center.y; mx->y = AsmMaxF(mx->y, hi);
            hi = p.z + center.z; mx->z = AsmMaxF(mx->z, hi);
        }
    }
    if (n) {
        C_00197EC0 *child = self->f174;
        while (child) {
            child->func_001985D0(flag, mn, mx, m, 1);
            child = child->f178;
        }
    }
}

