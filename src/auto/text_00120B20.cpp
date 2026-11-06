/* 2 functions from 0x00120B20 to 0x001217F0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

static __forceinline float Min_00120B20(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_00120B20(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

extern float D_002B9348;
extern void **D_002B92F4;

struct S_0011F4B0_V4 { float x, y, z, w; };
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
extern float D_00275544;

static inline void Cross_00120FF0(S_0011F4B0_V4 *a, S_0011F4B0_V4 *b, S_0011F4B0_V4 *out)
{
    float x = a->y * b->z - a->z * b->y;
    float y = a->z * b->x - a->x * b->z;
    float z = a->x * b->y - a->y * b->x;
    out->x = x;
    out->y = y;
    out->z = z;
    out->w = 0.0f;
}
static __forceinline float Abs_00120FF0(float f) { int i = *(int *)&f & 0x7fffffff; return *(float *)&i; }
static __forceinline float Dot_00120FF0(S_0011F4B0_V4 *a, S_0011F4B0_V4 *b) { return a->y * b->y + a->x * b->x + a->z * b->z; }

int func_00120B20(S_001206E0_Tri *tri, S_00120B20_Seg *seg, float radius, int unused, float *m)
{
    S_0011F4B0_V4 n;
    S_0011F4B0_V4 d;
    S_0011F4B0_V4 v0;
    S_0011F4B0_V4 p;
    S_0011F4B0_V4 v1;
    S_0011F4B0_V4 v2;
    S_0011F4B0_V4 tmp;
    S_0011F4B0_V4 proj;
    S_0011F4B0_V4 e;
    float hx, hy, hz, t, dist;
    int adist;

    n.x = tri->x * D_002B9348;
    n.y = tri->y * D_002B9348;
    n.z = tri->z * D_002B9348;
    d.x = 0.0f; d.y = 0.0f; d.z = 0.0f; d.w = 1.0f;
    v0.x = 0.0f; v0.y = 0.0f; v0.z = 0.0f; v0.w = 1.0f;
    p.x = 0.0f; p.y = 0.0f; p.z = 0.0f; p.w = 1.0f;
    v1.x = 0.0f; v1.y = 0.0f; v1.z = 0.0f; v1.w = 1.0f;
    v2.x = 0.0f; v2.y = 0.0f; v2.z = 0.0f; v2.w = 1.0f;
    func_0011F0E0(&v0, &v1, &v2, tri, D_002B92F4);
    func_0011F540(&p, seg->a, m);
    tmp.x = seg->b.x - seg->a.x;
    tmp.y = seg->b.y - seg->a.y;
    tmp.z = seg->b.z - seg->a.z;
    tmp.w = 1.0f;
    func_00030A30(&d, tmp, m);
    t = -((n.x * p.x + n.y * p.y + n.z * p.z + tri->t) / (n.x * d.x + n.y * d.y + n.z * d.z));
    t = Max_00120B20(Min_00120B20(t, 1.0f), 0.0f);
    hx = d.x * t + p.x;
    hy = d.y * t + p.y;
    hz = d.z * t + p.z;
    dist = (hx - v0.x) * n.x + (hy - v0.y) * n.y + (hz - v0.z) * n.z;
    adist = *(int *)&dist & 0x7fffffff;
    if (*(float *)&adist < radius) {
        return 0;
    }
    proj.x = hx - n.x * dist;
    proj.y = hy - n.y * dist;
    proj.z = hz - n.z * dist;
    proj.w = 1.0f;
    if (func_0011FF30(&proj, tri) != 0) {
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
    S_0011F4B0_V4 rows[3];
    S_0011F4B0_V4 d;
    S_0011F4B0_V4 *ax;
    float ea0, ea1, ea2;
    float dist, rA0, rA1, rA2, rB0, rB1, rB2;
    int i;

    func_00030AC0(p1, p1, m);
    for (i = 0; i < 3; i++) {
        rows[i].x = 0.0f;
        rows[i].y = 0.0f;
        rows[i].z = 0.0f;
        rows[i].w = 1.0f;
    }
    for (i = 0; i < 3; i++) {
        rows[i].x = 0.0f;
        rows[i].y = 0.0f;
        rows[i].z = 0.0f;
        rows[i].w = 1.0f;
    }
    ea0 = extA[0];
    ea1 = extA[1];
    ea2 = extA[2];
    rows[0].x = extB[0];
    rows[0].y = 0.0f;
    rows[0].z = 0.0f;
    rows[0].w = 1.0f;
    rows[1].x = 0.0f;
    rows[1].y = extB[1];
    rows[1].z = 0.0f;
    rows[1].w = 1.0f;
    rows[2].x = 0.0f;
    rows[2].y = 0.0f;
    rows[2].z = extB[2];
    rows[2].w = 1.0f;
    func_0001C680(&rows[0], rows[0], m);
    func_0001C680(&rows[1], rows[1], m);
    func_0001C680(&rows[2], rows[2], m);
    d.x = p1[0] - p0[0];
    d.y = p1[1] - p0[1];
    d.z = p1[2] - p0[2];
    for (i = 0; i < 15; i++) {
        switch (i) {
        case 0:
            D_002B9350[0] = D_002A3C3C[0];
            break;
        case 1:
            D_002B9350[1] = D_002A3C3C[1];
            break;
        case 2:
            D_002B9350[2] = D_002A3C3C[2];
            break;
        case 3: {
            S_0011F4B0_V4 t = { m[0], m[4], m[8], 1.0f };
            D_002B9350[3] = t;
            break;
        }
        case 4: {
            S_0011F4B0_V4 t = { m[1], m[5], m[9], 1.0f };
            D_002B9350[4] = t;
            break;
        }
        case 5: {
            S_0011F4B0_V4 t = { m[2], m[6], m[10], 1.0f };
            D_002B9350[5] = t;
            break;
        }
        case 6:
            Cross_00120FF0(&D_002B9350[0], &D_002B9350[3], &D_002B9350[6]);
            break;
        case 7:
            Cross_00120FF0(&D_002B9350[0], &D_002B9350[4], &D_002B9350[7]);
            break;
        case 8:
            Cross_00120FF0(&D_002B9350[0], &D_002B9350[5], &D_002B9350[8]);
            break;
        case 9:
            Cross_00120FF0(&D_002B9350[1], &D_002B9350[3], &D_002B9350[9]);
            break;
        case 10:
            Cross_00120FF0(&D_002B9350[1], &D_002B9350[4], &D_002B9350[10]);
            break;
        case 11:
            Cross_00120FF0(&D_002B9350[1], &D_002B9350[5], &D_002B9350[11]);
            break;
        case 12:
            Cross_00120FF0(&D_002B9350[2], &D_002B9350[3], &D_002B9350[12]);
            break;
        case 13:
            Cross_00120FF0(&D_002B9350[2], &D_002B9350[4], &D_002B9350[13]);
            break;
        case 14:
            Cross_00120FF0(&D_002B9350[2], &D_002B9350[5], &D_002B9350[14]);
            break;
        }
        ax = &D_002B9350[i];
        dist = Abs_00120FF0(Dot_00120FF0(&d, ax));
        rA0 = Abs_00120FF0(ea0 * ax->x + ax->y * D_00275544 + ax->z * D_00275544);
        rA1 = Abs_00120FF0(ea1 * ax->y + ax->x * D_00275544 + ax->z * D_00275544);
        rA2 = Abs_00120FF0(ax->y * D_00275544 + ax->x * D_00275544 + ea2 * ax->z);
        rB0 = Abs_00120FF0(Dot_00120FF0(&rows[0], ax));
        rB1 = Abs_00120FF0(Dot_00120FF0(&rows[1], ax));
        rB2 = Abs_00120FF0(Dot_00120FF0(&rows[2], ax));
        if (rB2 + rB1 + rB0 + (rA2 + rA1 + rA0) < dist)
            return 0;
    }
    return 1;
}

