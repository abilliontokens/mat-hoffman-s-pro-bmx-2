/* 13 functions from 0x000C7DF0 to 0x000C8D30, found by Ghidra. */
#include "common.h"

struct C_001D5AD0 {
    void func_001D5AD0(void);
    void func_0005E840(int a);
    void func_001D6600(void);
};

struct C_00093120 {
    void func_00093120(void);
};

struct S_000C86A0_124 {
    char pad0[0x274];
    C_00093120 *unk274;
};

struct S_002A8490_E8_4 {
    char pad0[0x288];
    int f288;
    char pad28C[0x740 - 0x28C];
    int f740;
    char pad744[0x7C8 - 0x744];
    int f7C8;
    char pad7CC[0x838 - 0x7CC];
    int f838;
    char pad83C[0x908 - 0x83C];
    int f908;
    char pad90C[0x928 - 0x90C];
    int f928;
};

struct S_002A8490_E8 {
    int f0;
    S_002A8490_E8_4 *f4;
};

struct C_000C87A0_Lookup {
    int *func_0018C160(int a);
};

struct C_000C8290_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual int v16();
};

struct C_000C8290_Sub {
    int func_0005C0F0();
};

struct C_000C8290_Mid {
    char pad0[0x2C0];
    C_000C8290_Sub *f2C0;
};

struct S_002A8490 {
    char pad0[8];
    C_000C8290_Obj **f8;
    char pad0C[0x2E0 - 0xC];
    C_000C8290_Mid *f2E0;
    char pad2E4[4];
    S_002A8490_E8 *f2E8;
    C_000C87A0_Lookup *p2EC;
};

extern S_002A8490 *D_002A8490;

struct C_NumHorse_Clamp { char pad0[0x10]; float f10, f14; };
struct C_NumHorse_Mid { C_NumHorse_Clamp *func_0018C070(); };
struct C_NumHorse_Sub { C_NumHorse_Clamp *func_001D5AA0(); };
struct C_000C8140 {
    char pad0[0x308];
    C_NumHorse_Sub *arr308[4];
    C_NumHorse_Sub *arr318[2];
    void func_000C8140(void);
    void func_001578D0(void);
};
extern float D_00275AEC;

struct C_001B1980 {
    char pad0[0x24];
    int unk24;
    char pad28[0x20];
    float unk48;
    void func_001B1980(void);
    void func_001B2270(int color);
    void func_001B1A30(float, float, float);
    void func_001B1860(int, float, int, float, int, int, int, int, float, int, float, float, int);
};

struct C_000BE360 {
    void func_001BE360(int param_1);
};

struct S_002B91AC {
    char pad0[0x24];
    C_001D5AD0 *unk24;
    C_001D5AD0 *unk28;
    C_001D5AD0 *unk2C;
    C_001D5AD0 *unk30;
    C_001D5AD0 *unk34;
    union {
        struct {
            C_001D5AD0 *unk38;
            C_001D5AD0 *unk3C;
        };
        C_001D5AD0 *arr38[2];
    };
    char pad40[0x10];
    C_001D5AD0 *unk50;
    C_001D5AD0 *unk54;
    char pad58[0x10];
    C_001D5AD0 *unk68;
    C_001D5AD0 *unk6C;
    char pad70[0x10];
    C_001D5AD0 *unk80;
    C_001D5AD0 *unk84;
    void func_000BF860(int a, int b, int c, int d);
};

extern float D_002755E8;

struct C_000C8590 {
    char pad0[0x2DC];
    int unk2DC;
    int unk2E0;
    char pad2E4[8];
    int unk2EC;
    char pad2F0[8];
    int unk2F8;
    float unk2FC;
    int unk300;
    char pad304[0x1C];
    C_001B1980 *unk320[9];
    int unk344[9];
    float unk368[9];
    void func_000C7DF0(void);
    void func_000C83E0(void);
    void func_00157960(void);
    void func_000C8590(void);
};

struct C_000C8090 {
    char pad0[0x2DC];
    int unk2DC;
    char pad2E0[0x40];
    C_001B1980 *unk320[9];
    int unk344[9];
    float unk368[9];
    void func_000C8090(void);
    void func_000C7FC0(void);
};

