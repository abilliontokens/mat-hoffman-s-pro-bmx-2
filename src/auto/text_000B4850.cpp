/* 5 functions from 0x000B4850 to 0x000B5260, found by Ghidra. */
#include "common.h"

extern int D_0027D37C;
extern int D_0027D3F0;
extern int D_0027D3FC;

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() {}
    Vec4(f32 x_, f32 y_, f32 z_, f32 w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

static inline void SetVec4(Vec4 *d, f32 x, f32 y, f32 z, f32 w)
{
    d->x = x;
    d->y = y;
    d->z = z;
    d->w = w;
}

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_001577A0 {
    void func_001577A0(void *p, int n);
};

struct C_00198330 {
    char pad0[0x144];
    f32 f144;
    C_00198330 *func_00198330(void *a0);
    void func_00199A70(C_00198330 *a0, Vec4 *a1);
};

struct C_000B3E10 {
    void func_000B3E10(void);
};

struct C_000B3410 {
    void func_000B3410(int a0);
};

struct C_000B1350 {
    int func_000B1350(void);
};

struct C_000B5020 {
    char pad0[0x28];
    int f28;
    char pad2C[0x8];
    int f34;
    int f38;
    char pad3C[0x8];
    C_000B3E10 **f44;
    C_000B3410 **f48;
    int func_000B5020(void);
};

struct BmxStallConstraint {
    void *vtbl;          /* 0x00 */
    char pad04[0x2c];    /* 0x04 */
    C_00198330 *f30;     /* 0x30 */
    Vec4 f34;            /* 0x34 */
    Vec4 f44;            /* 0x44 */
    f32 f54;             /* 0x54 */
    f32 f58;             /* 0x58 */
    f32 f5C;             /* 0x5C */
    f32 f60;             /* 0x60 */
    f32 f64;             /* 0x64 */
    f32 f68;             /* 0x68 */
    f32 f6C;             /* 0x6C */
    BmxStallConstraint *func_000B50B0(int param_1);
    void func_000B5120(void);
    void func_000B51C0(void);
};

extern char D_0027D364[], D_0027D350[], D_0027D348[], D_0027D334[], D_0027D324[], D_0027D314[];
extern char D_0027D300[], D_0027D2F0[], D_0027D2E8[], D_0027D2D0[], D_0027D2BC[], D_0027D2A8[];
extern char D_002764A8[], D_0027649C[], D_00276490[], D_00276488[], D_0027D29C[], D_0027D290[];
extern char D_0027D280[], D_0027D26C[], D_0027CF7C[], D_00276980[], D_0027CED0[];
extern int D_0027CEFC;
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
int func_001EA426(void *a, void *b);
void *func_001E8A44(int size);
void *func_001E83E8(void *p, int size);

struct GRootB4850 {
    int f0;
};
struct GHolderB4850 {
    char pad0[0x2E0];
    GRootB4850 *p2E0;
};
extern GHolderB4850 *D_002A8490;

struct ParserB4850 {
    int func_00169710(char *s);
    void func_00168C20(char *s, int a, int *out);
    void func_00168C50(char *s, float a, float *out);
    void func_00168BE0(char *a, char *b, char *c, int d);
};

struct ObjB1EE0 {
    ObjB1EE0 *func_000B1EE0(int a);
    void func_000B4300(char *buf, ParserB4850 *p);
};

struct BigObjB4850 {
    void *vtbl;
    char pad4[0x3C - 4];
    void *f3C;
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    int f54;
    char pad58[4];
    int f5C;
    int f60;
    void func_0018C7B0(int a);
    void *func_000B1860();
    void func_000B31F0(int a);
    void func_000B2ED0();
};

struct Obj14B4850 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
};

struct StopLight {
    char pad0[0x24];
    float f24;
    float f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    void **f40;
    void **f44;
    void **f48;
    void **f4C;
    void **f50;
    void func_000B4850(ParserB4850 *p);
};

int C_000B5020::func_000B5020(void)
{
    int i;
    for (i = 0; i < f34; i++) {
        f44[i]->func_000B3E10();
        ((C_001577A0 *)this)->func_001577A0(f44[i], -1);
    }
    for (i = 0; i < f38; i++) {
        f48[i]->func_000B3410(f28);
        ((C_001577A0 *)this)->func_001577A0(f48[i], -1);
    }
    if (f38 > 0 || f34 > 0) {
        ((C_000B1350 *)this)->func_000B1350();
        return 1;
    }
    return 0;
}

BmxStallConstraint *BmxStallConstraint::func_000B50B0(int param_1)
{
    u32 *p;
    ((C_00157600 *)this)->func_00157600(param_1);
    vtbl = &D_0027D37C;
    p = (u32 *)&f34;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f44;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f54 = 0;
    f58 = 0.1f;
    f5C = 0.03490658f;
    f60 = 0.05f;
    f64 = 0.01745329f;
    f6C = 15.707961f;
    f68 = 10.0f;
    return this;
}

void BmxStallConstraint::func_000B5120(void)
{
    Vec4 v;
    v.z = 0.0f;
    v.y = 0.0f;
    v.x = 0.0f;
    v.w = 1.0f;
    C_00198330 *obj = f30->func_00198330(&D_0027D3F0);
    obj->func_00199A70(f30, &v);
    f34 = Vec4(0.0f, -obj->f144 + v.y, v.z, 1.0f);
}

void BmxStallConstraint::func_000B51C0(void)
{
    Vec4 v;
    v.z = 0.0f;
    v.y = 0.0f;
    v.x = 0.0f;
    v.w = 1.0f;
    C_00198330 *obj = f30->func_00198330(&D_0027D3FC);
    obj->func_00199A70(f30, &v);
    f44 = Vec4(0.0f, -obj->f144 + v.y, v.z, 1.0f);
}

