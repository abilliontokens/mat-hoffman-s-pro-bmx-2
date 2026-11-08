/* 7 functions from 0x00038760 to 0x000395A0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

int func_001EA426(void *a, void *b);

struct S_00038760_Arr {
    int count;
    void **items;
    void *at(int i) {
        if (count > 0 && items != 0 && i < count)
            return items[i];
        return 0;
    }
    void *atv(int i) {
        int n = *(volatile int *)&count;
        if (n > 0 && items != 0 && i < n)
            return items[i];
        return 0;
    }
};

struct S_00038760_Vec {
    float x, y, z;
};

struct S_00038760_Data {
    char pad0[0x24];
    S_00038760_Vec pos;      /* 0x24 */
};

struct S_00038760_Owner {
    char pad0[0xE8];
    void *fE8;               /* 0xE8 */
    void *fEC;               /* 0xEC */
};

struct S_00038760_Entry {
    int type;                /* 0x00 */
    S_00038760_Owner *owner; /* 0x04 */
    int pad8;
    int padC;
    void *data;              /* 0x10 */
};

struct S_00038760_Conv {
    int *out;
    float v;
};

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

static __forceinline void Round_00038850(int *out, float value)
{
    AsmFloatToIntRound(value, out);
}
extern char D_00276E90[];
extern int D_002B911C;
int func_001E8AF0(void *, void *);
struct C_00038850_Item {
    char pad0[0x68];
    int f68;
    char pad6C[0x154];
    void *owner;
    void func_0019C320(float *out);
};

#include "grid_000392B0.h"

struct S_000392B0_Text {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    void func_0008B670(char *s);
};

extern char D_00276EC8[];
extern char D_00276EA0[];

struct C_00038760 {
    char pad0[0x64];
    C_00038760 *f64;         /* 0x64 */
    char pad68[0x450 - 0x68];
    int f450;                /* 0x450 */
    char pad454[0x45C - 0x454];
    int f45C;                /* 0x45C */
    int f460;                /* 0x460 */
    char pad464[0x490 - 0x464];
    int f490;                /* 0x490 */
    char pad494[0x49C - 0x494];
    S_000392B0_Obj **f49C;   /* 0x49C */
    char pad4A0[0x558 - 0x4A0];
    S_000392B0_Text *f558;   /* 0x558 */
    char pad55C[0x564 - 0x55C];
    S_000392B0_Slot *f564;   /* 0x564 */
    char pad568[0x5A0 - 0x568];
    S_00038760_Arr arr;      /* 0x5A0 */
    S_00038760_Arr arr2;     /* 0x5A8 */
    int pad5B0;
    S_00038760_Arr arr3;
    C_00038850_Item *func_00038850(void *owner, float x, float y, float z, int unused, int allow);
    int *func_000389C0(int param_1);
    int *func_00038A10(int param_1, int *param_2);
    int func_00038A70(void *param_1, void **param_2);
    int func_00038760(float x, float y, float z, int unused, int *out);
    int func_00038B10(void *obj, S_000392B0_Vec4 va, S_000392B0_Vec4 vb, int *ox, int *oy, int *oz, int flag);
    int func_000392B0();
};
extern float D_00276E9C;
extern float D_00276E98;
extern float D_00275548;
extern float D_00275AEC;
extern float D_00275460;

