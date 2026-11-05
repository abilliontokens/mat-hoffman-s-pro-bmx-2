/* 4 functions from 0x001A96D0 to 0x001AA270, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct V4_001A96D0 {
    float x, y, z, w;
    V4_001A96D0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct Pivot_001A96D0 {
    char pad0[0x190];
    float f190, f194, f198;
};

struct Body_001A96D0 {
    char pad0[0x130];
    float f130, f134, f138;
    char pad13C[4];
    float f140, f144, f148;
    char pad14C[0x22C - 0x14C];
    char *f22c;
    void AddPos(V4_001A96D0 v)
    {
        f130 += v.x;
        f134 += v.y;
        f138 += v.z;
    }
};

struct This_001A96D0 {
    char pad0[0x24];
    Pivot_001A96D0 *f24;
    char pad28[0x68 - 0x28];
    int f68;
    int f6c;
    char pad70[0x104 - 0x70];
    float f104, f108, f10c;
    void func_001A96D0(Body_001A96D0 *body, V4_001A96D0 p, V4_001A96D0 q, float s);
};

extern float D_002AA248, D_002AA24C, D_002AA250;
void func_00030A30(V4_001A96D0 *out, V4_001A96D0 v, float *m);
void func_0011F540(V4_001A96D0 *out, V4_001A96D0 v, float *m);

static __forceinline void cross_001A96D0(float *out, float *a, float *b)
{
    __m128 va = _mm_loadu_ps(a);
    __m128 vb = _mm_loadu_ps(b);
    __m128 sa = va;
    __m128 sb = vb;

    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(out, va);
}

struct V4 { float x, y, z, w; };
struct Other { char pad[0x204]; unsigned flags; char pad2[8]; float a; float b; };
struct Body {
    char p0[0x24]; Other* o; char p1[0x28]; int f4c; int f50; char p2[0x2c]; unsigned f7c; char p3[0x14];
    float f94; float f98; char p4[8]; float a0[2]; float a8[2]; char p5[0x0c]; int fb8;
    void func_001A9D20(Other* other, unsigned mask, V4 p4, V4 p5, float f);
};
void __stdcall func_001A96D0(Other* o, int a, V4 b, V4 c);
