/* 25 functions from 0x00011000 to 0x00011FF0, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>
struct C_00011060 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_00011060* func_00011060(void);
};


static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

struct C_00011080 {
    float x;
    float y;
    float z;
    C_00011080* func_00011080(float *p);
};

struct C_00011410 {
    int unk0;
    int unk4;
    int func_00011410(void);
};

struct S_SystemTime {
    unsigned short year;
    unsigned short month;
    unsigned short dayOfWeek;
    unsigned short day;
    unsigned short hour;
    unsigned short minute;
    unsigned short second;
    unsigned short milliseconds;
};

struct C_00017680_Target {
    void func_00197B40(float *a, float *b);
    void func_00199110(int a0, float *a1, float *a2, int a3, int a4, int a5);
};

struct C_00017680_Mid {
    int pad0;
    C_00017680_Target *f4;
};

struct C_00017680_Vec {
    float x;
    float y;
    float z;
    float w;
};

struct C_00011440 {
    char pad0[0x3C];
    C_00017680_Mid *f3C;
    void func_00011440(C_00017680_Vec pos);
};

extern int D_002AF45C;
extern float D_002754B0;

void __stdcall func_001DC910(S_SystemTime *out);
void func_001E8826(int seed);
int func_001E8833(void);

extern float D_00275480;
extern float D_00275490;
extern float D_002754A0;

float func_00011000(float x) { return sqrtf(x); }

float func_00011020(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

float func_00011040(float a, float b) { return b > a ? b : a; }

C_00011060* C_00011060::func_00011060(void) {
    unk8 = 0;
    unk4 = 0;
    unk0 = 0;
    unkC = 1065353216;
    return this;
}

C_00011080* C_00011080::func_00011080(float *p) {
    x = x + p[0];
    y = y + p[1];
    z = z + p[2];
    return this;
}

void func_000110B0(float *out, float *in) {
    vec3_set(out, -in[0], -in[1], -in[2]);
}

void func_000110E0(float *out, float *a, float *b) {
    vec3_set(out, a[0] + b[0], a[1] + b[1], a[2] + b[2]);
}

void func_00011110(float *out, float *a, float *b) {
    vec3_set(out, a[0] - b[0], a[1] - b[1], a[2] - b[2]);
}

void func_00011140(float *out, float *in, float s) {
    vec3_set(out, s * in[0], s * in[1], s * in[2]);
}

float func_00011170(float *v) {
    return sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
}

void func_000111B0(float *out, float *in) {
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_002754A0);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_00275480)), _mm_sub_ss(_mm_load_ss(&D_00275490), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}

float func_00011220(float *a, float *b)
{
    float s = a[1] * b[1] + a[0] * b[0];
    return s + a[2] * b[2];
}

int func_001E8833(void);
extern float D_002754B0;
float func_00011240(void) {
    return func_001E8833() * D_002754B0;
}

int func_00011260(int lo, int hi)
{
    if (D_002AF45C == 0) {
        S_SystemTime t;
        func_001DC910(&t);
        D_002AF45C = (((t.day * 240 + t.hour) * 6 + t.minute) * 60) + t.second;
        func_001E8826(D_002AF45C);
    }
    return lo + (int)((float)(hi - lo + 1) * ((float)func_001E8833() * D_002754B0));
}

int C_00011410::func_00011410(void)
{
    return unk4;
}

void __stdcall func_00011430(int a0, int a1) {
}

void C_00011440::func_00011440(C_00017680_Vec pos)
{
    float vecB[4];
    float vecA[4];

    vecA[2] = 0.0f;
    vecA[1] = 0.0f;
    vecA[0] = 0.0f;
    vecA[3] = 1.0f;
    vecB[2] = 0.0f;
    vecB[1] = 0.0f;
    vecB[0] = 0.0f;
    vecB[3] = 1.0f;
    f3C->f4->func_00197B40(vecA, vecB);
    pos.y = vecA[1];
    f3C->f4->func_00199110(0, (float *)&pos, vecB, 0, 1, 0);
}

