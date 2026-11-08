/* 5 functions from 0x000849F0 to 0x00085630, found by Ghidra. */
#include "common.h"
#include <string.h>

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_0027956C[];
extern char D_00279560[];
extern char D_00279550[];
extern char D_00277038[];

void *func_001E8A44(int size);
struct Spr_849F0 {
    char pad0[0x28];
    unsigned f28;
    char pad2C[8];
    unsigned f34;
    char pad38[4];
    unsigned f3C, f40, f44, f48;
    char pad4C[0xC];
    unsigned char f58;
    char pad59[0x64 - 0x59];
    Spr_849F0 *func_001D5760();
    void func_001D5810(void *a, unsigned x, unsigned y, int z);
    void func_00051140(unsigned v);
    inline void SetF28(unsigned v) { if (f28 != v) { f28 = v; f58 |= 1; } }
    inline void SetF34(unsigned v) { if (f34 != v) { f34 = v; f58 |= 1; } }
};
struct Txt_849F0 {
    char pad0[4];
    unsigned f4;
    unsigned f8;
    char padC[0x3C - 0xC];
    unsigned f3C;
    char pad40[4];
    unsigned f44;
    unsigned f48;
    char pad4C[2];
    unsigned char f4e;
    char pad4F[0x60 - 0x4F];
    Txt_849F0 *func_001D5E90();
    void func_001D5FA0(int font, char *name, int a, int b);
    void func_0005E840(int a);
    void func_0005E960(int x, int y);
    void func_0005E9F0(unsigned v);
    inline void SetPos(unsigned x, unsigned y) { if (f4 != x || f8 != y) { f4 = x; f8 = y; f4e |= 6; } }
    inline void SetColor(unsigned c) { if (f48 != c) { f4e |= 8; f48 = (c & 0xffffff) | (f48 & c); } }
    inline void SetColor2(unsigned c) { if (f48 != c) { unsigned v = f48 & c; f4e |= 8; f48 = v | (c & 0xffffff); } }
    inline void SetFont(unsigned v) { if (f44 != v) { f44 = v; f4e |= 6; } }
    inline void SetF3C(unsigned v) { if (f3C != v) { f3C = v; f4e |= 4; } }
};
struct Lk_849F0 { int *func_0018C160(char *); void func_0018C780(int count, char **names, int flags); };
struct St_849F0 { int f0; int f4; int f8; };
struct Menu_849F0 { char pad[0x1010]; int f1010; };
struct Hud_849F0 { int pad0; Menu_849F0 *f4; };
struct G_849F0 { char pad[0x2e0]; St_849F0 *f2E0; char pad2E4[4]; Hud_849F0 *f2E8; Lk_849F0 *f2EC; };
extern char D_002786B0[], D_002786A0[], D_002795B4[];
extern unsigned D_0028F5EC, D_0028F5DC;
extern int D_00278664, D_00278668, D_0027866C, D_00278670;
extern char D_00278674;
extern int D_002A60B0, D_002A60B4, D_002A60B8, D_002A60BC;
extern char D_002A60C0;
struct C_000849F0 {
    char pad0[0x24];
    Txt_849F0 *f24;
    Txt_849F0 *f28;
    Spr_849F0 *f2C;
    Spr_849F0 *f30;
    int f34;
    int f38;
    int f3C;
    C_000849F0 *func_000849F0(int a, int b, int c, int d);
};

struct S_851C0_Values;
struct S_84FF0_Text {
    S_851C0_Values *func_001D5AA0();
    void func_001D6600(void);
    void func_0005E840(const char *s);
};

struct S_84FF0_F34 {
    char pad0[0x1250];
    int f1250;
};

struct S_84FF0_F38 {
    char pad0[0xA40];
    int fA40;
};

