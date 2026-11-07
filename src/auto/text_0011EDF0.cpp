/* 14 functions from 0x0011EDF0 to 0x0011FDF0, found by Ghidra. */
#include "common.h"
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
#include <math.h>
#pragma intrinsic(sqrt)
#pragma pack(push, 4)
#include <xmmintrin.h>
#include "asm_helpers.h"
#pragma pack(pop)

float func_0014F510(float x);
float func_0014F550(float x);
float func_0001E960(float x);

static __forceinline float Len2_0011F400(float x, float y, float z)
{
    float s = x * x;

    s += y * y;
    s += z * z;
    return s;
}
void func_0011F010(int a0, float x, float y, float z, float a4, float a5);
void func_0011F400(int a0, int a1, int a2, int a3, int a4, int a5);
void func_0011ACC0(void *out, void *a, void *b);

struct S_0011F4B0_V4 {
    float x, y, z, w;
};

void func_0011F4B0(float *out, S_0011F4B0_V4 *pos, float *m);

struct S_0011F5A0_V3 {
    int x, y, z;
};
extern float D_002B9348;
extern float D_002AB30C;
extern float D_00275460;

struct V4_0011EE50 {
    float x;
    float y;
    float z;
    float w;
};

static __forceinline float fabs_0011EE50(volatile float v)
{
    volatile int tmp;
    tmp = *(volatile int *)&v & 0x7fffffff;
    return *(float *)&tmp;
}

struct V3_0011EEE0 {
    float x;
    float y;
    float z;
};

static float min_0011EEE0(float a, float b)
{
    return a < b ? a : b;
}

struct C_0011EDF0 {
    float x;
    float y;
    float z;
    float w;
    C_0011EDF0 *func_0011EDF0(s16 *p);
};

extern float D_00275544;

struct V4_0011F8E0 {
    float x, y, z, w;
    V4_0011F8E0() { x = y = z = 0; w = 1.0f; }
};

void func_0011EFA0(float *out, float *in);
float *func_0001C5E0(float *out, float t, float *dir);
float *func_000110E0(float *out, float *a, float *b);
float *func_00011110(float *out, float *a, float *b);
float func_00011170(float *a);

static __forceinline void Cross_0011F8E0(float * volatile out, float *a, float *b)
{
    float *pa = a, *pb = b;
    __m128 va = _mm_loadu_ps(pa);
    __m128 vb = _mm_loadu_ps(pb);
    __m128 sa = va, sb = vb;
    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(out, va);
}

static __forceinline float Min_0011F8E0(float a, float b)
{
    float r;
    _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b)));
    return r;
}

static __forceinline float Max_0011F8E0(float a, float b)
{
    float r;
    _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b)));
    return r;
}

static __forceinline float Sqrt_0011F8E0(float x)
{
    float r;
    _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x)));
    return r;
}

