/* 9 functions from 0x000B2ED0 to 0x000B3E10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "string.h"
#include "asm_helpers.h"
static inline int vehicle_min(const int &a, const int &b) { return a > b ? b : a; }
static inline const int &vehicle_min_ref(const int &a, const int &b) { return a > b ? b : a; }

extern int D_0027CF8C;
extern "C" unsigned int __cdecl strlen(const char *);
struct S_2ED0_Rd {
    void func_00168550(const void *k, char *buf, int n);
    void func_00168BE0(const void *k, const void *k2, char *buf, int n);
    void func_00168C20(const void *k, int z, void *p);
    void func_00168C50(const void *k, int z, void *p);
};
struct S_2ED0_Own {
    char pad0[8];
    int f8;
    char pad[0x37C];
    char f384[1];
    void func_000B1A40(S_2ED0_Rd *rd);
};
struct S_2ED0_Item {
    int f0;
    float f4;
    int f8;
    int fC;
    int f10;
    float f14;
};
struct C_000B2ED0 {
    char pad0[0x3C];
    S_2ED0_Own *f3C;
    char pad40[8];
    S_2ED0_Item **f48;
    int f4C;
    int f50;
    char pad54[4];
    int f58;
    char pad5C[8];
    char f64[0x104];
    char f168[0x104];
    void func_000B2ED0(S_2ED0_Rd *rd);
};
extern char D_0027D160[], D_002A5FA8[], D_002A5348[], D_002A5870[], D_0027D158[], D_0027D14C[], D_0027D144[], D_0027D138[], D_0027D124[], D_0027D114[], D_0027D104[], D_0027D0F4[];
int func_001ADCC0(char *dst, int n, const char *fmt, ...);
void func_001E8920(void *dst, void *src, int n);
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_00187640 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual int dummy27(int param_1);
    C_00187640 *func_00187640(int param_1);
};

struct C_000B2020 {
    C_000B2020 *func_000B2020(void);
    void func_000B21B0(int param_1);
};

struct S_000B3B40_V4 {
    float x, y, z, w;
};

/* the vehicle record this AI reads its index from */
struct S_000B3B40_Owner {
    char pad0[0x4B8];
    int f4B8;                /* 0x4B8 */
};

/* one entry of the table at C_000B2C80::f4C */
struct S_000B3B40_Item {
    int f0;                  /* 0x00 */
    float f4;                /* 0x04 */
    S_000B3B40_V4 f8;        /* 0x08 */
};

struct S_000B3B40_Elem {
    int f0;                  /* 0x00 count */
    char pad4[4];
    S_000B3B40_Elem **f8;    /* 0x08 */
    char padC[0x3C];
    S_000B3B40_Item **f48;   /* 0x48 */
    int f4C;                 /* 0x4C count */
    int f50;                 /* 0x50 */
};

struct C_000B2C80 {
    char pad0[0x30];
    int f30;                 /* 0x30 */
    char pad34[0x18];
    S_000B3B40_Elem **f4C;   /* 0x4C */
    void func_000B2C80(void *param_1);
};

extern C_000B2C80 *D_002B9134;

struct VehicleAI {
    void *vtbl;
    char pad4[0x38];
    S_000B3B40_Owner *f3C;
    C_000B2020 *f40;
    C_00187640 *f44;
    char pad48[8];
    int f50;
    char pad54[0x1C];
    int f70;
    void func_0018C7F0(void);
    void func_000B3330(int param_1);
    void *func_000B3350(int flags);
    void func_000B3390(int param_1);
    void func_000B2540(int mode, int a, S_000B3B40_V4 *p);
    void func_000B3B40();
};

