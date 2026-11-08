/* 2 functions from 0x00079800 to 0x0007A0F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_SelectObj {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int v16();
};
struct FPSSave_R8 { char pad0[0x14]; S_SelectObj *objs[1]; };
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
struct FPSSave_Opt { void func_0005C390(); int func_0005C310(int a0, int a1); };
struct S_InGameObj {
    char pad0[0xA40]; int fA40; char padA44[0xA4C - 0xA44]; float fA4C;
    char padA50[0xA54 - 0xA50]; float fA54; int fA58; int fA5C;
    char padA60[0x1058 - 0xA60]; float f1058; void func_001067B0(void);
};
struct FPSSave_P4E0 { char pad0[0x24]; int f24; char pad28[0x1A8 - 0x28]; S_InGameObj *arr1a8[1]; };
struct FPSSave_R64 {
    char pad0[0x4C0]; FPSSave_Disp *p4C0; char pad4C4[0x4E0 - 0x4C4]; FPSSave_P4E0 *p4E0;
    char pad4E4[0x594 - 0x4E4]; int f594;
};
struct C_0005B960 { int func_0005B960(int a0, float a1); };
struct S_F164 { char pad0[0xFC]; int fFC; void func_0006E970(int a0); };
struct S_F16C { char pad0[0x64]; int f64; void func_00064A40(); };
struct S_F194 { void func_0006DF20(int a0); };
struct S_F1A0 { void func_000717E0(void); };
struct S_F1C0 { int func_00097FD0(); int func_000976A0(); void func_000999B0(); };
struct S_F1C4 { void func_001041C0(); };
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
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    char pad4[0x64 - 4]; FPSSave_R64 *f64; C_0005B960 *f68;
    char pad6C[0x90 - 0x6C]; int f90; char pad94[0x118 - 0x94]; int f118;
    char pad11C[0x164 - 0x11C]; S_F164 *f164; char pad168[0x16C - 0x168]; S_F16C *f16C;
    char pad170[0x194 - 0x170]; S_F194 *f194; char pad198[0x1A0 - 0x198]; S_F1A0 *f1A0;
    char pad1A4[0x1C0 - 0x1A4]; S_F1C0 *f1C0; S_F1C4 *f1C4;
    void func_00032720(void); void func_00032740(void); void func_00032530(void);
};
struct FPSSave_R2A4 { char pad0[0x64]; FPSSave_R64 *p64; char pad68[0x154 - 0x68]; int f154; };
struct FPSSave_R2E0 {
    char pad0[4]; int f4; char pad8[0x48 - 8]; int f48; char pad4C[0x190 - 0x4C]; int f190;
    char pad194[0x2C0 - 0x194]; FPSSave_Opt *p2C0; char pad2C4[0x2FC - 0x2C4]; FPSSave_Mem *p2FC;
    int f300[9]; int f324;
};
struct FPSSave_Snd { void func_0001EDC0(int id); };
struct FPSSave_Root {
    char pad0[8]; FPSSave_R8 *p8; char padC[0x124 - 0xC]; int f124; char pad128[0x2A4 - 0x128];
    FPSSave_R2A4 *p2A4; char pad2A8[0x2E0 - 0x2A8]; FPSSave_R2E0 *p2E0;
    char pad2E4[0x2F0 - 0x2E4]; FPSSave_Snd *p2F0;
};
extern FPSSave_Root *D_002A8490;
extern float D_00278500;
struct BmxSinglePlayerInGameMenu {
    virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3();
    virtual void vf4(); virtual void vf5(); virtual void vf6(); virtual void vf7();
    virtual void vf8(); virtual void vf9(); virtual void vf10(); virtual void vf11();
    virtual void vf12(); virtual void vf13(); virtual void vf14(); virtual void vf15();
    virtual void vf16(); virtual void vf17(); virtual void vf18(); virtual void vf19();
    virtual void vf20(); virtual void vf21(); virtual void vf22(); virtual void vf23();
    virtual void vf24(); virtual void vf25(); virtual void vf26(); virtual void vf27();
    virtual void vf28(); virtual void vf29(); virtual void vf30(); virtual void vf31();
    virtual void vf32();
    char pad4[0xF0 - 4]; float unkF0; int unkF4; int unkF8; int unkFC; int unk100;
    BmxInGameMenuSub *unk104; char pad108[0x11C - 0x108]; int unk11C;
    char pad120[0x128 - 0x120]; int unk128; int unk12C; int unk130;
    char pad134[0x184 - 0x134]; int unk184;
    void func_00060220(void); int func_0005EA10(float dt);
    int func_00079800(float dt);
};
struct C_0007A0D0 {
    undefined4 func_0007A0D0(byte param_1);
};


int BmxSinglePlayerInGameMenu::func_00079800(float dt)
{
    int i;
    int id;
    S_SelectObj *obj;
    for (i = 0; i < unk104->f90; i++) {
        id = D_002A8490->p2E0->f300[i];
        obj = D_002A8490->p8->objs[id];
        if (unk12C == 0) {
            if (obj->v16() == 0) {
                unk11C = id;
                unk128 = 1;
                unk12C = 1;
            }
        }
        if (unk12C != 0) {
            if (obj->v16() != 0) {
                unk12C = 0;
            }
        }
    }
    if (unk104->f1C0->func_00097FD0() != 0 && unk104->f1C0->func_000976A0() == 2 && D_002A8490->p2E0->f48 == 7) {
        D_002A8490->p2E0->p2C0->func_0005C390();
        unk184 = 1;
    } else {
        unk184 = 0;
    }
    if (unkF4 != 0 || unkF8 != 0) {
        unkF0 += dt;
        if (unkF0 >= D_00278500 && unkF4 != 0) {
            switch (unk100) {
            case 0:
                unk104->f64->p4C0->v31(0, 1);
                if (unk104->f64->f594 == 0 || unk104->f118 == 0) {
                    D_002A8490->p2E0->p2FC->v18(0);
                    func_00060220();
                } else {
                    D_002A8490->p2E0->p2FC->v18(0);
                    func_00060220();
                }
                break;
            case 2:
                unkFC = 0;
                unk130 = 1;
                vf4();
                unk104->f194->func_0006DF20(D_002A8490->p2E0->f300[0]);
                return 1;
            case 3:
                unkFC = 0;
                unk130 = 1;
                vf4();
                unk104->f1A0->func_000717E0();
                D_002A8490->p2E0->p2FC->v18(0);
                D_002A8490->p2E0->p2FC->func_000949B0(100.0f, 1.0f, 0);
                break;
            case 1:
                if (unk184 != 0) {
                    int v;
                    D_002A8490->p2E0->p2FC->func_00094960(0);
                    D_002A8490->p2A4->p64->p4C0->v31(0, 1);
                    D_002A8490->p2E0->p2FC->v18(0);
                    D_002A8490->p2A4->f154 = 1;
                    D_002A8490->p2F0->func_0001EDC0(11);
                    switch (D_002A8490->p2E0->f190) {
                    case 0: v = 0; break;
                    case 2: v = 1; break;
                    case 4: v = 2; break;
                    case 5: v = 3; break;
                    case 7: v = 4; break;
                    case 9: v = 5; break;
                    case 10: v = 6; break;
                    case 11: v = 7; break;
                    case 13: v = 8; break;
                    case 14: v = 9; break;
                    default: v = *(int *)&dt; break;
                    }
                    D_002A8490->p2E0->p2C0->func_0005C310(v, 8);
                    unk184 = 0;
                    return 1;
                }
                for (i = 0; i < unk104->f64->p4E0->f24; i++) {
                    unk104->f64->p4E0->arr1a8[i]->func_001067B0();
                }
                unk104->f64->p4C0->v31(0, 1);
                if (unk104->f64->f594 == 0 || unk104->f118 == 0) {
                } else {
                    D_002A8490->p2E0->p2FC->v18(0);
                }
                unk104->func_00032720();
                unk104->v39();
                unk104->func_00032740();
                unk104->f1C0->func_000999B0();
                func_00060220();
                if (unk104->f90 == 1) {
                    if (unk104->f68->func_0005B960(3, (float)unk104->f64->p4E0->arr1a8[0]->fA58) != 0) goto fail1;
                    if (unk104->f68->func_0005B960(1, unk104->f64->p4E0->arr1a8[0]->fA4C) != 0) goto fail1;
                    if (unk104->f68->func_0005B960(5, (float)unk104->f64->p4E0->arr1a8[0]->fA5C) != 0) goto fail1;
                    if (unk104->f68->func_0005B960(4, (float)unk104->f64->p4E0->arr1a8[0]->fA40) != 0) goto fail1;
                    if (unk104->f68->func_0005B960(2, unk104->f64->p4E0->arr1a8[0]->f1058) != 0) goto fail1;
                    if (unk104->f68->func_0005B960(0, unk104->f64->p4E0->arr1a8[0]->fA54) != 0) goto fail1;
                }
                unk104->f16C->f64 = 0;
                D_002A8490->f124 = 0;
                unk104->f16C->func_00064A40();
                unk104->v39();
                return 1;
            fail1:
                unk104->f164->fFC = 1;
                unk104->f164->func_0006E970(0);
                return 1;
            case 4:
                func_00060220();
                unk104->f1C4->func_001041C0();
                unk104->func_00032530();
                unk104->f64->p4C0->v31(0, 1);
                if (unk104->f64->f594 == 0 || unk104->f118 == 0) {
                } else {
                    D_002A8490->p2E0->p2FC->v18(0);
                }
                if (unk104->f90 == 1) {
                    if (unk104->f68->func_0005B960(3, (float)unk104->f64->p4E0->arr1a8[0]->fA58) != 0) goto fail4;
                    if (unk104->f68->func_0005B960(1, unk104->f64->p4E0->arr1a8[0]->fA4C) != 0) goto fail4;
                    if (unk104->f68->func_0005B960(5, (float)unk104->f64->p4E0->arr1a8[0]->fA5C) != 0) goto fail4;
                    if (unk104->f68->func_0005B960(4, (float)unk104->f64->p4E0->arr1a8[0]->fA40) != 0) goto fail4;
                    if (unk104->f68->func_0005B960(2, unk104->f64->p4E0->arr1a8[0]->f1058) != 0) goto fail4;
                    if (unk104->f68->func_0005B960(0, unk104->f64->p4E0->arr1a8[0]->fA54) != 0) goto fail4;
                }
                unk104->f16C->f64 = 1;
                D_002A8490->f124 = 0;
                unk104->f16C->func_00064A40();
                unk104->v39();
                break;
            fail4:
                unk104->f164->fFC = 0;
                unk104->f164->func_0006E970(0);
                break;
            }
            unkF4 = 0;
            unkF0 = 0;
        }
        if (unkF8 != 0 && unkF0 >= D_00278500) {
            unk104->f64->p4C0->v31(0, 1);
            if (unk104->f64->f594 != 0) {
                FPSSave_Mem *menu;
                if (unk104->f118 != 0)
                    menu = D_002A8490->p2E0->p2FC;
                else
                    menu = D_002A8490->p2E0->p2FC;
                menu->v18(0);
            }
            func_00060220();
        }
    }
    return func_0005EA10(dt);
}

undefined4 C_0007A0D0::func_0007A0D0(byte param_1)
{
  int func_00061590(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00061590();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
