/* 7 functions from 0x0004D7A0 to 0x0004E680, found by Ghidra. */
#include "common.h"

void *func_001E8A44(unsigned int);
struct C_0004E480_Object {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    C_0004E480_Object *func_00088530(int);
    C_0004E480_Object *func_00088570(void *);
    C_0004E480_Object *func_0005ECA0(int);
    void func_0005EDC0(void *);
    C_0004E480_Object *func_000715B0(int);
    void func_00071880(void *);
    C_0004E480_Object *func_00066C90(int);
    void func_00066FA0(void *);
    C_0004E480_Object *func_00084930(int);
    void func_000849F0(void *, void *, int, int);
    C_0004E480_Object *func_000876B0(int);
    C_0004E480_Object *func_00087760(void *, void *, int);
    C_0004E480_Object *func_000888D0(int);
    void func_00088950(void *, int);
};
struct C_0004E480 {
    char pad0[0x64]; void *f64;
    char pad68[0x28]; int f90;
    char pad94[0x50]; C_0004E480_Object *fE4;
    char padE8[0x74]; C_0004E480_Object *f15C;
    char pad160[0x30]; C_0004E480_Object *f190;
    int f194; C_0004E480_Object *f198; int f19C; C_0004E480_Object *f1A0;
    char pad1A4[0xb8c]; C_0004E480_Object *fD30[10];
    C_0004E480_Object *fD58[1];
    void func_00031630();
    void func_0004E480();
};

struct C_0004DCA0_Rider {
    char pad0[0x958];
    float f958;
    int f95C;
    char pad960[0x10];
    int f970;
    void func_00108680(int a);
    void func_0010C090(void *a, void *b, int c, int d);
};

struct C_0004DCA0_Riders {
    char pad0[0x1a8];
    C_0004DCA0_Rider *f1A8[1];
    void func_000A4500(int a, int b);
};

struct C_0004D7A0_Virtual {
    virtual void v0(void);
    virtual void v1(void);
    virtual void v2(void);
    virtual void v3(void);
    virtual void v4(void);
    virtual void v5(void);
    virtual void v6(void);
    virtual void v7(void);
    virtual void v8(void);
    virtual void v9(void);
    virtual void v10(void);
    virtual void v11(void);
    virtual void v12(void);
    virtual void v13(void);
    virtual void v14(void);
    virtual void v15(void);
    virtual void v16(void);
    virtual void v17(void);
    virtual void v18(int);
    virtual void v19(void);
    virtual void v20(void);
    virtual void v21(void);
    virtual void v22(void);
    virtual void v23(void);
    virtual void v24(void);
    virtual void v25(void);
    virtual void v26(void);
    virtual void v27(void);
    virtual void v28(void);
    virtual void v29(void);
    virtual void v30(void);
    virtual void v31(int, int);
};

struct C_0004D7A0_Menu {
    char pad0[0xfc];
    int fFC;
    void func_000602B0(void);
    void func_00060350(int);
};
struct C_0004D7A0_State { char pad0[0x13c]; int f13C; };
struct C_0004D7A0_Other { char pad0[0x168]; int f168; };
struct C_0004D7A0_GlobalState {
    int f0;
    int f4;
    char pad8[0x2f4];
    C_0004D7A0_Virtual *f2FC;
};
struct C_0004D7A0_Global { char pad0[0x2e0]; C_0004D7A0_GlobalState *f2E0; };
extern C_0004D7A0_Global *D_002A8490;
int func_001361E0(int, int, int *, int);

struct C_0004DCA0_World {
    char pad0[0x4c0];
    C_0004D7A0_Virtual *f4C0;
    char pad4c4[0x1c];
    C_0004DCA0_Riders *f4E0;
};

struct C_0004DCA0_Cam {
    void func_00086130(int a);
    void func_00086140(int a);
    void func_00085BD0(int a);
};

struct C_0004DCA0_Snd {
    void func_00099D40(int a);
};

struct C_0004DCA0_Vec {
    char pad0[0x10];
};

