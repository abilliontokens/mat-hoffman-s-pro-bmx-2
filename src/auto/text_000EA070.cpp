/* 6 functions from 0x000EA070 to 0x000EAC40, found by Ghidra. */
#include "common.h"

extern int D_00281A74;

struct DelObjHOFTitle {
    virtual void Destroy(int a0);
};

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

struct S_000EA9F0_Root {
    char pad0[0x2E8];
    S_000EA9F0_Mid *f2E8;
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
};

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
