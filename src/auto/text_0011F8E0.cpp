/* 14 functions from 0x0011EDF0 to 0x0011FDF0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

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

void func_0011EFA0(float *out, float *in);
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

float func_0011F8E0(float *p1, float *p2, float *p3, float *p4)
{
    V4_0011F8E0 n;
    float result = D_00275544;

    Cross_0011F8E0(&n.x, p2, p4);
    if (n.y * n.y + n.z * n.z + n.x * n.x != result) {
        V4_0011F8E0 m;
        float t1, t2;

        Cross_0011F8E0(&m.x, p2, &n.x);
        func_0011EFA0(&m.x, &m.x);
        t1 = -((-(m.x * p3[0] + m.y * p3[1] + m.z * p3[2]) + (m.y * p1[1] + m.x * p1[0]) + m.z * p1[2]) /
               (m.x * p2[0] + m.y * p2[1] + m.z * p2[2]));
        Cross_0011F8E0(&m.x, p4, &n.x);
        func_0011EFA0(&m.x, &m.x);
        t2 = -((-(m.y * p1[1] + m.x * p1[0] + m.z * p1[2]) + (m.x * p3[0] + m.y * p3[1]) + m.z * p3[2]) /
               (m.y * p4[1] + m.x * p4[0] + m.z * p4[2]));
        if (t1 >= D_00275544 && t1 <= D_00275460 && t2 >= D_00275544 && t2 <= D_00275460) {
            return func_00011170(func_00011110(func_000110E0(func_0001C5E0(t1, p2, p1)),
                                               func_000110E0(func_0001C5E0(t2, p4, p3))));
        } else {
            float ax = t1 * p2[0] + p1[0];
            float ay = t1 * p2[1] + p1[1];
            float az = t1 * p2[2] + p1[2];
            float bx = t2 * p4[0] + p3[0];
            float by = t2 * p4[1] + p3[1];
            float bz = t2 * p4[2] + p3[2];
            float s = (ay - p3[1]) * p4[1] + (ax - p3[0]) * p4[0] + (az - p3[2]) * p4[2];
            float dx, dy, dz, len1, len2, u;

            s = Max_0011F8E0(Min_0011F8E0(s, 1.0f), 0.0f);
            dx = (s * p4[0] + p3[0]) - ax;
            dy = (s * p4[1] + p3[1]) - ay;
            dz = (s * p4[2] + p3[2]) - az;
            len1 = Sqrt_0011F8E0(dz * dz + dy * dy + dx * dx);
            u = (bx - p1[0]) * p2[0] + (by - p1[1]) * p2[1] + (bz - p1[2]) * p2[2];
            u = Max_0011F8E0(Min_0011F8E0(u, 1.0f), 0.0f);
            dx = (u * p2[0] + p1[0]) - bx;
            dy = (u * p2[1] + p1[1]) - by;
            dz = (u * p2[2] + p1[2]) - bz;
            len2 = Sqrt_0011F8E0(dz * dz + dy * dy + dx * dx);
            if (len1 > len2) {
                return len1;
            }
            return len2;
        }
    }
    return result;
}
