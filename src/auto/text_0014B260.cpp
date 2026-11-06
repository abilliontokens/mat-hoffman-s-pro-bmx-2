/* 4 functions from 0x0014B260 to 0x0014C1C0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>
#pragma auto_inline(off)

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() {}
    Vec4(f32 x_, f32 y_, f32 z_, f32 w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct Mtx44 {
    Vec4 r[4];
    Mtx44() {}
    void func_000264C0(Mtx44 *src);
};

struct VecInit_0014BA80 : Vec4 {
    VecInit_0014BA80() { z = 0; y = 0; x = 0; w = 1.0f; }
    VecInit_0014BA80(f32 x_, f32 y_, f32 z_) { x = x_; y = y_; z = z_; w = 1.0f; }
};
struct __declspec(align(16)) M44_0014BA80 { __m128 m[4]; };
struct S_0014BA80_Node { char pad0[0xF0]; M44_0014BA80 mat; };
struct S_0014BA80_Pair { S_0014BA80_Node *a; S_0014BA80_Node *b; };
extern float D_002755E8;
Vec4 *func_0011EEE0(Vec4 *out, Vec4 *a, Vec4 *b);
Vec4 *func_0014AA70(Vec4 *out, Vec4 *a, Vec4 *b);
void func_0001C680(Vec4 *out, Vec4 v, float *m);
static __forceinline void Xform_0014BA80(Vec4 *out, const M44_0014BA80 *mat, const float *v)
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
static __forceinline float Abs_0014BA80(float f) { return fabsf(f); }
struct DynamicRayCollisionObject {
    int func_0014B260(char *obj);
    char pad_0[0x28];
    Vec4 f28;
    char pad38[0x10];
    float f48;
    char pad4C[0x5a];
    unsigned char unkA6;
    unsigned char unkA7;
    int unkA8;
    S_0014BA80_Pair *fAC;
    Vec4 *fB0;
    char padB4[8];
    f32 *unkBC;
    Vec4 *unkC0;
    Vec4 *unkC4;
    void func_0014BA40(int param_1);
    void func_0014BA80(Vec4 *centre, float *extent);
    void func_0014B940();
    void func_00157A00(int param_1);
};

static inline void Vec4Unused(Vec4 *a, Vec4 *b) {}

void DynamicRayCollisionObject::func_0014B940()
{
    Vec4 a(0.0f, 0.0f, 0.0f, 1.0f);
    Vec4 b(0.0f, 0.0f, 0.0f, 1.0f);
    int i;
    for (i = 0; i < unkA8; i++) {
        a = unkC0[i];
        b = Vec4(a.x + unkBC[i] * unkC4[i].x, a.y + unkBC[i] * unkC4[i].y, a.z + unkBC[i] * unkC4[i].z, 1.0f);
    }
}
void DynamicRayCollisionObject::func_0014BA40(int param_1)
{
    if (unkA6 != 0) {
        func_0014B940();
    }
    unkA7 = unkA7 & 0xef;
    func_00157A00(param_1);
}
