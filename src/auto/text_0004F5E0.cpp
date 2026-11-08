/* 8 functions from 0x0004F5E0 to 0x0004FE60, found by Ghidra. */
#include "common.h"
#include <string.h>

struct V4_4F5E0 { int a, b, c, d; };
struct C_0012B410 { void func_0012B410(int a, int b, int c); };
struct C_0013E4F0 { C_0012B410 *func_0013E4F0(int a); };
struct C_000306F0;
struct C_0002EF20 { C_000306F0 *func_0002EF20(int a); };
struct C_000306F0 { void func_000306F0(void *a, int b, int c, V4_4F5E0 d, int e, int f); };
struct G_4F5E0_E0 { char pad0[8]; int f8; char padC[4]; int f10; };
struct G_4F5E0 {
    char pad0[0x124]; int f124;
    char pad128[0x108]; unsigned char f230;
    char pad231[0xAF]; G_4F5E0_E0 *f2E0;
};
struct O_4F5E0_4DC { char pad0[0x24]; V4_4F5E0 f24; };
struct O_4F5E0_64 { char pad0[0x4ac]; int *f4AC; char pad4B0[0x2c]; O_4F5E0_4DC *f4DC; };
struct C_0004F5E0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28();
    char pad4[0x20];
    C_0012B410 *f24;
    char pad28[0x1C];
    C_000306F0 *f44;
    char pad48[0x1C];
    O_4F5E0_64 *f64;
    char pad68[0x21C];
    int f284;
    void func_00031AF0();
    int func_0004F5E0();
};
void *func_001E8A44(int);

struct C_0002EF70 {
    void func_0002EF70(int a, int b);
};

struct C_00030240 {
    void func_00030240(int a, int b, int c, int d, int e);
};

struct C_0012A770 {
    void func_0012A770(int a, int b);
};

struct C_00031C90 {
    void func_00031C90(void);
};

struct S_4FAC0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    void func_0010C090(void *a, void *b, int c, int d);
    void func_0010E810(void);
};

struct S_4FAC0_Tbl {
    char pad0[0x1A8];
    S_4FAC0_Obj *objs[1];
};

struct S_4FAC0_Mgr {
    char pad0[0x4DC];
    char *f4DC;
    S_4FAC0_Tbl *f4E0;
};

struct C_00086C70 {
    int func_00086C70(int a0);
};

struct C_00086C30 {
    void func_00086C30(int a0);
    void func_000847A0(void);
};

struct C_0004FE30 {
    int unk0;
    char pad4[0x20];
    void *f24;
    char pad28[0x1C];
    void *f44;
    char pad48[0x1C];
    S_4FAC0_Mgr *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x120 - 0x94];
    int f120;
    int f124;
    int f128;
    char pad12C[0x170 - 0x12C];
    C_00086C30 *f170;
    char pad174[0x284 - 0x174];
    int f284;
    int f288;
    char pad28C[0x2A8 - 0x28C];
    C_00086C70 *f2A8;
    int f2AC;
    int f2B0;
    char pad2B4[4];
    int f2B8[1];
    void func_00033220(void);
    void func_000324E0(int id);
    void *func_0004FE30(int flags);
    void func_0004F7B0(void);
    void func_0004FA60(int id);
    void func_0004FAC0(void);
};

struct C_0004F6E0_Data {
    int unk0[6];
};

struct C_0004F6E0_Mgr {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15(void *a, int b, int c, int d);
};

extern C_0004F6E0_Mgr *D_002A8490;
void __stdcall func_0012B190(int a, int b, int c, int d);

struct C_0004F6E0_Sub {
    char pad0[0x1E0];
    C_0004F6E0_Data f1E0;
    char pad1F8[0xC];
    int f204;
    int f208;
    void func_0012B190(int a, int b, int c, int d);
};

struct C_0004F6E0 {
    char pad0[0x24];
    C_0004F6E0_Sub *f24;
    char pad28[0x1B4];
    C_0004F6E0_Data unk1DC;
    char pad1F4[0x90];
    int f284;
    void func_000318A0();
    void func_0004F6E0();
};