struct C_0004DCA0 {
    char pad0[0x64];
    C_0004DCA0_World *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x8c];
    int f120;
    char pad124[0x38];
    C_0004D7A0_Menu *f15C;
    char pad160[0x30];
    C_0004D7A0_Other *f190;
    char pad194[0xc];
    C_0004D7A0_State *f1A0;
    char pad1a4[0x1c];
    C_0004DCA0_Snd *f1C0;
    char pad1C4[0x30];
    int f1F4;
    char pad1f8[0x90];
    C_0004DCA0_Cam *f288;
    int f28C;
    int f290;
    char pad294[0x2c];
    int f2C0;
    char pad2c4[0x3c4];
    C_0004DCA0_Vec f688[8];
    C_0004DCA0_Vec f708[8];
    int func_0004D7A0(int *a, int b);
    int func_00157BF0(int *a, int b);
    int func_00033320(int *a, int b);
    void func_00032A20(void);
    void func_000342C0(void);
    C_0004DCA0 *func_0004DCA0(void);
    C_0004DCA0 *func_0004D930(int a);
    void func_00030F90(int a);
};

struct C_0004D930 {
    void func_00030F90(int a);
    C_0004D930 *func_0004D930(int a);
};

struct C_0004DC70 {
    int unk0;
    void func_00033220(void);
    void *func_0004DC70(int flags);
};

int C_0004DCA0::func_0004D7A0(int *a, int b)
{
    if (f1F4) return func_00157BF0(a, b);
    if (func_001361E0(23, 2, a, 0x80000000)) {
        if (D_002A8490->f2E0->f4 && !f15C->fFC && !f190->f168 && !f1A0->f13C) {
            func_00032A20();
            C_0004D7A0_Virtual *p = f64->f4C0;
            p->v31(1, 1);
            p = D_002A8490->f2E0->f2FC;
            p->v18(1);
            for (int i = 0; i < f90; ++i)
                f64->f4E0->f1A8[i]->f958 = 0.5f;
            f15C->func_000602B0();
            f15C->func_00060350(a[2]);
        }
        if (!f1A0->f13C) return 1;
    } else if (func_001361E0(4, 2, a, 0x80000000)) {
        if (a[2] == f64->f4E0->f1A8[f120]->f970) f2C0 = 1;
    }
    return func_00033320(a, b);
}

void *C_0004DC70::func_0004DC70(int flags) {
    extern int D_002774DC;
    void func_001E891B(void *);
    unk0 = (int)&D_002774DC;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0004DCA0 *C_0004DCA0::func_0004DCA0(void)
{
    int i;
    func_000342C0();
    for (i = 0; i < f90; i++) {
        f64->f4E0->func_000A4500(0, i);
        f64->f4E0->f1A8[i]->f95C = 1;
        f64->f4E0->f1A8[i]->func_00108680(0);
        f64->f4E0->f1A8[i]->func_0010C090(&f688[f28C], &f708[f28C], 0, 1);
    }
    f120 = f90 - 1;
    f288->func_00086130(0);
    f288->func_00086140(0);
    f288->func_00085BD0(1);
    f64->f4E0->f1A8[f120]->f95C = 1;
    f290 = 0;
    if (f1C0)
        f1C0->func_00099D40(-1);
    return this;
}

void C_0004E480::func_0004E480() {
    C_0004E480_Object *p;
    func_00031630();
    p = (C_0004E480_Object *)func_001E8A44(0xf4);
    fE4 = p ? p->func_00088530(1) : 0;
    fE4 = fE4->func_00088570(*(void **)((char *)D_002A8490->f2E0 + 8));
    p = (C_0004E480_Object *)func_001E8A44(0x134);
    f15C = p ? p->func_0005ECA0(1) : 0;
    f15C->func_0005EDC0(this); f15C->v4();
    p = (C_0004E480_Object *)func_001E8A44(0x140);
    f1A0 = p ? p->func_000715B0(1) : 0;
    f1A0->func_00071880(this); f1A0->v4();
    p = (C_0004E480_Object *)func_001E8A44(0x16c);
    f190 = p ? p->func_00066C90(1) : 0;
    f190->func_00066FA0(this); f190->v4();
    for (int i=0; i<D_002A8490->f2E0->f0; ++i) {
        p = (C_0004E480_Object *)func_001E8A44(0x44);
        fD58[i] = p ? p->func_00084930(1) : 0;
        fD58[i]->func_000849F0(((C_0004DCA0_World *)f64)->f4E0->f1A8[i], this, i, 0);
    }
    p = (C_0004E480_Object *)func_001E8A44(0xc8);
    p = p ? p->func_000876B0(1) : 0;
    f198 = p->func_00087760(*(void **)((char *)D_002A8490->f2E0 + 8), this, 0);
    if (f90 > 1) for (int j=0; j<f90; ++j) {
        p = (C_0004E480_Object *)func_001E8A44(0x54);
        fD30[j] = p ? p->func_000888D0(1) : 0;
        fD30[j]->func_00088950(*(void **)((char *)D_002A8490->f2E0 + 8), j);
    }
}

