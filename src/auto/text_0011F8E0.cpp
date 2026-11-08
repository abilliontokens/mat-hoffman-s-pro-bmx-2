/* 14 functions from 0x0011EDF0 to 0x0011FDF0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

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

static float fabs_0011EE50(float v)
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

extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

void func_0011EFA0(float *out, float *in);
float *func_0001C5E0(float *out, float t, float *dir);
float *func_000110E0(float *out, float *a, float *b);
float *func_00011110(float *out, float *a, float *b);
float func_00011170(float *v);
V4_0011F8E0 func_0001C5E0(float t, float *dir, float *org);
V4_0011F8E0 func_000110E0(const V4_0011F8E0 &a);
V4_0011F8E0 func_00011110(const V4_0011F8E0 &a, const V4_0011F8E0 &b);
float func_00011170(const V4_0011F8E0 &a);

static __forceinline void Cross_0011F8E0(float * volatile out, float * volatile a, float * volatile b)
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
    _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x));
    return r;
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

static __forceinline float ClampDist_0011F8E0(float *a, float *b, float t1, float t2,
                                              float *p1, float *p2, float *p3, float *p4)
{
    float v1[3], v2[3];
    v1[0] = t1 * p2[0];
    v1[1] = t1 * p2[1];
    v1[2] = t1 * p2[2];
    a[0] = v1[0] + p1[0];
    a[1] = v1[1] + p1[1];
    a[2] = v1[2] + p1[2];
    v1[0] = t2 * p4[0];
    v1[1] = t2 * p4[1];
    v1[2] = t2 * p4[2];
    b[0] = v1[0] + p3[0];
    b[1] = v1[1] + p3[1];
    b[2] = v1[2] + p3[2];
    float s = (a[1] - p3[1]) * p4[1] + (a[0] - p3[0]) * p4[0] + (a[2] - p3[2]) * p4[2];
    s = AsmMaxF(AsmMinF(s, 1.0f), 0.0f);
    v1[0] = s * p4[0];
    v1[1] = s * p4[1];
    v1[2] = s * p4[2];
    v2[0] = v1[0] + p3[0];
    v2[1] = v1[1] + p3[1];
    v2[2] = v1[2] + p3[2];
    v1[0] = v2[0] - a[0];
    v1[1] = v2[1] - a[1];
    float dz = v2[2] - a[2];
    float len1 = AsmSqrtF(dz * dz + v1[1] * v1[1] + v1[0] * v1[0]);
    float u = (b[0] - p1[0]) * p2[0] + (b[1] - p1[1]) * p2[1] + (b[2] - p1[2]) * p2[2];
    u = AsmMaxF(AsmMinF(u, 1.0f), 0.0f);
    v2[0] = u * p2[0];
    v2[1] = u * p2[1];
    v2[2] = u * p2[2];
    v1[0] = v2[0] + p1[0];
    v1[1] = v2[1] + p1[1];
    dz = v2[2] + p1[2];
    v1[0] -= b[0];
    v1[1] -= b[1];
    dz -= b[2];
    float len2 = AsmSqrtF(dz * dz + v1[1] * v1[1] + v1[0] * v1[0]);
    if (len1 > len2) {
        return len1;
    }
    return len2;
}

float func_0011F8E0(float *p1, float *p2, float *p3, float *p4)
{
    V4_0011F8E0 n;
    float t1, t2, num;

    AsmVec3Cross(&n.x, p2, p4);
    if (n.x * n.x + n.z * n.z + n.y * n.y != D_00275544) {
        float a[4], b[4], c[4], d[4], e[4];
        V4_0011F8E0 m;

        m.x = m.y = m.z = D_00275544;
        m.w = 1.0f;
        AsmVec3Cross(&m.x, p2, &n.x);
        func_0011EFA0(&m.x, &m.x);
        num = -(m.x * p3[0] + m.y * p3[1] + m.z * p3[2]);
        num += m.y * p1[1] + m.x * p1[0];
        num += m.z * p1[2];
        t1 = -(num / (m.x * p2[0] + m.y * p2[1] + m.z * p2[2]));
        AsmVec3Cross(&m.x, p4, &n.x);
        func_0011EFA0(&m.x, &m.x);
        num = -(m.y * p1[1] + m.x * p1[0] + m.z * p1[2]);
        num += m.x * p3[0] + m.y * p3[1];
        num += m.z * p3[2];
        t2 = -(num / (m.y * p4[1] + m.x * p4[0] + m.z * p4[2]));
        if (t1 >= D_00275544 && t1 <= D_00275460 && t2 >= D_00275544 && t2 <= D_00275460) {
            return func_00011170(func_00011110(e, func_000110E0(a, func_0001C5E0(b, t1, p2), p1),
                                               func_000110E0(c, func_0001C5E0(d, t2, p4), p3)));
        }
        return ClampDist_0011F8E0(a, b, t1, t2, p1, p2, p3, p4);
    }
    return D_00275544;
}
