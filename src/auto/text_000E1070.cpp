/* 12 functions from 0x000E1070 to 0x000E2030, found by Ghidra. */
#include "common.h"

extern int D_0027FAA4;
extern int D_00277038;

void func_001ADCC0(char *buf, int size, char *fmt, int val);
void func_001AC330(char *dest, char *fmt, char *arg);

struct DelObjNumHorse {
    virtual void Destroy(int a0);
};

struct C_NumHorse_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
    void func_001B17D0(char *s);
};

struct C_NumHorse_Obj4 {
    char pad0[0xA28];
    char *fA28;
};

struct C_NumHorse_Obj2E8 {
    char pad0[4];
    C_NumHorse_Obj4 *p4;
};

struct C_NumHorse_Lookup {
    int *func_0018C160(int a);
};

struct C_NumHorse_Root {
    char pad0[0x2E8];
    C_NumHorse_Obj2E8 *p2E8;
    C_NumHorse_Lookup *p2EC;
};

extern float D_00275AEC;
extern int D_002786A0;
extern int D_00278690;
extern int D_00278678;

struct C_NumHorse_Clamp {
    char pad0[0x10];
    float f10;
    float f14;
};

struct C_NumHorse_Mid {
    C_NumHorse_Clamp *func_0018C070();
};

struct C_NumHorse_Sub {
    C_NumHorse_Clamp *func_001D5AA0();
};

extern C_NumHorse_Root *D_002A8490;

struct C_000E1_Elem {
    char pad0[0x38];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
    void func_001D5AD0();
};

struct S_002B91AC {
    char pad0[0x24];
    C_000E1_Elem *unk24;
    C_000E1_Elem *unk28;
    C_000E1_Elem *unk2C;
    C_000E1_Elem *unk30;
    char pad34[0x50 - 0x34];
    C_000E1_Elem *unk50;
    C_000E1_Elem *unk54;
    char pad58[0x68 - 0x58];
    C_000E1_Elem *unk68;
    C_000E1_Elem *unk6C;
};

extern S_002B91AC *D_002B91AC;

struct C_000E1650_Sel {
    char pad0[0x30];
    int f30;
};

struct C_000E1650_Page {
    char pad0[4];
    C_000E1650_Sel *f4;
};

/* page with a row of 8 drawables, two of which are highlighted */
struct C_000E1650 {
    char pad0[0x140];
    C_000E1650_Page *f140;
    char pad144[0x28C - 0x144];
    int f28C;
    int f290;
    char pad294[0x2C0 - 0x294];
    short f2C0;
    char pad2C2[0x2D0 - 0x2C2];
    C_000E1_Elem *arr2D0[8];
    void func_000E1650(void);
};

/* BmxUIPageTime */
struct C_000E1550 {
    char pad0[0x2D0];
    C_NumHorse_Sub *ptrs[8];
    void func_000E1550(void);
    void func_001578D0(void);
};

/* BmxUIPageNumHorsePlayers */
struct C_000E1770 {
    void *vtbl;
    char pad4[0x27C];
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    int f294;
    C_NumHorse_Widget *f298;
    int f29C;
    char pad2A0[8];
    int f2A8;
    int f2AC;
    char pad2B0[8];
    int f2B8;
    int f2BC;
    int f2C0;
    int f2C4;
    int f2C8;
    int f2CC;
    int f2D0;
    DelObjNumHorse *arr2D4[2];
    void func_001578D0();
    void func_000E1DA0();
    void func_001BE360(int a);
    void func_001BE3F0();
    C_000E1770 *func_000E1770(int a);
    void func_000E1810();
    void func_000E1C20();
    void func_000E1EA0();
    void func_000E1F00();
    void func_000E1F60();
    void func_000E1C80(float dt);
    void func_001BED00(float dt);
};

extern float D_0027DE74;
extern float D_00278C48;

void C_000E1550::func_000E1550(void)
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
    e = ptrs;
    i = 8;
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

void C_000E1650::func_000E1650(void)
{
    C_000E1_Elem *m;
    C_000E1_Elem *e;
    S_002B91AC *s;
    int n;
    int i;

    if (f28C)
        m = D_002B91AC->unk68;
    else
        m = D_002B91AC->unk50;
    m->func_001D5AD0();
    if (f290)
        m = D_002B91AC->unk6C;
    else
        m = D_002B91AC->unk54;
    m->func_001D5AD0();
    n = f140->f4->f30 - 1;
    for (i = 0; i < 8; i++) {
        e = arr2D0[i];
        e->f38 = ((int)f2C0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        if (i == n * 2 || i == n * 2 + 1) {
            e = arr2D0[i];
            e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
            e->b58 |= 2;
            arr2D0[i]->func_001D5AD0();
        } else {
            e = arr2D0[i];
            e->f38 = (e->f38 & 0xffcccccc) | 0xcccccc;
            e->b58 |= 2;
        }
    }
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
}

C_000E1770 *C_000E1770::func_000E1770(int a)
{
    func_001BE360(a);
    vtbl = &D_0027FAA4;
    f28C = 0;
    f290 = 0;
    f288 = 0;
    f294 = 0;
    f280 = 0;
    f284 = 0;
    f298 = 0;
    f29C = 2;
    f2AC = 0;
    f2A8 = 0;
    f2BC = 0;
    f2B8 = 0;
    for (int i = 0; i < 2; i++) {
        arr2D4[i] = 0;
    }
    f2C0 = 0;
    f2C4 = 0;
    f2C8 = 0;
    f2CC = 0;
    f2D0 = 0;
    return this;
}

void C_000E1770::func_000E1810()
{
    int i;
    vtbl = &D_0027FAA4;
    for (i = 0; i < 2; i++) {
        if (arr2D4[i] != 0) {
            arr2D4[i]->Destroy(1);
            arr2D4[i] = 0;
        }
    }
    func_001BE3F0();
}

void C_000E1770::func_000E1C20()
{
    char dest[0x40];
    char buf[4];

    func_001ADCC0(buf, 3, (char *)&D_00277038, f29C);
    func_001AC330(dest, D_002A8490->p2E8->p4->fA28, buf);
    f298->func_001B17D0(dest);
}

void C_000E1770::func_000E1DA0()
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
    e = (C_NumHorse_Sub **)arr2D4;
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

void C_000E1770::func_000E1EA0()
{
    f298->func_001B1980();
    func_000E1C20();
    f298->func_001B2270(0xffbfa35a);
    f298->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
}

void C_000E1770::func_000E1F00()
{
    f298->func_001B1980();
    func_000E1C20();
    f298->func_001B2270(0xffbfa35a);
    f298->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
}

void C_000E1770::func_000E1F60()
{
    C_000E1_Elem **ptr;
    C_000E1_Elem *e;
    int count;
    S_002B91AC *s;

    if (f28C) {
        D_002B91AC->unk68->func_001D5AD0();
    } else {
        D_002B91AC->unk50->func_001D5AD0();
    }
    if (f290) {
        D_002B91AC->unk6C->func_001D5AD0();
    } else {
        D_002B91AC->unk54->func_001D5AD0();
    }
    ptr = (C_000E1_Elem **)arr2D4;
    count = 2;
    do {
        e = *ptr;
        e->f38 = ((short)f2C8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        e = *ptr;
        e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
        e->b58 |= 2;
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

