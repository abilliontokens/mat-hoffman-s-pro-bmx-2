/* 1 function from 0x00028130 to 0x00028CD0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct V4 { float x; float y; float z; float w; };
extern float D_00276600;
extern float D_002765F0;
extern float D_002765E0;
extern float D_002756D4;
extern float D_002756D0;
extern float D_002756DC;
extern float D_00275544;
static __forceinline void norm28130(float *out, float *in)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_00276600);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_002765E0)), _mm_sub_ss(_mm_load_ss(&D_002765F0), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}
void func_00026340(void *a, void *b);
float func_0014F7E0(float a);

struct Cand {
    char pad0[0x10];
    int f10;
    char *f14;
    char pad18[8];
    float p20;
    float p24;
    float p28;
    char pad2C[4];
    float p30;
    float p34;
    float p38;
    char pad3C[4];
    float v40;
    float v44;
    float v48;
    float v4C;
};
struct A530 { Cand *func_0015A520(); void func_0015A4F0(V4 *a, V4 *b); };
struct Obj24 { char pad0[0x530]; A530 *f530; };
struct Node230 {
    V4 func_00197F70(V4 *in);
    void func_0019A8C0(V4 *a, V4 *b);
    V4 func_00198120(V4 *in);
};
struct TailObj {
    char pad0[0x14];
    char *f14;
    char pad18[0x64];
    void *f7C;
    int f80;
};
struct F210 { char pad0[0x30]; TailObj *f30; };
struct F1F4 { char pad0[0x2c]; int f2C; };

struct C_00028130 {
    char pad0[0x24];
    Obj24 *f24;
    char pad28[0xe4];
    float f10C;
    float f110;
    float f114;
    int f118;
    int f11C;
    int f120;
    char pad124[0xbc];
    void *f1E0;
    F1F4 *f1F4;
    char pad1F8[0x18];
    F210 *f210;
    char pad214[0x1c];
    Node230 *f230;
    char pad234[0x234];
    int f468;
    char pad46C[0x18];
    int f484;
    int f488;
    char pad48C[0x68];
    int f4F4;
    int f4F8;
    char pad4FC[0x5a0 - 0x4fc];
    float f5A0;
    float f5A4;
    float f5A8;
    char pad5AC[4];
    float f5B0;
    char pad5B4[0xe4];
    int f698;
    char pad69C[0x84];
    TailObj *f720;
    int f724;
    int f728;
    int f72C;
    int f730;
    int f734;
    int f738;
    int f73C;
    int func_00028130(int *param1, int param2, int *param3);
    void func_0005DA40(Cand *a);
    void func_0005DA80(int a);
    void func_00026270(Cand *a);
    void func_0005DA50(int a);
};
