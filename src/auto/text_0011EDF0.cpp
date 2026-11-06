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

C_0011EDF0 *C_0011EDF0::func_0011EDF0(s16 *p)
{
    x = (float)p[0] * D_002AB30C * D_002B9348;
    y = (float)p[1] * D_002AB30C * D_002B9348;
    z = (float)p[2] * D_002AB30C * D_002B9348;
    w = 1.0f;
    return this;
}

V4_0011EE50 *func_0011EE50(V4_0011EE50 *out, V4_0011EE50 *in)
{
    in->x = fabs_0011EE50(in->x);
    in->y = fabs_0011EE50(in->y);
    in->z = fabs_0011EE50(in->z);
    in->w = fabs_0011EE50(in->w);
    *out = *in;
    return out;
}

V4_0011EE50 *func_0011EEE0(V4_0011EE50 *out, V4_0011EE50 *a, V4_0011EE50 *b)
{
    V4_0011EE50 t;
    _mm_store_ss(&t.x, _mm_min_ss(_mm_set_ss(a->x), _mm_set_ss(b->x)));
    _mm_store_ss(&t.y, _mm_min_ss(_mm_set_ss(a->y), _mm_set_ss(b->y)));
    _mm_store_ss(&t.z, _mm_min_ss(_mm_set_ss(a->z), _mm_set_ss(b->z)));
    t.w = 1.0f;
    *out = t;
    return out;
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

void func_0011F400(int a0, int a1, int a2, int a3, int a4, int a5)
{
    float x = *(float *)&a1;
    float y = *(float *)&a2;
    float z = *(float *)&a3;
    float xx = x * x;
    float yy = y * y;
    float zz = z * z;
    float r = func_0001E960(xx + yy + zz);

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

