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
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, int a11, float a12, int a13);
    void func_001B2270(int a);
    void func_001B19A0(int a);
    void func_001B19C0(int a, int b, int c);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, int a11, int a12, int a13);
    void func_001B1B80(float a, struct S_00103_Vec4 b, int c);
    void func_001B1AB0(int a, int b);
    void func_001B1BF0(int a);
};
extern const float D_00275998;

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
    float unk3E4;
    int unk3E8;
    int unk3EC;
    int unk3F0;
    int unk3F4;
    C_001033D0 *func_001033D0(void *a, void *b);
    void func_00103350();
    void func_00103A70();
    void func_00103960();
};

struct C_001BF6A0 {
    void func_001BF6A0();
};

/* BmxUIWidgetOverlayText, virtual function 32 */
struct C_00102E20 {
    void *vtbl;
    char pad4[0x28];
    int unk2C;
    char pad30[0x140];
    int unk170;
    char pad174[4];
    int unk178;
    char pad17C[0x34];
    C_001B1980 **unk1B0;
    char pad1B4[0x20C];
    int unk3C0;
    int unk3C4;
    int unk3C8;
    int unk3CC;
    int unk3D0;
    int unk3D4;
    int unk3D8;
    int unk3DC;
    void func_00102E20();
    void func_001030A0();
    void func_00102BB0();
};

struct C_001BF660 {
    void func_001BF660();
};

/* BmxUIWidgetOverlayText */
struct C_00102FD0 {
    void *vtbl;
    char pad4[0x16C];
    int unk170;
    char pad174[4];
    int unk178;
    char pad17C[0x30];
    int unk1AC;
    C_001B1980 **unk1B0;
    char pad1B4[0x218];
    int unk3CC;
    char pad3D0[4];
    int unk3D4;
    int unk3D8;
    void func_00102FD0();
    void func_00103260(int a);
};

void C_00102E20::func_00102E20()
{
    int i;
    if (unk3D4) {
        for (i = 0; i < unk170; i++) {
            unk1B0[i]->func_001B1980();
            unk1B0[i]->func_001B2270(unk3D8);
            unk1B0[i]->func_001B19A0(unk178);
            unk1B0[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
        }
    } else {
        unk2C = 0;
        if (unk3CC) {
            for (i = 0; i < unk170; i++) {
                unk1B0[i]->func_001B1980();
                unk1B0[i]->func_001B2270(unk3C0);
                unk1B0[i]->func_001B19A0(unk178);
                unk1B0[i]->func_001B19C0(unk3C4, unk3C8 - 4, 0);
                if (unk3DC) {
                    unk1B0[i]->func_001B1980();
                    unk1B0[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
                } else {
                    unk1B0[i]->func_001B1980();
                    unk1B0[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
                }
            }
        }
    }
}

void C_00102FD0::func_00102FD0()
{
    int i;
    ((C_001BF6A0 *)this)->func_001BF6A0();
    i = 0;
    if (unk3D4) {
        for (; i < unk170; i++) {
            unk1B0[i]->func_001B1980();
            unk1B0[i]->func_001B2270(unk3D8);
            unk1B0[i]->func_001B19A0(unk178);
            unk1B0[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
        }
    } else {
        for (; i < unk170; i++) {
            unk1B0[i]->func_001B1980();
        }
    }
}

void C_00102E20::func_001030A0()
{
    int i;
    ((C_001BF660 *)this)->func_001BF660();
    i = 0;
    if (unk3CC) {
        for (; i < unk170; i++) {
            unk1B0[i]->func_001B1980();
            unk1B0[i]->func_001B2270(unk3C0);
            unk1B0[i]->func_001B19A0(unk178);
            unk1B0[i]->func_001B19C0(unk3C4, unk3C8, 0);
            if (unk3DC) {
                unk1B0[i]->func_001B1980();
                unk1B0[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
            } else {
                unk1B0[i]->func_001B1980();
                unk1B0[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
            }
        }
    } else if (unk3D4) {
        for (; i < unk170; i++) {
            unk1B0[i]->func_001B1980();
            unk1B0[i]->func_001B2270(unk3D8);
            unk1B0[i]->func_001B19A0(unk178);
            unk1B0[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
        }
    } else {
        for (; i < unk170; i++) {
            unk1B0[i]->func_001B1980();
        }
    }
}

void C_00102FD0::func_00103260(int a)
{
    int i;

    for (i = 0; i < unk170; i++) {
        if (unk3D4) {
            unk1B0[i]->func_001B1980();
            unk1B0[i]->func_001B2270(0xff606060);
            unk1B0[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        } else if (unk3CC) {
            unk1B0[i]->func_001B1980();
            unk1B0[i]->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 0xff, 1.45f, 0, 0.25f, 0, 0);
        } else {
            unk1B0[i]->func_001B1980();
            unk1B0[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        }
    }
    unk1AC = 0;
}

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

void C_001033D0::func_00103960()
{
    int i;
    if (unk3CC) {
        for (i = 0; i < unk170; i++) {
            unk1B0[i]->func_001B2270(unk3D0);
        }
    }
    for (i = 0; i < unk170; i++) {
        unk1B0[i]->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
        unk1B0[i]->func_001B1B80((float)(unk3E4 * (double)D_00275998), vec3D4, 0);
        unk1B0[i]->func_001B1AB0(unk3EC, 0);
        unk1B0[i]->func_001B1BF0(unk3F4);
    }
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

void *C_00103B20::func_00103B20(unsigned int flags)
{
    vtbl = (void *)&D_00282754;
    if (unk1B0) {
        func_001E891B(unk1B0);
    }
    ((C_001C01B0 *)this)->func_001C01B0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

