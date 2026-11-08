/* 2 functions from 0x00120B20 to 0x001217F0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

static __forceinline float Min_00120B20(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_00120B20(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

extern float D_002B9348;
extern void **D_002B92F4;

struct S_0011F4B0_V4 { float x, y, z, w; };
struct V4p_00120FF0 : S_0011F4B0_V4 {
    V4p_00120FF0(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
};
struct S_001206E0_Tri { int pad0[2]; float t; short x, y, z; };
struct S_00120B20_Seg { S_0011F4B0_V4 a, b; };

void func_0011F0E0(void *a, void *b, void *c, void *indices, void **data);
void func_0011F540(S_0011F4B0_V4 *out, S_0011F4B0_V4 pos, float *m);
void func_00030A30(S_0011F4B0_V4 *out, S_0011F4B0_V4 v, float *m);
int func_0011FF30(S_0011F4B0_V4 *p, void *tri);
float func_0011F8E0(S_0011F4B0_V4 *a, S_0011F4B0_V4 *b, S_0011F4B0_V4 *c, S_0011F4B0_V4 *d);
void func_00030AC0(float *out, float *a, float *m);
void func_0001C680(S_0011F4B0_V4 *out, S_0011F4B0_V4 v, float *m);

extern S_0011F4B0_V4 D_002A3C3C[3];
extern S_0011F4B0_V4 D_002B9350[15];
extern float D_00275544;
void func_00030AC0(float *out, float *a, float *m);
void func_0001C680(S_0011F4B0_V4 *out, S_0011F4B0_V4 v, float *m);

extern S_0011F4B0_V4 D_002A3C3C[3];
extern S_0011F4B0_V4 D_002B9350[15];
extern S_0011F4B0_V4 D_002B9360, D_002B9370, D_002B9380, D_002B9390, D_002B93A0;
extern S_0011F4B0_V4 D_002B93B0, D_002B93C0, D_002B93D0, D_002B93E0, D_002B93F0;
extern S_0011F4B0_V4 D_002B9400, D_002B9410, D_002B9420, D_002B9430;
extern float D_00275544;

static inline void Cross_00120FF0(S_0011F4B0_V4 *a, S_0011F4B0_V4 *b, S_0011F4B0_V4 *out)
{
    _mm_storeu_ps(&out->x, _mm_shuffle_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(&a->x), _mm_shuffle_ps(_mm_loadu_ps(&b->x), _mm_loadu_ps(&b->x), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(&b->x), _mm_shuffle_ps(_mm_loadu_ps(&a->x), _mm_loadu_ps(&a->x), 0xc9))),
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(&a->x), _mm_shuffle_ps(_mm_loadu_ps(&b->x), _mm_loadu_ps(&b->x), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(&b->x), _mm_shuffle_ps(_mm_loadu_ps(&a->x), _mm_loadu_ps(&a->x), 0xc9))), 0xc9));
}
static __forceinline float Abs_00120FF0(float f) { int i = *(int *)&f & 0x7fffffff; return *(float *)&i; }
static __forceinline float Dot_00120FF0(S_0011F4B0_V4 *a, S_0011F4B0_V4 *b) { return a->y * b->y + a->x * b->x + a->z * b->z; }

int func_00120B20(S_001206E0_Tri *tri, S_00120B20_Seg *seg, float radius, int unused, float *m)
{
    S_0011F4B0_V4 e;
    S_0011F4B0_V4 n;
    S_0011F4B0_V4 d;
    S_0011F4B0_V4 v0;
    S_0011F4B0_V4 p;
    S_0011F4B0_V4 v1;
    S_0011F4B0_V4 v2;
    S_0011F4B0_V4 hit;
    float t, dist;
    int adist;

    n.x = tri->x * D_002B9348;
    n.y = tri->y * D_002B9348;
    n.z = tri->z * D_002B9348;
    p.x = p.y = p.z = 0.0f;
    p.w = 1.0f;
    d.x = d.y = d.z = 0.0f;
    d.w = 1.0f;
    v0.x = v0.y = v0.z = 0.0f;
    v0.w = 1.0f;
    v1.x = v1.y = v1.z = 0.0f;
    v1.w = 1.0f;
    v2.x = v2.y = v2.z = 0.0f;
    v2.w = 1.0f;
    func_0011F0E0(&v0, &v1, &v2, tri, D_002B92F4);
    func_0011F540(&p, seg->a, m);
    S_0011F4B0_V4 tmp = { seg->b.x - seg->a.x, seg->b.y - seg->a.y, seg->b.z - seg->a.z, 1.0f };
    func_00030A30(&d, tmp, m);
    t = -((n.x * p.x + n.y * p.y + n.z * p.z + tri->t) / (n.x * d.x + n.y * d.y + n.z * d.z));
    t = AsmMaxF(AsmMinF(t, 1.0f), 0.0f);
    hit.x = d.x * t + p.x;
    hit.y = d.y * t + p.y;
    hit.z = d.z * t + p.z;
    hit.w = 1.0f;
    dist = (hit.x - v0.x) * n.x + (hit.y - v0.y) * n.y + (hit.z - v0.z) * n.z;
    adist = *(int *)&dist & 0x7fffffff;
    if (*(float *)&adist < radius) {
        return 0;
    }
    n.x = hit.x - n.x * dist;
    n.y = hit.y - n.y * dist;
    n.z = hit.z - n.z * dist;
    n.w = 1.0f;
    if (func_0011FF30(&n, tri) != 0) {
        return 1;
    }
    e.x = v1.x - v0.x;
    e.y = v1.y - v0.y;
    e.z = v1.z - v0.z;
    e.w = 1.0f;
    if (func_0011F8E0(&p, &d, &v0, &e) < radius) {
        return 1;
    }
    e.x = v2.x - v1.x;
    e.y = v2.y - v1.y;
    e.z = v2.z - v1.z;
    e.w = 1.0f;
    if (func_0011F8E0(&p, &d, &v1, &e) < radius) {
        return 1;
    }
    e.x = v0.x - v2.x;
    e.y = v0.y - v2.y;
    e.z = v0.z - v2.z;
    e.w = 1.0f;
    if (func_0011F8E0(&p, &d, &v2, &e) >= radius) {
        return 0;
    }
    return 1;
}

int func_00120FF0(float *p0, float *extA, float *p1, float *extB, float *m)
{
    int i;
    int j;
    S_0011F4B0_V4 rows[3];
    S_0011F4B0_V4 d;
    S_0011F4B0_V4 e0, e1, e2;
    S_0011F4B0_V4 *ax;
    float dist, rA0, rA1, rA2, rB0, rB1, rB2;
    float sumA, sumB;

    func_00030AC0(p1, p1, m);
    for (i = 0; i < 3; i++) {
        rows[i].z = 0.0f;
        rows[i].y = 0.0f;
        rows[i].x = 0.0f;
        rows[i].w = 1.0f;
    }
    for (i = 0; i < 3; i++) {
        rows[i].z = 0.0f;
        rows[i].y = 0.0f;
        rows[i].x = 0.0f;
        rows[i].w = 1.0f;
    }
    e0 = V4p_00120FF0(extA[0], D_00275544, D_00275544);
    e1 = V4p_00120FF0(D_00275544, extA[1], D_00275544);
    e2 = V4p_00120FF0(D_00275544, D_00275544, extA[2]);
    rows[0] = V4p_00120FF0(extB[0], 0.0f, 0.0f);
    rows[1] = V4p_00120FF0(0.0f, extB[1], 0.0f);
    rows[2] = V4p_00120FF0(0.0f, 0.0f, extB[2]);
    func_0001C680(&rows[0], rows[0], m);
    func_0001C680(&rows[1], rows[1], m);
    func_0001C680(&rows[2], rows[2], m);
    d.x = p1[0] - p0[0];
    d.y = p1[1] - p0[1];
    d.z = p1[2] - p0[2];
    for (j = 0; j < 15; j++) {
        switch (j) {
        case 0:
            D_002B9350[0] = D_002A3C3C[0];
            break;
        case 1:
            D_002B9350[1] = D_002A3C3C[1];
            break;
        case 2:
            D_002B9350[2] = D_002A3C3C[2];
            break;
        case 3:
            D_002B9350[3] = V4p_00120FF0(m[0], m[4], m[8]);
            break;
        case 4:
            D_002B9350[4] = V4p_00120FF0(m[1], m[5], m[9]);
            break;
        case 5:
            D_002B9350[5] = V4p_00120FF0(m[2], m[6], m[10]);
            break;
        case 6:
            AsmVec3Cross(&D_002B9350[6].x, &D_002B9350[0].x, &D_002B9350[3].x);
            break;
        case 7:
            AsmVec3Cross(&D_002B9350[7].x, &D_002B9350[0].x, &D_002B9350[4].x);
            break;
        case 8:
            AsmVec3Cross(&D_002B9350[8].x, &D_002B9350[0].x, &D_002B9350[5].x);
            break;
        case 9:
            AsmVec3Cross(&D_002B9350[9].x, &D_002B9350[1].x, &D_002B9350[3].x);
            break;
        case 10:
            AsmVec3Cross(&D_002B9350[10].x, &D_002B9350[1].x, &D_002B9350[4].x);
            break;
        case 11:
            AsmVec3Cross(&D_002B9350[11].x, &D_002B9350[1].x, &D_002B9350[5].x);
            break;
        case 12:
            AsmVec3Cross(&D_002B9350[12].x, &D_002B9350[2].x, &D_002B9350[3].x);
            break;
        case 13:
            AsmVec3Cross(&D_002B9350[13].x, &D_002B9350[2].x, &D_002B9350[4].x);
            break;
        case 14:
            AsmVec3Cross(&D_002B9350[14].x, &D_002B9350[2].x, &D_002B9350[5].x);
            break;
        }
        ax = &D_002B9350[j];
        dist = Abs_00120FF0(Dot_00120FF0(&d, ax));
        rA0 = Abs_00120FF0(e0.x * ax->x + ax->y * D_00275544 + ax->z * D_00275544);
        rA1 = Abs_00120FF0(e1.y * ax->y + ax->x * D_00275544 + ax->z * D_00275544);
        rA2 = Abs_00120FF0(ax->y * D_00275544 + ax->x * D_00275544 + e2.z * ax->z);
        rB0 = Abs_00120FF0(Dot_00120FF0(&rows[0], ax));
        rB1 = Abs_00120FF0(Dot_00120FF0(&rows[1], ax));
        rB2 = Abs_00120FF0(Dot_00120FF0(&rows[2], ax));
        sumA = rA2 + rA1 + rA0;
        sumB = rB2 + rB1 + rB0;
        if (sumB + sumA < dist)
            return 0;
    }
    return 1;
}

