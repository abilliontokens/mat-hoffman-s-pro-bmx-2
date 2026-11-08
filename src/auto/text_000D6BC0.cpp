/* 9 functions from 0x000D6BC0 to 0x000D7B70, found by Ghidra. */
#include "common.h"

struct C_000D6D50_Item {
    virtual void Destroy(int flag);
    char pad4[0x34];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
    void func_001D5AD0(void);
};

struct C_001D6600 {
    void func_001D6600(void);
};

struct C_000D6BC0_Global {
    char pad0[0x24];
    C_000D6D50_Item *unk24;
    C_000D6D50_Item *unk28;
    C_000D6D50_Item *unk2c;
    C_000D6D50_Item *unk30;
    C_001D6600 *unk34;
    char pad38[4];
    C_001D6600 *unk3c;
    char pad40[0x10];
    C_000D6D50_Item *unk50;
    C_000D6D50_Item *unk54;
    char pad58[0x10];
    C_000D6D50_Item *unk68;
    C_000D6D50_Item *unk6c;
};

extern C_000D6BC0_Global *D_002B91AC;

struct BmxUIPageHOF2 {
    int vtbl;
    char pad0[0x298];
    int unk29c;
    int unk2a0;
    char pad2a4[4];
    int unk2a8;
    int unk2ac;
    int unk2b0;
    int unk2b4;
    int unk2b8;
    int unk2bc;
    float unk2c0;
    void func_000D6BC0(void);
    void func_000D6860(void);
    void func_001BEE30(int a, int b);
    void func_000D6A60(void);
    void func_000D6710(void);
    void func_00157960(void);
};

