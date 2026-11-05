/* 10 functions from 0x000716F0 to 0x000725B0, found by Ghidra. */
#include "common.h"

struct S_Obj4_716 {
    char pad0[0x930];
    char *p930;
    char pad934[0x13C];
    char *fA70;
    char padA74[0x4A4];
    char *fF18;
};

struct S_Obj2E8_716 {
    char pad0[4];
    S_Obj4_716 *p4;
};

struct S_Obj2E0_716 {
    char pad0[0x2FC];
    void *f2FC;
};

struct S_Root_716 {
    char pad0[0x2E0];
    S_Obj2E0_716 *f2E0;
    char pad2E4[4];
    S_Obj2E8_716 *p2E8;
};

struct S_Setter_716 {
    void func_001B17D0(char *s);
};

struct S_A4_716 {
    char pad0[0x1F4];
    int f1F4;
};

struct C_000952A0 {
    int func_000952A0(int i);
};

struct C_00095250 {
    int func_00095250(int i);
};

struct C_00094890 {
    int func_00094890(void);
};

struct C_00094870 {
    int func_00094870(void);
};

extern S_Root_716 *D_002A8490;
extern int D_00277038;
void func_001ADCC0(char *buf, int size, char *fmt, int val);
void func_001AC330(char *dest, char *fmt, char *arg);

struct C_00072450 {
    char pad0[0xB0];
    int fB0;
    char padB4[0x24];
    S_Setter_716 *fD8;
    void func_00072450(void);
};

struct C_000717E0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x60];
    int f64;
    int f68;
    int f6C;
    char pad70[0x18];
    int f88;
    int f8C;
    char pad90[4];
    int f94;
    int f98;
    int f9C;
    int fA0;
    S_A4_716 *fA4;
    int fA8;
    char padAC[0x10];
    int fBC;
    int fC0;
    char padC4[0x78];
    int f13C;
    void func_000717E0(void);
};

struct C_000721D0 {
    char pad0[0x88];
    int f88;
    int f8C;
    int f90;
    char pad94[0x14];
    int fA8;
    char padAC[8];
    int fB4;
    void func_000721D0(void);
};

struct C_00072280 {
    char pad0[0x88];
    int f88;
    int f8C;
    int f90;
    char pad94[0x14];
    int fA8;
    char padAC[8];
    int fB4;
    void func_00072280(void);
};

/* a drawable the page owns: func_001D5AD0 draws it, f38/b58 are its colour and dirty flag */
struct Sprite_724E0 {
    virtual ~Sprite_724E0();
    char pad0[0x34];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char b58;
    void func_001D5AD0();
};

struct C_000724E0 {
    char pad0[0x64];
    int unk64;
    char pad68[0x78 - 0x68];
    Sprite_724E0 *unk78;
    Sprite_724E0 *unk7C;
    Sprite_724E0 *unk80;
    char pad84[0x98 - 0x84];
    int unk98;
    char pad9C[0xEC - 0x9C];
    Sprite_724E0 *arrEC[8];
    Sprite_724E0 *arr10C[5];
    Sprite_724E0 *arr120[5];
    Sprite_724E0 *unk134;
    Sprite_724E0 *unk138;
    void func_000724E0(void);
};

struct C_00072590 {
    char pad0[0xC0];
    int unkC0;
    int unkC4;
    int unkC8;
    void func_00072590(int a0);
};


void C_000717E0::func_000717E0(void)
{
    int a;
    int b;

    v6();
    fA4->f1F4 = 1;
    fA8 = 0;
    f64 = f6C;
    f98 = 0;
    f94 = 1;
    fBC = 0;
    f9C = 1;
    f68 = -1;
    fA0 = 0;
    a = ((C_00094890 *)D_002A8490->f2E0->f2FC)->func_00094890();
    f88 = a;
    b = ((C_00094870 *)D_002A8490->f2E0->f2FC)->func_00094870();
    fBC = 0;
    fC0 = 1;
    f13C = 1;
    f8C = b;
}

void C_000721D0::func_000721D0(void)
{
    while (f90 != 0) {
        if (((C_000952A0 *)D_002A8490->f2E0->f2FC)->func_000952A0(f88) != 0 &&
            ((C_00095250 *)D_002A8490->f2E0->f2FC)->func_00095250(f88) == 0) {
            f90 = 0;
            fA8 = 1;
            fB4 = 0;
        } else {
            f88++;
            if (f88 > f8C) {
                f88 = 1;
            }
        }
    }
}

void C_00072450::func_00072450(void)
{
    char dest[0x40];
    char buf[4];

    func_001ADCC0(buf, 0x104, (char *)&D_00277038, fB0);
    if (fB0 > 0) {
        func_001AC330(dest, D_002A8490->p2E8->p4->fA70, buf);
    } else {
        S_Obj4_716 *p = D_002A8490->p2E8->p4;
        func_001AC330(dest, p->fF18, p->p930);
    }
    fD8->func_001B17D0(dest);
}

void C_000724E0::func_000724E0(void)
{
    int i;
    Sprite_724E0 *e;

    unk134->func_001D5AD0();
    unk138->func_001D5AD0();
    for (i = 0; i < 5; i++) {
        arr10C[i]->func_001D5AD0();
        arr120[i]->func_001D5AD0();
    }
    if (unk98 != 0) {
        unk7C->func_001D5AD0();
    } else {
        unk78->func_001D5AD0();
    }
    if (unk80 != 0) {
        unk80->func_001D5AD0();
    }
    for (i = 0; i < 8; i++) {
        if (i == unk64 * 2 || i == unk64 * 2 + 1) {
            e = arrEC[i];
            e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
            e->b58 |= 2;
            arrEC[i]->func_001D5AD0();
        }
    }
}

void C_00072590::func_00072590(int a0) {
    unkC4 = a0;
    unkC0 = 1;
    unkC8 = 1;
}
