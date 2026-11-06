/* 10 functions from 0x0013B9C0 to 0x0013C960, found by Ghidra. */
#include "common.h"
int func_001EA426(const char *, const char *);
extern char D_00010000[];
extern char D_00020000[];
extern char D_00040000[];
extern char D_00080000[];
extern char D_00100000[];
extern char D_00140000[];
extern char D_00180000[];
extern char D_001C0000[];
extern char D_00200000[];

void func_00012140(void *p);
int func_0014FED0(void *a, int b, int c);
char *func_001E9260(char *s, int c);
extern "C" int D_0014FEE0(void *a);
void func_0014FE50(void *a);
void func_001E8390(void *p);
void *func_001E8AA5(int size);
int func_0014FE60(void *p, int size, void *file);

void *func_001E83E8(void *p, int size);
void *func_0014FDF0(const char *name, char *mode);
extern short D_00284C50;
static inline int min_i(int a, int b) { return a < b ? a : b; }

struct S_0013B9C0_Ent28 {
    int f0;
    int f4;
    int f8;
    int fC;
    void *f10;
    void *f14;
    char pad18[0x10];
};

struct S_0013B9C0_Ent20 {
    int f0;
    int f4;
    int f8;
    int fC;
    void *f10;
    void *f14;
    int f18;
    int f1C;
};

struct C_0013B9C0 {
    char pad0[8];
    int f8;
    S_0013B9C0_Ent28 *fC;
    int f10;
    char pad14[0x10];
    int *f24;
    int *f28;
    char pad2C[0x40];
    int f6C;
    int f70;
    int f74;
    int f78;
    unsigned short *f7C;
    char pad80[0x60];
    int fE0;
    char padE4[4];
    S_0013B9C0_Ent20 *fE8;
    int fEC;
    int func_0013C3D0(const char *name, char *mode, int a2);
    int func_0013AC40(int a, int b, int c, int d, int e, int f);
    int func_0013C240(const char *name, unsigned int size);
    int func_0013C1D0(int a);
    int func_0013C110(int a);
    int func_0013C5D0(S_0013B9C0_Ent28 *a, int b);
    int func_0013C660(int a);
    char *func_0013C6E0(int idx, char *buf, int size);
    int func_0013C8A0(int idx, int a2, int size, int count);
    int func_0013B760(S_0013B9C0_Ent28 *p, int v);
    int func_0013BBA0(S_0013B9C0_Ent28 *p, int a1, int a2, int a3);
    void func_0013B440(void *a);
    int func_0013B3E0(void *a, int b);
    void func_0013AEC0(int a);
    void func_0013B840(void *a);
    void func_0013B9C0(S_0013B9C0_Ent28 *p, int index);
    void func_0013B480(void *a);
    int func_0013B4C0(void *a, int size, void *file);
};

int C_0013B9C0::func_0013C110(int idx)
{
    S_0013B9C0_Ent20 *e = &fE8[idx];
    S_0013B9C0_Ent28 *t;
    int x;

    if (!(e->f18 & 4)) {
        return 0;
    }
    e->f18 &= ~4;
    x = e->f4;
    e->f10 = 0;
    if (((int *)((char *)this + 0x84))[x * 3] == idx) {
        fE0 = x;
    }
    t = &fC[e->f0];
    if (!(t->fC & 2)) {
        if (t->f10 != 0) {
            if (t->fC & 0x10) {
                func_0014FED0(t->f10, 0, 2);
                e->f14 = (void *)D_0014FEE0(t->f10);
                t->f14 = e->f14;
            }
            func_0014FE50(t->f10);
            t->f10 = 0;
        }
        if (e->f1C == 0 && !(e->f18 & 8)) {
            func_0013B840(t);
            func_0013AEC0(idx);
        }
    }
    return 1;
}

int C_0013B9C0::func_0013C1D0(int arg)
{
    int *q;
    int r;

    if (f6C != -1) {
        if (fC[f6C].f10 != 0) {
            func_00012140(fC[f6C].f10);
        }
        f74 = -1;
        f78 = -1;
        f6C = -1;
    }
    q = f24;
    do {
        *q = -1;
        q++;
    } while (q <= f28);
    func_0013B440((void *)((char *)this + 0x2c));
    r = func_0013B3E0((void *)((char *)this + 0x2c), arg);
    if (r == 0) {
        f70 = 0;
        return 0;
    }
    return 1;
}

