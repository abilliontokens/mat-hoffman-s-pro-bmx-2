/* 18 functions from 0x00050D70 to 0x00051CF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);

struct S_50D70_Pl { int func_00108660(void); void func_001084E0(void); char pad0[0xA40]; int fa40; char pad44[8]; int fa4c; char padA50[4]; int fa54; char padA58[0x600]; int f1058; };
struct S_50D70_L { char pad0[0x24]; int f24; char pad28[0x180]; S_50D70_Pl *items[8]; };
struct S_50D70_P { char pad0[0x4E0]; S_50D70_L *f4E0; };
struct S_50D70_R { int func_0005B960(int a, float b); int func_0005B960(int a, int b); };
struct S_50D70_E { char pad0[0xF0]; int fF0; };
struct S_50D70_19C { char pad0[0xB8]; int fB8; void func_0006D280(void); };
struct S_50D70_M { char pad0[0x20]; int mode; };
struct S_50D70_G { char pad0[0x2E0]; S_50D70_M *f2E0; };
extern float D_00277910, D_00277900, D_00277914;
extern double D_00277908;
extern "C" double __cdecl pow(double, double);
void __stdcall func_00157A00(int a);
struct C_00050D70 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(int a);
    char pad4[0x60];
    S_50D70_P *f64;
    S_50D70_R *f68;
    char pad6C[0x24];
    int f90;
    char pad94[0x50];
    S_50D70_E *fE4;
    char padE8[0x40];
    float f128;
    int f12C;
    int pad130;
    int f134;
    char pad138[0x64];
    S_50D70_19C *f19C;
    char pad1A0[0x54];
    int f1F4;
    char pad1F8[0x8C];
    int f284;
    int f288;
    int f28C;
    int f290;
    int f294;
    int f298;
    void func_00050D70(int arg);
    void func_00031260(int arg);
    void func_00157A00(int arg);
};

/* the object D_002A8490 points at: only the slot this file calls is known */
struct I_002A8490 {
    virtual void slot_00(void) = 0;
    virtual void slot_04(void) = 0;
    virtual void slot_08(void) = 0;
    virtual void slot_0c(void) = 0;
    virtual void slot_10(void) = 0;
    virtual void slot_14(void) = 0;
    virtual void slot_18(void) = 0;
    virtual void slot_1c(void) = 0;
    virtual void slot_20(void) = 0;
    virtual void slot_24(void) = 0;
    virtual void slot_28(void) = 0;
    virtual void slot_2c(void) = 0;
    virtual void slot_30(void) = 0;
    virtual void slot_34(void) = 0;
    virtual void slot_38(void) = 0;
    virtual void slot_3c(undefined4 param_1, int param_2, int param_3, int param_4) = 0;
};

/* anything this file deletes through a virtual destructor */
struct I_Deletable {
    virtual void scalar_delete(int flags) = 0;
};

struct C_00030F90 {
    void func_00030F90(undefined4 param_1);
};

struct C_00033220 {
    void func_00033220(void);
};

struct C_0012B190 {
    void func_0012B190(int x, int y, int w, int h);
};

struct C_00092890 {
    int func_00092BE0(void);
};

struct C_000928D0 {
    int func_000928D0(void);
};

struct C_0005C6A0 {
    undefined *func_0005C6A0(void);
};

struct C_001D4300 {
    int func_001D4590(char *out, const char *title, int a, int size);
};

struct S_00051BB0_Sub {
    char pad0[0x48];
    int f48;
    char pad4C[0x274];
    C_0005C6A0 *f2C0;
    char pad2C4[8];
    C_001D4300 *f2CC;
};

struct S_00051BB0_Root {
    char pad0[0x2E0];
    S_00051BB0_Sub *f2E0;
};

