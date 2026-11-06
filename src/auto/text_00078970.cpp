/* 6 functions from 0x00078970 to 0x00079800, found by Ghidra. */
#include "common.h"

extern int D_00278EDC;
extern int D_0027857C;

struct S_00079790_Obj {
    virtual void destroying(int flag);
};

struct C_00078D60_Sound {
    void func_00031610(int a0, int a1);
};

struct C_00078D60 {
    char pad0[0x9C];
    float f9C;
    int fA0;
    int fA4;
    char padA8[0xD8 - 0xA8];
    C_00078D60_Sound *fD8;
    char padDC[0xE8 - 0xDC];
    int fE8;
    int fEC;
    int func_00157BF0(int *a0, int a1);
    int func_00078D60(int *param_1, int param_2);
};

struct C_0005ECA0 {
    void func_0005ECA0(void *param);
};

struct C_00079790 {
    void *vtbl;
    char pad4[0x158];
    S_00079790_Obj *f15C[10];
    int f184;
    C_00079790 *func_00079790(void *param);
    void func_000797C0(void);
    void func_00078E60(void);
};

void func_001E891B(void *p);

struct FPSSave_Card {
    int func_00092B40(int slot);
    int func_00092AC0();
    int func_00093300(float f);
};

struct FPSSave_Opt {
    int *func_0005C020(int i);
};

struct FPSSave_Mem {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17();
    virtual void v18(int a0);
    void func_00094960(int a0);
};

struct FPSSave_Disp {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30();
    virtual void v31(int a0, int a1);
};

struct FPSSave_P4E0;

struct FPSSave_R64 {
    char pad0[0x4C0];
    FPSSave_Disp *p4C0;
    char pad4C4[0x4E0 - 0x4C4];
    FPSSave_P4E0 *p4E0;
};

struct FPSSave_R2A4 {
    char pad0[0x64];
    FPSSave_R64 *p64;
    char pad68[0x154 - 0x68];
    int f154;
};

struct FPSSave_R2E0 {
    int f4;
    char pad8[0x2C0 - 8];
    FPSSave_Opt *p2C0;
    char pad2C4[0x2D8 - 0x2C4];
    int f2D8;
    char pad2DC[0x2FC - 0x2DC];
    FPSSave_Mem *p2FC;
    int f300[9];
    int f324;
};

struct FPSSave_Snd {
    void func_0001EDC0(int id);
};

struct S_SelectObj {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int v16();
};

struct FPSSave_R8 {
    char pad0[0x14];
    S_SelectObj **objs;
};

struct S_InGameObj {
    char pad0[0xA40];
    int fA40;
    float fA4C;
    float fA54;
    int fA58;
    int fA5C;
    char padA60[0x1058 - 0xA60];
    float f1058;
    void func_001067B0(void);
};

struct FPSSave_P4E0 {
    char pad0[0x24];
    int f24;
    char pad28[0x1A8 - 0x28];
    S_InGameObj *arr1a8[1];
};

struct C_0005B960 {
    int func_0005B960(int a0, float a1);
};

struct S_F164 {
    char pad0[0xFC];
    int fFC;
    void func_0006E970(int a0);
};

struct S_F1A0 {
    void func_000717E0(void);
    void func_00072590(int a0);
};

struct BmxInGameMenuSub {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38();
    virtual void v39();
    char pad4[0x64 - 4];
    FPSSave_R64 *f64;
    C_0005B960 *f68;
    char pad6C[0x90 - 0x6C];
    int f90;
    char pad94[0x120 - 0x94];
    int f120;
    char pad124[0x164 - 0x124];
    S_F164 *f164;
    char pad168[0x1A0 - 0x168];
    S_F1A0 *f1A0;
    void func_00032720(void);
    void func_00032740(void);
};

struct BmxInGameMenu {
    char pad0[0xF0];
    float unkF0;
    int unkF4;
    int unkF8;
    char padFC[4];
    int unk100;
    BmxInGameMenuSub *unk104;
    char pad108[0x110 - 0x108];
    int unk110;
    char pad114[0x11C - 0x114];
    int unk11C;
    int unk120;
    char pad124[4];
    int unk128;
    int unk12C;
    void func_000601B0(void);
    void func_00060220(void);
    void func_0005EA10(float dt);
    void func_00078FD0(float dt);
};

