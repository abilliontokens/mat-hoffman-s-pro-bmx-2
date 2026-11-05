/* 16 functions from 0x000F1D90 to 0x000F2CC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000F2CA0 {
    undefined4 func_000F2CA0(byte param_1);
};

extern int D_0027DF54;
extern int D_0028248C;
extern float D_00275AEC;

struct C_000F2720 {
    int unk0;
    void func_001BE3F0(void);
    void *func_000F2720(int flags);
};

struct S_000F1FC0_Obj {
    char pad0[0x10];
    float f10;
    float f14;
};

struct S_000F1D90_Obj {
    virtual void destroying(int flag);
    char pad4[0x34];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char f58;
    void func_001D5AD0();
    S_000F1FC0_Obj *func_001D5AA0(void);
};

struct BmxUIPageHPHChoice {
    void *vtbl;
    char pad4[0x13c];
    int **f140;
    char pad144[0x144];
    int f288;
    int f28c;
    char pad290[0x10];
    short f2a0;
    char pad2a2[0x12];
    S_000F1D90_Obj *unk2b4[4];
    void func_000F1D90(void);
    void func_000F1FC0(void);
    void func_000F2120(void);
    void func_001BE3F0(void);
    void func_000F2030(void);
    void func_00157960(void);
    void func_001578D0(void);
};

struct S_000F2120_Obj {
    void func_001D6600(void);
    void func_0005E840(char *s);
};

struct S_000F2120_Root {
    char pad0[0x34];
    S_000F2120_Obj *f34;
    S_000F2120_Obj *f38;
    S_000F2120_Obj *f3c;
    void func_000BF860(int a, int b, int c, int d);
};

extern S_000F2120_Root *D_002B91AC;

extern int D_0027E00C;
extern int D_0027DFFC;

struct C_000F2750 {
    undefined4 *func_000F2750(byte param_1);
};

struct C_000F2780_Obj3 {
    void func_00094C60();
};

struct C_000F2780_Obj2 {
    char pad0[0x2FC];
    C_000F2780_Obj3 *f2fc;
};

/* string table of the settings record */
struct C_000F1DD0_Strings {
    char pad0[0x7C8];
    char *f7C8;
    char pad7CC[0x838 - 0x7CC];
    char *f838;
    char pad83C[0xFB0 - 0x83C];
    char *fFB0;
};

struct C_000F1DD0_Mid {
    int f0;
    C_000F1DD0_Strings *f4;
};

struct C_000F2AD0_Query {
    int func_00136170(int a, int b, int c);
};

struct C_000F2780_Global {
    char pad0[8];
    C_000F2AD0_Query *f8;
    char pad0C[0x2E0 - 0xC];
    C_000F2780_Obj2 *f2e0;
    char pad2E4[4];
    C_000F1DD0_Mid *f2E8;
};

extern C_000F2780_Global *D_002A8490;

struct C_000F2780_Ed274 {
    void func_00093120();
};

struct C_000F2780_Ed {
    char pad0[0x274];
    C_000F2780_Ed274 *f274;
    int func_000BB3F0(int a0, int a1);
    void func_000BB3B0(int a0, int a1);
};

struct C_000F2780 {
    char pad0[0x124];
    void *f124;
    char pad128[0x15C];
    int f284;
    int f288;
    int f28C;
    int f290;
    char pad294[4];
    int arr298[0x14];
    void func_000BFEE0();
    void func_000F2780();
};

extern float D_002756D8;

struct C_000F2BD0_Svc {
    int func_000301D0();
    void func_00030160();
    void func_000301F0();
};

struct C_000F2BD0_Owner {
    char pad0[0x74];
    C_000F2BD0_Svc *f74;
};

struct C_000F2BD0_Mgr {
    char pad0[0x25c];
    C_000F2BD0_Owner *f25c;
};

struct C_000F2BD0 {
    char pad0[0x124];
    C_000F2BD0_Mgr *f124;
    char pad128[0x15C];
    int f284;
    int f288;
    float f28C;
    int f290;
    float f294;
    int arr298[0x14];
    void func_000F2820();
    void func_001BED00(float dt);
    void func_000F2BD0(float dt);
};

