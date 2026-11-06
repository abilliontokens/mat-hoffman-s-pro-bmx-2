/* 5 functions from 0x00125F00 to 0x00126DD0, found by Ghidra. */
#include "common.h"
struct S_001268E0_Vec { float f[4]; };
struct S_001268E0_Rec { S_001268E0_Vec a, b; };

/* 0x34-byte record split by a float threshold */
struct S_00126770_Rec {
    float f[13];
};

#include <xmmintrin.h>
extern float D_002755E8;

struct S_00126A80_Vec { float x, y, z, w; };
struct __declspec(align(16)) S_00126A80_Mat { __m128 m[4]; };

static inline void Xform_00126A80(S_00126A80_Vec *out, const S_00126A80_Mat *mat, const float *v)
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

static __forceinline float Sqrt_00126A80(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }
static __forceinline float Max_00126A80(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Abs_00126A80(float f) { int i = *(int *)&f & 0x7fffffff; return *(float *)&i; }

struct S_00125F00_Vec { float f[4]; };
struct S_00125F00_Node {
    char pad00[8];
    unsigned short left;
    unsigned short right;
    float c[3];
    float r[3];
};
struct S_00125F00_A0 {
    char pad00[0xa8];
    int count;
    char padAC[8];
    S_00125F00_Vec *b4;
    S_00125F00_Vec *b8;
    float *bc;
    char padC0[8];
    float c8;
    float cc;
    float d0;
    char padD4[0x14];
    float e8;
};
struct S_00125F00_A3 {
    char pad00[0x20];
    S_00125F00_Vec v20;
    S_00125F00_Vec v30;
    S_00125F00_Vec v40;
    char pad50[0x24];
    S_00125F00_Vec *p74;
    S_00125F00_Vec *p78;
    char pad7C[4];
    int n80;
    char pad84[4];
    int *p88;
    float *p8c;
    char pad90[4];
    float f94;
};

void func_00126740(int a0, int a1, int a2, int a3, int a4, int a5) {
    extern int D_002B92F4;
    int func_00125F00(...);
    D_002B92F4 = a3;
    func_00125F00(a0, a1, a2, a4, a5);
}

int func_00126770(S_00126770_Rec *src, S_00126770_Rec *outA, S_00126770_Rec *outB, int count, int *cntA, int *cntB, float thr, int mode)
{
    int sel;
    int i;
    S_00126770_Rec *r;

    *cntA = 0;
    *cntB = 0;
    sel = 0;
    r = src;
    for (i = 0; i < count; i++) {
        switch (mode) {
        case 0:
            if (r->f[7] > thr) {
                sel = 1;
            } else {
                sel = 0;
            }
            break;
        case 1:
            if (r->f[8] > thr) {
                sel = 1;
            } else {
                sel = 0;
            }
            break;
        case 2:
            if (r->f[9] > thr) {
                sel = 1;
            } else {
                sel = 0;
            }
            break;
        }
        if (sel) {
            outA[*cntA] = *r;
            (*cntA)++;
        } else {
            outB[*cntB] = *r;
            (*cntB)++;
        }
        r++;
    }
    if (*cntB != 0 && *cntA != 0) {
        return 1;
    }
    *cntA = count / 2;
    *cntB = count - count / 2;
    for (i = 0; i < *cntA; i++) {
        outA[i] = src[i];
    }
    for (i = 0; i < *cntB; i++) {
        outB[i] = src[*cntA + i];
    }
    return 0;
}

int func_001268E0(S_001268E0_Rec *src, S_001268E0_Vec *pos, S_001268E0_Rec *outA, S_001268E0_Rec *outB, S_001268E0_Vec *posA, S_001268E0_Vec *posB, int count, int *cntA, int *cntB, float thr, int mode)
{
 int sel;
 S_001268E0_Rec *r;
 S_001268E0_Vec *p;
 *cntA = 0; *cntB = 0;
 if(count > 0) {
 p=pos; r=src;
 for (int i = 0; i < count; i++) {
 switch(mode) {
 case 0: if(p->f[0] > thr) sel=1; else sel=0; break;
 case 1: if(p->f[1] > thr) sel=1; else sel=0; break;
 case 2: if(p->f[2] > thr) sel=1; else sel=0; break;
 }
 if(sel) {
 outA[*cntA].a = r->a; outA[*cntA].b = r->b;
 posA[*cntA] = *p; (*cntA)++;
 } else {
 outB[*cntB].a = r->a; outB[*cntB].b = r->b;
 posB[*cntB] = *p; (*cntB)++;
 }
 r++; p++;
 }
 }
 if(*cntB && *cntA) return 1;
 *cntA=count/2; *cntB=count-count/2; return 0;
}

