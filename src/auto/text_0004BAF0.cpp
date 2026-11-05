/* 11 functions from 0x0004BAF0 to 0x0004C7A0, found by Ghidra. */
#include "common.h"

extern int D_002773EC;
void func_001E891B(void *);

struct C_0004C6F0 {
    int unk0;
    void func_00033220(void);
    void *func_0004C6F0(int flags);
};

struct C_0004BED0 {
    int unk0;
    void func_00033220(void);
    void *func_0004BED0(int flags);
};

struct C_0004C560Item {
    int a;
    int b;
};

struct C_0004C560Tracker {
    void func_00088F70(int a, int b);
    void func_00088F60(int a);
};

struct C_0004C560Obj1C0 {
    void func_00099D40(int a);
};

struct C_0004C720List {
    int count;
};

struct C_0004C720Mgr {
    char pad0[0x2e0];
    C_0004C720List *f2e0;
};

extern C_0004C720Mgr *D_002A8490;

/* the base class whose virtual functions the parts below are called through */
struct S_0004C320_Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

struct S_0004C320_Comp {
    void func_001824E0(float *out, float x, float y, float z);
};

struct S_0004C320_Part : virtual S_0004C320_Base {
    S_0004C320_Comp *f4;
};

struct S_0004C320_Obj {
    char pad0[0x1a4];
    S_0004C320_Part *f1a4;
};

struct S_0004C320_Scene {
    char pad0[0x28];
    S_0004C320_Obj **f28;
};

struct S_0004C320_World {
    char pad0[0x3ac];
    S_0004C320_Scene *f3ac;
};

struct C_0004C560 {
    char pad0[0x64];
    S_0004C320_World *f64;
    char pad68[0x158];
    C_0004C560Obj1C0 *f1c0;
    char pad1c4[0x44];
    int f208;
    char pad20c[0x78];
    int f284[9][50];
    char pad98c[0xc8];
    C_0004C560Item items[254];
    int f1244;
    C_0004C560Tracker *f1248[2];
    int f1250;
    void func_00031640(void);
    void func_00034090(void);
    void func_000342C0(void);
    void func_0004C130(void);
    void func_0004C320(void);
    void func_001577A0(void *p, int n);
    int func_0004C560(void);
    void func_0004C5D0(void);
    int func_0004C720(void);
};

void *C_0004BED0::func_0004BED0(int flags) {
    extern int D_0027732C;
    unk0 = (int)&D_0027732C;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_0004C560::func_0004C560(void)
{
    int i;

    f1244 = 0;
    func_00034090();
    func_0004C320();
    for (i = 0; i < f1250; i++) {
        items[i].b = 0;
        items[i].a = -1;
    }
    f1248[0]->func_00088F70(0, 1);
    f1248[1]->func_00088F70(0, 1);
    return 1;
}

void C_0004C560::func_0004C5D0(void)
{
    func_00031640();
    if (f1248[0] != 0) {
        func_001577A0(f1248[0], 0xa);
    }
    if (f1248[1] != 0) {
        func_001577A0(f1248[1], 0xa);
    }
}

void *C_0004C6F0::func_0004C6F0(int flags) {
    unk0 = (int)&D_002773EC;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_0004C560::func_0004C720(void)
{
    int i;

    f208 = 1;
    func_000342C0();
    func_0004C130();
    func_0004C320();
    for (i = 0; i < D_002A8490->f2e0->count; i++) {
        f1248[i]->func_00088F60(f1250 / 2);
    }
    if (f1c0 != 0) {
        f1c0->func_00099D40(-1);
    }
    return (int)this;
}

