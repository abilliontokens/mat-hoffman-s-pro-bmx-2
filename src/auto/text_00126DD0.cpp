/* 4 functions from 0x00126DD0 to 0x00127DD0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
extern float D_002755E8;

struct S_00126DD0_Vec { float x, y, z, w; S_00126DD0_Vec() { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; } };
struct S_00126DD0_Mat { float m[4][4]; };
struct S_00126DD0_Tri { int idx[3]; float f[10]; };
struct S_00126DD0_V4 { float x, y, z, w; };
extern float D_00275544;
extern float D_0027954C;
extern float D_00276DD4;
void *func_001E8AA5(unsigned int size);
void func_00126770(S_00126DD0_Tri *tris, S_00126DD0_Tri *a, S_00126DD0_Tri *b, int count, int *na, int *nb, float split, int axis);
void func_00126DD0(S_00126DD0_Tri *tris, int count, float *matrix, S_00126DD0_V4 *center, S_00126DD0_Vec *extent, float *volume, float *radius, float *out);

static inline void Xform_00126DD0(S_00126DD0_Vec *out, const S_00126DD0_Mat *mat, const float *v)
{
    __m128 t = _mm_loadu_ps(v);
    _mm_storeh_pi((__m64 *)&out->z, t);
    out->w = 1.0f;
    t = _mm_loadh_pi(t, (__m64 *)&out->z);
    __m128 r0 = _mm_mul_ps(_mm_load_ps(mat->m[0]), t);
    __m128 r1 = _mm_mul_ps(_mm_load_ps(mat->m[1]), t);
    __m128 r2 = _mm_mul_ps(_mm_load_ps(mat->m[2]), t);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 junk = _mm_movehl_ps(r2, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, junk);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&out->x, lo);
    out->w = 1.0f;
}

static inline float Sqrt_00126DD0(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x)); return r; }
static inline float Max_00126DD0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(*(__m128 *)&a, *(__m128 *)&b)); return r; }
static __forceinline float Abs_00126DD0(float f) { int i = *(int *)&f & 0x7fffffff; return *(float *)&i; }

void func_00126A80(float *verts, int count, float *center, float *extent, float *volume, float *radius, float *matrix);

void func_00126DD0(S_00126DD0_Tri *tris, int count, S_00126DD0_Vec *verts, S_00126DD0_Vec *center, S_00126DD0_Vec *extent, float *volume, float *radius, S_00126DD0_Mat *matrix)
{
    S_00126DD0_Vec mx = verts[tris->idx[0]];
    S_00126DD0_Vec mn = verts[tris->idx[0]];
    int i, j;
    for (i = 0; i < count; i++) {
        for (j = 0; j < 3; j++) {
            S_00126DD0_Vec v;
            v = verts[tris[i].idx[j]];
            if (matrix) {
                Xform_00126DD0(&v, matrix, &v.x);
            }
            if (v.x > mx.x) mx.x = v.x;
            if (v.y > mx.y) mx.y = v.y;
            if (v.z > mx.z) mx.z = v.z;
            if (v.x < mn.x) mn.x = v.x;
            if (v.y < mn.y) mn.y = v.y;
            if (v.z < mn.z) mn.z = v.z;
        }
    }
    center->x = (mn.x + mx.x) * D_002755E8;
    center->y = (mn.y + mx.y) * D_002755E8;
    center->z = (mn.z + mx.z) * D_002755E8;
    center->w = 1.0f;
    extent->x = (mx.x - mn.x) * D_002755E8;
    extent->y = (mx.y - mn.y) * D_002755E8;
    extent->z = (mx.z - mn.z) * D_002755E8;
    extent->w = 1.0f;
    *radius = Sqrt_00126DD0(extent->x * extent->x + extent->y * extent->y + extent->z * extent->z);
    float ex = Max_00126DD0(Abs_00126DD0(extent->x + extent->x), 0.01f);
    float ey = Max_00126DD0(Abs_00126DD0(extent->y + extent->y), 0.01f);
    float ez = Max_00126DD0(Abs_00126DD0(extent->z + extent->z), 0.01f);
    *volume = ez * ey * ex;
}

float func_00127190(float *verts, int count)
{
    float center[4];
    float extent[4];
    float volume;
    float radius;
    extent[2] = 0.0f;
    extent[1] = 0.0f;
    extent[0] = 0.0f;
    extent[3] = 1.0f;
    func_00126A80(verts, count, center, extent, &volume, &radius, 0);
    return volume;
}

void func_001271E0(float *verts, int count, void *ctx, float *out, unsigned int *outAxis)
{
    extern float D_00275544;
    extern float D_0027954C;
    extern float D_00276DD4;
    void *func_001E8AA5(int size);
    void func_001E8390(void *p);
    int func_00126770(float *src, float *outA, float *outB, int count, int *cntA, int *cntB, float thr, int mode);
    void func_00126DD0(float *entries, int count, void *ctx, float *a, float *b, float *split, float *length, int zero);
    float mxv[4];
    float mnv[4];
    float t0, t1, t2, t3;
    float dx, dy, dz;
    float best;
    float splitVal;
    float lenVal;
    float bestSplit;
    unsigned int axis;
    int cntA, cntB;
    float *allocA;
    float *allocB;
    int i;
    int j;
    float *p;
    *(S_00126DD0_Vec *)mxv = *(S_00126DD0_Vec *)(verts + 7);
    *(S_00126DD0_Vec *)mnv = *(S_00126DD0_Vec *)(verts + 7);
    i = 0;
    if (count > 3) {
        int k = 3;
        p = verts + 20;
        do {
            t0 = p[-13]; t1 = p[-12]; t2 = p[-11];
            if (t0 > mxv[0]) mxv[0] = t0;
            if (t1 > mxv[1]) mxv[1] = t1;
            if (t2 > mxv[2]) mxv[2] = t2;
            if (t0 < mnv[0]) mnv[0] = t0;
            if (t1 < mnv[1]) mnv[1] = t1;
            if (t2 < mnv[2]) mnv[2] = t2;
            t0 = p[0]; t1 = p[1]; t2 = p[2];
            if (t0 > mxv[0]) mxv[0] = t0;
            if (t1 > mxv[1]) mxv[1] = t1;
            if (t2 > mxv[2]) mxv[2] = t2;
            if (t0 < mnv[0]) mnv[0] = t0;
            if (t1 < mnv[1]) mnv[1] = t1;
            if (t2 < mnv[2]) mnv[2] = t2;
            t0 = p[13]; t1 = p[14]; t2 = p[15];
            if (t0 > mxv[0]) mxv[0] = t0;
            if (t1 > mxv[1]) mxv[1] = t1;
            if (t2 > mxv[2]) mxv[2] = t2;
            if (t0 < mnv[0]) mnv[0] = t0;
            if (t1 < mnv[1]) mnv[1] = t1;
            if (t2 < mnv[2]) mnv[2] = t2;
            t0 = p[26]; t1 = p[27]; t2 = p[28]; t3 = p[29];
            if (t0 > mxv[0]) mxv[0] = t0;
            if (t1 > mxv[1]) mxv[1] = t1;
            if (t2 > mxv[2]) mxv[2] = t2;
            if (t0 < mnv[0]) mnv[0] = t0;
            if (t1 < mnv[1]) mnv[1] = t1;
            if (t2 < mnv[2]) mnv[2] = t2;
            k += 4;
            i += 4;
            p += 52;
        } while (k < count);
    }
    if (i < count) {
        p = verts + i * 13 + 7;
        j = count - i;
        do {
            t0 = p[0]; t1 = p[1]; t2 = p[2]; t3 = p[3];
            if (t0 > mxv[0]) mxv[0] = t0;
            if (t1 > mxv[1]) mxv[1] = t1;
            if (t2 > mxv[2]) mxv[2] = t2;
            if (t0 < mnv[0]) mnv[0] = t0;
            if (t1 < mnv[1]) mnv[1] = t1;
            if (t2 < mnv[2]) mnv[2] = t2;
            p += 13;
            j--;
        } while (j != 0);
    }
    dx = mxv[0] - mnv[0];
    best = 0.0f;
    if (dx > best) best = dx;
    dy = mxv[1] - mnv[1];
    axis = 0;
    if (dy > best) { best = dy; axis = 1; }
    dz = mxv[2] - mnv[2];
    if (dz > best) axis = 2;
    allocA = (float *)func_001E8AA5(count * 0x34);
    allocB = (float *)func_001E8AA5(count * 0x34);
    switch (axis) {
    case 0: *out = dx * D_0027954C * D_00276DD4 + mnv[0]; break;
    case 1: *out = dy * D_0027954C * D_00276DD4 + mnv[1]; break;
    case 2: *out = dz * D_0027954C * D_00276DD4 + mnv[2]; break;
    }
    func_00126770(verts, allocA, allocB, count, &cntA, &cntB, *out, axis);
    {
        S_00126DD0_Vec a;
        S_00126DD0_Vec b;
        func_00126DD0(allocA, cntA, ctx, (float *)&a, (float *)&b, &splitVal, &lenVal, 0);
    }
    {
        S_00126DD0_Vec a;
        S_00126DD0_Vec b;
        func_00126DD0(allocB, cntB, ctx, (float *)&a, (float *)&b, &bestSplit, &lenVal, 0);
    }
    bestSplit += splitVal;
    splitVal = 0.0f;
    {
        int step;
        unsigned int mode;
        for (step = 0; step < 0x12; step++) {
            for (mode = 0; mode < 3; mode++) {
                int next = step + 1;
                switch (mode) {
                case 0: *out = dx * D_0027954C * (float)next + mnv[0]; break;
                case 1: *out = dy * D_0027954C * (float)next + mnv[1]; break;
                case 2: *out = dz * D_0027954C * (float)next + mnv[2]; break;
                }
                func_00126770(verts, allocA, allocB, count, &cntA, &cntB, *out, mode);
                {
                    S_00126DD0_Vec a;
                    S_00126DD0_Vec b;
                    float len2;
                    func_00126DD0(allocA, cntA, ctx, (float *)&a, (float *)&b, &lenVal, (float *)&next, 0);
                    func_00126DD0(allocB, cntB, ctx, (float *)&a, (float *)&b, &len2, (float *)&next, 0);
                    (void)len2;
                }
            }
        }
    }
    *outAxis = axis;
    func_001E8390(allocA);
    func_001E8390(allocB);
}

void func_00127980(float *a0, float *a1, int n, float *out, int *axisOut)
{
    extern float D_00275544;
    extern float D_0027954C;
    extern float D_00275AEC;
    extern float D_00275994;
    void *func_001E8AA5(int size);
    void func_001E8390(void *p);
    void func_0011F610(float *verts, int count, float *mn, float *mx);
    int func_001268E0(float *a, float *b, float *b0, float *b1, float *b2, float *b3, int n, int *c0, int *c1, float split, int axis);
    float func_00127190(float *verts, int count);
    void func_00126A80(float *verts, int count, float *center, float *extent, float *volume, float *radius, float *matrix);

    float mn[4];
    float e0, e1, e2;
    int axis;
    float *b0, *b1, *b2, *b3;
    int cnt0, cnt1;
    float best;
    int bestI;
    int i, j;

    {
        float mx[4];
        mx[2] = 0.0f; mx[1] = 0.0f; mx[0] = 0.0f; mx[3] = 1.0f;
        mn[2] = 0.0f; mn[1] = 0.0f; mn[0] = 0.0f; mn[3] = 1.0f;
        func_0011F610(a0, n * 2, mn, mx);
        e0 = mx[0] - mn[0];
        if (e0 > D_00275544) axis = 0;
        e1 = mx[1] - mn[1];
        if (e1 > e0) axis = 1;
        e2 = mx[2] - mn[2];
        if (e2 > e1) axis = 2;
    }
    bestI = 9;
    b0 = (float *)func_001E8AA5(n * 32);
    b1 = (float *)func_001E8AA5(n * 32);
    b2 = (float *)func_001E8AA5(n * 16);
    b3 = (float *)func_001E8AA5(n * 16);
    switch (axis) {
    case 0: *out = (e0 * D_0027954C) * D_00275AEC + mn[0]; break;
    case 1: *out = (e1 * D_0027954C) * D_00275AEC + mn[1]; break;
    case 2: *out = (e2 * D_0027954C) * D_00275AEC + mn[2]; break;
    }
    if (func_001268E0(a0, a1, b0, b1, b2, b3, n, &cnt0, &cnt1, *out, axis)) {
        best = func_00127190(b0, cnt0 * 2) + func_00127190(b1, cnt1 * 2);
    } else {
        best = func_00127190(a0, n * 2) * D_00275994;
    }
    for (i = 0; i < 18; i++) {
        for (j = 0; j < 3; j++) {
            switch (j) {
            case 0: *out = (e0 * D_0027954C) * (i + 1) + mn[0]; break;
            case 1: *out = (e1 * D_0027954C) * (i + 1) + mn[1]; break;
            case 2: *out = (e2 * D_0027954C) * (i + 1) + mn[2]; break;
            }
            if (func_001268E0(a0, a1, b0, b1, b2, b3, n, &cnt0, &cnt1, *out, j)) {
                float center1[4];
                float extent1[4];
                float vol1, rad1;
                float center2[4];
                float extent2[4];
                float vol2, rad2;
                extent1[2] = 0.0f; extent1[1] = 0.0f; extent1[0] = 0.0f; extent1[3] = 1.0f;
                func_00126A80(b0, cnt0 * 2, center1, extent1, &vol1, &rad1, 0);
                extent2[2] = 0.0f; extent2[1] = 0.0f; extent2[0] = 0.0f; extent2[3] = 1.0f;
                func_00126A80(b1, cnt1 * 2, center2, extent2, &vol2, &rad2, 0);
                if (vol2 + vol1 < best) {
                    best = vol2 + vol1;
                    bestI = i;
                    axis = j;
                }
            }
        }
    }
    *axisOut = axis;
    switch (axis) {
    case 0: *out = (e0 * D_0027954C) * (bestI + 1) + mn[0]; break;
    case 1: *out = (e1 * D_0027954C) * (bestI + 1) + mn[1]; break;
    case 2: *out = (e2 * D_0027954C) * (bestI + 1) + mn[2]; break;
    }
    func_001E8390(b0);
    func_001E8390(b1);
    func_001E8390(b2);
    func_001E8390(b3);
}