struct S_851C0_State { char pad0[4]; int f4; };
struct S_851C0_Values { char pad0[0x10]; float f10, f14; };
struct S_851C0_Item { S_851C0_Values *func_0018C070(); };
struct S_851C0_List { S_851C0_Item **func_0018C160(const char *); };
extern char D_00279630[], D_00278690[], D_0027958C[];
extern float D_00275AEC;
struct S_84FF0_Global {
    char pad0[0x10];
    int f10;
    char pad14[0x22c];
    float f240;
    char pad244[0x38];
    int f27C;
    char pad280[0x60];
    S_851C0_State *f2E0;
    char pad2E4[8];
    S_851C0_List *f2EC;
};

extern S_84FF0_Global *D_002A8490;

struct C_00084FF0 {
    char pad0[0x24];
    S_84FF0_Text *f24;
    S_84FF0_Text *f28;
    S_84FF0_Text *f2C;
    S_84FF0_Text *f30;
    S_84FF0_F34 *f34;
    S_84FF0_F38 *f38;
    int f3C;
    int f40;
    void func_00084FF0(void);
    void func_000851C0();
    void func_001578D0();
};

struct C_001D6410 { void func_001D6410(); };
void func_001E891B(void *);
extern int D_00279644;

struct C_00085520 {
    int vtbl;
    char pad4[0x20];
    C_001D6410 *a24[8];
    C_001D6410 *a44[8];
    C_001D6410 *a64[8];
    C_001D6410 *a84[4];
    C_001D6410 *f94;
    C_001D6410 *f98;
    C_001D6410 *f9C;
    int fA0;
    int aA4[8];
    int fC4, fC8, fCC, fD0;
    unsigned char fD4;
    char padD5[0x13];
    int fE8, fEC, fF0, fF4;
    C_00085520 *func_00085470(int a);
    void func_00157600(int a);
    void func_00157660();
    void func_00085520();
};