struct V_4FC20 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(int a);
    virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30();
    virtual void v31(int a, int b);
};
struct G_4FC20_2E0 { char pad0[4]; int f4; char pad8[0x2F4]; V_4FC20 *f2FC; };
struct G_4FC20 { char pad0[0x2E0]; G_4FC20_2E0 *f2E0; };
struct E_4FC20 { char pad0[0x958]; float f958; int f95C; char pad960[0x10]; int f970; };
struct T_4FC20 { char pad0[0x1A8]; E_4FC20 *f1A8[1]; };
struct M_4FC20 { char pad0[0x4C0]; V_4FC20 *f4C0; char pad4C4[0x1C]; T_4FC20 *f4E0; };
struct P_4FC20_15C {
    char pad0[0xFC]; int fFC;
    void func_000602B0();
    void func_00060350(int a);
};
struct P_4FC20_190 { char pad0[0x168]; int f168; };
struct P_4FC20_1A0 { char pad0[0x13C]; int f13C; };
struct P_4FC20_2D8 { char pad0[0xCC]; int fCC; };
int func_001361E0(int a, int b, int *c, unsigned int d);
struct C_0004FC20 {
    char pad0[0x64]; M_4FC20 *f64;
    char pad68[0x28]; int f90;
    char pad94[0x8C]; int f120;
    char pad124[0x38]; P_4FC20_15C *f15C;
    char pad160[0x30]; P_4FC20_190 *f190;
    char pad194[0xC]; P_4FC20_1A0 *f1A0;
    char pad1A4[0x134]; P_4FC20_2D8 *f2D8; int f2DC; int f2E0;
    void func_00032A20();
    int func_00157BF0(int *a, int b);
    int func_0004FC20(int *a, int b);
    __forceinline void ResetRiders()
    {
        f64->f4C0->v31(1, 1);
        ((G_4FC20 *)D_002A8490)->f2E0->f2FC->v18(1);
        for (int i = 0; i < f90; ++i)
            f64->f4E0->f1A8[i]->f958 = 0.5f;
    }
};

struct S_4F820_Control {
 void func_00086C10(int); void func_00086C20(int);
 void func_000867F0(int); void func_00086910(int);
 void func_00086A40(int); void func_00086B20(int);
};
struct S_4F820_Sub {
 char pad0[0xB8]; int fB8;
 void func_0006D280();
};
struct C_0004F820 {
 char pad0[0x64]; M_4FC20 *f64;
 char pad68[0xA8]; int f110;
 char pad114[0xC]; int f120;
 char pad124[0x184]; S_4F820_Control *f2A8;
 char pad2AC[8]; int f2B4;
 char pad2B8[0x20]; S_4F820_Sub *f2D8; int f2DC;
 void func_00032A20();
 void func_0004F820(unsigned int state);
};

int C_0004F5E0::func_0004F5E0()
{
    if (f284 == 9) {
        G_4F5E0 *g = (G_4F5E0 *)D_002A8490;
        g->f230 |= 1;
        ((G_4F5E0 *)D_002A8490)->f124 = 0;
        C_0013E4F0 *p = (C_0013E4F0 *)func_001E8A44(0x2d0);
        f24 = p ? p->func_0013E4F0(1) : 0;
        f24->func_0012B410(0x3f9f49f5, 0x280, 0x1c0);
        C_0002EF20 *q = (C_0002EF20 *)func_001E8A44(0x78);
        f44 = q ? q->func_0002EF20(1) : 0;
        f44->func_000306F0(f24, ((G_4F5E0 *)D_002A8490)->f2E0->f8, *f64->f4AC, f64->f4DC->f24, 0, 0);
        v27();
        v28();
        return 1;
    }
    func_00031AF0();
    return 1;
}

void C_0004F6E0::func_0004F6E0()
{
    if (f284 == 9) {
        D_002A8490->v15(f24, 0, 0, 0);
        f24->func_0012B190(0, 0, f24->f204, f24->f208);
        unk1DC = f24->f1E0;
        return;
    }
    func_000318A0();
}

void C_0004FE30::func_0004F7B0(void)
{
    if (f284 == 9) {
        int v = *(int *)((char *)f64 + 0x4e0);
        if (v != 0) {
            v = *(int *)(v + 0x1a8);
            if (v != 0) {
                ((C_0002EF70 *)f44)->func_0002EF70(v, 0);
            }
        }
        ((C_00030240 *)f44)->func_00030240(*(int *)((char *)f64 + 0x3e4), 0, 0, 0, 0);
        ((C_0012A770 *)f24)->func_0012A770(**(int **)((char *)f64 + 0x4a8), 2);
        return;
    }
    ((C_00031C90 *)this)->func_00031C90();
}

