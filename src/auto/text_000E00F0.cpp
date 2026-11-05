/* 5 functions from 0x000E00F0 to 0x000E1070, found by Ghidra. */
#include "common.h"

extern int D_0027FA0C;

struct DelObjTime {
    virtual void Destroy(int a0);
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

struct S_000E0E30_Root {
    char pad0[0x2E8];
    S_000E0E30_Mid *f2E8;
};

extern S_000E0E30_Root *D_002A8490;

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
};

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
