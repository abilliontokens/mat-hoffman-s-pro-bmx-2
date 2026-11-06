/* 2 functions from 0x0002CBC0 to 0x0002D730, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <string.h>

struct V4_2D270 { float x, y, z, w; };

struct S_2D270_Body {
    char pad0[0x238];
    float f238, f23c, f240;
    char pad244[0x268 - 0x244];
    float f268, f26c, f270, f274;
};

struct S_2D270_230 {
    char pad0[0xf0];
    char f0f0[0x40];
    void func_0019AD60(int a, void *b);
    V4_2D270 *func_00197EC0(void *a, void *b);
};

struct S_2D270_Glob { char pad[0x248]; float f248; };
extern S_2D270_Glob *D_002A8490;

struct S2CBC0 {
    char pad0[0x160];
    float m1[16];
    float m2[16];
    S_2D270_Body *f1e0;
    char pad1e4[0x230 - 0x1e4];
    S_2D270_230 *f230;
    char pad234[0x730 - 0x234];
    float f730;
    void func_0002CBC0(float dt);
    void func_0002D270();
    void func_0002A7C0();
};

void func_000263B0(void *out, void *a, void *b);

static __forceinline void Cross_2D270(V4_2D270 *out, const V4_2D270 *a, const V4_2D270 *b)
{
    __m128 va = _mm_loadu_ps(&a->x);
    __m128 vb = _mm_loadu_ps(&b->x);
    __m128 sa = _mm_shuffle_ps(va, va, 0xc9);
    __m128 sb = _mm_shuffle_ps(vb, vb, 0xc9);
    __m128 r = _mm_sub_ps(_mm_mul_ps(vb, sa), _mm_mul_ps(va, sb));
    _mm_storeu_ps(&out->x, _mm_shuffle_ps(r, r, 0xc9));
}
