/* 9 functions from 0x000DB310 to 0x000DC270, found by Ghidra. */
#include "common.h"

extern char D_0027F7D4[];
extern float D_00276DD4;

struct C_000DB310_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1A30(float a1, float a2, float a3);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct S_000DBC00_G {
    char pad0[0x10];
    int f10;
};

struct S_000DBC00_F {
    char pad0[0x1a4];
    S_000DBC00_G *f1a4;
};

struct S_000DBC00_D {
    char pad0[0x28];
    S_000DBC00_F **f28;
};

struct S_000DBC00_C {
    char pad0[0x2c];
    S_000DBC00_D *f2c;
    int func_0001B3C0(const char *name);
};

struct S_000DBC00_B {
    char pad0[0x484];
    S_000DBC00_C *f484;
};

struct S_000DBC00_A {
    char pad0[0x150];
    S_000DBC00_B *f150;
};

struct C_000DB310 {
    char pad0[0x124];
    S_000DBC00_A *f124;
    char pad128[0x18c];
    int f2B4;
    char pad2B8[0x30];
    C_000DB310_Widget *f2E8[11];
    char pad314[0x18];
    float f32C[11];
    void func_000DB310();
    int func_000DBC00();
};

void C_000DB310::func_000DB310() {
    int i;

    for (i = 0; i < 11; i++) {
        f2E8[i]->func_001B1980();
        if (i == f2B4) {
            f2E8[i]->func_001B2270(0xffbfa35a);
            f2E8[i]->func_001B1A30(320.0f, f32C[i] + 4.0f, 0.0f);
            f2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0, 1.45f, 0, 0.25f, 0, 0);
        } else {
            f2E8[i]->func_001B2270(0xffcccccc);
            f2E8[i]->func_001B1A30(320.0f, f32C[i], 0.0f);
            f2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        }
    }
}

int C_000DB310::func_000DBC00() {
    S_000DBC00_A *a = f124;
    int idx = a->f150->f484->func_0001B3C0(D_0027F7D4);
    return a->f150->f484->f2c->f28[idx]->f1a4->f10;
}