struct S_000B3C30_Cnt {
    char pad0[0x28];
    struct S_000B3C30_Sub *f28;
};
struct S_000B3C30_Sub {
    char pad0[8];
    struct C_001A2AA0 *f8;
};
struct C_001A2AA0 {
    void func_001A2AA0(int a);
};
struct S_000B3C30_Own {
    char pad0[0x4B8];
    int f4B8;
    char pad4BC[0x518 - 0x4BC];
    int *f518;
};
struct S_000B3C30_Oth {
    char pad0[0x3C];
    S_000B3C30_Own *f3C;
};
struct S_000B3C30_Glob {
    char pad0[0x2C];
    int f2C, f30;
};
extern S_000B3C30_Glob *D_002B9134g;
extern float D_00275544;
extern float D_00279B54;
extern float D_002756DC;
extern float D_002755E0;
int func_00011260(int a, int b);
struct VehicleAI2 {
    char pad0[0x3C];
    S_000B3C30_Own *f3C;
    char pad40[4];
    struct S_000B3C30_Cnt *f44;
    S_000B3C30_Oth *f48;
    char pad4C[0xC];
    int f58, f5C;
    char pad60[4];
    float f64, f68;
    char pad6C[0xC];
    int f78;
    char pad7C[0x1a1 - 0x7c];
    u8 f1a1;
    char pad1a2[0x2a9 - 0x1a2];
    u8 f2a9, f2aa, f2ab;
    void func_000B2930();
    float func_000B24C0(float a, int b, float c);
    void func_000B2450(float a);
    void func_000B3C30();
};
struct C_000B31F0 {
    void func_00167750();
    void func_000B2ED0(int a);
    C_000B31F0 *func_000B31F0(const char *name, int a);
};
struct C_001884D0 { C_001884D0 *func_001884D0(); };
struct C_00188700 { C_00188700 *func_00188700(); };
void *func_001E8920(void *, const void *, unsigned int);

extern char D_0027C588[], D_0027D170[], D_002A5EA0[], D_002A60B0[], D_002A4C10[], D_002A48F8[], D_002A46E8[], D_00275630[], D_002A45E0[], D_00275678[], D_002A47F0[], D_002A2DC4[];
extern int D_0027D004;
extern char *D_002B9120;
struct C_000B3410 {
    char data[0x2a8];
    void func_000B3410(int a);
    void func_000B1F70();
};
struct V_000B3410 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(void *a, void *b, char *c, int d);
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
    virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52();
    virtual int v53(char *name, char *path, int a, char *b, char *c, char *d, int e, int f, int g, float h, float i, int j, int k, int l, int m, int n, int o, int p, int q, int r);
};
static inline void vehicle_strcpy(char *dst, const char *src)
{
    int n = vehicle_min(259, (int)strlen(src));
    func_001E8920(dst, src, n);
    dst[n] = 0;
}
struct C_0012EF30 { C_0012EF30 *func_0012EF30(int a); };
struct C_001B4B70 { void func_001B4B70(); };
struct C_0019ABA0 { void func_0019ABA0(int a,int b); };
struct C_00133140 { void func_00133140(int a,int b); };
struct C_001577A0 { void func_001577A0(void *a,int b); };
struct C_001A2A10 { void func_001A2A10(int a); };
struct C_000B3DF0 {
    undefined4 func_000B3DF0(byte param_1);
};


void C_000B2ED0::func_000B2ED0(S_2ED0_Rd * volatile rd)
{
    C_000B2ED0 * volatile self = this;
    char bufC[0x100];
    char bufB[0x104];
    char bufA[0x104];
    int i;
    int len;
    volatile int a;
    volatile int b;
    volatile int m;

    f3C->func_000B1A40(rd);
    rd->func_00168550(D_0027D160, bufA, 0x104);
    func_001ADCC0(self->f64, 0x104, D_0027D158, self->f3C->f8 ? D_002A5348 : D_002A5870, D_002A5FA8, bufA);
    rd->func_00168550(D_0027D14C, bufA, 0x104);
    func_001ADCC0(self->f168, 0x104, D_0027D158, self->f3C->f8 ? D_002A5348 : D_002A5870, D_002A5FA8, bufA);
    rd->func_00168BE0(D_0027D138, D_0027D144, bufB, 0x104);
    a = (int)strlen(bufB);
    b = 0x103;
    m = b > a ? a : b;
    len = m;
    func_001E8920(self->f3C->f384, bufB, len);
    self->f3C->f384[len] = 0;
    rd->func_00168C20(D_0027D124, 0, &self->f58);
    rd->func_00168C20(D_0027D114, 0, &self->f4C);
    if (self->f48 != 0) {
        for (i = 0; i < self->f4C; i++) {
            func_001E891B(self->f48[i]);
        }
        func_001E891B(self->f48);
        self->f48 = 0;
    }
    if (self->f4C > 0) {
        self->f48 = (S_2ED0_Item **)func_001E8A44(self->f4C * 4);
        for (i = 0; i < self->f4C; i++) {
            S_2ED0_Item *p = (S_2ED0_Item *)func_001E8A44(0x18);
            if (p) {
                p->f10 = 0;
                p->fC = 0;
                p->f8 = 0;
                p->f14 = 1.0f;
            }
            self->f48[i] = p;
        }
    }
    for (i = 0; i < self->f4C; i++) {
        func_001ADCC0(bufC, 0x100, D_0027D104, i + 1);
        rd->func_00168C20(bufC, 0, self->f48[i]);
        self->f48[i]->f0--;
        func_001ADCC0(bufC, 0x100, D_0027D0F4, i + 1);
        rd->func_00168C50(bufC, 0, &self->f48[i]->f4);
        self->f50 = 0;
    }
}