struct C_000C83E0 {
    char pad0[0x280];
    int unk280;
    int unk284;
    char pad288[0x80];
    C_001D5AD0 *unk308[4];
    C_001D5AD0 *unk318[2];
    void func_000C83E0(void);
};

struct C_000C85B0 {
    void *vtbl;
    char pad4[0x27C];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    char pad290[0x4];
    int unk294;
    int unk298;
    int unk29C;
    int unk2A0;
    int unk2A4;
    char pad2A8[0x8];
    int unk2B0;
    char pad2B4[0x4];
    int unk2B8;
    int unk2BC;
    int unk2C0;
    int unk2C4;
    int unk2C8;
    int unk2CC;
    int unk2D0;
    int unk2D4;
    struct S_000C8660_Obj *unk2D8[4];
    C_000C85B0 *func_000C85B0(int param_1);
};

struct S_000C8660_Obj {
    virtual void destroying(int flag);
    char pad4[0x24];
    int f28;
    char pad2C[0x10];
    float f3C;
    float f40;
    float f44;
    float f48;
    char pad4C[0xC];
    unsigned char f58;
    S_000C8660_Obj *func_001D5760(void);
    void func_001D5810(void *a, float b, float c, int d);
    C_NumHorse_Clamp *func_001D5AA0(void);
};

void *func_001E8A44(int size);
extern int D_002786B0;
extern float D_0027E140;
extern int D_002786A0, D_00278690, D_00278678;

struct BmxUIPageOptions {
    void *vtbl;
    char pad4[0x2D8 - 4];
    S_000C8660_Obj *unk2D8[4];
    BmxUIPageOptions *func_000C87A0(int a, int b, int c);
    void func_001BE4F0(int a, int b, int c);
    void func_000C8660(void);
    void func_000C86A0(void);
    void func_000C88E0(void);
    void func_001578D0(void);
    void func_001BE3F0(void);
};

/* BmxUIPageTwoPlayer */
struct C_000C8290 {
    void *vtbl;
    char pad4[0x27C];
    int f280;
    int f284;
    char pad288[8];
    int f290;
    char pad294[4];
    int f298;
    char pad29C[0x2AC - 0x29C];
    int f2AC;
    int f2B0;
    int f2B4;
    int f2B8;
    int f2BC;
    int f2C0;
    char pad2C4[0x2D8 - 0x2C4];
    int f2D8;
    char pad2DC[0x2E8 - 0x2DC];
    int f2E8;
    char pad2EC[8];
    int f2F4;
    void func_000C8290(void);
};

struct C_000C86A0 {
    void *vtbl;
    char pad4[0x120];
    S_000C86A0_124 *unk124;
    char pad128[0x280 - 0x128];
    int unk280;
    int unk284;
    char pad288[0xC];
    int unk294;
    int unk298;
    int unk29C;
    int unk2A0;
    int unk2A4;
    char pad2A8[0x10];
    C_00093120 *unk2B8;
    int unk2BC;
    int unk2C0;
    void func_000C86A0(void);
};

struct E_000C8490 {
    char pad0[0x38];
    unsigned int unk38;
    char pad3C[0x1C];
    unsigned char unk58;
};

struct C_000C8490 {
    char pad0[0x2CC];
    short unk2CC;
    char pad2CE[0x3A];
    E_000C8490 *unk308[6];
    void func_000C8490(void);
    void func_001BF000(void);
};

extern S_002B91AC *D_002B91AC;
extern float D_00279B50;
extern float D_00275994;
extern void *D_0027E334;

