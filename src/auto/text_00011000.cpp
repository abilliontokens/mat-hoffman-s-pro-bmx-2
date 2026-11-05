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
    out[3] = 1.0f;
    out[0] = -in[0];
    out[1] = -in[1];
    out[2] = -in[2];
}

void func_000110E0(float *out, float *a, float *b) {
    out[3] = 1.0f;
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

void func_000111B0(float *out, float *in) {
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 cmp = _mm_cmplt_ss(len, _mm_load_ss(&D_002754A0));
    len = _mm_add_ss(len, _mm_and_ps(cmp, _mm_load_ss(&D_002754A0)));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_00275480)), _mm_sub_ss(_mm_load_ss(&D_00275490), _mm_mul_ss(_mm_mul_ss(len, r), r)));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}

void __stdcall func_00011430(int a0, int a1) {
}
