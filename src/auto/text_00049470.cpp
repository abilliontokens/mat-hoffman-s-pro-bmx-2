/* 10 functions from 0x00049470 to 0x0004A360, found by Ghidra. */
#include "common.h"

extern int D_0027718C;
extern char D_00277160[], D_00277150[], D_00277140[];
struct C_00162B20 { int func_00162B20(const char *, int); };
extern C_00162B20 *D_002EF7D0;
struct S_00049A50_Global {
 void **vtbl;
 char pad4[0x4a4];
 int *f4A8;
};
extern S_00049A50_Global *D_002B9120;

struct C_00198390 {
    void func_00198390(void);
    void func_001983A0(void);
    void func_00198E60(void);
    void func_0019ABA0(int, int);
};

struct S_00049A20_Inner {
    int unk0;
    C_00198390 *f4;
    void func_00164820(int);
};

struct S_00049A20_Holder {
    S_00049A20_Inner *f0;
};

struct S_00049A20_Arg {
    char pad0[0x2e4];
    S_00049A20_Holder *f2E4;
    S_00049A20_Holder *f2E8;
};

struct C_00030F90 {
    void func_00030F90(int param_1);
};

struct C_00049C00 {
    void *vtbl;
    char pad4[0x2c4];
    u32 f2C8;
    u32 f2CC;
    u32 f2D0;
    u32 f2D4;
    u32 f2D8;
    u32 f2DC;
    u32 f2E0;
    u32 f2E4;
    u32 f2E8;
    C_00049C00 *func_00049C00(int param_1);
};

struct C_00049C60_Obj1C0 {
    void func_00099D40(int a);
};

struct C_00049C60 {
    char pad0[0x1C0];
    C_00049C60_Obj1C0 *f1C0;   /* 0x1C0 */
    char pad1C4[0x48];         /* 0x1C4 */
    int f20C;                  /* 0x20C */
    C_00049C60 *func_00049C60(void);
    void func_000342C0(void);
};

struct S_4A1A0_Mgr { int f0; };
struct S_4A1A0_Global {
    char pad0[0x124];
    int f124;
    char pad128[0x2e0 - 0x128];
    S_4A1A0_Mgr *f2e0;
};
extern S_4A1A0_Global *D_002A8490;

struct S_4A1A0_V5C0 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5(int a);
};
struct S_4A1A0_Rider {
    char pad0[0x578];
    int f578;
    char pad57c[0x5c0 - 0x57c];
    S_4A1A0_V5C0 *f5c0;
    char pad5c4[0x6d0 - 0x5c4];
    int f6d0, f6d4, f6d8;
    void func_00150F80(void);
};
struct S_4A1A0_Bike {
    char pad0[0x770];
    int f770, f774, f778;
    void func_00018EB0(void);
};
struct S_4A1A0_Obj488 { void func_0016F7B0(void); };
struct S_4A1A0_PartBase {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
};
struct S_4A1A0_Part : virtual S_4A1A0_PartBase {
    C_00198390 *f4;
};
struct S_4A1A0_Obj4 { char pad0[0x1a4]; S_4A1A0_Part *f1a4; };
struct S_4A1A0_Item {
    char pad0[4];
    S_4A1A0_Obj4 *f4;
    char pad8[0x80 - 8];
    S_4A1A0_PartBase *f80;
    int f84;
};
struct S_4A1A0_List {
    char pad0[0x488];
    S_4A1A0_Obj488 *f488;
    char pad48c[0x4e4 - 0x48c];
    S_4A1A0_Rider *f4e4[16];
    S_4A1A0_Item **f524;
    S_4A1A0_Bike *f528;
    char pad52c[0x560 - 0x52c];
    int f560;
};
struct C_0004A1A0 {
    char pad0[0x64];
    S_4A1A0_List *f64;
    char pad68[0x1c0 - 0x68];
    C_00049C60_Obj1C0 *f1C0;
    char pad1c4[0x2c4 - 0x1c4];
    int f2C4;
    char pad2c8[0x2e0 - 0x2c8];
    int f2E0;
    int func_0004A1A0(void);
};

struct C_00049BD0 {
    int unk0;
    int unk4;
    char pad8[0x78];
    int unk80;
    int unk84;
    int unk88;
    int unk8C;
    C_00049BD0* func_00049BD0(void);
};


void func_00049A20(S_00049A20_Arg *arg) {
    arg->f2E4->f0->f4->func_00198390();
    arg->f2E8->f0->f4->func_00198390();
}

C_00049BD0* C_00049BD0::func_00049BD0(void) {
    extern int D_00277184;
    unk0 = (int)&D_00277184;
    unk4 = 0;
    unk80 = 0;
    unk84 = 0;
    unk88 = 0;
    unk8C = 0;
    return this;
}

C_00049C00 *C_00049C00::func_00049C00(int param_1) {
    ((C_00030F90 *)this)->func_00030F90(param_1);
    f2CC = 0;
    f2D0 = 0;
    f2D4 = 0;
    f2D8 = 0;
    f2DC = 0;
    f2E4 = 0;
    f2E8 = 0;
    f2C8 = 0;
    vtbl = &D_0027718C;
    f2E0 = 1;
    return this;
}

C_00049C60 *C_00049C60::func_00049C60(void)
{
    f20C = 1;
    func_000342C0();
    if (f1C0 != 0)
        f1C0->func_00099D40(-1);
    return this;
}

int C_0004A1A0::func_0004A1A0(void)
{
    int i;
    S_4A1A0_List *g;

    f2C4 = 0;
    D_002A8490->f124 = 0;
    f2E0 = 1;
    f64->f4e4[0]->f5c0->dummy5(0);
    for (i = 0; i < D_002A8490->f2e0->f0; i++) {
        f64->f4e4[i]->func_00150F80();
        f64->f4e4[i]->f6d4 = 0;
        f64->f4e4[i]->f6d0 = 0;
        f64->f4e4[i]->f6d8 = 0;
        if (D_002A8490->f2e0->f0 == 1)
            f64->f4e4[i]->f578 = 0;
    }
    if (((S_4A1A0_List *)D_002B9120)->f528 != 0) {
        ((S_4A1A0_List *)D_002B9120)->f528->func_00018EB0();
        f64->f528->f774 = 0;
        f64->f528->f770 = 0;
        f64->f528->f778 = 0;
    }
    if (((S_4A1A0_List *)D_002B9120)->f488 != 0)
        ((S_4A1A0_List *)D_002B9120)->f488->func_0016F7B0();
    for (i = 0; i < ((S_4A1A0_List *)D_002B9120)->f560; i++) {
        ((S_4A1A0_List *)D_002B9120)->f524[i]->f84 = 0;
        ((S_4A1A0_List *)D_002B9120)->f524[i]->f80->dummy6();
        ((S_4A1A0_List *)D_002B9120)->f524[i]->f4->f1a4->dummy6();
        ((S_4A1A0_List *)D_002B9120)->f524[i]->f4->f1a4->f4->func_001983A0();
    }
    if (f1C0 != 0)
        f1C0->func_00099D40(-1);
    return 1;
}

