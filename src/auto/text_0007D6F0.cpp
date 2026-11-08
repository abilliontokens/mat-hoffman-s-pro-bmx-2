/* 10 functions from 0x0007D6F0 to 0x0007E690, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0007E0A0 {
    undefined4 func_0007E0A0(byte param_1);
};

struct C_0007E1C0 {
    undefined4 func_0007E1C0(byte param_1);
};

struct C_0007E200 {
    undefined4 func_0007E200(byte param_1);
};

struct C_0007E050_quat {
    float x, y, z, w;
};

struct C_0007E050_item {
    C_0007E050_quat q0, q1, q2;
    char pad[0x40];
};

struct C_0007E050 {
    char pad0[0x30];
    C_0007E050_item items[0x96];
    C_0007E050 *func_0007E050(void);
};

struct GObj4_7E {
    char pad0[0x930];
    char *p930;
    char pad934[0x134];
    char *fA68;
    char padA6C[0x464];
    char *fED0;
    char padED4[0x3c];
    char *fF10;
};

struct GObj2E8_7E {
    char pad0[4];
    GObj4_7E *p4;
};

struct GObjRoot_7E {
    char pad0[0x270];
    int f270;
    int f274;
    char pad278[0x2e8 - 0x278];
    GObj2E8_7E *p2E8;
    char *p2EC;
};

extern int D_002B9060;
extern int D_002B905C;
extern int D_00278AF0;

struct C_Rect24_7E {
    int x;
    int y;
    int w;
    int h;
    int f10;
    int f14;
};

struct C_Creator_7E {
    int func_00026500(int a, int b);
};

extern C_Creator_7E *D_002A7CB8;

struct C_VCall8_7E {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
    int f4;
};

extern C_VCall8_7E *D_002EFDB8;

struct C_12B2B0_7E {
    char pad0[0x1e0];
    C_Rect24_7E rect;
    void func_0012B2B0(void *a, void *b);
};

struct C_Cache_7E {
    char pad0[0x90];
    int f90;
};

struct C_0007E0C0 {
    void *vtbl;
    char pad4[0xD0];
    C_Cache_7E *fD4;
    undefined4 func_0007E0C0(void);
    void func_0006D100(void);
    void func_0006CEC0(void);
    void func_00157960(void);
};

struct SetterObj_7E {
    void *func_001B12C0(int a);
    void *func_001B13A0(int a, int b, int c, int len);
    void func_001B17D0(char *s);
    void func_001B1980();
    float func_001B15E0();
    void func_001B1A30(float x, float y, int z);
    void func_001B19C0(int x, int y, int z);
    void func_001B19A0(int p);
    void func_001B2270(unsigned int color);
    void func_001B1860(int, float, int, float, float, float, float, int, float, float, float, float, float);
};
struct C_7E_Manager {
    char *func_00094810(int);
    char *func_00094840();
    int func_00094890();
};
struct C_7E_Sub { char pad[0x2fc]; C_7E_Manager *manager; };
struct C_7E_Root { char pad[0x2e0]; C_7E_Sub *sub; };
struct C_7E_Object { void func_001D6600(); };
struct C_0007E2B0 {
    char pad0[0x64];
    int f64, f68, f6c;
    C_7E_Object *f70, *f74;
    char pad78[0xc];
    int f84, f88;
    char pad8c[0x10];
    int f9c, fa0, fa4, fa8;
    char padac[0x10];
    float fbc;
    char padc0[0xc];
    SetterObj_7E *items[4];
    int ys[4];
    void func_0007E2B0();
    void func_0007E220();
    void func_00072450();
    void func_00072330();
};
extern float D_002755E8;
extern float D_00275460;

struct C_0007E220 {
    char pad0[0xac];
    int fAC;
    char padB0[0x24];
    SetterObj_7E *fD4;
    void func_0007E220(void);
};

extern GObjRoot_7E *D_002A8490;
extern int D_00277038;
void func_001ADCC0(char *buf, int size, char *fmt, ...);
void func_001AC330(char *dest, char *fmt, char *arg);

void *func_001E8A44(int size);
extern int D_00278664, D_00278668, D_0027866C, D_00278670;
extern u8 D_00278674;
extern int D_002A60B0, D_002A60B4, D_002A60B8, D_002A60BC;
extern u8 D_002A60C0;
extern char D_002786A0[];      /* "nosebleedbold16" */
extern char D_00278690[];      /* "nosebleedbold18" */
extern char D_00278658[];      /* "letterbox" */
extern char D_00278600[];      /* "Dimmer" */
extern char D_00278648[];      /* "xsymbol" */
extern char D_00278624[];      /* "xsymbolhighlighted" */
extern char D_00278638[];      /* "symbol" */
extern char D_00278608[];      /* "triangle" */
extern char D_002786B0[];      /* "overlay" */
extern char D_00279008[];      /* "circlesymbol" */
extern char D_00278FF0[];      /* "circlesymbolhighlighted" */
extern char D_00279038[];      /* "ui_updown" */
extern char D_00279044[];      /* "ui_leftright" */
extern char D_00275678[];      /* "%s%s" */
extern char D_002A5870[];      /* "tracks\" */
extern char D_002A5FA8[];      /* "textures\" */
extern float D_00278650;       /* 128.0f */
extern float D_00278654;       /* 127.0f */
extern float D_00275544;       /* 0.0f */
extern float D_0027653C;       /* 15.0f */
extern float D_00279054;       /* 84.0f */