struct C_00051BB0 {
    char pad0[0x1D0];
    C_00092890 *f1D0;
    char pad1D4[0xC0];
    int f294;
    char pad298[0xC4];
    int f35C;
    int func_00051BB0(void);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_00277A04;
extern char D_00277A0C;
extern int D_00080000;

struct C_0005C020 { char *func_0005C020(int a); };
struct C_00012140 { void func_00012140(void); };
struct C_00064A40 { void func_00064A40(void); };
struct C_00099D40 {
    void func_00099D40(int a);
    int func_00097700(void);
    void func_00099E50(char *p, int i);
    void func_000999B0(void);
};
struct C_0013B280 { void func_0013B280(int a); void func_0013B260(int a); };
extern C_0013B280 *D_002BEAAC;
struct S_000512D0_Sub {
    char pad0[0x48];
    int f48;
    char pad4C[0x274];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
};
struct S_000512D0_Root {
    char pad0[0x2E0];
    S_000512D0_Sub *f2E0;
};
struct S_000512D0_534 { char pad0[0x24]; int f24; };
struct S_000512D0_64 {
    char pad0[0x534];
    S_000512D0_534 *f534;
    char pad538[0x30];
    int f568;
};
struct C_000512D0 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7C();
    virtual void v80(); virtual void v84(); virtual void v88(); virtual void v8C();
    virtual void v90(); virtual void v94(); virtual void v98(); virtual void v9C();
    char pad4[0x60];
    S_000512D0_64 *f64;
    char pad68[0x104];
    C_00064A40 *f16C;
    char pad170[0x50];
    C_00099D40 *f1C0;
    char pad1C4[0xC];
    C_00012140 *f1D0;
    char pad1D4[0x24];
    int f1F8;
    int pad1FC;
    int f200;
    char pad204[0x8C];
    char *f290;
    void func_000342C0(void);
    void func_000321C0(void);
    void func_00032720(void);
    void func_00032740(void);
    C_000512D0 *func_000512D0(void);
};

struct C_000511A0 {
    undefined4 *func_000511A0(undefined4 param_1);
};

struct C_00051260 {
    void func_00051260(void);
};

struct C_000516C0 {
    void func_000516C0(void);
};

struct C_00051CB0 {
    undefined4 func_00051CB0(void *param_1);
};

struct RT_Vec { int a, b, c, d; };
struct RT_Tex { RT_Tex *func_0013E4F0(int f); void func_0012B410(int a, int b, int c); void func_0012A770(int a, int b); virtual void v0(); virtual void v1(); virtual void rel(); virtual void v3(); virtual void v4(); char pad[0x16c]; int f170; char pad174[0xc]; int f180; };
struct RT_Spr { RT_Spr *func_0002EF20(int f); void func_000306F0(RT_Tex *t, int a, int b, RT_Vec v, char *c, int d); void func_0002EF70(int a, int b); void func_00030240(int a, int b, int *c, int *d, int e); char pad[0x70]; int f74; virtual void v0(); virtual void v1(); virtual void rel(); virtual void v3(); virtual void v4(); };
extern "C" void *__cdecl func_001E8A44(unsigned int n);
struct RT_Root { char pad0[0x124]; int f124; char pad128[0x108]; unsigned char f230; char pad231[0x87]; char f2B8; char pad2B9[0x27]; S_00051BB0_Sub *f2E0; };
struct RT_P1 { char pad[0x3e4]; int f3E4; char pad3E8[0xc0]; int **f4A8; int **f4AC; char pad2[0x2c]; int **f4D8; };
struct C_00051420 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    virtual void v70();
    char pad4[0x20];
    RT_Tex *f24; RT_Tex *f28;
    char pad2C[0x18];
    RT_Spr *f44; RT_Spr *f48;
    char pad4C[0x18];
    RT_P1 *f64;
    int func_00051420(void);
};
extern char D_00276B88[];
extern char D_002779E8[];
extern undefined4 D_00277934;
extern S_00051BB0_Root *D_002A8490;
extern float D_002B8F98;
extern float D_002B8FA0;

struct C_00051180 {
    void func_00051180(float param_1);
};

struct C_00051160 {
    void func_00051160(float param_1);
};

struct C_00051140 {
    void func_00051140(float param_1);
};

struct C_00051120 {
    void func_00051120(short param_1);
};

