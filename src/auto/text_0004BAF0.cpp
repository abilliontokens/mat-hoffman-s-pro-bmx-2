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

    __forceinline void SetHighlight(int on, float x, float y, float z)
    {
        float v1[4];
        float v2[4];

        if (on) {
            v7();
            f4->func_001824E0(v1, x, y, z);
        } else {
            v5();
            f4->func_001824E0(v2, 1.0f, 1.0f, 1.0f);
        }
    }
};

/* S_0004C320_Part seen without its virtual inheritance: vbptr first, then f4 */
struct S_0004C320_PartRaw {
    int *vbptr;
    S_0004C320_Comp *f4;
};

struct S_0004C320_Obj {
    char pad0[0x1a4];
    S_0004C320_Part *f1a4;
};

struct S_0004C3F0_Obj {
    char pad0[0x1a4];
    S_0004C320_Part &f1a4;
};

struct S_0004C320_Scene {
    char pad0[0x28];
    S_0004C320_Obj **f28;
};

struct S_0004C320_World {
    char pad0[0x3ac];
    S_0004C320_Scene *f3ac;
};

struct C_0004C560Block {
    int used;
    int vals[50];
};

struct C_0004C560 {
    int unk0;
    char pad4[0x60];
    S_0004C320_World *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x12c];
    C_0004C560Obj1C0 *f1c0;
    char pad1c4[0x44];
    int f208;
    char pad20c[0x78];
    int f284[9][50];
    int f98c[50];
    C_0004C560Item items[50];
    C_0004C560Block blocks[8];
    int f1244;
    C_0004C560Tracker *f1248[2];
    int f1250;
    void func_00030F90(int a0);
    void func_00031640(void);
    void func_00034090(void);
    void func_000342C0(void);
    void func_0004C130(void);
    void func_0004C320(void);
    void func_0004C3F0(int idx, int sel, int mode);
    void func_001577A0(void *p, int n);
    int func_0004C560(void);
    void func_0004C5D0(void);
    C_0004C560 *func_0004C610(int a0);
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

void C_0004C560::func_0004C320(void)
{
    int i;
    int j;
    S_0004C320_Obj *o;
    float v[4];

    for (i = 0; i < f1250; i++) {
        for (j = 1; j < 9; j++) {
            if (f284[j][i] >= 0) {
                f64->f3ac->f28[f284[j][i]]->f1a4->v5();
            }
        }
        o = f64->f3ac->f28[f284[0][i]];
        ((S_0004C320_Base *)((char *)o->f1a4 + ((S_0004C320_PartRaw *)o->f1a4)->vbptr[1]))->v7();
        o->f1a4->f4->func_001824E0(v, 1.0f, 1.0f, 1.0f);
    }
}

void C_0004C560::func_0004C3F0(int idx, int sel, int mode)
{
    float x, y, z;
    float v1[4];
    float v2[4];
    int j;
    S_0004C320_Obj *o;

    o = f64->f3ac->f28[f284[0][idx]];
    o->f1a4->v5();
    x = 1.0f;
    y = 1.0f;
    z = 1.0f;
    switch (mode) {
    case 1:
        x = 2.0f;
        y = 1.8f;
        z = 0.2f;
        break;
    case 2:
        x = 2.0f;
        y = 1.0f;
        z = 0.4f;
        break;
    case 3:
        x = 2.0f;
        y = 0.2f;
        z = 0.2f;
        break;
    case 4:
        x = 1.4f;
        y = 0.6f;
        z = 1.8f;
        break;
    }
    for (j = 0; j < f90; j++) {
        o = f64->f3ac->f28[f284[j + 1][idx]];
        S_0004C320_PartRaw *raw = (S_0004C320_PartRaw *)o->f1a4;
        int off = raw->vbptr[1];
        S_0004C320_Base *b = (S_0004C320_Base *)((char *)raw + off);
        if (j == sel) {
            b->v7();
            o->f1a4->f4->func_001824E0(v1, x, y, z);
        } else {
            b->v5();
            o->f1a4->f4->func_001824E0(v2, 1.0f, 1.0f, 1.0f);
        }
    }
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

C_0004C560 *C_0004C560::func_0004C610(int a0)
{
    int i;
    int j;
    C_0004C560Item *p;

    func_00030F90(a0);
    unk0 = (int)&D_002773EC;
    for (i = 0; i < 50; i++) {
        p = &items[i];
        p->a = -1;
        p->b = 0;
    }
    for (i = 0; i < 8; i++) {
        if (blocks[i].used != 0) {
            blocks[i].used = 0;
            for (j = 0; j < 50; j++) {
                blocks[i].vals[j] = -1;
            }
        }
    }
    f1250 = 0;
    for (i = 0; i < 50; i++) {
        f284[0][i] = -1;
        f98c[i] = -1;
        for (j = 1; j < 9; j++) {
            f284[j][i] = -1;
        }
    }
    f1244 = 0;
    for (i = 0; i < f1250; i++) {
        p = &items[i];
        p->a = -1;
        p->b = 0;
    }
    f1248[0] = 0;
    f1248[1] = 0;
    return this;
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