void C_0004F820::func_0004F820(unsigned int state)
{
 f2A8->func_00086C10(0);
 f2A8->func_00086C20(0);
 switch(state) {
 case 0:
 f2A8->func_000867F0(1);
 f64->f4E0->f1A8[f120]->f95C = 1;
 f110 = 0;
 break;
 case 2:
 f2A8->func_00086910(1);
 f2A8->func_00086C10(1);
 f64->f4E0->f1A8[f120]->f95C = 1;
 f110 = 0;
 break;
 case 1:
 f110 = 1;
 f2A8->func_00086C10(0);
 f2A8->func_00086C20(1);
 f64->f4E0->f1A8[f120]->f95C = 0;
 f64->f4E0->f1A8[f120]->f958 = 0.1f;
 break;
 case 3:
 f110 = 1;
 f2A8->func_00086C20(1);
 f2A8->func_00086C10(1);
 f64->f4E0->f1A8[f120]->f95C = 0;
 f64->f4E0->f1A8[f120]->f958 = 0.1f;
 break;
 case 5:
 f2A8->func_00086A40(1);
 f64->f4E0->f1A8[f120]->f95C = 1;
 f110 = 0;
 break;
 case 4:
 f2A8->func_00086B20(1);
 f64->f4E0->f1A8[f120]->f95C = 1;
 f110 = 0;
 break;
 case 6:
 f2D8->fB8 = f2B4 + 1;
 func_00032A20();
 f2D8->func_0006D280();
 break;
 }
 f2DC = state;
}

void C_0004FE30::func_0004FA60(int id)
{
    for (int i = 0; i < f90; i++) {
        if (id == *(int *)(*(int *)(*(int *)((char *)f64 + 0x4e0) + 0x1a8 + i * 4) + 0x11b0)) {
            (&f288)[i] = 1;
        }
    }
    func_000324E0(id);
}

extern "C" void *memset(void *dst, int c, unsigned int n);
extern "C" void __stosd(unsigned long *dest, unsigned long value, unsigned long count);
#pragma intrinsic(__stosd)
void C_0004FE30::func_0004FAC0(void)
{
    int *p;
    int i;

    f64->f4E0->objs[f120]->v5();
    do {
        if (++f120 >= f90) {
            f120 = 0;
        }
    } while (f2B8[f120] == 0);
    ((C_0002EF70 *)f44)->func_0002EF70((int)f64->f4E0->objs[f120], 0);
    f64->f4E0->objs[f120]->func_0010C090(f64->f4DC + 0x24, f64->f4DC + 0xA4, 0, 1);
    f64->f4E0->objs[f120]->v7();
    f64->f4E0->objs[f120]->func_0010E810();
    f2A8->func_00086C70(f120);
    if (f170 != 0) {
        f170->func_00086C30((int)f64->f4E0->objs[f120]);
        f170->func_000847A0();
    }
    f2B0 = 1;
    p = &f288;
    for (i = 0; i < 8; i++) {
        p[i] = 0;
    }
    f2AC = 0;
    f128 = ((G_4F5E0 *)D_002A8490)->f2E0->f10;
    f124 = 0;
}
int C_0004FC20::func_0004FC20(int *a, int b)
{
    if (func_001361E0(23, 2, a, 0x80000000)) {
        if (((G_4FC20 *)D_002A8490)->f2E0->f4) {
            if (f2D8 && f2D8->fCC == 1) return 0;
            if (!f15C->fFC && !f190->f168 && !f1A0->f13C) {
                int i;
                if (f2D8 && !f2D8->fCC) {
                    f64->f4C0->v31(1, 1);
                    ((G_4FC20 *)D_002A8490)->f2E0->f2FC->v18(1);
                    for (i = 0; i < f90; ++i)
                        f64->f4E0->f1A8[i]->f958 = 0.5f;
                } else {
                    V_4FC20 *p = f64->f4C0;
                    p->v31(1, 1);
                    ((G_4FC20 *)D_002A8490)->f2E0->f2FC->v18(1);
                    for (i = 0; i < f90; ++i)
                        f64->f4E0->f1A8[i]->f958 = 0.5f;
                }
                func_00032A20();
                f15C->func_000602B0();
                f15C->func_00060350(a[2]);
                return 1;
            }
        }
    } else if (func_001361E0(4, 2, a, 0x80000000)) {
        if (!f15C->fFC && (f2DC == 0 || f2DC == 4 || f2DC == 5 || f2DC == 2)) {
            if (a[2] == f64->f4E0->f1A8[f120]->f970) f2E0 = 1;
        }
    }
    return func_00157BF0(a, b);
}

void *C_0004FE30::func_0004FE30(int flags) {
    extern int D_0027777C;
    void func_001E891B(void *);
    unk0 = (int)&D_0027777C;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}