extern float D_00275544;

struct C_00051840 {
    char pad0[0x2B8];
    float f2B8[4];
    int func_00051840(void);
};

struct C_0009FE70 {
    void func_0009FE70(int a0);
};

struct C_00051A90Mid {
    char pad0[0x54];
    C_0009FE70 *f54;
};

struct C_00051A90 {
    char pad0[0x44];
    C_00051A90Mid *f44;
    char pad48[0x288];
    int f2D0;
    int func_00051A90(int flag);
};

struct C_0009FE40 {
    void func_0009FE40(undefined4 *a, undefined4 *b, undefined4 *c, undefined4 *d);
};

struct C_0009FD60 {
    void func_0009FD60(undefined4 a, undefined4 b, undefined4 c, undefined4 d);
};

struct C_00051AE0Mid {
    char pad0[0x54];
    void *f54;
};

struct C_00051AE0 {
    char pad0[0x44];
    C_00051AE0Mid *f44;
    char pad48[0x280];
    int f2C8;
    char pad2CC[0xc];
    undefined4 f2D8[4];
    undefined4 f2E8[4];
    undefined4 f2F8[4];
    undefined4 f308[4];
    undefined4 f318[4];
    undefined4 f328[4];
    undefined4 f338[4];
    undefined4 f348[4];
    int func_00051AE0(int flag);
};

extern float D_00277A00;
extern float D_00277920;
extern float D_002779FC;

struct S_00051750_Rect {
    int x, y, w, h;
};

/* the level object an event works on */
struct S_00051750_Level {
    void func_000AC780(S_00051750_Rect r);
    void *func_000A1990(void *p, int n);
};

struct BmxEventRoadTrip {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0A(); virtual void v0B();
    virtual void v0C(); virtual void v0D(); virtual void v0E(); virtual void v0F();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1A(); virtual void v1B();
    virtual void v1C(); virtual void v1D(); virtual void v1E(); virtual void v1F();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25();
    virtual void v26();
    char pad4[0x20];
    int f24[8];
    void *f44;
    void *f48;
    char pad4c[0x18];
    S_00051750_Level *f64;
    char pad68[0x158 - 0x68];
    void *f158;
    char pad15c[0x1c4 - 0x15c];
    void *f1c4;
    void *func_001577A0(void *child, int b);
    int func_00051750(void);
};

extern "C" int func_001EA426(const char *a, const char *b);
struct C_0001B820 { void func_0001B820(void *p); };
struct S_000518A0_Item { char pad0[0xa0]; char name[4]; };
struct S_000518A0_List { char pad0[0x24]; int count; S_000518A0_Item **items; };
struct S_000518A0_Node { char pad0[4]; int type; char pad8[0x108]; char name[4]; };
struct S_000518A0_Group { char pad0[8]; int count; char padC[0x100]; S_000518A0_Node **nodes; };
struct S_000518A0_GroupList { char pad0[0x24]; int count; S_000518A0_Group **groups; };
struct S_000518A0_Owner {
    char pad0[0x3ac];
    S_000518A0_List *f3ac;
    char pad3b0[4];
    S_000518A0_GroupList *f3b4;
    char pad3b8[0x484 - 0x3b8];
    C_0001B820 *f484;
};
struct C_000518A0 { char pad0[0x64]; S_000518A0_Owner *f64; int func_000518A0(void); };
static inline int find_item_000518A0(S_000518A0_Owner *owner, const char *name)
{
    int idx = -1;
    for (int n = 0; n < owner->f3ac->count && idx == -1; n++) {
        if (func_001EA426(name, owner->f3ac->items[n]->name) == 0)
            idx = n;
    }
    return idx;
}

struct C_00051A00Node {
    char pad0[4];
    int f4;
};

struct C_00051A00Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

struct C_00051A00Group {
    char pad0[4];
    C_00051A00Obj *f4;
    int f8;
    char padC[0x100];
    C_00051A00Node **f10c;
};

struct C_00051A00List {
    char pad0[0x24];
    int f24;
    C_00051A00Group **f28;
};