int C_00038760::func_00038760(float x, float y, float z, int unused, int *out)
{
    int ret = 0;
    int i;
    int j;

    for (i = 0; i < arr.count; i++) {
        S_00038760_Entry *e = (S_00038760_Entry *)arr.atv(i);
        if (e->type == 1) {
            S_00038760_Vec *v = &((S_00038760_Data *)e->data)->pos;
            if (x == v->x && y == v->y && z == v->z) {
                ret = 1;
                for (j = 0; j < arr.count; j++) {
                    S_00038760_Entry *e2 = (S_00038760_Entry *)arr.atv(j);
                    if (e2->type == 2) {
                        if (e2->owner->fE8 == e->data) {
                            *out = j;
                            break;
                        }
                        if (e2->owner->fEC == e->data) {
                            *out = j;
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    return ret;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
C_00038850_Item *C_00038760::func_00038850(void *owner, float x, float y, float z, int unused, int allow)
{
    int ix, iy, iz;
    float v[4];

    v[2] = 0.0f;
    v[1] = 0.0f;
    v[0] = 0.0f;
    v[3] = 1.0f;
    _ReadWriteBarrier();
    for (int i = 0; i < arr3.count; i++) {
        C_00038850_Item *e = (C_00038850_Item *)arr3.at(i);
        e->func_0019C320(v);
        Round_00038850(&ix, v[0]);
        _ReadWriteBarrier();
        Round_00038850(&iy, v[1]);
        _ReadWriteBarrier();
        Round_00038850(&iz, v[2]);
        _ReadWriteBarrier();
        v[0] = (float)ix;
        v[1] = (float)iy;
        v[2] = (float)iz;
        if (x == v[0] && y == v[1] && z == v[2]) {
            if (owner != 0 && func_001E8AF0((char *)owner + 0x28, D_00276E90) != 0) {
                if (e->owner == 0)
                    return e;
            } else if (e->owner == owner && (allow || e->f68 != D_002B911C)) {
                return e;
            }
        }
    }
    return 0;
}

int *C_00038760::func_000389C0(int param_1)
{
    int i;
    for (i = 0; i < arr.count; i++) {
        int *e = (int *)arr.at(i);
        if ((e[0] == 0 || e[0] >= 3) && e[2] == param_1)
            return e;
    }
    return 0;
}

int *C_00038760::func_00038A10(int param_1, int *param_2)
{
    int i;
    for (i = 0; i < arr.count; i++) {
        int *e = (int *)arr.at(i);
        if (e[0] == 1 && e[4] == param_1) {
            if (param_2)
                *param_2 = i;
            return e;
        }
    }
    return 0;
}

int C_00038760::func_00038A70(void *param_1, void **param_2)
{
    int i;
    for (i = 0; i < f64->arr2.count; i++) {
        if (func_001EA426(param_1, f64->arr2.at(i)) == 0) {
            *param_2 = f64->arr2.at(i);
            return i;
        }
    }
    return -1;
}

int C_00038760::func_000392B0()
{
    S_000392B0_Vec4 a;
    S_000392B0_Vec4 b;
    S_000392B0_Vec4 c;
    int px, py, pz;
    S_000392B0_Block *blk;
    int w, h, d;
    int i, j, k;
    int idx, idx2;
    S_000392B0_Obj **grid;

    if (f564 == 0)
        return 0;
    if (f564->type == 0 || f564->type >= 3) {
        f564->obj->func_00197E70(&a);
        f564->obj->func_00197B40(&b, &c);
        if (func_00038B10(&f564->obj->f28, a, b, &px, &py, &pz, 1) == 0)
            return 0;
        blk = 0;
        func_00038A70(&f564->obj->f28, (void **)&blk);
        w = blk->w;
        h = blk->h;
        d = blk->d;
        if (d > f45C)
            d = f45C;
        for (i = 0; i < h; i++) {
            for (j = 0; j < w; j++) {
                for (k = 0; k < d; k++) {
                    if (b.x > D_00276E9C || b.x < D_00276E98) {
                        idx = ((i + px) * f45C + k + py) * f460 + j + pz;
                        idx2 = ((i + px) * f45C + k + py - 1) * f460 + j + pz;
                    } else {
                        idx = ((j + px) * f45C + k + py) * f460 + i + pz;
                        idx2 = ((j + px) * f45C + k + py - 1) * f460 + i + pz;
                    }
                    grid = f49C;
                    if (grid[idx] != 0) {
                        f558->func_0008B670(D_00276EC8);
                        f490 = 0;
                        f558->v6();
                        return 0;
                    }
                    if (py != f450 && k == 0 && grid[idx2] == 0) {
                        f558->func_0008B670(D_00276EA0);
                        f490 = 0;
                        f558->v6();
                        return 0;
                    }
                    grid[idx] = f564->obj;
                }
            }
        }
    }
    return 1;
}

