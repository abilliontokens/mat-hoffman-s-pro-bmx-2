/* 11 functions from 0x000B1350 to 0x000B21B0, found by Ghidra. */
#include "common.h"

extern int D_0027CF8C;
extern u32 D_002A2DC4;
extern u32 D_002A2DC8;
extern u32 D_002A2DCC;
extern u32 D_002A2DD0;

struct C_0018C7B0 {
    void func_0018C7B0(int a0);
};

struct VehicleAIOwner {
    char pad0[0x4B8];
    int f4B8;
};

struct VehicleAI {
    void *vtbl;
    char pad4[0x38];
    VehicleAIOwner *f3C;
    u32 f40;
    u32 f44;
    u32 f48;
    char pad4C[4];
    s32 f50;
    s32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6C;
    u32 f70;
    u32 f74;
    u32 f78;
    u32 f7C;
    u32 f80;
    u32 f84;
    u32 f88;
    u32 f8C;
    u32 f90;
    u32 f94;
    u32 f98;
    char pad9C[0x104];
    u8 f1A0;
    u8 f1A1;
    u8 f1A2;
    u8 f1A3;
    char pad1A4[0x103];
    u8 f2A7;
    u8 f2A8;
    u8 f2A9;
    u8 f2AA;
    u8 f2AB;
    VehicleAI *func_000B1EE0(int a0);
    void func_000B1F70(void);
};

void func_000B2010(void) {
    extern int D_0027CF70;
    int __stdcall func_0018C890(int);
    func_0018C890((int)&D_0027CF70);
}
