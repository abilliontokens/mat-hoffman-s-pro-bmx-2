/* 9 functions from 0x00022060 to 0x00022E30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_002761A4;

struct S_Vec4i_00022320 {
    int x, y, z, w;
};
extern float D_002A0F74, D_002A0F78, D_002A0F7C, D_002A0F80;
extern float D_002A0F94, D_002A0F98, D_002A0F9C, D_002A0FA0;
extern char D_002A0FA4[];

struct S_002B9120 {
    char pad0[0x4A8];
    int *f4A8;
    char pad4AC[0x30];
    char *f4DC;
};
extern S_002B9120 *D_002B9120;

void func_001E891B(void *p);

static inline void wrap_00022060(float &a, float pi, float twopi, float npi)
{
    if (a > pi) {
        a -= twopi;
    } else if (a < npi) {
        a += twopi;
    }
}

struct V4_000229C0 {
    float x, y, z, w;
};
struct Item_000229C0 {
    char pad0[0x24];
    int f24;
    void func_000223B0(V4_000229C0 pos, float dy);
};
struct L_A { int pad[5]; int count; Item_000229C0 **items; };
struct L_B { L_A *l; };
struct Arg_000229C0 {
    char pad0[0x28];
    V4_000229C0 pos;
};
struct C_000229C0 {
    char pad0[0x28];
    float f28;
    char pad2C[0x44];
    L_B *f70;
    void func_000229C0(Arg_000229C0 *arg);
};
extern double D_00276088;
extern float D_002754B0, D_00275460;
extern const float D_002756B8;
extern "C" int func_001E8833(void);
extern "C" void func_00158390(float r, V4_000229C0 v2, V4_000229C0 v1, V4_000229C0 *out);

struct C_00157660 {
    void func_00157660(void);
};

struct C_00022530 {
    undefined4 func_00022530(byte param_1);
};

struct Obj_00022320 {
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
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35(int a, int b, int c);
    void func_00199600(S_Vec4i_00022320 v);
    void func_00198F50(char *a, char *b, int c, int d, int e);
    void func_0019ABA0(int a, int b);
};

struct PageObj_00022DF0 {
    virtual void destroy(int flags);
};

struct C_00022DF0 {
    void *vtbl;
    char pad4[0x24];
    PageObj_00022DF0 *f28;
    void *func_00022DF0(int flags);
};

struct C_00022320 {
    char pad0[0x28];
    int f28;
    Obj_00022320 *f2C;
    Obj_00022320 *func_00022320(int a);
};

struct Vec4_000223B0 {
    float x, y, z, w;
    Vec4_000223B0() { x = y = z = 0; w = 1; }
};

struct S_000223B0_Obj {
    void func_00199600(Vec4_000223B0 v);
    void func_001983A0(void);
};

struct S_000223B0_State {
    S_Vec4i_00022320 v;
    int f10;
    char pad14[8];
    int f1c;
    char pad20[0x20];
    int f40;
};

struct S_000223B0_Zero {
    char pad0[0xc];
    int f[9];
};

struct C_000223B0 {
    char pad0[0x24];
    int f24;
    char pad28[4];
    S_000223B0_Obj *f2C;
    S_000223B0_State *f30;
    S_000223B0_Zero *f34;
    int func_000223B0(Vec4_000223B0 pos, float dy);
};

extern "C" int func_00134DE0(Vec4_000223B0 *, Vec4_000223B0 *, Vec4_000223B0 *, int, int, int, int, int, int);


extern float D_00275AEC, D_00275994;
struct Group_00022550 {
    char pad0[0x10];
    int count, total;
    C_00022320 **items;
    char pad1c[0x18];
    int f34;
};
struct C_00022550 {
    char pad0[0x44];
    int count;
    char pad48[0x28];
    Group_00022550 **groups;
    void func_001577A0(Obj_00022320 *, int *);
    int func_00022550();
};

struct V4_B70 { float x, y, z, w; };
struct Obj_B70 {
    void func_00199110(int a, V4_B70 *b, char *c, int d, int e, int f);
    void func_00199600(V4_B70 v);
};
struct Hold_B70 { char pad0[4]; Obj_B70 *o; char pad8[8]; int f10; };
struct Y_B70 { void *f0; char pad4[4]; void *f8; };
struct Own_B70 { char pad0[0x1a4]; Hold_B70 *h; char pad1a8[4]; Y_B70 *y; };
struct P_B70 { float x, y, z, pad[3]; };
struct T_B70 { char pad0[0x18]; P_B70 *pts; char pad1c[0x10]; char f2c; char f2d; char pad2e; char f2f; };
struct E_B70 {
    char pad0[0x28]; Own_B70 *own; T_B70 *t; int f30, f34, f38, f3c, f40, pad44, f48;
    V4_B70 a; V4_B70 b; char pad6c[0xc]; char f78, f79, pad7a, f7b;
};
struct Row_B70 { int count; int f4; int pad8[2]; int *f10; };
struct G_B70 { char pad0[0x124]; int f124; char pad128[0x110]; int f238; char pad23c[0xa4]; struct { char pad[0x10]; float f10; } *f2e0; };
struct W_B70 { char pad[0x64]; T_B70 **ts; };
extern G_B70 *D_002A8490;
extern W_B70 *D_002B7E18;
extern float D_00276278;
extern "C" int func_001E8858();
void __stdcall func_00166C80(void *, int);
void __stdcall func_00164820(void *);
struct C_B70 {
    char pad0[0x2c]; int f2c; int f30; int f34; int f38; char pad3c[0xc]; int f48; char pad4c[8]; int f54; char pad58[8];
    E_B70 **ents; T_B70 **f64; Row_B70 **rows;
    void func_00022B70();
};

/* the engine's file wrapper (D_002BEAAC) */
struct S_00022730_File {
    int func_0013C9F0(int name, const char *mode);
    int func_0013AFB0(int h);
    char *func_0013C6E0(int h, char *buf, int size);
    void func_0013AFF0(int h, int off, int mode);
    void func_0013C110(int h);
};
extern S_00022730_File *D_002BEAAC;
extern char D_00276274[], D_0027626C[], D_00276260[], D_00276234[];

