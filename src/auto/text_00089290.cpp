/* 9 functions from 0x00089290 to 0x0008A190, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0008A000 {
    undefined4 func_0008A000(int param_1);
};

struct C_0005E840 {
    void func_0005E840(int param_1);
};

struct C_001D6600 {
    void func_001D6600(void);
};

struct C_00089FA0 {
    char pad0[0x24];
    C_001D6600 *unk24;
    C_001D6600 *unk28;
    C_001D6600 *unk2C;
    C_001D6600 *unk30;
    char pad34[0xf4];
    int unk128;
    int unk12C;
    void func_00089FA0(void);
};

struct C_0008A020 {
    char pad0[0x24];
    C_0005E840 *unk24;
    C_0005E840 *unk28;
    void func_0008A020(int param_1);
};

struct C_0008A040 {
    char pad0[0x2c];
    C_0005E840 *unk2C;
    C_0005E840 *unk30;
    void func_0008A040(int param_1);
};

struct C_0008A080 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A080(void);
};

struct C_0008A060 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A060(void);
};

struct C_0008A0A0 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A0A0(void);
};

extern float D_00275AEC;
extern int D_002786A0;
extern int D_0027958C;

/* a clamped range: both limits are reset to 10.0f when they leave it */
struct S_0008A0B0_Clamp {
    char pad0[0x10];
    float f10;
    float f14;
};

struct S_0008A0B0_Elem {
    S_0008A0B0_Clamp *func_001D5AA0(void);
};

struct S_0008A0B0_Mid {
    S_0008A0B0_Clamp *func_0018C070(void);
};

struct S_0008A0B0_Lookup {
    int *func_0018C160(int name);
};

struct S_0008A0B0_Root {
    char pad0[0x2ec];
    S_0008A0B0_Lookup *lookup;
};

extern S_0008A0B0_Root *D_002A8490;

struct W_Widget {
    char pad0[0x14];
    float f14;
    float f18;
    char pad1c[0xc];
    float f28;
    float f2c;
    float f30;
    float f34;
    int f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    unsigned char flags;
    char pad59[3];
    void *f5c;
    void *f60;
    W_Widget *func_001D5760(void);
    void func_001D5810(char *tpl, float x, float y, int z);
};

struct W_Label {
    char pad0[4];
    float f4;
    float f8;
    char padc[0x30];
    float f3c;
    char pad40[4];
    int f44;
    int f48;
    char pad4c[2];
    unsigned char flags;
    char pad4f[0x11];
    W_Label *func_001D5E90(void);
    void func_001D5FA0(int font, char *name, int a, void *tpl);
};

struct S_00089290_Obj {
    int func_0018C780(int a, void *b, int c);
    int *func_0018C160(char *a);
};

extern void *func_001E8A44(int size);
extern char D_00279B30[];
extern char D_00279B10[];
extern char D_00279B00[];
extern char D_00279AF0[];
extern char D_00279AE0[];
extern char D_00279AD0[];
extern char D_00279AC4[];
extern char D_00279AB8[];
extern char D_00279AB0[];
extern char D_00278658[];
extern float D_00279B28;
extern float D_00279B2C;
extern float D_00275544;
extern float D_00278654;
extern float D_0027653C;
extern float D_00278650;
extern int D_0028F5DC;
extern int D_00278664;
extern int D_00278668;
extern int D_0027866C;
extern int D_00278670;
extern char D_00278674;
extern int D_002A60B0;
extern int D_002A60B4;
extern int D_002A60B8;
extern int D_002A60BC;
extern char D_002A60C0;

struct C_00089290 {
    char pad0[0x24];
    W_Label *w24;
    W_Label *w28;
    W_Label *w2c;
    W_Label *w30;
    W_Widget *w34;
    W_Widget *w38;
    W_Widget *w3c;
    W_Widget *w40;
    W_Widget *w44;
    W_Widget *w48;
    W_Widget *w4c;
    W_Widget *w50;
    W_Widget *w54;
    W_Widget *w58;
    W_Widget *w5c;
    W_Widget *w60;
    W_Widget *w64;
    W_Widget *w68;
    W_Widget *w6c;
    W_Widget *w70;
    W_Widget *w74;
    W_Widget *w78;
    W_Widget *w7c;
    W_Widget *w80;
    W_Widget *w84;
    W_Widget *w88;
    W_Widget *w8c;
    W_Widget *w90;
    W_Widget *w94;
    W_Widget *w98;
    W_Widget *w9c;
    C_00089290 *func_00089290(void);
};

