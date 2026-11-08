/* 10 functions from 0x00128930 to 0x00129930, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
struct C_00129900 {
    void func_00129900(void);
};

extern int D_002B92E4;
extern int D_002B92F4;
extern u32 D_002A3CD8;
extern u32 D_002A3CDC;
extern u32 D_002A3CE0;
extern u32 D_002A3CE4;
extern int D_00283F64;

/* vector initialised to (0, 0, 0, 1) */
struct S_00129050_Vec4 {
    float x, y, z, w;
    S_00129050_Vec4() {
        z = 0;
        y = 0;
        x = 0;
        w = 1.0f;
    }
};

struct S_00129050_Leaf32 {
    S_00129050_Vec4 v[2];
};

struct S_00129050_Leaf20 {
    int unk[5];
};

struct S_002B92E8 {
    void *nodes;
    S_00129050_Leaf32 *leaves;
};

struct S_002B9290 {
    void *nodes;
    S_00129050_Leaf20 *leaves;
};

extern S_002B92E8 *D_002B92E8;
extern S_002B9290 *D_002B9290;

struct S_001293F0_Vec4 { float x, y, z, w; };
struct S_001293F0_Vec3 { float x, y, z; };

/* tree node, 0x24 bytes, of D_002B92E8 / D_002B9290 ->nodes */
struct S_00129110_Node {
    float f0;
    float f4;
    unsigned short child0;
    unsigned short child1;
    float min[3];
    float max[3];
};

struct C_002B92A0 {
    void func_000264C0(int param_1);
};
extern C_002B92A0 D_002B92A0;
extern C_002B92A0 D_002B9300;

/* BoxCollisionObject (run-time type information), base class CollisionObject */
struct BoxCollisionObject {
    void *vtbl;
    char pad4[0x4C];
    int f50;
    char pad54[0x9C];
    u32 fF0, fF4, fF8, fFC;
    u32 f100, f104, f108, f10C;
    void func_00132EB0(int a0);
    BoxCollisionObject *func_00129840(int a0);
};


extern float D_002B9348;
extern float D_00275460;
extern int D_002B9344;

struct S_00128930_Leaf {
    char pad0[0xC];
    short sx;
    short sy;
    short sz;
};

struct S_00128930_Mat {
    float m[4][4];
};

/* accumulator of ray hits, D_002B92EC */
struct S_00128930_Hit {
    S_00129050_Vec4 v0;
    S_00129050_Vec4 v1;
    S_00129050_Vec4 v2;
    S_00129050_Vec4 v3;
    float minv[3];
    float padMin;
    float maxv[3];
    float padMax;
    S_00129050_Vec4 (*f70)[2];
    S_00129050_Vec4 *f74;
    S_00129050_Vec4 *f78;
    char pad7C[4];
    int count;
    int *f84;
    char pad88[4];
    float *f8C;
    short *f90;
    float t;
    unsigned char fl0 : 1;
    unsigned char fl1 : 1;
};

extern S_00128930_Hit *D_002B92EC;

/* func_00129510: builds the collision tree of a triangle mesh */
void *func_001E8AA5(int n);
void *func_001E8A44(int n);
void func_001E8390(void *p);
extern float D_00283F50;

struct S_00129510_V4 { float x, y, z, w; };

/* one triangle: vertex indices, plane normal, centroid, plane distance */
struct S_00129510_Tri {
    int i0, i1, i2;
    S_00129510_V4 normal;
    S_00129510_V4 center;
    int pad2C;
    float d;
};

struct S_00129510_Col {
    short r, g, b;
    S_00129510_Col *func_0001AF00(const void *v);
};

/* 0x14-byte leaf of the second table */
struct S_00129510_Leaf {
    short i0, i1, i2;
    short pad6;
    float d;
    S_00129510_Col col;
    short pad12;
};

struct S_00129510_V3z {
    float x, y, z;
    S_00129510_V3z() { z = 0; y = 0; x = 0; }
};

