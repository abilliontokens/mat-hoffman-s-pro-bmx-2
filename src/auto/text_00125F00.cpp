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

static inline float Sqrt_00125F00(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x)); return r; }
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

int func_00125540(int, S_00125F00_Vec, S_00125F00_Vec, float, S_00125F00_Vec *, S_00125F00_Vec *, float *);
int func_00125F00(S_00125F00_A0 *a0, int idx, int *a2, S_00125F00_A3 *a3, int flag)
{
    if ((char)(idx >> 8) < 0) {
        int base = a2[1] + (idx & 0x7fff) * 0x14;
        S_00125F00_Vec *b4 = a0->b4;
        S_00125F00_Vec *b8 = a0->b8;
        float *bc = a0->bc;
        S_00125F00_Vec *p78 = a3->p78;
        S_00125F00_Vec *p74 = a3->p74;
        int *p88 = a3->p88;
        float *p8c = a3->p8c;
        int count = a0->count;
        int i;
        if (count <= 0) return 1;
        for (i = count; i != 0; i--) {
            if (func_00125540(base, *b8, *b4, *bc, p78, p74, p8c) != 0) {
                *p88 = 1;
                a3->n80++;
                if (*p8c < a3->f94) {
                    float f;
                    float dot;
                    a3->f94 = *p8c;
                    a3->v20 = *p74;
                    a3->v30 = *p78;
                    f = 1.0f - *p8c;
                    dot = f * b8->f[2] * p74->f[2] + f * b8->f[0] * p74->f[0] + f * b8->f[1] * p74->f[1];
                    a3->v40.f[0] = dot * p74->f[0];
                    a3->v40.f[1] = dot * p74->f[1];
                    a3->v40.f[2] = dot * p74->f[2];
                    a3->v40.f[3] = 1.0f;
                }
            }
            b4++;
            bc++;
            p78++;
            b8++;
            p74++;
            p88++;
            p8c++;
        }
        return 1;
    } else {
        S_00125F00_Node *node = (S_00125F00_Node *)a2[0] + (idx & 0xffff);
        float cx = node->c[0];
        float cy = node->c[1];
        float cz = node->c[2];
        float rx = node->r[0];
        float ry = node->r[1];
        float rz = node->r[2];
        if (flag == 0) {
            float dx = cx - a0->c8;
            float dy = cy - a0->cc;
            float dz = cz - a0->d0;
            if (Sqrt_00126A80(rx * rx + ry * ry + rz * rz) + a0->e8 < Sqrt_00126A80(dx * dx + dy * dy + dz * dz)) {
                return 1;
            }
            func_00125F00(a0, node->left, a2, a3, 0);
            func_00125F00(a0, node->right, a2, a3, 0);
            return 1;
        } else {
            S_00125F00_Vec *b4;
            S_00125F00_Vec *b8;
            float *bc;
            int i;
            if (rx + a0->e8 < Abs_00126A80(cx - a0->c8)) return 1;
            if (ry + a0->e8 < Abs_00126A80(cy - a0->cc)) return 1;
            if (rz + a0->e8 < Abs_00126A80(cz - a0->d0)) return 1;
            b4 = a0->b4;
            b8 = a0->b8;
            bc = a0->bc;
            if (a0->count <= 0) return 1;
            for (i = 0; i < a0->count; i++) {
                float t;
                if (Abs_00126A80(cx - b4->f[0]) <= rx && Abs_00126A80(cy - b4->f[1]) <= ry && Abs_00126A80(cz - b4->f[2]) <= rz) goto hit;
                t = ((cx + rx) - b4->f[0]) / b8->f[0];
                if (0.0f <= t && t < *bc && Abs_00126A80(t * b8->f[1] + b4->f[1] - cy) <= ry && Abs_00126A80(t * b8->f[2] + b4->f[2] - cz) <= rz) goto hit;
                t = ((cx - rx) - b4->f[0]) / b8->f[0];
                if (0.0f <= t && t < *bc && Abs_00126A80(t * b8->f[1] + b4->f[1] - cy) <= ry && Abs_00126A80(t * b8->f[2] + b4->f[2] - cz) <= rz) goto hit;
                t = ((cz + rz) - b4->f[2]) / b8->f[2];
                if (0.0f <= t && t < *bc && Abs_00126A80(t * b8->f[1] + b4->f[1] - cy) <= ry && Abs_00126A80(t * b8->f[0] + b4->f[0] - cx) <= rx) goto hit;
                t = ((cz - rz) - b4->f[2]) / b8->f[2];
                if (0.0f <= t && t < *bc && Abs_00126A80(t * b8->f[1] + b4->f[1] - cy) <= ry && Abs_00126A80(t * b8->f[0] + b4->f[0] - cx) <= rx) goto hit;
                t = ((cy + ry) - b4->f[1]) / b8->f[1];
                if (0.0f <= t && t < *bc && Abs_00126A80(t * b8->f[2] + b4->f[2] - cz) <= rz && Abs_00126A80(t * b8->f[0] + b4->f[0] - cx) <= rx) goto hit;
                t = ((cy - ry) - b4->f[1]) / b8->f[1];
                if (0.0f <= t && t < *bc && Abs_00126A80(t * b8->f[2] + b4->f[2] - cz) <= rz && Abs_00126A80(t * b8->f[0] + b4->f[0] - cx) <= rx) goto hit;
                b4++;
                b8++;
                bc++;
                continue;
            hit:
                func_00125F00(a0, node->left, a2, a3, flag);
                func_00125F00(a0, node->right, a2, a3, flag);
                return 1;
            }
            return 1;
        }
    }
}

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