/* EditorMenuOverlay */
struct C_0008A0B0 {
    char pad0[0x34];
    S_0008A0B0_Elem *elems[26];
    void func_0008A0B0(void);
    void func_001578D0(void);
};

static void SetWidth(W_Widget *w, float v)
{
    if (w->f34 != v) {
        w->flags |= 1;
        w->f34 = v;
    }
}

static void SetHeight(W_Widget *w, float v)
{
    if (w->f28 != v) {
        w->flags |= 1;
        w->f28 = v;
    }
}

static void SetAngle(W_Widget *w, float v)
{
    if (w->f30 != v) {
        w->f30 = v;
        w->flags |= 1;
    }
}

static void SetUV(W_Widget *w, float a, float b, float c, float d)
{
    w->flags |= 4;
    w->f3c = a;
    w->f40 = b;
    w->f44 = c;
    w->f48 = d;
}

static void SetRGB(W_Widget *w, unsigned int color)
{
    w->f38 = (w->f38 & 0xff000000) | (color & 0xffffff);
    w->flags |= 2;
}

static void SetAlpha(W_Widget *w, unsigned int alpha)
{
    unsigned int color = w->f38 & 0xffffff;
    w->flags |= 2;
    w->f38 = color | (alpha << 24);
}

static void SetPos(W_Widget *w, float x, float y)
{
    if (w->f14 != x || w->f18 != y) {
        w->flags |= 1;
        w->f14 = x;
        w->f18 = y;
    }
}


