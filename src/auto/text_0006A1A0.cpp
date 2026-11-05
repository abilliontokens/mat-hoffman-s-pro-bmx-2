/* 3 functions from 0x0006A1A0 to 0x0006AA90, found by Ghidra. */
#include "common.h"
struct W_6A1A0 { virtual ~W_6A1A0(); };
struct D_6A1A0 { void func_001D6410(); };
void func_001E891B(void *p);
extern int D_002788EC;

struct C_0006A1A0 {
    void *vtbl;
    char pad4[0x80];
    D_6A1A0 *unk84[3];
    D_6A1A0 *unk90[2];
    W_6A1A0 *unk98[2];
    W_6A1A0 *unkA0[3];
    W_6A1A0 *unkAC[3];
    W_6A1A0 *unkB8[2];
    char padC0[0x24];
    W_6A1A0 *unkE4[5];
    W_6A1A0 *unkF8[5];
    W_6A1A0 *unk10C[16];
    W_6A1A0 *unk14C;
    char pad150[0x24];
    D_6A1A0 *unk174;
    D_6A1A0 *unk178;
    D_6A1A0 *unk17C;
    char pad180[0x40];
    D_6A1A0 *unk1C0;
    void func_00157660();
    void func_0006A1A0();
};

void C_0006A1A0::func_0006A1A0()
{
    int i;
    D_6A1A0 *p;
    vtbl = (void *)&D_002788EC;
    for (i = 0; i < 2; i++) {
        if (unk98[i]) { delete unk98[i]; unk98[i] = 0; }
    }
    for (i = 0; i < 3; i++) {
        if (unkAC[i]) { delete unkAC[i]; unkAC[i] = 0; }
        if (unkA0[i]) { delete unkA0[i]; unkA0[i] = 0; }
        p = unk84[i];
        if (p) { p->func_001D6410(); func_001E891B(p); unk84[i] = 0; }
    }
    for (i = 0; i < 2; i++) {
        p = unk90[i];
        if (p) { p->func_001D6410(); func_001E891B(p); unk90[i] = 0; }
        if (unkB8[i]) { delete unkB8[i]; unkB8[i] = 0; }
    }
    p = unk174;
    if (p) { p->func_001D6410(); func_001E891B(p); unk174 = 0; }
    if (unk14C) { delete unk14C; unk14C = 0; }
    p = unk178;
    if (p) { p->func_001D6410(); func_001E891B(p); unk178 = 0; }
    p = unk17C;
    if (p) { p->func_001D6410(); func_001E891B(p); unk17C = 0; }
    p = unk1C0;
    if (p) { p->func_001D6410(); func_001E891B(p); unk1C0 = 0; }
    for (i = 0; i < 5; i++) {
        if (unkE4[i]) { delete unkE4[i]; unkE4[i] = 0; }
        if (unkF8[i]) { delete unkF8[i]; unkF8[i] = 0; }
    }
    for (i = 0; i < 16; i++) {
        if (unk10C[i]) { delete unk10C[i]; unk10C[i] = 0; }
    }
    func_00157660();
}
