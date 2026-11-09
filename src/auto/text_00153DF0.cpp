/* 2 functions from 0x00153DF0 to 0x00154C10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
struct C_00154BF0 {
    undefined4 func_00154BF0(byte param_1);
};

struct Vec153DF0 { float x,y,z,w; };
struct V153DF0 { virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C(); virtual void v10(); virtual void v14(int); virtual void v18(); virtual void v1C(); virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C(); virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C(); virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C(); virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C(); virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C(); virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7C(); virtual void v80(); };
struct C153DF0_Eff {
    char pad0[0x150];
    V153DF0 *f150;
    char pad154[0x38C];
    void func_001983A0();
    void func_0019AC50();
    void func_00199600(float *v);
    void func_00199600(Vec153DF0 v);
    void func_0011CA60(Vec153DF0 v);
    void func_00198390();
    void func_00198F50(float *a, float *b, int c, int d, int e);
};
struct C153DF0_Game { char pad0[0x124]; int f124; char pad128[0x1B8]; int *f2E0; };
struct C153DF0_17A40 { void func_00017A40(void *a); void func_0001A060(void *a, int b); char pad4[0x4D0]; int f4D4; char pad4D8[0x298]; int f770; char pad774[4]; int f778; };
struct C153DF0_B9120 { char pad0[0x4E4]; int arr[0x11]; C153DF0_17A40 *f528; };
struct C153DF0_2C { char pad0[0x1A4]; int *f1A4_2; };
struct C153DF0_Self {
    char pad0[0x24];
    int f24;
    char pad28[4];
    C153DF0_2C *f2C;
    char pad30[0x44];
    int f74;
    int f78;
    int f7C;
    char pad80[4];
    int f84[4];
    int f94[4];
    char padA4[0x1C];
    int fC0[1];
    char padC4[4];
    float fC8[4];

    int fD8;
    int fDC;
    char padE0[0x150 - 0xE0];
    C153DF0_Eff *f150;
    float f154[4];
    float f164[4];
    float f174[4];
    float f184[4];

    int f194;
    int f198;
    char pad19C[4];
    float f1A0;
    C153DF0_Eff *f1A4;
    C153DF0_Eff *f1A8;
    C153DF0_Eff *f1AC;
    char pad1B0[0x3F4];
    int f5A4;
    void func_00153DF0(float dt);
};
extern C153DF0_Game *D_002A8490;
extern C153DF0_B9120 *D_002B9120;
struct X153DF0_78 { void func_0014AC30(void *a, int b); void func_00133ED0(); void func_00133F10(int a); void func_00133EF0(void *a); };
struct X153DF0_F { void *func_00197F70(void *a); Vec153DF0 *func_00197F70(Vec153DF0 *out, void *a); };
struct X153DF0_50900 { void func_00150900(void *a, void *b); };
void func_0011CA60(float *v);
struct X153DF0_9B00 { void func_00199B00(void *a, int b); };
extern "C" double sqrt(double x);
extern float D_002756DC, D_00286D4C, D_00286D48, D_00275AEC;
void __cdecl func_00150890(void *, void *);
extern int D_002A789C, D_002A78A0, D_002A78A4, D_002A78A8;
extern float D_0027653C, D_00275544;
extern float D_00275800, D_002756C8, D_00275AEC;
extern "C" int __cdecl func_001E8858(float x);
struct X153DF0_CE80 { void func_0001CE80(int a, void *b, int c, int d, int e); };
struct X153DF0_D30 { void func_00153D30(int amt); };


void C153DF0_Self::func_00153DF0(float dt)
{
    float v18[4];
    float v4c[4];
    float vec2[2][4];
    float va[4];
    float vb[4];
    int i;
    Vec153DF0 outa, outb;

    if (D_002A8490->f124 != 0)
        return;
    if (D_002B9120->f528 != 0)
        D_002B9120->f528->func_00017A40((void *)v4c);
    v18[0] = 0; v18[1] = 0; v18[2] = 0; v18[3] = 1;
    v4c[0] = 0; v4c[1] = 0; v4c[2] = 0; v4c[3] = 1;
    for (int slot = 0; slot < 11; ++slot) {
    C153DF0_Self *o = (C153DF0_Self *)((char *)this + slot * 0x60);
    if (o->f194 == 0)
        continue;
    for (i = 0; i < 2; i++) {
        vec2[i][0] = 0; vec2[i][1] = 0; vec2[i][2] = 0; vec2[i][3] = 1;
    }
    o->f1A0 += dt;
    if (o->f198 != 0) {
    if (o->f1A0 > D_002756DC) {
        o->f198 = 0;
        ((X153DF0_50900 *)this)->func_00150900((void *)v18, (void *)v4c);
        ((V153DF0 *)o->f150)->v18();
        *(int *)((char *)this + 0xC4) = 0;
        f84[0] = D_002A789C;
        f84[1] = D_002A78A0;
        f84[2] = D_002A78A4;
        f84[3] = D_002A78A8;
        f94[0] = D_002A789C;
        f94[1] = D_002A78A0;
        f94[2] = D_002A78A4;
        f94[3] = D_002A78A8;
        va[0] = 1.5f; va[1] = -2.0f; va[2] = 0.0f; va[3] = 1.0f;
        *(Vec153DF0 *)va = *((X153DF0_F *)f2C->f1A4_2[1])->func_00197F70(&outa, (void *)va);
        vb[0] = 1.5f; vb[1] = -2.0f; vb[2] = 6.0f; vb[3] = 1.0f;
        *(Vec153DF0 *)vb = *((X153DF0_F *)f2C->f1A4_2[1])->func_00197F70(&outb, (void *)vb);
        fC8[0] = va[0]; fC8[1] = va[1]; fC8[2] = va[2]; fC8[3] = va[3];
        ((X153DF0_78 *)f78)->func_0014AC30((void *)vec2, 0);
        ((X153DF0_78 *)f78)->func_00133ED0();
        ((X153DF0_78 *)f78)->func_00133F10(0);
        if (*(int *)((char *)this + 0xC4) != 0) {
            o->f154[0] = va[0]; o->f154[1] = va[1]; o->f154[2] = va[2]; o->f154[3] = va[3];
        } else {
            o->f154[0] = vb[0]; o->f154[1] = vb[1]; o->f154[2] = vb[2]; o->f154[3] = vb[3];
        }
        ((V153DF0 *)o->f150)->v18();
        o->f150->func_00199600(*(Vec153DF0 *)o->f154);
        o->f150->func_00198F50(&v18[0], &v4c[0], 0, 1, 0);
        o->f150->func_0019AC50();
        o->f164[0] = v18[0]; o->f164[1] = v18[1]; o->f164[2] = v18[2]; o->f164[3] = v18[3];
        o->f174[0] = v4c[0]; o->f174[1] = v4c[1]; o->f174[2] = v4c[2]; o->f174[3] = v4c[3];
        for (i=0; i<3; ++i) o->f184[i] = v18[i] * 250.0f;
        o->f184[3] = 1.0f;
        ((V153DF0 *)o->f1AC)->v18();
        ((V153DF0 *)o->f1AC)->v78();
        o->f1AC->func_0011CA60(*(Vec153DF0 *)o->f154);
        o->f1AC->func_0011CA60(*(Vec153DF0 *)o->f154);
        ((V153DF0 *)o->f1A8)->v18();
        ((V153DF0 *)o->f1A8)->v78();
        o->f1A8->func_0011CA60(*(Vec153DF0 *)o->f154);
        o->f1A8->func_0011CA60(*(Vec153DF0 *)o->f154);
        o->f150->func_001983A0();
    }
    continue;
    }
    o->f154[0] += dt * o->f184[0];
    o->f154[1] += dt * o->f184[1];
    o->f154[2] += dt * o->f184[2];
    fD8 = 0;
    fDC = 0;
    fD8 = 0;
    f84[0] = 0; f84[1] = 0; f84[2] = 0; f84[3] = 0x3f800000;
    f94[0] = 0; f94[1] = 0; f94[2] = 0; f94[3] = 0x3f800000;
    ((X153DF0_78 *)f7C)->func_00133EF0((char *)o->f150 + 0xf0);
    ((X153DF0_78 *)f7C)->func_00133F10(0);
    {
        int n = *(int *)D_002A8490->f2E0;
        if (n > 1) {
            int j;
            for (j = 0; j < n; j++) {
                if (j == f24)
                    continue;
                {
                    char *obj = *(char **)((char *)D_002B9120 + 0x4E4 + j * 4);
                    float pos[4];
                    if (*(int *)(obj + 0x2C) == 0) {
                        pos[0] = *(float *)&D_002A789C;
                        pos[1] = *(float *)&D_002A78A0;
                        pos[2] = *(float *)&D_002A78A4;
                        pos[3] = *(float *)&D_002A78A8;
                    } else {
                        ((X153DF0_9B00 *)*(int **)(*(int **)(obj + 0x1A4) + 4))->func_00199B00((void *)pos, 0);
                    }
                    float dx = o->f154[0] - pos[0];
                    float dy = o->f154[1] - pos[1];
                    float dz = o->f154[2] - pos[2];
                    float ssq = dx * dx + dy * dy + dz * dz;
                    float dist = AsmSqrtF(ssq);
                    float lsq = o->f184[0] * o->f184[0] + o->f184[1] * o->f184[1] + o->f184[2] * o->f184[2];
                    float len = AsmSqrtF(lsq);
                    if (dist < D_0027653C) {
                        float dot = dy * len + dx * len + dz * len;
                        if (dot > D_00275544)
                            fD8 = 1;
                    }
                }
            }
        }
    }
    if (fD8 != 0) {
        ((X153DF0_CE80 *)f5A4)->func_0001CE80(f5A4, (void *)o->f154, D_002A789C, 50.0f, 300.0f);
    }
    ((V153DF0 *)f5A4)->v14(4);
    ((V153DF0 *)o->f1A4)->v7C();
    ((V153DF0 *)o->f1A4)->v80();
    ((V153DF0 *)o->f1A4)->v10();
    ((V153DF0 *)o->f1A4)->v18();
    ((V153DF0 *)o->f1A4)->v78();
    o->f1A4->func_0011CA60(*(Vec153DF0 *)o->f154);
    o->f1A4->func_0011CA60(*(Vec153DF0 *)o->f154);
    {
        int n = *(int *)D_002A8490->f2E0;
        if (n > 0) {
            int j;
            for (j = 0; j < n; j++) {
                char *obj = *(char **)((char *)D_002B9120 + 0x4E4 + j * 4);
                float pos[4];
                if (*(int *)(obj + 0x2C) != 0) {
                    ((X153DF0_9B00 *)*(int **)(*(int **)(obj + 0x1A4) + 4))->func_00199B00((void *)pos, 0);
                } else {
                    pos[0] = *(float *)&D_002A789C;
                    pos[1] = *(float *)&D_002A78A0;
                    pos[2] = *(float *)&D_002A78A4;
                    pos[3] = *(float *)&D_002A78A8;
                }
                float dx = o->f154[0] - pos[0];
                float dy = o->f154[1] - pos[1];
                float dz = o->f154[2] - pos[2];
                float ssq = dx * dx + dy * dy + dz * dz;
                float dist = AsmSqrtF(ssq);
                if (dist < D_00275800) {
                    int amt = func_001E8858((D_00275800 - dist) * D_002756C8);
                    if (j != f24) {
                        ((X153DF0_D30 *)obj)->func_00153D30(amt);
                        *(int *)(obj + 0x6D0) += amt;
                        *(int *)(obj + 0x6D8) += 1;
                    }
                }
            }
        }
    }
    if (o->f1A0 > D_00275AEC) {
        o->f194 = 0;
        o->f150->func_00198390();
        ((V153DF0 *)o->f150)->v10();
        ((V153DF0 *)o->f1AC)->v7C();
        ((V153DF0 *)o->f1AC)->v10();
        ((V153DF0 *)o->f1A8)->v7C();
        ((V153DF0 *)o->f1A8)->v10();
        o->f150->func_00199600(*(Vec153DF0 *)o->f154);
        o->f150->func_0019AC50();
    }
    }
    return;
}

undefined4 C_00154BF0::func_00154BF0(byte param_1)
{
  int func_001532E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001532E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
