/* 9 functions from 0x000C6550 to 0x000C6E70, found by Ghidra. */
#include "common.h"

extern int D_0027E1F4;
extern const float D_00276DD4;

struct Mat {
    char pad0[0x38];
    u32 f38;
    char pad3C[0x1C];
    u8 f58;
};

struct BmxUIPageParkEditor {
    char pad0[0x2C4];
    s16 f2c4;
    char pad2C6[0xA];
    Mat *f2d0;
    Mat *f2d4;
    Mat *f2d8;
    Mat *f2dc;
    void func_000C5E40();
    void func_000C6420();
    void func_00157960();
    void func_001BF000();
    void func_000C6550(void);
    void func_000C6600(void);
};

struct PageObj {
    virtual void destroy(int flags);
};

struct C_000C6CA0_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1A30(float a1, float a2, float a3);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct BmxUIPageParkLevel {
    void *vtbl;
    char pad4[0x27C];
    union {
        int arr280[3];
        float f280[3];
    };
    int f28c;
    int f290;
    int f294;
    int f298;
    int f29c;
    int f2a0;
    int f2a4;
    int f2a8;
    int f2ac;
    int f2b0;
    int f2b4;
    int f2b8;
    int f2bc;
    int f2c0;
    int f2c4;
    int f2c8;
    int f2cc;
    int f2d0;
    int f2d4;
    int f2d8;
    int f2dc;
    int f2e0;
    union {
        int arr2e4[3];
        C_000C6CA0_Widget *w2e4[3];
    };
    PageObj *f2f0[6];
    void func_001BE360(int a);
    void func_001BE3F0();
    BmxUIPageParkLevel *func_000C6620(int a);
    void func_000C66E0();
    void func_000C6CA0();
    void func_000C6AD0();
    void func_000C6BA0();
};

void BmxUIPageParkEditor::func_000C6550(void)
{
    Mat *m;

    m = f2d0;
    m->f38 = (u32)(f2c4 << 24) | (m->f38 & 0xffffff);
    m->f58 |= 2;
    m = f2d4;
    m->f38 = (u32)(f2c4 << 24) | (m->f38 & 0xffffff);
    m->f58 |= 2;
    m = f2d8;
    m->f38 = (u32)(f2c4 << 24) | (m->f38 & 0xffffff);
    m->f58 |= 2;
    m = f2dc;
    m->f38 = (u32)(f2c4 << 24) | (m->f38 & 0xffffff);
    m->f58 |= 2;
    func_001BF000();
}

void BmxUIPageParkEditor::func_000C6600(void)
{
    func_000C5E40();
    func_000C6420();
    func_00157960();
}

BmxUIPageParkLevel *BmxUIPageParkLevel::func_000C6620(int a)
{
    int *p;

    func_001BE360(a);
    vtbl = (void *)&D_0027E1F4;
    f28c = 0;
    p = arr280;
    for (int n = 3; n != 0; n--) {
        *(p + 0x19) = 0;
        *p = 0;
        p++;
    }
    f2a0 = 0;
    f2a4 = 0;
    f298 = 0;
    f290 = 0;
    f294 = 0;
    f2b0 = 0;
    f2ac = 0;
    f2a8 = 0;
    f2bc = 0;
    f2c0 = -1;
    f2c8 = 0;
    f2c4 = 0;
    for (int j = 0; j < 6; j++)
        f2f0[j] = 0;
    f2cc = 0;
    f2d0 = 0;
    f2d4 = 0;
    f2d8 = 0;
    f2dc = 0;
    f2e0 = f28c;
    return this;
}

void BmxUIPageParkLevel::func_000C66E0()
{
    vtbl = (void *)&D_0027E1F4;
    for (int i = 0; i < 6; i++) {
        if (f2f0[i]) {
            f2f0[i]->destroy(1);
            f2f0[i] = 0;
        }
    }
    func_001BE3F0();
}

void BmxUIPageParkLevel::func_000C6AD0()
{
    int i;

    for (i = 0; i < 3; i++) {
        w2e4[i]->func_001B1980();
        if (i == f28c) {
            w2e4[i]->func_001B2270(0xffbfa35a);
            w2e4[i]->func_001B1A30(320.0f, *(volatile float *)&f280[i] + D_00276DD4, 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.25f, 0.2f, 0);
        } else {
            w2e4[i]->func_001B2270(0xffcccccc);
            w2e4[i]->func_001B1A30(320.0f, f280[i], 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0, 1.0f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        }
    }
}

void BmxUIPageParkLevel::func_000C6CA0()
{
    int i;

    for (i = 0; i < 3; i++) {
        w2e4[i]->func_001B1980();
        if (i == f28c) {
            w2e4[i]->func_001B2270(0xffbfa35a);
            w2e4[i]->func_001B1A30(320.0f, *(volatile float *)&f280[i] + D_00276DD4, 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0, 1.45f, 0, 0.25f, 0, 0);
        } else {
            w2e4[i]->func_001B2270(0xffcccccc);
            w2e4[i]->func_001B1A30(320.0f, f280[i], 0.0f);
            w2e4[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        }
    }
}

