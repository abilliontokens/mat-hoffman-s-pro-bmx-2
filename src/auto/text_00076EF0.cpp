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

struct Lbl_76EF0 {
    char pad0[0x34];
    u32 f34;
    char pad38[0xC];
    u32 f44, f48;
    char pad4C[2];
    u8 f4E;
    void func_0005E840(char *);
    void func_001D6600();
};
struct Text_76EF0 {
    void func_001B1980();
    void func_001B2270(unsigned int);
    void func_001B19C0(int, int, int);
    void func_001B1860(float, float, int, float, float, float, float, int, float, float, float, float, float);
};
struct Mode_76EF0 { char pad0[0x90]; int f90; };
struct Player_76EF0 { char pad0[0x6CC]; int f6CC, f6D0, f6D4, f6D8; };
struct Root_76EF0 { char pad0[0x4E4]; Player_76EF0 *f4E4[17]; };
extern Root_76EF0 *D_002B9120;
extern char D_00278DE4[], D_00277038[], D_00278DD0[];
extern float D_00276DD4, D_00275994;
extern u32 D_0028F5E0;
int func_001ADCC0(char *, int, const char *, ...);
int func_001AC330(char *, const char *, ...);

struct Strs_76EF0 { char pad0[0x850]; char *f850; char pad854[0xec0 - 0x854]; char *fEC0; char padEC4[0xfd8 - 0xec4]; char *fFD8; };
struct Mgr2E8_76EF0 { char pad0[4]; Strs_76EF0 *p4; };
struct Mgr2A4_76EF0 { char pad0[0x2c4]; float f2C4; };
#define G_76EF0_2A4 (*(Mgr2A4_76EF0 **)((char *)D_002A8490 + 0x2A4))
#define G_76EF0_2E8 (*(Mgr2E8_76EF0 **)((char *)D_002A8490 + 0x2E8))

struct C_00076EF0 {
    char pad0[0x64];
    Lbl_76EF0 *unk64[3];
    Lbl_76EF0 *unk70[3];
    Lbl_76EF0 *unk7C[3];
    Lbl_76EF0 *unk88[3];
    Text_76EF0 *unk94[3];
    float fA0[3];
    char padAC[0x100 - 0xAC];
    Lbl_76EF0 *unk100, *unk104, *unk108, *unk10C, *unk110, *unk114, *unk118;
    int unk11C;
    Mode_76EF0 *unk120;
    char pad124[0x12C - 0x124];
    int unk12C[8];
    int unk14C[8];
    int unk16C[8];
    int unk18C, unk190;
    char pad194[0x1A8 - 0x194];
    int unk1A8, unk1AC;
    char pad1B0[4];
    int unk1B4;
    void func_00076EF0();
};
static __forceinline int Percent_76EF0(float n, float total)
{
    return (int)(n * D_00275994 / total);
}
#define SETUP_LABEL_76EF0(slot) { \
    Lbl_76EF0 *p = (slot); \
    u32 color = p->f48; \
    if (color != 0xffcccccc) { p->f4E |= 8; p->f48 = (color & 0xffcccccc) | 0xcccccc; } \
    p = (slot); \
    if (p->f44 != D_0028F5E0) { p->f44 = D_0028F5E0; p->f4E |= 6; } \
    p = (slot); \
    if (p->f34 != 0x3f800000) { p->f34 = 0x3f800000; p->f4E |= 6; } }

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

void C_00076EF0::func_00076EF0()
{
    char buf[64];
    char num[8];
    int i;
    int n;
    int t;
    int mins;
    int secs;

    if (unk1B4 != 0) {
        Text_76EF0 **p;
        unk100->func_0005E840(G_76EF0_2E8->p4->fEC0);
        p = &unk94[0];
        i = 3;
        do {
            (*p)->func_001B1980();
            p++;
            i--;
        } while (i != 0);
        unk118->func_001D6600();
        unk100->func_001D6600();
        return;
    }
    unk100->func_0005E840(G_76EF0_2E8->p4->fFD8);
    unk104->func_001D6600();
    unk108->func_001D6600();
    unk10C->func_001D6600();
    unk110->func_001D6600();
    t = (int)G_76EF0_2A4->f2C4;
    mins = t / 60;
    secs = t - mins * 60;
    unk18C = mins;
    unk190 = secs;
    func_001ADCC0(buf, 0x104, D_00278DE4, mins, secs);
    unk114->func_0005E840(buf);
    unk114->func_001D6600();
    n = 3 - (unk120->f90 - 1 != 0);
    if (unk1AC != 0) {
        for (i = 0; i < n; i++) {
            unk94[i]->func_001B1980();
            if (i == unk11C) {
                unk94[i]->func_001B2270(0xffbfa35a);
                unk94[i]->func_001B19C0(320, (int)(fA0[i] - D_00276DD4), 0);
                unk94[i]->func_001B1860(0, -1, 255, 1, 0, 0, 0, 255, 1.3f, 0, 0, 0.2f, 0);
            } else if (i == unk1A8) {
                unk94[i]->func_001B2270(0xffcccccc);
                unk94[i]->func_001B19C0(320, (int)fA0[i], 0);
                unk94[i]->func_001B1860(0, -1, 255, 1.3f, 0, 0, 0, 255, 1, 0, 0, 0.2f, 0);
            } else {
                unk94[i]->func_001B2270(0xffcccccc);
                unk94[i]->func_001B19C0(320, (int)fA0[i], 0);
                unk94[i]->func_001B1860(0, -1, 255, 1, 0, 0, -1, 255, 1, 0, 0, 0, 0);
            }
        }
        unk1AC = 0;
    }
    if (unk120->f90 > 1) {
        for (i = 0; i < unk120->f90; i++) {
            func_001ADCC0(num, 0x104, D_00277038, i + 1);
            func_001AC330(buf, G_76EF0_2E8->p4->f850, num);
            unk64[i]->func_0005E840(buf);
            unk12C[i] = D_002B9120->f4E4[1]->f6CC;
            unk14C[i] = D_002B9120->f4E4[1]->f6D0;
            if (D_002B9120->f4E4[i]->f6D4 == 0) {
                unk16C[i] = 0;
            } else {
                unk16C[i] = (int)((float)D_002B9120->f4E4[1]->f6D8 * D_00275994 / (float)D_002B9120->f4E4[i]->f6D4);
            }
            SETUP_LABEL_76EF0(unk64[i]);
            unk64[i]->func_001D6600();
            func_001ADCC0(buf, 0x104, D_00277038, unk12C[i]);
            {
                Lbl_76EF0 *w = unk70[i];
                w->func_0005E840(buf);
            }
            SETUP_LABEL_76EF0(unk70[i]);
            unk70[i]->func_001D6600();
            func_001ADCC0(buf, 0x104, D_00277038, unk14C[i]);
            {
                Lbl_76EF0 *w = unk7C[i];
                w->func_0005E840(buf);
            }
            SETUP_LABEL_76EF0(unk7C[i]);
            unk7C[i]->func_001D6600();
            func_001ADCC0(buf, 0x104, D_00278DD0, unk16C[i]);
            {
                Lbl_76EF0 *w = unk88[i];
                w->func_0005E840(buf);
            }
            SETUP_LABEL_76EF0(unk88[i]);
            unk88[i]->func_001D6600();
        }
    }
    unk100->func_001D6600();
}

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

