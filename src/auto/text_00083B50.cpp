/* 9 functions from 0x00083B50 to 0x000849F0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

#include <xmmintrin.h>

extern int D_002795C4;
extern float D_00275544;
extern float D_00275994;
extern float D_002795B8;
void func_001E891B(void *p);

static inline void Round_000847B0(int *out, float value) { *out = _mm_cvtss_si32(*(__m128 *)&value); }

struct S_000847B0_Widget {
    char pad0[0x28];
    float f28;
    u32 f2C;
    char pad30[8];
    u32 f38;
    float f3C;
    float f40;
    float f44;
    float f48;
    float f4C;
    float f50;
    char pad54[4];
    unsigned char b58;
};

struct C_000847B0 {
    char pad0[0xD48];
    S_000847B0_Widget *fD48;
    char padD4C[4];
    float fD50;
    char padD54[0xD64 - 0xD54];
    float fD64;
    void func_000847B0(void);
};

struct S_00083B50_B {
    int f0;
    u32 f4;
    int f8;
    char padC[0x2C4];
    u32 f2D0;
};

struct Lookup_00083B50 {
    int *func_0018C160(int a);
};

struct S_00083B50_A {
    char pad0[0x10];
    int f10;
    char pad14[0x2E0 - 0x14];
    S_00083B50_B *f2E0;
    char pad2E4[8];
    Lookup_00083B50 *f2EC;
};

extern S_00083B50_A *D_002A8490;

extern float D_00275AEC;
extern char D_002786A0[], D_00278690[], D_0027958C[];

struct ClampObj_00083B50 {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_00083B50 {
    ClampObj_00083B50 *func_0018C070();
};

struct WidgetObj_00083B50 {
    ClampObj_00083B50 *func_001D5AA0();
};

#define CLAMP_00083B50(p) { ClampObj_00083B50 *o = (p)->func_001D5AA0(); if (D_00275AEC > o->f10) o->f10 = 10.0f; if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f; }

/* BmxInGameOverlays (vtable 0x0027915C) */
struct C_00083B50 {
    char pad0[0x40];
    int f40;
    char pad44[0x164 - 0x44];
    WidgetObj_00083B50 *f164;
    WidgetObj_00083B50 *f168;
    char pad16C[4];
    WidgetObj_00083B50 *f170;
    WidgetObj_00083B50 *f174;
    char pad178[0x188 - 0x178];
    WidgetObj_00083B50 *f188;
    char pad18C[0xD84 - 0x18C];
    WidgetObj_00083B50 *fD84;
    WidgetObj_00083B50 *fD88;
    void func_001578D0(void);
    void func_00083B50(void);
};

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_000831E0 {
    void func_000831E0(void);
};

struct C_001B1980 {
    void func_001B1980(void);
};

