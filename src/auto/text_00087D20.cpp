/* 7 functions from 0x00087D20 to 0x00088B60, found by Ghidra. */
#include "common.h"

extern int D_002798B4;
extern int D_0027993C;
extern f32 D_002A2034;
extern f32 D_002A2038;
extern f32 D_002A203C;
extern f32 D_002A2040;

extern int D_002799B0;
extern int D_002799A8;
extern char D_002A60B0[];
extern char D_00275678[];
extern char D_002A5348[];
extern char D_002A5870[];
extern char D_002A5FA8[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_001D5760 {
    char pad0[4];
    float f4;
    float f8;
    char padC[8];
    float f14;
    float f18;
    char pad1C[0x14];
    int f30;
    int f34;
    char pad38[0x20];
    unsigned char b58;
    /* move the sprite, marking it dirty only when something changed */
    void SetPos(float x, float y)
    {
        if (f4 != x || f8 != y) {
            f4 = x;
            f8 = y;
            b58 |= 1;
        }
    }
    void SetSize(float w, float h)
    {
        if (f14 != w || f18 != h) {
            f14 = w;
            f18 = h;
            b58 |= 1;
        }
    }
    C_001D5760 *func_001D5760();
    void func_001D5810(void *a, int b, int c, int d);
};

extern float D_00275544;

/* a sprite the separator owns: 0x64 bytes */
struct Sub_00088530 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x14 - 0xC];
    float f14;
    float f18;
    char pad1C[0x28 - 0x1C];
    float f28;
    float f2c;
    char pad30[0x38 - 0x30];
    u32 f38;
    char pad3C[0x58 - 0x3C];
    unsigned char b58;
    char pad59[0x64 - 0x59];
    /* move the sprite, marking it dirty only when something changed */
    void SetPos(float x, float y)
    {
        if (f4 != x || f8 != y) {
            f4 = x;
            f8 = y;
            b58 |= 1;
        }
    }
    void func_001D5760();
    void func_001D5AD0();
    void func_0005E800(int x, int y);
    void func_001D5810(void *a, int b, int c, int d);
};

extern char D_00279920[];
extern char D_0027953C[], D_00279870[], D_00279854[], D_00279838[], D_0027945C[];
extern char D_00279448[], D_00279830[], D_0027981C[], D_00279418[], D_00279408[], D_002793F8[];
extern char D_00279258[];
extern int D_0028F5DC, D_0028F5EC, D_0028F5E0;

struct C_00087D20_Config {
    char pad0[0x4CC];
    void func_00168280();
    void func_001691E0();
    int func_00169490(char *path, int flags);
    int func_00169710(const char *name);
    void func_00168CB0(const char *key, void *def, void *dst);
    void func_00168BE0(const char *key, const char *def, char *dst, int size);
    void func_00168C20(const char *key, int def, int *dst);
};

struct S_00087D20_Vec {
    float x;
    float y;
    float z;
    float w;
};

struct S_00087D20_Sprite {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x28 - 0xC];
    float f28;
    char pad2C[0x58 - 0x2C];
    unsigned char b58;
    void SetPos(float x, float y)
    {
        if (f4 != x || f8 != y) {
            f4 = x;
            f8 = y;
            b58 |= 1;
        }
    }
    void SetF28(float v)
    {
        if (f28 != v) {
            f28 = v;
            b58 |= 1;
        }
    }
};

struct S_00087D20_Label {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x44 - 0xC];
    int f44;
    char pad48[0x4E - 0x48];
    unsigned char b4e;
    void SetPos(float x, float y)
    {
        if (f4 != x || f8 != y) {
            f4 = x;
            f8 = y;
            b4e |= 6;
        }
    }
};

struct S_00087D20_Frame {
    char c2[4];
    char c1[4];
    int count;
    S_00087D20_Vec vSprite2;
    S_00087D20_Vec vLabel2;
    S_00087D20_Vec vLabel1;
    S_00087D20_Vec vSprite1;
    char section[0x104];
    C_00087D20_Config cfg;
    char path[0x104];
};

struct C_00087D20 {
    char pad0[0x24];
    S_00087D20_Label *f24;
    S_00087D20_Label *f28;
    S_00087D20_Sprite *f2C;
    S_00087D20_Sprite *f30;
    void func_00087D20();
};

struct S_00088720_Global {
    char pad0[0x10];
    int f10;
};

extern S_00088720_Global *D_002A8490;

struct SplitScreenSeparator {
    void *vtbl;            /* 0x00 */
    char pad04[0x20];      /* 0x04 */
    Sub_00088530 sub24;    /* 0x24 */
    Sub_00088530 sub88;    /* 0x88 */
    u32 fEC;               /* 0xEC */
    int fF0;               /* 0xF0 */
    SplitScreenSeparator *func_00088530(int param_1);
    void func_00088720(void);
    void func_00157960(void);
};

/* func_00088570's view of the separator: same layout, with the vtable slots */
struct C_00088570 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char padC[0x24 - 0x4];
    Sub_00088530 sub24;
    Sub_00088530 sub88;
    u32 fEC;
    int fF0;
    C_00088570 *func_00088570(int mode);
};

