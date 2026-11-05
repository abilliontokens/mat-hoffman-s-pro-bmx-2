/* 14 functions from 0x0001A5A6 to 0x0001B440, found by Ghidra. */
#include "common.h"

extern float D_00275460;
extern float D_00275544;

float func_0014F890(float x);
float func_0014F450(float x);

struct Quat {
    float w, x, y, z;
};

struct Vec3 {
    float x, y, z;
};

/* object with a virtual base class that has virtual slots (slot 5 at +0x14) */
struct VBase_0001B360 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};

struct VDerived_0001B360 : virtual VBase_0001B360 {
};

struct S_0001B360 {
    char pad0[0x1A4];
    VDerived_0001B360 *obj;
};

/* float rgb -> 8-bit rgb */
struct C_0001AE60 {
    s8 r, g, b;
    C_0001AE60* func_0001AE60(const Vec3* v);
};

/* float rgb -> 16-bit rgb */
struct C_0001AF00 {
    s16 r, g, b;
    C_0001AF00* func_0001AF00(const Vec3* v);
};

struct C_0001B3B0 {
    char pad0[0x2C];
    int unk2C;
    C_0001B3B0* func_0001B3B0(int a0);
};


C_0001B3B0* C_0001B3B0::func_0001B3B0(int a0) {
    unk2C = a0;
    return this;
}
