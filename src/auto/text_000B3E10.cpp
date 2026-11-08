/* 3 functions from 0x000B3E10 to 0x000B4850, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
#include <string.h>

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
extern char D_0027D144[];
extern char D_0027D138[];
extern char D_002764F0[];
extern char D_0027D250[];
extern char D_002A5FA8[];
extern char D_002A5348[];
extern char D_0027D158[];
extern char D_002A5870[];
extern char D_0027D244[];
extern char D_0027D240[];
extern char D_0027D1A4[];
extern char D_0027D230[];
extern char D_0027D1D8[];
extern char D_0027D224[];
extern char D_0027D21C[];
extern char D_0027D210[];
extern char D_0027D204[];
extern char D_0027D1FC[];
extern char D_0027D1EC[];

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" int func_001EA426(const char *a, const char *b);

struct S_B3E10_Obj;

struct S_B4300_Stream {
    void func_00168BE0(const char *key, const char *def, char *dst, int n);
};

struct S_B4300_Cfg {
    char pad0[8];
    S_B3E10_Obj *f8;
    char pad0c[0x108 - 0x0c];
    int f108;
    char pad10c[0x118 - 0x10c];
    int f118;
    char pad11c[0x144 - 0x11c];
    char f144;
    char pad145[0x14c - 0x145];
    char f14c[1];
};

struct __single_inheritance C_000B4300;
struct S_B3E10_Obj;
#pragma pointers_to_members(full_generality, single_inheritance)
typedef void (C_000B4300::*B4300_Cb)(void);

struct S_B4300_Mgr {
    int func_0018E740(void *obj, const char *name);
    void func_0018CF40(int id, B4300_Cb cb, const char *a, const char *b, const char *c, int d);
    void func_0018D330(int id, int k, const char *a, const char *b);
    void func_00191270(void *obj, const char *name, S_B4300_Stream *s, char *buf);
};

extern S_B4300_Mgr *D_002EFE08;

struct S_B3E10_Quad {
    int a, b, c, d;
};

/* device object at owner+0x400: handle registration and camera-space query */
struct S_B4530_Dev {
    void func_00181DB0(int h);
    void func_001820B0(void *cb, void *ctx, int h);
    void func_00199A70(int a, float *out);
};

struct S_B4530_Flag {
    char pad0[0x14];
    int f14;
};

struct S_B3E10_Info {
    char pad0[4];
    int f4;
    int f8;
    S_B3E10_Quad fC;
    char f1c[0x10];
    char f2c[0x10];
    char f3c[0x104];
    char f140[0x208];
    char f348[0x3c];
    char f384[1];
    char pad385[0x400 - 0x385];
    S_B4530_Dev *f400;
    char pad404[0x4b8 - 0x404];
    int f4b8;
    char pad4bc[0x510 - 0x4bc];
    float f510;
    char pad514[4];
    S_B4530_Flag *f518;
    int func_0012FE50(float a, int b);
};

struct S_B3E10_Obj;

struct S_B3E10_Sub {
    char pad0[4];
    int f4;
    int f8;
};

struct S_B3E10_Obj {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
    virtual void v80(); virtual void v84(); virtual void v88();
    virtual int Load(char *path, int a, int b);
    char pad4[0x24];
    char f28[0x190];
    S_B3E10_Sub *f1b8;
    S_B3E10_Obj *func_00143580(int a);
    void func_00199600(S_B3E10_Quad q);
    void func_00198F50(void *a, void *b, int c, int d, int e);
    void func_0019ABA0(int a, int b);
    void func_00182020(int a, int b);
};

struct S_B3E10_Holder {
    char pad0[8];
    S_B3E10_Obj *f8;
};

struct S_B3E10_Game {
    char pad0[0x348];
    int f348;
    char pad34c[0x4a8 - 0x34c];
    int *f4a8;
};

struct S_B3E10_Res {
    int func_001617F0(void *a, int b);
};

