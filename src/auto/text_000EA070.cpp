/* 6 functions from 0x000EA070 to 0x000EAC40, found by Ghidra. */
#include "common.h"

extern int D_00281A74;

struct S_000EA070_Elem {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0xC];
    unsigned int f48;
    short f4c;
    unsigned char f4e;
    char pad4F[9];
    unsigned char f58;
    void func_001D5AD0();
    void func_001D6600();
    __forceinline void SetAlpha(int alpha) {
        f38 = (f38 & 0xffffff) | (alpha << 24);
        f58 |= 2;
    }
};

struct C_000EA070 {
    char pad0[0x284];
    int f284;
    char pad288[0x29c-0x288];
    int f29c, f2a0, f2a4;
    int f2a8, f2ac;
    char pad2b0[0x484-0x2b0];
    short f484;
    char pad486[0x498-0x486];
    short f498;
    char pad49a[0x4c4-0x49a];
    int f4c4;
    char pad4c8[0x4dc-0x4c8];
    int f4dc, f4e0, f4e4, f4e8;
    char pad4ec[0x508-0x4ec];
    int f508, f50c;
    char pad510[4];
    S_000EA070_Elem *r[6][5];
    char pad58c[0x6b8-0x58c];
    S_000EA070_Elem *labels[6];
    S_000EA070_Elem *on[4];
    S_000EA070_Elem *off[4];
    void func_000EA410();
    void func_001BF000(void);
    void func_000EA070(void);
};

struct DelObjHOFTitle {
    virtual void Destroy(int a0);
    char pad4[0x24];
    int f28;
    char pad2C[0x10];
    int f3C;
    int f40;
    int f44;
    int f48;
    char pad4C[0xC];
    unsigned char f58;
    DelObjHOFTitle *func_001D5760(void);
    void func_001D5810(void *a, float b, float c, int d);
};

void *func_001E8A44(int size);
extern int D_00278690;
extern int D_002786A0;
extern int D_00278678;
extern int D_002786B0;
extern float D_0027E140;

/* a text label: func_0005E840 sets its string */
struct S_000EA9F0_Text {
    void func_0005E840(char *s);
};

/* the HUD object: labels at +0x34, +0x38, +0x80, +0x84, and func_000BF860 places one */
struct S_000EA9F0_Hud {
    char pad0[0x34];
    S_000EA9F0_Text *unk34;
    S_000EA9F0_Text *unk38;
    char pad3C[0x80 - 0x3C];
    S_000EA9F0_Text *unk80;
    S_000EA9F0_Text *unk84;
    void func_000BF860(int a, int b, int c, int d);
};

extern S_000EA9F0_Hud *D_002B91AC;

/* string table of the settings record */
struct S_000EA9F0_Strings {
    char pad0[0x740];
    char *f740;
    char pad744[0x7C8 - 0x744];
    char *f7C8;
    char pad7CC[0x928 - 0x7CC];
    char *f928;
    char pad92C[0x978 - 0x92C];
    char *f978;
};

struct S_000EA9F0_Mid {
    int f0;
    S_000EA9F0_Strings *f4;
};

struct S_000EAB00_Res {
    void func_0018C160(void *a);
};

struct S_000EA9F0_Root {
    char pad0[0x2E8];
    S_000EA9F0_Mid *f2E8;
    S_000EAB00_Res *f2EC;
};

extern S_000EA9F0_Root *D_002A8490;

/* BmxUIPageHOFTitle */
struct C_000EA910 {
    void *vtbl;
    char pad4[0x284 - 4];
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    char pad294[4];
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
    DelObjHOFTitle *arr2D0[12];
    void func_001BE360(int a);
    void func_001BE3F0();
    C_000EA910 *func_000EA910(int a);
    void func_000EA9B0();
    void func_000EA9F0();
    void func_001BE4F0(int a, int b, int c);
    C_000EA910 *func_000EAB00(int a, int b, int c);
};

