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
    int pad4;
    void *f8;
};

void *func_001E8A44(unsigned int);

struct C_0004BF00_Object {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6();
    C_0004BF00_Object *func_00088530(int);
    C_0004BF00_Object *func_00088570(void *);
    C_0004BF00_Object *func_0005ECA0(int);
    void func_0005EDC0(void *);
    C_0004BF00_Object *func_000715B0(int);
    void func_00071880(void *);
    C_0004BF00_Object *func_00066C90(int);
    void func_00066FA0(void *);
    C_0004BF00_Object *func_00082450(int);
    void func_0008DB70(void *, void *, void *, int, int, int, int);
    C_0004BF00_Object *func_000876B0(int);
    C_0004BF00_Object *func_00087760(void *, void *, int);
    C_0004BF00_Object *func_00088DA0(int);
    void func_00088DD0(void *, int, void *);
    C_0004BF00_Object *func_0006E330(int);
    void func_0006ECC0(void *);
    C_0004BF00_Object *func_00086DC0(int);
    void func_00086E60(void *, void *, int);
};

struct C_0004BF00_Riders {
    char pad0[0x1a8];
    void *f1A8[1];
};

struct C_0004BF00_World {
    char pad0[0x4e0];
    C_0004BF00_Riders *f4E0;
};

struct C_0004BF00 {
    char pad0[0x64];
    C_0004BF00_World *f64;
    char pad68[0x7c];
    C_0004BF00_Object *fE4;
    char padE8[0x74];
    C_0004BF00_Object *f15C;
    char pad160[0x10];
    C_0004BF00_Object *f170[1];
    char pad174[0x1c];
    C_0004BF00_Object *f190;
    int f194;
    C_0004BF00_Object *f198;
    int f19C;
    C_0004BF00_Object *f1A0;
    char pad1A4[0x10a4];
    C_0004BF00_Object *f1248[1];
    void func_00031630();
    void func_0004BF00();
};

struct C_0004C720Mgr {
    char pad0[0x2e0];
    C_0004C720List *f2e0;
};

extern C_0004C720Mgr *D_002A8490;

struct C_0004BAF0 {
    char pad0[0x64];
    C_0004BF00_World *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x50];
    C_0004BF00_Object *fE4;
    char padE8[0x74];
    C_0004BF00_Object *f15C;
    char pad160[4];
    C_0004BF00_Object *f164;
    char pad168[8];
    C_0004BF00_Object *f170[1];
    char pad174[0x1c];
    C_0004BF00_Object *f190;
    char pad194[0xc];
    C_0004BF00_Object *f1A0;
    char pad1A4[0xe0];
    C_0004BF00_Object *f284[1];
    void func_00031630();
    void func_0004BAF0();
};

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

