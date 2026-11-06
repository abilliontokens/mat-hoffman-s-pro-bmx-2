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
    unsigned char flags : 8;
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

static void SetPos(W_Widget *w, float x, float y)
{
    if (w->f14 != x || w->f18 != y) {
        w->flags |= 1;
        w->f14 = x;
        w->f18 = y;
    }
}


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
    if (w34->f34 != 5.9f) { w34->flags |= 1; w34->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w38 = o ? o->func_001D5760() : 0;
    w38->func_001D5810(D_00279B30, 608.0f, 6.0f, 0);
    w38->flags |= 4;
    w38->f3c = 1.0f; w38->f40 = 0.0f; w38->f44 = 0.0f; w38->f48 = 1.0f;
    if (w38->f34 != 5.9f) { w38->flags |= 1; w38->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w3c = o ? o->func_001D5760() : 0;
    w3c->func_001D5810(D_00279B30, 436.0f, 106.0f, 0);
    w3c->flags |= 4;
    w3c->f3c = 0.0f; w3c->f40 = 1.0f; w3c->f44 = 1.0f; w3c->f48 = 0.0f;
    if (w3c->f34 != 5.9f) { w3c->flags |= 1; w3c->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w40 = o ? o->func_001D5760() : 0;
    w40->func_001D5810(D_00279B30, 624.0f, 122.0f, 0);
    if (w40->f30 != 3.14159265f) { w40->f30 = 3.14159265f; w40->flags |= 1; }
    if (w40->f14 != w40->f28 + D_00279B28 || w40->f18 != w40->f2c + D_00279B2C) {
        w40->flags |= 1;
        w40->f14 = w40->f28 + D_00279B28;
        w40->f18 = w40->f2c + D_00279B2C;
    }
    if (w40->f34 != 5.9f) { w40->flags |= 1; w40->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w44 = o ? o->func_001D5760() : 0;
    w44->func_001D5810(D_00279B10, 452.0f, 6.0f, 0);
    if (w44->f28 != 156.0f) { w44->flags |= 1; w44->f28 = 156.0f; }
    if (w44->f34 != 5.9f) { w44->flags |= 1; w44->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w48 = o ? o->func_001D5760() : 0;
    w48->func_001D5810(D_00279B10, 452.0f, 106.0f, 0);
    if (w48->f28 != 156.0f) { w48->flags |= 1; w48->f28 = 156.0f; }
    w48->flags |= 4;
    w48->f3c = 0.0f; w48->f40 = 1.0f; w48->f44 = 1.0f; w48->f48 = 0.0f;
    if (w48->f34 != 5.9f) { w48->flags |= 1; w48->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w4c = o ? o->func_001D5760() : 0;
    w4c->func_001D5810(D_00279B10, 436.0f, 106.0f, 0);
    if (w4c->f30 != -1.5707963f) { w4c->f30 = -1.5707963f; w4c->flags |= 1; }
    if (w4c->f14 != 436.0f || w4c->f18 != 106.0f) { w4c->flags |= 1; w4c->f14 = 436.0f; w4c->f18 = 106.0f; }
    if (w4c->f28 != 84.0f) { w4c->flags |= 1; w4c->f28 = 84.0f; }
    if (w4c->f34 != 5.9f) { w4c->flags |= 1; w4c->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w50 = o ? o->func_001D5760() : 0;
    w50->func_001D5810(D_00279B10, 624.0f, 22.0f, 0);
    if (w50->f30 != 1.5707963f) { w50->f30 = 1.5707963f; w50->flags |= 1; }
    if (w50->f14 != w50->f28 + D_00279B28 || w50->f18 != 22.0f) {
        w50->flags |= 1;
        w50->f14 = w50->f28 + D_00279B28;
        w50->f18 = 22.0f;
    }
    if (w50->f28 != 84.0f) { w50->flags |= 1; w50->f28 = 84.0f; }
    if (w50->f34 != 5.9f) { w50->flags |= 1; w50->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w64 = o ? o->func_001D5760() : 0;
    w64->func_001D5810(D_00279B00, 27.0f, 35.0f, 0);
    if (w64->f34 != 5.9f) { w64->flags |= 1; w64->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w68 = o ? o->func_001D5760() : 0;
    w68->func_001D5810(D_00279AF0, 27.0f, 35.0f, 0);
    if (w68->f34 != 5.9f) { w68->flags |= 1; w68->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w6c = o ? o->func_001D5760() : 0;
    w6c->func_001D5810(D_00279AE0, 46.0f, 35.0f, 0);
    if (w6c->f34 != 5.9f) { w6c->flags |= 1; w6c->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w70 = o ? o->func_001D5760() : 0;
    w70->func_001D5810(D_00279AD0, 46.0f, 35.0f, 0);
    if (w70->f34 != 5.9f) { w70->flags |= 1; w70->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w74 = o ? o->func_001D5760() : 0;
    w74->func_001D5810(D_00279B00, 27.0f, 74.0f, 0);
    if (w74->f34 != 5.9f) { w74->flags |= 1; w74->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w78 = o ? o->func_001D5760() : 0;
    w78->func_001D5810(D_00279AF0, 27.0f, 74.0f, 0);
    if (w78->f34 != 5.9f) { w78->flags |= 1; w78->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w7c = o ? o->func_001D5760() : 0;
    w7c->func_001D5810(D_00279AE0, 46.0f, 74.0f, 0);
    if (w7c->f34 != 5.9f) { w7c->flags |= 1; w7c->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w80 = o ? o->func_001D5760() : 0;
    w80->func_001D5810(D_00279AD0, 46.0f, 74.0f, 0);
    if (w80->f34 != 5.9f) { w80->flags |= 1; w80->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w54 = o ? o->func_001D5760() : 0;
    w54->func_001D5810(D_00279AC4, 20.0f, 30.0f, 0);
    if (w54->f28 != 201.0f) { w54->flags |= 1; w54->f28 = 201.0f; }
    if (w54->f34 != 5.9f) { w54->flags |= 1; w54->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w58 = o ? o->func_001D5760() : 0;
    w58->func_001D5810(D_00279AC4, 221.0f, 30.0f, 0);
    if (w58->f28 != 201.0f) { w58->flags |= 1; w58->f28 = 201.0f; }
    w58->flags |= 4;
    w58->f3c = 1.0f; w58->f40 = 0.0f; w58->f44 = 0.0f; w58->f48 = 1.0f;
    if (w58->f34 != 5.9f) { w58->flags |= 1; w58->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w5c = o ? o->func_001D5760() : 0;
    w5c->func_001D5810(D_00279AC4, 20.0f, 69.0f, 0);
    if (w5c->f28 != 201.0f) { w5c->flags |= 1; w5c->f28 = 201.0f; }
    if (w5c->f34 != 5.9f) { w5c->flags |= 1; w5c->f34 = 5.9f; }

    o = (W_Widget *)func_001E8A44(0x64);
    w60 = o ? o->func_001D5760() : 0;
    w60->func_001D5810(D_00279AC4, 221.0f, 69.0f, 0);
    if (w60->f28 != 201.0f) { w60->flags |= 1; w60->f28 = 201.0f; }
    w60->flags |= 4;
    w60->f3c = 1.0f; w60->f40 = 0.0f; w60->f44 = 0.0f; w60->f48 = 1.0f;
    if (w60->f34 != 5.9f) { w60->flags |= 1; w60->f34 = 5.9f; }

    slot = &w88;
    for (n = 0x15; n <= 0x19; n++) {
        o = (W_Widget *)func_001E8A44(0x64);
        *slot = o ? o->func_001D5760() : 0;
        (*slot)->func_001D5810(D_00278658, 366.0f, (float)(n - 0x15) * D_00278650, 0);
        (*slot)->flags |= 4;
        (*slot)->f3c = 0.0f;
        (*slot)->f40 = 1.0f;
        (*slot)->f44 = 0.99f;
        (*slot)->f48 = 0.0f;
        if ((*slot)->f34 != 6.0f) { (*slot)->flags |= 1; (*slot)->f34 = 6.0f; }
        slot++;
    }

    o = (W_Widget *)func_001E8A44(0x64);
    w84 = o ? o->func_001D5760() : 0;
    w84->func_001D5810(D_00278658, 0, 398.0f, 0);
    w84->f3c = w84->f4c * D_00278654;
    w84->f40 = w84->f4c * D_00275544;
    w84->f44 = w84->f50 * D_0027653C;
    w84->f48 = w84->f50 * D_00275544;
    w84->flags |= 4;
    if (w84->f28 != 40.0f) { w84->f28 = 40.0f; w84->flags |= 1; }
    if (w84->f2c != 50.0f) { w84->f2c = 50.0f; w84->flags |= 1; }
    if (w84->f34 != 6.0f) { w84->f34 = 6.0f; w84->flags |= 1; }

    o = (W_Widget *)func_001E8A44(0x64);
    w9c = o ? o->func_001D5760() : 0;
    w9c->func_001D5810(D_00279AC4, 448.0f, 111.0f, 0);
    if (w9c->f28 != D_00275544) { w9c->f28 = 0.0f; w9c->flags |= 1; }
    if (w9c->f2c != 10.0f) { w9c->f2c = 10.0f; w9c->flags |= 1; }
    w9c->f38 = (w9c->f38 & 0xff00ff00) | 0xff00;
    w9c->flags |= 2;
    w9c->f38 |= 0xff000000;
    w9c->flags |= 2;
    names[0] = (int)D_002786A0;
    names[1] = (int)D_0027958C;
    ((S_00089290_Obj *)*(int *)((char *)D_002A8490 + 0x2ec))->func_0018C780(2, names, 0);
    r = ((S_00089290_Obj *)*(int *)((char *)D_002A8490 + 0x2ec))->func_0018C160((char *)D_002786A0);
    n = r ? *r : 0;
    r = ((S_00089290_Obj *)*(int *)((char *)D_002A8490 + 0x2ec))->func_0018C160((char *)D_0027958C);
    r = r ? (int *)*r : 0;

    l = (W_Label *)func_001E8A44(0x60);
    w24 = l ? l->func_001D5E90() : 0;
    w24->func_001D5FA0(n, (char *)D_002786A0, 75, D_00279AB8);
    if (w24->f4 != 66.0f || w24->f8 != 37.0f) {
        w24->f8 = 37.0f;
        w24->f4 = 66.0f;
        w24->flags |= 6;
    }
    if (w24->f48 != 0xffcccccc) {
        w24->flags |= 8;
        w24->f48 = (w24->f48 & 0xffcccccc) | 0xcccccc;
    }
    if (w24->f44 != D_0028F5DC) {
        w24->f44 = D_0028F5DC;
        w24->flags |= 6;
    }
    if (w24->f3c != 5.9f) { w24->flags |= 4; w24->f3c = 5.9f; }

    l = (W_Label *)func_001E8A44(0x60);
    w28 = l ? l->func_001D5E90() : 0;
    w28->func_001D5FA0((int)r, (char *)D_0027958C, 75, D_00279AB8);
    if (w28->f4 != 66.0f || w28->f8 != 35.0f) {
        w28->f8 = 35.0f;
        w28->f4 = 66.0f;
        w28->flags |= 6;
    }
    if (w28->f48 != 0xffbfa35a) {
        w28->flags |= 8;
        w28->f48 = (w28->f48 & 0xffbfa35a) | 0xbfa35a;
    }
    if (w28->f44 != D_0028F5DC) {
        w28->f44 = D_0028F5DC;
        w28->flags |= 6;
    }
    if (w28->f3c != 5.9f) { w28->flags |= 4; w28->f3c = 5.9f; }

    l = (W_Label *)func_001E8A44(0x60);
    w2c = l ? l->func_001D5E90() : 0;
    w2c->func_001D5FA0(n, (char *)D_002786A0, 75, D_00279AB0);
    if (w2c->f4 != 66.0f || w2c->f8 != 76.0f) {
        w2c->f8 = 76.0f;
        w2c->f4 = 66.0f;
        w2c->flags |= 6;
    }
    if (w2c->f48 != 0xffcccccc) {
        w2c->flags |= 8;
        w2c->f48 = (w2c->f48 & 0xffcccccc) | 0xcccccc;
    }
    if (w2c->f44 != D_0028F5DC) {
        w2c->f44 = D_0028F5DC;
        w2c->flags |= 6;
    }
    if (w2c->f3c != 5.9f) { w2c->flags |= 4; w2c->f3c = 5.9f; }

    l = (W_Label *)func_001E8A44(0x60);
    w30 = l ? l->func_001D5E90() : 0;
    w30->func_001D5FA0((int)r, (char *)D_0027958C, 75, D_00279AB0);
    if (w30->f4 != 66.0f || w30->f8 != 74.0f) {
        w30->f8 = 74.0f;
        w30->f4 = 66.0f;
        w30->flags |= 6;
    }
    if (w30->f48 != 0xffbfa35a) {
        w30->flags |= 8;
        w30->f48 = (w30->f48 & 0xffbfa35a) | 0xbfa35a;
    }
    if (w30->f44 != D_0028F5DC) {
        w30->f44 = D_0028F5DC;
        w30->flags |= 6;
    }
    if (w30->f3c != 5.9f) { w30->flags |= 4; w30->f3c = 5.9f; }

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

