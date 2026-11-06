/* 7 functions from 0x0013C960 to 0x0013D780, found by Ghidra. */
#include "common.h"

template <class T> inline T Min(T a, T b) { return a > b ? b : a; }

void func_00012140(void *p);
void func_001E8390(void *p);

int func_001EA426(void *p, int a);

struct S_0013C960_Rec {
    int f0;
    int f4;
    int f8;
    int fC;
    void *f10;
    void *f14;
    int f18;
    int f1C;
    int f20;
    char f24;
};

struct S_0013C960_Ent {
    void *f0;
    int f4;
    int f8;
};

/* eight allocated buffers with their sizes, at +0x2C of C_0013C960 */
struct S_0013C960_BufSet {
    void *bufs[8];
    int sizes[8];
    int f40;
    int total;
};

struct S_0013C960_Elem {
    int f0;
    int f4;
    void *f8;
    int fC;
    int f10;
    int f14;
    unsigned int f18;
    int f1C;
};

struct C_0013C960 {
    char pad0[8];
    int f8;
    S_0013C960_Rec *fC;
    int f10;
    char pad14[0x10];
    int *f24;
    int *f28;
    int f2C[8];
    char pad4C[0x6c - 0x4c];
    int f6C;
    int f70;
    char pad74[0x7c - 0x74];
    void *f7C;
    S_0013C960_Ent f80[8];
    int fE0;
    int fE4;
    S_0013C960_Elem *fE8;
    int fEC;
    int fF0;
    int fF4;
    int fF8;
    int fFC;
    int f100;
    int func_0013CA50(void);
    int func_0013B130(int a0);
    int func_0013C3D0(int a0, int a1, int *out);
    void func_0013B040(int a0);
    int func_0013D310(int a0, int a1, int *a2, int *a3, int a4);
    int func_0013B760(S_0013C960_Rec *p, int v);
    int func_0013BBA0(S_0013C960_Rec *p, int a1, int a2, int a3);
    int func_0013C9F0(int a0, int a1);
    void func_0013D400(void);
    int func_0013C660(int a0);
    void func_0013AEC0(int a0);
    void func_0013B840(S_0013C960_Rec *a0);
    int func_0013C960(int a0, int a1, int a2);
    int func_0013B3E0(void *a, int b);
    int func_0013D550(int a0, int a1, int a2);
};

int C_0013C960::func_0013C960(int a0, int a1, int a2)
{
    struct { C_0013C960 * volatile self; int avail; int n; } t;
    S_0013C960_Elem *elem;
    S_0013C960_Rec *p;
    int r;

    t.self = this;
    elem = &fE8[a0];
    p = &fC[elem->f0];
    if (func_0013B760(p, elem->fC + elem->f10) == 0) {
        return 0;
    }
    t.avail = elem->f14 - elem->f10;
    t.n = a2 > t.avail ? t.avail : a2;
    if (t.n < 1) {
        return 0;
    }
    r = t.self->func_0013BBA0(p, elem->f4, a1, t.n);
    elem->f10 += r;
    return r;
}

int C_0013C960::func_0013C9F0(int a0, int a1)
{
    int local = func_0013B130(a0);
    if (local == -1) {
        if (fFC == 0) {
            return -1;
        }
        if (func_0013C3D0(a0, a1, &local) == 0) {
            return -1;
        }
    }
    func_0013B040(local);
    return local;
}