/* 0x24-byte tree node */
struct S_00129510_Node {
    float f0, f4;
    unsigned short child0, child1;
    S_00129510_V3z min;
    S_00129510_V3z max;
    static void *operator new[](unsigned int n) { return func_001E8A44(n); }
};

struct __declspec(align(16)) S_00129510_M44 {
    __m128 m[4];
};

void func_001619D0(S_00129510_V4 *a, S_00129510_V4 *b, S_00129510_V4 *c, S_00129510_V4 *out, float *d);
void func_0011AC30(S_00129510_M44 *out, S_00129510_M44 *in);
void func_0001C680(S_00129510_V4 *out, S_00129510_V4 v, S_00129510_M44 *m);
void func_00128630(S_00129510_Node *nodes, S_00129510_Tri *tris, int count, S_00129510_V4 *verts, int start, int *index);

static inline void Identity_00129510(S_00129510_M44 *p)
{
    float *f;

    p->m[0] = _mm_setzero_ps();
    p->m[1] = _mm_setzero_ps();
    p->m[2] = _mm_setzero_ps();
    p->m[3] = _mm_setzero_ps();
    f = (float *)p;
    f[0] = 1.0f;
    f[5] = 1.0f;
    f[10] = 1.0f;
    f[15] = 1.0f;
}

static inline void Xform_00129510(S_00129510_V4 *out, const S_00129510_M44 *mat, const S_00129510_V4 *v)
{
    __m128 t = _mm_loadu_ps(&v->x);
    _mm_storeh_pi((__m64 *)&out->z, t);
    out->w = 1.0f;
    t = _mm_loadh_pi(t, (__m64 *)&out->z);
    __m128 r0 = _mm_mul_ps(mat->m[0], t);
    __m128 r1 = _mm_mul_ps(mat->m[1], t);
    __m128 r2 = _mm_mul_ps(mat->m[2], t);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 junk;
    junk = _mm_movehl_ps(junk, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, junk);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&out->x, lo);
    out->w = 1.0f;
}

static __forceinline void Xform_00128930(S_00129050_Vec4 *out, const S_00128930_Mat *mat, const float *v)
{
    __m128 t = _mm_loadu_ps(v);
    _mm_storeh_pi((__m64 *)&out->z, t);
    out->w = 1.0f;
    t = _mm_loadh_pi(t, (__m64 *)&out->z);
    __m128 r0 = _mm_mul_ps(_mm_load_ps(mat->m[0]), t);
    __m128 r1 = _mm_mul_ps(_mm_load_ps(mat->m[1]), t);
    __m128 r2 = _mm_mul_ps(_mm_load_ps(mat->m[2]), t);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 junk;
    junk = _mm_movehl_ps(junk, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, junk);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&out->x, lo);
    out->w = 1.0f;
}

