/* 11 functions from 0x0011A590 to 0x0011B240, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern int D_00283D5C;
extern float D_00275544;
extern float D_002756B8;
extern float D_002756D0;
extern float D_002756E8;

void func_001E891B(void *p);
float func_0014F7E0(float x);
float func_0014F510(float x);
float func_0014F550(float x);

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

struct C_0011AB60 {
    void *vtbl;
    void func_00157660();
    void *func_0011AB60(int flags);
};

struct C_0011AB90Arg {
    char pad0[0x22c];
    int f22c;
};

struct C_0011AB90 {
    char pad0[0x24];
    C_0011AB90Arg *f24;
    int f28;
    void func_0011A4B0();
    void func_001D3F50();
    void func_0011AB90(C_0011AB90Arg *arg);
};

void func_0011AC30(float *out, float *in);
void func_0011ACC0(void *a, void *b, float *m);

void *C_0011AB60::func_0011AB60(int flags)
{
    vtbl = (void *)&D_00283D5C;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0011AB90::func_0011AB90(C_0011AB90Arg *arg)
{
    f24 = arg;
    f28 = arg->f22c;
    func_0011A4B0();
    func_001D3F50();
}

void func_0011AC30(float *out, float *in)
{
    __m128 r0 = _mm_load_ps(in);
    __m128 r1 = _mm_load_ps(in + 4);
    __m128 r2 = _mm_load_ps(in + 8);
    __m128 r3 = _mm_load_ps(in + 12);
    __m128 a, b, c, t;
    a = _mm_movehl_ps(a, r0);
    b = _mm_movehl_ps(b, r1);
    c = _mm_movehl_ps(c, r2);
    a = _mm_shuffle_ps(a, a, 0x55);
    b = _mm_shuffle_ps(b, b, 0x55);
    c = _mm_shuffle_ps(c, c, 0x55);
    t = _mm_setzero_ps();
    a = _mm_mul_ps(a, r0);
    b = _mm_mul_ps(b, r1);
    c = _mm_mul_ps(c, r2);
    t = _mm_sub_ps(t, a);
    b = _mm_add_ps(b, c);
    t = _mm_sub_ps(t, b);
    a = _mm_movehl_ps(a, r0);
    b = _mm_movehl_ps(b, r1);
    c = _mm_movehl_ps(c, r2);
    r0 = _mm_unpacklo_ps(r0, r1);
    _mm_store_ss(out + 3, t);
    _mm_storel_pi((__m64 *)(out + 6), t);
    _mm_storeh_pi((__m64 *)(out + 11), t);
    ((int *)out)[2] = ((int *)in)[8];
    ((int *)out)[6] = ((int *)in)[9];
    _mm_storel_pi((__m64 *)out, r0);
    _mm_storeh_pi((__m64 *)(out + 4), r0);
    _mm_store_ss(out + 8, a);
    _mm_store_ss(out + 9, b);
    _mm_store_ss(out + 10, c);
    _mm_store_ps(out + 12, r3);
}

void func_0011ADA0(void *a, void *b, float *m)
{
    __declspec(align(16)) float inv[16];
    func_0011AC30(inv, m);
    func_0011ACC0(a, b, inv);
}

