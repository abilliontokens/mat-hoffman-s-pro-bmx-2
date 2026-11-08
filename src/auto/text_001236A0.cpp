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
int func_001236A0(int a1, int a2) {
    int func_00122090(...);
    int func_001217F0(...);
    if (a1 & 0x8000) {
        S_001236A0_Leaf32 *leaf = &D_002B92E8->leaves[a1 & 0x7fff];
        S_001236A0_Node *node = &D_002B9290->nodes[(unsigned short)a2];
        return func_00122090(&node->v0, &node->v1, &leaf->v0, &leaf->v1, &D_002B9300);
    } else {
        S_001236A0_Node *node = &D_002B92E8->nodes[(unsigned short)a1];
        S_001236A0_Point hi, lo;
        int x = *(int *)&node->v0.x;
        int y = *(int *)&node->v0.y;
        *(int *)&lo.v.x = x;
        int z = *(int *)&node->v0.z;
        *(int *)&lo.v.y = y;
        int hx = *(int *)&node->v1.x;
        *(int *)&lo.v.z = z;
        int hy = *(int *)&node->v1.y;
        int hz = *(int *)&node->v1.z;
        *(int *)&hi.v.x = hx;
        *(int *)&hi.v.y = hy;
        *(int *)&hi.v.z = hz;
        S_001236A0_Leaf20 *leaf = &D_002B9290->leaves[a2 & 0x7fff];
        lo.w = 1.0f;
        hi.w = 1.0f;
        return func_001217F0(&lo, &hi, leaf, &D_002B92A0);
    }
}

void func_00123770(int a1, int a2, int a3, int a4, int a5, int a6) {
    int func_0011AC30(...);
    int func_0011ACC0(...);
    int func_00120FF0(...);
    D_002B92A0.func_000264C0(a3);
    func_0011AC30(&D_002B92A0, &D_002B92A0);
    func_0011ACC0(&D_002B92A0, a6, &D_002B92A0);
    func_00120FF0(a1, a2, a4, a5, &D_002B92A0);
}

#pragma optimize("y", on)
int func_001237D0(S_001236A0_Point *a1, int a2, int a3, unsigned short a4, S_002B9290 *tree, int a6, int a7) {
    int func_001206E0(S_001236A0_Leaf20 *, S_001236A0_Point, int, int, int);
    int func_00120470(S_001236A0_Leaf20 *, S_001236A0_Point, int, int, int);
    int func_001225C0(...);
    int r;
    S_001236A0_Vec4 hi, lo;
    S_001236A0_Node *node;
    if (a4 & 0x8000) {
        S_001236A0_Leaf20 *leaf = &tree->leaves[a4 & 0x7fff];
        if (a7)
            return func_001206E0(leaf, *a1, a2, a3, a6);
        return func_00120470(leaf, *a1, a2, a3, a6);
    }
    node = &tree->nodes[a4];
    int x = *(int *)&node->v0.x, y = *(int *)&node->v0.y, z = *(int *)&node->v0.z;
    *(int *)&lo.x = x; *(int *)&lo.y = y; *(int *)&lo.z = z;
    x = *(int *)&node->v1.x; y = *(int *)&node->v1.y; z = *(int *)&node->v1.z;
    lo.w = 1.0f;
    *(int *)&hi.x = x; *(int *)&hi.y = y; *(int *)&hi.z = z;
    hi.w = 1.0f;
    if (func_001225C0(&lo, &hi, a1, a2, a3, a6) != 0) {
        r = func_001237D0(a1, a2, a3, node->left, tree, a6, a7);
        if (r == 0) {
            return func_001237D0(a1, a2, a3, node->right, tree, a6, a7);
        }
    } else {
        r = 0;
    }
    return r;
}
void func_00123940(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    int func_001237D0(...);
    D_002B92F4 = a7;
    func_001237D0(a1, a2, a3, a4, a5, a6, a8);
}

int func_00123980(int a1, int a2, int a3, unsigned short a4, S_002B92E8 *tree, int a6, int a7) {
 int func_00030AC0(...);
 int func_001209F0(...);
 int func_001225C0(...);
 int r;
 
 S_001236A0_Vec4 vv[2];
 S_001236A0_Node *node;
 int tmp[3];
 vv[0].w=1; vv[1].w=1;
 
 if (a4 & 0x8000) {
  S_001236A0_Leaf32 *leaf=&tree->leaves[a4 & 0x7fff];
  vv[1].x=vv[1].y=vv[1].z=0;
  vv[0].x=vv[0].y=vv[0].z=0;
  func_00030AC0(&vv[1],&leaf->v0,a6);
  func_00030AC0(&vv[0],&leaf->v1,a6);
  return func_001209F0(&vv[1],&vv[0],a1,a3,&a4);
 }
 node=&tree->nodes[a4];
 tmp[1]=*(int*)&node->v0.y; tmp[2]=*(int*)&node->v0.z; tmp[0]=*(int*)&node->v0.x;
 *(int*)&vv[0].y=tmp[1]; *(int*)&vv[0].z=tmp[2]; *(int*)&vv[0].x=tmp[0];
 tmp[1]=*(int*)&node->v1.y; tmp[2]=*(int*)&node->v1.z; tmp[0]=*(int*)&node->v1.x;
 *(int*)&vv[1].y=tmp[1]; *(int*)&vv[1].z=tmp[2]; *(int*)&vv[1].x=tmp[0];
 if (func_001225C0(&vv[0],&vv[1],a1,a2,a3,a6)) {
  r=func_00123980(a1,a2,a3,node->left,tree,a6,a7);
  if (!r) return func_00123980(a1,a2,a3,node->right,tree,a6,a7);
 } else r=0;
 return r;
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
    S_001236A0_Vec4 hi, lo;
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
    lo.x = node->v0.x;
    lo.y = node->v0.y;
    lo.z = node->v0.z;
    lo.w = 1.0f;
    const S_001236A0_Vec3 &v1 = node->v1;
    hi.x = v1.x;
    hi.y = v1.y;
    hi.z = v1.z;
    hi.w = 1.0f;
    if (func_00120FF0(a1, a2, &lo, &hi, &m) != 0) {
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
    int a3v = a3;
    int a6v = a6;
    if (a4 & 0x8000) {
        S_001236A0_Leaf20 *leaf = &tree->leaves[a4 & 0x7fff];
        return func_00120B20(leaf, a1, a2, a3v, a6v);
    }
    S_001236A0_Node *node = &tree->nodes[a4];
    S_001236A0_Vec4 hi, lo;
    int lx = ((int *)&node->v0)[0];
    int ly = ((int *)&node->v0)[1];
    int lz = ((int *)&node->v0)[2];
    ((int *)&lo)[0] = lx;
    ((int *)&lo)[1] = ly;
    ((int *)&lo)[2] = lz;
    int hx = ((int *)&node->v1)[0];
    int hy = ((int *)&node->v1)[1];
    int hz = ((int *)&node->v1)[2];
    ((int *)&hi)[0] = hx;
    ((int *)&hi)[1] = hy;
    ((int *)&hi)[2] = hz;
    lo.w = 1.0f;
    hi.w = 1.0f;
    if (func_00122810(&lo, &hi, a1, a2, a3v, a6v) != 0) {
        r = func_00123DE0(a1, a2, a3v, node->left, tree, a6v);
        if (r == 0) return func_00123DE0(a1, a2, a3v, node->right, tree, a6v);
    } else { r = 0; }
    return r;
}

void func_00123EF0(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    int func_00123DE0(...);
    D_002B92F4 = a7;
    func_00123DE0(a1, a2, a3, a4, a5, a6);
}

