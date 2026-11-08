/* 9 functions from 0x000DB310 to 0x000DC270, found by Ghidra. */
#include "common.h"

struct C_DB6_Widget { void func_0005E840(int a); };
struct C_DB6_Manager { void func_000BF860(int a, int b, int c, int d); };
struct C_DB6 { void func_000DB6C0(); };

struct C_001D5AD0 {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1c];
    unsigned char f58;
    void func_001D5AD0();
};
struct S_002B91AC {
    char pad0[0x24];
    C_001D5AD0 *unk24, *unk28, *unk2C, *unk30;
    char pad34[0x1c];
    C_001D5AD0 *unk50, *unk54;
    char pad58[0x10];
    C_001D5AD0 *unk68, *unk6C;
};
extern S_002B91AC *D_002B91AC;
struct C_000DB4B0 {
    char pad0[0x280];
    int unk280, unk284;
    char pad288[0x54];
    short unk2DC;
    char pad2DE[0x36];
    C_001D5AD0 *arr314[4], *arr324[2];
    void func_000DB4B0();
};

extern char D_0027F7D4[];

struct C_Lim { char pad0[0x10]; float f10; float f14; };
struct C_Lst { C_Lim *func_0018C160(char *name); };
struct C_Ptr { C_Lim *func_0018C070(); };
struct C_Obj2 { C_Lim *func_001D5AA0(); };
struct C_G { char pad0[0x2ec]; C_Lst *f2ec; };
struct C_Pg { char pad0[0x29c]; C_Obj2 *f29c; void func_001578D0(); void func_000DBE00(); };
extern C_G *D_002A8490;
extern float D_00275AEC;
extern char D_002786A0[], D_00278690[], D_00278678[];

struct C_001BE360 { void func_001BE360(int a); };
extern int D_0027F724;
struct C_000DB5B0 {
    void *vtbl;
    char pad4[0x27c];
    int f280, f284, f288, f28C, f290, f294, f298, f29C, f2A0, f2A4, f2A8, f2AC, f2B0, f2B4, f2B8, f2BC, f2C0, f2C4, f2C8, f2CC, f2D0, f2D4, f2D8, f2DC, f2E0, f2E4, f2E8, f2EC, f2F0, f2F4, f2F8, f2FC, f300, f304, f308;
    char pad30C[4];
    int a310[10];
    int a338[10];
    C_000DB5B0 *func_000DB5B0(int a);
};

struct C_000DB310_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1A30(float a1, float a2, float a3);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, float a12, int a13);
};


struct C_000DBC40 {
    char pad0[0x2a0];
    int f2A0;
    int f2A4;
    int f2A8;
    char pad2AC[8];
    C_000DB310_Widget *f2B4;
    char pad2B8[0x58];
    C_000DB310_Widget *f310[1];
    void func_000DBC40();
    void func_000DBD20();
};

struct S_000DBC00_G {
    char pad0[0x10];
    int f10;
};

struct S_000DBC00_F {
    char pad0[0x1a4];
    S_000DBC00_G *f1a4;
};

struct S_000DBC00_D {
    char pad0[0x28];
    S_000DBC00_F **f28;
};

struct S_000DBC00_C {
    char pad0[0x2c];
    S_000DBC00_D *f2c;
    int func_0001B3C0(const char *name);
};

struct S_000DBC00_B {
    char pad0[0x484];
    S_000DBC00_C *f484;
};

struct S_000DBC00_A {
    char pad0[0x150];
    S_000DBC00_B *f150;
};

struct C_000DB310 {
    char pad0[0x124];
    S_000DBC00_A *f124;
    char pad128[0x18c];
    int f2B4;
    char pad2B8[0x30];
    C_000DB310_Widget *f2E8[11];
    char pad314[0x18];
    float f32C[11];
    void func_000DB310();
    void func_000DB3E0();
    int func_000DBC00();
};

