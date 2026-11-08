/* 8 functions from 0x0012F0F0 to 0x0012FE50, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>

void *func_001E8A44(int size);

struct C_0013B210 {
    int func_0013B930(int a, void *b, int c, int d);
    void func_0013C8A0(int a, void *b, int c, int d);
};
extern C_0013B210 *D_002BEAAC;
extern f32 D_00275544;
extern f32 D_00276544;

struct Vec4w1_0012F460 {
    f32 x, y, z, w;
    Vec4w1_0012F460()
    {
        x = y = z = 0;
        w = 1.0f;
    }
};

struct C_0012F460 {
    void *f0;
    int f4;
    Vec4w1_0012F460 f8;
    Vec4w1_0012F460 f18;
    C_0012F460();
};

struct S_0012F518;

struct V4_0012FCF0 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

struct V4W_0012F0F0 {
    f32 x, y, z, w;
    V4W_0012F0F0() { x = y = z = 0; w = 1.0f; }
};

struct V4C_0012F0F0 : V4_0012FCF0 {
V4C_0012F0F0(f32 a, f32 b, f32 c, f32 d) { x = a; y = b; z = c; w = d; }
    V4C_0012F0F0 operator*(f32 s) const { return V4C_0012F0F0(x * s, y * s, z * s, 1.0f); }
    V4C_0012F0F0 operator+(const V4C_0012F0F0 &b) const { return V4C_0012F0F0(x + b.x, y + b.y, z + b.z, 1.0f); }
};

static inline V4C_0012F0F0 VMul_0012F0F0(const V4_0012FCF0 &a, f32 s)
{
    return V4C_0012F0F0(a.x * s, a.y * s, a.z * s, 1.0f);
}

static inline V4C_0012F0F0 VAdd_0012F0F0(const V4_0012FCF0 &a, const V4_0012FCF0 &b)
{
    return V4C_0012F0F0(a.x + b.x, a.y + b.y, a.z + b.z, 1.0f);
}

static inline V4C_0012F0F0 VSub_0012F0F0(const V4_0012FCF0 &a, const V4_0012FCF0 &b)
{
    return V4C_0012F0F0(a.x - b.x, a.y - b.y, a.z - b.z, 1.0f);
}

/* 0x28-byte spline key */
struct S_0012F0F0_Key {
    f32 time;
    f32 f4;
    V4_0012FCF0 f8;
    V4_0012FCF0 pos;
};

extern V4_0012FCF0 D_002A4130;
struct S_12F670_Spline {
    unsigned int count;
    int f4;
    S_0012F0F0_Key *keys;
};
struct C_0012F670 {
    char pad0[0x4B8];
    unsigned int idx;
    char pad4BC[4];
    f32 f4C0;
    f32 f4C4;
    char pad4C8[0x50];
    S_12F670_Spline *f518;
    f32 func_0012F670(f32 a, f32 b);
};

static inline void Swap_0012FCF0(S_0012F518 *&a, S_0012F518 *&b)
{
    S_0012F518 *t = a;
    a = b;
    b = t;
}

/* CarProceduralExtended */
struct C_CarProceduralExtended {
    void *vtbl;
    char pad4[0x424];
    V4_0012FCF0 f428;
    V4_0012FCF0 f438;
    char pad448[0x64];
    u32 f4AC;
    char pad4B0[8];
    u32 f4B8;
    char pad4BC[4];
    f32 f4C0;
    f32 f4C4;
    char pad4C8[0x20];
    f32 f4E8;
    char pad4EC[0x24];
    f32 f510;
    u32 f514;
    S_0012F518 *f518;
    S_0012F518 *f51C;
    void func_0012F600(f32 param_1, int param_2);
    V4_0012FCF0 func_0012F0F0(f32 t);
    void func_0012E5A0(f32 u, f32 *a, f32 *b, f32 *c, f32 *d);
    int func_0012FCF0(u32 param_1, f32 param_2);
    void func_0012FBF0(int param_1);
    void func_0012FCB0(int param_1);
};