struct C_000843E0 {
    char pad0[0x4C];
    int f4C;
    int f50;
    char pad54[0xC8];
    float f11C;
    char pad120[8];
    int f128;
    int f12C;
    char pad130[4];
    int f134;
    char pad138[4];
    int f13C;
    char pad140[0x18];
    int f158;
    char pad15C[0x4B4];
    int f610;
    char pad614[0x1F4];
    float f808;
    float f80C;
    float f810;
    float f814;
    void SetQuad(float a, float b, float c, float d)
    {
        f808 = a;
        f80C = b;
        f810 = c;
        f814 = d;
    }
    char pad818[0x410];
    int fC28;
    char padC2C[0xDC];
    C_001B1980 *pD08;
    C_001B1980 *pD0C;
    char padD10[0x14];
    int fD24;
    char padD28[4];
    int fD2C;
    int fD30;
    char padD34[0x60];
    int fD94;
    char padD98[8];
    int fDA0;
    void func_000843E0(int a);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00084980_24 {
    void func_001D6410(void);
};

struct C_00084980_V {
    virtual void v0(int a);
};

struct HuntPointsOverlay {
    void *vtbl;              /* 0x00 */
    char pad04[0x20];        /* 0x04 */
    C_00084980_24 *unk24;    /* 0x24 */
    C_00084980_24 *unk28;    /* 0x28 */
    C_00084980_V *unk2C;     /* 0x2C */
    C_00084980_V *unk30;     /* 0x30 */
    u32 unk34;               /* 0x34 */
    u32 unk38;               /* 0x38 */
    u32 unk3C;               /* 0x3C */
    u32 unk40;               /* 0x40 */
    HuntPointsOverlay *func_00084930(int param_1);
    void func_00084980(void);
};

struct C_000848F0 {
    char pad0[0xD50];
    u32 unkD50;
    u32 unkD54;
    u32 unkD58;
    u32 unkD5C;
    char padD60[0x4];
    u32 unkD64;
    char padD68[0xC];
    u32 unkD74;
    void func_000848F0(void);
};
struct C_000843C0 {
    char pad0[0xC5C];
    int unkC5C;
    char padC60[0x4];
    char unkC64;
    char padC65[0x3B];
    int unkCA0;
    void func_000843C0(void);
};

extern int D_00308930;
extern int D_002795B4;
extern int D_002795AC;

struct S_000844B0_Text {
    char pad0[4];
    u32 f4;
    u32 f8;
    char padC[0x34 - 0xC];
    u32 f34;
    char pad38[0x48 - 0x38];
    u32 f48;
    u16 f4C;
    u8 f4E;
    void SetPos(u32 x, u32 y)
    {
        if (f4 != x || f8 != y) {
            f4 = x;
            f8 = y;
            f4E |= 6;
        }
    }
    void SetAlpha(void)
    {
        if (f4C != 0xff) {
            f4E |= 8;
            f4C = 0xff;
            f48 |= 0xff000000;
        }
    }
    void SetScale(u32 s)
    {
        if (f34 != s) {
            f34 = s;
            f4E |= 6;
        }
    }
    void func_0005E960(int a, int b);
    void func_0005E840(void *s);
};

struct S_000844B0_Sprite {
    char pad0[0x38];
    u32 f38;
    char pad3C[0x58 - 0x3C];
    u8 f58;
    void Show(void)
    {
        f38 |= 0xff000000;
        f58 |= 2;
    }
};

struct C_001B2270 {
    void func_001B2270(u32 c);
};

struct C_000844B0 {
    char pad0[0x40];
    int f40;
    char pad44[0x164 - 0x44];
    S_000844B0_Sprite *f164;
    S_000844B0_Sprite *f168;
    S_000844B0_Text *f16C;
    S_000844B0_Sprite *f170;
    S_000844B0_Sprite *f174;
    S_000844B0_Text *f178;
    char pad17C[0x208 - 0x17C];
    S_000844B0_Text *f208;
    char pad20C[0xC50 - 0x20C];
    S_000844B0_Text *fC50;
    char padC54[0xD08 - 0xC54];
    C_001B2270 *fD08;
    C_001B2270 *fD0C;
    char padD10[0xDA0 - 0xD10];
    int fDA0;
    void func_000844B0(void);
};

struct C_000847A0 {
    char pad0[0x120];
    int unk120;
    char pad124[0x10];
    int unk134;
    void func_000847A0(void);
};


void C_00083B50::func_00083B50(void)
{
    int ids[3];
    int i;
    int *r;
    Lookup_00083B50 *lk;
    ids[0] = (int)D_002786A0;
    ids[1] = (int)D_00278690;
    ids[2] = (int)D_0027958C;
    if (D_002A8490->f10 != f40) {
        func_001578D0();
        return;
    }
    for (i = 0; i < 2; i++) {
        lk = D_002A8490->f2EC;
        r = lk->func_0018C160(ids[i]);
        if (r && *r) {
            ClampObj_00083B50 *o = ((MidObj_00083B50 *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) o->f10 = 10.0f;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f;
        }
    }
    CLAMP_00083B50(f164);
    CLAMP_00083B50(f168);
    if (f188 && D_002A8490->f2E0->f8 == 0) CLAMP_00083B50(f188);
    CLAMP_00083B50(f170);
    CLAMP_00083B50(f174);
    if (fD84) CLAMP_00083B50(fD84);
    if (fD88) CLAMP_00083B50(fD88);
    func_001578D0();
}

void C_000843C0::func_000843C0(void) {
    unkC5C = 0;
    unkC64 = 0;
    unkCA0 = 0;
}

extern "C" void *memset(void *, int, unsigned int);
void C_000843E0::func_000843E0(int a)
{
    int i;

    f4C = 0;
    f50 = 0;
    f134 = 0;
    ((C_000831E0 *)this)->func_000831E0();
    f13C = 0;
    if (D_002A8490->f2E0->f0 > 1 && D_002A8490->f2E0->f4 != 4) {
        f11C = 0.75f;
    } else {
        f11C = 1.0f;
    }
    if (a != 0) {
        fC28 = 0;
        f610 = 0;
        for (i = 0; i < 4; i++) {
            ((int *)&f808)[i] = 0;
        }
    }
    fDA0 = 1;
    f158 = 0;
    fD30 = 0;
    fD24 = fD2C;
    f128 = 0;
    f12C = 0;
    pD08->func_001B1980();
    pD0C->func_001B1980();
    fD94 = 0;
}

void C_000844B0::func_000844B0(void)
{
    S_00083B50_B *g = D_002A8490->f2E0;
    int mode = ((int *)g)[2];
    S_000844B0_Text *t;

    if (mode == 0) {
        if (g->f4 == 4) {
            f178->SetPos(0x441b0000, 0x429a0000);
        } else {
            f178->SetPos(0x42200000, 0x42d40000);
        }
    } else if (mode == 1) {
        if (f40 == 0) {
            f178->func_0005E960(0x28, 0x6a);
        } else {
            f178->func_0005E960(0x28, 0x14a);
        }
    } else if (mode == 2) {
        if (f40 == 0) {
            f178->func_0005E960(0x28, 0x9a);
        } else {
            f178->func_0005E960(0x257, 0x9a);
        }
    }
    t = f178;
    if (t->f48 != 0xff308930) {
        t->f4E |= 8;
        t->f48 = (t->f48 & 0xff308930) | (u32)&D_00308930;
    }
    f178->SetAlpha();
    f178->func_0005E840(&D_002795B4);
    f178->SetScale(0x3fa00000);
    t = f16C;
    if (t->f48 != 0xffcccccc) {
        t->f4E |= 8;
        t->f48 = (t->f48 & 0xffcccccc) | 0xcccccc;
    }
    f16C->SetAlpha();
    f16C->func_0005E840(&D_002795AC);
    f16C->SetScale(0x3f800000);
    fD08->func_001B2270(0xffbfa35a);
    fD0C->func_001B2270(0xffbfa35a);
    f208->SetAlpha();
    fC50->SetAlpha();
    f164->Show();
    f168->Show();
    f170->Show();
    f174->Show();
    fDA0 = 0;
}

void C_000847A0::func_000847A0(void) {
    unk134 = 0;
    unk120 = 0;
}

void C_000847B0::func_000847B0(void)
{
 C_000847B0 * volatile self=this;
 int v, hi, lo;
 int * volatile p=&v;
 int i=1;
 for(int x=4;x<=100;x+=4) {
 float t=*(volatile float *)&self->fD50 * D_00275994;
 *p=_mm_cvt_ss2si(*(__m128 *)&t);
 if(v<=x) {lo=i*5+4;hi=i*5+3;break;}
 i++;
 }
 S_000847B0_Widget *w=self->fD48;
 if(w->f2C!=0x42000000) {w->f2C=0x42000000;w->b58|=1;}
 w=self->fD48;
 if((float)lo!=w->f28) {w->f28=(float)lo;w->b58|=1;}
 w=self->fD48;
 w->f3C=*(volatile float *)&w->f4C * D_00275544;
 w->b58|=4;
 w->f40=(float)hi*w->f4C;
 w->f44=*(volatile float *)&w->f50 * D_00275544;
 w->f48=*(volatile float *)&w->f50 * D_002795B8;
 w=self->fD48;
 if(self->fD64>D_00275544) {w->f38=(w->f38&0xff32a539)|0x32a539;w->b58|=2;}
 else {w->f38=(w->f38&0xff324fa5)|0x324fa5;w->b58|=2;}
}

void C_000848F0::func_000848F0(void)
{
    if (D_002A8490->f2E0->f2D0 == 0) {
        unkD64 = 0;
        unkD54 = 0;
        unkD50 = 0;
        unkD58 = 0;
        unkD5C = 0;
        unkD74 = 0;
    }
}

HuntPointsOverlay *HuntPointsOverlay::func_00084930(int param_1)
{
    ((C_00157600 *)this)->func_00157600(1);
    unk24 = 0;
    unk28 = 0;
    unk2C = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    vtbl = &D_002795C4;
    unk40 = (D_002A8490->f2E0->f4 == 3);
    return this;
}

void HuntPointsOverlay::func_00084980(void)
{
    C_00084980_24 *p = unk24;
    vtbl = &D_002795C4;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unk28;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    if (unk2C) {
        unk2C->v0(1);
        unk2C = 0;
    }
    if (unk30) {
        unk30->v0(1);
        unk30 = 0;
    }
    ((C_00157660 *)this)->func_00157660();
}

