/* 5 functions from 0x00076EF0 to 0x000779C0, found by Ghidra. */
#include "common.h"

extern int D_0027850C;
extern int D_00278E6C;
extern float D_00278500;

struct S_00077450_Slot18 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17();
    virtual void v18(int a);
    void func_00094960(int a);
};

struct S_00077450_Slot31 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30();
    virtual void v31(int a, int b);
};

struct S_00077450_Obj120 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38();
    virtual void v39();
    void func_00032720();
    void func_00032740();
    void func_00031610(int a, int b);
};

int func_001361E0(int a, int b, int *c, int d);

struct C_000775D0 {
    char pad0[0x11C];
    int f11C;
    S_00077450_Obj120 *f120;
    int f124;
    char pad128[0x194 - 0x128];
    int f194;
    char pad198[0x1A8 - 0x198];
    int f1A8;
    int f1AC;
    char pad1B0[4];
    int f1B4;
    int f1B8;
    int func_000775D0(int *a, int b);
    int func_00157BF0(int *a, int b);
};

struct S_00077450_Mgr2A4Owner {
    char pad0[0x4C0];
    S_00077450_Slot31 *f4C0;
};

struct S_00077450_Mgr2A4 {
    char pad0[0x64];
    S_00077450_Mgr2A4Owner *f64;
    char pad68[0xEC];
    int f154;
};

struct S_00077450_Mgr2E0 {
    char pad0[0x2FC];
    S_00077450_Slot18 *f2FC;
    char pad300[0x24];
    int f324;
};

struct S_00077450_Mgr2F0 {
    void func_0001EDC0(int a);
};

struct S_00077450_Global {
    char pad0[0x2A4];
    S_00077450_Mgr2A4 *f2A4;
    char pad2A8[0x38];
    S_00077450_Mgr2E0 *f2E0;
    char pad2E4[0xC];
    S_00077450_Mgr2F0 *f2F0;
};
extern S_00077450_Global *D_002A8490;

/* SPFPSResultsScreen / MPFPSResultsScreen, vtable slot 12 */
struct C_00077450 {
    char pad0[0x11C];
    int f11C;
    S_00077450_Obj120 *f120;
    float f124;
    char pad128[0x194 - 0x128];
    int f194;
    char pad198[0x1AC - 0x198];
    int f1AC;
    char pad1B0[4];
    int f1B4;
    int f1B8;
    void func_00075880();
    void func_0005EA10(float dt);
    void func_00077450(float dt);
};

struct C_000777A0_Base {
    void func_00157600(int a);
    void func_00157660();
};

struct S_00077890_Item {
    virtual ~S_00077890_Item();
};
struct S_00077890_Raw {
    void func_001D6410();
};
void func_001E891B(void *p);

/* FPSSaveMenu */
struct C_000777A0 {
    void *vtbl;
    char pad4[0x24 - 4];
    u32 f24[8];
    u32 f44[8];
    void *f64;
    void *f68;    u32 f6C[5];
    u32 f80[5];
    u32 f94;
    u32 f98;
    u32 f9C;
    u32 fA0;
    u32 fA4;
    u32 fA8[2];
    u32 fB0[2];
    char padB8[0xBC - 0xB8];
    u32 fBC;
    u32 fC0;
    u32 fC4;
    u32 fC8;
    u32 fCC;
    u32 fD0;
    u32 fD4;
    u32 fD8;
    u32 fDC;
    u32 fE0;
    u32 fE4;
    u32 fE8;
    u32 fEC;
    u32 fF0;
    u32 fF4;
    C_000777A0 *func_000777A0(int a);
    void func_00077890();
};

void C_00077450::func_00077450(float dt)
{
    f124 += dt;
    if (f194 != 0 && f124 >= D_00278500) {
        if (f1B4 != 0) {
            D_002A8490->f2E0->f2FC->func_00094960(0);
            D_002A8490->f2A4->f64->f4C0->v31(0, 1);
            D_002A8490->f2E0->f2FC->v18(0);
            D_002A8490->f2A4->f154 = 1;
            D_002A8490->f2E0->f324 = 0;
            D_002A8490->f2F0->func_0001EDC0(4);
        } else {
            switch (f11C) {
            case 0:
                func_00075880();
                f120->func_00032720();
                f120->v39();
                f120->func_00032740();
                break;
            case 1:
                f1B4 = 1;
                break;
            }
        }
        f194 = 0;
        f124 = 0;
    }
    if (f1B8 != 0 && f124 >= D_00278500) {
        f1B4 = 0;
        f1B8 = 0;
        f1AC = 1;
    }
    func_0005EA10(dt);
}

C_000777A0 *C_000777A0::func_000777A0(int a)
{
    ((C_000777A0_Base *)this)->func_00157600(a);
    vtbl = (void *)&D_0027850C;
    for (int i = 0; i < 8; i++) {
        f24[i] = 0;
        f44[i] = 0;
    }
    vtbl = (void *)&D_00278E6C;
    fF4 = 0;
    fA4 = 0;
    fA0 = 0;
    f9C = 0;
    fC8 = 0;
    f68 = f64 = 0;
    for (int i = 0; i < 2; i++) {
        fB0[i] = 0;
        fA8[i] = 0;
    }
    for (int i = 0; i < 5; i++) {
        f6C[i] = 0;
        f80[i] = 0;
    }
    f94 = 0;
    f98 = 0;
    fC0 = 0;
    fBC = 0;
    fC4 = 0;
    fCC = 0;
    fD4 = 0;
    fD8 = 0;
    fDC = 0;
    fE0 = 0;
    fE4 = 0;
    fE8 = 0;
    fEC = 0;
    fF0 = 0;
    fD0 = 1;
    return this;
}

void C_000777A0::func_00077890()
{
    int i;
    S_00077890_Raw *p;
    vtbl = &D_00278E6C;
    for (i = 0; i < 2; i++) {
        if ((&f64)[i]) {
            delete (S_00077890_Item *)(&f64)[i];
            (&f64)[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (fB0[i]) {
            delete (S_00077890_Item *)fB0[i];
            fB0[i] = 0;
        }
        if (fA8[i]) {
            delete (S_00077890_Item *)fA8[i];
            fA8[i] = 0;
        }
    }
    for (i = 0; i < 5; i++) {
        if (f6C[i]) {
            delete (S_00077890_Item *)f6C[i];
            f6C[i] = 0;
        }
        if (f80[i]) {
            delete (S_00077890_Item *)f80[i];
            f80[i] = 0;
        }
    }
        if (f94) {
            delete (S_00077890_Item *)f94;
            f94 = 0;
        }
    p = (S_00077890_Raw *)f98;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
        f98 = 0;
    }
    p = (S_00077890_Raw *)fC0;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
        fC0 = 0;
    }
    p = (S_00077890_Raw *)fBC;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
        fBC = 0;
    }
    p = (S_00077890_Raw *)fC4;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
        fC4 = 0;
    }
    ((C_000777A0_Base *)this)->func_00157660();
}