extern char D_0027C588[];
extern char D_002A5EA0[];
extern char D_002A60B0[];
extern char D_002A45E0[];
extern char D_00275678[];
extern char D_0027D1E0[];
extern char D_0027D1D0[];
extern char D_0027D1BC[];
extern char D_0027D1AC[];
extern char D_0027D194[];
extern char D_0027D18C[];
extern char D_0027D178[];
extern S_B3E10_Game *D_002B9120;
extern S_B3E10_Res *D_002A829C;
extern "C" char *func_001E8920(char *dst, const char *src, int n);
extern "C" void *func_001E8A44(unsigned int n);
extern "C" void func_001E891B(void *p);
extern "C" char D_000B1E50[];
extern "C" char D_000B1E60[];
extern "C" char D_000B1E70[];

union B4300_Callback { B4300_Cb cb; void *p; };

inline B4300_Cb B4300_CbOf(void *p)
{
    union { void *p; B4300_Cb f; } u;
    u.p = p;
    return u.f;
}

__forceinline void B3E10_Copy(char *dst, const char *src, int max)
{
    int length = strlen(src);
    int limit = max;
    int n = AsmMinI(limit, length);
    func_001E8920(dst, src, n);
    dst[n] = 0;
}

struct S_B4530_Anim {
    void func_001A2AA0(int a);
};

struct S_B4530_Pair {
    char pad0[8];
    S_B4530_Anim *f8;
};

struct S_B4530_Hold {
    char pad0[0x28];
    S_B4530_Pair *f28;
};

struct S_B4530_Mode {
    char pad0[0x1c8];
    int f1c8;
};

struct S_B4530_Root {
    char pad0[0x124];
    int f124;
    char pad128[0x2a4 - 0x128];
    S_B4530_Mode *f2a4;
};

struct S_B4530_Ent {
    int f0;
    int f4;
    char pad8[4];
    int fC;
    int f10;
};

struct S_B4530_List {
    char pad0[0x40];
    int f40;
    char pad44[0x50 - 0x44];
    S_B4530_Ent **f50;
};

extern S_B4530_Root *D_002A8490;
extern S_B4530_List *D_002B9134;
extern float D_002755E0;
extern float D_0027D268;
extern float D_00275544;
extern float D_00278C48;
extern float D_0027D264;
void func_00192300(void *p);
float *func_00011110(float *out, float *a, float *b);
float func_00011170(float *v);

struct C_000B4300 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
    virtual void v70();
    char pad4[0x34];
    int f38;
    S_B3E10_Info *f3c;
    S_B4300_Cfg *f40;
    S_B4530_Hold *f44;
    char pad48[8];
    u32 f50;
    char pad54[4];
    int f58;
    int f5c;
    char pad60[4];
    float f64;
    float f68;
    float f6c;
    int f70;
    int f74;
    int f78;
    float f7c[4];
    float f8c[4];
    char f9c[0x104];
    char f1a0;
    char f1a1;
    char f1a2;
    char f1a3[1];
    char pad1a4[0x2a8 - 0x1a4];
    char f2a8;
    char f2a9;
    char pad2aa;
    char f2ab;
    int func_000B4530(float dt);
    void func_000B2630(void);
    void func_000B2930(void);
    void func_000B3C30(void);
    void func_000B3B40(void);
    void func_000B2510(int a);
    void func_000B2450(float a);
    float func_000B24C0(float a, float b, float c);
    void func_000B2C20(int a, int b);
    void func_0018C900(float dt);
    void func_00167750(void);
    void func_000B3390(S_B4300_Stream *s);
    void func_000B2530(void);
    void func_000B25D0(void);
    C_000B4300 *func_000B4300(S_B4300_Stream *a, S_B4300_Stream *b);
    void func_000B3E10(void);
    void func_000B1B80(void);
    void func_000B3330(void);
    void func_000B1E50(void);
    void func_000B1E60(void);
    void func_000B1E70(void);
    void B4300_Reg(B4300_Cb cb, const char *a, const char *b, const char *c)
    {
        volatile B4300_Cb fn = cb;
        _ReadWriteBarrier();
        D_002EFE08->func_0018CF40(f38, fn, a, b, c, 1);
    }
};

extern "C" void __stdcall func_001577A0(S_B3E10_Obj *o, int a);

