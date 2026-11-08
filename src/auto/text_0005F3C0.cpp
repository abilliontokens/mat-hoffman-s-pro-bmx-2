/* 10 functions from 0x0005F3C0 to 0x00060370, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
struct C_00060350 {
    char pad0[0x11C];
    int unk11C;
    char pad120[0x8];
    int unk128;
    int unk12C;
    void func_00060350(int a0);
};

struct C_000601B0 {
    void func_000601B0(void);
};

extern float D_00275AEC;

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct S_0005FBD0_Obj {
    char pad0[0x10];
    float f10;
    float f14;
};

struct C_001D5AA0 {
    S_0005FBD0_Obj *func_001D5AA0(void);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_001C4D50 {
    void func_001C4D50(int a);
};

struct S_0005F3C0_2E0 {
    int f0;
    volatile int f4;
};

struct S_0005F3C0_8490 {
    char pad0[0x2E0];
    S_0005F3C0_2E0 *f2E0;
    char pad2E4[0x4];
    struct S_0005F3C0_2E8 *f2E8;
    struct Lookup_5F *f2EC;
};
struct S_0005F3C0_2E8 { int f0; int *f4; };
struct Label_5F3 {
    char pad0[0x28];
    float f28;
    char pad2C[0x10];
    float a3C;
    float b40;
    float c44;
    float d48;
    char pad4C[0xC];
    u8 flags;
    void SetY(float y) { if (f28 != y) { flags |= 1; f28 = y; } }
    void SetW() { SetY(221.0f); }
    void SetQuad() { a3C = 1.0f; d48 = 1.0f; int f = flags; f |= 4; b40 = 0.0f; c44 = 0.0f; flags = (u8)f; }
    Label_5F3 *func_001D5760(void);
    void func_001D5810(char *font, float x, float y, int a);
    void func_001D5810(const char *font, float x, float y, int a);
};
struct Widget_5F3 {
    Widget_5F3 *func_001B12C0(int a);
    void func_001B1580(void *a, void *b, int text, int c);
    void func_001B13A0(void *a, void *b, int c, int d);
    void func_001B19C0(int x, int y, int a);
    void func_001B2270(u32 color);
    void func_001B19A0(int a);
    void func_001B17D0(int text);
};
struct Text_5F3 {
    int f0;
    int f4;
    int f8;
    char padC[0x28];
    int f34;
    char pad38[0x10];
    u32 f48;
    char pad4C[0x2];
    u8 f4E;
    Text_5F3 *func_001D5E90(void);
    void func_001D6190(int font, int text, void *a);
};
void *func_001E8A44(unsigned int size);
extern char D_002A60B0[];
extern char D_002A5FA8[];
extern char D_002A5870[];
extern char D_00275678[];
extern char D_002786B0[];
extern int D_0028F5E0;
extern float D_002755E8, D_002757F0, D_002786B8;
struct Mid_5F { S_0005FBD0_Obj *func_0018C070(); };
struct Lookup_5F { int *func_0018C160(int); };
extern int D_002786A0, D_00278690, D_00278678;
#define CLAMP(p) { S_0005FBD0_Obj *o = ((C_001D5AA0 *)(p))->func_001D5AA0(); if (D_00275AEC > o->f10) o->f10 = 10.0f; if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f; }
extern S_0005F3C0_8490 *D_002A8490;

struct BmxInGameMenuSub {
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
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    char pad4[0x1D];
    u8 unk21;
    char pad22[0x136];
    C_001C4D50 *unk158;
    char pad15C[0x98];
    int unk1F4;
    void func_00032A40();
};

struct BmxInGameMenu {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18(int a);
    virtual void vf19();
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual void vf23();
    virtual void vf24();
    virtual void vf25();
    virtual void vf26();
    virtual void vf27();
    virtual void vf28();
    virtual void vf29();
    virtual void vf30();
    virtual void vf31();
    virtual void vf32();
    char pad4[0x60];
    C_001D5AA0 *unk64[8];
    struct Widget_5F3 *unk84;
    struct Widget_5F3 *unk88;
    struct Widget_5F3 *unk8C;
    struct Widget_5F3 *unk90;
    C_001D5AD0 *unk94;
    C_001D5AD0 *unk98;
    int unk9C;
    int unkA0;
    int unkA4;
    int unkA8;
    C_001D5AD0 *unkAC[5];
    C_001D5AD0 *unkC0[5];
    C_001D5AD0 *unkD4;
    C_001D5AD0 *unkD8;
    C_001D5AD0 *unkDC;
    C_001D5AD0 *unkE0;
    struct Text_5F3 *unkE4;
    struct Text_5F3 *unkE8;
    char padEC[0x8];
    void func_001577A0(void *w, int n);
    int unkF4;
    int unkF8;
    int unkFC;
    int unk100;
    BmxInGameMenuSub *unk104;
    int unk108;
    C_001D5AD0 *unk10C;
    int unk110;
    int unk114;
    int unk118;
    int unk11C;
    int unk120;
    int pad124;
    int unk128;
    int pad12C;
    int unk130;
    void func_0005F3C0(void);
    void func_0005FBD0(void);
    void func_0005F960(void);
    void func_001578D0(void);
    int func_00060110(void);
    void func_000601D0(void);
    void func_00060220(void);
    void func_000602B0(void);
    int func_0005FC30(void);
};

struct Obj_5FC { void func_0005E840(int a); void func_001D6600(void); void func_001B1980(void); void func_00157960(void); void func_0012B2B0(void *a, void *b); };
extern "C" int func_001ADCC0(char *buf, int n, const char *fmt, ...);
extern char D_002786BC[];
struct S6_5FC { int r[4]; int x, y; };
#define AT(t, o) (*(t *)((char *)this + (o)))
#define GAT(t, o) (*(t *)((char *)D_002A8490 + (o)))
#define AT(t, o) (*(t *)((char *)this + (o)))
#define GAT(t, o) (*(t *)((char *)D_002A8490 + (o)))


void BmxInGameMenu::func_0005F3C0(void)
{
    int *r;
    int font;
    int i;
    D_002A8490->f2EC->func_0018C160((int)&D_002786A0);
    r = D_002A8490->f2EC->func_0018C160((int)&D_00278690);
    font = r ? *r : 0;
    D_002A8490->f2EC->func_0018C160((int)&D_00278678);
    strcpy(D_002A60B0, "global\\textures\\");
    for (i = 0; i < 8; i++) {
        Label_5F3 *m = (Label_5F3 *)func_001E8A44(0x64);
        unk64[i] = (C_001D5AA0 *)(m ? m->func_001D5760() : 0);
        if (i % 2 == 0) {
            ((Label_5F3 *)unk64[i])->func_001D5810(D_002786B0, 100.0f, i * D_002757F0 * D_002755E8 + D_002786B8, 0);
        } else {
            ((Label_5F3 *)unk64[i])->func_001D5810((const char *)D_002786B0, 321.0f, (i - 1) * D_002757F0 * D_002755E8 + D_002786B8, 0);
        }
        ((Label_5F3 *)unk64[i])->SetQuad();
        ((Label_5F3 *)unk64[i])->SetY(221.0f);
    }
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);

    Widget_5F3 *w = (Widget_5F3 *)func_001E8A44(0x184);
    unk84 = w ? w->func_001B12C0(1) : 0;
    unk84->func_001B1580(&D_00278690, &D_00278690, D_002A8490->f2E8->f4[0x7a0 / 4], 0);
    unk9C = 0x75;
    unk84->func_001B19C0(0x140, 0x75, 0);
    unk84->func_001B2270(0xffcccccc);
    unk84->func_001B19A0(D_0028F5E0);
    func_001577A0(unk84, -1);

    w = (Widget_5F3 *)func_001E8A44(0x184);
    unk8C = w ? w->func_001B12C0(1) : 0;
    unk8C->func_001B13A0(&D_00278690, &D_00278690, 0, 0x28);
    unkA4 = 0xc5;
    unk8C->func_001B19C0(0x140, 0xc5, 0);
    unk8C->func_001B2270(0xffcccccc);
    unk8C->func_001B19A0(D_0028F5E0);
    unk8C->func_001B17D0(D_002A8490->f2E8->f4[0xea0 / 4]);
    func_001577A0(unk8C, -1);

    w = (Widget_5F3 *)func_001E8A44(0x184);
    unk88 = w ? w->func_001B12C0(1) : 0;
    unk88->func_001B1580(&D_00278690, &D_00278690, D_002A8490->f2E8->f4[0x7d8 / 4], 0);
    unkA0 = 0x9d;
    unk88->func_001B19C0(0x140, 0x9d, 0);
    unk88->func_001B2270(0xffcccccc);
    unk88->func_001B19A0(D_0028F5E0);
    func_001577A0(unk88, -1);

    w = (Widget_5F3 *)func_001E8A44(0x184);
    unk90 = w ? w->func_001B12C0(1) : 0;
    unk90->func_001B1580(&D_00278690, &D_00278690, D_002A8490->f2E8->f4[0x7e8 / 4], 0);
    unkA8 = 0xed;
    unk90->func_001B19C0(0x140, 0xed, 0);
    unk90->func_001B2270(0xffcccccc);
    unk90->func_001B19A0(D_0028F5E0);
    func_001577A0(unk90, -1);

    Text_5F3 *t = (Text_5F3 *)func_001E8A44(0x60);
    unkE4 = t ? t->func_001D5E90() : 0;
    unkE4->func_001D6190(font, D_002A8490->f2E8->f4[0x7c8 / 4], &D_00278690);
    t = unkE4;
    if (t->f4 != 0x44048000 || t->f8 != 0x43c48000) {
        t->f4 = 0x44048000;
        t->f8 = 0x43c48000;
        t->f4E |= 6;
    }
    t = unkE4;
    if (t->f48 != 0xffcccccc) {
        t->f4E |= 8;
        t->f48 = (t->f48 & 0xffcccccc) | 0xcccccc;
    }
    t = unkE4;
    if (t->f34 != 0x3f800000) {
        t->f34 = 0x3f800000;
        t->f4E |= 6;
    }

    t = (Text_5F3 *)func_001E8A44(0x60);
    unkE8 = t ? t->func_001D5E90() : 0;
    unkE8->func_001D6190(font, D_002A8490->f2E8->f4[0x808 / 4], &D_00278690);
    t = unkE8;
    if (t->f4 != 0x43cc0000 || t->f8 != 0x43c48000) {
        t->f4 = 0x43cc0000;
        t->f8 = 0x43c48000;
        t->f4E |= 6;
    }
    t = unkE8;
    if (t->f48 != 0xffcccccc) {
        t->f4E |= 8;
        t->f48 = (t->f48 & 0xffcccccc) | 0xcccccc;
    }
    t = unkE8;
    if (t->f34 != 0x3f800000) {
        t->f34 = 0x3f800000;
        t->f4E |= 6;
    }
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    unk110 = 1;
}

void BmxInGameMenu::func_0005F960(void)
{
    int ids[3];
    int i;
    int *r;
    C_001D5AD0 **e;
    Lookup_5F *lk;
    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->f2EC;
        r = lk->func_0018C160(ids[i]);
        if (r && *r) {
            S_0005FBD0_Obj *o = ((Mid_5F *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) o->f10 = 10.0f;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f;
        }
    }
    e = &unk94;
    i = 2;
    do { CLAMP(*e); e++; i--; } while (i);
    e = &unkC0[0];
    i = 5;
    do {
        if (e[-5]) CLAMP(e[-5]);
        if (*e) CLAMP(*e);
        e++; i--;
    } while (i);
    e = &unkDC;
    i = 2;
    do {
        if (e[-2]) CLAMP(e[-2]);
        if (*e) CLAMP(*e);
        e++; i--;
    } while (i);
    vf28();
    if (unk10C) CLAMP(unk10C);
    func_001578D0();
}

void BmxInGameMenu::func_0005FBD0(void)
{
    int i;
    for (i = 0; i < 8; i++) {
        if (unk64[i] != 0) {
            S_0005FBD0_Obj *p = unk64[i]->func_001D5AA0();
            if (D_00275AEC > p->f10) {
                p->f10 = 10.0f;
            }
            if (D_00275AEC < p->f14 || p->f14 > p->f10) {
                p->f14 = 10.0f;
            }
        }
    }
}

int BmxInGameMenu::func_0005FC30(void)
{
    int a = GAT(int, 0x270);
    if (GAT(int, 0x274) >= a - 1) {
        Obj_5FC *p = *(Obj_5FC **)((char *)D_002EFDB8 + 4);
        S6_5FC s;
        S6_5FC u;
        int i;
        if (a > 1) {
            s = *(S6_5FC *)((char *)p + 0x1e0);
            s.r[0] = 0; s.r[1] = 0; s.r[2] = 0x280; s.r[3] = 0x1c0;
            p->func_0012B2B0(&s, &u);
        }
        if (AT(int, 0x12c)) {
            char buf[50];
            char *q = *(char **)(*(char **)((char *)D_002A8490 + 0x2e8) + 4);
            func_001ADCC0(buf, 0x32, D_002786BC, *(int *)(q + 0x1028), AT(int, 0x11c) + 1, *(int *)(q + 0x1100));
            (*(Obj_5FC **)((char *)this + 0xec))->func_0005E840((int)buf);
        } else {
            int v;
            if (AT(int, 0x120)) {
                AT(Obj_5FC *, 0x124)->func_001D6600();
                int c = D_002A8490->f2E0->f4;
                int *q = D_002A8490->f2E8->f4;
                if (c == 0)
                    v = *(int *)((char *)q + 0xfb8);
                else
                    v = *(int *)((char *)q + 0xec0);
            } else {
                char *q = *(char **)(*(char **)((char *)D_002A8490 + 0x2e8) + 4);
                v = *(int *)(q + 0xe98);
            }
            AT(Obj_5FC *, 0xec)->func_0005E840(v);
        }
        AT(Obj_5FC *, 0xec)->func_001D6600();
        vf32();
        if (unk110) {
            vf30();
            unk110 = 0;
        } else if (unk120) {
            if (*(int *)(*(char **)((char *)D_002A8490 + 0x2e0) + 4) != 0) {
                Obj_5FC **e = &AT(Obj_5FC *, 0x84);
                for (i = 4; i; i--, e++) (*e)->func_001B1980();
                vf29();
            }
        }
        if (unk120) {
            char *q = *(char **)(*(char **)((char *)D_002A8490 + 0x2e8) + 4);
            Obj_5FC **e = &AT(Obj_5FC *, 0xe4);
            (*e)->func_0005E840(*(int *)(q + 0x7b8));
            q = *(char **)(*(char **)((char *)D_002A8490 + 0x2e8) + 4);
            AT(Obj_5FC *, 0xe8)->func_0005E840(*(int *)(q + 0x7c0));
            for (i = 2; i; i--, e++) (*e)->func_001D6600();
        } else {
            char *q = *(char **)(*(char **)((char *)D_002A8490 + 0x2e8) + 4);
            AT(Obj_5FC *, 0xe4)->func_0005E840(*(int *)(q + 0x7c8));
            AT(Obj_5FC *, 0xe4)->func_001D6600();
            q = *(char **)(*(char **)((char *)D_002A8490 + 0x2e8) + 4);
            AT(Obj_5FC *, 0xe8)->func_0005E840(*(int *)(q + 0x808));
            AT(Obj_5FC *, 0xe8)->func_001D6600();
        }
        ((Obj_5FC *)this)->func_00157960();
        if (GAT(int, 0x270) > 1)
            p->func_0012B2B0(&u, 0);
    }
    return 1;
}

int BmxInGameMenu::func_00060110(void)
{
    int i;
    unk94->func_001D5AD0();
    unk98->func_001D5AD0();
    for (i = 0; i < 5; i++) {
        unkAC[i]->func_001D5AD0();
        unkC0[i]->func_001D5AD0();
    }
    if (unkF4 != 0) {
        unkDC->func_001D5AD0();
    } else {
        unkD4->func_001D5AD0();
    }
    if (unkF8 != 0) {
        unkE0->func_001D5AD0();
    } else {
        unkD8->func_001D5AD0();
    }
    if (unk10C != 0) {
        unk10C->func_001D5AD0();
    }
    if (unk120 == 0) {
        vf31();
    }
    return 1;
}

void C_000601B0::func_000601B0(void)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x3f] = 0;
  in_ECX[0x4c] = 1;
                    
                    
  (**(code **)(*in_ECX + 0x10))();
  return;
}

void BmxInGameMenu::func_000601D0(void)
{
    vf6();
    unkF4 = 0;
    unkF8 = 0;
    unk120 = 0;
    unk108 = 1;
    unk114 = -1;
    unk118 = 0;
    unk128 = 1;
    unk130 = 0;
}

void BmxInGameMenu::func_00060220(void)
{
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    unkF4 = 0;
    unkF8 = 0;
    unk120 = 0;
    unkFC = 0;
    unk104->v34();
    unk104->func_00032A40();
    vf4();
    unk104->unk1F4 = 0;
    unk11C = -1;
    unk130 = 1;
    unk104->unk158->func_001C4D50(0x1f4);
}

void BmxInGameMenu::func_000602B0(void)
{
    if (unk130 != 0) {
        *(volatile int *)&D_002A8490->f2E0->f4;
        unk100 = 0;
        unk110 = 1;
        unk130 = 0;
        unkF4 = 0;
        vf6();
        unk104->v35();
        unk104->unk1F4 = 1;
        unk108 = 1;
        vf18(0);
        unk104->unk21 &= 0xfb;
        unkFC = 1;
        unk128 = 1;
    }
    unk118 = 0;
    unk114 = -1;
}

void C_00060350::func_00060350(int a0) {
    unk11C = a0;
    unk128 = 1;
    unk12C = 1;
}