/* S_0004C320_Part seen without its virtual inheritance: vbptr first, then f4 */
struct S_0004C320_PartRaw {
    int *vbptr;
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

void C_0004BAF0::func_0004BAF0() {
    C_0004BF00_Object *p;
    int i;
    func_00031630();
    p = (C_0004BF00_Object *)func_001E8A44(0xf4);
    fE4 = p ? p->func_00088530(1) : 0;
    fE4 = fE4->func_00088570(D_002A8490->f2e0->f8);
    p = (C_0004BF00_Object *)func_001E8A44(0x134);
    f15C = p ? p->func_0005ECA0(1) : 0;
    f15C->func_0005EDC0(this);
    f15C->v4();
    p = (C_0004BF00_Object *)func_001E8A44(0x140);
    f1A0 = p ? p->func_000715B0(1) : 0;
    f1A0->func_00071880(this);
    f1A0->v4();
    p = (C_0004BF00_Object *)func_001E8A44(0x1a0);
    f164 = p ? p->func_0006E330(1) : 0;
    f164->func_0006ECC0(this);
    f164->v4();
    p = (C_0004BF00_Object *)func_001E8A44(0x16c);
    f190 = p ? p->func_00066C90(1) : 0;
    f190->func_00066FA0(this);
    f190->v4();
    for (i = 0; i < f90; ++i) {
        p = (C_0004BF00_Object *)func_001E8A44(0xda4);
        f170[i] = p ? p->func_00082450(1) : 0;
        f170[i]->func_0008DB70(f64, f64->f4E0->f1A8[i], D_002A8490->f2e0->f8, i, 1, 1, 0);
        f170[i]->v6();
        p = (C_0004BF00_Object *)func_001E8A44(0x48);
        f284[i] = p ? p->func_00086DC0(1) : 0;
        f284[i]->func_00086E60(f64->f4E0->f1A8[i], D_002A8490->f2e0->f8, i);
        f284[i]->v6();
    }
}

void *C_0004BED0::func_0004BED0(int flags) {
    extern int D_0027732C;
    unk0 = (int)&D_0027732C;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0004BF00::func_0004BF00() {
    C_0004BF00_Object *p;
    int i;
    func_00031630();
    p = (C_0004BF00_Object *)func_001E8A44(0xf4);
    fE4 = p ? p->func_00088530(1) : 0;
    fE4 = fE4->func_00088570(D_002A8490->f2e0->f8);
    p = (C_0004BF00_Object *)func_001E8A44(0x134);
    f15C = p ? p->func_0005ECA0(1) : 0;
    f15C->func_0005EDC0(this);
    f15C->v4();
    p = (C_0004BF00_Object *)func_001E8A44(0x140);
    f1A0 = p ? p->func_000715B0(1) : 0;
    f1A0->func_00071880(this);
    f1A0->v4();
    p = (C_0004BF00_Object *)func_001E8A44(0x16c);
    f190 = p ? p->func_00066C90(1) : 0;
    f190->func_00066FA0(this);
    f190->v4();
    for (i = 0; i < D_002A8490->f2e0->count; ++i) {
        p = (C_0004BF00_Object *)func_001E8A44(0xda4);
        f170[i] = p ? p->func_00082450(1) : 0;
        f170[i]->func_0008DB70(f64, f64->f4E0->f1A8[i], D_002A8490->f2e0->f8, i, 1, 1, 0);
        f170[i]->v6();
    }
    p = (C_0004BF00_Object *)func_001E8A44(0xc8);
    p = p ? p->func_000876B0(1) : 0;
    f198 = p->func_00087760(D_002A8490->f2e0->f8, this, 0);
    for (i = 0; i < D_002A8490->f2e0->count; ++i) {
        p = (C_0004BF00_Object *)func_001E8A44(0x44);
        f1248[i] = p ? p->func_00088DA0(1) : 0;
        f1248[i]->func_00088DD0(D_002A8490->f2e0->f8, i, this);
    }
}

extern char D_002774C0[], D_002774B0[], D_002774A0[];
int func_001ADCC0(char *, int, const char *, ...);
int func_001EA426(const char *, const char *);
extern "C" void *memset(void *, int, unsigned int);
void C_0004C560::func_0004C130(void)
{
    int cnt[8];
    char buf[0x104];
    char buf2[0x104];
    char *name;
    int i, j, n = 0, m;

    memset(cnt, 0, sizeof(cnt));
    for (i = 0; i < *(int *)((char *)f64->f3ac + 0x24); i++) {
        name = (char *)f64->f3ac->f28[i] + 0xa0;
        for (j = 0; j < 8; j++) {
            func_001ADCC0(buf, 0x104, D_002774C0, j + 1, cnt[j] + 1);
            if (!func_001EA426(buf, name)) {
                f284[j + 1][cnt[j]] = i;
                cnt[j]++;
            }
        }
        func_001ADCC0(buf, 0x104, D_002774B0, n + 1);
        if (!func_001EA426(buf, name)) {
            f284[0][n] = i;
            n++;
        }
    }
    for (i = 0; i < f90; i++) {
        f1250 = i;
    }
    f1250 = n;
    m = 0;
    for (i = 0; i < *(int *)(*(char **)((char *)f64 + 0x3b4) + 0x24); i++) {
        char *o = *(char **)(*(char **)(*(char **)((char *)f64 + 0x3b4) + 0x28) + i * 4);
        func_001ADCC0(buf2, 0x104, D_002774A0, m + 1);
        if (!func_001EA426(buf2, o + 0x18)) {
            f98c[m] = i;
            m++;
        }
    }
}

void C_0004C560::func_0004C320(void)
{
    int i;
    int j;
    S_0004C320_Obj *o;
    float v[4];

    for (i = 0; i < f1250; i++) {
        for (j = 1; j < 9; j++) {
            int idx = f284[j][i];
            if (idx >= 0) {
                S_0004C320_Obj *ob = f64->f3ac->f28[idx];
                ob->f1a4->v5();
            }
        }
        o = f64->f3ac->f28[f284[0][i]];
        o->f1a4->v7();
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
        if (j == sel) {
            ((S_0004C320_Base *)((char *)o->f1a4 + ((S_0004C320_PartRaw *)o->f1a4)->vbptr[1]))->v7();
            o->f1a4->f4->func_001824E0(v1, x, y, z);
        } else {
            ((S_0004C320_Base *)((char *)o->f1a4 + ((S_0004C320_PartRaw *)o->f1a4)->vbptr[1]))->v5();
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
        int *p = &items[i].a;
        p[0] = -1;
        p[1] = 0;
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