void C_000B4300::func_000B3E10(void)
{
    char path[0x104];
    char path2[0x104];
    S_B3E10_Obj *o;

    if (func_001EA426(this->f3c->f3c, D_002764F0) == 0)
        return;
    func_001ADCC0(this->f3c->f140, 0x104, D_0027C588, this->f3c->f3c);
    B3E10_Copy(path, D_002A5EA0, 0x103);
    B3E10_Copy(path2, D_002A60B0, 0x103);
    if (this->f3c->f8 != 0) {
        func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5348, D_002A45E0);
        func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
    } else {
        func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A45E0);
        func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    }
    o = (S_B3E10_Obj *)func_001E8A44(0x1e0);
    this->f40->f8 = o ? o->func_00143580(1) : 0;
    if (this->f40->f8->Load(this->f3c->f140, 0, this->f3c->f4)) {
        int length = strlen(this->f3c->f140);
        int limit = 0x7f;
        int n = AsmMinI(limit, length);
        int id1, id2;
        func_001E8920(this->f40->f8->f28, this->f3c->f140, n);
        this->f40->f8->f28[n] = 0;
        this->f40->f8->func_00199600(this->f3c->fC);
        this->f40->f8->func_00198F50(this->f3c->f1c, this->f3c->f2c, 1, 0, 0);
        this->f40->f8->func_0019ABA0(D_002B9120->f4a8[D_002B9120->f348], 1);
        func_001577A0(this->f40->f8, 0);
        id1 = D_002A829C->func_001617F0((char *)this + 0x64, 1);
        this->f40->f8->func_00182020(this->f40->f8->f1b8->f4, id1);
        id2 = D_002A829C->func_001617F0((char *)this + 0x168, 1);
        this->f40->f8->func_00182020(this->f40->f8->f1b8->f8, id2);
    } else {
        this->f40->f8 = 0;
    }
    this->func_000B1B80();
    B3E10_Copy(D_002A5EA0, path, 0x103);
    B3E10_Copy(D_002A60B0, path2, 0x103);
    if (D_002EFE08->func_0018E740(this, D_0027D1E0) == 0) {
        B4300_Cb volatile cb = &C_000B4300::func_000B3330;
        this->B4300_Reg(cb, D_0027D1BC, D_0027D1D0, D_0027D1D8);
        cb = B4300_CbOf(D_000B1E50);
        this->B4300_Reg(cb, D_0027D1AC, D_0027D1D0, D_0027D1D8);
        cb = B4300_CbOf(D_000B1E60);
        this->B4300_Reg(cb, D_0027D194, D_0027D1A4, D_0027D1D8);
        cb = B4300_CbOf(D_000B1E70);
        this->B4300_Reg(cb, D_0027D178, D_0027D18C, D_0027D1D8);
        D_002EFE08->func_00191270(this, D_0027D1E0, (S_B4300_Stream *)this->f3c->f348, this->f3c->f384);
    }
    this->v70();
    if (this->f3c != 0) {
        func_001E891B(this->f3c);
        this->f3c = 0;
    }
}
C_000B4300 *C_000B4300::func_000B4300(S_B4300_Stream * volatile a, S_B4300_Stream * volatile b)
{
    char name[0x104];
    char buf[0x104];
    B4300_Cb volatile cb1 = &C_000B4300::func_000B2530;
    B4300_Cb volatile cb2 = &C_000B4300::func_000B25D0;
    C_000B4300 * volatile self = this;

    func_00167750();
    self->func_000B3390(b);
    {
        C_000B4300 *t = self;
        *(volatile char *)&t->f1a2 = t->f40->f144;
    }
    {
        C_000B4300 *t = self;
        strcpy(t->f1a3, t->f40->f14c);
    }
    {
        C_000B4300 *t = self;
        *(volatile int *)&t->f6c = t->f40->f118;
    }
    b->func_00168BE0(D_0027D138, D_0027D144, buf, 0x104);
    b->func_00168BE0(D_0027D250, D_002764F0, name, 0x104);
    if (func_001EA426(name, D_002764F0) != 0) {
        C_000B4300 *t = self;
        if (t->f40->f108 != 0)
            func_001ADCC0(t->f9c, 0x104, D_0027D158, D_002A5348, D_002A5FA8, name);
        else
            func_001ADCC0(t->f9c, 0x104, D_0027D158, D_002A5870, D_002A5FA8, name);
    } else {
        self->f1a0 = 1;
    }
    if (D_002EFE08->func_0018E740(self, D_0027D244) == 0) {
        D_002EFE08->func_0018CF40(self->f38, cb1, D_0027D230, D_0027D1A4, D_0027D240, 1);
        D_002EFE08->func_0018CF40(self->f38, cb2, D_0027D224, D_0027D1A4, D_0027D1D8, 1);
        D_002EFE08->func_0018D330(self->f38, 0x68, D_0027D210, D_0027D21C);
        D_002EFE08->func_0018D330(self->f38, 0x60, D_0027D204, D_0027D240);
        D_002EFE08->func_0018D330(self->f38, 0x74, D_0027D1EC, D_0027D1FC);
    }
    D_002EFE08->func_00191270(self, D_0027D244, a, buf);
    return self;
}

