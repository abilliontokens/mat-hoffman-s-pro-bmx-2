/* 12 functions from 0x00102BB0 to 0x00103B60, found by Ghidra. */
#include "common.h"

extern int D_002826B4;
extern int D_00282754;
void func_001E891B(void *p);

struct S_00103350_unk24 {
    char pad0[0x34];
    float unk34;
};

struct C_001B1980 {
    char pad0[0x24];
    S_00103350_unk24 *unk24;
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
    void func_001B2270(int a);
};

struct C_001C01B0 {
    void func_001C01B0();
};

struct C_001C0110 {
    void func_001C0110(void *a, void *b);
};

/* BmxUIWidgetOverlayText */
struct C_00103AE0 {
    void *vtbl;
    char pad4[0x1AC];
    void *unk1B0;
    void *func_00103AE0(unsigned int flags);
};

/* BmxRotateOverlayText, base destructor */
struct C_00103B20 {
    void *vtbl;
    char pad4[0x1AC];
    void *unk1B0;
    void *func_00103B20(unsigned int flags);
};

struct S_00103_Vec4 {
    float x, y, z, w;
    void Init() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

/* BmxRotateOverlayText */
struct C_001033D0 {
    void *vtbl;
    char pad4[0x16C];
    int unk170;
    char pad174[0x38];
    int unk1AC;
    C_001B1980 **unk1B0;
    char pad1B4[0x20C];
    int unk3C0;
    char pad3C4[8];
    int unk3CC;
    int unk3D0;
    union {
        struct {
            float unk3D4;
            float unk3D8;
            float unk3DC;
            float unk3E0;
        };
        S_00103_Vec4 vec3D4;
    };
    char pad3E4[4];
    int unk3E8;
    int unk3EC;
    int unk3F0;
    int unk3F4;
    C_001033D0 *func_001033D0(void *a, void *b);
    void func_00103350();
    void func_00103A70();
};

void C_001033D0::func_00103350()
{
    int i;
    float v;
    for (i = 0; i < unk170; i++) {
        v = unk1B0[i]->unk24->unk34;
        unk1B0[i]->func_001B1980();
        unk1B0[i]->func_001B1860(0, -1.0f, 0xff, v, 0, 0, 0, 0, v, 0, 0.25f, 0, 0);
    }
    unk1AC = 1;
}

C_001033D0 *C_001033D0::func_001033D0(void *a, void *b)
{
    ((C_001C0110 *)this)->func_001C0110(a, b);
    vtbl = (void *)&D_00282754;
    vec3D4.Init();
    unk1B0 = 0;
    unk170 = 0;
    unk3C0 = 0;
    unk3CC = 0;
    unk3D0 = 0;
    unk3E8 = 0;
    unk3F4 = 0;
    unk3F0 = 0;
    unk3EC = 0xff;
    return this;
}

void C_001033D0::func_00103A70()
{
    int i;
    if (unk3CC) {
        for (i = 0; i < unk170; i++) {
            unk1B0[i]->func_001B2270(unk3C0);
        }
    } else {
        for (i = 0; i < unk170; i++) {
            unk1B0[i]->func_001B1980();
        }
    }
}

void *C_00103AE0::func_00103AE0(unsigned int flags)
{
    vtbl = (void *)&D_002826B4;
    if (unk1B0) {
        func_001E891B(unk1B0);
    }
    ((C_001C01B0 *)this)->func_001C01B0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