struct C_CarProceduralExtendedVT {
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
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual f32 func_0012F670(f32 a, f32 b);
    virtual V4_0012FCF0 v52(f32 t);
};

struct C_CarProceduralOutVT {
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
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual V4_0012FCF0 *v52(V4_0012FCF0 *out, f32 t);
};

/* the 0x18-byte block CarProceduralExtended::f518 points to */
struct S_0012F518 {
    u32 count; /* number of 0x28-byte elements in arr */
    u32 f4;
    void *arr;
    u32 fC;
    u32 f10;
    u32 f14;
};

struct C_0012FE30 {
    undefined4 func_0012FE30(byte param_1);
};


V4_0012FCF0 C_CarProceduralExtended::func_0012F0F0(f32 t)
{
    S_0012F518 *ar = f518;
    f32 r;
    f32 x;

    x = ((S_0012F0F0_Key *)ar->arr)[ar->count - 1].time * f4C4;
    r = (f32)fmod(t, x);
    if (r < D_00275544) {
        r += x;
    }
    if (ar->count > 0) {
        S_0012F0F0_Key *k0;
        S_0012F0F0_Key *k1;
        f32 u;
        f32 h00, h01, h10;
        u32 j;
        u32 cur;
        V4_0012FCF0 out;

        r *= f4C0;
        for (j = f4B8 + 1; j < f518->count; j++) {
            if (!(r > ((S_0012F0F0_Key *)ar->arr)[j].time)) {
                break;
            }
            f4B8++;
        }
        while (f4B8 > 0 && r < ((S_0012F0F0_Key *)ar->arr)[f4B8].time) {
            f4B8--;
            j--;
        }
        k0 = &((S_0012F0F0_Key *)ar->arr)[f4B8];
        k1 = &((S_0012F0F0_Key *)ar->arr)[j];
        u = (r - k0->time) / (k1->time - k0->time);
        func_0012E5A0(u, &h00, &h01, &h10, &t);
        ar = f518;
        cur = f4B8;
        k1 = &((S_0012F0F0_Key *)ar->arr)[j];
        k0 = &((S_0012F0F0_Key *)ar->arr)[cur];
        const V4C_0012F0F0 &P0 = (const V4C_0012F0F0 &)k0->pos;
        const V4C_0012F0F0 &P1 = (const V4C_0012F0F0 &)k1->pos;
        V4C_0012F0F0 d1(P1.x - P0.x, P1.y - P0.y, P1.z - P0.z, 1.0f);
        V4_0012FCF0 t0;
        if (cur == 0) {
            t0 = d1;
        } else {
            f32 k = (k1->time - k0->time) / (k1->time - k0[-1].time);
            V4C_0012F0F0 p(P0.x - k0[-1].pos.x, P0.y - k0[-1].pos.y, P0.z - k0[-1].pos.z, 1.0f);
            t0 = (p + d1) * k;
        }
        V4_0012FCF0 t1;
        if (j == ar->count - 1) {
            t1 = d1;
        } else {
            f32 k = (k1->time - k0->time) / (k1[1].time - k0->time);
            V4C_0012F0F0 p(k1[1].pos.x - P1.x, k1[1].pos.y - P1.y, k1[1].pos.z - P1.z, 1.0f);
            t1 = (p + d1) * k;
        }
        out = ((P0 * h00 + P1 * h01) + (const V4C_0012F0F0 &)t0 * h10) + (const V4C_0012F0F0 &)t1 * t;
        return out;
    }
    return D_002A4130;
}

C_0012F460::C_0012F460()
{
}

void C_CarProceduralExtended::func_0012F600(f32 param_1, int param_2)
{
    if (this->f518 != 0) {
        if (this->f4E8 > D_00275544) {
            this->f510 = ((C_CarProceduralExtendedVT *)this)->func_0012F670(param_1, this->f4E8);
        } else {
            this->f510 = param_1;
        }
    }
    this->f4AC = param_2;
}