struct C_00051A00Owner {
    char pad0[0x3B4];
    C_00051A00List *f3b4;
};

struct C_00051A00 {
    char pad0[0x64];
    C_00051A00Owner *f64;
    int func_00051A00(void);
};


void C_00050D70::func_00050D70(int arg)
{
    int i, all, found, v;
    if (f1F4) { func_00157A00(arg); return; }
    if (((S_50D70_G *)D_002A8490)->f2E0->mode == 0 && f128 <= D_00275544) f298 = 1;
    all = 1;
    for (i = 0; i < f90; i++)
        if (!f64->f4E0->items[i]->func_00108660()) all = 0;
    if (f298) {
        for (i = 0; i < f90; i++) f64->f4E0->items[i]->func_001084E0();
    }
    if (f298 && all && !f294) f284 = 1;
    if (!f294) {
        v = fE4->fF0;
        if (v >= 600 || v <= 40) f284 = 1;
    }
    if (f284) {
        v = f290 + fE4->fF0;
        if (v == 320) { f294 = 1; f284 = 0; f134 = -1; }
        else if (v > 320) { f134 = 0; f290 = 320; }
        else { f134 = 1; f290 = -320; }
    } else if (f294) {
        v48(1);
        found = 0; i = 0;
        do {
            if (f68->func_0005B960(3, (float)f12C) || f68->func_0005B960(1, f64->f4E0->items[i]->fa4c) ||
                f68->func_0005B960(4, (float)f64->f4E0->items[i]->fa40) || f68->func_0005B960(2, f64->f4E0->items[i]->f1058) ||
                f68->func_0005B960(0, f64->f4E0->items[i]->fa54)) found = 1;
            i++;
            if (i >= f64->f4E0->f24) break;
        } while (!found);
        f19C->func_0006D280();
        f19C->fB8 = f134 + 1;
    } else {
        S_50D70_P *P = f64;
        int a = P->f4E0->items[0]->fa40;
        if (a > f288) {
            f290 += (int)(pow((a - f288) * D_00277910, D_00277908) * D_00277900);
            f288 = P->f4E0->items[0]->fa40;
        }
        a = P->f4E0->items[1]->fa40;
        if (a > f28C) {
            f290 += (int)(pow((a - f28C) * D_00277910, D_00277908) * D_00277914);
            f28C = P->f4E0->items[1]->fa40;
        }
    }
    func_00031260(arg);
}

void C_00051120::func_00051120(short param_1)
{
  int in_ECX = (int)this;
  
  *(uint *)(in_ECX + 0x38) = (int)param_1 << 0x18 | *(uint *)(in_ECX + 0x38) & 0xffffff;
  *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 2;
  return;
}

void C_00051140::func_00051140(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x28) != param_1) {
    *(float *)(in_ECX + 0x28) = param_1;
    *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 1;
  }
  return;
}

void C_00051160::func_00051160(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x2c) != param_1) {
    *(float *)(in_ECX + 0x2c) = param_1;
    *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 1;
  }
  return;
}

void C_00051180::func_00051180(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x34) != param_1) {
    *(float *)(in_ECX + 0x34) = param_1;
    *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 1;
  }
  return;
}