#pragma intrinsic(strlen)
C_000B31F0 *C_000B31F0::func_000B31F0(const char *name, int a)
{
    func_00167750();
    void *mem = func_001E8A44(16);
    *(void **)((char *)this + 0x40) = mem ? ((C_001884D0 *)mem)->func_001884D0() : 0;
    *(int *)(*(char **)((char *)this + 0x40) + 12) = 0;
    func_000B2ED0(a);
    int len = strlen(name);
    int limit = 59;
    int n = AsmMinI(limit, len);
    func_001E8920(*(char **)((char *)this + 0x3c) + 0x348, name, n);
    (*(char **)((char *)this + 0x3c))[0x348 + n] = 0;
    int len2 = strlen(*(char **)((char *)this + 0x3c) + 0x244);
    int limit2 = 259;
    int n2 = AsmMinI(limit2, len2);
    func_001E8920((char *)this + 0x26c, *(char **)((char *)this + 0x3c) + 0x244, n2);
    ((char *)this)[0x26c + n2] = 0;
    mem = func_001E8A44(16);
    *(void **)((char *)this + 0x44) = mem ? ((C_00188700 *)mem)->func_00188700() : 0;
    *(int *)(*(char **)((char *)this + 0x44) + 4) = 1;
    return this;
}
void VehicleAI::func_000B3330(int param_1)
{
    f50 = param_1;
    D_002B9134->func_000B2C80(this);
}

