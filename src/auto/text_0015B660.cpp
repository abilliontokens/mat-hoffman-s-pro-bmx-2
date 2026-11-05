/* 20 functions from 0x0015B660 to 0x0015C640, found by Ghidra. */
#include "common.h"
extern int D_0028779C;
extern int D_00287778;
extern int D_002877C0;
void func_001E8390(void *p);
void func_0001B2E0(void *p, int a);

struct C_0015B660 {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    C_0015B660();
    ~C_0015B660();
    void func_0015B660();
    void func_0015B680();
};

struct C_0015B7A0 {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    C_0015B7A0();
    void func_0015B7A0();
};

struct LinearPositionController {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    LinearPositionController();
};

struct BezierPositionController {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    BezierPositionController();
};

struct C_0015BAC0 {
    char pad0[0x14];
    u32 *unk14;
    char pad18[0x8];
    void func_0015BAC0(int a0, u32 *a1, int a2);
};

LinearPositionController::LinearPositionController() {
    unk4 = 0;
    unk8 = 1;
    unkC = 0;
    unk10 = 0;
    vtbl = &D_0028779C;
    unk14 = 0;
}

void C_0015B660::func_0015B680() {
    C_0015B660 *self = this;
    void *p = self->unk14;
    self->vtbl = &D_0028779C;
    if (p != 0) {
        func_001E8390(p);
    }
    self->vtbl = &D_00287778;
}

BezierPositionController::BezierPositionController() {
    unk4 = 0;
    unk8 = 1;
    unk10 = 0;
    vtbl = &D_002877C0;
    unkC = 0;
    unk14 = 0;
}

void C_0015BAC0::func_0015BAC0(int a0, u32 *a1, int a2) {
    if (a1 != 0) {
        *a1 = unk14[a0 * 3];
    }
    if (a2 != 0) {
        func_0001B2E0(&unk14[a0 * 3 + 1], a2);
    }
}