struct S_00088A40_V4 {
    float x;
    float y;
    float z;
    float w;
};

struct DirectionArrowOverlay {
    void *vtbl;            /* 0x00 */
    char pad04[0x20];      /* 0x04 */
    int f24;               /* 0x24 */
    C_001D5760 *f28;       /* 0x28 */
    C_001D5760 *f2C;       /* 0x2C */
    u32 f30;               /* 0x30 */
    f32 f34;               /* 0x34 */
    f32 f38;               /* 0x38 */
    f32 f3C;               /* 0x3C */
    f32 f40;               /* 0x40 */
    u32 f44;               /* 0x44 */
    f32 f48;               /* 0x48 */
    f32 f4C;               /* 0x4C */
    f32 f50;               /* 0x50 */
    DirectionArrowOverlay *func_000888D0(int param_1);
    DirectionArrowOverlay *func_00088950(int a0, int a1);
    void func_00088A40(int a, S_00088A40_V4 *v);
};

void C_00087D20::func_00087D20()
{
    S_00087D20_Frame fr;
    int val;
    S_00087D20_Label *p;

    fr.vLabel1.z = 0.0f;
    fr.vLabel1.y = 0.0f;
    fr.vLabel1.x = 0.0f;
    fr.vLabel1.w = 1.0f;
    fr.vLabel2.z = 0.0f;
    fr.vLabel2.y = 0.0f;
    fr.vLabel2.x = 0.0f;
    fr.vLabel2.w = 1.0f;
    fr.vSprite1.z = 0.0f;
    fr.vSprite1.y = 0.0f;
    fr.vSprite1.x = 0.0f;
    fr.vSprite1.w = 1.0f;
    fr.vSprite2.z = 0.0f;
    fr.vSprite2.y = 0.0f;
    fr.vSprite2.x = 0.0f;
    fr.vSprite2.w = 1.0f;
    fr.cfg.func_00168280();
    func_001ADCC0(fr.path, 0x104, D_0027953C, D_002A5348);
    if (fr.cfg.func_00169490(fr.path, 0) == 0) goto done;
    val = *(int *)(*(int *)((char *)D_002A8490 + 0x2e0) + 8);
    if (val == 0) {
        func_001ADCC0(fr.section, 0x104, D_00279870);
    } else if (val == 2) {
        func_001ADCC0(fr.section, 0x104, D_00279854);
    } else {
        func_001ADCC0(fr.section, 0x104, D_00279838);
    }
    if (fr.cfg.func_00169710(fr.section) == 0) goto done;
    fr.cfg.func_00168CB0(D_0027945C, &D_002A2034, &fr.vLabel1);
    fr.cfg.func_00168BE0(D_00279448, D_00279258, fr.c1, -1);
    fr.cfg.func_00168CB0(D_00279830, &D_002A2034, &fr.vLabel2);
    fr.cfg.func_00168BE0(D_0027981C, D_00279258, fr.c2, -1);
    fr.cfg.func_00168CB0(D_00279418, &D_002A2034, &fr.vSprite1);
    fr.cfg.func_00168CB0(D_00279408, &D_002A2034, &fr.vSprite2);
    fr.cfg.func_00168C20(D_002793F8, 0, &fr.count);
    f2C->SetPos(fr.vSprite1.x, fr.vSprite1.y);
    f2C->SetF28((float)fr.count);
    f30->SetPos(fr.vSprite2.x, fr.vSprite2.y);
    f30->SetF28((float)fr.count);
    f24->SetPos(fr.vLabel1.x, fr.vLabel1.y);
    f28->SetPos(fr.vLabel2.x, fr.vLabel2.y);
    switch (fr.c1[0]) {
    case 'L':
    case 'l':
        val = D_0028F5DC;
        break;
    case 'R':
    case 'r':
        val = D_0028F5EC;
        break;
    case 'C':
    case 'c':
        val = D_0028F5E0;
        break;
    default:
        goto second;
    }
    p = f24;
    if (p->f44 != val) {
        p->f44 = val;
        p->b4e |= 6;
    }
second:
    switch (fr.c2[0]) {
    case 'L':
    case 'l':
        val = D_0028F5DC;
        break;
    case 'R':
    case 'r':
        val = D_0028F5EC;
        break;
    case 'C':
    case 'c':
        val = D_0028F5E0;
        break;
    default:
        goto done;
    }
    p = f28;
    if (p->f44 != val) {
        p->f44 = val;
        p->b4e |= 6;
    }
done:
    fr.cfg.func_001691E0();
}

SplitScreenSeparator *SplitScreenSeparator::func_00088530(int param_1)
{
    ((C_00157600 *)this)->func_00157600(param_1);
    vtbl = &D_002798B4;
    sub24.func_001D5760();
    sub88.func_001D5760();
    fEC = 0;
    return this;
}

