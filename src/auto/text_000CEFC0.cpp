/* 7 functions from 0x000CEFC0 to 0x000CFF30, found by Ghidra. */
#include "common.h"

extern const char D_0027EB6C[];
extern const char D_0027EB60[];
extern const char D_0027DB54[];
extern const char D_0027EB78[];

struct S_000CEFC0_Obj30000 {
    int func_00030020(const char *name);
    int func_000300C0(const char *name);
    void func_00030210();
    void func_000301A0();
};

struct S_000CEFC0_Obj25C {
    char pad0[0x74];
    S_000CEFC0_Obj30000 *unk74;
};

struct S_000CEFC0_Obj268 {
    void func_001C4D50(int v);
};

struct S_000CEFC0_Obj360 {
    char pad0[0x360];
    int unk360;
};

struct S_000CEFC0_124 {
    char pad0[0x25c];
    S_000CEFC0_Obj25C *unk25c;
    char pad260[8];
    S_000CEFC0_Obj268 *unk268;
    S_000CEFC0_Obj360 *func_000BA9D0(int v);
};

struct S_000CEFC0_4F8 {
    int func_00093620(float v);
};

struct BmxUIPageGameOptions {
    char pad0[0x124];
    S_000CEFC0_124 *unk124;
    char pad128[0x4f8 - 0x128];
    S_000CEFC0_4F8 *unk4f8;
    char pad4fc[0x57c - 0x4fc];
    int unk57c;
    int unk580;
    void func_000CFCA0();
    void func_000CFAC0();
    void func_000CFB20();
};

void BmxUIPageGameOptions::func_000CFAC0()
{
    S_000CEFC0_124 *p = unk124;
    p->unk25c->unk74->func_00030020(D_0027EB6C);
    p->unk25c->unk74->func_000300C0(D_0027EB60);
    p->unk268->func_001C4D50(1000);
    p->unk25c->unk74->func_00030210();
    p->unk25c->unk74->func_000301A0();
}

void BmxUIPageGameOptions::func_000CFB20()
{
    unk124->unk25c->unk74->func_00030020(D_0027DB54);
    unk124->unk25c->unk74->func_000300C0(D_0027EB78);
    unk124->unk268->func_001C4D50(1000);
    unk124->unk25c->unk74->func_00030210();
    unk124->unk25c->unk74->func_000301A0();
    unk124->func_000BA9D0(1)->unk360 = 3;
}

void BmxUIPageGameOptions::func_000CFCA0()
{
    if (unk4f8->func_00093620(100.0f) == 1) {
        unk57c = 1;
    } else {
        unk580 = 1;
    }
}
