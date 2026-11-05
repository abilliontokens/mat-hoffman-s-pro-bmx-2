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