extern char D_0000FF00;
C_00089290 *C_00089290::func_00089290(void)
{
    W_Widget *o;
    W_Widget **slot;
    W_Label *l;
    int *r;
    int names[2];
    int n;

    D_002A60B0 = D_00278664;
    D_002A60B4 = D_00278668;
    D_002A60B8 = D_0027866C;
    D_002A60BC = D_00278670;
    D_002A60C0 = D_00278674;

    o = (W_Widget *)func_001E8A44(0x64);
    w34 = o ? o->func_001D5760() : 0;
    w34->func_001D5810(D_00279B30, 436.0f, 6.0f, 0);
    { W_Widget *p = w34;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w38 = o ? o->func_001D5760() : 0;
    w38->func_001D5810(D_00279B30, 608.0f, 6.0f, 0);
    { W_Widget *p = w38;
    p->f3c = 1.0f; p->f40 = 0.0f; p->f44 = 0.0f; p->f48 = 1.0f;
    p->flags |= 4;
    }
    { W_Widget *p = w38;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w3c = o ? o->func_001D5760() : 0;
    w3c->func_001D5810(D_00279B30, 436.0f, 106.0f, 0);
    { W_Widget *p = w3c;
    p->f3c = 0.0f; p->f40 = 1.0f; p->f44 = 1.0f; p->f48 = 0.0f;
    p->flags |= 4;
    }
    { W_Widget *p = w3c;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w40 = o ? o->func_001D5760() : 0;
    w40->func_001D5810(D_00279B30, 624.0f, 122.0f, 0);
    { W_Widget *p = w40;
    if (p->f30 != 3.14159265f) { p->f30 = 3.14159265f;  p->flags |= 1; }
    }
    { W_Widget *p = w40; float y = p->f2c; y += D_00279B2C; float x = p->f28; x += D_00279B28;
    if (p->f14 != x || p->f18 != y) { p->f14 = x; p->f18 = y; p->flags |= 1; }
    }
    { W_Widget *p = w40;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w44 = o ? o->func_001D5760() : 0;
    w44->func_001D5810(D_00279B10, 452.0f, 6.0f, 0);
    { W_Widget *p = w44;
    if (p->f28 != 156.0f) { p->f28 = 156.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w44;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w48 = o ? o->func_001D5760() : 0;
    w48->func_001D5810(D_00279B10, 452.0f, 106.0f, 0);
    { W_Widget *p = w48;
    if (p->f28 != 156.0f) { p->f28 = 156.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w48;
    p->f3c = 0.0f; p->f40 = 1.0f; p->f44 = 1.0f; p->f48 = 0.0f;
    p->flags |= 4;
    }
    { W_Widget *p = w48;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w4c = o ? o->func_001D5760() : 0;
    w4c->func_001D5810(D_00279B10, 436.0f, 106.0f, 0);
    { W_Widget *p = w4c;
    if (p->f30 != -1.57079637f) { p->f30 = -1.57079637f;  p->flags |= 1; }
    }
    { W_Widget *p = w4c;
    if (p->f14 != 436.0f || p->f18 != 106.0f) { p->f14 = 436.0f; p->f18 = 106.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w4c;
    if (p->f28 != 84.0f) { p->f28 = 84.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w4c;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w50 = o ? o->func_001D5760() : 0;
    w50->func_001D5810(D_00279B10, 624.0f, 22.0f, 0);
    { W_Widget *p = w50;
    if (p->f30 != 1.57079637f) { p->f30 = 1.57079637f;  p->flags |= 1; }
    }
    { W_Widget *p = w50; float x = p->f28; x += D_00279B28;
    if (p->f14 != x || p->f18 != 22.0f) { p->f14 = x; p->f18 = 22.0f; p->flags |= 1; }
    }
    { W_Widget *p = w50;
    if (p->f28 != 84.0f) { p->f28 = 84.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w50;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w64 = o ? o->func_001D5760() : 0;
    w64->func_001D5810(D_00279B00, 27.0f, 35.0f, 0);
    { W_Widget *p = w64;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w68 = o ? o->func_001D5760() : 0;
    w68->func_001D5810(D_00279AF0, 27.0f, 35.0f, 0);
    { W_Widget *p = w68;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w6c = o ? o->func_001D5760() : 0;
    w6c->func_001D5810(D_00279AE0, 46.0f, 35.0f, 0);
    { W_Widget *p = w6c;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w70 = o ? o->func_001D5760() : 0;
    w70->func_001D5810(D_00279AD0, 46.0f, 35.0f, 0);
    { W_Widget *p = w70;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w74 = o ? o->func_001D5760() : 0;
    w74->func_001D5810(D_00279B00, 27.0f, 74.0f, 0);
    { W_Widget *p = w74;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w78 = o ? o->func_001D5760() : 0;
    w78->func_001D5810(D_00279AF0, 27.0f, 74.0f, 0);
    { W_Widget *p = w78;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w7c = o ? o->func_001D5760() : 0;
    w7c->func_001D5810(D_00279AE0, 46.0f, 74.0f, 0);
    { W_Widget *p = w7c;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w80 = o ? o->func_001D5760() : 0;
    w80->func_001D5810(D_00279AD0, 46.0f, 74.0f, 0);
    { W_Widget *p = w80;
    if (p->f34 != 5.9f) { p->f34 = 5.9f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w54 = o ? o->func_001D5760() : 0;
    w54->func_001D5810(D_00279AC4, 20.0f, 30.0f, 0);
    { W_Widget *p = w54;
    if (p->f28 != 201.0f) { p->f28 = 201.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w54;
    if (p->f34 != 6.0f) { p->f34 = 6.0f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w58 = o ? o->func_001D5760() : 0;
    w58->func_001D5810(D_00279AC4, 221.0f, 30.0f, 0);
    { W_Widget *p = w58;
    if (p->f28 != 201.0f) { p->f28 = 201.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w58;
    p->f3c = 1.0f; p->f40 = 0.0f; p->f44 = 0.0f; p->f48 = 1.0f;
    p->flags |= 4;
    }
    { W_Widget *p = w58;
    if (p->f34 != 6.0f) { p->f34 = 6.0f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w5c = o ? o->func_001D5760() : 0;
    w5c->func_001D5810(D_00279AC4, 20.0f, 69.0f, 0);
    { W_Widget *p = w5c;
    if (p->f28 != 201.0f) { p->f28 = 201.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w5c;
    if (p->f34 != 6.0f) { p->f34 = 6.0f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w60 = o ? o->func_001D5760() : 0;
    w60->func_001D5810(D_00279AC4, 221.0f, 69.0f, 0);
    { W_Widget *p = w60;
    if (p->f28 != 201.0f) { p->f28 = 201.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w60;
    p->f3c = 1.0f; p->f40 = 0.0f; p->f44 = 0.0f; p->f48 = 1.0f;
    p->flags |= 4;
    }
    { W_Widget *p = w60;
    if (p->f34 != 6.0f) { p->f34 = 6.0f;  p->flags |= 1; }
    }

    n = 0x15;
    slot = &w88;
    for (; n <= 0x19; slot++) {
        o = (W_Widget *)func_001E8A44(0x64);
        *slot = o ? o->func_001D5760() : 0;
        (*slot)->func_001D5810(D_00278658, (float)(n - 0x15) * D_00278650, 366.0f, 0);
        { W_Widget *p = *slot;
          p->f3c = 0.0f; p->f40 = 1.0f; p->f44 = 0.99f; p->f48 = 0.0f; p->flags |= 4;
        }
        { W_Widget *p = *slot; if (p->f34 != 6.0f) { p->f34 = 6.0f; p->flags |= 1; } }
        n++;
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w84 = o ? o->func_001D5760() : 0;
    w84->func_001D5810(D_00278658, 0, 398.0f, 0);
    { W_Widget *p = w84;
      p->f3c = *(volatile float *)&p->f4c * D_00278654; p->flags |= 4; p->f40 = *(volatile float *)&p->f4c * D_00275544;
      p->f44 = *(volatile float *)&p->f50 * D_0027653C; p->f48 = *(volatile float *)&p->f50 * D_00275544;
    }
    { W_Widget *p = w84;
    if (p->f28 != 640.0f) { p->f28 = 640.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w84;
    if (p->f2c != 50.0f) { p->f2c = 50.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w84;
    if (p->f34 != 6.0f) { p->f34 = 6.0f;  p->flags |= 1; }
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w9c = o ? o->func_001D5760() : 0;
    w9c->func_001D5810(D_00279AC4, 448.0f, 111.0f, 0);
    { W_Widget *p = w9c;
    if (p->f28 != D_00275544) { p->f28 = 0.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w9c;
    if (p->f2c != 10.0f) { p->f2c = 10.0f;  p->flags |= 1; }
    }
    { W_Widget *p = w9c;
      p->f38 = (p->f38 & 0xff00ff00) | (int)&D_0000FF00; p->flags |= 2;
    }
    { W_Widget *p = w9c;
      unsigned char flags = p->flags | 2; int color = p->f38; p->flags = flags; color |= 0xff000000; p->f38 = color;
    }
    names[0] = (int)&D_002786A0;
    names[1] = (int)&D_0027958C;
    ((S_00089290_Obj *)*(int *)((char *)D_002A8490 + 0x2ec))->func_0018C780(2, names, 0);
    r = ((S_00089290_Obj *)*(int *)((char *)D_002A8490 + 0x2ec))->func_0018C160((char *)&D_002786A0);
    n = r ? *r : 0;
    r = ((S_00089290_Obj *)*(int *)((char *)D_002A8490 + 0x2ec))->func_0018C160((char *)&D_0027958C);
    r = r ? (int *)*r : 0;

    l = (W_Label *)func_001E8A44(0x60);
    w24 = l ? l->func_001D5E90() : 0;
    w24->func_001D5FA0(n, (char *)&D_002786A0, 75, D_00279AB8);
    { W_Label *p = w24;
    if (p->f4 != 66.0f || p->f8 != 37.0f) {
        p->f4 = 66.0f; p->f8 = 37.0f;
         p->flags |= 6; }
    }
    { W_Label *p = w24;
    if (p->f48 != 0xffcccccc) {
        p->flags |= 8;
        p->f48 = (p->f48 & 0xffcccccc) | 0xcccccc; }
    }
    { W_Label *p = w24;
    if (p->f44 != D_0028F5DC) {
        p->f44 = D_0028F5DC;
         p->flags |= 6; }
    }
    { W_Label *p = w24;
    if (p->f3c != 5.9f) { p->f3c = 5.9f;  p->flags |= 4; }
    }

    l = (W_Label *)func_001E8A44(0x60);
    w28 = l ? l->func_001D5E90() : 0;
    w28->func_001D5FA0((int)r, (char *)&D_0027958C, 75, D_00279AB8);
    { W_Label *p = w28;
    if (p->f4 != 66.0f || p->f8 != 35.0f) {
        p->f4 = 66.0f; p->f8 = 35.0f;
         p->flags |= 6; }
    }
    { W_Label *p = w28;
    if (p->f48 != 0xffbfa35a) {
        p->flags |= 8;
        p->f48 = (p->f48 & 0xffbfa35a) | 0xbfa35a; }
    }
    { W_Label *p = w28;
    if (p->f44 != D_0028F5DC) {
        p->f44 = D_0028F5DC;
         p->flags |= 6; }
    }
    { W_Label *p = w28;
    if (p->f3c != 5.9f) { p->f3c = 5.9f;  p->flags |= 4; }
    }

    l = (W_Label *)func_001E8A44(0x60);
    w2c = l ? l->func_001D5E90() : 0;
    w2c->func_001D5FA0(n, (char *)&D_002786A0, 75, D_00279AB0);
    { W_Label *p = w2c;
    if (p->f4 != 66.0f || p->f8 != 76.0f) {
        p->f4 = 66.0f; p->f8 = 76.0f;
         p->flags |= 6; }
    }
    { W_Label *p = w2c;
    if (p->f48 != 0xffcccccc) {
        p->flags |= 8;
        p->f48 = (p->f48 & 0xffcccccc) | 0xcccccc; }
    }
    { W_Label *p = w2c;
    if (p->f44 != D_0028F5DC) {
        p->f44 = D_0028F5DC;
         p->flags |= 6; }
    }
    { W_Label *p = w2c;
    if (p->f3c != 5.9f) { p->f3c = 5.9f;  p->flags |= 4; }
    }

    l = (W_Label *)func_001E8A44(0x60);
    w30 = l ? l->func_001D5E90() : 0;
    w30->func_001D5FA0((int)r, (char *)&D_0027958C, 75, D_00279AB0);
    { W_Label *p = w30;
    if (p->f4 != 66.0f || p->f8 != 74.0f) {
        p->f4 = 66.0f; p->f8 = 74.0f;
         p->flags |= 6; }
    }
    { W_Label *p = w30;
    if (p->f48 != 0xffbfa35a) {
        p->flags |= 8;
        p->f48 = (p->f48 & 0xffbfa35a) | 0xbfa35a; }
    }
    { W_Label *p = w30;
    if (p->f44 != D_0028F5DC) {
        p->f44 = D_0028F5DC;
         p->flags |= 6; }
    }
    { W_Label *p = w30;
    if (p->f3c != 5.9f) { p->f3c = 5.9f;  p->flags |= 4; }
    }

    return this;
}

void C_00089FA0::func_00089FA0(void)
{
    if (unk128 == 0 && unk12C != 0) {
        unk24->func_001D6600();
        unk30->func_001D6600();
    } else if (unk128 != 0 && unk12C == 0) {
        unk28->func_001D6600();
        unk2C->func_001D6600();
    } else {
        unk24->func_001D6600();
        unk2C->func_001D6600();
    }
}

undefined4 C_0008A000::func_0008A000(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 == 0) {
    return 0;
  }
  *(int *)(in_ECX + 0x120) = param_1;
  return 1;
}

void C_0008A020::func_0008A020(int param_1)
{
    unk24->func_0005E840(param_1);
    unk28->func_0005E840(param_1);
}

void C_0008A040::func_0008A040(int param_1)
{
    unk2C->func_0005E840(param_1);
    unk30->func_0005E840(param_1);
}

void C_0008A060::func_0008A060(void) {
    unk128 = 1;
    unk12C = 0;
}

void C_0008A080::func_0008A080(void) {
    unk128 = 0;
    unk12C = 1;
}

void C_0008A0A0::func_0008A0A0(void) {
    unk128 = 0;
    unk12C = 0;
}

void C_0008A0B0::func_0008A0B0(void)
{
    int names[2] = { (int)&D_002786A0, (int)&D_0027958C };
    S_0008A0B0_Elem **e = elems;
    int n = 26;
    int i;
    int *r;
    S_0008A0B0_Lookup *lk;
    S_0008A0B0_Clamp *o;

    do {
        o = (*e)->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        e++;
        n--;
    } while (n != 0);
    for (i = 0; i < 2; i++) {
        lk = D_002A8490->lookup;
        r = lk->func_0018C160(names[i]);
        if (r != 0 && *r != 0) {
            o = ((S_0008A0B0_Mid *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    func_001578D0();
}