void C_000C8590::func_000C7DF0(void) {
    int i;
    for (i = 0; i < 2; i++) {
        D_002B91AC->arr38[i]->func_001D6600();
    }
    D_002B91AC->unk34->func_001D6600();
    if (unk300 != 0) {
        for (i = 0; i < 9; i++) {
            unk320[i]->func_001B1980();
            if (unk344[i] != 0) {
                unk320[i]->func_001B2270(0xff606060);
                goto plain;
            } else if (i == unk2DC) {
                unk320[i]->func_001B2270(0xffbfa35a);
                if (unk2EC != 0) unk320[i]->func_001B1A30(320.0f, unk368[i], 0.5f);
                unk320[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
            } else if (i == unk2E0) {
                unk320[i]->func_001B2270(0xffcccccc);
                if (unk2EC != 0) unk320[i]->func_001B1A30(320.0f, unk368[i], 0.5f);
                unk320[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
            } else {
                unk320[i]->func_001B2270(0xffcccccc);
                if (unk2EC != 0) unk320[i]->func_001B1A30(320.0f, unk368[i], 0.5f);
plain:
                unk320[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, (int)0xbf800000, 0xff, 1.0f, 0, 0, 0, 0);
            }
            if (unk368[i] > D_00279B50 || unk368[i] < D_00275994) {
                unk320[i]->func_001B1980();
            }
        }
        unk2EC = 0;
        unk300 = 0;
    }
    if (unk2FC >= D_002755E8) unk2F8 = 0;
}

void C_000C8090::func_000C7FC0(void) {
    int i;
    for (i = 0; i < 9; i++) {
        unk320[i]->func_001B1980();
        if (unk344[i] != 0) {
            unk320[i]->func_001B2270(0xff606060);
            unk320[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        } else if (i == unk2DC) {
            unk320[i]->func_001B2270(0xffbfa35a);
            unk320[i]->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
        } else {
            unk320[i]->func_001B2270(0xffcccccc);
            unk320[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        }
        if (unk368[i] > D_00279B50 || unk368[i] < D_00275994) {
            unk320[i]->func_001B1980();
        }
    }
}

void C_000C8090::func_000C8090(void) {
    int i;
    for (i = 0; i < 9; i++) {
        unk320[i]->func_001B1980();
        if (unk344[i] != 0) {
            unk320[i]->func_001B2270(0xff606060);
        } else if (i == unk2DC) {
            unk320[i]->func_001B2270(0xffbfa35a);
        } else {
            unk320[i]->func_001B2270(0xffcccccc);
        }
        unk320[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        if (unk368[i] > D_00279B50 || unk368[i] < D_00275994) {
            unk320[i]->func_001B1980();
        }
    }
}

void C_000C8140::func_000C8140(void)
{
    int ids[3];
    int i;
    int *r;
    C_NumHorse_Clamp *o;
    C_NumHorse_Sub **e;
    C_000C87A0_Lookup *lk;

    ids[0] = (int)&D_00278690;
    ids[1] = (int)&D_002786A0;
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
    e = arr308;
    i = 4;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    e = arr318;
    i = 2;
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

void C_000C8290::func_000C8290(void)
{
    int z = 0;
    int i;

    f2B8 = z;
    for (i = 5; i < 13; i++) {
        C_000C8290_Obj *o = D_002A8490->f8[i];
        if (o != 0 && o->v16() == 1) {
            f2B8++;
        }
    }
    f284 = z;
    f280 = z;
    f290 = z;
    f298 = 1;
    f2AC = z;
    f2B4 = z;
    f2B0 = z;
    f2C0 = z;
    f2BC = z;
    f2D8 = z;
    D_002B91AC->unk34->func_0005E840(D_002A8490->f2E8->f4->f288);
    D_002B91AC->func_000BF860(z, 0x1EB, 0x184, z);
    D_002B91AC->unk38->func_0005E840(D_002A8490->f2E8->f4->f7C8);
    D_002B91AC->func_000BF860(1, 0x17B, 0x184, z);
    D_002B91AC->unk3C->func_0005E840(D_002A8490->f2E8->f4->f838);
    if (f2F4 != z) {
        if (D_002A8490->f2E0->f2C0->func_0005C0F0() != z && f2F4 != z && f2E8 == 8) {
            f2F4 = z;
        }
    }
}

void C_000C83E0::func_000C83E0(void) {
    C_001D5AD0 *p;
    C_001D5AD0 **ptr;
    S_002B91AC *s;
    int count;
    p = unk284 ? D_002B91AC->unk68 : D_002B91AC->unk50;
    p->func_001D5AD0();
    p = unk280 ? D_002B91AC->unk6C : D_002B91AC->unk54;
    p->func_001D5AD0();
    ptr = unk308;
    count = 4;
    do {
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    ptr = unk318;
    count = 2;
    do {
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
}

void C_000C8490::func_000C8490(void) {
    for (int i = 0; i < 6; i++) {
        E_000C8490 *e = unk308[i];
        e->unk38 = ((int)unk2CC << 24) | (e->unk38 & 0xffffff);
        e->unk58 |= 2;
    }
    func_001BF000();
}

void C_000C8590::func_000C8590(void) {
    func_000C7DF0();
    func_000C83E0();
    func_00157960();
}

C_000C85B0 *C_000C85B0::func_000C85B0(int param_1) {
    S_000C8660_Obj **e;
    int i;

    ((C_000BE360 *)this)->func_001BE360(param_1);
    unk2B8 = 0;
    unk288 = 0;
    unk28C = 0;
    unk284 = 0;
    unk280 = 0;
    unk298 = 0;
    unk294 = 0;
    unk29C = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2C0 = 0;
    unk2BC = 0;
    *(void **)this = &D_0027E334;
    unk2B0 = 1;
    e = unk2D8;
    i = 4;
    do {
        *e = 0;
        e++;
        i--;
    } while (i != 0);
    unk2C4 = 0;
    unk2C8 = 0;
    unk2CC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    return this;
}

void BmxUIPageOptions::func_000C8660(void)
{
    int i;
    vtbl = (void *)&D_0027E334;
    for (i = 0; i < 4; i++) {
        if (unk2D8[i] != 0) {
            unk2D8[i]->destroying(1);
        }
        unk2D8[i] = 0;
    }
    func_001BE3F0();
}

void C_000C86A0::func_000C86A0(void)
{
    unk280 = 0;
    unk284 = 0;
    unk298 = 0;
    unk294 = 0;
    unk29C = 1;
    unk2A4 = 0;
    unk2C0 = 0;
    unk2BC = 0;
    unk2B8 = unk124->unk274;
    unk2B8->func_00093120();
    D_002B91AC->unk34->func_0005E840(D_002A8490->f2E8->f4->f740);
    D_002B91AC->func_000BF860(0, 0x1EB, 0x184, 0);
    D_002B91AC->unk38->func_0005E840(D_002A8490->f2E8->f4->f7C8);
    D_002B91AC->unk80->func_0005E840(D_002A8490->f2E8->f4->f928);
    D_002B91AC->unk84->func_0005E840(D_002A8490->f2E8->f4->f908);
}

BmxUIPageOptions *BmxUIPageOptions::func_000C87A0(int a, int b, int c)
{
    int i;
    S_000C8660_Obj *p;
    S_000C8660_Obj *o;

    func_001BE4F0(a, b, c);
    D_002A8490->p2EC->func_0018C160((int)&D_00278690);
    D_002A8490->p2EC->func_0018C160((int)&D_00278678);
    D_002A8490->p2EC->func_0018C160((int)&D_002786A0);
    i = 0;
    do {
        p = (S_000C8660_Obj *)func_001E8A44(0x64);
        p = p != 0 ? p->func_001D5760() : 0;
        unk2D8[i] = p;
        if (i % 2 == 0) {
            p->func_001D5810(&D_002786B0, 100.0f, (float)(i / 2 * 40) + D_0027E140, 0);
        } else {
            p->func_001D5810(&D_002786B0, 321.0f, (float)(i / 2 * 40) + D_0027E140, 0);
            o = unk2D8[i];
            o->f3C = 1.0f;
            o->f40 = 0;
            o->f44 = 0;
            o->f48 = 1.0f;
            o->f58 |= 4;
        }
        o = unk2D8[i];
        if (o->f28 != 0x435d0000) {
            o->f28 = 0x435d0000;
            o->f58 |= 1;
        }
        i++;
    } while (i < 4);
    return this;
}

void BmxUIPageOptions::func_000C88E0(void)
{
    int ids[3];
    int i;
    int *r;
    C_NumHorse_Clamp *o;
    S_000C8660_Obj **e;
    C_000C87A0_Lookup *lk;

    ids[0] = (int)&D_00278690;
    ids[1] = (int)&D_002786A0;
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
    e = unk2D8;
    i = 4;
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

