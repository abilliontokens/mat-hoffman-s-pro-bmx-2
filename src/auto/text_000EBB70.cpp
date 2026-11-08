/* 11 functions from 0x000EBB70 to 0x000EC850, found by Ghidra. */
#include "common.h"

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
extern "C" char *__cdecl strcpy(char *dst, const char *src);
#pragma intrinsic(strcpy)

extern int D_00281BF4;

struct S_EC320_Entry {
    char flags[0x10];
    char name[0x22];
};

struct S_EC320_Mgr {
    char pad0[0x2C8];
    S_EC320_Entry *f2C8;
};

struct S_EC320_Global {
    char pad0[0x2E0];
    S_EC320_Mgr *f2E0;
    char pad2E4[4];
    struct S_EBE90_Sel *f2E8;
};
extern S_EC320_Global *D_002A8490;

struct DelObjC_000EB {
    virtual void Destroy(int a0);
};

struct C_001D6600 {
    void func_001D6600();
    void func_0005E840(int a0);
};
int func_00092A10();
struct S_EBE90_Page { char pad0[0x7c8]; int f7c8; char pad7cc[0x838 - 0x7cc]; int f838; char pad83c[0xa50 - 0x83c]; int fa50; };
struct S_EBE90_Sel { int pad0; S_EBE90_Page *f4; };
struct S_EBE90_Ctx { char pad0[0x274]; int f274; int func_00092A10(); };

struct C_000EBB_Elem {
    char pad0[0x38];
    int f38;
    char pad3C[0x58 - 0x3C];
    unsigned char b58;
    void func_001D5AD0();
};

struct S_002B91AC {
    char pad0[0x24];
    C_000EBB_Elem *unk24;
    C_000EBB_Elem *unk28;
    C_000EBB_Elem *unk2C;
    C_000EBB_Elem *unk30;
    C_001D6600 *unk34;
    C_001D6600 *unk38;
    C_001D6600 *unk3C;
    char pad40[0x50 - 0x40];
    C_000EBB_Elem *unk50;
    char pad54[0x68 - 0x54];
    C_000EBB_Elem *unk68;
    char pad6C[0x88 - 0x6C];
    C_000EBB_Elem *unk88;
    C_000EBB_Elem *unk8C;
    C_000EBB_Elem *unk90;
    C_000EBB_Elem *unk94;
    void func_000BF860(int a0, int a1, int a2, int a3);
};

struct S_000EBB_Svc { int func_000301D0(); };
struct S_000EBB_Owner { char pad0[0x74]; S_000EBB_Svc *f74; };
struct S_000EBB_Mgr { char pad0[0x25C]; S_000EBB_Owner *f25C; };
struct S_000EBB_Page { int f0; int pad4[11]; int f30; };
struct S_000EBB_Sel { int f0; S_000EBB_Page *f4; };
extern S_002B91AC *D_002B91AC;

