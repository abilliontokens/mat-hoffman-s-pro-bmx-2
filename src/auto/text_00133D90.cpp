/* 10 functions from 0x00133D90 to 0x00134A10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

static __forceinline float Min_133F10(float a,float b) {float r;_mm_store_ss(&r,_mm_min_ss(_mm_load_ss(&a),_mm_load_ss(&b)));return r;}
static __forceinline float Sqrt_133F10(float a) {float r;_mm_store_ss(&r,_mm_sqrt_ss(_mm_load_ss(&a)));return r;}
extern float D_00275544;
extern float D_00276610;
extern int D_0028464C;

void func_001E8390(void *p);
void func_001E891B(void *p);

struct C_001349F0 {
    undefined4 func_001349F0(byte param_1);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00193500 {
    void func_00193500(void);
};

struct C_00133210 {
    void func_00133210(void);
};

struct Coll_00133D90 {
    char pad0[0x28];
    float f28;
    float f2C;
    float f30;
    char pad34[0x48 - 0x34];
    float f48;
};

struct C_00133E60 {
    void *vtbl;
    char pad4[0x74];
    void *f78;
    char pad7C[0x84 - 0x7C];
    void *f84;
    char pad88[0x90 - 0x88];
    void *f90;
    char pad94[0x98 - 0x94];
    C_00193500 *f98;
    void func_00133E60(void);
};

struct Obj_00133ED0 {
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
    virtual void v31(int a);
    virtual void v32();
    void func_00133ED0(void);
    void func_00133EF0(int a);
};

/* (0, 0, 0, 1) vector, stored z, y, x, w */
struct V4_00134980 {
    float x;
    float y;
    float z;
    float w;
    V4_00134980() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct C_00134980 {
    V4_00134980 a[2];
    V4_00134980 b;
    V4_00134980 c;
    V4_00134980 d;
    V4_00134980 e;
    V4_00134980 f;
    C_00134980();
};


struct Ent_00134770;
struct Mgr_00134770;
typedef void (*EntCb)(void *, void *);
struct Ent_00134770 {
    char pad0[2];
    char b2;
    char pad3[5];
    unsigned short w8;
    char pad0A[2];
    unsigned short wC;
    char pad0E[0xa0 - 0xe];
    EntCb cbA0;
    char pad_a4[3];
    unsigned char flags;
    int func_0014CA60(void);
    Ent_00134770 *func_0014CA80(int i);
    float func_0014CC20(void);
};
struct Mgr_00134770 {
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
    virtual int v29(Ent_00134770 *e);
    virtual void v30(float *center, float *half);
    char pad4[0x94];
    int f98;
    EntCb cb9c;
    char pad_a0[4];
    char pad_a4[3];
    unsigned char flags;
    int func_001332E0(Ent_00134770 *e);
    int func_00134770(int count, Ent_00134770 **list);
    void func_00134530(int max, int *cnt, Ent_00134770 **list, int type, int noDist, int noSub);
};

struct S_00134530_Iter {
    char pad0[0x40];
    void func_001A46F0(void);
    void func_001A4790(int a, int b, float *c, float *d, int e, int f, int g);
    Ent_00134770 *func_001A4840(void);
};
extern char D_002A4330;
extern char D_002A4331;
extern int D_002BA144;
extern char *D_002BF250;

#pragma auto_inline(off)
float func_00133D90(Coll_00133D90 *obj, float *p, float r)
{
    float rad = r + obj->f48;
    float dx = obj->f28 - p[0];
    float dz = obj->f30 - p[2];
    float res = AsmSqrtF(dz * dz + dx * dx) - rad;
    if (res > D_00275544) {
        return res;
    }
    return D_00275544;
}

float func_00133DF0(Coll_00133D90 *a, Coll_00133D90 *b)
{
    float rad = a->f48 + b->f48;
    float dx = a->f28 - b->f28;
    float dy = a->f2C - b->f2C;
    float dz = a->f30 - b->f30;
    float res = AsmSqrtF(dz * dz + dy * dy + dx * dx) - rad;
    if (res > D_00275544) {
        return res;
    }
    return D_00275544;
}

#pragma auto_inline(on)

void C_00133E60::func_00133E60(void)
{
    C_00193500 *p = f98;

    vtbl = (void *)&D_0028464C;
    if (p != 0) {
        p->func_00193500();
        func_001E891B(p);
    }
    if (f78 != 0) {
        func_001E8390(f78);
    }
    if (f84 != 0) {
        func_001E8390(f84);
    }
    if (f90 != 0) {
        func_001E8390(f90);
    }
    ((C_00157660 *)this)->func_00157660();
}

void Obj_00133ED0::func_00133ED0(void)
{
    v32();
    ((C_00133210 *)this)->func_00133210();
}

void Obj_00133ED0::func_00133EF0(int a)
{
    v31(a);
    ((C_00133210 *)this)->func_00133210();
}

float __fastcall func_00133F10(void *self, int unused, void *arg)
{
    if (!(((unsigned char *)self)[0xa7] & 2)) {
        ((unsigned char *)self)[0xa7] &= 0xdf;
        return D_00276610;
    }
    float dx = ((float *)self)[10] - ((float *)self)[14];
    float dy = ((float *)self)[11] - ((float *)self)[15];
    float dz = ((float *)self)[12] - ((float *)self)[16];
    ((float *)self)[19] -= AsmSqrtF(dy * dy + dz * dz + dx * dx);
    *(V4_00134980 *)((float *)self + 14) = *(V4_00134980 *)((float *)self + 10);
    if (arg && ((float *)self)[19] > D_00275544)
        return ((float *)self)[19];
    ((float *)self)[19] = 0;
    V4_00134980 a, b, e, c;
    S_00134530_Iter iter;
    iter.func_001A46F0();
    ((Mgr_00134770 *)self)->v28();
    ((unsigned char *)self)[0xa7] |= 16;
    ((Mgr_00134770 *)self)->v30(&a.x, &b.x);
    iter.func_001A4790(((Mgr_00134770 *)self)->f98, 1, &a.x, &b.x, (int)&e, (int)&c, 1);
    float m1 = c.x - (a.x + b.x), m2 = c.z - (a.z + b.z), m3 = a.z - b.z - e.z, m4 = a.x - b.x - e.x;
    float best = AsmMinF(AsmMinF(AsmMinF(m4, m3), m1), m2);
    Ent_00134770 *node;
    while ((node = iter.func_001A4840()) != 0) {
        float distance;
        if (node->b2 == D_002A4330) {
            Ent_00134770 *other = (Ent_00134770 *)((char *)node - 0x24);
            other->flags |= 16;
            distance = func_00133DF0((Coll_00133D90 *)self, (Coll_00133D90 *)other);
            if (distance == D_00275544) {
                best = 0;
                if (((Mgr_00134770 *)self)->func_001332E0(other) && ((Mgr_00134770 *)self)->v29(other)) {
                    ((unsigned char *)self)[0xa7] |= 32;
                    if (((Mgr_00134770 *)self)->cb9c) ((Mgr_00134770 *)self)->cb9c(self, other);
                    if (other->cbA0) other->cbA0(other, self);
                }
            } else if (distance < best) {
                best = distance;
                if (arg && distance < ((float *)self)[19]) arg = (void *)((unsigned int)arg * 2);
            }
        } else if (!(((unsigned char *)self)[0xa7] & 1) && node->b2 == D_002A4331) {
            V4_00134980 pos;
            pos.x = node->w8 * *(float *)(D_002BF250 + 0x578);
            pos.z = node->wC * *(float *)(D_002BF250 + 0x578);
            distance = func_00133D90((Coll_00133D90 *)self, &pos.x, node->func_0014CC20());
            if (distance == D_00275544) {
                for (int i = 0; i < node->func_0014CA60(); i++) {
                    Ent_00134770 *other = node->func_0014CA80(i);
                    if (other) {
                        other->flags |= 16;
                        best = 0;
                        if (((Mgr_00134770 *)self)->v29(other)) {
                            ((unsigned char *)self)[0xa7] |= 32;
                            if (((Mgr_00134770 *)self)->cb9c) ((Mgr_00134770 *)self)->cb9c(self, other);
                            if (other->cbA0) other->cbA0(other, self);
                        }
                    }
                }
            } else if (arg && distance < best) {
                best = distance;
                if (distance < ((float *)self)[19]) arg = (void *)((unsigned int)arg * 2);
            }
        }
    }
    int active = 0;
    for (int *p = (int *)((Mgr_00134770 *)self)->f98; p; p = (int *)*p) {
        int *q = (int *)p[1];
        if (q[10] != q[11]) active = 1;
    }
    if (active) {
        iter.func_001A4790(((Mgr_00134770 *)self)->f98, 2, &a.x, &b.x, 0, 0, 0);
        while ((node = iter.func_001A4840()) != 0) {
            if (node->b2 == D_002A4330) {
                Ent_00134770 *other = (Ent_00134770 *)((char *)node - 0x24);
                other->flags |= 16;
                if (func_00133DF0((Coll_00133D90 *)self, (Coll_00133D90 *)other) == D_00275544 &&
                    ((Mgr_00134770 *)self)->func_001332E0(other) && ((Mgr_00134770 *)self)->v29(other)) {
                    ((unsigned char *)self)[0xa7] |= 32;
                    if (((Mgr_00134770 *)self)->cb9c) ((Mgr_00134770 *)self)->cb9c(self, other);
                    if (other->cbA0) other->cbA0(other, self);
                }
            }
        }
    }
    if (((unsigned char *)self)[0xa7] & 32) {
        V4_00134980 pos;
        pos.y = -10000;
        *(V4_00134980 *)((float *)self + 14) = pos;
        return ((float *)self)[19] = D_00275544;
    }
    return ((float *)self)[19] = best;
}

void Mgr_00134770::func_00134530(int max, int *cnt, Ent_00134770 **list, int type, int noDist, int noSub)
{
    S_00134530_Iter iter;
    Ent_00134770 *node;

    *cnt = 0;
    if ((flags & 2) == 0) {
        flags &= 0xdf;
        return;
    }
    flags |= 0x10;
    V4_00134980 b;
    V4_00134980 a;
    v30((float *)&b, (float *)&a);
    iter.func_001A46F0();
    iter.func_001A4790(f98, type, (float *)&b, (float *)&a, 0, 0, 1);
    for (node = iter.func_001A4840(); node != 0 && *cnt < max; node = iter.func_001A4840()) {
        if (node->b2 == D_002A4330) {
            Ent_00134770 *c = (Ent_00134770 *)((char *)node - 0x24);
            c->flags |= 0x10;
            if (noDist != 0 || func_00133DF0((Coll_00133D90 *)this, (Coll_00133D90 *)c) == D_00275544) {
                if (func_001332E0(c) != 0) {
                    list[*cnt] = node;
                    (*cnt)++;
                }
            }
        } else if (noSub == 0 && node->b2 == D_002A4331) {
            float v[4];
            int i;

            v[3] = 1.0f;
            v[1] = 0.0f;
            v[0] = (float)node->w8 * *(float *)(D_002BF250 + 0x578);
            v[2] = (float)node->wC * *(float *)(D_002BF250 + 0x578);
            if (noDist != 0 || func_00133D90((Coll_00133D90 *)this, v, node->func_0014CC20()) == D_00275544) {
                for (i = 0; i < node->func_0014CA60(); i++) {
                    Ent_00134770 *sub = node->func_0014CA80(i);
                    if (sub == 0) {
                        return;
                    }
                    sub->flags |= 0x10;
                    list[*cnt] = node;
                    (*cnt)++;
                }
            }
        }
    }
}

int Mgr_00134770::func_00134770(int count, Ent_00134770 **list)
{
    int i;

    flags |= 0x10;
    v28();
    for (i = 0; i < count; i++) {
        Ent_00134770 *e = list[i];
        if (e->b2 == D_002A4330) {
            Ent_00134770 *c = list[i] ? (Ent_00134770 *)((char *)list[i] - 0x24) : 0;
            c->flags |= 0x10;
            if (func_00133DF0((Coll_00133D90 *)this, (Coll_00133D90 *)c) == D_00275544) {
                if (func_001332E0(c) && v29(c)) {
                    unsigned char f = flags;
                    int d = D_002BA144;
                    f |= 0x20;
                    *(volatile unsigned char *)&flags = f;
                    if (d) c->flags |= 0x40;
                    if (cb9c) cb9c(this, c);
                    if (c->cbA0) c->cbA0(c, this);
                }
            }
        } else if (!(flags & 1) && e->b2 == D_002A4331) {
            float v[4];
            int j;

            v[3] = 1.0f;
            v[1] = 0.0f;
            v[0] = (float)e->w8 * *(float *)(D_002BF250 + 0x578);
            v[2] = (float)e->wC * *(float *)(D_002BF250 + 0x578);
            if (func_00133D90((Coll_00133D90 *)this, v, e->func_0014CC20()) == D_00275544) {
                for (j = 0; j < e->func_0014CA60(); j++) {
                    Ent_00134770 *c = e->func_0014CA80(j);
                    c->flags |= 0x10;
                    if (v29(c)) {
                        unsigned char f = flags;
                        int d = D_002BA144;
                        f |= 0x20;
                        *(volatile unsigned char *)&flags = f;
                        if (d) c->flags |= 0x40;
                        if (cb9c) cb9c(this, c);
                        if (c->cbA0) c->cbA0(c, this);
                    }
                }
            }
        }
    }
    return (flags >> 5) & 1;
}

C_00134980::C_00134980()
{
}

undefined4 C_001349F0::func_001349F0(byte param_1)
{
  int func_00133E60(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00133E60();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
