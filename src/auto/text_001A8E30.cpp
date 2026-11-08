/* 14 functions from 0x001A8720 to 0x001A96D0, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

extern float D_00275544;
extern float D_00275BF8;
static __inline float Abs_001A9110(float x)
{
    volatile float result;
    *(unsigned int *)&result = *(unsigned int *)&x & 0x7fffffff;
    return result;
}
extern int D_0028BF14;

void func_001E891B(void *p);
void *func_001E8AA5(int size);

struct S_001A8BC0_Mesh {
    char pad0[0x60];
    int f60, f64, f68;
    char pad6C[0x30];
    void *f9C;
    S_001A8BC0_Mesh *func_0017F050(int);
    S_001A8BC0_Mesh *func_0014AB30(int);
    void func_0017F0A0(int);
    void func_00129920(int);
    void func_0014C1C0(int, int, int);
    void func_00180E00(int, void *, int, void *);
    void func_00133140(int, int);
    void func_001334E0(int);
};
void *func_001E8A44(int);
void __stdcall func_00011FF0(void *, int, int, void *);
void func_00011060();
void func_001A7FE0();
extern int D_002BA15C;
struct C_001A8BC0 {
    char pad0[0x24];
    int f24;
    int f28;
    S_001A8BC0_Mesh *f2C;
    char pad30[0x24];
    void *f54;
    void func_001577A0(S_001A8BC0_Mesh *, int);
    void func_001D3F50();
    void func_001A8BC0(int a, int b, int c, int d, int e, int f, int g, int h, int i);
};

extern int D_0028BFC4;
extern int D_002AA24C;
extern int D_002AA250;
extern int D_002AA254;
struct C_00157600 {
    void func_00157600(int a0);
};
struct C_001A8E30 {
    C_001A8E30 *func_001A8E30(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct V4_001A8B80 {
    float x, y, z, w;
};

/* first of the four consecutive floats (D_002AA248..D_002AA254) copied by func_001A9680 */
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

struct S_001A9240_Item {
    char pad0[0x10];
    V4_001A8B80 pos;
    V4_001A8B80 b;
    V4_001A8B80 c;
    int f40;
    char pad44[8];
    float f4C;
    char pad50[4];
    unsigned char f54;
    char pad55[3];
};

static __forceinline int Match_001A9240(const S_001A9240_Item *it, const V4_001A8B80 &v, int b)
{
    return v.x == it->pos.x && v.y == it->pos.y && v.z == it->pos.z && b == it->f40;
}

struct S_001A9430_V3 {
    float x, y, z;
};

/* decoded-points block hanging off the effect object at +0x1D4 */
struct S_001A9430_Elem {
    char pad0[0x14];
    char *f14;
    char pad18[4];
    int f1C;
};

/* effect object passed to C_001A8B80::func_001A9430, kind at +0x50 */
struct S_001A9430_Obj {
    char pad0[0x50];
    int f50;
    char pad54[0xA8 - 0x54];
    V4_001A8B80 fA8;
    char padB8[0xF0 - 0xB8];
    unsigned short fF0;
    char padF2[0xFC - 0xF2];
    int fFC;
    int f100;
    char pad104[0x1CC - 0x104];
    unsigned short f1CC;
    char pad1CE[0x1D4 - 0x1CE];
    S_001A9430_Elem *f1D4;
};

struct C_0011EDF0_Vec {
    float x, y, z, w;
    C_0011EDF0_Vec *func_0011EDF0(short *p);
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
    int f7C;
    int f80;
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
    void func_001A9110(int a, float b, float c, float d, float e, float f, float g, float h);
    void func_001A9220(int idx, f32 v);
    void func_001D3F50(void);
    void func_001A9680(void);
    void func_001A93A0(unsigned short idx, S_001A8B80_Tree *tree, int a2, int a3);
    void func_001A9430(S_001A9430_Obj *obj, int a, int b);
    void func_001A9240(V4_001A8B80 v, int a, int b, float c);
    void func_001A95B0(V4_001A8B80 a, V4_001A8B80 b, V4_001A8B80 c, V4_001A8B80 d, int e, int f, int g, int h);
};

extern float D_002755E8;

