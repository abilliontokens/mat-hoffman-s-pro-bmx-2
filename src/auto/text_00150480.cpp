/* 9 functions from 0x00150480 to 0x00151130, found by Ghidra. */
#include "common.h"
struct C_00150F60 {
    char pad0[0x24];
    int unk24;
    int unk28;
    void func_00150F60(int a0, int a1);
};

extern int D_00286B04;
extern float D_00275460;
void func_001E891B(void *);

struct C_001507E0 {
    void *vtbl;
    void *func_001507E0(int flags);
    void func_00157660();
};

struct S_002EFDB8 {
    char pad0[0x2C];
    int unk2C;
};
extern S_002EFDB8 *D_002EFDB8;

struct C_00150810 {
    char pad0[0x24];
    int unk24;
    float unk28;
    float unk2C;
    float unk30;
    float unk34;
    int unk38;
    int unk3C;
    char pad40[0x4];
    float unk44;
    float unk48;
    float unk4C;
    int unk50;
    C_00150810 *func_00150810(int a0, float a1, float a2, float a3, float a4, float a5);
    void func_001D3F50();
};

struct Vec4_150900 {
    float x, y, z, w;
};
extern Vec4_150900 D_002A78BC;
extern Vec4_150900 D_002A78CC;

struct C_00197B40 {
    void func_00197B40(Vec4_150900 *a0, Vec4_150900 *a1);
};
struct C_00150900_sub {
    char pad0[0x4];
    C_00197B40 *unk4;
};
struct C_00150900_obj {
    char pad0[0x1A4];
    C_00150900_sub *unk1A4;
};
struct C_00150900 {
    char pad0[0x2C];
    C_00150900_obj *unk2C;
    void func_00150900(Vec4_150900 *a0, Vec4_150900 *a1);
};

void *C_001507E0::func_001507E0(int flags) {
    vtbl = (void *)&D_00286B04;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_00150F60::func_00150F60(int a0, int a1) {
    int func_001D3F50(...);
    unk24 = a0;
    unk28 = a1;
    func_001D3F50();
}