struct S_000D7900_Widget {
    void func_001B1980();
    void func_001B17D0(char *s);
    void func_001B1A30(float a, float b, float c);
    void func_001B19A0(int a);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct S_000D7900_Res {
    void func_00103350();
    void func_00103260(int a);
};

struct S_000D7900_Owner {
    S_000D7900_Res *func_000BA9B0(int a);
};

struct S_7710_Q { void func_0005BED0(int a, int b, float *f, char *s); };
struct S_7710_A { char pad[0x2c0]; S_7710_Q *q; };
struct S_7710_X { char pad[0xf68]; int v; };
struct S_7710_Y { char pad[4]; S_7710_X *x; };
struct S_7710_B { char pad[0x2e0]; S_7710_A *a; char pad2[4]; S_7710_Y *b; };
extern S_7710_B *D_002A8490;
extern float D_0027F2BC, D_00279F74, D_0027F2B8;
extern char D_0027F2C0[];
extern int D_0028F5DC;
extern "C" int func_001ADCC0(char *buf, int n, char *fmt, ...);

struct BmxUIPageHOF3 {
    int vtbl;
    char pad4[0x124 - 4];
    S_000D7900_Owner *f124;
    char pad128[0x280 - 0x128];
    int unk280;
    int unk284;
    int unk288;
    int unk28c;
    int unk290;
    int unk294;
    int unk298;
    int unk29c;
    int unk2a0;
    int unk2a4;
    int unk2a8;
    int unk2ac;
    int unk2b0;
    int unk2b4;
    int unk2b8;
    int unk2bc;
    float unk2c0;
    C_000D6D50_Item *unk2c4[2];
    C_000D6D50_Item *unk2cc[2];
    S_000D7900_Widget *unk2d4[5];
    S_000D7900_Widget *unk2e8[5];
    C_000D6D50_Item *unk2fc[2];
    S_000D7900_Widget *unk304[5];
    BmxUIPageHOF3 *func_000D6C90(int param);
    void func_000D6D50(void);
    BmxUIPageHOF3 *func_000D6DD0(int a, int b, int c);
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(int w, int z);
    void func_000D75D0(void);
    void func_000D7710(void);
    void func_000D7900(void);
    void func_000D79E0(void);
    void func_001BEE30(int a, int b);
    void func_00157960(void);
    void func_001BE360(int param);
    void func_001BE3F0(void);
};

struct S_6DD0_Str { void func_0018C160(char *p); };
struct S_6DD0_Mgr { char pad[0x2ec]; S_6DD0_Str *s; };
struct S_6DD0_W {
    S_6DD0_W *func_001B12C0(int a);
    void func_001B13A0(char *a, char *b, int c, int d);
    void func_001B2270(unsigned int c);
    void func_001B1A30(float a, float b, int c);
    void func_001B17D0(char *s);
};
struct S_6DD0_Spr {
    char pad0[0x28]; float f28; char pad2c[0xc]; unsigned int f38; float f3c, f40, f44, f48; char pad4c[0xc]; unsigned char b58;
    S_6DD0_Spr *func_001D5760();
    void func_001D5810(char *a, float b, float c, int d);
};
extern char D_00278690[], D_002786A0[], D_00278678[], D_0027CEF0[], D_0027F29C[], D_00279B00[], D_00279AF0[], D_00279AE0[], D_00279AD0[], D_0027F2AC[];
extern float D_0027F2B4, D_0027F2B8, D_0027F2BC, D_00279F74;
extern "C" void *func_001E8A44(unsigned int size);

struct BmxUIPageHOF4 {
    int vtbl;
    char pad0[0x27c];
    int unk280;
    int unk284;
    int unk288;
    int unk28c;
    int unk290;
    char pad294[8];
    int unk29c;
    int unk2a0;
    char pad2a4[8];
    int unk2ac;
    int unk2b0;
    int unk2b4;
    int unk2b8;
    int unk2bc;
    int unk2c0;
    int unk2c4;
    int unk2c8;
    C_000D6D50_Item *unk2cc[5];
    int unk2e0[5];
    C_000D6D50_Item *unk2f4[2];
    C_000D6D50_Item *unk2fc[2];
    int unk304[2];
    int unk30c[5];
    BmxUIPageHOF4 *func_000D7AB0(int param);
    void func_001BE360(int param);
};

void BmxUIPageHOF2::func_000D6BC0(void)
{
    if (unk29c != 0) {
        unk2b0 = 0xff;
        unk2b4 = 0;
        unk2b8 = 0;
        unk2bc = 0;
        unk2c0 = 0.25f;
        func_000D6860();
        func_001BEE30(0, 1);
        unk2ac = 1;
        unk2a8 = 0;
        unk29c = 0;
    }
    if (unk2a0 != 0) {
        unk2b0 = 0xff;
        unk2b4 = 0;
        unk2b8 = 0;
        unk2bc = 0;
        unk2c0 = 0.25f;
        func_000D6A60();
        unk2a0 = 0;
    }
    D_002B91AC->unk34->func_001D6600();
    D_002B91AC->unk3c->func_001D6600();
    func_000D6710();
    func_00157960();
}

BmxUIPageHOF3 *BmxUIPageHOF3::func_000D6C90(int param) {
    extern int D_0027F36C;
    func_001BE360(param);
    vtbl = (int)&D_0027F36C;
    void **p = (void **)unk2e8;
    for (int i = 0; i < 5; i++) {
        p[-5] = 0;
        *p = 0;
        p[7] = 0;
        p++;
    }
    unk288 = 0;
    unk28c = 0;
    unk280 = 0;
    unk290 = 0;
    unk284 = 0;
    void **q = (void **)unk2cc;
    for (int i = 0; i < 2; i++) {
        q[-2] = 0;
        *q = 0;
        q++;
    }
    unk294 = 0;
    unk298 = 0;
    unk2a4 = 0;
    unk2a8 = 0;
    unk2ac = 0;
    unk2a0 = 0;
    unk29c = 0;
    for (int j = 0; j < 2; j++) {
        unk2fc[j] = 0;
    }
    unk2b0 = 0;
    unk2b4 = 0;
    unk2b8 = 0;
    unk2bc = 0;
    unk2c0 = 0;
    return this;
}

void BmxUIPageHOF3::func_000D6D50(void)
{
    extern int D_0027F36C;
    vtbl = (int)&D_0027F36C;
    for (int i = 0; i < 2; i++) {
        if (unk2c4[i] != 0) {
            unk2c4[i]->Destroy(1);
            unk2c4[i] = 0;
        }
        if (unk2cc[i] != 0) {
            unk2cc[i]->Destroy(1);
            unk2cc[i] = 0;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (unk2fc[i] != 0) {
            unk2fc[i]->Destroy(1);
            unk2fc[i] = 0;
        }
    }
    func_001BE3F0();
}

BmxUIPageHOF3 *BmxUIPageHOF3::func_000D6DD0(int a, int b, int c)
{
    char buf[8];
    func_001BE4F0(a, b, c);
    ((S_6DD0_Mgr *)D_002A8490)->s->func_0018C160(D_00278690);
    ((S_6DD0_Mgr *)D_002A8490)->s->func_0018C160(D_002786A0);
    ((S_6DD0_Mgr *)D_002A8490)->s->func_0018C160(D_00278678);
    for (int i = 0; i < 5; i++) {
        S_6DD0_W *&w0 = (S_6DD0_W *&)unk2d4[i];
        S_6DD0_W *&w1 = (S_6DD0_W *&)unk2e8[i];
        S_6DD0_W *&w2 = (S_6DD0_W *&)unk304[i];
        S_6DD0_W *w = (S_6DD0_W *)func_001E8A44(0x184);
        w0 = w ? w->func_001B12C0(1) : 0;
        w0->func_001B13A0(D_002786A0, D_002786A0, 0, 30);
        w0->func_001B2270(0xffcccccc);
        w0->func_001B1A30(191.0f, i * D_0027F2BC + D_00279F74, 0);
        func_001577A0((int)w0, -1);
        w = (S_6DD0_W *)func_001E8A44(0x184);
        w1 = w ? w->func_001B12C0(1) : 0;
        w1->func_001B13A0(D_002786A0, D_002786A0, 0, 50);
        w1->func_001B2270(0xffcccccc);
        w1->func_001B1A30(380.0f, i + D_0027F2B8, 0);
        func_001577A0((int)w1, -1);
        w = (S_6DD0_W *)func_001E8A44(0x184);
        w2 = w ? w->func_001B12C0(1) : 0;
        w2->func_001B13A0(D_002786A0, D_002786A0, 0, 5);
        w2->func_001B1A30(175.0f, i + D_0027F2B4, 0);
        w2->func_001B2270(0xffcccccc);
        func_001ADCC0(buf, 5, D_0027F2AC, i + 1, D_0027CEF0);
        w2->func_001B17D0(buf);
        func_001577A0((int)w2, -1);
    }
    for (int i = 0; i < 2; i++) {
        S_6DD0_Spr *&p = (S_6DD0_Spr *&)unk2fc[i];
        S_6DD0_Spr *q = (S_6DD0_Spr *)func_001E8A44(0x64);
        p = q ? q->func_001D5760() : 0;
        if (i % 2 == 0) {
            p->func_001D5810(D_0027F29C, 110.0f, 147.0f, 0);
        } else {
            char *nm = D_0027F29C;
            p->func_001D5810(nm, 321.0f, 147.0f, 0);
        }
        p->f40 = 0;
        p->f44 = 0;
        p->b58 |= 4;
        p->f3c = 1.0f;
        p->f48 = 1.0f;
        if (p->f28 != 221.0f) {
            p->f28 = 221.0f;
            p->b58 |= 1;
        }
        p->f38 = (p->f38 & 0xffbfa35a) | 0xbfa35a;
        p->b58 |= 2;
    }
    S_6DD0_Spr *&s0 = (S_6DD0_Spr *&)unk2c4[0];
    S_6DD0_Spr *&s1 = (S_6DD0_Spr *&)unk2cc[0];
    S_6DD0_Spr *&s2 = (S_6DD0_Spr *&)unk2c4[1];
    S_6DD0_Spr *&s3 = (S_6DD0_Spr *&)unk2cc[1];
    S_6DD0_Spr *q = (S_6DD0_Spr *)func_001E8A44(0x64);
    s0 = q ? q->func_001D5760() : 0;
    s0->func_001D5810(D_00279B00, 198.0f, 114.0f, 0);
    s0->f38 = (s0->f38 & 0xffbfa35a) | 0xbfa35a;
    s0->b58 |= 2;
    q = (S_6DD0_Spr *)func_001E8A44(0x64);
    s1 = q ? q->func_001D5760() : 0;
    s1->func_001D5810(D_00279AF0, 198.0f, 114.0f, 0);
    q = (S_6DD0_Spr *)func_001E8A44(0x64);
    s2 = q ? q->func_001D5760() : 0;
    s2->func_001D5810(D_00279AE0, 427.0f, 114.0f, 0);
    s2->f38 = (s2->f38 & 0xffbfa35a) | 0xbfa35a;
    s2->b58 |= 2;
    q = (S_6DD0_Spr *)func_001E8A44(0x64);
    s3 = q ? q->func_001D5760() : 0;
    s3->func_001D5810(D_00279AD0, 427.0f, 114.0f, 0);
    return this;
}

void BmxUIPageHOF3::func_000D75D0(void)
{
    C_000D6D50_Item *e;
    C_000D6D50_Item **ptr;
    int count;
    C_000D6BC0_Global *s;

    if (unk280) {
        D_002B91AC->unk6c->func_001D5AD0();
    } else {
        D_002B91AC->unk54->func_001D5AD0();
    }
    if (unk298) {
        e = unk2cc[0];
        e->f38 = ((short)unk2b8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        unk2cc[0]->func_001D5AD0();
    } else {
        e = unk2cc[0];
        e->f38 = ((short)unk2b8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        unk2c4[0]->func_001D5AD0();
    }
    if (unk294) {
        e = unk2cc[1];
        e->f38 = ((short)unk2b8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        unk2cc[1]->func_001D5AD0();
    } else {
        e = unk2cc[1];
        e->f38 = ((short)unk2b8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        unk2c4[1]->func_001D5AD0();
    }
    ptr = unk2fc;
    count = 2;
    do {
        e = *ptr;
        e->f38 = ((short)unk2b8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2c->func_001D5AD0();
    s->unk30->func_001D5AD0();
}

void BmxUIPageHOF3::func_000D7710(void)
{
    S_000D7900_Owner *owner = f124;
    float f;
    int i;
    char s[0x14];
    char name[0x104];
    char buf[0x108];
    for (i = 0; i < 5; i++) {
        volatile float y;
        unk2d4[i]->func_001B1980();
        unk2e8[i]->func_001B1980();
        unk304[i]->func_001B1980();
        D_002A8490->a->q->func_0005BED0(2, i, &f, s);
        int k = 0;
        char c;
        do { c = s[k]; name[k] = c; k++; } while (c);
        func_001ADCC0(buf, 0x104, D_0027F2C0, (double)f, D_002A8490->b->x->v);
        unk2d4[i]->func_001B17D0(name);
        y = i * D_0027F2BC;
        unk2d4[i]->func_001B1A30(191.0f, y + D_00279F74, 0);
        unk2d4[i]->func_001B19A0(D_0028F5DC);
        unk2d4[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        unk2e8[i]->func_001B17D0(buf);
        unk2e8[i]->func_001B1A30(380.0f, y + D_0027F2B8, 0);
        unk2e8[i]->func_001B19A0(D_0028F5DC);
        unk2e8[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        unk304[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
    owner->func_000BA9B0(0x1f)->func_00103260(0);
}

void BmxUIPageHOF3::func_000D7900(void)
{
    S_000D7900_Owner *owner = f124;
    int i;
    for (i = 0; i < 5; i++) {
        unk2d4[i]->func_001B1980();
        unk2e8[i]->func_001B1980();
        unk304[i]->func_001B1980();
        unk2d4[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        unk2e8[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        unk304[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
    }
    owner->func_000BA9B0(0x1f)->func_00103350();
}

void BmxUIPageHOF3::func_000D79E0(void)
{
    if (unk2a4 != 0) {
        unk2a0 = 1;
        unk29c = 0;
        func_000D7710();
        unk2b0 = 0xff;
        unk2b4 = 0;
        unk2b8 = 0;
        unk2bc = 0;
        unk2c0 = 0.25f;
        func_001BEE30(0, 1);
        unk2a4 = 0;
    }
    if (unk2a8 != 0) {
        func_000D7900();
        unk2b0 = 0;
        unk2b4 = 0xff;
        unk2b8 = 0xff;
        unk2bc = 0;
        unk2c0 = 0.25f;
        unk2a8 = 0;
    }
    D_002B91AC->unk34->func_001D6600();
    D_002B91AC->unk3c->func_001D6600();
    func_000D75D0();
    func_00157960();
}

BmxUIPageHOF4 *BmxUIPageHOF4::func_000D7AB0(int param) {
    extern int D_0027F404;
    func_001BE360(param);
    vtbl = (int)&D_0027F404;
    void **p = (void **)unk2e0;
    for (int i = 0; i < 5; i++) {
        p[-5] = 0;
        *p = 0;
        p[0xb] = 0;
        p++;
    }
    unk280 = 0;
    unk290 = 0;
    unk284 = 0;
    unk288 = 0;
    unk28c = 0;
    void **q = (void **)unk2fc;
    for (int i = 0; i < 2; i++) {
        q[-2] = 0;
        *q = 0;
        q++;
    }
    unk2ac = 0;
    unk2b0 = 0;
    unk2b4 = 0;
    unk2a0 = 0;
    unk29c = 0;
    for (int j = 0; j < 2; j++) {
        unk304[j] = 0;
    }
    unk2b8 = 0;
    unk2bc = 0;
    unk2c0 = 0;
    unk2c4 = 0;
    unk2c8 = 0;
    return this;
}