int func_001E8BB0(char *a, char *b, unsigned int n);
void func_001E8B76(char *str, char *fmt, ...);
void *func_001E8A44(int size);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);
void func_00021720(void);

struct S_00022730_Vec3 {
    float x, y, z;
};

/* one 0x18-byte keyframe: two vectors */
struct S_00022730_Key {
    S_00022730_Vec3 a;
    S_00022730_Vec3 b;
};

struct S_00022730_Anim {
    char pad0[4];
    int count;
    char pad8[0x10];
    S_00022730_Key *items;
};

struct C_00022730 {
    char pad0[0x64];
    S_00022730_Anim **f64;
    int func_00022730(int name, int idx);
};

#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

extern float D_00276230, D_002755E8, D_002756D0, D_002756E8;
extern "C" void func_00167FE0(void *a, void *b, float x, float y, float z);

struct S_00022060_Src {
    float x, y, z;
    char pad0C[0xC];
    int f18;
};

struct S_00022060_Cfg {
    char pad0[0x28];
    float f28;
    float f2C;
    float f30;
};

struct S_00022060_Dst {
    void func_00198F50(Vec4_000223B0 *a, Vec4_000223B0 *b, int c, int d, int e);
};

struct C_00022060 {
    S_00022060_Src *f0;
    S_00022060_Dst *f4;
    S_00022060_Cfg *f8;
    float fC, f10, f14, f18, f1C, f20, f24, f28, f2C;
    int func_00022060(float dt);
};

static __forceinline float length_00022060(S_00022060_Src *v)
{
    float square = v->x * v->x + v->y * v->y + v->z * v->z;
    float r;
    _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&square)));
    return r;
}

static inline void wrap_00022060(float *a)
{
    if (*a > D_002756D0) {
        *a = *a - D_002756B8;
    } else if (*a < D_002756E8) {
        *a = *a + D_002756B8;
    }
}

int C_00022060::func_00022060(float dt)
{
    float r;
    float len;

    if (D_002A8490->f124 == 0) {
        if (f0->f18 != 0) {
            fC = 0;
            f10 = 0;
            f14 = 0;
            f18 = 0;
            f1C = 0;
            f20 = 0;
            f24 = 0;
            f28 = 0;
            f2C = 0;
        } else {
            fC += dt * f18;
            f10 += dt * f1C;
            f14 += dt * f20;
            if (fC > D_002756D0) {
                fC = fC - D_002756B8;
            } else if (fC < D_002756E8) {
                fC = fC + 6.28318548f;
            }
            if (f10 > D_002756D0) {
                f10 = f10 - D_002756B8;
            } else if (f10 < D_002756E8) {
                f10 = f10 + 6.28318548f;
            }
            if (f14 > D_002756D0) {
                f14 = f14 - D_002756B8;
            } else if (f14 < D_002756E8) {
                f14 = f14 + 6.28318548f;
            }
            f18 += dt * f24;
            f1C += dt * f28;
            f20 += dt * f2C;
            r = AsmSqrtF(f0->x * f0->x + f0->y * f0->y + f0->z * f0->z);
            len = D_00276230 * (r * dt);
            f24 = ((float)func_001E8833() * D_002754B0 - D_002755E8) * f8->f28 * len;
            f28 = ((float)func_001E8833() * D_002754B0 - D_002755E8) * f8->f30 * len;
            f2C = ((float)func_001E8833() * D_002754B0 - D_002755E8) * f8->f2C * len;
        }
        Vec4_000223B0 a;
        Vec4_000223B0 b;
        func_00167FE0(&b, &a, fC, f14, f10);
        f4->func_00198F50(&b, &a, 0, 1, 0);
    }
    return 1;
}

