/* 4 functions from 0x000D3DA0 to 0x000D4D20, found by Ghidra. */
#include "common.h"
struct C_001B1860 {
    void func_001B1980();
    void func_001B1860(int, float, int, float, int, int, float, int, float, int, int, int, int);
};

struct C_D3DA0_Range { char pad[0x10]; float f10, f14; };
struct C_D3DA0_Item { C_D3DA0_Range* func_0018C070(); };
struct C_D3DA0_Manager { C_D3DA0_Item** func_0018C160(const char*); };
extern char D_00278690[], D_002786A0[], D_00278678[];
extern float D_00275AEC;
struct C_001D5AD0 {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x58 - 0x3C];
    unsigned char f58;
    void func_001D5AD0();
    C_D3DA0_Range* func_001D5AA0();
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
    char pad2E4[8];
    C_D3DA0_Manager* f2EC;
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
    void func_000D3DA0();
    void func_001578D0();
};

struct C_000D4280 {
    char pad0[0x2A8];
    C_001B1860* f2A8;
    C_001B1860* f2AC;
    C_001B1860* f2B0;
    C_001B1860* f2B4;
    char pad2B8[0x3D8 - 0x2B8];
    int f3D8;
    char pad3DC[0x202C - 0x3DC];
    C_001B1860* f202C;
    C_001B1860* f2030;
    C_001B1860* f2034;
    C_001B1860* f2038;
    void func_000D2300();
    void func_000D23D0();
    void func_000D24B0();
    void func_000D25A0();
    void func_000D4280();
    void func_000D44C0();
};

void BmxUIPageLevelSelection::func_000D3DA0() {
const char* names[3] = {D_00278690,D_002786A0,D_00278678};
for(int i=0;i<3;i++) {
C_D3DA0_Manager* manager=D_002A8490->f2EC;
C_D3DA0_Item** p=manager->func_0018C160(names[i]);
if(p && *p) { C_D3DA0_Range* r=(*p)->func_0018C070(); if (D_00275AEC > r->f10) r->f10 = 10.0f;
if (D_00275AEC < r->f14 || r->f14 > r->f10) r->f14 = 10.0f; }
}
for(int j=0;j<2;j++) { if(a284[j]) {C_D3DA0_Range* r=a284[j]->func_001D5AA0(); if (D_00275AEC > r->f10) r->f10 = 10.0f;
if (D_00275AEC < r->f14 || r->f14 > r->f10) r->f14 = 10.0f; } }
if(f2044) {C_D3DA0_Range* r=f2044->func_001D5AA0(); if (D_00275AEC > r->f10) r->f10 = 10.0f;
if (D_00275AEC < r->f14 || r->f14 > r->f10) r->f14 = 10.0f; }
func_001578D0();
}

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

void C_000D4280::func_000D44C0()
{
    float duration = 0.1f;
    if (f3D8 == 0) duration = 0.25f;
    if (D_002A8490->f2E0->f4 == 0) {
        f2A8->func_001B1980();
        f202C->func_001B1980();
        func_000D2300();
        f2A8->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0.0f, 255, 1.15f, 0, *(int *)&duration, 0, 0);
        f202C->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0.0f, 255, 1.15f, 0, *(int *)&duration, 0, 0);
        f2AC->func_001B1980();
        f2038->func_001B1980();
        func_000D25A0();
        f2AC->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0.0f, 255, 1.15f, 0, *(int *)&duration, 0, 0);
        f2038->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0.0f, 255, 1.15f, 0, *(int *)&duration, 0, 0);
        f2B0->func_001B1980();
        f2030->func_001B1980();
        func_000D23D0();
        f2B0->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0.0f, 255, 1.15f, 0, *(int *)&duration, 0, 0);
        f2030->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0.0f, 255, 1.15f, 0, *(int *)&duration, 0, 0);
        f2B4->func_001B1980();
        f2034->func_001B1980();
        func_000D24B0();
        f2B4->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0.0f, 255, 1.15f, 0, *(int *)&duration, 0, 0);
        f2034->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0.0f, 255, 1.15f, 0, *(int *)&duration, 0, 0);
    }
}

void BmxUIPageLevelSelection::func_000D4AE0()
{
    C_000D4AE0_Player* p = f124;
    C_002B91AC* g;
    C_001D5AD0* e;
    int mode;
    int i;

    if (f2010 == 0) {
        if (p->f270->func_000BC670())
            f2044->func_001D5AD0();
        if (p->f25C->f74->func_000301D0() == 0) {
            (f28C ? D_002B91AC->f68 : D_002B91AC->f50)->func_001D5AD0();
            (f290 ? D_002B91AC->f6C : D_002B91AC->f54)->func_001D5AD0();
            mode = D_002A8490->f2E0->f4;
            if (mode == 4 || mode == 7 || mode == 1 || mode == 2 || mode == 5)
                (f2BC ? D_002B91AC->f70 : D_002B91AC->f58)->func_001D5AD0();
            if (D_002A8490->f2E0->f324 == 1) {
                D_002B91AC->func_000BF860(1, 0x173, 0x184, 0);
                (f294 ? D_002B91AC->f74 : D_002B91AC->f5C)->func_001D5AD0();
                D_002B91AC->func_000BF860(2, 0xe6, 0x184, 0);
                (f2BC ? D_002B91AC->f70 : D_002B91AC->f58)->func_001D5AD0();
            } else if (D_002A8490->f2E0->f2C0->func_0005C700() == 1 && D_002A8490->f2E0->f4 != 0) {
                (f294 ? D_002B91AC->f74 : D_002B91AC->f5C)->func_001D5AD0();
            }
        }
        if (D_002A8490->f2E0->f4 == 0) {
            for (i = 0; i < 2; i++) {
                e = a284[i];
                e->f38 = (e->f38 & 0xff000000) | 0xbfa35a;
                e->f58 |= 2;
                e = a284[i];
                e->f38 = (e->f38 & 0xffffff) | (f2020 << 24);
                e->f58 |= 2;
                a284[i]->func_001D5AD0();
            }
        }
        g = D_002B91AC;
        g->f24->func_001D5AD0();
        g->f28->func_001D5AD0();
        g->f2C->func_001D5AD0();
        g->f30->func_001D5AD0();
    }
}