struct S17_7D { char b[17]; };

struct C_0018C780Obj {
    void func_0018C780(int a, void **arr, int b);
};

/* XboxScreenIcon */
struct Icon_7D {
    void *vtbl;
    char pad4[0x20];
    float f24;
    float f28;
    float f2c;
    int f30;
    int f34;
    u32 f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    void *f54;
    u8 f58;
    char pad59[0xb];
    Icon_7D *func_001D5760();
    void func_001D5810(int tex, float b, float c, int d);
    float texW() { return *(volatile float *)&f4c; }
    float texH() { return *(volatile float *)&f50; }
    void setW(float v) { if (f28 != v) { u8 f = f58 | 1; f28 = v; f58 = f; } }
    void setH(float v) { if (f2c != v) { u8 f = f58 | 1; f2c = v; f58 = f; } }
    void updateUV() {
        float left = texW() * D_00278654;
        u8 f = f58 | 4;
        f3c = left;
        f40 = texW() * D_00275544;
        f44 = texH() * D_0027653C;
        f48 = texH() * D_00275544;
        f58 = f;
    }
};

struct C_Arg_7D {
    char pad0[0x1d0];
    int f1d0;
};

struct C_0007D6F0 {
    char pad0[0x64];
    SetterObj_7E *texts[8];
    char pad84[0x14];
    Icon_7D *f98, *f9c, *fa0, *fa4, *fa8, *fac, *fb0, *fb4, *fb8, *fbc;
    int ys[8];
    char padE0[4];
    Icon_7D *fE4[5];
    Icon_7D *fF8[5];
    Icon_7D *f10c[16];
    Icon_7D *f14c;
    char pad150[0xc];
    C_Arg_7D *f15c;
    char pad160[0x40];
    int f1a0;
    C_0007D6F0 *func_0007D6F0(C_Arg_7D *arg);
    void func_0006A360();
    void func_001577A0(void *p, int n);
};

struct C_0007E1E0 {
    void *func_0007E1E0(unsigned int flags);
    void func_0006E480(void);
};

void func_001E891B(void *ptr);

struct C_Panel_7D {
    void func_00093120(void);
    void func_00093970(float a, float b, int c, int d, int e, int f);
    void func_00093890(float a, float b, int c, int d, int e, int f);
    void func_00093C80(float a, float b, int c, int d, int e, int f);
    void func_00093CF0(float a, float b, int c, int d, int e, int f);
    void func_00094690(float a, float b, int c, int d, int e, int f);
    void func_000941A0(int g, float a, float b, int c, int d, int e, int f);
    void func_000940D0(float a, float b, int c, int d, int e, int f);
    void func_00093A00(float a, float b, int c, int d, int e, int f);
    void func_000942F0(float a, float b, int c, int d, int e, int f);
    void func_00094410(float a, float b, int c, int d, int e, int f);
};
extern int D_002B9058;
extern int D_002B9054;
extern int D_0028F5E0;
struct C_Save_7D {
    char pad0[0x164];
    int f164;
    int f168;
    char pad16C[0x34];
    C_Panel_7D *f1a0;
    int f1a4;
    char pad1A8[0x30];
    int f1d8;
    char pad1DC[0x20];
    int f1fc;
    undefined4 func_0007DDD0(void);
    void func_0006B4B0(void);
    void func_0006AA90(void);
    undefined4 func_00157960(void);
};


