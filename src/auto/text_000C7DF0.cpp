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
    char pad0[0x280];
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