Obj_00022320 *C_00022320::func_00022320(int a)
{
    f2C->v35(a, 1, 0);
    f2C->func_00199600(*(S_Vec4i_00022320 *)&D_002A0F74);
    f2C->func_00198F50(D_002A0FA4, (char *)&D_002A0F94, 0, 1, 0);
    f2C->func_0019ABA0(*D_002B9120->f4A8, 2);
    f28 = 1;
    return f2C;
}

int C_000223B0::func_000223B0(Vec4_000223B0 pos, float dy)
{
    Vec4_000223B0 result;
    Vec4_000223B0 hit;
    Vec4_000223B0 line[2];
    S_000223B0_State *s;
    S_000223B0_Zero *z;

    line[0] = pos;
    line[1] = pos;
    result.x = result.y = result.z = 0;
    result.w = 1;
    hit.x = hit.y = hit.z = 0;
    hit.w = 1;
    line[0].y = 200.0f;
    line[1].y = -200.0f;
    if (func_00134DE0(line, &hit, &result, 0, 0, 0, -1, 0, 1) == 0) {
        return 0;
    }
    hit.y += dy;
    f2C->func_00199600(hit);
    f2C->func_001983A0();
    s = f30;
    s->f1c = 0;
    s->v = *(S_Vec4i_00022320 *)&D_002A0F74;
    s->f40 = 0;
    s->f10 = 1;
    z = f34;
    z->f[0] = 0;
    z->f[1] = 0;
    z->f[2] = 0;
    z->f[3] = 0;
    z->f[4] = 0;
    z->f[5] = 0;
    z->f[6] = 0;
    z->f[7] = 0;
    z->f[8] = 0;
    f24 = 1;
    return 1;
}

