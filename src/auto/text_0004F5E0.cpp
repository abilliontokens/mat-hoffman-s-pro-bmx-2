/* 8 functions from 0x0004F5E0 to 0x0004FE60, found by Ghidra. */
#include "common.h"

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

struct C_0004FE30 {
    int unk0;
    char pad4[0x20];
    void *f24;
    char pad28[0x1C];
    void *f44;
    char pad48[0x1C];
    void *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x1F0];
    int f284;
    int f288;
    void func_00033220(void);
    void func_000324E0(int id);
    void *func_0004FE30(int flags);
    void func_0004F7B0(void);
    void func_0004FA60(int id);
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

void C_0004F6E0::func_0004F6E0()
{
    if (f284 == 9) {
        D_002A8490->v15(f24, 0, 0, 0);
        func_0012B190(0, 0, f24->f204, f24->f208);
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

void C_0004FE30::func_0004FA60(int id)
{
    for (int i = 0; i < f90; i++) {
        if (id == *(int *)(*(int *)(*(int *)((char *)f64 + 0x4e0) + 0x1a8 + i * 4) + 0x11b0)) {
            (&f288)[i] = 1;
        }
    }
    func_000324E0(id);
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
struct V4_4F5E0 { int a, b, c, d; };
struct C_0012B410 { void func_0012B410(int a, int b, int c); };
struct C_0013E4F0 { void func_0013E4F0(int a); };
struct C_0002EF20 { void func_0002EF20(int a); };
struct C_000306F0 { void func_000306F0(void *a, int b, int c, V4_4F5E0 d, int e, int f); };
struct G_4F5E0_E0 { char pad0[8]; int f8; };
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
