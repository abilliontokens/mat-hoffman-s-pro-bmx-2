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
