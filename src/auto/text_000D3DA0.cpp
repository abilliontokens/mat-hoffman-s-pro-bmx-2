/* 4 functions from 0x000D3DA0 to 0x000D4D20, found by Ghidra. */
#include "common.h"
struct C_001B1860 {
    void func_001B1980();
    void func_001B1860(int, float, int, float, int, int, float, int, float, int, int, int, int);
};

struct C_001D5AD0 {
    char pad0[0x38];
    unsigned b : 8;
    unsigned g : 8;
    unsigned r : 8;
    unsigned a : 8;
    char pad3C[0x58 - 0x3C];
    unsigned char f58;
    void func_001D5AD0();
};

struct C_002B91AC {
    char pad0[0x24];
    C_001D5AD0* f24;
    C_001D5AD0* f28;
    C_001D5AD0* f2C;
    C_001D5AD0* f30;
    char pad34[0x50 - 0x34];
    C_001D5AD0* f50;
    C_001D5AD0* f54;
    C_001D5AD0* f58;
    C_001D5AD0* f5C;
    char pad60[0x68 - 0x60];
    C_001D5AD0* f68;
    C_001D5AD0* f6C;
    C_001D5AD0* f70;
    C_001D5AD0* f74;
    void func_000BF860(int, int, int, int);
};
extern C_002B91AC* D_002B91AC;

struct C_0005C700 {
    int func_0005C700();
};

struct C_000D4AE0_Game {
    char pad0[0x4];
    int f4;
    char pad8[0x2C0 - 0x8];
    C_0005C700* f2C0;
    char pad2C4[0x324 - 0x2C4];
    int f324;
};

struct C_000D4AE0_Root {
    char pad0[0x2E0];
    C_000D4AE0_Game* f2E0;
};
extern C_000D4AE0_Root* D_002A8490;

struct C_000301D0 {
    int func_000301D0();
};

struct C_000D4AE0_Sub25C {
    char pad0[0x74];
    C_000301D0* f74;
};

struct C_000BC670 {
    int func_000BC670();
};

struct C_000D4AE0_Player {
    char pad0[0x25C];
    C_000D4AE0_Sub25C* f25C;
    char pad260[0x270 - 0x260];
    C_000BC670* f270;
};

struct BmxUIPageLevelSelection {
    char pad0[0x124];
    C_000D4AE0_Player* f124;
    char pad128[0x284 - 0x128];
    C_001D5AD0* a284[2];
    int f28C;
    int f290;
    int f294;
    char pad298[0x2BC - 0x298];
    int f2BC;
    char pad2C0[0x2010 - 0x2C0];
    int f2010;
    char pad2014[0x2020 - 0x2014];
    short f2020;
    char pad2022[0x2044 - 0x2022];
    C_001D5AD0* f2044;
    void func_000D4AE0();
};

struct C_000D4280 {
    char pad0[0x2A8];
    C_001B1860* f2A8;
    C_001B1860* f2AC;
    C_001B1860* f2B0;
    C_001B1860* f2B4;
    char pad2B8[0x202C - 0x2B8];
    C_001B1860* f202C;
    C_001B1860* f2030;
    C_001B1860* f2034;
    C_001B1860* f2038;
    void func_000D2300();
    void func_000D23D0();
    void func_000D24B0();
    void func_000D25A0();
    void func_000D4280();
};

void C_000D4280::func_000D4280()
{
    f2A8->func_001B1980();
    f202C->func_001B1980();
    func_000D2300();
    f2A8->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f202C->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2AC->func_001B1980();
    f2038->func_001B1980();
    func_000D25A0();
    f2AC->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2038->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2B0->func_001B1980();
    f2030->func_001B1980();
    func_000D23D0();
    f2B0->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2030->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2B4->func_001B1980();
    f2034->func_001B1980();
    func_000D24B0();
    f2B4->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2034->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
}