C_00088570 *C_00088570::func_00088570(int mode)
{
 int h; int w2=0; int h2=0; Sub_00088530 *s;
 fEC=mode;
 if(!mode){v2();return 0;}
 if(mode==1){mode=0x280;h=2;fF0=0xe0;}
 else {int m=mode;mode=2;if(m==2){h=0x1c0;fF0=0x140;}else{h=0xe0;w2=0x140;h2=2;}}
 func_001ADCC0(D_002A60B0,0x104,D_00275678,D_002A5348,D_002A5FA8);
 s=&sub24;
 s->func_001D5810(D_00279920,0,0,0);
 if(s->f28!=mode){s->f28=mode;s->b58|=1;}
 if(s->f2c!=h){s->f2c=h;s->b58|=1;}
 s->f38&=0xff000000;s->b58|=2;
 if(fEC==3||fEC==4){
 s=&sub88;s->func_001D5810(D_00279920,0,0,0);
 if(s->f28!=w2){s->f28=w2;s->b58|=1;}
 if(s->f2c!=h2){s->f2c=h2;s->b58|=1;}
 s->f38&=0xff000000;s->b58|=2;
 }
 func_001ADCC0(D_002A60B0,0x104,D_00275678,D_002A5870,D_002A5FA8);
 return this;
}

void SplitScreenSeparator::func_00088720(void)
{
    int g;
    float y;

    if (fEC == 1) {
        if (D_002A8490->f10 == 0) {
            y = (float)(fF0 - 2);
            if (sub24.f4 != D_00275544 || y != sub24.f8) {
                sub24.f4 = 0.0f;
                sub24.f8 = y;
                sub24.b58 |= 1;
            }
        } else if (sub24.f4 != D_00275544 || sub24.f8 != D_00275544) {
            sub24.f4 = 0.0f;
            sub24.f8 = 0.0f;
            sub24.b58 |= 1;
        }
    } else if (fEC == 2) {
        if (D_002A8490->f10 == 0) {
            sub24.func_0005E800(fF0 - 2, 0);
        } else {
            sub24.func_0005E800(0, 0);
        }
    } else if (fEC == 3 || fEC == 4) {
        g = D_002A8490->f10;
        if (g == 0) {
            sub24.func_0005E800(0x13e, 0);
            sub88.func_0005E800(0, 0xde);
        } else if (g == 1) {
            sub24.func_0005E800(0, 0);
            sub88.func_0005E800(0, 0xde);
        } else if (g == 2) {
            sub24.func_0005E800(0x13e, 0);
            sub88.func_0005E800(0, 0);
        } else {
            sub24.func_0005E800(0, 0);
            sub88.func_0005E800(0, 0);
        }
        sub88.func_001D5AD0();
    }
    sub24.func_001D5AD0();
    func_00157960();
}

DirectionArrowOverlay *DirectionArrowOverlay::func_000888D0(int param_1)
{
    u32 *p;
    ((C_00157600 *)this)->func_00157600(param_1);
    vtbl = &D_0027993C;
    p = (u32 *)&f34;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f28 = 0;
    f2C = 0;
    f30 = 1;
    f34 = D_002A2034;
    f38 = D_002A2038;
    f3C = D_002A203C;
    f40 = D_002A2040;
    f44 = 0;
    f48 = 1.0f;
    f4C = 100.0f;
    f50 = 50.0f;
    return this;
}

DirectionArrowOverlay *DirectionArrowOverlay::func_00088950(int a0, int a1)
{
    C_001D5760 *o;
    C_001D5760 *p;

    f24 = a0;
    f44 = a1;
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
    p = (C_001D5760 *)func_001E8A44(0x64);
    p = p != 0 ? p->func_001D5760() : 0;
    f28 = p;
    p->func_001D5810(&D_002799B0, 0, 0, 0);
    o = f28;
    if (o->f34 != 0x40c00000) {
        o->f34 = 0x40c00000;
        o->b58 |= 1;
    }
    p = (C_001D5760 *)func_001E8A44(0x64);
    p = p != 0 ? p->func_001D5760() : 0;
    f2C = p;
    p->func_001D5810(&D_002799A8, 0, 0, 0);
    o = f2C;
    if (o->f34 != 0x40c00000) {
        o->f34 = 0x40c00000;
        o->b58 |= 1;
    }
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    return this;
}

void DirectionArrowOverlay::func_00088A40(int a, S_00088A40_V4 *v)
{
    C_001D5760 *o;
    int x = 0;
    int y = (f24 != 1) ? 0xE0 : 0x70;

    if (a >= 0) {
        x = (f24 != 1) ? 0x120 : 0x260;
    }
    o = f28;
    o->SetPos((float)x, (float)y);
    o = f28;
    o->SetSize((float)(x + 0x10), (float)(y + 0x10));
    if (a >= 0) {
        o = f28;
        if (o->f30 != 0x40490fd9) {
            o->f30 = 0x40490fd9;
            o->b58 |= 1;
        }
    } else {
        o = f28;
        if (*(float *)&o->f30 != D_00275544) {
            o->f30 = 0;
            o->b58 |= 1;
        }
    }
    *(S_00088A40_V4 *)&f34 = *v;
}

