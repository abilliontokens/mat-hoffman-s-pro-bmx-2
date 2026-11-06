/* 9 functions from 0x000B8AD0 to 0x000B9AD0, found by Ghidra. */
#include "common.h"
struct C_000B8C80 {
    char pad0[0x9C];
    int unk9C;
    void func_000B8C80(int a0);
};


struct BmxUIGlobalManager {
    void *vtbl;
    void *func_000B9A60(int a0);
    void func_001BC770(int a0);
    void *func_000B9AA0(int flags);
    void func_001BC7A0();
};
void func_001E891B(void *);
struct C_000B8AD0 {
    char pad0[0x50];
    int unk50;
    int unk54;
    void func_000B8AD0(int a0, int a1);
    void func_000B67C0();
};
struct Obj1A4100 {
    void func_001A4100(int a0, int a1, int a2);
};
struct C_000B9A80 {
    char pad0[0x30];
    Obj1A4100 *unk30;
    void func_000B9A80(int a0, int a1);
};
/* BmxTireModel, vtable slot 13 (SIMD-heavy tire/contact update) */
struct C_000B8C90 {
    char pad0[0x28];
    int f28;
    int f2C;
    int f30;
    int f34;
    float f38;
    float f3C;
    int f40;
    float f44;
    void func_000B8C90(float dt);
};

extern int D_0027D5FC;

struct C_000B8B60 {
    void *vtbl;
    char pad4[0x20];
    int u[32];
    C_000B8B60 *func_000B8B60(int a0);
    void func_00157600(int a0);
};
extern int D_002A3084, D_002A3088, D_002A308C, D_002A3090;
extern int D_002A3064, D_002A3068, D_002A306C, D_002A3070;

struct C_000B9A30 {
    void *vtbl;
    void *func_000B9A30(int flags);
};

void C_000B8AD0::func_000B8AD0(int a0, int a1)
{
    unk50 = a0;
    unk54 = a1;
    func_000B67C0();
}

C_000B8B60 *C_000B8B60::func_000B8B60(int a0)
{
    extern int D_0027D574;
    int *p;
    func_00157600(a0);
    vtbl = (void *)&D_0027D574;
    p = &u[16]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[20]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[24]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    u[10] = 0x3f800000; u[11] = 0x3f800000; u[12] = 0x3f800000;
    u[5] = 0x3f800000; u[6] = 0x3f800000; u[7] = 0x3f800000;
    u[0] = 0; u[1] = 0; u[2] = 0; u[4] = 0; u[3] = 0;
    u[14] = 0; u[15] = 0; u[13] = 0x40400000;
    u[8] = 0x3e800000; u[9] = 0x3e800000;
    u[16] = D_002A3084; u[17] = D_002A3088; u[18] = D_002A308C; u[19] = D_002A3090;
    u[20] = D_002A3064; u[21] = D_002A3068; u[22] = D_002A306C; u[23] = D_002A3070;
    u[24] = D_002A3064; u[25] = D_002A3068; u[26] = D_002A306C; u[27] = D_002A3070;
    u[30] = 0; u[31] = 0; u[28] = 0; u[29] = 0;
    return this;
}

void C_000B8C80::func_000B8C80(int a0) {
    unk9C = a0;
}

void C_000B8C90::func_000B8C90(float dt)
{
}

void *C_000B9A30::func_000B9A30(int flags) {
    extern int D_0027D574;
    void func_00157660();
    void func_001E891B(void *);
    vtbl = (void *)&D_0027D574;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *BmxUIGlobalManager::func_000B9A60(int a0)
{
    func_001BC770(a0);
    vtbl = (void *)&D_0027D5FC;
    return this;
}

void C_000B9A80::func_000B9A80(int a0, int a1)
{
    if (unk30 != 0) {
        unk30->func_001A4100(a0, a1, 0);
    }
}

void *BmxUIGlobalManager::func_000B9AA0(int flags)
{
    vtbl = (void *)&D_0027D5FC;
    func_001BC7A0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