undefined4 *C_000511A0::func_000511A0(undefined4 param_1)
{
  int in_ECX = (int)this;
  int iVar1;

  ((C_00030F90 *)this)->func_00030F90(param_1);
  *(undefined4 **)in_ECX = &D_00277934;
  *(int *)(in_ECX + 0x284) = 1;
  *(int *)(in_ECX + 0x288) = 0;
  *(int *)(in_ECX + 0x28c) = 0;
  *(int *)(in_ECX + 0x2cc) = 0;
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(int *)(in_ECX + 0x2b8 + iVar1 * 4) = 0;
    *(int *)(in_ECX + 0x2d8 + iVar1 * 4) = 0;
    *(int *)(in_ECX + 0x2e8 + iVar1 * 4) = 0;
    *(int *)(in_ECX + 0x2f8 + iVar1 * 4) = 0;
    *(int *)(in_ECX + 0x308 + iVar1 * 4) = 0;
    *(int *)(in_ECX + 0x318 + iVar1 * 4) = 0;
    *(int *)(in_ECX + 0x328 + iVar1 * 4) = 0;
    *(int *)(in_ECX + 0x338 + iVar1 * 4) = 0;
    *(int *)(in_ECX + 0x348 + iVar1 * 4) = 0;
  }
  *(int *)(in_ECX + 0x2d0) = 0;
  *(int *)(in_ECX + 0x2c8) = 0;
  *(int *)(in_ECX + 0x2d4) = 0;
  *(int *)(in_ECX + 0x290) = 0;
  *(int *)(in_ECX + 0x294) = 0;
  *(int *)(in_ECX + 0x358) = 0;
  *(int *)(in_ECX + 0x35c) = 0;
  *(int *)(in_ECX + 0x298) = 0;
  *(int *)(in_ECX + 0x29c) = 0;
  *(int *)(in_ECX + 0x2a0) = 0;
  *(int *)(in_ECX + 0x2a4) = 0;
  *(int *)(in_ECX + 0x2a8) = 0;
  *(int *)(in_ECX + 0x2ac) = 0;
  *(int *)(in_ECX + 0x2b0) = 0;
  *(int *)(in_ECX + 0x2b4) = 0;
  return (undefined4 *)in_ECX;
}

void C_00051260::func_00051260(void)
{
  int func_001E891B(...);
  int in_ECX = (int)this;
  I_Deletable *pObj;

  *(undefined4 **)in_ECX = &D_00277934;
  pObj = *(I_Deletable **)(in_ECX + 0x2a8);
  if (pObj != (I_Deletable *)0x0) {
    pObj->scalar_delete(1);
  }
  pObj = *(I_Deletable **)(in_ECX + 0x2ac);
  if (pObj != (I_Deletable *)0x0) {
    pObj->scalar_delete(1);
  }
  pObj = *(I_Deletable **)(in_ECX + 0x2b0);
  if (pObj != (I_Deletable *)0x0) {
    pObj->scalar_delete(1);
  }
  pObj = *(I_Deletable **)(in_ECX + 0x2b4);
  if (pObj != (I_Deletable *)0x0) {
    pObj->scalar_delete(1);
  }
  if (*(int *)(in_ECX + 0x294) != 0) {
    func_001E891B(*(int *)(in_ECX + 0x294));
  }
  ((C_00033220 *)this)->func_00033220();
  return;
}

C_000512D0 *C_000512D0::func_000512D0(void)
{
    S_000512D0_Root *root;
    f1F8 = 1;
    f200 = 1;
    root = (S_000512D0_Root *)D_002A8490;
    f290 = root->f2E0->f2C0->func_0005C020(root->f2E0->f2D8);
    func_000342C0();
    if (f1C0 != 0) {
        f1C0->func_00099D40(((S_000512D0_Root *)D_002A8490)->f2E0->f2D8);
    }
    f1D0->func_00012140();
    D_002BEAAC->func_0013B280(1);
    D_002BEAAC->func_0013B260(0);
    *(int *)(f290 + ((S_000512D0_Root *)D_002A8490)->f2E0->f48 * 4 + 0x658) = f64->f568;
    *(int *)(f290 + ((S_000512D0_Root *)D_002A8490)->f2E0->f48 * 4 + 0x12F8) = f64->f534->f24;
    if (f1C0 != 0 && f1C0->func_00097700() == 0) {
        f1C0->func_00099E50(f290, ((S_000512D0_Root *)D_002A8490)->f2E0->f48);
    }
    func_000321C0();
    f16C->func_00064A40();
    func_00032720();
    v9C();
    func_00032740();
    f1C0->func_000999B0();
    return this;
}

