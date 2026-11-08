/* 6 functions from 0x0017F2B0 to 0x001800A0, found by Ghidra. */
#include "common.h"

struct C_00199C20 {
    void func_00199C20(int a, void *out);
};

struct __declspec(align(16)) S_Matrix16 {
    f32 m[16];
};

void func_00030AC0(float *out, float *v, float *m);

struct Vec4_0017F2B0 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

#include <xmmintrin.h>
#include "asm_helpers.h"

/* two-pointer tree header (nodes, leaves), as func_00129350 and func_00123C80 take it */
struct S_0017F550_Pair {
    int nodes;
    int leaves;
};

/* shape tested by C_0017F2B0::func_0017F550 */
struct S_0017F550_Shape {
    char pad0[0x50];
    int f50;
    char pad54[0x54];
    char fA8[8];
    float mB0[16];
    char fF0[0x10];
    int f100;
    int f104;
    char pad108[0x88];
    int f190;
    int *f194;
    char pad198[8];
    S_0017F550_Shape **f1A0;
    char pad1A4[0xc];
    char f1B0[0xc];
    u16 f1BC;
    char pad1BE[6];
    int f1C4;
    int f1C8;
};

struct C_0017F2B0 {
    void *vtbl;
    char pad4[0xac];
    float mB0[16];
    u16 fF0;
    char padF2[0xa];
    S_0017F550_Pair tree;
    int func_0017F2B0(char *a);
    int func_0017F550(S_0017F550_Shape *a);
};
extern f32 D_002755E8;

/* axis-aligned box: min corner then max corner */
struct Aabb_0017F2B0 {
    Vec4_0017F2B0 mn;
    Vec4_0017F2B0 mx;
};

static __forceinline void Add_0017F2B0(Vec4_0017F2B0 *r, const Vec4_0017F2B0 *a, const Vec4_0017F2B0 *b)
{
    r->x = a->x + b->x;
    r->y = a->y + b->y;
    r->z = a->z + b->z;
}

static __forceinline void Sub_0017F2B0(Vec4_0017F2B0 *r, const Vec4_0017F2B0 *a, const Vec4_0017F2B0 *b)
{
    r->x = a->x - b->x;
    r->y = a->y - b->y;
    r->z = a->z - b->z;
}

static __forceinline void Half_0017F2B0(Vec4_0017F2B0 *r, const Vec4_0017F2B0 *a)
{
    r->x = a->x * D_002755E8;
    r->y = a->y * D_002755E8;
    r->z = a->z * D_002755E8;
    r->w = 1.0f;
}

static inline Vec4_0017F2B0 Vec4Make_0017F2B0(f32 x, f32 y, f32 z) {
    Vec4_0017F2B0 r;
    r.x = x; r.y = y; r.z = z; r.w = 1.0f;
    return r;
}
int func_00123770(Vec4_0017F2B0 *a, Vec4_0017F2B0 *b, void *c, Vec4_0017F2B0 *d, Vec4_0017F2B0 *e, void *f);

/* collision result accumulator pointed to by D_002B92EC */
struct S_002B92EC_Result {
    char pad0[0x20];
    Vec4_0017F2B0 f20;
    Vec4_0017F2B0 f30;
    Vec4_0017F2B0 f40;
    Vec4_0017F2B0 f50;
    Vec4_0017F2B0 f60;
    char pad70[4];
    Vec4_0017F2B0 *f74;
    Vec4_0017F2B0 *f78;
    int f7C;
    int f80;
    int *f84;
    char pad88[0x10];
    u8 f98;
};
extern S_002B92EC_Result *D_002B92EC;
extern Vec4_0017F2B0 D_002A8EE8;

void func_0001C680(Vec4_0017F2B0 *out, Vec4_0017F2B0 v, float *m);
Vec4_0017F2B0 *func_000110E0(Vec4_0017F2B0 *out, Vec4_0017F2B0 *a, Vec4_0017F2B0 *b);
int func_00129350(int a0, int a1, S_0017F550_Pair *a2, S_0017F550_Pair *a3, float *a4, float *a5, int a6, char *a7);
int func_00123980(char *a, int b, int c, int d, S_0017F550_Pair *e, float *f, int g);
int func_00123C80(char *a, int *b, float *c, int d, S_0017F550_Pair *e, float *f);

