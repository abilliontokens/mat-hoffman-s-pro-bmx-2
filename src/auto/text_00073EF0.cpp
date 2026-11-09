/* 1 function from 0x00073EF0 to 0x00074EB0, found by Ghidra. */
#include "common.h"
struct Font_73 { float func_0018C210(); };
struct Lookup_73 { Font_73 **func_0018C160(int id); };
struct Data_73 {
    char pad0[0x7C0];
    int f7C0;
    char pad7C4[0x7C8 - 0x7C4];
    int f7C8;
    char pad7CC[0x7D8 - 0x7CC];
    int f7D8;
    char pad7DC[0x7E8 - 0x7DC];
    int f7E8;
    char pad7EC[0xAC8 - 0x7EC];
    int fAC8;
    char padACC[0xE98 - 0xACC];
    int fE98;
    char padE9C[0xF20 - 0xE9C];
    int fF20;
    char padF24[0xFC0 - 0xF24];
    int fFC0;
    char padFC4[0xFD8 - 0xFC4];
    int fFD8;
    char padFDC[0x1158 - 0xFDC];
    int f1158;
};
struct Sub_73 { char pad0[4]; Data_73 *f4; };
struct Root_73 { char pad0[0x2E8]; Sub_73 *f2E8; Lookup_73 *f2EC; };
struct Img_73 {
    char pad0[4];
    char pad4[0x24];
    int width;
    int height;
    char pad30[8];
    unsigned int color;
    float a, b, c, d;
    float w, h;
    char pad54[4];
    unsigned char flags;
    Img_73 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
};
struct Txt_73 {
    int pad0, x, y;
    char padC[0x38];
    int align;
    unsigned int color;
    char pad4c[2];
    unsigned char flags;
    Txt_73 *func_001D5E90();
    void func_001D5FA0(int font, char *name, int size, int z);
    void func_001D6190(int font, int text, char *name);
    void func_0005E840(int str);
};
struct Obj_73 {
    Obj_73 *func_001B12C0(int a);
    void func_001B1580(int a, int b, int c, int d);
    void func_001B1A30(int a, float b, int c);
    void func_001B2270(int a);
    void func_001B19A0(int a);
};
struct C_00073EF0 {
    char pad0[0x64];
    Txt_73 *f64[2];
    char pad6C[4];
    Txt_73 *f70[2];
    char pad78[4];
    Txt_73 *f7C[2];
    char pad84[4];
    Txt_73 *f88[2];
    char pad90[4];
    Obj_73 *f94;
    Obj_73 *f98;
    Obj_73 *f9C;
    int fA0;
    int fA4;
    int fA8;
    Img_73 *fAC;
    Img_73 *fB0;
    Img_73 *fB4[5];
    Img_73 *fC8[5];
    Img_73 *fDC[6];
    Img_73 *fF4;
    Txt_73 *fF8;
    Txt_73 *fFC;
    Txt_73 *f100;
    Txt_73 *f104;
    Txt_73 *f108, *f10C, *f110, *f114;
    Txt_73 *f118;
    char pad11C[4];
    void *f120;
    char pad124[0x74];
    Img_73 *f198;
    Img_73 *f19C;
    Img_73 *f1A0;
    Img_73 *f1A4;
    char pad1A8[0x14];
    Txt_73 *f1BC;
    C_00073EF0 *func_00073EF0(void *a0);
    void func_001577A0(void *obj, int flags);
};
extern Root_73 *D_002A8490;
extern char D_002786A0[], D_00278690[], D_00278678[], D_00278658[], D_00278648[], D_00278638[], D_00278624[], D_00278608[], D_00278600[], D_002786B0[];
extern char D_002A60B0[], D_002A5FA8[], D_002A5870[], D_00275678[];
extern char D_00278664[], D_00278668[], D_0027866C[], D_00278670[], D_00278674;
extern char D_002A60B4[], D_002A60B8[], D_002A60BC[], D_002A60C0[];
extern int D_0028F5E0, D_0028F5DC;
extern float D_00278650, D_002757F0, D_00278870, D_0027886C, D_00276DD4, D_002756C8, D_00278DC4, D_00278DC0;
extern const float D_00278654, D_0027653C, D_00275544;
extern "C" void *func_001E8A44(unsigned int size);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);