void C_000DB310::func_000DB310() {
    int i;

    for (i = 0; i < 11; i++) {
        f2E8[i]->func_001B1980();
        if (i == f2B4) {
            f2E8[i]->func_001B2270(0xffbfa35a);
            f2E8[i]->func_001B1A30(320.0f, f32C[i] + 4.0f, 0.0f);
            f2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0, 1.45f, 0, 0.25f, 0, 0);
        } else {
            f2E8[i]->func_001B2270(0xffcccccc);
            f2E8[i]->func_001B1A30(320.0f, f32C[i], 0.0f);
            f2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        }
    }
}

void C_000DB310::func_000DB3E0() {
    int i;
    for (i = 0; i < 11; i++) {
        f2E8[i]->func_001B1980();
        if (i == f2B4) {
            f2E8[i]->func_001B2270(0xffbfa35a);
            f2E8[i]->func_001B1A30(320.0f, f32C[i] + 4.0f, 0.0f);
            f2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.25f, 0.2f, 0);
        } else {
            f2E8[i]->func_001B2270(0xffcccccc);
            f2E8[i]->func_001B1A30(320.0f, f32C[i], 0.0f);
            f2E8[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        }
    }
}

void C_000DB4B0::func_000DB4B0() {
    C_001D5AD0 *p;
    S_002B91AC *s;
    C_001D5AD0 **ptr;
    int count;
    p = unk280 ? D_002B91AC->unk68 : D_002B91AC->unk50;
    p->func_001D5AD0();
    p = unk284 ? D_002B91AC->unk6C : D_002B91AC->unk54;
    p->func_001D5AD0();
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
    ptr = arr314; count = 4;
    do {
        p = *ptr;
        unsigned int color = (p->f38 & 0xffffff) | (unk2DC << 24);
        unsigned char flags = p->f58 | 2;
        p->f38 = color;
        p->f58 = flags;
        (*ptr)->func_001D5AD0();
        ptr++; count--;
    } while (count != 0);
    ptr = arr324; count = 2;
    do {
        p = *ptr;
        unsigned int color = (p->f38 & 0xffffff) | (unk2DC << 24);
        unsigned char flags = p->f58 | 2;
        p->f38 = color;
        p->f58 = flags;
        (*ptr)->func_001D5AD0();
        ptr++; count--;
    } while (count != 0);
}

C_000DB5B0 *C_000DB5B0::func_000DB5B0(int a) {
    int i;
    ((C_001BE360 *)this)->func_001BE360(a);
    vtbl = &D_0027F724;
    f290 = 0; f28C = 0; f280 = 0; f284 = 0; f294 = 0; f288 = 0; f298 = 0; f2A0 = 0; f29C = 0;
    for (i = 0; i < 10; i++) {
        a310[i] = 0;
        a338[i] = 0;
    }
    f2A8 = 0; f2AC = 0; f2B0 = 0; f2A4 = 0; f2B4 = 0; f2B8 = 0; f2BC = 0; f2C4 = 0; f2C8 = 0; f2C0 = 0;
    f2D0 = 0; f2D4 = 0; f2D8 = 0; f2DC = 0; f2E0 = 0; f2E8 = 0; f2E4 = 0; f2EC = 0; f2F0 = 0; f2F4 = 0;
    f2F8 = 0; f2FC = 0; f300 = 0; f304 = 0; f308 = 0;
    f2CC = -1;
    return this;
}

