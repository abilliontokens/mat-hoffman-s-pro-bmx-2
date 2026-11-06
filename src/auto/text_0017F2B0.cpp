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

void __stdcall func_0017FCA0(u16 idx, S_0017FDB0_Tree *tree, int depth, float *m)
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

void RayCollisionObject::func_00180070(void) {
    S_Matrix16 m;

    f19C->func_00199C20(0, &m);
    v31(&m);
}