static __forceinline Font_73 *find73(char *name) { Font_73 **r = D_002A8490->f2EC->func_0018C160((int)name); return r ? *r : 0; }
static __forceinline void pos73(Txt_73 *p, int x, int y) { if (p->x != x || p->y != y) { p->y = y; p->x = x; p->flags |= 6; } }
static __forceinline void align73(Txt_73 *p, int a) { if (p->align != a) { p->align = a; p->flags |= 6; } }
static __forceinline void color73(Txt_73 *p, unsigned int c) { if (p->color != c) { p->flags |= 8; p->color = (p->color & (c | 0xff000000)) | (c & 0xffffff); } }
static __forceinline void uv73(Img_73 *p) { float a = *(volatile float *)&p->w * D_00278654; p->flags |= 4; p->a = a; p->b = *(volatile float *)&p->w * D_00275544; p->c = *(volatile float *)&p->h * D_0027653C; p->d = *(volatile float *)&p->h * D_00275544; }
static __forceinline void width73(Img_73 *p, int v) { if (p->width != v) { p->width = v; p->flags |= 1; } }
static __forceinline void height73(Img_73 *p, int v) { if (p->height != v) { p->height = v; p->flags |= 1; } }

static __forceinline void posy73(Txt_73 *p, int x, float y);
static __forceinline void posf73(Txt_73 *p, float x, float y);
extern char D_00278DC8[];
C_00073EF0 *C_00073EF0::func_00073EF0(void *a0)
{
    Font_73 *fontA, *fontB, *fontC;
    Font_73 **r;
    int i, j;
    Img_73 *o;
    Txt_73 *t;

    f120 = a0;

    r = D_002A8490->f2EC->func_0018C160((int)D_002786A0);
    fontA = r ? *r : 0;
    r = D_002A8490->f2EC->func_0018C160((int)D_00278690);
    fontB = r ? *r : 0;
    r = D_002A8490->f2EC->func_0018C160((int)D_00278678);
    fontC = r ? *r : 0;

    *(int *)D_002A60B0 = *(int *)D_00278664;
    *(int *)D_002A60B4 = *(int *)D_00278668;
    *(int *)D_002A60B8 = *(int *)D_0027866C;
    *(int *)D_002A60BC = *(int *)D_00278670;
    *(char *)D_002A60C0 = D_00278674;

    o = (Img_73 *)func_001E8A44(0x64);
    fAC = o ? o->func_001D5760() : 0;
    fAC->func_001D5810(D_00278658, 0, 0, 0);
    width73(fAC, 0x44200000);
    height73(fAC, 0x42480000);
    { Img_73 *p = fAC; float a = p->w * 127.0f; p->flags |= 4; p->a = a; p->b = p->w * 0.0f; p->c = p->h * 15.0f; p->d = p->h * 0.0f; }

    o = (Img_73 *)func_001E8A44(0x64);
    fB0 = o ? o->func_001D5760() : 0;
    fB0->func_001D5810(D_00278658, 0, 398.0f, 0);
    width73(fB0, 0x44200000);
    height73(fB0, 0x42480000);
    { Img_73 *p = fB0; float a = p->w * 127.0f; p->flags |= 4; p->a = a; p->b = p->w * 0.0f; p->c = p->h * 15.0f; p->d = p->h * 0.0f; }

    for (i = 0; i < 5; i++) {
        float x;
        o = (Img_73 *)func_001E8A44(0x64);
        fB4[i] = o ? o->func_001D5760() : 0;
        x = i * D_00278650;
        fB4[i]->func_001D5810(D_00278658, x, 50.0f, 0);
        o = (Img_73 *)func_001E8A44(0x64);
        fC8[i] = o ? o->func_001D5760() : 0;
        fC8[i]->func_001D5810(D_00278658, x, 366.0f, 0);
        o = fC8[i];
        o->a = 0;
        o->b = 1.0f;
        o->c = 0.99f;
        o->d = 0;
        o->flags |= 4;
    }

    for (i = 0; i < 6; i++) {
        o = (Img_73 *)func_001E8A44(0x64);
        fDC[i] = o ? o->func_001D5760() : 0;
        if (i % 2 == 0)
            fDC[i]->func_001D5810(D_002786B0, 100.0f, (i / 2) * D_002757F0 + D_00278870, 0);
        else
            fDC[i]->func_001D5810(D_002786B0, 321.0f, (i / 2) * D_002757F0 + D_00278870, 0);
        o = fDC[i];
        { unsigned char fl = o->flags; o->b = 0; o->c = 0; fl |= 4; o->a = 1.0f; o->d = 1.0f; o->flags = fl; }
        width73(fDC[i], 0x435d0000);
        { Img_73 *p = fDC[i]; p->color = (p->color & 0xffbfa35a) | 0xbfa35a; p->flags |= 2; }
    }

    o = (Img_73 *)func_001E8A44(0x64);
    f1A0 = o ? o->func_001D5760() : 0;
    f1A0->func_001D5810(D_00278648, 491.0f, 388.0f, 0);

    o = (Img_73 *)func_001E8A44(0x64);
    f198 = o ? o->func_001D5760() : 0;
    f198->func_001D5810(D_00278624, 491.0f, 388.0f, 0);

    o = (Img_73 *)func_001E8A44(0x64);
    f1A4 = o ? o->func_001D5760() : 0;
    f1A4->func_001D5810(D_00278638, 379.0f, 388.0f, 0);

    o = (Img_73 *)func_001E8A44(0x64);
    f19C = o ? o->func_001D5760() : 0;
    f19C->func_001D5810(D_00278608, 379.0f, 388.0f, 0);

    o = (Img_73 *)func_001E8A44(0x64);
    fF4 = o ? o->func_001D5760() : 0;
    fF4->func_001D5810(D_00278600, 0, 0, 0);
    {
        Img_73 *p = fF4;
        unsigned char fl = p->flags;
        p->color &= 0xff000000;
        fl |= 2;
        p->flags = fl;
    }
    {
        Img_73 *p = fF4;
        unsigned char fl = p->flags;
        fl |= 2;
        *((unsigned char *)&p->color + 3) = 0x80;
        p->flags = fl;
    }
    height73(fF4, 0x43e00000);
    width73(fF4, 0x44200000);

    t = (Txt_73 *)func_001E8A44(0x60);
    f100 = t ? t->func_001D5E90() : 0;
    f100->func_001D5FA0((int)fontC, D_00278678, 0x14, 0);
    color73(f100, 0xaaaaaaaa);
    pos73(f100, 0x43a00000, 0x42200000);
    align73(f100, D_0028F5E0);
    f100->func_0005E840(D_002A8490->f2E8->f4->fFD8);

    t = (Txt_73 *)func_001E8A44(0x60);
    f104 = t ? t->func_001D5E90() : 0;
    f104->func_001D5FA0((int)fontB, D_00278690, 0x28, 0);
    color73(f104, 0xaaaaaaaa);
    posy73(f104, 0x42f00000, fontA->func_0018C210() * 2.0f + 117.0f);
    align73(f104, D_0028F5DC);
    f104->func_0005E840(D_002A8490->f2E8->f4->f1158);


    t = (Txt_73 *)func_001E8A44(0x60);
    f108 = t ? t->func_001D5E90() : 0;
    f108->func_001D5FA0((int)fontB, D_00278690, 0x28, 0);
    color73(f108, 0xaaaaaaaa);
    posy73(f108, 0x42f00000, fontA->func_0018C210() * 4.0f + 117.0f);
    align73(f108, D_0028F5DC);
    f108->func_0005E840(*(int *)((char *)D_002A8490->f2E8->f4 + 0x1000));

    t = (Txt_73 *)func_001E8A44(0x60);
    f10C = t ? t->func_001D5E90() : 0;
    f10C->func_001D5FA0((int)fontB, D_00278690, 0x28, 0);
    color73(f10C, 0xaaaaaaaa);
    posy73(f10C, 0x42f00000, fontA->func_0018C210() * 6.0f + 117.0f);
    align73(f10C, D_0028F5DC);
    f10C->func_0005E840(*(int *)((char *)D_002A8490->f2E8->f4 + 0x1008));

    t = (Txt_73 *)func_001E8A44(0x60);
    f110 = t ? t->func_001D5E90() : 0;
    f110->func_001D5FA0((int)fontB, D_00278690, 0x28, 0);
    color73(f110, 0xaaaaaaaa);
    pos73(f110, 0x43820000, 0x429a0000);
    align73(f110, D_0028F5DC);
    f110->func_0005E840(*(int *)((char *)D_002A8490->f2E8->f4 + 0xA10));

    t = (Txt_73 *)func_001E8A44(0x60);
    f114 = t ? t->func_001D5E90() : 0;
    f114->func_001D5FA0((int)fontB, D_00278690, 0x28, 0);
    color73(f114, 0xaaaaaaaa);
    pos73(f114, 0x43a00000, 0x429a0000);
    align73(f114, D_0028F5DC);
    f114->func_0005E840((int)D_00278DC8);

    t = (Txt_73 *)func_001E8A44(0x60);
    f118 = t ? t->func_001D5E90() : 0;
    f118->func_001D6190((int)fontB, D_002A8490->f2E8->f4->fAC8, D_00278690);
    pos73(f118, 0, 0x42ea0000);
    color73(f118, 0xffcccccc);
    align73(f118, D_0028F5E0);

    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);

    { Obj_73 *p = (Obj_73 *)func_001E8A44(0x184); f94 = p ? p->func_001B12C0(1) : 0; }
    f94->func_001B1580((int)D_00278690, (int)D_00278690, D_002A8490->f2E8->f4->f7D8, 0);
    fA0 = 0x43910000;
    f94->func_001B1A30(0, 290.0f, 0);
    f94->func_001B2270(0xffcccccc);
    f94->func_001B19A0(D_0028F5E0);
    func_001577A0(f94, -1);

    { Obj_73 *p = (Obj_73 *)func_001E8A44(0x184); f9C = p ? p->func_001B12C0(1) : 0; }
    f9C->func_001B1580((int)D_00278690, (int)D_00278690, D_002A8490->f2E8->f4->fF20, 0);
    fA8 = 0x43a40000;
    f9C->func_001B1A30(0, 328.0f, 0);
    f9C->func_001B2270(0xffcccccc);
    f9C->func_001B19A0(D_0028F5E0);
    func_001577A0(f9C, -1);

    { Obj_73 *p = (Obj_73 *)func_001E8A44(0x184); f98 = p ? p->func_001B12C0(1) : 0; }
    f98->func_001B1580((int)D_00278690, (int)D_00278690, D_002A8490->f2E8->f4->f7E8, 0);
    fA4 = 0x43a50000;
    f98->func_001B1A30(0, 330.0f, 0);
    f98->func_001B2270(0xffcccccc);
    f98->func_001B19A0(D_0028F5E0);
    func_001577A0(f98, -1);

    t = (Txt_73 *)func_001E8A44(0x60);
    fFC = t ? t->func_001D5E90() : 0;
    fFC->func_001D6190((int)fontB, D_002A8490->f2E8->f4->f7C8, D_00278690);
    pos73(fFC, 0x44048000, 0x43c48000);
    color73(fFC, 0xffcccccc);

    t = (Txt_73 *)func_001E8A44(0x60);
    f1BC = t ? t->func_001D5E90() : 0;
    f1BC->func_001D6190((int)fontB, D_002A8490->f2E8->f4->f7C0, D_00278690);
    pos73(f1BC, 0x43d08000, 0x43c48000);
    color73(f1BC, 0xffcccccc);

    for (i = 0, j = 0; j < 420; i++, j += 210) {
        float x;
        float yv;
        t = (Txt_73 *)func_001E8A44(0x60);
        f64[i] = t ? t->func_001D5E90() : 0;
        f64[i]->func_001D5FA0((int)fontB, D_00278690, 0x28, 0);
        posf73(f64[i], i * 210.0f + 285.0f, 117.0f);
        t = (Txt_73 *)func_001E8A44(0x60);
        f70[i] = t ? t->func_001D5E90() : 0;
        f70[i]->func_001D5FA0((int)fontB, D_00278690, 0x28, 0);
        posf73(f70[i], x = j + 285.0f, fontA->func_0018C210() * 2.0f + 117.0f);
        t = (Txt_73 *)func_001E8A44(0x60);
        f7C[i] = t ? t->func_001D5E90() : 0;
        f7C[i]->func_001D5FA0((int)fontB, D_00278690, 0x28, 0);
        posf73(f7C[i], x, fontA->func_0018C210() * 4.0f + 117.0f);
        t = (Txt_73 *)func_001E8A44(0x60);
        f88[i] = t ? t->func_001D5E90() : 0;
        f88[i]->func_001D5FA0((int)fontB, D_00278690, 0x28, 0);
        posf73(f88[i], x, fontA->func_0018C210() * 6.0f + 117.0f);
    }

    t = (Txt_73 *)func_001E8A44(0x60);
    fF8 = t ? t->func_001D5E90() : 0;
    fF8->func_001D5FA0((int)fontB, D_00278690, 0x28, 0);
    pos73(fF8, 0x43a00000, 0x43660000);

    return this;
}
static __forceinline void posf73(Txt_73 *p, float x, float y) { if (*(float *)&p->x != x || *(float *)&p->y != y) { *(float *)&p->y = y; *(float *)&p->x = x; p->flags |= 6; } }
static __forceinline void posy73(Txt_73 *p, int x, float y) { if (p->x != x || *(float *)&p->y != y) { *(float *)&p->y = y; p->x = x; p->flags |= 6; } }
