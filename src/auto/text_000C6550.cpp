/* 9 functions from 0x000C6550 to 0x000C6E70, found by Ghidra. */
#include "common.h"

extern int D_0027E1F4;

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

struct BmxUIPageParkLevel {
    void *vtbl;
    char pad4[0x27C];
    int arr280[3];
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
    int arr2e4[3];
    PageObj *f2f0[6];
    void func_001BE360(int a);
    void func_001BE3F0();
    BmxUIPageParkLevel *func_000C6620(int a);
    void func_000C66E0();
};