struct FPSSave_Root {
    char pad0[0x2A4];
    FPSSave_R2A4 *p2A4;
    char pad2A8[0x2E0 - 0x2A8];
    FPSSave_R2E0 *p2E0;
    char pad2E4[0x2F0 - 0x2E4];
    FPSSave_Snd *p2F0;
};

extern FPSSave_Root *D_002A8490;
extern float D_00276220;
extern float D_00278500;

void __stdcall func_001DCAFF(int a0, int *a1);

/* FPSSaveMenu */
struct C_00078970 {
    char pad0[0x9C];
    float f9C;
    int fA0;
    int fA4;
    char padA8[0xC8 - 0xA8];
    FPSSave_Card *fC8;
    int fCC;
    int fD0;
    int fD4;
    char padD8[4];
    int fDC;
    float fE0;
    int fE4;
    int fE8;
    int fEC;
    int fF0;
    void func_00078970(float dt);
    void func_00157A00(float dt);
};

struct RawBuf_Menu {
    void func_001D6410();
};

struct BmxMenuBase {
    void *vtbl;
    char pad4[0x60];
    S_00079790_Obj *f64[8];
    char pad84[0x10];
    S_00079790_Obj *f94[2];
    char pad9C[0x10];
    S_00079790_Obj *fAC[5];
    S_00079790_Obj *fC0[5];
    S_00079790_Obj *fD4[2];
    S_00079790_Obj *fDC[2];
    RawBuf_Menu *fE4[2];
    RawBuf_Menu *fEC;
    char padF0[0x1C];
    S_00079790_Obj *f10C;
    char pad110[0x14];
    RawBuf_Menu *f124;
    void func_00157660();
};

int C_00078D60::func_00078D60(int *param_1, int param_2) {
    int func_001361E0(int, int, int *, int);
    if (fA0 == 0 && fA4 == 0) {
        if (func_001361E0(4, 2, param_1, -2147483648) == 0 &&
            func_001361E0(23, 2, param_1, -2147483648) == 0) {
            if (func_001361E0(5, 2, param_1, -2147483648) == 0 &&
                func_001361E0(24, 2, param_1, -2147483648) == 0) {
                return func_00157BF0(param_1, param_2);
            }
            if (fE8 != 0 || fEC != 0) {
                return 0;
            }
            fD8->func_00031610(4, 1);
            fA4 = 1;
            f9C = 0.0f;
            return 0;
        }
        fD8->func_00031610(4, 1);
        fA0 = 1;
        f9C = 0.0f;
    }
    return 0;
}

void C_00079790::func_00078E60(void)
{
    BmxMenuBase *m = (BmxMenuBase *)this;
    int i;
    m->vtbl = (void *)&D_0027857C;
    for (i = 0; i < 2; i++) {
        RawBuf_Menu *p = m->fE4[i];
        if (p) {
            p->func_001D6410();
            func_001E891B(p);
            m->fE4[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (m->f94[i]) {
            m->f94[i]->destroying(1);
            m->f94[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (m->fD4[i]) {
            m->fD4[i]->destroying(1);
            m->fD4[i] = 0;
        }
        if (m->fDC[i]) {
            m->fDC[i]->destroying(1);
            m->fDC[i] = 0;
        }
    }
    if (m->f10C) {
        m->f10C->destroying(1);
        m->f10C = 0;
    }
    for (i = 0; i < 5; i++) {
        if (m->fAC[i]) {
            m->fAC[i]->destroying(1);
            m->fAC[i] = 0;
        }
        if (m->fC0[i]) {
            m->fC0[i]->destroying(1);
            m->fC0[i] = 0;
        }
    }
    for (i = 0; i < 8; i++) {
        if (m->f64[i]) {
            m->f64[i]->destroying(1);
            m->f64[i] = 0;
        }
    }
    RawBuf_Menu *p = m->fEC;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
        m->fEC = 0;
    }
    p = m->f124;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
        m->f124 = 0;
    }
    m->func_00157660();
}

C_00079790 *C_00079790::func_00079790(void *param)
{
    int i;
    ((C_0005ECA0 *)this)->func_0005ECA0(param);
    vtbl = (void *)&D_00278EDC;
    for (i = 0; i < 10; i++) {
        f15C[i] = 0;
    }
    f184 = 0;
    return this;
}

void C_00079790::func_000797C0(void)
{
    int i;
    vtbl = (void *)&D_00278EDC;
    for (i = 0; i < 10; i++) {
        if (f15C[i] != 0) {
            f15C[i]->destroying(1);
            f15C[i] = 0;
        }
    }
    func_00078E60();
}