int C_00051420::func_00051420(void)
{
    char buf[0x104];
    RT_Tex *t;
    RT_Spr *s;

    if (((RT_Root *)D_002A8490)->f2B8)
        func_001ADCC0(buf, 0x104, D_00276B88, &((RT_Root *)D_002A8490)->f2B8);
    else
        func_001ADCC0(buf, 0x104, D_00276B88, (char *)((RT_Root *)D_002A8490)->f2E0 + 0x4c);
    ((RT_Root *)D_002A8490)->f230 |= 1;
    ((RT_Root *)D_002A8490)->f124 = 0;
    t = (RT_Tex *)func_001E8A44(0x2d0);
    f28 = t ? t->func_0013E4F0(1) : 0;
    f28->func_0012B410(0x3f9f49f5, 0x280, 0x1c0);
    t = (RT_Tex *)func_001E8A44(0x2d0);
    f24 = t ? t->func_0013E4F0(1) : 0;
    f24->func_0012B410(0x3f9f49f5, 0x280, 0x1c0);
    s = (RT_Spr *)func_001E8A44(0x78);
    s = s ? s->func_0002EF20(1) : 0;
    f44 = s;
    s->func_000306F0(f24, *(int *)((char *)((RT_Root *)D_002A8490)->f2E0 + 8), (int)*f64->f4AC, *(RT_Vec *)((char *)f64->f4D8 + 0x24), buf, 0);

    if (((RT_Root *)D_002A8490)->f2B8)
        func_001ADCC0(buf, 0x104, D_002779E8, &((RT_Root *)D_002A8490)->f2B8);
    else
        func_001ADCC0(buf, 0x104, D_002779E8, (char *)((RT_Root *)D_002A8490)->f2E0 + 0x4c);
    s = (RT_Spr *)func_001E8A44(0x78);
    s = s ? s->func_0002EF20(1) : 0;
    f48 = s;
    s->func_000306F0(f28, *(int *)((char *)((RT_Root *)D_002A8490)->f2E0 + 8), (int)*f64->f4AC, *(RT_Vec *)((char *)f64->f4D8 + 0x24), buf, 1);

    if (!f48->f74) {
        f48->rel();
        f48 = 0;
        f28->rel();
        f28 = 0;
    }
    v70();
    if (f48) {
        f48->func_0002EF70(0, 0);
        f48->func_00030240(f64->f3E4, 4, &f28->f170, &f28->f180, 0);
        f28->func_0012A770((int)*f64->f4A8, 2);
        f48->v4();
        f28->v4();
    }
    return 1;
}

void C_000516C0::func_000516C0(void)
{
  int in_ECX = (int)this;
  int iVar1;
  int iVar2;

  ((I_002A8490 *)D_002A8490)->slot_3c(*(undefined4 *)(in_ECX + 0x24), 0, 0, 0);
  ((C_0012B190 *)*(int *)(in_ECX + 0x24))->func_0012B190(0, 0, 0x280, 0x1c0);
  memcpy((void *)(in_ECX + 0x1dc), (void *)(*(int *)(in_ECX + 0x24) + 0x1e0), 0x18);
  if (*(int *)(in_ECX + 0x28) != 0) {
    iVar1 = (int)D_002B8F98;
    iVar2 = (int)D_002B8FA0;
    ((C_0012B190 *)*(int *)(in_ECX + 0x28))->func_0012B190(0x280 - iVar2, 0x1c0 - iVar1, iVar2, iVar1);
  }
  return;
}

int BmxEventRoadTrip::func_00051750(void)
{
    S_00051750_Rect r;
    int n;
    int top;

    r.x = (int)(D_00277A00 - D_002B8FA0);
    r.w = 0x280;
    top = (int)D_00277920;
    r.y = (int)(D_002779FC - D_002B8F98 + top);
    r.h = top + 0x1c0;
    f64->func_000AC780(r);
    v26();
    n = 1;
    if (f48 != 0) {
        n = 2;
    }
    if (f64 != 0) {
        func_001577A0(f64->func_000A1990(f24, n), -1);
    }
    if (f44 != 0) {
        func_001577A0(f44, -1);
    }
    if (f48 != 0) {
        func_001577A0(f48, -1);
    }
    if (f158 != 0) {
        func_001577A0(f158, 10);
    }
    if (f1c4 != 0) {
        func_001577A0(f1c4, -1);
    }
    return 1;
}