struct V4_001A8720 {
    float x, y, z, w;
    V4_001A8720() {}
    V4_001A8720(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

struct S_001A8720_Xf {
    V4_001A8720 *func_00197F70(V4_001A8720 *out, V4_001A8720 *in);
};

/* 0x58-byte entry of the body's item array */
struct S_001A8720_Item {
    char pad0[0x10];
    V4_001A8720 f10;
    V4_001A8720 f20;
    V4_001A8720 f30;
    S_001A8720_Xf *f40;
    char pad44[0xc];
    int f50;
    char pad54[4];
};

struct S_001A8720_Body {
    char pad0[0x3c];
    int f3c;
    char pad40[0x40];
    int f80;
    S_001A8720_Item *f84;
    char pad88[0x50];
    int fd8;
    void func_001A9680(void);
};

struct S_001A8720_Link {
    void func_000BA430(V4_001A8720 *a, V4_001A8720 *b, int c, int *d);
};

struct S_001A8720_Mesh {
    void func_0014AC30(void *p, int a);
    void func_00133ED0(void);
    void func_00134770(int a, int b);
    float func_00133F10(int a);
};

/* SpringCollisionDetectionModel */
struct C_001A8720 {
    void *vtbl;
    char pad4[0x20];
    S_001A8720_Body *f24;
    S_001A8720_Link *f28;
    S_001A8720_Mesh *f2c;
    char pad30[4];
    V4_001A8720 f34;
    V4_001A8720 f44;
    char *f54;
    int f58;
    int f5c;
    int f60;
    int *f64;
    int f68;
    int func_001A8720(void);
};

static __forceinline float Min_001A8720(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(*(__m128 *)&a, *(__m128 *)&b)); return r; }
static __forceinline float Max_001A8720(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(*(__m128 *)&a, *(__m128 *)&b)); return r; }

void func_001E891B(void *);

C_001A8E30 *C_001A8E30::func_001A8E30(int a0)
{
    int *u;
    int *p;
    int i;
    ((C_00157600 *)this)->func_00157600(a0);
    u = (int *)this;
    u[0] = (int)&D_0028BFC4;
    p = &u[0x104 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x114 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x124 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x134 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x144 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    u[0x80 / 4] = 0; u[0x88 / 4] = 0; u[0x8C / 4] = 0; u[0x7C / 4] = 0;
    u[0x24 / 4] = 0; u[0x84 / 4] = 0; u[0x90 / 4] = 0; u[0x154 / 4] = 0;
    u[0x28 / 4] = 0; u[0x30 / 4] = 0; u[0x2C / 4] = 0; u[0x6C / 4] = 0;
    u[0x3C / 4] = 1; u[0x40 / 4] = 1; u[0x4C / 4] = 1; u[0x44 / 4] = 1; u[0x48 / 4] = 1;
    u[0x58 / 4] = 0; u[0x50 / 4] = 0; u[0x54 / 4] = 0; u[0x5C / 4] = 0;
    u[0x60 / 4] = 0; u[0x64 / 4] = 0; u[0x68 / 4] = 0; u[0x70 / 4] = 0;
    u[0x74 / 4] = 0; u[0x78 / 4] = 0; u[0x34 / 4] = 0; u[0x38 / 4] = 0;
    u[0x94 / 4] = 0; u[0x98 / 4] = 0x461c4000;
    u[0xA0 / 4] = 0; u[0xA4 / 4] = 0; u[0xA8 / 4] = 0; u[0xAC / 4] = 0;
    u[0xB0 / 4] = 0x3f800000; u[0xB4 / 4] = 0x3f800000; u[0xB8 / 4] = 0x3f800000;
    u[0xC8 / 4] = 0x3f800000; u[0xD0 / 4] = 0x3d4ccccd; u[0xD4 / 4] = 0;
    u[0x9C / 4] = 0x3f800000;
    u[0x104 / 4] = *(int *)&D_002AA248; u[0x108 / 4] = D_002AA24C; u[0x10C / 4] = D_002AA250; u[0x110 / 4] = D_002AA254;
    u[0x124 / 4] = *(int *)&D_002AA248; u[0x128 / 4] = D_002AA24C; u[0x12C / 4] = D_002AA250; u[0x130 / 4] = D_002AA254;
    u[0x134 / 4] = *(int *)&D_002AA248; u[0x138 / 4] = D_002AA24C; u[0x13C / 4] = D_002AA250; u[0x140 / 4] = D_002AA254;
    u[0x144 / 4] = *(int *)&D_002AA248; u[0x148 / 4] = D_002AA24C; u[0x14C / 4] = D_002AA250; u[0x150 / 4] = D_002AA254;
    for (i = 0; i < 10; i++) u[0xDC / 4 + i] = 0;
    u[0xD8 / 4] = 0; u[0xBC / 4] = 0; u[0xC4 / 4] = 0; u[0xC0 / 4] = 0;
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
        volatile float temp[2];
        temp[0] = b * c;
        *(float *)&temp[1] = AsmSqrtF(*(float *)&temp[0]);
        float s = *(float *)&temp[1] * a;
        return s + s;
    }
    return D_00275544;
}

