/* 9 functions from 0x000CA940 to 0x000CB6B0, found by Ghidra. */
#include "common.h"

extern int D_0027E49C;

struct SetterObj_CA {
    void func_001B1980(void);
    void func_001B17D0(int v);
};

struct GObj4_CA {
    char pad0[0x130];
    int f130;
    char pad134[0x408 - 0x134];
    int f408;
    char pad40C[0x930 - 0x40C];
    int f930;
    char pad934[0xF70 - 0x934];
    int fF70;
};

struct GObj2E8_CA {
    char pad0[4];
    GObj4_CA *p4;
};

struct GObjRoot_CA {
    char pad0[0x2E8];
    GObj2E8_CA *p2E8;
};

extern GObjRoot_CA *D_002A8490;

struct C_000CA940 {
    char pad0[0x320];
    int f320;
    SetterObj_CA *f324;
    void func_000CA940(void);
};

struct C_000CA9B0 {
    char pad0[0x2D4];
    int f2D4;
    SetterObj_CA *f2D8;
    void func_000CA9B0(void);
};

struct C_000CAA10 {
    char pad0[0x2DC];
    SetterObj_CA *f2DC;
    char pad2E0[4];
    int f2E4;
    void func_000CAA10(void);
};

struct DelObjC_CA {
    virtual void Destroy(int a0);
};

/* BmxUIPageMemCard */
struct C_000CB650 {
    void *vtbl;
    char pad4[0x290];
    DelObjC_CA *f294;
    char pad298[8];
    DelObjC_CA *arr2A0[4];
    void func_001BE3F0();
    void func_000CB650();
};