undefined4 C_00022530::func_00022530(byte param_1)
{
  int func_000214B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000214B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_00022550::func_00022550()
{
    for (int i = 0; i < count; i++) {
        int j;
        for (j = 0; j < groups[i]->total; j++)
            func_001577A0(groups[i]->items[j]->func_00022320((int)&groups[i]->f34), (int *)-1);
        for (j = 0; j < groups[i]->count; j++) {
            V4_000229C0 p = *(V4_000229C0 *)(D_002B9120->f4DC + 0x24);
            V4_000229C0 a;
            a.x = D_002A0F74;
            a.y = D_002A0F78;
            a.z = D_002A0F7C;
            a.w = D_002A0F80;
            a.x = (float)func_001E8833() * D_002754B0 * D_00275AEC + D_00275994;
            float r = D_002756B8 * ((float)func_001E8833() * D_002754B0);
            func_00158390(r, *(V4_000229C0 *)&D_002A0F94, a, &a);
            p.x += a.x;
            p.y = *(volatile float *)&a.y + p.y;
            p.z = *(volatile float *)&a.z + p.z;
            ((Item_000229C0 *)groups[i]->items[j])->func_000223B0(p, 0);
        }
    }
    return 1;
}

int C_00022730::func_00022730(int name, int idx)
{
    char s2[0x100];
    char s1[0x100];
    char line[0x400];
    float tmp[9];
    int count;
    int handle;
    int i;

    handle = D_002BEAAC->func_0013C9F0(name, D_00276274);
    if (handle == -1) {
        return 0;
    }
    count = 0;
    while (!D_002BEAAC->func_0013AFB0(handle)) {
        D_002BEAAC->func_0013C6E0(handle, line, 0x400);
        if (func_001E8BB0(line, D_0027626C, 5) == 0) {
            count++;
        }
    }
    f64[idx]->count = count;
    if (count > 0) {
        S_00022730_Key *p = (S_00022730_Key *)func_001E8A44(count * 0x18);
        if (p != 0) {
            func_00011FF0(p, 0x18, count, (void *)func_00021720);
        } else {
            p = 0;
        }
        f64[idx]->items = p;
        Vec4_000223B0 b;
        Vec4_000223B0 a;
        D_002BEAAC->func_0013AFF0(handle, 0, 0);
        i = -1;
        while (!D_002BEAAC->func_0013AFB0(handle)) {
            D_002BEAAC->func_0013C6E0(handle, line, 0x400);
            if (func_001E8BB0(line, D_0027626C, 5) == 0) {
                i++;
                if (i >= count) {
                    i = count - 1;
                }
            } else if (func_001E8BB0(line, D_00276260, 9) == 0) {
                func_001E8B76(line, D_00276234, s1, s2, &tmp[0], &tmp[1], &tmp[2], &tmp[0], &tmp[1], &tmp[2], &b.x, &b.z, &b.y, &a.x, &a.z, &a.y);
                f64[idx]->items[i].b.x = b.x;
                f64[idx]->items[i].b.y = b.y;
                f64[idx]->items[i].b.z = b.z;
                f64[idx]->items[i].a.x = a.x;
                f64[idx]->items[i].a.y = a.y;
                f64[idx]->items[i].a.z = a.z;
            }
        }
    }
    D_002BEAAC->func_0013C110(handle);
    return 1;
}

void C_000229C0::func_000229C0(Arg_000229C0 *arg)
{
    if (f28 < D_00276088) {
        int n = 5;
        for (int i = 0; i < f70->l->count && n > 0; i++) {
            if (f70->l->items[i]->f24 == 0) {
                V4_000229C0 v = arg->pos;
                V4_000229C0 w = *(V4_000229C0 *)&D_002A0F74;
                w.x = (float)func_001E8833() * D_002754B0 * 2.0f + D_00275460;
                float r = D_002756B8 * ((float)func_001E8833() * D_002754B0);
                func_00158390(r, *(V4_000229C0 *)&D_002A0F94, w, &w);
                v.x = v.x + w.x;
                v.y = v.y + w.y;
                v.z = v.z + w.z;
                f70->l->items[i]->func_000223B0(v, 20.0f);
                --n;
            }
        }
        f28 = 3.0f;
    }
}

void C_B70::func_00022B70()
{
    int i, j;
    f2c = 0;
    f48 = 0;
    G_B70 *g = D_002A8490;
    float t = g->f2e0->f10;
    int n = f34;
    f54 = (long)(t * D_00276278 / n) + g->f238;
    for (i = 0; i < f34; i++) ((char *)f64[i])[0x2d] = 0;
    for (i = 0; i < f38; i++) {
        rows[i]->f4 = 0;
        for (j = 0; j < rows[i]->count; j++) rows[i]->f10[j * 4 + 3] = 0;
    }
    for (i = 0; i < f30; i++) {
        E_B70 *e = ents[i];
        e->f48 = 0;
        ents[i]->f7b = 1;
        ents[i]->f78 = 0;
        e = ents[i];
        e->f30 = e->f3c;
        int k = ents[i]->f30;
        ents[i]->t = D_002B7E18->ts[k];
        e = ents[i];
        e->f34 = e->f40;
        e = ents[i];
        e->f38 = e->f34 + 1;
        e = ents[i];
        if (e->t->f2c == 1) {
            e->f79 = 1;
            e = ents[i];
            P_B70 *p = &e->t->pts[e->f38];
            e->a.x = p->x; e->a.y = p->y; e->a.z = p->z; e->a.w = 1.0f;
            Own_B70 *o = ents[i]->own;
            Hold_B70 *h = o->h;
            Y_B70 *y = o->y;
            if (h->f10 == 0) func_00166C80(y->f8, 1);
            else func_00164820(y->f8);
        } else {
            e->f79 = 0;
            e = ents[i];
            if (e->t->f2f == 0) e->t->f2d = 1;
            e = ents[i];
            e->own->h->o->func_00199110(0, (V4_B70 *)((char *)e->t + 0x1c), (char *)&D_002A0F94, 0, 1, 1);
            e = ents[i];
            e->a = e->b;
            Own_B70 *o = ents[i]->own;
            Hold_B70 *h = o->h;
            Y_B70 *y = o->y;
            if (h->f10 == 0) func_00166C80(y->f0, 1);
            else func_00164820(y->f0);
        }
        e = ents[i];
        P_B70 *p = &e->t->pts[e->f34];
        e->b.x = p->x; e->b.y = p->y; e->b.z = p->z; e->b.w = 1.0f;
        e = ents[i];
        e->own->h->o->func_00199600(e->b);
    }
}

void *C_00022DF0::func_00022DF0(int flags)
{
    vtbl = (void *)&D_002761A4;
    if (f28 != 0) {
        f28->destroy(1);
    }
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

