/* 14 functions from 0x001A8720 to 0x001A96D0, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>

extern float D_00275544;
extern int D_0028BF14;

void func_001E891B(void *p);
void *func_001E8AA5(int size);

struct C_00157660 {
    void func_00157660(void);
};

struct V4_001A8B80 {
    float x, y, z, w;
};

/* default vector copied by func_001A9680 (symbols D_002AA24C..D_002AA254 are its tail) */
extern V4_001A8B80 D_002AA248;

/* 0x58-byte entry stored at C_001A8B80::f90 */
struct S_001A8B80_Item {
    V4_001A8B80 a;
    V4_001A8B80 b;
    V4_001A8B80 c;
    V4_001A8B80 d;
    int f40;
    int f44;
    int f48;
    int pad4C;
    int f50;
    int pad54;
};

/* tree node, 0x24 bytes */
struct S_001A8B80_Node {
    char pad0[8];
    unsigned short left;
    unsigned short right;
    char pad0C[0x24 - 0xC];
};

/* tree leaf, 0x20 bytes */
struct S_001A8B80_Leaf {
    char pad0[0x10];
    V4_001A8B80 v;
};

struct S_001A8B80_Tree {
    S_001A8B80_Node *nodes;
    S_001A8B80_Leaf *leaves;
};

struct C_001A8B80 {
    void *vtbl;
    char pad4[0x28];
    int f2C;
    int f30;
    int f34;
    int f38;
    char pad3C[0x18];
    void *f54;
    char pad58[0x1C];
    int f74;
    int f78;
    char pad7C[8];
    void *f84;
    int f88;
    int f8C;
    void *f90;
    char pad94[0x44];
    int fD8;
    f32 fDC[10];
    char pad104[0x40];
    V4_001A8B80 f144;
    int f154;
    void *func_001A8B80(int flags);
    void func_001A9070(int count);
    void func_001A9220(int idx, f32 v);
    void func_001D3F50(void);
    void func_001A9680(void);
    void func_001A93A0(int idx, S_001A8B80_Tree *tree, int a2, int a3);
    void func_001A9240(V4_001A8B80 v, int a, int b, int c);
    void func_001A95B0(V4_001A8B80 a, V4_001A8B80 b, V4_001A8B80 c, V4_001A8B80 d, int e, int f, int g, int h);
};

void *C_001A8B80::func_001A8B80(int flags)
{
    void *p = f54;

    vtbl = (void *)&D_0028BF14;
    if (p != 0) {
        func_001E891B(p);
    }
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001A8B80::func_001A9070(int count)
{
    f8C = count;
    f84 = func_001E8AA5(count * 0x58);
    f90 = func_001E8AA5(f8C * 0x58);
    func_001D3F50();
}

float __stdcall func_001A90B0(float a, float b, float c)
{
    if (b > D_00275544 && c > D_00275544) {
        float prod = b * c;
        float r = (float)sqrt((double)prod) * a;
        return r + r;
    }
    return D_00275544;
}

void C_001A8B80::func_001A9220(int idx, f32 v)
{
    if (idx >= 0 && idx < 10) {
        fDC[idx] = v;
    }
}

void C_001A8B80::func_001A93A0(int idx, S_001A8B80_Tree *tree, int a2, int a3)
{
    if ((short)idx >= 0) {
        do {
            S_001A8B80_Node *n = &tree->nodes[(unsigned short)idx];
            func_001A93A0(n->left, tree, a2, a3);
            idx = n->right;
        } while ((short)idx >= 0);
    }
    func_001A9240(tree->leaves[idx & 0x7fff].v, a2, a3, 0);
}

void C_001A8B80::func_001A95B0(V4_001A8B80 a, V4_001A8B80 b, V4_001A8B80 c, V4_001A8B80 d, int e, int f, int g, int h)
{
    if (f88 < f8C) {
        S_001A8B80_Item *it = (S_001A8B80_Item *)f90 + f88;
        it->a = a;
        it->b = b;
        it->c = c;
        it->d = d;
        it->f48 = f;
        it->f40 = g;
        it->f44 = e;
        it->f50 = h;
        f88++;
        fD8 = h;
    }
}

void C_001A8B80::func_001A9680(void)
{
    f88 = 0;
    f2C = 1;
    f154 = 0;
    f30 = 0;
    f74 = 0;
    f78 = 0;
    f34 = 0;
    f38 = 0;
    f144 = *(V4_001A8B80 *)&D_002AA248;
}

