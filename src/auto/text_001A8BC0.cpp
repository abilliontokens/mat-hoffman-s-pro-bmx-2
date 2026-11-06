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

void C_001A8BC0::func_001A8BC0(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    S_001A8BC0_Mesh *mesh;
    V4_001A8B80 *verts;
    int n;

    f24 = a;
    f28 = b;
    if (!b)
        ((S_001A8720_Body *)a)->f3c = 0;
    mesh = 0;
    if (c) {
        S_001A8BC0_Mesh *temp = (S_001A8BC0_Mesh *)func_001E8A44(0xf4);
        if (temp)
            mesh = temp->func_0014AB30(1);
        mesh->func_00129920(2);
        n = ((S_001A8720_Body *)f24)->f80 * 2;
        verts = (V4_001A8B80 *)func_001E8A44(n * 16);
        if (verts)
            func_00011FF0(verts, 16, n, (void *)func_00011060);
        else
            verts = 0;
        f54 = verts;
        mesh->func_0014C1C0(((S_001A8720_Body *)f24)->f80, 0, 0);
    } else if (d) {
        S_001A8BC0_Mesh *temp = (S_001A8BC0_Mesh *)func_001E8A44(0x110);
        if (temp)
            mesh = temp->func_0017F050(1);
        mesh->func_0017F0A0(2);
        n = ((S_001A8720_Body *)f24)->f80 * 2;
        verts = (V4_001A8B80 *)func_001E8A44(n * 16);
        if (verts)
            func_00011FF0(verts, 16, n, (void *)func_00011060);
        else
            verts = 0;
        V4_001A8B80 *dst = verts;
        for (int j = 0; j < ((S_001A8720_Body *)f24)->f80; j++, dst += 2) {
            dst[0] = *(V4_001A8B80 *)&e;
            dst[1] = *(V4_001A8B80 *)&((S_001A8720_Body *)f24)->f84[j].f10;
        }
        mesh->func_00180E00(((S_001A8720_Body *)f24)->f80, verts, 1,
                            ((S_001A8720_Body *)f24)->f84->f40);
        func_001E891B(verts);
    } else
        return;
    f2C = mesh;
    func_001577A0(mesh, 2);
    f2C->func_00133140(i, 2);
    f2C->f9C = (void *)func_001A7FE0;
    f2C->f68 = D_002BA15C;
    f2C->f60 = f24;
    f2C->f64 = *(int *)(f24 + 0x24);
    f2C->func_001334E0(1);
    func_001D3F50();
}

void func_001A8DC0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

