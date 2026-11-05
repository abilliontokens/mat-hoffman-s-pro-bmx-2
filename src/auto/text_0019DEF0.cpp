/* 4 functions from 0x0019DEF0 to 0x0019EEC0, found by Ghidra. */
#include "common.h"

struct S_0019EB10_Node {
    char pad0[0x170];
    S_0019EB10_Node *f170;
    int func_00198270(void);
    void func_001982A0(int *count, S_0019EB10_Node **list);
};

struct S_0019EB10_Loader {
    void func_0013C8A0(int h, void *buf, int size, int count);
};

struct S_0019EB10_Vec3 {
    int x, y, z;
};

struct S_0019EB10_Mat {
    char pad0[0x40];
    void func_000264C0(void *src);
};

struct S_0019EB10_Obj {
    char pad0[0xf0];
    S_0019EB10_Mat fF0;
    char pad130[0x80];
    S_0019EB10_Vec3 f1b0;
    short f1bc;
    char pad1be[2];
    S_0019EB10_Node *f1c0;
    int f1c4;
    int f1c8;
    short f1cc;
    short f1ce;
    char pad1d0[4];
    int f1d4;
    S_0019EB10_Obj *func_0019B700(int a);
    void func_0019CCE0(int h);
};

struct S_0019EB10_Sub {
    char pad0[8];
    int f8;
    int *fC;
    int *f10;
    int *f14;
    int *f18;
    S_0019EB10_Vec3 *f1c;
    S_0019EB10_Mat *f20;
    int *f24;
    short *f28;
    int f2c;
};

struct C_0019EB10 {
    char pad0[0x190];
    int f190;
    int *f194;
    int *f198;
    S_0019EB10_Node *f19c;
    S_0019EB10_Obj **f1a0;
    S_0019EB10_Sub *f1a4;
    void func_0019EB10(int h);
    void func_0019ECB0(S_0019EB10_Node *root, S_0019EB10_Sub *d);
};

extern S_0019EB10_Loader *D_002BEAAC;
void *func_001E8A44(int size);
void *func_001E8AA5(int size);
void func_001E891B(void *p);

void C_0019EB10::func_0019EB10(int h)
{
    struct { S_0019EB10_Node **list; int count; int dummy; } c;
    S_0019EB10_Node *node;
    int fh;
    int i;
    void *mem;
    S_0019EB10_Obj *obj;

    node = f19c;
    while (node->f170 != 0) {
        node = node->f170;
    }
    c.list = (S_0019EB10_Node **)func_001E8A44(node->func_00198270() * 4);
    c.count = 1;
    *c.list = node;
    node->func_001982A0(&c.count, c.list);
    fh = h;
    D_002BEAAC->func_0013C8A0(fh, &f190, 4, 1);
    D_002BEAAC->func_0013C8A0(fh, &c.dummy, 4, 1);
    f1a0 = (S_0019EB10_Obj **)func_001E8AA5(f190 * 4);
    f194 = (int *)func_001E8A44(f190 * 4);
    f198 = (int *)func_001E8A44(f190 * 4);
    f1a4->f24 = (int *)func_001E8AA5(f190 * 4);
    for (i = 0; i < f190; i++) {
        D_002BEAAC->func_0013C8A0(fh, &h, 4, 1);
        mem = func_001E8A44(0x1e0);
        obj = mem != 0 ? ((S_0019EB10_Obj *)mem)->func_0019B700(1) : 0;
        f1a0[i] = obj;
        f1a0[i]->f1c0 = c.list[h];
        f1a0[i]->func_0019CCE0(fh);
        f1a0[i]->f1d4 = 0;
        f194[i] = 1;
        f1a4->f24[i] = h;
    }
    func_001E891B(c.list);
}
