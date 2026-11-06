/* 10 functions from 0x001236A0 to 0x00123F20, found by Ghidra. */
#include "common.h"

#include <string.h>
extern int D_002B92F4;

struct S_001236A0_Vec3 {
    float x, y, z;
};

struct S_001236A0_Vec4 {
    float x, y, z, w;
    S_001236A0_Vec4() {}
    S_001236A0_Vec4(float x_, float y_, float z_, float w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
    S_001236A0_Vec4(const S_001236A0_Vec3 &v) {
        x = v.x;
        y = v.y;
        z = v.z;
        w = 1.0f;
    }
};

struct S_001236A0_Mat {
    float m[16];
};

struct S_001236A0_Point {
    S_001236A0_Vec3 v;
    float w;
};

struct S_001236A0_Node {
    int unk0;
    int unk4;
    unsigned short left;
    unsigned short right;
    S_001236A0_Vec3 v0;
    S_001236A0_Vec3 v1;
};

struct S_001236A0_Leaf32 {
    S_001236A0_Vec4 v0;
    S_001236A0_Vec4 v1;
};

struct S_001236A0_Leaf20 {
    int unk[5];
};

struct S_002B92E8 {
    S_001236A0_Node *nodes;
    S_001236A0_Leaf32 *leaves;
};

struct S_002B9290 {
    S_001236A0_Node *nodes;
    S_001236A0_Leaf20 *leaves;
};

extern S_002B92E8 *D_002B92E8;
extern S_002B9290 *D_002B9290;
extern int D_002B9300;

struct __declspec(align(16)) S_00123AF0_Mat {
    float m[16];
};

struct C_002B92A0 {
    void func_000264C0(int param_1);
};
extern C_002B92A0 D_002B92A0;

#pragma optimize("y", off)
void func_00123770(int a1, int a2, int a3, int a4, int a5, int a6) {
    int func_0011AC30(...);
    int func_0011ACC0(...);
    int func_00120FF0(...);
    D_002B92A0.func_000264C0(a3);
    func_0011AC30(&D_002B92A0, &D_002B92A0);
    func_0011ACC0(&D_002B92A0, a6, &D_002B92A0);
    func_00120FF0(a1, a2, a4, a5, &D_002B92A0);
}
#pragma optimize("", on)

void func_00123940(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    int func_001237D0(...);
    D_002B92F4 = a7;
    func_001237D0(a1, a2, a3, a4, a5, a6, a8);
}

int func_00123AF0(int a1, int a2, S_00123AF0_Mat *a3, unsigned short a4, S_002B9290 *tree, int a6) {
    int func_0011AC30(...);
    int func_0011ACC0(...);
    int func_00120FF0(...);
    int func_001217F0(...);
    S_001236A0_Node *node;
    int r;

    if (a4 & 0x8000) {
        S_00123AF0_Mat m = *a3;
        S_001236A0_Leaf20 *leaf;
        func_0011AC30(&m, &m);
        func_0011ACC0(&m, a6, &m);
        leaf = &tree->leaves[a4 & 0x7fff];
        return func_001217F0(a1, a2, leaf, &m);
    } else {
        S_00123AF0_Mat m = *a3;
        func_0011AC30(&m, &m);
        func_0011ACC0(&m, a6, &m);
        node = &tree->nodes[a4];
        S_001236A0_Vec4 lo(node->v0);
        int hz = ((int *)&node->v1)[2];
        int hx = ((int *)&node->v1)[0];
        int hy = ((int *)&node->v1)[1];
        S_001236A0_Vec4 hi;
        ((int *)&hi)[2] = hz;
        ((int *)&hi)[0] = hx;
        ((int *)&hi)[1] = hy;
        hi.w = 1.0f;
        if (func_00120FF0(a1, a2, &lo, &hi, &m) != 0) {
            r = func_00123AF0(a1, a2, a3, node->left, tree, a6);
            if (r == 0) {
                return func_00123AF0(a1, a2, a3, node->right, tree, a6);
            }
        } else {
            r = 0;
        }
    }
    return r;
}

void func_00123C50(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    int func_00123AF0(...);
    D_002B92F4 = a7;
    func_00123AF0(a1, a2, a3, a4, a5, a6);
}

int func_00123C80(int a1, int a2, S_001236A0_Mat *a3, unsigned short a4, S_002B92E8 *tree, int a6) {
    int func_0011AC30(...);
    int func_0011ACC0(...);
    int func_00122090(...);
    int func_00120FF0(...);
    int r;
    __declspec(align(16)) S_001236A0_Mat m;
    S_001236A0_Vec4 box[2];
    S_001236A0_Node *node;
    if (a4 & 0x8000) {
        m = *a3;
        func_0011AC30(&m, &m);
        func_0011ACC0(&m, a6, &m);
        S_001236A0_Leaf32 *leaf = &tree->leaves[a4 & 0x7fff];
        return func_00122090(a1, a2, &leaf->v0, &leaf->v1, &m);
    }
    m = *a3;
    func_0011AC30(&m, &m);
    func_0011ACC0(&m, a6, &m);
    node = &tree->nodes[a4];
    box[1].x = node->v0.x;
    box[1].y = node->v0.y;
    box[1].z = node->v0.z;
    box[1].w = 1.0f;
    box[0].x = node->v1.x;
    box[0].y = node->v1.y;
    box[0].z = node->v1.z;
    box[0].w = 1.0f;
    if (func_00120FF0(a1, a2, &box[1], &box[0], &m) != 0) {
        r = func_00123C80(a1, a2, a3, node->left, tree, a6);
        if (r == 0) {
            return func_00123C80(a1, a2, a3, node->right, tree, a6);
        }
    } else {
        r = 0;
    }
    return r;
}

int func_00123DE0(int a1, int a2, int a3, unsigned short a4, S_002B9290 *tree, int a6) {
    int func_00120B20(...);
    int func_00122810(...);
    int r;
    S_001236A0_Vec4 hi, lo;
    S_001236A0_Node *node;
    if (a4 & 0x8000) {
        S_001236A0_Leaf20 *leaf = &tree->leaves[a4 & 0x7fff];
        return func_00120B20(leaf, a1, a2, a3, a6);
    }
    node = &tree->nodes[a4];
    lo.x = node->v0.x;
    lo.y = node->v0.y;
    lo.z = node->v0.z;
    hi.x = node->v1.x;
    hi.y = node->v1.y;
    hi.z = node->v1.z;
    lo.w = 1.0f;
    hi.w = 1.0f;
    if (func_00122810(&lo, &hi, a1, a2, a3, a6) != 0) {
        r = func_00123DE0(a1, a2, a3, node->left, tree, a6);
        if (r == 0) {
            return func_00123DE0(a1, a2, a3, node->right, tree, a6);
        }
    } else {
        r = 0;
    }
    return r;
}

void func_00123EF0(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    int func_00123DE0(...);
    D_002B92F4 = a7;
    func_00123DE0(a1, a2, a3, a4, a5, a6);
}