C_000849F0 *C_000849F0::func_000849F0(int a, int b, int c, int d)
{
    St_849F0 *st;
    int mode;
    int font;
    int font2;
    Spr_849F0 *s;
    Txt_849F0 *t;

    f38 = a;
    f34 = b;
    f3C = c;
    D_002A60B0 = D_00278664;
    D_002A60B4 = D_00278668;
    D_002A60B8 = D_0027866C;
    D_002A60BC = D_00278670;
    D_002A60C0 = D_00278674;
    s = (Spr_849F0 *)func_001E8A44(0x64);
    f2C = s ? s->func_001D5760() : 0;
    s = (Spr_849F0 *)func_001E8A44(0x64);
    f30 = s ? s->func_001D5760() : 0;
    st = ((G_849F0 *)D_002A8490)->f2E0;
    if (st->f0 > 1 && d == 0) {
        mode = st->f8;
        if (mode == 2) {
            if (f3C == 1) {
                f2C->func_001D5810(D_002786B0, 0x43d68000, 0x423c0000, 0);
                f2C->SetF28(0x42c00000);
                f30->func_001D5810(D_002786B0, 0x44030000, 0x423c0000, 0);
                f30->SetF28(0x42c00000);
            } else {
                f2C->func_001D5810(D_002786B0, 0x41a00000, 0x423c0000, 0);
                f2C->SetF28(0x42c00000);
                f30->func_001D5810(D_002786B0, 0x42e80000, 0x423c0000, 0);
                f30->SetF28(0x42c00000);
            }
        } else if (mode == 1) {
            if (f3C == 0) {
                f2C->func_001D5810(D_002786B0, 0x41a00000, 0x42340000, 0);
                f2C->func_00051140(0x42c00000);
                f30->func_001D5810(D_002786B0, 0x42e80000, 0x42340000, 0);
                f30->func_00051140(0x42c00000);
            } else {
                f2C->func_001D5810(D_002786B0, 0x41a00000, 0x43868000, 0);
                f2C->func_00051140(0x42c00000);
                f30->func_001D5810(D_002786B0, 0x42e80000, 0x43868000, 0);
                f30->func_00051140(0x42c00000);
            }
        }
    } else {
        f2C->func_001D5810(D_002786B0, 0x41a00000, 0x423c0000, 0);
        f2C->SetF28(0x42c00000);
        f30->func_001D5810(D_002786B0, 0x42e80000, 0x423c0000, 0);
        f30->SetF28(0x42c00000);
    }
    s = f30;
    s->f3C = 0x3f800000;
    s->f48 = 0x3f800000;
    s->f58 |= 4;
    s->f40 = 0;
    s->f44 = 0;
    f2C->SetF34(0x40c00000);
    f30->SetF34(0x40c00000);

    if (((G_849F0 *)D_002A8490)->f2E0->f8 != 0) {
        char *name = D_002786A0;
        ((G_849F0 *)D_002A8490)->f2EC->func_0018C780(1, &name, 0);
        int *p = ((G_849F0 *)D_002A8490)->f2EC->func_0018C160(D_002786A0);
        font = p ? *p : 0;
        t = (Txt_849F0 *)func_001E8A44(0x60);
        f24 = t ? t->func_001D5E90() : 0;
        f24->func_001D5FA0(font, D_002786A0, 5, 0);
        f24->func_0005E840(((G_849F0 *)D_002A8490)->f2E8->f4->f1010);
        f24->SetColor(0xffcccccc);
        t = (Txt_849F0 *)func_001E8A44(0x60);
        f28 = t ? t->func_001D5E90() : 0;
        f28->func_001D5FA0(font, D_002786A0, 15, 0);
    } else {
        char *names[2];
        names[0] = D_00278690;
        names[1] = D_0027958C;
        ((G_849F0 *)D_002A8490)->f2EC->func_0018C780(2, names, 0);
        int *p = ((G_849F0 *)D_002A8490)->f2EC->func_0018C160(D_00278690);
        font = p ? *p : 0;
        p = ((G_849F0 *)D_002A8490)->f2EC->func_0018C160(D_0027958C);
        font2 = p ? *p : 0;
        t = (Txt_849F0 *)func_001E8A44(0x60);
        f24 = t ? t->func_001D5E90() : 0;
        f24->func_001D5FA0(font, D_00278690, 5, 0);
        f24->func_0005E840(((G_849F0 *)D_002A8490)->f2E8->f4->f1010);
        f24->SetColor(0xffcccccc);
        t = (Txt_849F0 *)func_001E8A44(0x60);
        f28 = t ? t->func_001D5E90() : 0;
        f28->func_001D5FA0(font2, D_0027958C, 15, 0);
    }
    f28->func_0005E840((int)D_002795B4);
    f28->SetColor2(0xffbfa35a);

    st = ((G_849F0 *)D_002A8490)->f2E0;
    if (st->f0 > 1 && d == 0) {
        mode = st->f8;
        if (mode == 2) {
            if (f3C == 1) {
                f24->func_0005E960(599, 26);
                f24->SetFont(D_0028F5EC);
                f28->func_0005E960(599, 52);
                f28->SetFont(D_0028F5EC);
            } else {
                f24->func_0005E960(40, 26);
                f24->SetFont(D_0028F5DC);
                f28->func_0005E960(40, 52);
                f28->SetFont(D_0028F5DC);
            }
        } else if (mode == 1) {
            if (f3C == 0) {
                f24->func_0005E960(40, 26);
                f24->func_0005E9F0(D_0028F5DC);
                f28->func_0005E960(40, 49);
                f28->func_0005E9F0(D_0028F5DC);
            } else {
                f24->func_0005E960(40, 250);
                f24->func_0005E9F0(D_0028F5DC);
                f28->func_0005E960(40, 273);
                f28->func_0005E9F0(D_0028F5DC);
            }
        }
    } else {
        f24->SetPos(0x42200000, 0x41d00000);
        f24->SetFont(D_0028F5DC);
        f28->SetPos(0x42200000, 0x424c0000);
        f28->SetFont(D_0028F5DC);
    }
    f24->SetF3C(0x40a00000);
    return this;
}