void C_DB6::func_000DB6C0() {
    char *p = (char *)this;
    int *owner = *(int **)(p + 0x124);
    *(int *)(p+0x2a0)=0; *(int *)(p+0x290)=0; *(int *)(p+0x28c)=0;
    *(int *)(p+0x294)=0; *(int *)(p+0x2ac)=0; *(int *)(p+0x2a8)=0;
    *(int *)(p+0x2bc)=owner[0x274/4];
    *(int *)(p+0x2c4)=1; *(int *)(p+0x2c0)=0; *(int *)(p+0x2cc)=-1;
    *(int *)(p+0x2e8)=0; *(int *)(p+0x2e4)=0; *(int *)(p+0x2d0)=0; *(int *)(p+0x2d4)=0;
    *(int *)(p+0x2f0)=0; *(int *)(p+0x2f4)=0; *(int *)(p+0x2f8)=0; *(int *)(p+0x2fc)=0;
    *(int *)(p+0x300)=0; *(int *)(p+0x304)=0; *(int *)(p+0x308)=0; *(int *)(p+0x30c)=0;
    ((C_DB6_Manager *)D_002B91AC)->func_000BF860(0,491,388,0);
    (*(C_DB6_Widget **)((char *)D_002B91AC+0x38))->func_0005E840((*(int **)(*(char **)((char *)D_002A8490+0x2e8)+4))[0x7b8/4]);
    ((C_DB6_Manager *)D_002B91AC)->func_000BF860(1,365,388,0);
    (*(C_DB6_Widget **)((char *)D_002B91AC+0x3c))->func_0005E840((*(int **)(*(char **)((char *)D_002A8490+0x2e8)+4))[0x7c0/4]);
    (*(C_DB6_Widget **)((char *)D_002B91AC+0x80))->func_0005E840((*(int **)(*(char **)((char *)D_002A8490+0x2e8)+4))[0x918/4]);
    (*(C_DB6_Widget **)((char *)D_002B91AC+0x84))->func_0005E840((*(int **)(*(char **)((char *)D_002A8490+0x2e8)+4))[0x928/4]);
}

int C_000DB310::func_000DBC00() {
    S_000DBC00_A *a = f124;
    int idx = a->f150->f484->func_0001B3C0(D_0027F7D4);
    return a->f150->f484->f2c->f28[idx]->f1a4->f10;
}

void C_000DBC40::func_000DBC40() {
    int i;
    for (i = 0; i < f2A0; i++) {
        f310[i]->func_001B1980();
        if (i == f2A8) {
            f310[i]->func_001B2270(0xffbfa35a);
            f310[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.25f, 0.2f, 0);
        } else {
            f310[i]->func_001B2270(0xffcccccc);
            f310[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0.0f, 0);
        }
    }
    f2B4->func_001B1980();
    f2B4->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.25f, 0.2f, 0);
}

void C_000DBC40::func_000DBD20() {
    int i;
    for (i = 0; i < f2A0; i++) {
        f310[i]->func_001B1980();
        if (i == f2A8) {
            f310[i]->func_001B2270(0xffbfa35a);
            f310[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.45f, 0, 0.25f, 0.2f, 0);
        } else {
            f310[i]->func_001B2270(0xffcccccc);
            f310[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0.0f, 0);
        }
    }
    f2B4->func_001B1980();
    f2B4->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.45f, 0, 0.25f, 0.2f, 0);
}

void C_Pg::func_000DBE00() {
    char *names[3];
    int i;
    names[0] = D_002786A0; names[1] = D_00278690; names[2] = D_00278678;
    for (i = 0; i < 3; i++) {
        C_Lst *lst = D_002A8490->f2ec;
        C_Lim *p = lst->func_0018C160(names[i]);
        if (p) {
            C_Ptr **q = (C_Ptr **)p;
            if (*q) {
                C_Lim *l = (*q)->func_0018C070();
                if (D_00275AEC > l->f10) l->f10 = 10.0f;
                if (D_00275AEC < l->f14 || l->f14 > l->f10) l->f14 = 10.0f;
            }
        }
    }
    if (f29c) {
        C_Lim *l = f29c->func_001D5AA0();
        if (D_00275AEC > l->f10) l->f10 = 10.0f;
        if (D_00275AEC < l->f14 || l->f14 > l->f10) l->f14 = 10.0f;
    }
    func_001578D0();
}