void __fastcall func_001BF000(void *self);
void __fastcall func_000EA070(void *self)
{
    struct E {
        char pad0[0x38];
        unsigned int f38;
        char pad3C[0xC];
        unsigned int f48;
        short f4c;
        unsigned char f4e;
        char pad4F[9];
        unsigned char f58;
    };
    struct T {
        char pad0[0x484];
        short s;
        char pad486[0x514 - 0x486];
        E *r[6][5];
    };
    T *t = (T *)self;
    E *p;
    short v;
    unsigned int e;
#define N(k, j) p = t->r[k][j]; p->f38 = (p->f38 & 0xffffff) | (t->s << 24); p->f58 |= 2;
#define S(j) v = t->s; p = t->r[4][j]; if (p->f4c != v) { e = p->f48; p->f4e |= 8; p->f4c = v; p->f48 = (e & 0xffffff) | (v << 24); }
    N(0,0) N(1,0) N(2,0) N(3,0) S(0)
    N(0,1) N(1,1) N(2,1) N(3,1) S(1)
    N(0,2) N(1,2) N(2,2) N(3,2) S(2)
    N(0,3) N(1,3) N(2,3) N(3,3) S(3)
    N(0,4) N(1,4) N(2,4) N(3,4) S(4)
    func_001BF000(self);
}

C_000EA910 *C_000EA910::func_000EA910(int a)
{
    func_001BE360(a);
    vtbl = &D_00281A74;
    unk290 = 0;
    unk28C = 0;
    unk298 = 0;
    unk284 = 0;
    unk288 = 0;
    unk29C = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2A8 = 0;
    unk2AC = 1;
    unk2B0 = 0;
    unk2B8 = 0;
    unk2B4 = 0;
    for (int i = 0; i < 12; i++) {
        arr2D0[i] = 0;
    }
    unk2BC = 0;
    unk2C0 = 0;
    unk2C4 = 0;
    unk2C8 = 0;
    unk2CC = 0;
    return this;
}

void C_000EA910::func_000EA9B0()
{
    int i;
    vtbl = &D_00281A74;
    for (i = 0; i < 12; i++) {
        if (arr2D0[i] != 0) {
            arr2D0[i]->Destroy(1);
            arr2D0[i] = 0;
        }
    }
    func_001BE3F0();
}

void C_000EA910::func_000EA9F0()
{
    unk2A4 = 1;
    unk290 = 0;
    unk298 = 0;
    unk2A0 = 0;
    unk29C = 0;
    unk2B8 = 0;
    unk2B4 = 0;
    unk2B0 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    unk2C4 = 0;
    unk2C8 = 0;
    unk2CC = 0;
    D_002B91AC->unk34->func_0005E840(D_002A8490->f2E8->f4->f928);
    D_002B91AC->func_000BF860(0, 0x1EB, 0x184, 0);
    D_002B91AC->unk38->func_0005E840(D_002A8490->f2E8->f4->f7C8);
    D_002B91AC->unk80->func_0005E840(D_002A8490->f2E8->f4->f978);
    D_002B91AC->unk84->func_0005E840(D_002A8490->f2E8->f4->f740);
}

C_000EA910 *C_000EA910::func_000EAB00(int a, int b, int c)
{
    int i;
    DelObjHOFTitle *p;
    DelObjHOFTitle *o;

    func_001BE4F0(a, b, c);
    D_002A8490->f2EC->func_0018C160(&D_00278690);
    D_002A8490->f2EC->func_0018C160(&D_002786A0);
    D_002A8490->f2EC->func_0018C160(&D_00278678);
    for (i = 0; i < 12; i++) {
        p = (DelObjHOFTitle *)func_001E8A44(0x64);
        p = p != 0 ? p->func_001D5760() : 0;
        arr2D0[i] = p;
        if (i % 2 == 0) {
            p->func_001D5810(&D_002786B0, 100.0f, (float)(i / 2 * 40) + D_0027E140, 0);
        } else {
            p->func_001D5810(&D_002786B0, 321.0f, (float)(i / 2 * 40) + D_0027E140, 0);
            o = arr2D0[i];
            o->f3C = 0x3f800000;
            o->f40 = 0;
            o->f44 = 0;
            o->f48 = 0x3f800000;
            o->f58 |= 4;
        }
        o = arr2D0[i];
        if (o->f28 != 0x435d0000) {
            o->f28 = 0x435d0000;
            o->f58 |= 1;
        }
    }
    return this;
}