static __forceinline float Sqrt_00128930(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }
static __forceinline float Min_00128930(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_00128930(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

#pragma optimize("y", off)
int func_00128930(S_00128930_Leaf *leaf, float *seg, short id, S_00128930_Mat *mat)
{
    int func_00030AC0(...);
    int func_00125540(S_00128930_Leaf *l, S_00129050_Vec4 dir, S_00129050_Vec4 org, float len, S_00129050_Vec4 *b, S_00129050_Vec4 *a, float *t);
    S_00128930_Hit *h = D_002B92EC;
    S_00129050_Vec4 hitB;
    S_00129050_Vec4 hitA;
    S_00129050_Vec4 q[2];
    S_00129050_Vec4 d;
    S_00129050_Vec4 dn;
    float sx, sy, sz;
    float t;
    float len;
    float inv;
    float u;
    float k;
    int i;
    int found;
    sx = (float)leaf->sx * D_002B9348;
    sy = (float)leaf->sy * D_002B9348;
    sz = (float)leaf->sz * D_002B9348;
    AsmTransformPoint(&q[0].x, seg, &mat->m[0][0]);
    func_00030AC0(&q[1], seg + 4, mat);
    d.x = q[1].x - q[0].x;
    d.y = q[1].y - q[0].y;
    d.z = q[1].z - q[0].z;
    t = -1.0f;
    len = AsmSqrtF(d.z * d.z + d.y * d.y + d.x * d.x);
    inv = D_00275460 / len;
    dn.x = d.x * inv;
    dn.y = d.y * inv;
    dn.z = d.z * inv;
    if (!func_00125540(leaf, dn, q[0], len, &hitB, &hitA, &t)) return 0;
    if (h == 0) return 1;
    if (h->f70 != 0) {
        i = 0; found = 0;
        if (0 < h->count) {
            do {
                if (found) break;
                if (h->f90[i] == id) found = 1; else i++;
            } while (i < h->count);
        }
        if (found) {
            if (t < h->f8C[i]) {
                h->f84[i] = 0; h->f8C[i] = t; h->f78[i] = hitB; h->f74[i] = hitA;
            }
        } else {
            h->f84[h->count] = 0; h->f8C[h->count] = t; h->f90[h->count] = id;
            h->f70[h->count][0] = *(S_00129050_Vec4 *)seg;
            h->f70[h->count][1] = *(S_00129050_Vec4 *)(seg + 4);
            h->f78[h->count] = hitB;
            u = D_00275460 - t;
            h->f74[h->count] = hitA;
            h->count++;
            k = dn.z * len * u * sz + len * dn.x * u * sx + dn.y * len * u * sy;
            sx = sx * k; sy = sy * k; sz = sz * k;
            {
                float m0 = h->minv[0];
                h->minv[0] = AsmMinF(sx, m0);
            }
            {
                float m1 = h->minv[1];
                h->minv[1] = AsmMinF(sy, m1);
            }
            {
                float m2 = h->minv[2];
                h->minv[2] = AsmMinF(sz, m2);
            }
            {
                float m0 = h->maxv[0];
                h->maxv[0] = AsmMaxF(sx, m0);
            }
            {
                float m1 = h->maxv[1];
                h->maxv[1] = AsmMaxF(sy, m1);
            }
            {
                float m2 = h->maxv[2];
                h->maxv[2] = AsmMaxF(sz, m2);
            }
        }
        if (t <= h->t) {
            h->fl0 = 0; h->t = t;
            h->v0 = *(S_00129050_Vec4 *)seg;
            h->v1 = *(S_00129050_Vec4 *)(seg + 4);
            h->v3 = hitB; h->v2 = hitA;
            h->fl1 = (*(int *)(D_002B92F4 + 4) != 0 && D_002B9344 != 0);
        }
    } else {
        if (t < h->t) {
            h->t = t; h->v2 = hitA;
            h->fl1 = (*(int *)(D_002B92F4 + 4) != 0 && D_002B9344 != 0);
        }
    }
    return 1;
}

int func_00129050(unsigned int a0, unsigned int a1)
{
    int func_00128930(...);

    switch (D_002B92E4) {
    case 1: {
        S_00129050_Leaf20 *leaf = &D_002B9290->leaves[a1 & 0x7fff];
        S_00129050_Vec4 local[2];
        S_00129050_Leaf32 *src = &D_002B92E8->leaves[a0 & 0x7fff];
        local[0] = src->v[0];
        local[1] = src->v[1];
        return func_00128930(leaf, local, a0, &D_002B9300);
    }
    }
    return 0;
}

extern "C" int func_00122400(float *pa, float *pb, float *pos, float f, float radius, void *m);
int func_001236A0(unsigned short a0, unsigned short a1);
#pragma optimize("y", off)
int func_00129110(unsigned short a0, unsigned short a1)
{
    unsigned int aLeaf = a0 & 0x8000;
    unsigned int bLeaf = a1 & 0x8000;
    S_00129110_Node *na;
    S_00129110_Node *nb;
    int r;

    if (aLeaf) {
        if (bLeaf) {
            return ((int (*)(unsigned short, unsigned short))func_00129050)(a0, a1);
        }
    } else if (!bLeaf) {
        float aMin[4];
        float bMin[4];
        float aMax[4];
        float bMax[4];

        na = &((S_00129110_Node *)D_002B92E8->nodes)[a0];
        nb = &((S_00129110_Node *)D_002B9290->nodes)[a1];
        aMin[0] = na->min[0];
        aMin[1] = na->min[1];
        aMin[2] = na->min[2];
        aMin[3] = 1.0f;
        aMax[0] = na->max[0];
        aMax[1] = na->max[1];
        aMax[2] = na->max[2];
        bMin[0] = nb->min[0];
        bMin[1] = nb->min[1];
        bMin[2] = nb->min[2];
        bMin[3] = 1.0f;
        bMax[0] = nb->max[0];
        bMax[1] = nb->max[1];
        bMax[2] = nb->max[2];
        aMax[3] = 1.0f;
        bMax[3] = 1.0f;
        if (func_00122400(aMin, aMax, bMin, nb->f4, nb->f4 * nb->f4, &D_002B92A0)) {
            if (func_00122400(bMin, bMax, aMin, na->f4, na->f4 * na->f4, &D_002B9300)) {
                r = 0;
                if (na->f0 > nb->f0) {
                    if (func_00129110(na->child0, a1)) {
                        r = 1;
                    }
                    if (func_00129110(na->child1, a1)) {
                        r = 1;
                    }
                } else {
                    if (func_00129110(a0, nb->child0)) {
                        r = 1;
                    }
                    if (func_00129110(a0, nb->child1)) {
                        r = 1;
                    }
                }
                return r;
            }
        }
        return 0;
    }
    if (func_001236A0(a0, a1)) {
        int hit;
        if (aLeaf) {
            hit = 0;
            nb = &((S_00129110_Node *)D_002B9290->nodes)[a1];
            if (func_00129110(a0, nb->child0)) {
                hit = 1;
            }
            if (func_00129110(a0, nb->child1)) {
                hit = 1;
            }
        } else {
            hit = 0;
            na = &((S_00129110_Node *)D_002B92E8->nodes)[a0];
            if (func_00129110(na->child0, a1)) {
                hit = 1;
            }
            if (func_00129110(na->child1, a1)) {
                hit = 1;
            }
        }
        return hit;
    }
    return 0;
}
#pragma optimize("y", on)

#pragma optimize("y", on)

#pragma optimize("y", off)
void func_00129350(int a0, int a1, S_002B92E8 *a2, S_002B9290 *a3, int a4, int a5, int a6, int a7)
{
    int func_0011AC30(...);
    int func_0011ACC0(...);
    int func_00129110(...);
    D_002B92F4 = a7;
    D_002B92E4 = a6;
    D_002B92A0.func_000264C0(a4);
    func_0011AC30(&D_002B92A0, &D_002B92A0);
    func_0011ACC0(&D_002B92A0, a5, &D_002B92A0);
    D_002B9300.func_000264C0(a5);
    func_0011AC30(&D_002B9300, &D_002B9300);
    func_0011ACC0(&D_002B9300, a4, &D_002B9300);
    D_002B92E8 = a2;
    D_002B9290 = a3;
    func_00129110(a0, a1);
}

#pragma optimize("y", on)
int func_001293F0(int a0, unsigned short a1, S_002B92E8 *a2, int a3)
{
    int func_00128930(...);
    int func_00122090(...);
    if (a1 & 0x8000) {
        S_00129050_Leaf20 *leaf = &((S_002B9290 *)a2)->leaves[a1 & 0x7fff];
        return func_00128930(leaf, a0, 0, a3);
    }
    S_00129110_Node *node = &((S_00129110_Node *)a2->nodes)[a1];
    S_001293F0_Vec4 l0, l1;
    unsigned x = ((unsigned *)node->min)[0], y = ((unsigned *)node->min)[1], z = ((unsigned *)node->min)[2];
    ((unsigned *)&l0)[0] = x;
    l1.x = node->max[0];
    ((unsigned *)&l0)[1] = y;
    l1.y = node->max[1];
    ((unsigned *)&l0)[2] = z;
    l1.z = node->max[2];
    l0.w = 1.0f;
    l1.w = 1.0f;
    if (func_00122090(&l0, &l1, a0, a0 + 16, a3)) {
        int r = func_001293F0(a0, node->child0, a2, a3);
        int r2 = func_001293F0(a0, node->child1, a2, a3);
        return r2 ? 1 : r;
    }
    return 0;
}

void func_001294E0(int a0, int a1, int a2, int a3, int a4) {
    extern int D_002B92F4;
    int func_001293F0(...);
    D_002B92F4 = a4;
    func_001293F0(a0, a1, a2, a3);
}

void func_00129510(S_00129510_Node **a0, S_00129510_Leaf **a1, S_00129510_M44 *m, S_00129510_V4 *verts, int *tris, int ntri, int nverts)
{
    S_00129510_Tri *t;
    S_00129510_M44 inv;
    S_00129510_Node *nodes;
    S_00129510_Col c;
    S_00129510_V4 s;
    S_00129510_V4 r;
    S_00129510_V4 a;
    S_00129510_V4 *vin;
    S_00129510_V4 *vout;
    S_00129510_M44 *vm;
    int idx;
    int i;

    t = (S_00129510_Tri *)func_001E8AA5(ntri * 0x34);
    for (i = 0; i < ntri; i++) {
        t[i].i0 = tris[i * 3];
        t[i].i1 = tris[i * 3 + 1];
        t[i].i2 = tris[i * 3 + 2];
        func_001619D0(&verts[tris[i * 3]], &verts[tris[i * 3 + 1]], &verts[tris[i * 3 + 2]], &t[i].normal, &t[i].d);
    }
    AsmIdentityMatrix(m);
    inv = *m;
    func_0011AC30(&inv, &inv);
    for (i = 0; i < nverts; i++) {
        vin = &verts[i];
        vout = &verts[i];
        vm = &inv;
        AsmTransformPoint((float *)vout, (const float *)vin, (const float *)vm);
    }
    for (i = 0; i < ntri; i++) {
        func_0001C680(&t[i].normal, t[i].normal, &inv);
        S_00129510_V4 *v0 = &verts[t[i].i0];
        S_00129510_V4 *v1 = &verts[t[i].i1];
        a.x = v1->x + v0->x;
        a.y = v0->y + v1->y;
        a.z = v0->z + v1->z;
        S_00129510_V4 *v2 = &verts[t[i].i2];
        s.x = a.x + v2->x;
        s.y = a.y + v2->y;
        s.z = a.z + v2->z;
        r.x = s.x * (1.0f / 3.0f);
        r.y = s.y * (1.0f / 3.0f);
        r.z = s.z * (1.0f / 3.0f);
        r.w = 1.0f;
        t[i].center = r;
    }
    nodes = new S_00129510_Node[ntri];
    *a0 = nodes;
    *a1 = (S_00129510_Leaf *)func_001E8A44(ntri * 0x14);
    idx = 0;
    func_00128630(*a0, t, ntri, verts, 0, &idx);
    for (i = 0; i < ntri; i++) {
        (*a1)[i].i0 = (short)t[i].i0;
        (*a1)[i].i1 = (short)t[i].i1;
        (*a1)[i].i2 = (short)t[i].i2;
        (*a1)[i].d = t[i].d;
        (*a1)[i].col = *c.func_0001AF00(&t[i].normal);
    }
    func_001E8390(t);
}

BoxCollisionObject *BoxCollisionObject::func_00129840(int a0)
{
    u32 *p;

    func_00132EB0(a0);
    vtbl = (void *)&D_00283F64;
    p = &fF0;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f100;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    fF0 = D_002A3CD8;
    fF4 = D_002A3CDC;
    fF8 = D_002A3CE0;
    fFC = D_002A3CE4;
    f100 = D_002A3CD8;
    f104 = D_002A3CDC;
    f108 = D_002A3CE0;
    f10C = D_002A3CE4;
    f50 = 6;
    return this;
}

void C_00129900::func_00129900(void)
{
  int func_001E891B(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x54) != 0) {
    func_001E891B(*(int *)(in_ECX + 0x54));
    *(undefined4 *)(in_ECX + 0x54) = 0;
  }
  return;
}

void func_00129920(void) {
    int func_00133020(...);
    func_00133020();
}
