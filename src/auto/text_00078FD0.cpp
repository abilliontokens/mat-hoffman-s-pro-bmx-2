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
    void func_000949B0(float a0, float a1, int a2);
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
    char pad0[4];
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
    S_SelectObj *objs[1];
};

struct S_InGameObj {
    char pad0[0xA40];
    int fA40;
    char padA44[0xA4C - 0xA44];
    float fA4C;
    char padA50[0xA54 - 0xA50];
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
    char pad0[8];
    FPSSave_R8 *p8;
    char padC[0x2A4 - 0xC];
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

void BmxInGameMenu::func_00078FD0(float dt)
{
    int found = 0;
    int id;
    int j, k;
    S_SelectObj *obj;

    if (D_002A8490->p2E0->f4 == 4 || D_002A8490->p2E0->f4 == 9) {
        id = D_002A8490->p2E0->f300[unk104->f120];
        if (D_002A8490->p8->objs[id]->v16() == 0) {
            unk11C = id;
            unk128 = 1;
            unk12C = 1;
        } else {
            unk12C = 0;
        }
    } else if (unk11C == -1) {
        for (j = 0; j < unk104->f90; j++) {
            id = D_002A8490->p2E0->f300[j];
            obj = D_002A8490->p8->objs[id];
            if (unk12C == 0 && obj->v16() == 0) {
                unk11C = id;
                unk128 = 1;
                unk12C = 1;
            }
            if (unk12C == 0)
                continue;
            if (obj->v16() == 0)
                continue;
            for (k = 0; k < unk104->f90; k++) {
                id = D_002A8490->p2E0->f300[k];
                obj = D_002A8490->p8->objs[id];
                if (obj->v16() == 0) {
                    unk11C = id;
                    unk128 = 1;
                    unk12C = 1;
                    found = 1;
                } else if (found == 0) {
                    unk12C = 0;
                }
            }
        }
    } else {
        unk12C = !D_002A8490->p8->objs[unk11C]->v16();
    }

    unkF0 = unkF0 + dt;
    if (unkF4 != 0) {
        if (unkF0 >= D_00278500) {
            if (unk120 != 0) {
                if (D_002A8490->p2E0->f4 == 2 || D_002A8490->p2E0->f4 == 0)
                    goto checks;
                goto save;
checks:
                if (unk104->f90 == 1 &&
                    (unk104->f68->func_0005B960(3, (float)unk104->f64->p4E0->arr1a8[0]->fA58) != 0 ||
                     unk104->f68->func_0005B960(1, unk104->f64->p4E0->arr1a8[0]->fA4C) != 0 ||
                     unk104->f68->func_0005B960(5, (float)unk104->f64->p4E0->arr1a8[0]->fA5C) != 0 ||
                     unk104->f68->func_0005B960(4, (float)unk104->f64->p4E0->arr1a8[0]->fA40) != 0 ||
                     unk104->f68->func_0005B960(2, unk104->f64->p4E0->arr1a8[0]->f1058) != 0 ||
                     unk104->f68->func_0005B960(0, unk104->f64->p4E0->arr1a8[0]->fA54) != 0)) {
                    func_00060220();
                    unk104->f164->fFC = 2;
                    unkF4 = 0;
                    goto done;
                }
save:
                D_002A8490->p2E0->p2FC->func_00094960(0);
                D_002A8490->p2A4->p64->p4C0->v31(0, 1);
                D_002A8490->p2E0->p2FC->v18(0);
                D_002A8490->p2A4->f154 = 1;
                D_002A8490->p2E0->f324 = (D_002A8490->p2E0->f4 == 0);
                D_002A8490->p2F0->func_0001EDC0(4);
                unkF4 = 0;
            } else {
                switch (unk100) {
                case 0:
                    D_002A8490->p2A4->p64->p4C0->v31(0, 1);
                    D_002A8490->p2E0->p2FC->v18(0);
                    func_00060220();
                    unkF4 = 0;
                    break;
                case 1:
                    func_000601B0();
                    unk104->f1A0->func_000717E0();
                    unk104->f1A0->func_00072590(unk11C);
                    D_002A8490->p2E0->p2FC->v18(0);
                    D_002A8490->p2E0->p2FC->func_000949B0(100.0f, 1.0f, 0);
                    unkF4 = 0;
                    break;
                case 2:
                    if (D_002A8490->p2E0->f4 != 10) {
                        for (j = 0; j < unk104->f64->p4E0->f24; j++) {
                            unk104->f64->p4E0->arr1a8[j]->func_001067B0();
                        }
                    }
                    D_002A8490->p2A4->p64->p4C0->v31(0, 1);
                    D_002A8490->p2E0->p2FC->v18(0);
                    func_00060220();
                    if (D_002A8490->p2E0->f4 == 2 || D_002A8490->p2E0->f4 == 0) {
                        if (unk104->f90 == 1 &&
                            (unk104->f68->func_0005B960(3, (float)unk104->f64->p4E0->arr1a8[0]->fA58) != 0 ||
                             unk104->f68->func_0005B960(1, unk104->f64->p4E0->arr1a8[0]->fA4C) != 0 ||
                             unk104->f68->func_0005B960(5, (float)unk104->f64->p4E0->arr1a8[0]->fA5C) != 0 ||
                             unk104->f68->func_0005B960(4, (float)unk104->f64->p4E0->arr1a8[0]->fA40) != 0 ||
                             unk104->f68->func_0005B960(2, unk104->f64->p4E0->arr1a8[0]->f1058) != 0 ||
                             unk104->f68->func_0005B960(0, unk104->f64->p4E0->arr1a8[0]->fA54) != 0)) {
                            unk104->f164->fFC = 1;
                            unk104->f164->func_0006E970(0);
                        }
                    } else {
                        unk104->func_00032720();
                        unk104->v39();
                        unk104->func_00032740();
                    }
                    unkF4 = 0;
                    break;
                case 3:
                    unk120 = 1;
                    unkF4 = 0;
                default:
                    unkF4 = 0;
                    break;
                }
            }
        }
    } else {
        if (unkF8 != 0 && unkF0 >= D_00278500) {
            if (unk120 != 0) {
                unk120 = 0;
                unk110 = 1;
                unkF8 = 0;
            }
            D_002A8490->p2A4->p64->p4C0->v31(0, 1);
            D_002A8490->p2E0->p2FC->v18(0);
            func_00060220();
        }
    }
done:
    func_0005EA10(dt);
}