C_0011EDF0 *C_0011EDF0::func_0011EDF0(s16 *p)
{
    x = (float)p[0] * D_002AB30C * D_002B9348;
    y = (float)p[1] * D_002AB30C * D_002B9348;
    z = (float)p[2] * D_002AB30C * D_002B9348;
    w = 1.0f;
    return this;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
V4_0011EE50 *func_0011EE50(V4_0011EE50 *out, V4_0011EE50 *in)
{
    volatile float v; volatile int tmp;
    int *p = (int *)in;
    v=*(float *)&p[0]; tmp=*(volatile int *)&v & 0x7fffffff; _ReadWriteBarrier(); p[0]=tmp;
    v=*(float *)&p[1]; tmp=*(volatile int *)&v & 0x7fffffff; _ReadWriteBarrier(); p[1]=tmp;
    v=*(float *)&p[2]; tmp=*(volatile int *)&v & 0x7fffffff; _ReadWriteBarrier(); p[2]=tmp;
    v=*(float *)&p[3]; tmp=*(volatile int *)&v & 0x7fffffff; _ReadWriteBarrier(); p[3]=tmp;
    *out=*in; return out;
}
V4_0011EE50 *func_0011EEE0(V4_0011EE50 *out, V4_0011EE50 *a, V4_0011EE50 *b)
{
    V4_0011EE50 t;
    t.w = 1.0f;
    t.x = AsmMinF(a->x, b->x);
    t.y = AsmMinF(a->y, b->y);
    t.z = AsmMinF(a->z, b->z);
    *out = t;
    return out;
}

void func_0011EFA0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void func_0011F010(int a0, float x, float y, float z, float s, float c)
{
    float *m = (float *)a0;
    float xs = s * x;
    float ys = s * y;
    float zs = s * z;
    float t = 1.0f - c;
    m[12] = 0.0f;
    m[13] = 0.0f;
    m[14] = 0.0f;
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[11] = 0.0f;
    m[15] = 1.0f;
    float xt = x * t;
    m[0] = x * xt + c;
    m[4] = y * xt + zs;
    m[8] = z * xt - ys;
    float yt = y * t;
    m[1] = x * yt - zs;
    m[5] = y * yt + c;
    m[9] = z * yt + xs;
    s = z * t;
    m[2] = *(volatile float *)&s * x + ys;
    m[6] = *(volatile float *)&s * y - xs;
    m[10] = *(volatile float *)&s * z + c;
}

static __forceinline C_0011EDF0 MakeV_0011F210(s16 *q)
{
    C_0011EDF0 t;
    t.x = (float)q[0] * D_002B9348;
    t.y = (float)q[1] * D_002B9348;
    t.z = (float)q[2] * D_002B9348;
    t.w = 1.0f;
    return t;
}

void func_0011F0E0(C_0011EDF0 *a, C_0011EDF0 *b, C_0011EDF0 *c, unsigned short *indices, void **data)
{
    if (data[2]) {
        s16 *p = (s16 *)data[0];
        C_0011EDF0 t;
        t.func_0011EDF0(p + indices[0] * 3); *a = t;
        t.func_0011EDF0(p + indices[1] * 3); *b = t;
        t.func_0011EDF0(p + indices[2] * 3); *c = t;
    } else {
        S_0011F5A0_V3 *p = (S_0011F5A0_V3 *)data[0];
        int i0 = indices[0]; ((int *)a)[0] = p[i0].x; ((int *)a)[1] = p[i0].y; ((int *)a)[2] = p[i0].z; a->w = 1.0f;
        int i1 = indices[1]; ((int *)b)[0] = p[i1].x; ((int *)b)[1] = p[i1].y; ((int *)b)[2] = p[i1].z; b->w = 1.0f;
        int i2 = indices[2]; ((int *)c)[0] = p[i2].x; ((int *)c)[1] = p[i2].y; ((int *)c)[2] = p[i2].z; c->w = 1.0f;
    }
}

extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int n);
void func_0011F210(C_0011EDF0 *a, C_0011EDF0 *b, C_0011EDF0 *c, unsigned short *indices, void **data)
{
    if (data[2]) {
        s16 *p = (s16 *)data[1];
        C_0011EDF0 t;
        s16 *q;
        q = p + indices[0] * 3;
        ((float *)&t)[0] = q[0] * D_002B9348; ((float *)&t)[1] = q[1] * D_002B9348; ((float *)&t)[2] = q[2] * D_002B9348; t.w = 1.0f;
        *a = t;
        q = p + indices[1] * 3;
        ((float *)&t)[0] = q[0] * D_002B9348; ((float *)&t)[1] = q[1] * D_002B9348; ((float *)&t)[2] = q[2] * D_002B9348; t.w = 1.0f;
        *b = t;
        q = p + indices[2] * 3;
        ((float *)&t)[0] = q[0] * D_002B9348; ((float *)&t)[1] = q[1] * D_002B9348; ((float *)&t)[2] = q[2] * D_002B9348; t.w = 1.0f;
        *c = t;
    } else {
        S_0011F5A0_V3 *p = (S_0011F5A0_V3 *)data[1];
        int i0 = indices[0]; ((int *)a)[0] = p[i0].x; ((int *)a)[1] = p[i0].y; ((int *)a)[2] = p[i0].z; a->w = 1.0f;
        int i1 = indices[1]; ((int *)b)[0] = p[i1].x; ((int *)b)[1] = p[i1].y; ((int *)b)[2] = p[i1].z; b->w = 1.0f;
        int i2 = indices[2]; ((int *)c)[0] = p[i2].x; ((int *)c)[1] = p[i2].y; ((int *)c)[2] = p[i2].z; c->w = 1.0f;
    }
}

void func_0011F400(int a0, int a1, int a2, int a3, int a4, int a5)
{
    float z = *(float *)&a3;
    float y = *(float *)&a2;
    float x = *(float *)&a1;
    float r = func_0001E960(x * x + y * y + z * z);

    func_0011F010(a0, x * r, y * r, z * r, *(float *)&a5, *(float *)&a4);
}

void func_0011F460(int a0, int a1, int a2, int a3, float angle)
{
    float s = func_0014F510(angle);
    float c = func_0014F550(angle);
    func_0011F400(a0, a1, a2, a3, *(int *)&s, *(int *)&c);
}

void func_0011F4B0(float *out, S_0011F4B0_V4 *pos, float *m)
{
    S_0011F4B0_V4 v = *pos;
    float x = v.x - m[3];
    float y = v.y - m[7];
    float z = v.z - m[11];

    out[0] = x * m[0] + y * m[4] + z * m[8];
    out[1] = x * m[1] + y * m[5] + z * m[9];
    out[2] = x * m[2] + y * m[6] + z * m[10];
}

void func_0011F540(S_0011F4B0_V4 *out, S_0011F4B0_V4 pos, float *m)
{
    S_0011F4B0_V4 r;

    r.z = 0.0f;
    r.y = 0.0f;
    r.x = 0.0f;
    r.w = 1.0f;
    func_0011F4B0(&r.x, &pos, m);
    *out = r;
}

void func_0011F5A0(void *m, int a, int b, int c, int d, int e)
{
    volatile int saved[7];
    __declspec(align(16)) float tmp[16];
    int *mi = (int *)m;

    saved[3] = mi[3];
    saved[4] = mi[7];
    saved[5] = mi[11];
    func_0011F400((int)tmp, a, b, c, d, e);
    func_0011ACC0(m, tmp, m);
    mi[3] = saved[3];
    mi[7] = saved[4];
    mi[11] = saved[5];
}

void func_0011F610(S_0011F4B0_V4 *pts, int n, S_0011F4B0_V4 *mn, S_0011F4B0_V4 *mx)
{
    int i;

    *mx = pts[0];
    *mn = pts[0];
    for (i = 1; i < n; i++) {
        if (pts[i].x > mx->x) {
            mx->x = pts[i].x;
        } else if (pts[i].x < mn->x) {
            mn->x = pts[i].x;
        }
        if (pts[i].y > mx->y) {
            mx->y = pts[i].y;
        } else if (pts[i].y < mn->y) {
            mn->y = pts[i].y;
        }
        if (pts[i].z > mx->z) {
            mx->z = pts[i].z;
        } else if (pts[i].z < mn->z) {
            mn->z = pts[i].z;
        }
    }
}