void *func_001E8AA5(int n);
int C_0013C960::func_0013CA50(void)
{
    int ok = 1;
    int i;
    int *q;

    if (fC != 0 && fE8 != 0) {
        func_0013C660(1);
    }
    if ((int *)&pad14 != 0) {
        q = f24;
        do {
            *q = -1;
            q++;
        } while (q <= f28);
    }
    if (fC != 0) {
        for (i = 0; i < f10; i++) {
            func_0013B840(&fC[i]);
        }
        func_001E8390(fC);
        fC = 0;
    }
    if (fE8 != 0) {
        for (i = 0; i < fEC; i++) {
            func_0013AEC0(i);
        }
        func_001E8390(fE8);
        fE8 = 0;
    }
    if (f6C != -1 && fC[f6C].f10 != 0) {
        func_00012140(fC[f6C].f10);
    }
    if (fC == 0) {
        f10 = 1;
        fC = (S_0013C960_Rec *)func_001E8AA5(0x28);
        f8 = 0;
        if (fC == 0) {
            f10 = 0;
            f8 = -1;
            ok = 0;
        } else {
            goto init1;
        }
    } else {
init1:
        for (i = 0; i < f10; i++) {
            fC[i].fC = 1;
            fC[i].f4 = 0;
            fC[i].f8 = 0;
            fC[i].f14 = 0;
            fC[i].f10 = 0;
            fC[i].f0 = i;
            fC[i].f18 = 0;
            fC[i].f20 = 0;
            fC[i].f1C = 0;
            fC[i].f24 = 0;
        }
    }
    if (fE8 == 0) {
        fEC = 1;
        fE8 = (S_0013C960_Elem *)func_001E8AA5(0x20);
        fE4 = 0;
        if (fE8 == 0) {
            fEC = 0;
            fE4 = -1;
            ok = 0;
        } else {
            goto init;
        }
    } else {
init:
        for (i = 0; i < fEC; i++) {
            fE8[i].f18 = 1;
            fE8[i].f8 = 0;
            fE8[i].f0 = 0;
            fE8[i].fC = 0;
            fE8[i].f10 = 0;
            fE8[i].f14 = 0;
            fE8[i].f4 = 0;
            fE8[i].f1C = 0;
        }
    }
    fF4 = -1;
    fF8 = -1;
    f100 = 0;
    return ok;
}

int func_0013AB60(int a);
void *func_0014FDF0(int a, void *b);
extern int D_00282960;
int __fastcall func_0013CC80(void *self, int edx, int a, int b, int c, int d, int e, int f, int g, int h)
{
    char flag;
    int zero;
    void *fp;

    zero = 0;
    flag = (char)func_0013AB60(a);
    (void)flag;
    (void)zero;
    (void)self;
    (void)edx;
    (void)b; (void)c; (void)d; (void)e;
    if (g == 0)
        return 0;
    if ((unsigned int)g <= 0)
        return 0;
    if (f == 0)
        return 0;
    fp = func_0014FDF0(b, &D_00282960);
    if (fp == 0)
        return 0;
    (void)h;
    return 0;
}

int C_0013C960::func_0013D310(int a0, int a1, int *a2, int *a3, int a4)
{
    S_0013C960_Elem *e;

    if (fF4 == -1 || fE8[fF4].f8 == 0 || func_001EA426(fE8[fF4].f8, a0) != 0) {
        fF4 = func_0013B130(a0);
        if (fF4 == -1) {
            if (fFC == 0) {
                return 0;
            }
            if (func_0013C3D0(a0, a1, &fF4) == 0) {
                return 0;
            }
        }
    }
    e = &fE8[fF4];
    if (e->f1C != 0) {
        if (a4 != 0) {
            *a2 = fF4;
        } else {
            *a2 = -1;
        }
        *a3 = e->f1C;
        if (fF0 != 0) {
            e->f18 |= 8;
        }
    } else {
        func_0013B040(fF4);
        *a2 = fF4;
        *a3 = 0;
    }
    return 1;
}

