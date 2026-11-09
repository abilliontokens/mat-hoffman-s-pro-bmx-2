/* 12 functions from 0x00102BB0 to 0x00103B60, found by Ghidra. */
#include "common.h"
#include <string.h>
extern char D_0027DE5C[];

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
    void func_001B17D0(char *s);
    void func_001B13A0(char *a, char *b, int c, int d);
};
extern float D_00275998;

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

struct S_Cfg {
    void func_00168550(const void *key, char *buf, int size);
    void func_00168BE0(const void *key, char *a, char *b, int size);
    int func_00168C20(const void *key, int def, int *out);
    int func_00168C50(const void *key, float def, float *out);
    int func_00168CB0(const void *key, S_00103_Vec4 *def, S_00103_Vec4 *out);
};
extern char D_0027DE5C[], D_0027DE4C[], D_0027DE38[], D_0027DE2C[], D_00282898[], D_00282890[], D_00282880[];
extern char D_00282874[], D_0028286C[], D_0028285C[], D_00282854[], D_00282844[], D_0028283C[], D_0027DE44[];
extern char D_0028282C[], D_00282824[], D_0028281C[], D_00282810[], D_00282800[], D_002827EC[], D_0027C294[];
extern int D_0028F5EC, D_0028F5E8, D_0028F5E4, D_0028F5E0, D_0028F5DC;
int func_001E8858(float f);
void *func_001E8A44(unsigned int n);
struct C_001BF600 { void func_001BF600(S_Cfg *c); };
struct C_001B12C0 { C_001B12C0 *func_001B12C0(int a); };
struct C_001B13A0 { static void __stdcall func_001B13A0(char *a, char *b, int c, int d); };
struct C_001C01E0 { void func_001C01E0(char *s); };
struct C_001577A0 { void func_001577A0(C_001B1980 *o, int a); };
struct C_001B17D0 { void func_001B17D0(char *s); };
struct S_00103_Btn {
    void func_001B1860(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
    void func_001B2270(int c);
    void func_001B19C0(int a, int b, int c);
    void func_001B1B80(float f, S_00103_Vec4 v, int c);
    void func_001B1AB0(int a, int b);
    void func_001B1BF0(int a);
    void func_001B19A0(int a);
    void func_001B17D0(char *s);
};
struct C_00103450 {
    void *vtbl;
    char pad4[0x24];
    int unk28;
    char pad2C[0xC4];
    char unkF0[0x80];
    int unk170;
    char pad174[4];
    int unk178;
    char pad17C[0x14];
    int unk190;
    char pad194[0x1C];
    C_001B1980 **unk1B0;
    char pad1B4[4];
    char unk1B8[0x104];
    char pad2BC[0x104];
    int unk3C0;
    int unk3C4;
    int unk3C8;
    int unk3CC;
    int unk3D0;
    S_00103_Vec4 vec3D4;
    float unk3E4;
    int unk3E8;
    int unk3EC;
    int unk3F0;
    int unk3F4;
    C_00103450 *func_00103450(S_Cfg *cfg, int a);
    C_00103450 *func_00103450(int a, S_Cfg *cfg);
};

struct L_00103450 {
    float v[4];
    int f;
    int i1;
    float c1[4];
    int i2;
    int i3;
    float c2[4];
    char tmp[0x14];
    char buf[0x190];
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

void C_00102E20::func_00102BB0()
{
    int i;
    ((C_001BF660 *)this)->func_001BF660();
    i = 0;
    if (unk3CC) {
        for (; i < unk170; i++) {
            unk1B0[i]->func_001B1980();
            unk1B0[i]->func_001B2270(unk3D0);
            unk1B0[i]->func_001B19A0(unk178);
            unk1B0[i]->func_001B19C0(unk3C4, unk3C8 - 4, 0);
            if (unk3DC) {
                unk1B0[i]->func_001B1980();
                unk1B0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
            } else {
                unk1B0[i]->func_001B1980();
                unk1B0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
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
            unk1B0[i]->func_001B2270(unk3C0);
            unk1B0[i]->func_001B19A0(unk178);
            unk1B0[i]->func_001B19C0(unk3C4, unk3C8 - 4, 0);
            if (unk3DC) {
                unk1B0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
            } else {
                unk1B0[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
            }
        }
    }
}

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

C_00103450 *C_00103450::func_00103450(int a, S_Cfg *cfg)
{
    L_00103450 l;

    ((C_001BF600 *)this)->func_001BF600(cfg);
    l.c1[0] = l.c1[1] = l.c1[2] = 0.0f; l.c1[3] = 1.0f;
    l.c2[0] = l.c2[1] = l.c2[2] = 0.0f; l.c2[3] = 1.0f;
    cfg->func_00168550(D_0027DE5C, unk1B8, 0x104);
    cfg->func_00168BE0(D_0027DE4C, unk1B8, unkF0, 0x80);
    cfg->func_00168C20(D_0027DE38, 0, &unk3C4);
    cfg->func_00168C20(D_0027DE2C, 0, &unk3C8);
    cfg->func_00168C20(D_00282898, 1, &unk170);
    cfg->func_00168BE0(D_00282880, D_00282890, l.tmp, 0x14);
    l.v[0] = 0.0f; l.v[1] = 0.0f; l.v[2] = 0.0f; l.v[3] = 1.0f;
    cfg->func_00168CB0(D_00282874, (S_00103_Vec4 *)l.v, &vec3D4);
    cfg->func_00168C50(D_0028286C, 0.0f, &unk3E4);
    cfg->func_00168C20(D_0028285C, 0, &l.i3);
    cfg->func_00168C20(D_00282854, 0xff, &l.i1);
    cfg->func_00168C20(D_00282844, 0, &l.i2);
    cfg->func_00168C50(D_0028283C, 0.0f, (float *)&l.f);
    unk3E8 = l.i3;
    unk3F0 = l.i2;
    unk3EC = l.i1;
    unk3F4 = *(int *)&l.f;
    l.v[0] = 40.0f; l.v[1] = 40.0f; l.v[2] = 40.0f; l.v[3] = 1.0f;
    cfg->func_00168CB0(D_0027DE44, (S_00103_Vec4 *)l.v, (S_00103_Vec4 *)l.c1);
    unk3C0 = (((int)l.c1[0] | 0xffffff00) << 8 | ((int)l.c1[1] & 0xff)) << 8 | ((int)l.c1[2] & 0xff);
    l.v[0] = 255.0f; l.v[1] = 255.0f; l.v[2] = 255.0f; l.v[3] = 1.0f;
    if (cfg->func_00168CB0(D_0028282C, (S_00103_Vec4 *)l.v, (S_00103_Vec4 *)l.c2))
        unk3CC = 1;
    unk3D0 = (((int)l.c2[0] | 0xffffff00) << 8 | ((int)l.c2[1] & 0xff)) << 8 | ((int)l.c2[2] & 0xff);
    cfg->func_00168C20(D_00282824, 0, &unk190);
    unk28 = a;
    if (strcmp(l.tmp, "Right") == 0)
        unk178 = D_0028F5EC;
    else if (strcmp(l.tmp, "CenterBoth") == 0)
        unk178 = D_0028F5E8;
    else if (strcmp(l.tmp, "CenterVertical") == 0)
        unk178 = D_0028F5E4;
    else if (strcmp(l.tmp, "CenterHorizontal") == 0)
        unk178 = D_0028F5E0;
    else
        unk178 = D_0028F5DC;
    cfg->func_00168550(D_0027C294, l.buf, 0x190);
    if (unk190 != 0) {
        ((C_001C01E0 *)this)->func_001C01E0(l.buf);
    } else {
        C_001B1980 *q;

        unk170 = 1;
        unk1B0 = (C_001B1980 **)func_001E8A44(4);
        q = (C_001B1980 *)func_001E8A44(0x184);
        if (q)
            q = (C_001B1980 *)((C_001B12C0 *)q)->func_001B12C0(1);
        else
            q = 0;
        *unk1B0 = q;
        (*unk1B0)->func_001B13A0(unk1B8, unkF0, 0, strlen(l.buf));
        ((C_001577A0 *)this)->func_001577A0(*unk1B0, -1);
        (*unk1B0)->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
        (*unk1B0)->func_001B17D0(l.buf);
        (*unk1B0)->func_001B19A0(unk178);
        (*unk1B0)->func_001B2270(unk3C0);
        (*unk1B0)->func_001B19C0(unk3C4, unk3C8, 0);
        (*unk1B0)->func_001B1B80(*(volatile float *)&unk3E4 * D_00275998, vec3D4, 0);
        (*unk1B0)->func_001B1AB0(l.i1, 0);
        (*unk1B0)->func_001B1BF0(*(int *)&l.f);
    }
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