int C_000B4300::func_000B4530(float dt)
{
    float tmp[4];

    if (f1a0 == 0) {
        int id = D_002A829C->func_001617F0(f9c, 1);
        f3c->f400->func_00181DB0(id);
        f3c->f400->func_001820B0((void *)func_00192300, this, id);
        f1a0 = 1;
    }
    if (D_002A8490->f124 == 0) {
        if (D_002A8490->f2a4->f1c8 == 0) {
            if (f1a2 == 0) {
                f3c->f400->func_00199A70(0, f7c);
                if (f2a8 == 0) {
                    if (f2a9 == 0) {
                        if (f2ab == 0)
                            func_000B2630();
                        if (f74 == 0)
                            func_000B2930();
                    }
                    func_000B3C30();
                    if (f70 == 1 && f2a9 == 0)
                        func_000B3B40();
                } else if (f74 == 0) {
                    func_000B2510(0x5a);
                    func_000B2450(f64);
                    float d = func_00011170(func_00011110(tmp, f8c, f7c));
                    if (d >= f6c) {
                        f64 = f68 = func_000B24C0(0.01f * d, d * 0.005f, 0.01f * d);
                    } else if (f64 != D_00275544) {
                        f64 = 0.0f;
                        f68 = 0.0f;
                        if (f78 != 0)
                            f44->f28->f8->func_001A2AA0(2);
                    }
                }
            }
            if (f64 != f68) {
                if (f64 < f68) {
                    f64 = dt * 0.25f + f64;
                    if (f64 > f68)
                        f64 = f68;
                } else if (f64 > f68) {
                    f64 = f64 - dt;
                    if (f64 < f68)
                        f64 = f68;
                }
                func_000B2450(f64);
            }
            if (f1a1 == 1) {
                int v = f5c;
                if (f58 < v) {
                    f5c = (int)((float)v - dt * 600.0f);
                } else if (f58 > v) {
                    f5c = (int)(dt * 600.0f + v);
                }
                if (f5c >= 0x5a) {
                    f5c = 0x5a;
                    f1a1 = 0;
                } else if (f5c <= 0) {
                    f5c = 0;
                    f1a1 = 0;
                }
            }
            if (f3c->func_0012FE50(dt * f64, 0) == 0) {
                int k = f3c->f4b8 - 1;
                S_B4530_List *l = D_002B9134;
                int n = l->f40;
                S_B3E10_Info *volatile info = f3c;
                int i;
                u32 key = f50;
                for (i = 0; i < n; i++) {
                    if (l->f50[i]->f0 == key && l->f50[i]->f4 == k && info->f518->f14 == 0) {
                        func_000B2C20(l->f50[i]->fC, l->f50[i]->f10);
                        break;
                    }
                }
            }
        } else {
            if (f64 != f3c->f510)
                f3c->func_0012FE50(dt, 1);
            f64 = f3c->f510;
        }
        func_0018C900(dt);
    }
    return 1;
}

