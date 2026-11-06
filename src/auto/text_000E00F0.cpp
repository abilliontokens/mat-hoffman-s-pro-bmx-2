/* 5 functions from 0x000E00F0 to 0x000E1070, found by Ghidra. */
#include "common.h"

extern int D_0027FA0C;

struct DelObjTime {
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
    DelObjTime *func_001D5760(void);
    void func_001D5810(void *a, float b, float c, int d);
};

/* a text label: func_0005E840 sets its string */
struct S_000E0E30_Text {
    void func_0005E840(char *s);
};

/* the HUD object: three labels at +0x34..+0x3C, and func_000BF860 places one */
struct S_000E0E30_Hud {
    char pad0[0x34];
    S_000E0E30_Text *unk34;
    S_000E0E30_Text *unk38;
    S_000E0E30_Text *unk3C;
    void func_000BF860(int a, int b, int c, int d);
};

extern S_000E0E30_Hud *D_002B91AC;

/* string table of the settings record */
struct S_000E0E30_Strings {
    char pad0[0x7C8];
    char *f7C8;
    char pad7CC[0x838 - 0x7CC];
    char *f838;
    char pad83C[0xA10 - 0x83C];
    char *fA10;
};

struct S_000E0E30_Mid {
    int f0;
    S_000E0E30_Strings *f4;
};

struct S_000E0F30_Res {
    void func_0018C160(void *a);
};

struct S_000E0E30_Root {
    char pad0[0x2E8];
    S_000E0E30_Mid *f2E8;
    S_000E0F30_Res *f2EC;
};

extern S_000E0E30_Root *D_002A8490;

struct PlaylistCall {
 int func_000301D0();
 int func_00136170(int,int,int);
 void func_000B9A80(int,int);
 int func_00095250(int);
 int func_000952A0(int);
 void func_00094D90(int);
 void func_00095490(int);
 void func_00094E40(int,int,int);
 void func_00094960(int);
 void func_00094C60();
};
struct BmxUIPageMusicPlaylist {
 char pad0[0x124];
 char *page;
 char pad128[0x280-0x128];
 int fields[0x700/4];
 int func_000E00F0(int a,int b);
 void func_000DFC90();
};
extern float D_0027988C;
/* BmxUIPageTime */
struct C_000E0D50 {
    void *vtbl;
    char pad4[0x280 - 4];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    int unk294;
    char pad298[8];
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
    float unk2CC;
    DelObjTime *arr2D0[8];
    void func_001BE360(int a);
    void func_001BE3F0();
    C_000E0D50 *func_000E0D50(int a);
    void func_000E0DF0();
    void func_001BEFC0(int a, int b);
    void func_000E0E30();
    void func_001BE4F0(int a, int b, int c);
    C_000E0D50 *func_000E0F30(int a, int b, int c);
};

void *func_001E8A44(int size);
extern int D_00278690;
extern int D_002786A0;
extern int D_00278678;
extern int D_002786B0;
extern float D_0027E140;

C_000E0D50 *C_000E0D50::func_000E0D50(int a)
{
    func_001BE360(a);
    vtbl = &D_0027FA0C;
    unk28C = 0;
    unk290 = 0;
    unk288 = 0;
    unk294 = 0;
    unk280 = 0;
    unk284 = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2A8 = 0;
    unk2B0 = 0;
    unk2AC = 0;
    for (int i = 0; i < 8; i++) {
        arr2D0[i] = 0;
    }
    unk2B8 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    unk2C4 = 0;
    unk2C8 = 0;
    unk2B4 = 1;
    unk2CC = 1.0f;
    return this;
}

void C_000E0D50::func_000E0DF0()
{
    int i;
    vtbl = &D_0027FA0C;
    for (i = 0; i < 8; i++) {
        if (arr2D0[i] != 0) {
            arr2D0[i]->Destroy(1);
            arr2D0[i] = 0;
        }
    }
    func_001BE3F0();
}

void C_000E0D50::func_000E0E30()
{
    func_001BEFC0(1, 4);
    unk28C = 0;
    unk290 = 0;
    unk294 = 0;
    unk2A0 = 1;
    unk2A8 = 0;
    unk2B0 = 0;
    unk2AC = 0;
    unk2B8 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    unk2C4 = 0;
    unk2C8 = 0;
    D_002B91AC->unk34->func_0005E840(D_002A8490->f2E8->f4->fA10);
    D_002B91AC->func_000BF860(0, 0x1EB, 0x184, 0);
    D_002B91AC->unk38->func_0005E840(D_002A8490->f2E8->f4->f7C8);
    D_002B91AC->func_000BF860(1, 0x17B, 0x184, 0);
    D_002B91AC->unk3C->func_0005E840(D_002A8490->f2E8->f4->f838);
}

C_000E0D50 *C_000E0D50::func_000E0F30(int a, int b, int c)
{
    int i;
    DelObjTime *p;
    DelObjTime *o;

    func_001BE4F0(a, b, c);
    D_002A8490->f2EC->func_0018C160(&D_00278690);
    D_002A8490->f2EC->func_0018C160(&D_002786A0);
    D_002A8490->f2EC->func_0018C160(&D_00278678);
    for (i = 0; i < 8; i++) {
        p = (DelObjTime *)func_001E8A44(0x64);
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