int C_00051840::func_00051840(void)
{
    int count = 0;

    if (f2B8[0] > D_00275544) {
        count++;
    }
    if (f2B8[1] > D_00275544) {
        count++;
    }
    if (f2B8[2] > D_00275544) {
        count++;
    }
    if (f2B8[3] > D_00275544) {
        count++;
    }
    return count;
}

int C_000518A0::func_000518A0(void)
{
  for (int i = 0; i < f64->f3b4->count; i++) {
    for (int j = 0; j < f64->f3b4->groups[i]->count; j++) {
      if (f64->f3b4->groups[i]->nodes[j]->type == 0xd) {
        for (int k = 0; k < f64->f3b4->groups[i]->count; k++) {
          S_000518A0_Node *node = f64->f3b4->groups[i]->nodes[k];
          if (node->type == 4) {
            int idx = -1;
            for (int n = 0; n < f64->f3ac->count && idx == -1; n++) {
              char *name = f64->f3ac->items[n]->name;
              if (!func_001EA426(node->name, name))
                idx = n;
            }
            S_000518A0_Owner *o = f64;
            S_000518A0_Item *item = o->f3ac->items[idx];
            o->f484->func_0001B820(item);
          }
        }
      }
    }
  }
  return 1;
}

int C_00051A00::func_00051A00(void)
{
    int i;
    int j;

    for (i = 0; i < f64->f3b4->f24; i++) {
        for (j = 0; j < f64->f3b4->f28[i]->f8; j++) {
            C_00051A00Node *node = f64->f3b4->f28[i]->f10c[j];
            if (node->f4 == 0xd) {
                f64->f3b4->f28[i]->f4->v7();
            }
        }
    }
    return 1;
}

int C_00051A90::func_00051A90(int flag)
{
    if (flag != 0) {
        f2D0 = 1;
        f44->f54->func_0009FE70(1);
        return 1;
    }
    f2D0 = 2;
    f44->f54->func_0009FE70(0);
    return 1;
}

int C_00051AE0::func_00051AE0(int flag)
{
    if (flag != 0) {
        ((C_0009FE40 *)f44->f54)->func_0009FE40(&f2D8[f2C8], &f2E8[f2C8], &f2F8[f2C8], &f308[f2C8]);
        return 1;
    }
    ((C_0009FD60 *)f44->f54)->func_0009FD60(f318[f2C8], f328[f2C8], f338[f2C8], f348[f2C8]);
    f2D8[f2C8] = f318[f2C8];
    f2E8[f2C8] = f328[f2C8];
    f2F8[f2C8] = f338[f2C8];
    f308[f2C8] = f348[f2C8];
    return 1;
}

int C_00051BB0::func_00051BB0(void)
{
    char buf[0x104];

    if (f35C != 0) {
        return 1;
    }
    if (f1D0->func_00092BE0() != 0) {
        func_001ADCC0(buf, 0x104, &D_00277A04, &D_00277A0C, D_002A8490->f2E0->f48);
        if (D_002A8490->f2E0->f2CC->func_001D4590((char *)((C_000928D0 *)f1D0)->func_000928D0(), buf, f294, (int)&D_00080000) == 1) {
            if (D_002A8490->f2E0->f2CC->func_001D4590((char *)((C_000928D0 *)f1D0)->func_000928D0(), &D_00277A0C, (int)D_002A8490->f2E0->f2C0->func_0005C6A0(), 0x80) == 1) {
                f35C = 1;
                return 1;
            }
        }
    }
    return 0;
}

undefined4 C_00051CB0::func_00051CB0(void *param_1)
{
  int in_ECX = (int)this;

  ((C_00051BB0 *)this)->func_00051BB0();
  memcpy((void *)(*(int *)(in_ECX + 0x2c8) * 0x20000 + *(int *)(in_ECX + 0x294)), param_1, 0x20000);
  return 1;
}