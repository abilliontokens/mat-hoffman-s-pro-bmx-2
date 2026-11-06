/* 16 functions from 0x000F1D90 to 0x000F2CC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct O_000F22B0_Btn {
    char pad0[0x304];
    float f304x;
    char pad308[0x294];
    int f59c;
    int f5a0;
    void func_00103260(int a);
    void func_00103350(void);
};
struct O_000F22B0_Hph {
    char pad0[0x134];
    int f134;
    int f138;
    char pad13c[0x128];
    int f264;
    O_000F22B0_Btn *func_000BA9B0(int id);
    O_000F22B0_Btn *func_000BA9D0(int id);
    void func_000BB7C0(int v);
};
struct O_000F22B0_Sub {
    int f0;
    int f4;
    int f8;
    int fc;
    float f10;
    char pad14[0xc];
    int f20;
    char pad24[0x16c];
    int f190;
    void func_0005B220(void);
};
struct O_000F22B0_Root {
    char pad0[0x2e0];
    O_000F22B0_Sub *f2e0;
};
struct O_000F22B0_Cur { char pad0[0x3b]; unsigned char b3b; };
extern float D_002B91C0;
extern float D_00278C48;
extern float D_0027DE74;
#define G22B0 ((O_000F22B0_Root *)D_002A8490)
struct C_000F22B0 {
    char pad0[0x124];
    O_000F22B0_Hph *p124;
    char pad128[0x158];
    int f280;
    int f284;
    int f288;
    int f28c;
    float f290;
    int pad294;
    int f298;
    int f29c;
    int f2a0;
    float f2a4;
    float f2a8;
    int f2ac;
    int f2b0;
    O_000F22B0_Cur *p2b4;
    void func_001BEE50(int a, int b, int c);
    int func_001BF050(int a);
    void func_001BED00(float dt);
    void func_000F22B0(float dt);
};
struct VObj_000F2600 { virtual void v0(int); };
struct PtrObj_000F2600 { void func_001D6410(); };
void func_001E891B(void *p);
extern int D_0027DE7C;
struct C_000F2600 {
    void *vtbl;
    char pad4[0x20];
    VObj_000F2600 *f24, *f28, *f2C, *f30;
    PtrObj_000F2600 *f34;
    PtrObj_000F2600 *f38[6];
    VObj_000F2600 *f50[6];
    VObj_000F2600 *f68[6];
    PtrObj_000F2600 *f80, *f84;
    VObj_000F2600 *f88[2];
    VObj_000F2600 *f90[2];
    void func_000F2600();
    void func_00157660();
};
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
    char pad4[0x24];
    int f28;
    char pad2c[0xc];
    unsigned int f38;
    int f3C;
    int f40;
    int f44;
    int f48;
    char pad4c[0xc];
    unsigned char f58;
    void func_001D5AD0();
    S_000F1FC0_Obj *func_001D5AA0(void);
    S_000F1D90_Obj *func_001D5760(void);
    void func_001D5810(void *a, float b, float c, int d);
};

void *func_001E8A44(int size);
extern int D_002786B0;
extern float D_002757F0;
extern float D_0027E140;

struct BmxUIPageHPHChoice {
    void *vtbl;
    char pad4[0x120];
    struct HPHChoice_124 *f124;
    char pad128[0x18];
    int **f140;
    char pad144[0x140];
    int f284;
    int f288;
    int f28c;
    int f290;
    int f294;
    char pad298[8];
    short f2a0;
    char pad2a2[0xe];
    int f2b0;
    S_000F1D90_Obj *unk2b4[4];
    int func_000F2160(int a, int b);
    int HandleKey(struct C_000F2AD0_Ui *ui, int b);
    void func_001BE4F0(int a, int b, int c);
    BmxUIPageHPHChoice *func_000F1EC0(int a, int b, int c);
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
    char pad0[0x24];
    S_000F1D90_Obj *f24, *f28, *f2c, *f30;
    S_000F2120_Obj *f34;
    S_000F2120_Obj *f38;
    S_000F2120_Obj *f3c;
    char pad40[0x10];
    S_000F1D90_Obj *f50, *f54;
    char pad58[0x10];
    S_000F1D90_Obj *f68, *f6c;
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

struct HPHChoice_124 {
    char pad0[0x24];
    struct C_000F2AD0_Ui *f24;
};
struct HPHChoice_140_4 {
    void func_001BDE90(int a);
    void func_001BDF00(int a);
};
struct HPHChoice_140 {
    int f0;
    HPHChoice_140_4 *f4;
};

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

extern int D_00278084;
extern int D_0028251C;

struct C_000F2AD0_Cam {
    void func_00030020(int *p);
    void func_000300C0(int *p);
    void func_00030210(void);
    void func_000301A0(void);
};

struct C_000F2AD0_Own {
    char pad0[0x74];
    C_000F2AD0_Cam *f74;
};

struct C_000F2AD0_Res {
    int pad0[0x360 / 4];
    int f360;
};

struct C_000F2AD0_Snd {
    void func_001C4D50(int ms);
};

struct C_000F2AD0_Ui {
    void func_000B9A80(int a, int b);
};

__forceinline int BmxUIPageHPHChoice::HandleKey(C_000F2AD0_Ui *ui, int b)
{
    int r = 1;
    if (b == D_002A8490->f8->func_00136170(4, 2, 0) || b == D_002A8490->f8->func_00136170(0x17, 2, 0)) {
        f288 = r;
    } else if (b == D_002A8490->f8->func_00136170(5, 2, 0) || b == D_002A8490->f8->func_00136170(0x18, 2, 0)) {
        f28c = r;
    } else if (b == D_002A8490->f8->func_00136170(2, 2, 0)) {
        ((HPHChoice_140 *)f140)->f4->func_001BDE90(0);
        ui->func_000B9A80(2, r);
        return r;
    } else {
        if (b == D_002A8490->f8->func_00136170(3, 2, 0)) {
            ((HPHChoice_140 *)f140)->f4->func_001BDF00(0);
            ui->func_000B9A80(2, r);
        }
        return r;
    }
    f290 = 0;
    f284 = r;
    f294 = r;
    ui->func_000B9A80(4, r);
    return r;
}

struct C_000F2AD0_Mgr {
    char pad0[0x24];
    C_000F2AD0_Ui *f24;
    char pad28[0x134 - 0x28];
    int f134;
    int f138;
    char pad13C[0x25c - 0x13C];
    C_000F2AD0_Own *f25c;
    char pad260[8];
    C_000F2AD0_Snd *f268;
    C_000F2AD0_Res *func_000BA9D0(int a);
};

struct C_000F2AD0 {
    char pad0[0x124];
    C_000F2AD0_Mgr *f124;
    char pad128[0x15C];
    int f284;
    char pad288[8];
    int f290;
    int f294;
    int arr298[0x14];
    int func_000F2AD0(int a, int key);
};

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
    int Slot(int i) { if (i >= f290) return -1; return arr298[i]; }
    void func_000BFEE0();
    void func_000C3F60(int i);
    void func_000C40D0(int i);
    void func_000C1890(int i);
    void func_000C0120(int i);
    void func_000C02D0(int i);
    void func_000C09B0(int i);
    void func_000C0B30(int i);
    void func_000C0CB0(int i);
    void func_000C0E30(int i);
    void func_000C1000(int i);
    void func_000C11D0(int i);
    void func_000C13A0(int i);
    void func_000C0480(int i);
    void func_000C0630(int i);
    void func_000C07F0(int i);
    void func_000C1CB0(int i);
    void func_000C1B00(int i);
    void func_000C2B30(int i);
    void func_000C29A0(int i);
    void func_000C2810(int i);
    void func_000C2680(int i);
    void func_000C24F0(int i);
    void func_000C2340(int i);
    void func_000C3DA0(int i);
    void func_000C21B0(int i);
    void func_000C1FF0(int i);
    void func_000C1E60(int i);
    void func_000C3C20(int i);
    void func_000C2EC0(int i);
    void func_000C3060(int i);
    void func_000C3210(int i);
    void func_000C33B0(int i);
    void func_000C3550(int i);
    void func_000C38B0(int i);
    void func_000C36F0(int i);
    void func_000C4240(int i);
    void func_000C1710(int i);
    void func_000C3A50(int i);
    void func_000C2CC0(int i);
    void func_000C1570(int i);
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

BmxUIPageHPHChoice *BmxUIPageHPHChoice::func_000F1EC0(int a, int b, int c)
{
    int i;
    S_000F1D90_Obj *p;
    S_000F1D90_Obj *o;

    func_001BE4F0(a, b, c);
    for (i = 0; i < 4; i++) {
        p = (S_000F1D90_Obj *)func_001E8A44(0x64);
        p = p != 0 ? p->func_001D5760() : 0;
        unk2b4[i] = p;
        if (i % 2 == 0) {
            p->func_001D5810(&D_002786B0, 100.0f, (float)(i / 2) * D_002757F0 + D_0027E140, 0);
        } else {
            p->func_001D5810(&D_002786B0, 321.0f, (float)(i / 2) * D_002757F0 + D_0027E140, 0);
            o = unk2b4[i];
            o->f3C = 0x3f800000;
            o->f40 = 0;
            o->f44 = 0;
            o->f48 = 0x3f800000;
            o->f58 |= 4;
        }
        o = unk2b4[i];
        if (o->f28 != 0x435d0000) {
            o->f28 = 0x435d0000;
            o->f58 |= 1;
        }
    }
    return this;
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

void BmxUIPageHPHChoice::func_000F2030(void)
{
    S_000F1D90_Obj *p;
    S_000F2120_Root *s;
    int n;
    int i;

    p = f288 ? D_002B91AC->f68 : D_002B91AC->f50;
    p->func_001D5AD0();
    p = f28c ? D_002B91AC->f6c : D_002B91AC->f54;
    p->func_001D5AD0();
    s = D_002B91AC;
    s->f24->func_001D5AD0();
    s->f28->func_001D5AD0();
    s->f2c->func_001D5AD0();
    s->f30->func_001D5AD0();
    n = f140[1][12] - 1;
    for (i = 0; i < 4; i++) {
        if (n * 2 == i || n * 2 + 1 == i) {
            p = unk2b4[i];
            p->f38 = (p->f38 & 0xff000000) | 0xbfa35a;
            p->f58 |= 2;
            p = unk2b4[i];
            p->f38 = (p->f38 & 0xffffff) | (f2a0 << 24);
            p->f58 |= 2;
            unk2b4[i]->func_001D5AD0();
        }
    }
}

void BmxUIPageHPHChoice::func_000F2120(void)
{
    D_002B91AC->f34->func_001D6600();
    D_002B91AC->f38->func_001D6600();
    D_002B91AC->f3c->func_001D6600();
    func_000F2030();
    func_00157960();
}

int BmxUIPageHPHChoice::func_000F2160(int a, int b)
{
    C_000F2AD0_Ui *ui = f124->f24;
    if (f2b0 == 0)
        return 0;
    if (f294 != 0)
        return 0;
    return HandleKey(ui, b);
}

void C_000F22B0::func_000F22B0(float dt)
{
    O_000F22B0_Hph *owner = p124;
    if (f298 != p2b4->b3b) {
        if (f2a4 >= f2a8) {
            f2a0 = f298;
        } else {
            f2a0 = (int)((float)(f298 - f29c) * (f2a4 / f2a8)) + f29c;
            f2a4 += dt;
        }
    }
    if (f2ac != 0 && f2b0 == 0) {
        D_002B91C0 += dt;
        if (D_002B91C0 >= D_00278C48) {
            f2b0 = 1;
            f2ac = 0;
        }
    }
    if (f280 != 0) {
        f2ac = 1;
        owner->func_000BA9B0(0x31)->func_00103260(0);
        owner->func_000BA9B0(0x32)->func_00103260(0);
        f298 = 0xff;
        f29c = 0;
        f2a0 = 0;
        f2a4 = 0.0f;
        f2a8 = 0.25f;
        func_001BEE50(1, 1, 0);
        f280 = 0;
    }
    if (f284 != 0) {
        O_000F22B0_Hph *o = p124;
        o->func_000BA9B0(0x31)->func_00103350();
        o->func_000BA9B0(0x32)->func_00103350();
        f298 = 0;
        f29c = 0xff;
        f2a0 = 0xff;
        f2a4 = 0.0f;
        f2a8 = 0.25f;
        f284 = 0;
    }
    if (f288 != 0) {
        f290 += dt;
        if (f290 >= D_0027DE74) {
            switch (func_001BF050(1)) {
            case 1:
                G22B0->f2e0->f8 = 0;
                G22B0->f2e0->f4 = 9;
                G22B0->f2e0->f20 = 0;
                G22B0->f2e0->f10 = 60.0f;
                p124->f138 = 7;
                p124->f134 = 0x14;
                break;
            case 2:
                G22B0->f2e0->f8 = G22B0->f2e0->fc;
                G22B0->f2e0->f20 = 0;
                G22B0->f2e0->f10 = 60.0f;
                G22B0->f2e0->f4 = 8;
                owner->f264 = 1;
                owner->f138 = 7;
                owner->f134 = 3;
                G22B0->f2e0->func_0005B220();
                G22B0->f2e0->f0 = 2;
                O_000F22B0_Btn *b = owner->func_000BA9D0(3);
                b->f59c = 1;
                b->f5a0 = 0;
                owner->func_000BB7C0(G22B0->f2e0->f190);
                break;
            }
            f288 = 0;
        }
    }
    if (f28c != 0) {
        f290 += dt;
        if (f290 >= D_0027DE74) {
            owner->f138 = 7;
            owner->func_000BA9D0(10)->f304x = 1.0f;
            owner->f134 = 10;
            f28c = 0;
        }
    }
    func_001BED00(dt);
}

void C_000F2600::func_000F2600()
{
    int i;
    PtrObj_000F2600 *p;
    vtbl = &D_0027DE7C;
    D_002B91AC = 0;
    if (f24) f24->v0(1);
    if (f28) f28->v0(1);
    if (f2C) f2C->v0(1);
    if (f30) f30->v0(1);
    p = f34;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    for (i = 0; i < 6; i++) {
        p = f38[i];
        if (p) {
            p->func_001D6410();
            func_001E891B(p);
        }
        if (f50[i]) f50[i]->v0(1);
        if (f68[i]) f68[i]->v0(1);
    }
    p = f80;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = f84;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    for (i = 0; i < 2; i++) {
        if (f88[i]) {
            f88[i]->v0(1);
            f88[i] = 0;
        }
        if (f90[i]) {
            f90[i]->v0(1);
            f90[i] = 0;
        }
    }
    func_00157660();
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

void C_000F2BD0::func_000F2820()
{
    int i;
    for (i = 0; i < f290; i++) {
        if (Slot(i) == D_002A8490->f8->func_00136170(0x28, 2, 0)) {
            func_000C3F60(i);
            func_000C40D0(i);
            func_000C1890(i);
        } else if (Slot(i) == D_002A8490->f8->func_00136170(0x29, 2, 0)) {
            func_000C0120(i);
            func_000C02D0(i);
            func_000C09B0(i);
            func_000C0B30(i);
            func_000C0CB0(i);
            func_000C0E30(i);
            func_000C1000(i);
            func_000C11D0(i);
            func_000C13A0(i);
            func_000C0480(i);
            func_000C0630(i);
            func_000C07F0(i);
        } else if (Slot(i) == D_002A8490->f8->func_00136170(4, 2, 0)) {
            func_000C1CB0(i);
            func_000C1B00(i);
        } else if (Slot(i) == D_002A8490->f8->func_00136170(5, 2, 0)) {
            func_000C2B30(i);
            func_000C29A0(i);
            func_000C2810(i);
            func_000C2680(i);
            func_000C24F0(i);
            func_000C2340(i);
            func_000C3DA0(i);
        } else if (Slot(i) == D_002A8490->f8->func_00136170(6, 2, 0)) {
            func_000C21B0(i);
            func_000C1FF0(i);
            func_000C1E60(i);
        } else if (Slot(i) == D_002A8490->f8->func_00136170(7, 2, 0)) {
            func_000C3C20(i);
            func_000C2EC0(i);
            func_000C3060(i);
            func_000C3210(i);
            func_000C33B0(i);
            func_000C3550(i);
            func_000C38B0(i);
            func_000C36F0(i);
        } else if (Slot(i) == D_002A8490->f8->func_00136170(3, 2, 0)) {
            func_000C4240(i);
            func_000C1710(i);
            func_000C3A50(i);
            func_000C2CC0(i);
            func_000C1570(i);
        }
    }
    func_000BFEE0();
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