int C_0013B9C0::func_0013C240(const char *name, unsigned int maxSize) {
 unsigned int minSize=0;
 for (int i=0;i<f10;i++) {
 S_0013B9C0_Ent28 *e=&fC[i];
 if (e->f4 && !func_001EA426((const char *)e->f4,name)) {
 minSize=(unsigned int)e->f14; break;
 }
 }
 unsigned int size;
 if (minSize <= (unsigned int)D_00010000 && maxSize >= (unsigned int)D_00010000) size=(unsigned int)D_00010000;
else if (minSize <= (unsigned int)D_00020000 && maxSize >= (unsigned int)D_00020000) size=(unsigned int)D_00020000;
else if (minSize <= (unsigned int)D_00040000 && maxSize >= (unsigned int)D_00040000) size=(unsigned int)D_00040000;
else if (minSize <= (unsigned int)D_00080000 && maxSize >= (unsigned int)D_00080000) size=(unsigned int)D_00080000;
else if (minSize <= (unsigned int)D_00100000 && maxSize >= (unsigned int)D_00100000) size=(unsigned int)D_00100000;
else if (minSize <= (unsigned int)D_00140000 && maxSize >= (unsigned int)D_00140000) size=(unsigned int)D_00140000;
else if (minSize <= (unsigned int)D_00180000 && maxSize >= (unsigned int)D_00180000) size=(unsigned int)D_00180000;
else if (minSize <= (unsigned int)D_001C0000 && maxSize >= (unsigned int)D_001C0000) size=(unsigned int)D_001C0000;
else if (minSize <= (unsigned int)D_00200000 && maxSize >= (unsigned int)D_00200000) size=(unsigned int)D_00200000;
 else size=maxSize;
 return func_0013C1D0(size);
}

int C_0013B9C0::func_0013C5D0(S_0013B9C0_Ent28 *arg1, int arg2)
{
    int result = 1;
    int i;

    arg1->fC |= 0x20;
    i = 0;
    do {
        if (fE8[i].f0 == arg1->f0) {
            if (arg2 != 0) {
                func_0013AEC0(i);
            } else if (fE8[i].f1C == 0 && !(fE8[i].f18 & 4)) {
                func_0013AEC0(i);
            } else {
                result = 0;
            }
        }
        i++;
    } while (i < fEC);
    if (result != 0) {
        func_0013B840(arg1);
    }
    return 1;
}

int C_0013B9C0::func_0013C660(int arg)
{
    int result = 1;
    S_0013B9C0_Ent28 *e = fC;
    S_0013B9C0_Ent28 *end = e + f10 - 1;
    if (f10 > 1) {
        do {
            if (!func_0013C5D0(e, arg)) {
                result = 0;
            }
            e++;
        } while (e != end);
    }
    if (!func_0013C5D0(e, arg)) {
        result = 0;
    }
    int *q = f24;
    do {
        *q = -1;
        q++;
    } while (q <= f28);
    return result;
}

int C_0013B9C0::func_0013C8A0(int idx, int a2, int size, int count)
{
    C_0013B9C0 * volatile self = this;
    volatile int tmp[3];
    S_0013B9C0_Ent20 *e = &fE8[idx];
    S_0013B9C0_Ent28 *t = &fC[e->f0];
    int m;
    int l;
    int n;
    int r;

    if (func_0013B760(t, e->fC + (int)e->f10) == 0) {
        return 0;
    }
    tmp[0] = (int)e->f14 - (int)e->f10;
    tmp[1] = size * count;
    m = tmp[1];
    l = tmp[0];
    if (m > l) {
        m = l;
    }
    tmp[2] = m;
    n = tmp[2];
    if (n < 1) {
        return 0;
    }
    r = self->func_0013BBA0(t, e->f4, a2, n);
    e->f10 = (void *)((int)e->f10 + r);
    if (r == n) {
        return count;
    }
    if (r == 0) {
        return 0;
    }
    return n / r;
}