void C_00084FF0::func_00084FF0(void)
{
    char c;
    char *p;
    int rem;
    int i;
    char buf[15];
    char out[15];

    memset(buf, 0, 15);
    memset(out, 0, 15);
    if (f40 == 1) {
        func_001ADCC0(out, 15, D_0027956C, f38->fA40, f34->f1250 / 2);
    } else if (f40 == 2) {
        func_001ADCC0(out, 15, D_00279560, (double)D_002A8490->f240);
    } else if (f40 == 3) {
        func_001ADCC0(out, 15, D_00279550, D_002A8490->f27C);
    } else {
        func_001ADCC0(buf, 15, D_00277038, f38->fA40);
        rem = strlen(buf) % 3;
        i = 0;
        if ((int)strlen(buf) > 0) {
            p = out;
            do {
                c = buf[i];
                if (c == ' ') {
                    strcat(out, &buf[i]);
                    break;
                }
                if (i > rem - 1 && i && ((i - rem) == 0 || (i - rem) % 3 == 0)) {
                    *p++ = ',';
                    *p++ = c;
                } else {
                    *p++ = c;
                }
                i++;
            } while (i < (int)strlen(buf));
        }
    }
    f24->func_001D6600();
    f28->func_0005E840(out);
    f28->func_001D6600();
}

void C_00084FF0::func_000851C0()
{
 const char *names[3]={D_00279630,D_00278690,D_0027958C};
 if(D_002A8490->f10!=f3C && D_002A8490->f2E0->f4) {func_001578D0(); return;}
 S_851C0_Values *val=f2C->func_001D5AA0();
 if(D_00275AEC>val->f10) val->f10=10.0f;
 if(D_00275AEC<val->f14 || val->f14>val->f10) val->f14=10.0f;
 val=f30->func_001D5AA0();
 if(D_00275AEC>val->f10) val->f10=10.0f;
 if(D_00275AEC<val->f14 || val->f14>val->f10) val->f14=10.0f;
 for(int i=0;i<3;i++) {
 S_851C0_List *list=D_002A8490->f2EC;
 S_851C0_Item **p=list->func_0018C160(names[i]);
 if(p && *p) {
 val=(*p)->func_0018C070();
 if(D_00275AEC>val->f10) val->f10=10.0f;
 if(D_00275AEC<val->f14 || val->f14>val->f10) val->f14=10.0f;
 }
 }
 func_001578D0();
}

C_00085520 *C_00085520::func_00085470(int a)
{
    int i;
    float *p;
    func_00157600(1);
    vtbl = (int)&D_00279644;
    for (i=0; i<8; i++) {
        a24[i]=0;
        a44[i]=0;
        a64[i]=0;
    }
    f98=0; f9C=0; f94=0; fC8=0;
    p=(float *)&a84[0];
    for (i=0; i<4; i++) p[i]=0.0f;
    fD0=0; fD4=0;
    for(i=0;i<8;i++) aA4[i]=0;
    fE8=0; fC4=0; fEC=0; fA0=0; fF0=0; fF4=0;
    return this;
}

void C_00085520::func_00085520()
{
    int i;
    C_001D6410 *p;
    vtbl = (int)&D_00279644;
    for (i = 0; i < 8; i++) {
        p = a24[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
        p = a44[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
        p = a64[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
    }
    for (i = 0; i < 4; i++) {
        p = a84[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
    }
    p = f94;
    if (p) { p->func_001D6410(); func_001E891B(p); f94 = 0; }
    p = f9C;
    if (p) { p->func_001D6410(); func_001E891B(p); f9C = 0; }
    p = f98;
    if (p) { p->func_001D6410(); func_001E891B(p); f98 = 0; }
    func_00157660();
}