void C_0013C960::func_0013D400(void)
{
    S_0013C960_BufSet *set;
    int i;
    int *q;

    if (fC != 0 && fE8 != 0) {
        func_0013C660(1);
    }
    if ((int *)&pad14 != 0) {
        q = f24;
        do {
            *q = -1;
            q++;
        } while (q <= f28);
    }
    if (fC != 0) {
        for (i = 0; i < f10; i++) {
            func_0013B840(&fC[i]);
        }
        func_001E8390(fC);
        fC = 0;
    }
    if (fE8 != 0) {
        for (i = 0; i < fEC; i++) {
            func_0013AEC0(i);
        }
        func_001E8390(fE8);
        fE8 = 0;
    }
    if (f6C != -1 && fC[f6C].f10 != 0) {
        func_00012140(fC[f6C].f10);
    }
    set = (S_0013C960_BufSet *)((char *)this + 0x2c);
    for (i = 0; i < 8; i++) {
        if (set->bufs[i] != 0) {
            func_001E8390(set->bufs[i]);
            set->bufs[i] = 0;
        }
    }
    set->total = 0;
    if (f7C != 0) {
        func_001E8390(f7C);
        f7C = 0;
    }
    for (i = 0; i < 8; i++) {
        if (f80[i].f0 != 0) {
            func_001E8390(f80[i].f0);
            f80[i].f0 = 0;
        }
        f80[i].f4 = -2;
        f80[i].f8 = 0xffffa000;
    }
}

int C_0013C960::func_0013D550(int a0, int a1, int a2)
{
    int i;
    int last;
    int failed;
    int r;
    int ret;
    int *q;
    void *p;

    func_0013D400();
    f10 = a0;
    fC = (S_0013C960_Rec *)func_001E8AA5(a0 * 0x28);
    f8 = 0;
    f100 = 0;
    if (fC == 0) {
        f10 = 1;
        fC = (S_0013C960_Rec *)func_001E8AA5(0x28);
    }
    if (fC == 0) {
        f10 = 0;
        f8 = -1;
    } else {
        for (i = 0; i < f10; i++) {
            *(int *)((char *)fC + (i * 0x28 + 0xc)) = 1;
            *(int *)((char *)fC + (i * 0x28 + 0x4)) = 0;
            *(int *)((char *)fC + (i * 0x28 + 0x8)) = 0;
            *(int *)((char *)fC + (i * 0x28 + 0x14)) = 0;
            *(int *)((char *)fC + (i * 0x28 + 0x10)) = 0;
            *(int *)((char *)fC + (i * 0x28)) = i;
            *(int *)((char *)fC + (i * 0x28 + 0x18)) = 0;
            *(int *)((char *)fC + (i * 0x28 + 0x20)) = 0;
            *(int *)((char *)fC + (i * 0x28 + 0x1c)) = 0;
            *(char *)((char *)fC + (i * 0x28 + 0x24)) = 0;
        }
    }
    fEC = a1;
    fE8 = (S_0013C960_Elem *)func_001E8AA5(a1 << 5);
    fE4 = 0;
    if (fE8 == 0) {
        fEC = 1;
        fE8 = (S_0013C960_Elem *)func_001E8AA5(0x20);
    }
    if (fE8 == 0) {
        fEC = 0;
        fE4 = -1;
    } else {
        for (i = 0; i < fEC; i++) {
            fE8[i].f18 = 1;
            fE8[i].f8 = 0;
            fE8[i].f0 = 0;
            fE8[i].fC = 0;
            fE8[i].f10 = 0;
            fE8[i].f14 = 0;
            fE8[i].f4 = 0;
            fE8[i].f1C = 0;
        }
    }
    fF4 = -1;
    fF8 = -1;
    r = func_0013B3E0((char *)this + 0x2c, a2);
    last = -1;
    failed = 0;
    for (i = 0; i < 8; i++) {
        p = func_001E8AA5(0x6000);
        f80[i].f0 = p;
        if (p == 0) {
            f80[i].f4 = -2;
            failed = failed + 1;
        } else {
            f80[i].f4 = -1;
            last = i;
        }
        f80[i].f8 = 0xffffa000;
    }
    ret = 0;
    if (8 - failed >= 2) {
        ret = r;
    }
    fE0 = last;
    q = f24;
    do {
        *q = -1;
        q++;
    } while (q <= f28);
    return ret;
}