struct C_000EB_Widget {
    void func_001B17D0(char *s);
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct S_000EB_unk124 {
    char pad0[0x138];
    int unk138;
};

/* BmxUIPageMedia */
struct C_000EBCD0 {
    char pad0[0x124];
    S_000EBB_Mgr *f124;
    char pad128[0x140 - 0x128];
    S_000EBB_Sel *f140;
    char pad144[0x280 - 0x144];
    C_000EBB_Elem *arr280[4];
    char pad290[0x29C - 0x290];
    int f29C;
    char pad2A0[0x2AC - 0x2A0];
    int f2AC;
    int f2B0;
    char pad2B4[0x2D0 - 0x2B4];
    short f2D0;
    void func_000C5E40();
    void func_000EBB70();
    void func_00157960();
    void func_000EBCD0();
};

/* BmxUIPageExistingEditorLevels */
struct C_000EBE30 {
    void *vtbl;
    char pad4[0x120];
    S_000EB_unk124 *unk124;
    char pad128[0x158];
    C_000EB_Widget *unk280[8];
    DelObjC_000EB *arr2A0[16];
    int arr2E0[8];
    int unk300;
    int unk304;
    int unk308;
    int unk30C;
    int unk310;
    int unk314;
    int unk318;
    int unk31C;
    DelObjC_000EB *unk320;
    int unk324;
    int unk328;
    int unk32C;
    int unk330;
    int unk334;
    C_000EB_Widget *unk338;
    int unk33C;
    int unk340;
    int unk344;
    int unk348;
    int unk34C;
    int unk350;
    int unk354;
    int unk358;
    int unk35C;
    int unk360;
    int unk364;
    int unk368;
    int unk36C;
    int unk370;
    int unk374;
    int unk378;
    int unk37C;
    int unk380;
    int unk384;
    int unk388;
    int unk38C;
    int unk390;
    int unk394;
    int unk398;
    int unk39C;
    void func_001BE360(int a0);
    C_000EBE30 *func_000EBCF0(int a0);
    void func_000EC320();
    void func_001BE3F0();
    void func_000EBE30();
    void func_000EBE90();
    void func_000EC4A0();
    void func_000EC580();
    void func_000EC5E0();
    void func_000EC6F0();
    void func_000EC7E0();
};

void C_000EBCD0::func_000EBB70()
{
    C_000EBB_Elem *m;
    C_000EBB_Elem *e;
    S_002B91AC *s;
    S_000EBB_Owner *owner;
    int n;
    int i;

    owner = f124->f25C;
    if (owner->f74->func_000301D0() == 0) {
        if (f29C)
            m = D_002B91AC->unk68;
        else
            m = D_002B91AC->unk50;
        m->func_001D5AD0();
    }
    if (f2AC)
        m = D_002B91AC->unk90;
    else
        m = D_002B91AC->unk88;
    m->func_001D5AD0();
    if (f2B0)
        m = D_002B91AC->unk94;
    else
        m = D_002B91AC->unk8C;
    m->func_001D5AD0();
    n = f140->f4->f30 - 1;
    for (i = 0; i < 4; i++) {
        e = arr280[i];
        e->f38 = ((int)f2D0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        if (i == n * 2 || i == n * 2 + 1) {
            e = arr280[i];
            e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
            e->b58 |= 2;
            arr280[i]->func_001D5AD0();
        } else {
            e = arr280[i];
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

void C_000EBCD0::func_000EBCD0()
{
    func_000C5E40();
    func_000EBB70();
    func_00157960();
}

C_000EBE30 *C_000EBE30::func_000EBCF0(int a0)
{
    func_001BE360(a0);
    vtbl = &D_00281BF4;
    unk300 = 0;
    unk30C = 0;
    unk310 = 0;
    unk308 = 0;
    unk31C = 0;
    unk318 = 0;
    unk314 = 0;
    if (unk320 != 0) {
        unk320 = 0;
    }
    unk324 = 0;
    memset(unk280, 0, sizeof(unk280));
    unk328 = 0;
    unk32C = 0;
    unk330 = 0;
    unk394 = 0;
    unk334 = 0;
    unk340 = 0;
    unk348 = 0;
    unk338 = 0;
    unk33C = 0;
    unk344 = 0;
    unk34C = 0;
    unk350 = 0;
    unk354 = 0;
    unk360 = 0;
    unk364 = 0;
    unk368 = 0;
    unk36C = 0;
    unk370 = 0;
    unk374 = 0;
    unk378 = 0;
    unk358 = 0;
    unk37C = -1;
    unk39C = 0;
    unk398 = 0;
    memset(arr2A0, 0, sizeof(arr2A0));
    unk380 = 0;
    unk384 = 0;
    unk388 = 0;
    unk38C = 0;
    unk390 = 0;
    memset(arr2E0, 0, sizeof(arr2E0));
    return this;
}

void C_000EBE30::func_000EBE30()
{
    vtbl = &D_00281BF4;
    if (unk320 != 0) {
        unk320->Destroy(1);
        unk320 = 0;
    }
    for (int i = 0; i < 16; i++) {
        if (arr2A0[i] != 0) {
            arr2A0[i]->Destroy(1);
            arr2A0[i] = 0;
        }
    }
    func_001BE3F0();
}

void C_000EBE30::func_000EBE90()
{
    S_EBE90_Ctx *ctx = (S_EBE90_Ctx *)unk124;
    int i;
    int v274;

    unk30C = 0;
    unk310 = 0;
    unk308 = 0;
    unk314 = 0;
    unk324 = 0;
    for (i = 0; i < 8; i++) {
        D_002A8490->f2E0->f2C8->flags[i] = 0;
        arr2E0[i] = 0;
    }
    unk330 = 0;
    unk334 = 0;
    v274 = ctx->f274;
    unk344 = v274;
    if (func_00092A10() != 0) {
        unk340 = 0;
        unk374 = 1;
        unk334 = 1;
        unk330 = 1;
        unk32C = 0;
        unk348 = 1;
    } else {
        unk340 = 0;
        unk374 = 1;
        unk334 = 1;
        unk348 = 0;
    }
    unk394 = 0;
    unk35C = 0;
    unk360 = 0;
    unk364 = 0;
    unk368 = 0;
    unk358 = 0;
    unk37C = -1;
    unk39C = 0;
    unk398 = 0;
    unk380 = 0;
    unk384 = 0;
    unk388 = 0;
    unk38C = 0;
    unk390 = 0;
    D_002B91AC->unk34->func_0005E840(D_002A8490->f2E8->f4->fa50);
    D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
    D_002B91AC->unk38->func_0005E840(D_002A8490->f2E8->f4->f7c8);
    D_002B91AC->func_000BF860(1, 0x17b, 0x184, 0);
    D_002B91AC->unk3C->func_0005E840(D_002A8490->f2E8->f4->f838);
}

void C_000EBE30::func_000EC320()
{
    int n;
    int i;
    char buf[0x32];

    n = 0;
    if (D_002A8490->f2E0->f2C8->flags[0] == 1) {
        arr2E0[n] = 0;
        n++;
    }
    if (D_002A8490->f2E0->f2C8->flags[1] == 1) {
        arr2E0[n] = 1;
        n++;
    }
    if (D_002A8490->f2E0->f2C8->flags[2] == 1) {
        arr2E0[n] = 2;
        n++;
    }
    if (D_002A8490->f2E0->f2C8->flags[3] == 1) {
        arr2E0[n] = 3;
        n++;
    }
    if (D_002A8490->f2E0->f2C8->flags[4] == 1) {
        arr2E0[n] = 4;
        n++;
    }
    if (D_002A8490->f2E0->f2C8->flags[5] == 1) {
        arr2E0[n] = 5;
        n++;
    }
    if (D_002A8490->f2E0->f2C8->flags[6] == 1) {
        arr2E0[n] = 6;
        n++;
    }
    if (D_002A8490->f2E0->f2C8->flags[7] == 1) {
        arr2E0[n] = 7;
        n++;
    }
    unk324 = n;
    for (i = 0; i < unk324; i++) {
        strcpy(buf, D_002A8490->f2E0->f2C8[arr2E0[i]].name);
        unk280[i]->func_001B17D0(buf);
    }
}

void C_000EBE30::func_000EC4A0()
{
    int i;

    for (i = 0; i < unk324; i++) {
        unk280[i]->func_001B1980();
        if (i == unk33C) {
            unk280[i]->func_001B2270(0xffbfa35a);
            unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
        } else if (i == unk37C) {
            unk280[i]->func_001B2270(0xffcccccc);
            unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0.0f, 0.2f, 0);
        } else {
            unk280[i]->func_001B2270(0xffcccccc);
            unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0xbf800000, 0xff, 1.0f, 0, 0.0f, 0.0f, 0);
        }
    }
}

void C_000EBE30::func_000EC580()
{
    unk338->func_001B1980();
    unk338->func_001B2270(0xffbfa35a);
    unk338->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
}

void C_000EBE30::func_000EC5E0()
{
    int i;

    if (unk324 == 0) {
        unk338->func_001B1980();
        unk338->func_001B2270(0xffbfa35a);
        unk338->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
    } else {
        for (i = 0; i < unk324; i++) {
            unk280[i]->func_001B1980();
            if (i == unk33C) {
                unk280[i]->func_001B2270(0xffbfa35a);
                unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
            } else {
                unk280[i]->func_001B2270(0xffcccccc);
                unk280[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0.0f, 0);
            }
        }
    }
}

void C_000EBE30::func_000EC6F0()
{
    int i;

    if (unk324 == 0) {
        unk338->func_001B1980();
        unk338->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0, 1.45f, 0, 0.25f, 0.2f, 0);
    } else {
        for (i = 0; i < unk324; i++) {
            unk280[i]->func_001B1980();
            if (i == unk33C) {
                unk280[i]->func_001B2270(0xffbfa35a);
                unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0, 1.45f, 0, 0.25f, 0.0f, 0);
            } else {
                unk280[i]->func_001B2270(0xffcccccc);
                unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0.0f, 0);
            }
        }
    }
}

void C_000EBE30::func_000EC7E0()
{
    if (unk330 != 0) {
        return;
    }
    if (unk324 > 0 || unk35C != 0) {
        D_002B91AC->unk38->func_001D6600();
        if (unk35C != 0) {
            return;
        }
    }
    if (unk124->unk138 != 0) {
        return;
    }
    D_002B91AC->unk3C->func_001D6600();
    D_002B91AC->unk34->func_001D6600();
}