f32 C_0012F670::func_0012F670(f32 a, f32 b)
{
    C_0012F670 * volatile self = this;
    S_12F670_Spline *ar = self->f518;
    f32 r;
    u32 j;

    r = a * self->f4C0;
    j = self->idx + 1;
    if (j < ar->count) {
        do {
            if (r <= ar->keys[j].time) {
                break;
            }
            self->idx++;
            j++;
        } while (j < self->f518->count);
    }
    while (self->idx != 0 && r < ar->keys[self->idx].time) {
        self->idx--;
        j--;
    }
    if (b > D_00275544) {
        S_0012F0F0_Key *keys = ar->keys;
        u32 cur = self->idx;
        S_0012F0F0_Key *k0 = &keys[cur];
        S_0012F0F0_Key *k1 = &keys[j];
        f32 f = (b - k0->time) / (k1->time - k0->time) * k0->f4;
        u32 e = cur;
        while (!(f >= b)) {
            e--;
            if ((int)e < 0) {
                e += ar->count;
            }
            f += keys[e].f4;
        }
        k0 = &keys[e];
        if (k0->f4 == D_00275544) {
            return D_00275544;
        }
        k1 = &keys[(e + 1) % ar->count];
        return (k0->time + (f - b) / k0->f4 * (k1->time - k0->time)) * self->f4C4;
    }
    return b * self->f4C4;
}

void C_CarProceduralExtended::func_0012FBF0(int param_1)
{
    S_0012F518 *t = (S_0012F518 *)func_001E8A44(0x18);
    this->f518 = t;
    D_002BEAAC->func_0013C8A0(param_1, t, 4, 1);
    int n = ((S_0012F518 *)this->f518)->count;
    u32 *arr;
    u32 *q = (u32 *)func_001E8A44(n * 0x28);
    if (q != 0) {
        int i;
        if (n - 1 >= 0) {
            u32 *p = (u32 *)((char *)q + 0xc);
            for (i = 0; i <= n - 1; i++) {
                p[1] = 0;
                p[0] = 0;
                p[-1] = 0;
                p[2] = 0x3f800000;
                p[5] = 0;
                p[4] = 0;
                p[3] = 0;
                p[6] = 0x3f800000;
                p += 10;
            }
        }
        arr = q;
    } else {
        arr = 0;
    }
    ((S_0012F518 *)this->f518)->arr = arr;
    D_002BEAAC->func_0013C8A0(param_1, ((S_0012F518 *)this->f518)->arr, 0x28,
                              ((S_0012F518 *)this->f518)->count);
    ((S_0012F518 *)this->f518)->f4 = 1;
    ((S_0012F518 *)this->f518)->fC = 0;
}

void C_CarProceduralExtended::func_0012FCB0(int param_1)
{
    D_002BEAAC->func_0013B930(param_1, this->f518, 4, 1);
    S_0012F518 *t = (S_0012F518 *)this->f518;
    D_002BEAAC->func_0013B930(param_1, t->arr, 0x28, t->count);
}

int C_CarProceduralExtended::func_0012FCF0(u32 param_1, f32 param_2)
{
    S_0012F518 *p = f51C;
    if (!p) return 0;
    if (param_1 != 0xffffffff) { if (param_1 > p->count) return 0; }
    else if (f4B8 > p->count) return 0;
    f51C = f518;
    f518 = p;
    if (param_1 != 0xffffffff) {
        f510 = param_2;
        f4B8 = param_1;
        f4AC = 1;
        p->f10 = f51C->f10;
        if (f4E8 > D_00275544)
            f510 = ((C_CarProceduralExtendedVT *)this)->func_0012F670(f510, f4E8);
        V4_0012FCF0 tmp;
        V4_0012FCF0 *v = ((C_CarProceduralOutVT *)this)->v52(&tmp, f510);
        double t = f510 - D_00276544;
        f438 = *v;
        f428 = *((C_CarProceduralOutVT *)this)->v52(&tmp, t);
        return 1;
    }
    p->f10 = f51C->f10;
    return 1;
}

undefined4 C_0012FE30::func_0012FE30(byte param_1)
{
  int func_0012EF60(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012EF60();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
