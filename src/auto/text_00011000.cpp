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


extern float D_00275480;
extern float D_00275490;
extern float D_002754A0;

float func_00011000(float x) { return sqrtf(x); }

float func_00011020(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_set_ss(a), _mm_set_ss(b))); return r; }

float func_00011040(float a, float b) { return a > b ? a : b; }

C_00011060* C_00011060::func_00011060(void) {
    unk8 = 0;
    unk4 = 0;
    unk0 = 0;
    unkC = 1065353216;
    return this;
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