void C_001A8B80::func_001A9110(int a, float b, float c, float d, float e, float f, float g, float h)
{
 float t;
 C_001A8B80 *self = this;
 C_001A8B80 * volatile vself = this;
 C_001A8B80 **pself = &self;
 if (*(void **)((char *)*pself + 0x24)) {
  *(int *)((char *)*pself + 0x94) = a;
  t = *(float *)(*(char **)((char *)*pself + 0x24) + 0x210) * b;
  *(float *)((char *)*(C_001A8B80 * volatile *)&vself + 0xA0) = Abs_001A9110(t * D_00275BF8);
  *(float *)((char *)*pself + 0xA4) = func_001A90B0(c, *(float *)(*(char **)((char *)*pself + 0x24) + 0x210), *(float *)((char *)*pself + 0xA0));
  t = *(float *)(*(char **)((char *)*pself + 0x24) + 0x210) * d;
  *(float *)((char *)*(C_001A8B80 * volatile *)&vself + 0xA8) = Abs_001A9110(t * D_00275BF8);
  *(float *)((char *)*pself + 0xAC) = func_001A90B0(e, *(float *)(*(char **)((char *)*pself + 0x24) + 0x210), *(float *)((char *)*pself + 0xA8));
  *(float *)((char *)*pself + 0xBC) = f;
  *(float *)((char *)*pself + 0xC0) = g;
  *(float *)((char *)*pself + 0xC4) = h;
 }
}

void C_001A8B80::func_001A9220(int idx, f32 v)
{
    if (idx >= 0 && idx < 10) {
        fDC[idx] = v;
    }
}

void C_001A8B80::func_001A9240(V4_001A8B80 v, int a, int b, float c)
{
    if (f80 < f8C) {
        int found = 0;
        if (f80 > 0) {
            char *p = (char *)f84 + 0x18;
            int n = f80;
            do {
                if (v.x == *(float *)(p - 8) && v.y == *(float *)(p - 4) && v.z == *(float *)p && b == *(int *)(p + 0x28)) {
                    found = 1;
                }
                p += 0x58;
            } while (--n);
        }
        if (!found) {
            ((S_001A9240_Item *)f84)[f80].f40 = b;
            ((S_001A9240_Item *)f84)[f80].pos = v;
            ((S_001A9240_Item *)f84)[f80].f54 ^= (((S_001A9240_Item *)f84)[f80].f54 ^ a) & 1;
            ((S_001A9240_Item *)f84)[f80].f4C = c;
            ((S_001A9240_Item *)f84)[f80].b = D_002AA248;
            ((S_001A9240_Item *)f84)[f80].c = D_002AA248;
            f80++;
        }
    }
}

void C_001A8B80::func_001A93A0(unsigned short idx, S_001A8B80_Tree *tree, int a2, int a3)
{
    if (!(idx & 0x8000)) {
        do {
            S_001A8B80_Node *n = &tree->nodes[idx];
            func_001A93A0(n->left, tree, a2, a3);
            idx = n->right;
        } while (!(idx & 0x8000));
    }
    S_001A8B80_Leaf *leaf = &tree->leaves[idx & 0x7fff];
    V4_001A8B80 v = leaf->v;
    func_001A9240(v, a2, a3, 0.0f);
}

void C_001A8B80::func_001A9430(S_001A9430_Obj *obj, int a, int b)
{
    int i;

    if (obj == 0) {
        return;
    }
    switch (obj->f50) {
    case 0:
        for (i = 0; i < obj->f1CC; i++) {
            V4_001A8B80 v;
            S_001A9430_Elem *e = obj->f1D4;
            if (e->f1C != 0) {
                C_0011EDF0_Vec t;
                t.func_0011EDF0((short *)(e->f14 + i * 6));
                v = *(V4_001A8B80 *)&t;
            } else {
                S_001A9430_V3 *p = (S_001A9430_V3 *)(e->f14 + i * 12);
                v.x = p->x;
                v.y = p->y;
                v.z = p->z;
                v.w = 1.0f;
            }
            func_001A9240(v, a, b, 0.0f);
        }
        break;
    case 2: {
        S_001A8B80_Tree tree;
        tree.nodes = (S_001A8B80_Node *)obj->fFC;
        tree.leaves = (S_001A8B80_Leaf *)obj->f100;
        func_001A93A0(obj->fF0, &tree, a, b);
        break;
    }
    case 5:
        func_001A9240(obj->fA8, a, b, *(float *)&obj->f100);
        break;
    }
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
        it->f50 = h;
        it->f44 = e;
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
