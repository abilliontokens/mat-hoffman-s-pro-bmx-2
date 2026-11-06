/* 3 functions from 0x000E9180 to 0x000EA070, found by Ghidra. */
#include "common.h"
struct C_000E9FD0 {
    char pad0[0x784];
    int unk784;
    void func_000E9FD0(void);
};


struct C_001B1980 {
    void func_001B1980(void);
};

struct C_000E9FE0 {
    char pad0[0x340];
    C_001B1980 *unk340;
    C_001B1980 *unk344;
    C_001B1980 *unk348;
    C_001B1980 *unk34C;
    C_001B1980 *unk350;
    char pad354[0x12C];
    int unk480;
    char pad484[0xC];
    int unk490;
    int unk494;
    int unk498;
    int unk49C;
    int unk4A0;
    char pad4A4[0x24];
    int unk4C8;
    int unk4CC;
    char pad4D0[0x2B8];
    int unk788;
    void func_000E86C0(void);
    void func_000E9FE0(void);
};

extern float D_0027DE74;
extern float D_002755E8;
extern float D_00276524;
extern float D_00281A60;
extern float D_00281A5C;
extern int D_00281A64;
extern void *D_002EFDB8;
extern void *D_002A8490;
extern float D_002A33B8;
extern float D_002A33BC;
extern float D_002A33C0;

int func_000BC670();
void func_000BC590();
void func_000BE020(int a);
void func_000BDF30(int a);
int func_001E8858(float v);
void func_0001C1E0(int a, int b, int c, int d);
void func_0001BB00(int a, int b, int c);
void func_00197E70(float *v);
void func_001996A0(int a, float *v, float *w, float *x, int y);
void func_0001B910(void *p);

struct S_0E9180_270 {
    char pad0[0x270];
};

struct S_0E9180_150 {
    char pad0[0x484];
    void *f484;
};

struct S_0E9180_124 {
    char pad0[0x150];
    S_0E9180_150 *f150;
    char pad154[0x270 - 0x154];
    void *f270;
    char pad274[0x288 - 0x274];
    int f288;
    int f28c;
};

struct C_000E9180 {
    void *vtbl;
    char pad4[0x124 - 4];
    S_0E9180_124 *f124;
    char pad128[0x288 - 0x128];
    int f288;
    int f28c;
    int f290;
    int f294;
    float f298;
    int f29c;
    int f2a0;
    int f2a4;
    int f2a8;
    char pad2AC[0x468 - 0x2AC];
    int f468;
    char pad46C[0x47c - 0x46C];
    int f47c;
    int f480;
    int f484;
    float f488;
    float f48c;
    int f490;
    int f494;
    int f498;
    float f49c;
    float f4a0;
    char pad4A4[0x4c8 - 0x4A4];
    int f4c8;
    int f4cc;
    int f4d0;
    int f4d4;
    char pad4D8[0x4dc - 0x4D8];
    int f4dc;
    int f4e0;
    int f4e4;
    int f4e8;
    float f4ec;
    char pad4F0[0x50c - 0x4F0];
    int f50c;
    char pad510[0x514 - 0x510];
    void *f514;
    char pad518[0x6b8 - 0x518];
    void *f6b8;
    char pad6BC[0x784 - 0x6BC];
    int f784;
    char pad788[0x78c - 0x788];
    int f78c;
    void func_000E9180(float dt);
};

void C_000E9FD0::func_000E9FD0(void) {
    int func_001BF220(...);
    unk784 = 1;
    func_001BF220();
}

void C_000E9FE0::func_000E9FE0(void) {
    func_000E86C0();
    unk490 = 0;
    unk494 = 255;
    unk498 = unk480;
    unk49C = 0;
    unk4A0 = 0;
    unk34C->func_001B1980();
    unk350->func_001B1980();
    unk340->func_001B1980();
    unk344->func_001B1980();
    unk348->func_001B1980();
    unk4C8 = 0;
    unk4CC = 0;
    unk788 = 1;
}