static __forceinline float Min_0017F550(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_0017F550(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

struct V4C_0017F550 {
    float x, y, z, w;
    V4C_0017F550(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

struct S_0017FDB0_Node {
    char pad0[8];
    u16 f8;
    u16 fA;
    char padC[0x18];
};

struct S_0017FDB0_Leaf {
    Vec4_0017F2B0 min;
    Vec4_0017F2B0 max;
};

struct S_0017FDB0_Tree {
    S_0017FDB0_Node *nodes;
    S_0017FDB0_Leaf *leaves;
};

struct C_0017FDB0 {
    void func_0017FDB0(u16 idx, S_0017FDB0_Tree *tree, float *m);
};

struct C_0017FCA0 {
    void func_0017FCA0(u16 idx, S_0017FDB0_Tree *tree, int depth, float *m);
};

struct C_0017FEB0 {
    char pad0[0xA4];
    u16 fA4;
    u8 fA6;
    u8 fA7;
    char padA8[0x48];
    u16 fF0;
    char padF2[0xA];
    S_0017FDB0_Tree tree;
    void func_00157A00(int a);
    void func_0017FEB0(int a);
};

struct RayCollisionObject {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31(void *a);
    char pad4[0xF0];
    C_00199C20 *f19C;
    void func_00180070(void);
};

int C_0017F2B0::func_0017F2B0(char *a)
{
    struct TS { Vec4_0017F2B0 tmp; Vec4_0017F2B0 s; } ts;
    char *t = (char *)this;
    char *m;
    Vec4_0017F2B0 d;
    Vec4_0017F2B0 c;
    Vec4_0017F2B0 b;
    Vec4_0017F2B0 p;
    f32 *o = *(f32 **)(t + 0xfc);
    Aabb_0017F2B0 *q;

    p.z = 0.0f; p.y = 0.0f; p.x = 0.0f; p.w = 1.0f;
    c.z = 0.0f; c.y = 0.0f; c.x = 0.0f; c.w = 1.0f;
    b.z = 0.0f; b.y = 0.0f; b.x = 0.0f; b.w = 1.0f;
    d.z = 0.0f; d.y = 0.0f; d.x = 0.0f; d.w = 1.0f;
    if (o) {
        ts.tmp.x = o[3]; ts.tmp.y = o[4]; ts.tmp.z = o[5]; ts.tmp.w = 1.0f;
        p = ts.tmp;
        ts.tmp.x = o[6]; ts.tmp.y = o[7]; ts.tmp.z = o[8]; ts.tmp.w = 1.0f;
        b = ts.tmp;
    } else {
        const Vec4_0017F2B0 *hi;
        const Vec4_0017F2B0 *lo;

        q = *(Aabb_0017F2B0 **)(t + 0x100);
        hi = &q->mx;
        lo = &q->mn;
        Add_0017F2B0(&ts.s, hi, lo);
        Half_0017F2B0(&ts.tmp, &ts.s);
        p = ts.tmp;
        Sub_0017F2B0(&ts.s, hi, lo);
        Half_0017F2B0(&ts.tmp, &ts.s);
        b = ts.tmp;
    }
    m = t + 0xb0;
    switch (*(int *)(a + 0x50)) {
    case 0: {
        f32 *r = *(f32 **)(a + 0x1c4);
        c.x = r[3]; c.y = r[4]; c.z = r[5]; c.w = 1.0f;
        d.x = r[6]; d.y = r[7]; d.z = r[8]; d.w = 1.0f;
        break;
    }
    case 1:
        c = *(Vec4_0017F2B0 *)(a + 0xa8);
        d = *(Vec4_0017F2B0 *)(a + 0xb8);
        break;
    default:
        return 0;
    }
    return func_00123770(&p, &b, m, &c, &d, a + 0x130);
}

int C_0017F2B0::func_0017F550(S_0017F550_Shape *a)
{
    S_0017F550_Pair s;
    S_0017F550_Pair t;
    Vec4_0017F2B0 tmp;
    int i;

    switch (a->f50) {
    case 0: {
        S_002B92EC_Result *g;
        s = tree;
        t.nodes = a->f1C4;
        t.leaves = a->f1C8;
        if (func_00129350(fF0, a->f1BC, &s, &t, mB0, a->mB0, 1, a->f1B0)) {
            g = D_002B92EC;
            if (!(g->f98 & 1)) {
                func_0001C680(&g->f20, g->f20, a->mB0);
                func_0001C680(&g->f50, g->f50, a->mB0);
                func_0001C680(&g->f60, g->f60, a->mB0);
                func_00030AC0(&g->f30.x, &g->f30.x, a->mB0);
                g->f98 |= 1;
            }
            g->f40 = *func_000110E0(&tmp, &g->f50, &g->f60);
            for (i = 0; i < g->f80; i++) {
                if (g->f84[i] == 0) {
                    func_0001C680(&g->f74[i], g->f74[i], a->mB0);
                    func_00030AC0(&g->f78[i].x, &g->f78[i].x, a->mB0);
                    g->f84[i] = 1;
                }
            }
            return 1;
        }
        break;
    }
    case 1: {
        Vec4_0017F2B0 mx = D_002A8EE8;
        Vec4_0017F2B0 mn = D_002A8EE8;
        int ret = 0;
        if (func_0017F2B0((char *)a)) {
            for (i = 0; i < a->f190; i++) {
                S_0017F550_Shape *e = a->f1A0[i];
                S_002B92EC_Result *g;
                s = tree;
                t.nodes = e->f1C4;
                t.leaves = e->f1C8;
                if (a->f194[i] != 0) {
                    if (func_00129350(fF0, e->f1BC, &s, &t, mB0, e->mB0, 1, e->f1B0)) {
                        int j;
                        g = D_002B92EC;
                        ret = 1;
                        if (!(g->f98 & 1)) {
                            func_0001C680(&g->f20, g->f20, e->mB0);
                            func_0001C680(&g->f50, g->f50, e->mB0);
                            func_0001C680(&g->f60, g->f60, e->mB0);
                            func_00030AC0(&g->f30.x, &g->f30.x, e->mB0);
                            g->f98 |= 1;
                        }
                        mn.x = AsmMinF(mn.x, g->f50.x);
                        mn.y = AsmMinF(mn.y, g->f50.y);
                        mn.z = AsmMinF(mn.z, g->f50.z);
                        mx.x = AsmMaxF(mx.x, g->f50.x);
                        mx.y = AsmMaxF(mx.y, g->f50.y);
                        mx.z = AsmMaxF(mx.z, g->f50.z);
                        g->f50 = D_002A8EE8;
                        g->f50 = D_002A8EE8;
                        g->f40.x = mx.x + mn.x;
                        g->f40.y = mx.y + mn.y;
                        g->f40.z = mx.z + mn.z;
                        g->f40.w = 1.0f;
                        for (j = 0; j < g->f80; j++) {
                            if (g->f84[j] == 0) {
                                func_0001C680(&g->f74[j], g->f74[j], e->mB0);
                                func_00030AC0(&g->f78[j].x, &g->f78[j].x, e->mB0);
                                g->f84[j] = 1;
                            }
                        }
                    }
                }
            }
        }
        return ret;
    }
    case 5:
        s = tree;
        return func_00123980(a->fA8, a->f100, a->f104, fF0, &s, mB0, 0);
    case 6:
        s = tree;
        return func_00123C80(a->fF0, &a->f100, a->mB0, fF0, &s, mB0);
    }
    return 0;
}

void C_0017FCA0::func_0017FCA0(u16 idx, S_0017FDB0_Tree *tree, int depth, float *m)
{
    Vec4_0017F2B0 out2;
    Vec4_0017F2B0 max;
    Vec4_0017F2B0 out1;
    Vec4_0017F2B0 min;
    S_0017FDB0_Leaf *leaf;
    int isLeaf = idx & 0x8000;

    while (depth != 0) {
        if (isLeaf) {
            return;
        }
        idx = tree->nodes[idx].fA;
        depth--;
        isLeaf = idx & 0x8000;
    }
    if (isLeaf) {
        leaf = &tree->leaves[idx & 0x7fff];
        out1.z = 0.0f;
        out1.y = 0.0f;
        out1.x = 0.0f;
        out1.w = 1.0f;
        out2.z = 0.0f;
        out2.y = 0.0f;
        out2.x = 0.0f;
        out2.w = 1.0f;
        min = leaf->min;
        max = leaf->max;
        func_00030AC0(&out1.x, &min.x, m);
        func_00030AC0(&out2.x, &max.x, m);
    }
}

void C_0017FDB0::func_0017FDB0(u16 idx, S_0017FDB0_Tree *tree, float *m)
{
    Vec4_0017F2B0 out2;
    Vec4_0017F2B0 max;
    Vec4_0017F2B0 out1;
    Vec4_0017F2B0 min;
    S_0017FDB0_Leaf *leaf;

    while ((idx & 0x8000) == 0) {
        S_0017FDB0_Node *n = &tree->nodes[idx];
        func_0017FDB0(n->f8, tree, m);
        idx = n->fA;
    }
    leaf = &tree->leaves[idx & 0x7fff];
    out1.z = 0.0f;
    out1.y = 0.0f;
    out1.x = 0.0f;
    out1.w = 1.0f;
    out2.z = 0.0f;
    out2.y = 0.0f;
    out2.x = 0.0f;
    out2.w = 1.0f;
    min = leaf->min;
    max = leaf->max;
    func_00030AC0(&out1.x, &min.x, m);
    func_00030AC0(&out2.x, &max.x, m);
}

void C_0017FEB0::func_0017FEB0(int a)
{
    S_0017FDB0_Tree t;

    if (fA6) {
        t = tree;
        if (fA4 == 0) {
            ((C_0017FDB0 *)this)->func_0017FDB0(fF0, &t, (float *)((char *)this + 0xB0));
        } else {
            ((C_0017FCA0 *)this)->func_0017FCA0(fF0, &t, fA4 - 1, (float *)((char *)this + 0xB0));
        }
    }
    fA7 &= 0xEF;
    func_00157A00(a);
}

void RayCollisionObject::func_00180070(void) {
    S_Matrix16 m;

    f19C->func_00199C20(0, &m);
    v31(&m);
}
