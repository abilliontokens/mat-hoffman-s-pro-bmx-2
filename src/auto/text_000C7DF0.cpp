/* 13 functions from 0x000C7DF0 to 0x000C8D30, found by Ghidra. */
#include "common.h"

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_001B1980 {
    char pad0[0x24];
    int unk24;
    char pad28[0x20];
    float unk48;
    void func_001B1980(void);
    void func_001B2270(int color);
    void func_001B1860(int, float, int, float, int, int, int, int, float, int, float, int, int);
};

struct C_000BE360 {
    void func_001BE360(int param_1);
};

struct S_002B91AC {
    char pad0[0x24];
    C_001D5AD0 *unk24;
    C_001D5AD0 *unk28;
    C_001D5AD0 *unk2C;
    C_001D5AD0 *unk30;
    char pad34[0x1C];
    C_001D5AD0 *unk50;
    C_001D5AD0 *unk54;
    char pad58[0x10];
    C_001D5AD0 *unk68;
    C_001D5AD0 *unk6C;
};

struct C_000C8590 {
    void func_000C7DF0(void);
    void func_000C83E0(void);
    void func_00157960(void);
    void func_000C8590(void);
};

struct C_000C8090 {
    char pad0[0x2DC];
    int unk2DC;
    char pad2E0[0x40];
    C_001B1980 *unk320[9];
    int unk344[9];
    float unk368[9];
    void func_000C8090(void);
};

struct C_000C83E0 {
    char pad0[0x280];
    int unk280;
    int unk284;
    char pad288[0x80];
    C_001D5AD0 *unk308[4];
    C_001D5AD0 *unk318[2];
    void func_000C83E0(void);
};

struct C_000C85B0 {
    void *vtbl;
    char pad4[0x27C];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    char pad290[0x4];
    int unk294;
    int unk298;
    int unk29C;
    int unk2A0;
    int unk2A4;
    char pad2A8[0x8];
    int unk2B0;
    char pad2B4[0x4];
    int unk2B8;
    int unk2BC;
    int unk2C0;
    int unk2C4;
    int unk2C8;
    int unk2CC;
    int unk2D0;
    int unk2D4;
    int unk2D8;
    int unk2DC;
    int unk2E0;
    int unk2E4;
    C_000C85B0 *func_000C85B0(int param_1);
};

extern S_002B91AC *D_002B91AC;
extern float D_00279B50;
extern float D_00275994;
extern void *D_0027E334;

void C_000C8090::func_000C8090(void) {
    int i;
    float v;
    C_001B1980 *p;
    for (i = 0; i < 9; i++) {
        p = unk320[i];
        p->func_001B1980();
        if (unk344[i] != 0) {
            p->func_001B2270(0xff606060);
        } else if (i == unk2DC) {
            p->func_001B2270(0xffbfa35a);
        } else {
            p->func_001B2270(0xffcccccc);
        }
        p->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        v = unk368[i];
        if (v > D_00279B50 || v < D_00275994) {
            p->func_001B1980();
        }
    }
}

void C_000C83E0::func_000C83E0(void) {
    C_001D5AD0 *p;
    C_001D5AD0 **ptr;
    S_002B91AC *s;
    int count;
    p = unk284 ? D_002B91AC->unk68 : D_002B91AC->unk50;
    p->func_001D5AD0();
    p = unk280 ? D_002B91AC->unk6C : D_002B91AC->unk54;
    p->func_001D5AD0();
    ptr = unk308;
    count = 4;
    do {
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    ptr = unk318;
    count = 2;
    do {
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
}

void C_000C8590::func_000C8590(void) {
    func_000C7DF0();
    func_000C83E0();
    func_00157960();
}

C_000C85B0 *C_000C85B0::func_000C85B0(int param_1) {
    ((C_000BE360 *)this)->func_001BE360(param_1);
    unk2B8 = 0;
    unk288 = 0;
    unk28C = 0;
    unk284 = 0;
    unk280 = 0;
    unk298 = 0;
    unk294 = 0;
    unk29C = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2C0 = 0;
    unk2BC = 0;
    *(void **)this = &D_0027E334;
    unk2B0 = 1;
    unk2D8 = 0;
    unk2DC = 0;
    unk2E0 = 0;
    unk2E4 = 0;
    unk2C4 = 0;
    unk2C8 = 0;
    unk2CC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    return this;
}

