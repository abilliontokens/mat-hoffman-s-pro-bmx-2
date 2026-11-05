/* 9 functions from 0x000EAC40 to 0x000EBB70, found by Ghidra. */
#include "common.h"

extern int D_00281B34;

struct C_NumHorse_Lookup { int *func_0018C160(int a); };
/* string table of the settings record */
struct S_000EB460_Strings {
    char pad0[0x7C8];
    char *f7C8;
    char pad7CC[0x900 - 0x7CC];
    char *f900;
    char pad904[0x918 - 0x904];
    char *f918;
    char pad91C[0x978 - 0x91C];
    char *f978;
};

struct S_000EB460_Mid {
    int f0;
    S_000EB460_Strings *f4;
};

struct C_NumHorse_Root { char pad0[0x2E8]; S_000EB460_Mid *p2E8; C_NumHorse_Lookup *p2EC; };
struct C_NumHorse_Clamp { char pad0[0x10]; float f10, f14; };
struct C_NumHorse_Mid { C_NumHorse_Clamp *func_0018C070(); };
struct C_NumHorse_Sub { C_NumHorse_Clamp *func_001D5AA0(); };
extern C_NumHorse_Root *D_002A8490;

/* the HUD: text labels at +0x34/+0x38/+0x80/+0x84, func_000BF860 places one */
struct S_000EB460_Label {
    void func_0005E840(char *s);
};

struct S_000EB460_Hud {
    char pad0[0x34];
    S_000EB460_Label *f34;
    S_000EB460_Label *f38;
    char pad3C[0x80 - 0x3C];
    S_000EB460_Label *f80;
    S_000EB460_Label *f84;
    void func_000BF860(int a, int b, int c, int d);
};

extern S_000EB460_Hud *D_002B91AC;
extern float D_00275AEC;
extern int D_002786A0, D_00278690, D_00278678;
struct BmxUIPageHOFTitle {
    char pad0[0x2d0];
    C_NumHorse_Sub *arr2D0[12];
    void func_000EB0F0();
    void func_001578D0();
    void func_000C5E40(void);
    void func_000EB1F0(void);
    void func_00157960(void);
    void func_000EB350(void);
};

struct S_000EB420_Obj {
    virtual void destroying(int flag);
    char pad4[0x24];
    int f28;
    char pad2C[0x10];
    int f3C;
    int f40;
    int f44;
    int f48;
    char pad4C[0xC];
    unsigned char f58;
    S_000EB420_Obj *func_001D5760(void);
    void func_001D5810(void *a, float b, float c, int d);
};

void *func_001E8A44(int size);
extern int D_002786B0;
extern float D_0027E140;

struct BmxUIPageMedia {
    void *vtbl;
    char pad_4[0x280 - 4];
    S_000EB420_Obj *unk280[4];
    int unk290;
    char pad_294[4];
    int unk298;
    int unk29C;
    int unk2A0;
    int unk2A4;
    int unk2A8;
    int unk2AC;
    int unk2B0;
    int unk2B4;
    int unk2B8;
    int unk2BC;
    int unk2C0;
    int unk2C4;
    int unk2C8;
    int unk2CC;
    int unk2D0;
    int unk2D4;
    int unk2D8;
    BmxUIPageMedia *func_000EB370(void *param_1);
    void func_000EB460(void);
    void func_000EB420(void);
    void func_001BE360(void *param_1);
    void func_001BE3F0(void);
    void func_001BE4F0(int a, int b, int c);
    BmxUIPageMedia *func_000EB570(int a, int b, int c);
};

void BmxUIPageHOFTitle::func_000EB0F0()
{
    int ids[3];
    int i;
    int *r;
    C_NumHorse_Clamp *o;
    C_NumHorse_Sub **e;
    C_NumHorse_Lookup *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((C_NumHorse_Mid *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = arr2D0;
    i = 12;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    func_001578D0();
}

void BmxUIPageHOFTitle::func_000EB350(void)
{
    func_000C5E40();
    func_000EB1F0();
    func_00157960();
}

BmxUIPageMedia *BmxUIPageMedia::func_000EB370(void *param_1)
{
    S_000EB420_Obj *zero = 0;
    func_001BE360(param_1);
    unk29C = 0;
    unk2B0 = 0;
    unk2AC = 0;
    unk298 = 0;
    unk2A8 = 0;
    unk2A4 = 0;
    unk2A0 = 0;
    unk2B4 = 0;
    unk2B8 = 0;
    unk2BC = 0;
    unk2C4 = 0;
    unk2C0 = 0;
    vtbl = (void *)&D_00281B34;
    unk290 = 1;
    unk280[0] = zero;
    unk280[1] = zero;
    unk280[2] = zero;
    unk280[3] = zero;
    unk2C8 = 0;
    unk2CC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    unk2D8 = 0;
    return this;
}

void BmxUIPageMedia::func_000EB420(void)
{
    int i;
    vtbl = (void *)&D_00281B34;
    for (i = 0; i < 4; i++) {
        if (unk280[i] != 0) {
            unk280[i]->destroying(1);
            unk280[i] = 0;
        }
    }
    func_001BE3F0();
}

void BmxUIPageMedia::func_000EB460(void)
{
    unk2B4 = 1;
    unk29C = 0;
    unk2B0 = 0;
    unk2AC = 0;
    unk298 = 0;
    unk2A0 = 0;
    unk2BC = 0;
    unk2C4 = 0;
    unk2C0 = 0;
    unk2C8 = 0;
    unk2CC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    unk2D8 = 0;
    D_002B91AC->f34->func_0005E840(D_002A8490->p2E8->f4->f918);
    D_002B91AC->func_000BF860(0, 0x1EB, 0x184, 0);
    D_002B91AC->f38->func_0005E840(D_002A8490->p2E8->f4->f7C8);
    D_002B91AC->f80->func_0005E840(D_002A8490->p2E8->f4->f900);
    D_002B91AC->f84->func_0005E840(D_002A8490->p2E8->f4->f978);
}

