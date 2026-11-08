/* 4 functions from 0x0019DEF0 to 0x0019EEC0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

struct V4_0019DEF0 {
    float x, y, z, w;
    V4_0019DEF0() { x = y = z = 0.0f; w = 1.0f; }
    V4_0019DEF0(float ax, float ay, float az, float aw = 1.0f) { x = ax; y = ay; z = az; w = aw; }
};

struct __declspec(align(16)) M_0019DEF0 { __m128 m[4]; };

static __forceinline void Xform_0019DEF0(V4_0019DEF0 * volatile out, const M_0019DEF0 * volatile mat, const V4_0019DEF0 * volatile v)
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

static __forceinline void Copy_0019DEF0(M_0019DEF0 * volatile dst, const M_0019DEF0 * volatile src)
{
    const M_0019DEF0 *s = src;
    __m128 r0 = s->m[0], r1 = s->m[1], r2 = s->m[2], r3 = s->m[3];
    M_0019DEF0 *d = dst;
    d->m[0] = r0; d->m[1] = r1; d->m[2] = r2; d->m[3] = r3;
}

static inline float Abs_0019DEF0(float f) { int i = *(int *)&f & 0x7fffffff; return *(float *)&i; }

struct Bone_0019DEF0 {
    float pad0[3];
    V4_0019DEF0 *pad;
};
struct Shape_0019DEF0 { char pad0[0xc]; float cx, cy, cz; float ex, ey, ez; };
struct Obj_0019DEF0 { char pad0[0xb0]; M_0019DEF0 xf; char padF0[0xd4]; Shape_0019DEF0 *f1c4; };

struct C_0019DEF0 {
    char pad0[0xa8];
    V4_0019DEF0 center;
    V4_0019DEF0 extent;
    V4_0019DEF0 oldCenter;
    V4_0019DEF0 oldExtent;
    char padE8[0x48];
    M_0019DEF0 xf;
    char pad170[0x20];
    int count;
    int *active;
    int *f198;
    void *f19c;
    Obj_0019DEF0 **objs;
    void func_0019DEF0(void);
};

void func_0011AC30(M_0019DEF0 *out, M_0019DEF0 *in);
V4_0019DEF0 func_0001C680(V4_0019DEF0 v, M_0019DEF0 *m);
V4_0019DEF0 func_0019D9A0(V4_0019DEF0 *a, V4_0019DEF0 *b);
V4_0019DEF0 func_0019DA10(V4_0019DEF0 *a, V4_0019DEF0 *b);

struct S_0019EB10_Node {
    char pad0[0x170];
    S_0019EB10_Node *f170;
    int func_00198270(void);
    void func_001982A0(int *count, S_0019EB10_Node **list);
};

struct S_0019EB10_Loader {
    void func_0013C8A0(int h, void *buf, int size, int count);
};

struct S_0019EB10_Vec3 {
    int x, y, z;
};

struct S_0019EB10_Mat {
    char pad0[0x40];
    void func_000264C0(void *src);
};

struct S_0019EB10_Obj {
    char pad0[0xf0];
    S_0019EB10_Mat fF0;
    char pad130[0x80];
    S_0019EB10_Vec3 f1b0;
    short f1bc;
    char pad1be[2];
    S_0019EB10_Node *f1c0;
    int f1c4;
    int f1c8;
    short f1cc;
    short f1ce;
    char pad1d0[4];
    int f1d4;
    S_0019EB10_Obj *func_0019B700(int a);
    void func_0019CCE0(int h);
};

struct S_0019EB10_Sub {
    char pad0[8];
    int f8;
    int *fC;
    int *f10;
    int *f14;
    int *f18;
    S_0019EB10_Vec3 *f1c;
    S_0019EB10_Mat *f20;
    int *f24;
    short *f28;
    int f2c;
};

struct C_0019EB10 {
    char pad0[0x190];
    int f190;
    int *f194;
    int *f198;
    S_0019EB10_Node *f19c;
    S_0019EB10_Obj **f1a0;
    S_0019EB10_Sub *f1a4;
    void func_0019EB10(int h);
    void func_0019ECB0(S_0019EB10_Node *root, S_0019EB10_Sub *d);
};

struct SoultreeHierarchyCollisionObject {
    char pad0[0xa8];
    float fA8[4];
    float fB8;
    float fBC;
    float fC0;
    char padC4[0x6c];
    float f130[16];
    void func_0019E860(float *m, float *ext);
};

struct V4_0019E860 {
    float x, y, z, w;
    V4_0019E860() { x = y = z = 0.0f; w = 1.0f; }
    V4_0019E860(float ax, float ay, float az, float aw) { x = ax; y = ay; z = az; w = aw; }
};

static inline float fabs_0019E860(float f)
{
    union { float f; int i; } u;
    u.f = f;
    u.i &= 0x7fffffff;
    return u.f;
}

extern S_0019EB10_Loader *D_002BEAAC;
void *func_001E8A44(int size);
void *func_001E8AA5(int size);
void func_001E891B(void *p);

static inline S_0019EB10_Node **alloc_node_list_0019ECB0(int bytes)
{
    return (S_0019EB10_Node **)func_001E8A44(bytes);
}

void func_00030AC0(float *out, float *v, float *m);
void func_0001C680(V4_0019E860 *out, V4_0019E860 v, float *m);
void C_0019DEF0::func_0019DEF0(void)
{
    int pad0 = 0, pad1 = 0;
    oldCenter = center;
    oldExtent = extent;
    M_0019DEF0 inv;
    AsmCopyMatrix(&inv, &xf);
    func_0011AC30(&inv, &inv);
    V4_0019DEF0 vmin, vmax;
    int i;
    for (i = 0; i < count; i++) {
        if (active[i] == 0)
            continue;
        Obj_0019DEF0 *o = objs[i];
        V4_0019DEF0 axes[3];
        Shape_0019DEF0 *s = o->f1c4;
        float ex = s->ex, ey = s->ey, ez = s->ez;
        axes[0] = V4_0019DEF0(ex, 0.0f, 0.0f);
        axes[1] = V4_0019DEF0(0.0f, ey, 0.0f);
        axes[2] = V4_0019DEF0(0.0f, 0.0f, ez);
        axes[0] = func_0001C680(axes[0], &o->xf);
        axes[0] = func_0001C680(axes[0], &inv);
        axes[1] = func_0001C680(axes[1], &o->xf);
        axes[1] = func_0001C680(axes[1], &inv);
        axes[2] = func_0001C680(axes[2], &o->xf);
        axes[2] = func_0001C680(axes[2], &inv);
        V4_0019DEF0 ext;
        ext.x = Abs_0019DEF0(axes[2].x) + Abs_0019DEF0(axes[1].x) + Abs_0019DEF0(axes[0].x);
        ext.y = Abs_0019DEF0(axes[2].y) + Abs_0019DEF0(axes[1].y) + Abs_0019DEF0(axes[0].y);
        ext.z = Abs_0019DEF0(axes[2].z) + Abs_0019DEF0(axes[1].z) + Abs_0019DEF0(axes[0].z);
        V4_0019DEF0 p;
        V4_0019DEF0 c(s->cx, s->cy, s->cz);
        AsmTransformPoint(&p.x, &c.x, (float *)&o->xf);
        AsmTransformPoint(&p.x, &p.x, (float *)&inv);
        if (i != 0) {
            V4_0019DEF0 lo(p.x - ext.x, p.y - ext.y, p.z - ext.z);
            vmin = func_0019D9A0(&vmin, &lo);
            V4_0019DEF0 hi(p.x + ext.x, p.y + ext.y, p.z + ext.z);
            vmax = func_0019DA10(&vmax, &hi);
        } else {
            vmin = V4_0019DEF0(p.x - ext.x, p.y - ext.y, p.z - ext.z);
            vmax = V4_0019DEF0(p.x + ext.x, p.y + ext.y, p.z + ext.z);
        }
        pad0 += i; pad1 += pad0;
    }
    center = V4_0019DEF0((vmax.x + vmin.x) * 0.5f, (vmax.y + vmin.y) * 0.5f, (vmax.z + vmin.z) * 0.5f);
    extent = V4_0019DEF0((vmax.x - vmin.x) * 0.5f, (vmax.y - vmin.y) * 0.5f, (vmax.z - vmin.z) * 0.5f);
    (void)pad1;
}

void SoultreeHierarchyCollisionObject::func_0019E860(float *m, float *ext)
{
    SoultreeHierarchyCollisionObject * volatile self = this;
    SoultreeHierarchyCollisionObject *p;
    float r[8];
    V4_0019E860 v[3];
    p = self;
    V4_0019E860 a(p->fB8, 0.0f, 0.0f, 1.0f);
    v[0] = a;
    v[1] = V4_0019E860(0.0f, p->fBC, 0.0f, 1.0f);
    v[2] = V4_0019E860(0.0f, 0.0f, p->fC0, 1.0f);
    func_00030AC0(m, p->fA8, p->f130);
    func_0001C680(&v[0], a, self->f130);
    func_0001C680(&v[1], v[1], self->f130);
    func_0001C680(&v[2], v[2], self->f130);
    r[0] = fabs_0019E860(v[2].x); r[1] = fabs_0019E860(v[1].x); r[2] = fabs_0019E860(v[0].x);
    ext[0] = r[0] + r[1] + r[2];
    r[0] = fabs_0019E860(v[2].y); r[1] = fabs_0019E860(v[1].y); r[2] = fabs_0019E860(v[0].y);
    ext[1] = r[0] + r[1] + r[2];
    r[0] = fabs_0019E860(v[2].z); r[1] = fabs_0019E860(v[1].z); r[2] = fabs_0019E860(v[0].z);
    ext[2] = r[0] + r[1] + r[2];
}

void C_0019EB10::func_0019EB10(int h)
{
    struct { S_0019EB10_Node **list; int count; int dummy; } c;
    void *mem;
    S_0019EB10_Obj *obj;
    long i;
    S_0019EB10_Node *node;
    int fh;

    node = f19c;
    while (node->f170 != 0) {
        node = node->f170;
    }
    *c.list = node;
    c.list = (S_0019EB10_Node **)func_001E8A44(node->func_00198270() * 4);
    c.count = 1;
    node->func_001982A0(&c.count, c.list);
    fh = h;
    D_002BEAAC->func_0013C8A0(fh, &f190, 4, 1);
    D_002BEAAC->func_0013C8A0(fh, &c.dummy, 4, 1);
    f1a0 = (S_0019EB10_Obj **)func_001E8AA5(f190 * 4);
    f194 = (int *)func_001E8A44(f190 * 4);
    f198 = (int *)func_001E8A44(f190 * 4);
    f1a4->f24 = (int *)func_001E8AA5(f190 * 4);
    for (i = 0; i < f190; i++) {
        D_002BEAAC->func_0013C8A0(fh, &h, 4, 1);
        mem = func_001E8A44(0x1e0);
        obj = mem != 0 ? ((S_0019EB10_Obj *)mem)->func_0019B700(1) : 0;
        f1a0[i] = obj;
        f1a0[i]->f1c0 = c.list[h];
        f1a0[i]->func_0019CCE0(fh);
        f1a0[i]->f1d4 = 0;
        f194[i] = 1;
        f1a4->f24[i] = h;
    }
    func_001E891B(c.list);
}

void C_0019EB10::func_0019ECB0(S_0019EB10_Node *root, S_0019EB10_Sub *d)
{
    S_0019EB10_Node **list;
    S_0019EB10_Node *node;
    S_0019EB10_Sub *dd;
    int count;
    int i;
    void *mem;
    S_0019EB10_Obj *obj;

    f19c = root;
    node = root;
    if (node->f170 != 0) {
        do {
            node = node->f170;
        } while (node->f170 != 0);
    }
    mem = func_001E8A44(node->func_00198270() * 4);
    list = (S_0019EB10_Node **)mem;
    count = 1;
    *list = node;
    node->func_001982A0(&count, list);
    dd = d;
    f190 = d->f8;
    f1a0 = (S_0019EB10_Obj **)func_001E8AA5(f190 * 4);
    f194 = (int *)func_001E8A44(f190 * 4);
    f198 = (int *)func_001E8A44(f190 * 4);
    i = 0;
    if (f190 > 0) {
        d = 0;
        root = 0;
        do {
            mem = func_001E8A44(0x1e0);
            obj = mem != 0 ? ((S_0019EB10_Obj *)mem)->func_0019B700(1) : 0;
            f1a0[i] = obj;
            f1a0[i]->f1c0 = list[dd->f24[i]];
            f194[i] = 1;
            f1a0[i]->f1c4 = dd->f14[i];
            f1a0[i]->f1c8 = dd->f18[i];
            f1a0[i]->f1cc = (short)dd->fC[i];
            f1a0[i]->f1ce = (short)dd->f10[i];
            f1a0[i]->f1b0 = *(S_0019EB10_Vec3 *)((char *)dd->f1c + (int)root);
            f1a0[i]->fF0.func_000264C0((char *)dd->f20 + (int)d);
            f1a0[i]->f1bc = dd->f28[i];
            i++;
            root = (S_0019EB10_Node *)((char *)root + 0xc);
            d = (S_0019EB10_Sub *)((char *)d + 0x40);
        } while (i < f190);
    }
    f1a4 = dd;
    dd->f2c++;
    func_001E891B(list);
}