void *VehicleAI::func_000B3350(int flags)
{
    vtbl = (void *)&D_0027CF8C;
    if (f44) {
        f44->dummy2();
        f44 = 0;
    }
    func_0018C7F0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void VehicleAI::func_000B3390(int param_1)
{
    void *mem = func_001E8A44(0x2c);
    f44 = mem != 0 ? ((C_00187640 *)mem)->func_00187640(1) : 0;
    if (f44->dummy27(param_1) == 0) {
        f44->dummy2();
        f44 = 0;
    }
    mem = func_001E8A44(0x458);
    f40 = mem != 0 ? ((C_000B2020 *)mem)->func_000B2020() : 0;
    f40->func_000B21B0(param_1);
}

void C_000B3410::func_000B3410(int a)
{
    struct V {
        virtual void v0()=0; virtual void v1()=0; virtual void v2()=0; virtual void v3()=0; virtual void v4()=0; virtual void v5()=0; virtual void v6()=0; virtual void v7()=0;
        virtual void v8()=0; virtual void v9()=0; virtual void v10()=0; virtual void v11()=0; virtual void v12()=0; virtual void v13()=0; virtual void v14()=0; virtual void v15()=0;
        virtual void v16()=0; virtual void v17()=0; virtual void v18()=0; virtual void v19()=0; virtual void v20()=0; virtual void v21()=0; virtual void v22()=0; virtual void v23()=0;
        virtual void v24()=0; virtual void v25()=0; virtual void v26()=0; virtual void v27()=0;
        virtual void v28(void *a, void *b, char *c, int d)=0;
        virtual void v29()=0; virtual void v30()=0; virtual void v31()=0; virtual void v32()=0;
        virtual void v33()=0; virtual void v34()=0; virtual void v35()=0; virtual void v36()=0; virtual void v37()=0; virtual void v38()=0; virtual void v39()=0; virtual void v40()=0;
        virtual void v41()=0; virtual void v42()=0; virtual void v43()=0; virtual void v44()=0; virtual void v45()=0; virtual void v46()=0; virtual void v47()=0; virtual void v48()=0;
        virtual void v49()=0; virtual void v50()=0; virtual void v51()=0; virtual void v52()=0;
        virtual int v53(char *name, char *path, int a, char *b, char *c, char *d, int e, int f, int g, float h, float i, int j, int k, int l, int m, int n, int o, int p, int q, int r)=0;
    };
    struct Locals {
        char *self;
        char old3[260], old4[260], old5[260], old2[260], old1[260], name[260], path[260];
    } b;
    int n, len;
    b.self = (char *)this;
    func_001ADCC0(b.name, 260, D_0027C588, *(char **)(b.self + 0x40) + 4);
    func_001ADCC0(b.path, 260, D_0027D170, *(char **)(b.self + 0x40) + 4);
    int lim = 259;
    len = strlen(D_002A5EA0);
    n = AsmMinI(lim, len);
    func_001E8920(b.old1, D_002A5EA0, n); b.old1[n] = 0;
    len = strlen(D_002A60B0);
    n = AsmMinI(lim, len);
    func_001E8920(b.old2, D_002A60B0, n); b.old2[n] = 0;
    len = strlen(D_002A4C10);
    n = AsmMinI(lim, len);
    func_001E8920(b.old3, D_002A4C10, n); b.old3[n] = 0;
    len = strlen(D_002A48F8);
    n = AsmMinI(lim, len);
    func_001E8920(b.old4, D_002A48F8, n); b.old4[n] = 0;
    len = strlen(D_002A46E8);
    n = AsmMinI(lim, len);
    func_001E8920(b.old5, D_002A46E8, n); b.old5[n] = 0;
    n = AsmMinI(lim, 0);
    func_001E8920(D_002A46E8, D_00275630, n); D_002A46E8[n] = 0;
    if (*(int *)(*(char **)(b.self + 0x40) + 0x108)) {
        func_001ADCC0(D_002A5EA0, 260, D_00275678, D_002A5348, D_002A45E0);
        func_001ADCC0(D_002A60B0, 260, D_00275678, D_002A5348, D_002A5FA8);
        func_001ADCC0(D_002A4C10, 260, D_00275678, D_002A5348, D_002A45E0);
        func_001ADCC0(D_002A48F8, 260, D_00275678, D_002A5348, D_002A47F0);
    } else {
        func_001ADCC0(D_002A5EA0, 260, D_00275678, D_002A5870, D_002A45E0);
        func_001ADCC0(D_002A60B0, 260, D_00275678, D_002A5870, D_002A5FA8);
        func_001ADCC0(D_002A4C10, 260, D_00275678, D_002A5870, D_002A45E0);
        func_001ADCC0(D_002A48F8, 260, D_00275678, D_002A5870, D_002A47F0);
    }
    void *mem = func_001E8A44(0x520);
    *(void **)(b.self + 0x3c) = mem ? ((C_0012EF30 *)mem)->func_0012EF30(1) : 0;
    char *t = *(char **)(b.self + 0x40);
    if (!(*(V **)(b.self + 0x3c))->v53(b.name, b.path, 0, t + 0x250, t + 0x354, D_002A2DC4,
            *(int *)(t + 0x114), *(int *)(t + 0x130), *(int *)(t + 0x12c), (float)*(int *)(t + 0x124), 1.0f,
            *(int *)(t + 0x128), 0, 0, 0, *(int *)(t + 0x134), *(int *)(t + 0x138), *(int *)(t + 0x13c), *(int *)(t + 0x140), a)) {
        (*(V **)(b.self + 0x3c))->v2();
        *(void **)(b.self + 0x3c) = 0;
        t = *(char **)(b.self + 0x40);
        if (t) {
            *(void **)t = &D_0027D004;
            ((C_001B4B70 *)t)->func_001B4B70();
            func_001E891B(t);
        }
        *(void **)(b.self + 0x40) = 0;
        return;
    }
    ((C_0019ABA0 *)*(void **)(*(char **)(b.self + 0x3c) + 0x400))->func_0019ABA0(**(int **)(D_002B9120 + 0x4a8), 2);
    (*(V **)(*(char **)(b.self + 0x3c) + 0x40c))->v32();
    ((C_00133140 *)*(void **)(*(char **)(b.self + 0x3c) + 0x40c))->func_00133140(**(int **)(D_002B9120 + 0x4ac), 2);
    V *o = *(V **)(*(char **)(b.self + 0x3c) + 0x410);
    if (o) {
        o->v32();
        ((C_00133140 *)*(void **)(*(char **)(b.self + 0x3c) + 0x410))->func_00133140(**(int **)(D_002B9120 + 0x4ac), 2);
    }
    ((C_001577A0 *)D_002B9120)->func_001577A0(*(void **)(b.self + 0x3c), 0);
    char *q = *(char **)(b.self + 0x44);
    if (q) {
        int flag = (*(char **)(*(char **)(q + 0x28) + 0xc))[0x26c] != 0;
        ((V *)q)->v28(D_002B9120, *(void **)(*(char **)(b.self + 0x3c) + 0x400), D_00275630, *(int *)(D_002B9120 + 0x4c0));
        if (*(C_001A2A10 **)(*(char **)(*(char **)(b.self + 0x44) + 0x28) + 8) && flag == 1)
            (*(C_001A2A10 **)(*(char **)(*(char **)(b.self + 0x44) + 0x28) + 8))->func_001A2A10(flag);
        *(int *)(b.self + 0x78) = flag;
    }
    *(int *)(b.self + 0x50) = *(int *)(*(char **)(b.self + 0x40) + 0x11c) - 1;
    *(int *)(b.self + 0x4c) = *(int *)(b.self + 0x50);
    *(int *)(b.self + 0x54) = *(int *)(*(char **)(b.self + 0x40) + 0x120) - 1;
    if (*(int *)(b.self + 0x54) < 0 || *(int *)(b.self + 0x54) >= *(int *)((char *)D_002B9134 + 0x3c))
        *(int *)(b.self + 0x54) = -1;
    b.self[0x2a7] = (*(char **)(b.self + 0x40))[0x148];
    ((C_000B3410 *)b.self)->func_000B1F70();
    t = *(char **)(b.self + 0x40);
    if (t) {
        *(void **)t = &D_0027D004;
        ((C_001B4B70 *)t)->func_001B4B70();
        func_001E891B(t);
    }
    *(void **)(b.self + 0x40) = 0;
    len = strlen(b.old1);
    n = AsmMinI(lim, len);
    func_001E8920(D_002A5EA0, b.old1, n); D_002A5EA0[n] = 0;
    len = strlen(b.old2);
    n = AsmMinI(lim, len);
    func_001E8920(D_002A60B0, b.old2, n); D_002A60B0[n] = 0;
    len = strlen(b.old3);
    n = AsmMinI(lim, len);
    func_001E8920(D_002A4C10, b.old3, n); D_002A4C10[n] = 0;
    len = strlen(b.old4);
    n = AsmMinI(lim, len);
    func_001E8920(D_002A48F8, b.old4, n); D_002A48F8[n] = 0;
    len = strlen(b.old5);
    n = AsmMinI(lim, len);
    func_001E8920(D_002A46E8, b.old5, n); D_002A46E8[n] = 0;
}

void VehicleAI::func_000B3B40()
{
    int i, j;
    int v = f3C->f4B8;

    for (i = 0; i < D_002B9134->f4C[f50]->f0; i++) {
        for (j = 0; j < D_002B9134->f4C[f50]->f8[i]->f4C; j++) {
            S_000B3B40_Item *item = D_002B9134->f4C[f50]->f8[i]->f48[j];
            if (f50 == item->f0) {
                int c = (int)(item->f4 - v);
                if (c >= D_002B9134->f30 - 1 && c <= D_002B9134->f30) {
                    func_000B2540(D_002B9134->f4C[f50]->f8[i]->f50, (int)item->f4, &item->f8);
                    f70 = 0;
                }
            }
        }
    }
}

void VehicleAI2::func_000B3C30()
{
    S_000B3C30_Glob *g;
    int d;
    S_000B3C30_Own *own = f3C;
    int me = own->f4B8;
    if (f64 == D_00275544) {
        if (f48 != 0) {
            int o = f48->f3C->f4B8;
            if (o < me) {
                d = *own->f518 - me + o;
            } else {
                d = o - me;
            }
            if (d > func_00011260(1, ((S_000B3C30_Glob *)D_002B9134)->f30) + ((S_000B3C30_Glob *)D_002B9134)->f2C) {
                if (func_00011260(1, 100) > 75) {
                    if (f2ab || f2aa) {
                        func_000B2930();
                        return;
                    }
                    goto fin;
                }
            }
        }
        return;
    }
    f2a9 = 0;
    if (f48 != 0) {
        S_000B3C30_Own *oo = f48->f3C;
        int o = oo->f4B8;
        if (o < me) {
            d = *own->f518 - me + o;
        } else {
            d = o - me;
        }
        g = (S_000B3C30_Glob *)D_002B9134;
        if (d <= g->f2C) {
            float x = (float)d - (float)g->f30 * D_00279B54;
            f68 = func_000B24C0(D_002756DC * x * x, 0, f64);
            f2a9 = 1;
            if (f5C != 0x5a) {
                f1a1 = 1;
                f58 = 0x5a;
            }
            func_000B2450(f64);
            if (f64 < D_002755E0 && f64 == f68) {
                f68 = 0;
                if (f78) {
                    f44->f28->f8->func_001A2AA0(2);
                }
            }
            f64 = f68;
        }
    }
    if (!f2a9 && !f2aa && !f2ab) {
fin:
        f68 = 1.0f;
        if (f5C) {
            f1a1 = 1;
            f58 = 0;
        }
    }
}

undefined4 C_000B3DF0::func_000B3DF0(byte param_1)
{
  int func_000B2E40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000B2E40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