C_0007D6F0 *C_0007D6F0::func_0007D6F0(C_Arg_7D *arg)
{
    Icon_7D *w;
    int i, j, y;
    float fy;
    char bufA[16];
    char bufB[8];

    {
        void *fonts[2];
        fonts[0] = D_002786A0;
        fonts[1] = D_00278690;
        ((C_0018C780Obj *)D_002A8490->p2EC)->func_0018C780(2, fonts, 0);
    }
    f15c = arg;
    D_002A60B0 = D_00278664;
    D_002A60B4 = D_00278668;
    D_002A60B8 = D_0027866C;
    D_002A60BC = D_00278670;
    D_002A60C0 = D_00278674;

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    f98 = w;
    w->func_001D5810((int)D_00278658, 0.0f, 0.0f, 0);
    f98->setW(640.0f);
    f98->setH(50.0f);
    f98->updateUV();

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    f9c = w;
    w->func_001D5810((int)D_00278658, 0.0f, 398.0f, 0);
    f9c->setW(640.0f);
    f9c->setH(50.0f);
    f9c->updateUV();

    for (i = 0; i < 5; i++) {
        w = (Icon_7D *)func_001E8A44(0x64);
        if (w != 0) {
            w = w->func_001D5760();
        } else {
            w = 0;
        }
        fE4[i] = w;
        fy = (float)i * D_00278650;
        w->func_001D5810((int)D_00278658, fy, 50.0f, 0);
        w = (Icon_7D *)func_001E8A44(0x64);
        if (w != 0) {
            w = w->func_001D5760();
        } else {
            w = 0;
        }
        fF8[i] = w;
        w->func_001D5810((int)D_00278658, fy, 366.0f, 0);
        w = fF8[i];
        w->f3c = 0.0f;
        w->f48 = 0.0f;
        {
            u8 f = w->f58 | 4;
            w->f40 = 1.0f;
            w->f44 = 0.99f;
            w->f58 = f;
        }
    }

    i = 0;
    for (j = 0; j < 16; j++) {
        w = (Icon_7D *)func_001E8A44(0x64);
        if (w != 0) {
            w = w->func_001D5760();
        } else {
            w = 0;
        }
        f10c[j] = w;
        if (j % 2 != 0) {
            w->func_001D5810((int)D_002786B0, 100.0f, (float)((j / 2) * 0x23) + D_00279054, i);
        } else {
            w->func_001D5810((int)D_002786B0, 321.0f, (float)((j / 2) * 0x23) + D_00279054, i);
        }
        w = f10c[j];
        w->f3c = 1.0f;
        w->f48 = 1.0f;
        {
            u8 f = w->f58 | 4;
            w->f40 = 0.0f;
            w->f44 = 0.0f;
            w->f58 = f;
        }
        w->setW(221.0f);
    }

    for (y = 92; y < 372; y += 35) {
        SetterObj_7E *t;

        i++;
        func_001ADCC0(bufA, 0x104, (char *)&D_00277038, i);
        func_001AC330(bufB, D_002A8490->p2E8->p4->fED0, bufA);
        t = (SetterObj_7E *)func_001E8A44(0x184);
        if (t != 0) {
            t = (SetterObj_7E *)t->func_001B12C0(1);
        } else {
            t = 0;
        }
        texts[i - 1] = t;
        t->func_001B13A0((int)D_00278690, (int)D_00278690, 0, 0x10);
        ys[i - 1] = y;
        texts[i - 1]->func_001B19C0(0x140, y, 0);
        texts[i - 1]->func_001B19A0(D_0028F5E0);
        func_001577A0(texts[i - 1], -1);
        texts[i - 1]->func_001B17D0(bufB);
    }

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    f14c = w;
    w->func_001D5810((int)D_00278600, 0.0f, 0.0f, 0);
    {
        u8 f = f14c->f58;
        f14c->f38 &= 0xff000000;
        f14c->f58 = f | 2;
    }
    f14c->f58 |= 2;
    ((u8 *)&f14c->f38)[3] = 0x80;
    f14c->setH(448.0f);
    f14c->setW(640.0f);

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    fa0 = w;
    w->func_001D5810((int)D_00278648, 491.0f, 388.0f, 0);

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    fac = w;
    w->func_001D5810((int)D_00278624, 491.0f, 388.0f, 0);

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    fa4 = w;
    w->func_001D5810((int)D_00278638, 365.0f, 388.0f, 0);

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    fb0 = w;
    w->func_001D5810((int)D_00278608, 368.0f, 388.0f, 0);

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    fa8 = w;
    w->func_001D5810((int)D_00279008, 235.0f, 388.0f, 0);

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    fb4 = w;
    w->func_001D5810((int)D_00278FF0, 235.0f, 388.0f, 0);

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    fb8 = w;
    w->func_001D5810((int)D_00279044, 25.0f, 385.0f, 0);
    w = fb8;
    if (w->f24 != 0.65f) {
        w->f24 = 0.65f;
        if (w->f54 != 0) {
            w->f24 = 0.325f;
            w->f58 |= 1;
        }
    }

    w = (Icon_7D *)func_001E8A44(0x64);
    if (w != 0) {
        w = w->func_001D5760();
    } else {
        w = 0;
    }
    fbc = w;
    w->func_001D5810((int)D_00279038, 168.0f, 385.0f, 0);
    w = fbc;
    if (w->f24 != 0.65f) {
        w->f24 = 0.65f;
        if (w->f54 != 0) {
            w->f24 = 0.325f;
            w->f58 |= 1;
        }
    }

    func_001ADCC0((char *)&D_002A60B0, 0x104, D_00275678, (int)D_002A5870, (int)D_002A5FA8);
    func_0006A360();
    f1a0 = f15c->f1d0;
    return this;
}

extern "C" unsigned int __cdecl strlen(const char *);