struct C_000F1DD0 {
    char pad0[0x280];
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    int f294;
    int f298;
    int f29C;
    int f2A0;
    int f2A4;
    int f2A8;
    int f2AC;
    int f2B0;
    void func_000F1DD0(void);
};

void BmxUIPageHPHChoice::func_000F1D90(void)
{
    int i;
    vtbl = (void *)&D_0028248C;
    for (i = 0; i < 4; i++) {
        if (unk2b4[i] != 0) {
            unk2b4[i]->destroying(1);
            unk2b4[i] = 0;
        }
    }
    func_001BE3F0();
}

void C_000F1DD0::func_000F1DD0(void)
{
    f280 = 1;
    f284 = 0;
    f288 = 0;
    f28C = 0;
    f294 = 0;
    f298 = 0;
    f29C = 0;
    f2A0 = 0;
    f2A4 = 0;
    f2A8 = 0;
    f2AC = 0;
    f2B0 = 0;
    D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4->fFB0);
    D_002B91AC->func_000BF860(0, 0x1EB, 0x184, 0);
    D_002B91AC->f38->func_0005E840(D_002A8490->f2E8->f4->f7C8);
    D_002B91AC->func_000BF860(1, 0x17B, 0x184, 0);
    D_002B91AC->f3c->func_0005E840(D_002A8490->f2E8->f4->f838);
}

void BmxUIPageHPHChoice::func_000F1FC0(void)
{
    int i;
    for (i = 0; i < 4; i++) {
        if (unk2b4[i] != 0) {
            S_000F1FC0_Obj *p = unk2b4[i]->func_001D5AA0();
            if (D_00275AEC > p->f10) {
                p->f10 = 10.0f;
            }
            if (D_00275AEC < p->f14 || p->f14 > p->f10) {
                p->f14 = 10.0f;
            }
        }
    }
    func_001578D0();
}

void BmxUIPageHPHChoice::func_000F2120(void)
{
    D_002B91AC->f34->func_001D6600();
    D_002B91AC->f38->func_001D6600();
    D_002B91AC->f3c->func_001D6600();
    func_000F2030();
    func_00157960();
}

void *C_000F2720::func_000F2720(int flags) {
    void func_001E891B(void *);
    unk0 = (int)&D_0027DF54;
    func_001BE3F0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 *C_000F2750::func_000F2750(byte param_1)
{
  int func_001BE3F0(...);
  int func_001E891B(...);
  undefined4 *p = (undefined4 *)this;

  *p = (undefined4)&D_0027E00C;
  func_001BE3F0();
  if ((param_1 & 1) != 0) {
    func_001E891B(p);
  }
  return p;
}

void C_000F2780::func_000F2780()
{
  C_000F2780_Obj3 *obj;
  C_000F2780_Ed *ed;
  int i;

  f284 = 1;
  obj = D_002A8490->f2e0->f2fc;
  ed = (C_000F2780_Ed *)f124;
  obj->func_00094C60();
  f28C = 0;
  f288 = 1;
  func_000BFEE0();
  ed->f274->func_00093120();
  if (ed->func_000BB3F0((int)&D_0027DFFC, (int)&D_0027DFFC) == 0) {
    ed->func_000BB3B0((int)&D_0027DFFC, (int)&D_0027DFFC);
  }
  f290 = 0;
  for (i = 0; i < 0x14; i++) {
    arr298[i] = -1;
  }
}

void C_000F2BD0::func_000F2BD0(float dt)
{
    C_000F2BD0_Mgr *mgr = f124;
    int i;

    if (mgr->f25c->f74->func_000301D0() == 0 && f284 != 0) {
        mgr->f25c->f74->func_000301F0();
        mgr->f25c->f74->func_00030160();
    }
    f28C = dt + f28C;
    if (f28C >= D_002756D8) {
        f28C = 0;
        f288 = (f288 == 0);
    }
    f294 = dt + f294;
    if (f294 >= D_002756D8) {
        func_000F2820();
        f290 = 0;
        for (i = 0; i < 0x14; i++) {
            arr298[i] = -1;
        }
    }
    func_001BED00(dt);
}

undefined4 C_000F2CA0::func_000F2CA0(byte param_1)
{
  int func_000C45E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C45E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
