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
static __forceinline void SqrtR_00125F00(float *d, float square) { _mm_store_ss(d, _mm_sqrt_ss(*(__m128 *)&square)); }
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
float sqrtf(float);
int func_00125F00(S_00125F00_A0 *a0, unsigned short idx, int *a2, S_00125F00_A3 *a3, int flag)
{
    if (idx & 0x8000) {
        int base = a2[1] + (idx & 0x7fff) * 0x14;
        S_00125F00_Vec *p74 = a3->p74;
        float *p8c = a3->p8c;
        S_00125F00_Vec *b4 = a0->b4;
        int count = a0->count;
        S_00125F00_Vec *b8 = a0->b8;
        float *bc = a0->bc;
        S_00125F00_Vec *p78 = a3->p78;
        int *p88 = a3->p88;
        int i;
        if (count <= 0) return 1;
        for (i = count; i != 0; i--) {
            if (func_00125540(base, *b8, *b4, *bc, p78, p74, p8c) != 0) {
                *p88 = 1;
                a3->n80++;
                if (*p8c < a3->f94) {
                    float f;
                    float dot;
                    S_00125F00_Vec out;
                    a3->f94 = *p8c;
                    a3->v20 = *p74;
                    a3->v30 = *p78;
                    f = 1.0f - *p8c;
                    out.f[3] = 1.0f;
                    dot = f * b8->f[0] * p74->f[0];
                    dot += f * b8->f[1] * p74->f[1];
                    dot += f * b8->f[2] * p74->f[2];
                    out.f[0] = dot * p74->f[0];
                    out.f[1] = dot * p74->f[1];
                    out.f[2] = dot * p74->f[2];
                    a3->v40 = out;
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
        S_00125F00_Node *node = (S_00125F00_Node *)a2[0] + idx;
        S_00125F00_Vec diff;
        S_00125F00_Vec center;
        S_00125F00_Vec extent;
        float t;
        float adx;
        float ady;
        float adz;
        float ay1;
        float az1;
        float ay2;
        float az2;
        float ay3;
        float ax3;
        float ay4;
        float ax4;
        float az5;
        float ax5;
        float az6;
        float ax6;
        int i;
        int count;
        float *bc;
        S_00125F00_Vec *b8;
        S_00125F00_Vec *b4;
        center.f[0] = node->c[0];
        center.f[1] = node->c[1];
        center.f[2] = node->c[2];
        extent.f[0] = node->r[0];
        extent.f[1] = node->r[1];
        extent.f[2] = node->r[2];
        if (flag == 0) {
            float dist;
            float rad;
            diff.f[0] = center.f[0] - a0->c8;
            diff.f[1] = center.f[1] - a0->cc;
            diff.f[2] = center.f[2] - a0->d0;
            dist = sqrtf(diff.f[0] * diff.f[0] + diff.f[1] * diff.f[1] + diff.f[2] * diff.f[2]);
            rad = sqrtf(extent.f[0] * extent.f[0] + extent.f[1] * extent.f[1] + extent.f[2] * extent.f[2]);
            if (dist > rad + a0->e8) {
                return 1;
            }
            func_00125F00(a0, node->left, a2, a3, 0);
            func_00125F00(a0, node->right, a2, a3, 0);
            return 1;
        } else {
            diff.f[0] = center.f[0] - a0->c8;
            diff.f[1] = center.f[1] - a0->cc;
            diff.f[2] = center.f[2] - a0->d0;
            if (extent.f[0] + a0->e8 < Abs_00126A80(diff.f[0])) return 1;
            if (extent.f[1] + a0->e8 < Abs_00126A80(diff.f[1])) return 1;
            if (extent.f[2] + a0->e8 < Abs_00126A80(diff.f[2])) return 1;
            count = a0->count;
            b8 = a0->b8;
            b4 = a0->b4;
            bc = a0->bc;
            if (count <= 0) return 1;
            for (i = 0; i < count; i++) {
                diff.f[0] = center.f[0] - b4->f[0];
                diff.f[1] = center.f[1] - b4->f[1];
                diff.f[2] = center.f[2] - b4->f[2];
                adx = Abs_00126A80(diff.f[0]);
                ady = Abs_00126A80(diff.f[1]);
                adz = Abs_00126A80(diff.f[2]);
                if (adx <= extent.f[0] && ady <= extent.f[1] && adz <= extent.f[2]) goto hit;
                t = ((center.f[0] + extent.f[0]) - b4->f[0]) / b8->f[0];
                if (t >= 0.0f && t < *bc) {
                    ay1 = Abs_00126A80(t * b8->f[1] + b4->f[1] - center.f[1]);
                    if (ay1 <= extent.f[1]) {
                        az1 = Abs_00126A80(t * b8->f[2] + b4->f[2] - center.f[2]);
                        if (az1 <= extent.f[2]) goto hit;
                    }
                }
                t = ((center.f[0] - extent.f[0]) - b4->f[0]) / b8->f[0];
                if (t >= 0.0f && t < *bc) {
                    ay2 = Abs_00126A80(t * b8->f[1] + b4->f[1] - center.f[1]);
                    if (ay2 <= extent.f[1]) {
                        az2 = Abs_00126A80(t * b8->f[2] + b4->f[2] - center.f[2]);
                        if (az2 <= extent.f[2]) goto hit;
                    }
                }
                t = ((center.f[2] + extent.f[2]) - b4->f[2]) / b8->f[2];
                if (t >= 0.0f && t < *bc) {
                    ay3 = Abs_00126A80(t * b8->f[1] + b4->f[1] - center.f[1]);
                    if (ay3 <= extent.f[1]) {
                        ax3 = Abs_00126A80(t * b8->f[0] + b4->f[0] - center.f[0]);
                        if (ax3 <= extent.f[0]) goto hit;
                    }
                }
                t = ((center.f[2] - extent.f[2]) - b4->f[2]) / b8->f[2];
                if (t >= 0.0f && t < *bc) {
                    ay4 = Abs_00126A80(t * b8->f[1] + b4->f[1] - center.f[1]);
                    if (ay4 <= extent.f[1]) {
                        ax4 = Abs_00126A80(t * b8->f[0] + b4->f[0] - center.f[0]);
                        if (ax4 <= extent.f[0]) goto hit;
                    }
                }
                t = ((center.f[1] + extent.f[1]) - b4->f[1]) / b8->f[1];
                if (t >= 0.0f && t < *bc) {
                    az5 = Abs_00126A80(t * b8->f[2] + b4->f[2] - center.f[2]);
                    if (az5 <= extent.f[2]) {
                        ax5 = Abs_00126A80(t * b8->f[0] + b4->f[0] - center.f[0]);
                        if (ax5 <= extent.f[0]) goto hit;
                    }
                }
                t = ((center.f[1] - extent.f[1]) - b4->f[1]) / b8->f[1];
                if (t >= 0.0f && t < *bc) {
                    az6 = Abs_00126A80(t * b8->f[2] + b4->f[2] - center.f[2]);
                    if (az6 <= extent.f[2]) {
                        ax6 = Abs_00126A80(t * b8->f[0] + b4->f[0] - center.f[0]);
                        if (ax6 <= extent.f[0]) goto hit;
                    }
                }
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

void _func_00126A80(S_00126A80_Vec *pts, int count, S_00126A80_Vec *center, S_00126A80_Vec *ext, float *vol, float *radius, S_00126A80_Mat *mat)
{
    S_00126A80_Vec mx = *pts;
    S_00126A80_Vec mn = *pts;
    S_00126A80_Vec v;
    S_00126A80_Vec c;
    float sx, sy, sz;
    int i;

    for (i = 0; i < count; i++) {
        v = *pts;
        if (mat)
            Xform_00126A80(&v, mat, &v.x);
        if (v.x > mx.x) mx.x = v.x;
        if (v.y > mx.y) mx.y = v.y;
        if (v.z > mx.z) mx.z = v.z;
        if (v.x < mn.x) mn.x = v.x;
        if (v.y < mn.y) mn.y = v.y;
        if (v.z < mn.z) mn.z = v.z;
        pts++;
    }
    c.x = (mn.x + mx.x) * D_002755E8;
    c.y = (mn.y + mx.y) * D_002755E8;
    c.z = (mn.z + mx.z) * D_002755E8;
    c.w = 1.0f;
    *center = c;
    mn.x = (mx.x - mn.x) * D_002755E8;
    mn.y = (mx.y - mn.y) * D_002755E8;
    mn.z = (mx.z - mn.z) * D_002755E8;
    mn.w = 1.0f;
    *ext = mn;
    *radius = Sqrt_00126A80(ext->x * ext->x + ext->y * ext->y + ext->z * ext->z);
    sx = Max_00126A80(Abs_00126A80(ext->x + ext->x), 0.01f);
    sy = Max_00126A80(Abs_00126A80(ext->y + ext->y), 0.01f);
    sz = Max_00126A80(Abs_00126A80(ext->z + ext->z), 0.01f);
    *vol = sz * sy * sx;
}

