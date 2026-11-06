/* 3 functions from 0x000B3E10 to 0x000B4850, found by Ghidra. */
#include "common.h"
#include <string.h>
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

struct S_B4300_Stream {
    void func_00168BE0(const char *key, const char *def, char *dst, int n);
};

struct S_B4300_Cfg {
    char pad0[0x108];
    int f108;
    char pad10c[0x118 - 0x10c];
    int f118;
    char pad11c[0x144 - 0x11c];
    char f144;
    char pad145[0x14c - 0x145];
    char f14c[1];
};

struct C_000B4300;
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

template <class T>
inline T B3E10_Min(const T &a, const T &b)
{
    return a > b ? b : a;
}

inline void B3E10_Copy(char *dst, const char *src, int max)
{
    int len = strlen(src);
    int n = B3E10_Min(max, len);
    func_001E8920(dst, src, n);
    dst[n] = 0;
}

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
    char pad44[0x6c - 0x44];
    int f6c;
    char pad70[0x9c - 0x70];
    char f9c[0x104];
    char f1a0;
    char pad1a1;
    char f1a2;
    char f1a3[1];
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
    void func_001577A0(S_B3E10_Obj *o, int a);
};

inline void B4300_Reg(int id, B4300_Cb cb, const char *a, const char *b, const char *c)
{
    D_002EFE08->func_0018CF40(id, cb, a, b, c, 1);
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
    a->func_00168BE0(D_0027D250, D_002764F0, name, 0x104);
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
