/* 5 functions from 0x000779C0 to 0x00078970, found by Ghidra. */
#include "common.h"
extern int D_0028F5E0;
struct Text_782C0 {
    int pad0, x, y;
    char padC[0x42];
    unsigned char flags;
    void func_0005E840(int);
    void func_0005E920(float, float);
    void func_001D6600();
};
struct Sub_782C0 {
    void func_00093120();
    void func_00094690(float,float,int,int,int,int);
    void func_000941A0(int,float,float,int,int,int,int);
    void func_000942F0(float,float,int,int,int,int);
    void func_00094410(float,float,int,int,int,int);
    void func_00093A00(float,float,int,int,int,int);
    void func_00093CF0(float,float,int,int,int,int);
    void func_00093C80(float,float,int,int,int,int);
};
struct C_000782C0 {
    char pad0[0x98];
    Text_782C0 *f98;
    char pad9C[0x20];
    Text_782C0 *fbc, *fc0, *fc4;
    Sub_782C0 *fc8;
    int fcc, fd0, fd4, fd8, fdc, fe0, fe4, fe8, fec, ff0;
    void func_000782C0();
};
struct Clamp_6A { char pad[0x10]; float f10, f14; };
struct Mid_6A { Clamp_6A *func_0018C070(); };
struct Lookup_6A { int *func_0018C160(int); };
struct Data_782C0 { char pad0[4]; char *p4; };
struct Global_6A { char pad[0x2e8]; Data_782C0 *p2E8; Lookup_6A *p2EC; };
extern Global_6A *D_002A8490;
extern float D_00275AEC;
extern int D_002786A0, D_00278690, D_00278678;
struct W_78050 { Clamp_6A *func_001D5AA0(); };
struct C_00078050 {
    char pad0[0x64];
    W_78050 *unk64[17];
    W_78050 *unkA8[3];
    void func_001578D0();
    void func_00078050();
};

extern float D_002A1FEC;
void *func_001E8A44(int);

extern float D_00278654, D_00275544, D_0027653C, D_00278650;
extern float D_00278654, D_00275544, D_0027653C, D_00278650;
extern float D_00278654, D_00275544, D_0027653C, D_00278650;
struct Wid_779C0 {
    char pad0[0x28];
    float f28, f2c;
    char pad30[8];
    unsigned int color;
    float f3c, f40, f44, f48, f4c, f50;
    char pad54[4];
    unsigned char b58;
    __forceinline void SetRGB(unsigned int rgb) { unsigned int c = *(volatile unsigned int *)&color & 0xff000000; b58 |= 2; color = c | rgb; }
    __forceinline void SetAlpha(unsigned int al)
    {
        unsigned char dirty = (unsigned char)(b58 | 2);
        color = (color & 0x00ffffff) | (al << 24);
        b58 = dirty;
    }
    __forceinline void SetW(float w) { if (f28 != w) { f28 = w; b58 |= 1; } }
    __forceinline void SetH(float h) { if (f2c != h) { f2c = h; b58 |= 1; } }
    __forceinline void Scale()
    {
        float left = *(volatile float *)&f4c * D_00278654;
        f3c = left;
        b58 |= 4;
        f40 = *(volatile float *)&f4c * D_00275544;
        f44 = *(volatile float *)&f50 * D_0027653C;
        f48 = *(volatile float *)&f50 * D_00275544;
    }
    Wid_779C0 *func_001D5760();
    void func_001D5810(char *, float, float, float);
};
struct Txt_779C0 {
    char pad0[4];
    float f4, f8;
    char padC[0x38];
    int f44;
    unsigned int f48;
    char pad4C[2];
    unsigned char b4e;
    __forceinline void SetPos(float x, float y) { if (f4 != x || f8 != y) { f4 = x; f8 = y; b4e |= 6; } }
    __forceinline void SetColor(unsigned int c)
    {
        if (f48 != c) {
            b4e |= 8;
            f48 = (f48 & (c | 0xff000000)) | (c & 0xffffff);
        }
    }
    void func_0005E840(int);
    Txt_779C0 *func_001D5E90();
    void func_001D5FA0(int, char *, int, int);
    void func_001D6190(int, int, int *);
};
struct Cnt_779C0 {
    char pad0[0x64];
    Wid_779C0 *w64, *w68;
    Wid_779C0 *w6C[5];
    Wid_779C0 *w80[5];
    Wid_779C0 *w94;
    Txt_779C0 *t98;
    char pad9C[0xc];
    Wid_779C0 *wA8, *wAC, *wB0, *wB4;
    int fB8;
    Txt_779C0 *tBC, *tC0, *tC4;
    int fC8;
    char padCC[0xc];
    int fD8;
    Cnt_779C0 *func_000779C0(void *);
};
extern char D_00278658[], D_00278648[], D_00278624[], D_00278638[], D_00278608[], D_00278600[];
extern int D_00278664, D_00278668, D_0027866C, D_00278670;
extern char D_00278674;
extern int D_002A60B0, D_002A60B4, D_002A60B8, D_002A60BC;
extern char D_002A60C0;
extern float D_00278654, D_00275544, D_0027653C, D_00278650;
void *func_001E8A44(int);

struct Sprite_78620 {
    char pad0[4];
    float f4, f8;
    char padC[0x58 - 0xC];
    unsigned char b58;
    /* move the sprite, marking it dirty only when something changed */
    __forceinline void SetPos(float x, float y)
    {
        if (f4 != x || f8 != y) {
            f4 = x;
            f8 = y;
            b58 |= 1;
        }
    }
    void func_001D5AD0();
};

struct C_00078620 {
    char pad0[0x64];
    Sprite_78620 *unk64;
    Sprite_78620 *unk68;
    Sprite_78620 *arr6C[5];
    Sprite_78620 *arr80[5];
    Sprite_78620 *unk94;
    char pad98[0xA0 - 0x98];
    int unkA0;
    int unkA4;
    Sprite_78620 *unkA8;
    Sprite_78620 *unkAC;
    Sprite_78620 *unkB0;
    Sprite_78620 *unkB4;
    char padB8[0xD4 - 0xB8];
    int unkD4;
    char padD8[0xE4 - 0xD8];
    int unkE4;
    int unkE8;
    int unkEC;
    int unkF0;
    int func_00078620();
};

struct C_000788D0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    char pad4[0x1D];
    u8 unk21;
    char pad22[0x1D2];
    int unk1F4;
};

struct C_000788D0_Sub {
    int func_00092A50(int *out);
};

struct C_000788D0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18(int a);
    char pad4[0x9C];
    int unkA0;
    int unkA4;
    char padA8[0x10];
    int unkB8;
    char padBC[0xC];
    C_000788D0_Sub *unkC8;
    int unkCC;
    char padD0[4];
    int unkD4;
    C_000788D0_Obj *unkD8;
    int unkDC;
    char padE0[4];
    int unkE4;
    int unkE8;
    int unkEC;
    char padF0[4];
    int unkF4;
    void func_000788D0();
};

Cnt_779C0 *Cnt_779C0::func_000779C0(void *a)
{
    Wid_779C0 *w;
    Txt_779C0 *t;
    void *p;
    int v2, v1, *r;
    int i;
    fC8 = *(int *)((char *)a + 0x1d0);
    fD8 = (int)a;
    D_002A8490->p2EC->func_0018C160((int)&D_002786A0);
    r = D_002A8490->p2EC->func_0018C160((int)&D_00278690);
    v1 = r ? *r : 0;
    r = D_002A8490->p2EC->func_0018C160((int)&D_00278678);
    v2 = r ? *r : 0;
    D_002A60B0 = D_00278664;
    D_002A60B4 = D_00278668;
    D_002A60B8 = D_0027866C;
    D_002A60BC = D_00278670;
    D_002A60C0 = D_00278674;
    p = func_001E8A44(0x64);
    w = p ? ((Wid_779C0 *)p)->func_001D5760() : 0;
    w64 = w;
    w->func_001D5810(D_00278658, 0, 0, 0);
    w64->SetW(640.0f);
    w64->SetH(50.0f);
    w64->Scale();
    p = func_001E8A44(0x64);
    w = p ? ((Wid_779C0 *)p)->func_001D5760() : 0;
    w68 = w;
    w->func_001D5810(D_00278658, 0, 398.0f, 0);
    w68->SetW(640.0f);
    w68->SetH(50.0f);
    w68->Scale();
    for (i = 0; i < 5; i++) {
        float x;
        p = func_001E8A44(0x64);
        w = p ? ((Wid_779C0 *)p)->func_001D5760() : 0;
        x = i * D_00278650;
        w6C[i] = w;
        w->func_001D5810(D_00278658, x, 50.0f, 0);
        p = func_001E8A44(0x64);
        w = p ? ((Wid_779C0 *)p)->func_001D5760() : 0;
        w80[i] = w;
        w->func_001D5810(D_00278658, x, 366.0f, 0);
        w = w80[i];
        w->f3c = 0;
        w->f48 = 0;
        w->f40 = 1.0f;
        w->f44 = 0.99f;
        w->b58 |= 4;
    }
    p = func_001E8A44(0x64);
    w = p ? ((Wid_779C0 *)p)->func_001D5760() : 0;
    wB0 = w;
    w->func_001D5810(D_00278648, 491.0f, 388.0f, 0);
    p = func_001E8A44(0x64);
    w = p ? ((Wid_779C0 *)p)->func_001D5760() : 0;
    wA8 = w;
    w->func_001D5810(D_00278624, 491.0f, 388.0f, 0);
    p = func_001E8A44(0x64);
    w = p ? ((Wid_779C0 *)p)->func_001D5760() : 0;
    wB4 = w;
    w->func_001D5810(D_00278638, 379.0f, 388.0f, 0);
    p = func_001E8A44(0x64);
    w = p ? ((Wid_779C0 *)p)->func_001D5760() : 0;
    wAC = w;
    w->func_001D5810(D_00278608, 379.0f, 388.0f, 0);
    p = func_001E8A44(0x64);
    w = p ? ((Wid_779C0 *)p)->func_001D5760() : 0;
    w94 = w;
    w->func_001D5810(D_00278600, 0, 0, 0);
    w94->SetRGB(0);
    w94->SetAlpha(0x80);
    w94->SetH(448.0f);
    w94->SetW(640.0f);
    p = func_001E8A44(0x60);
    t = p ? ((Txt_779C0 *)p)->func_001D5E90() : 0;
    t98 = t;
    t->func_001D5FA0(v2, (char *)&D_00278678, 0x14, 0);
    t98->SetColor(0xaaaaaaaa);
    t98->SetPos(320.0f, 40.0f);
    t = t98;
    if (t->f44 != D_0028F5E0) {
        t->f44 = D_0028F5E0;
        t->b4e |= 6;
    }
    t98->func_0005E840(*(int *)(D_002A8490->p2E8->p4 + 0xfd8));
    p = func_001E8A44(0x60);
    t = p ? ((Txt_779C0 *)p)->func_001D5E90() : 0;
    tC0 = t;
    t->func_001D6190(v1, *(int *)(D_002A8490->p2E8->p4 + 0x1128), &D_00278690);
    tC0->SetPos(530.0f, 393.0f);
    tC0->SetColor(0xffcccccc);
    p = func_001E8A44(0x60);
    t = p ? ((Txt_779C0 *)p)->func_001D5E90() : 0;
    tBC = t;
    t->func_001D6190(v1, *(int *)(D_002A8490->p2E8->p4 + 0x7c0), &D_00278690);
    tBC->SetPos(417.0f, 393.0f);
    tBC->SetColor(0xffcccccc);
    p = func_001E8A44(0x60);
    t = p ? ((Txt_779C0 *)p)->func_001D5E90() : 0;
    tC4 = t;
    t->func_001D6190(v1, *(int *)(D_002A8490->p2E8->p4 + 0x1248), &D_00278690);
    tC4->SetPos(80.0f, 393.0f);
    tC4->SetColor(0xffcccccc);
    return this;
}

void C_00078050::func_00078050() {
int ids[3]; int i; int *r; Clamp_6A *o; W_78050 **e; Lookup_6A *lk;
ids[0]=(int)&D_002786A0; ids[1]=(int)&D_00278690; ids[2]=(int)&D_00278678;
for(i=0;i<3;i++) { lk=D_002A8490->p2EC; r=lk->func_0018C160(ids[i]); if(r && *r) { o=((Mid_6A *)*r)->func_0018C070(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } }
e=unk64; i=2; do { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; e++; i--; }while(i);
e=unkA8; i=2; do { if(e[2]) { o=e[2]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if(*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; }while(i);
if(unk64[12]) { o=unk64[12]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
e=&unk64[7]; i=5; do { if(e[-5]) { o=e[-5]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if(*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; }while(i);
func_001578D0();
}

void C_000782C0::func_000782C0() {
fc8->func_00093120();
if (fd4) {
f98->func_0005E840(*(int*)(D_002A8490->p2E8->p4+0x700));
fc8->func_00093120();
if(ff0) fc8->func_00094690(320.0f,100.0f,D_0028F5E0,0,0,0);
else fc8->func_000941A0(fd0,320.0f,100.0f,D_0028F5E0,0,0,0);
if(!ff0) fc4->func_001D6600();
} else if(fe8) {
f98->func_0005E840(*(int*)(D_002A8490->p2E8->p4+0xc78));
fc8->func_000942F0(320.0f,100.0f,D_0028F5E0,0,0,0);
} else if(fec) {
f98->func_0005E840(*(int*)(D_002A8490->p2E8->p4+0xc90));
fc8->func_00094410(320.0f,100.0f,D_0028F5E0,0,0,0);
} else if(fe4) {
f98->func_0005E840(*(int*)(D_002A8490->p2E8->p4+0x730));
fc8->func_00093A00(320.0f,100.0f,D_0028F5E0,0,0,0);
} else if(fdc) {
f98->func_0005E840(*(int*)(D_002A8490->p2E8->p4+0x6f8));
fc8->func_00093CF0(320.0f,100.0f,D_0028F5E0,0,0,0);
} else {
f98->func_0005E840(*(int*)(D_002A8490->p2E8->p4+0x6f8));
fc8->func_00093C80(320.0f,100.0f,D_0028F5E0,0,0,0);
}
f98->func_001D6600();
if (!fe4) {
if(fd4) {
if(ff0) {
fc0->func_0005E920(530.0f,393.0f);
fc0->func_0005E840(*(int*)(D_002A8490->p2E8->p4+0x7b8));
fbc->func_001D6600();
} else {
fc0->func_0005E920(335.0f,393.0f);
fc0->func_0005E840(*(int*)(D_002A8490->p2E8->p4+0x1128));
}
} else {
Text_782C0 *p=fc0;
if(p->x!=0x44048000 || p->y!=0x43c48000) {
p->x=0x44048000;
p->y=0x43c48000;
p->flags |= 6;
}
fc0->func_0005E840(*(int*)(D_002A8490->p2E8->p4+0x7b8));
}
fc0->func_001D6600();
if (!fe8 && !fec && !fd4) fbc->func_001D6600();
}
}

int C_00078620::func_00078620()
{
    Sprite_78620 **e;
    int i;
    unk64->func_001D5AD0();
    unk68->func_001D5AD0();
    e = arr80;
    i = 5;
    do {
        e[-5]->func_001D5AD0();
        (*e)->func_001D5AD0();
        e++;
        i--;
    } while (i);
    if (unk94)
        unk94->func_001D5AD0();
    unkB4->SetPos(491.0f, 388.0f);
    unkAC->SetPos(491.0f, 388.0f);
    unkB0->SetPos(365.0f, 388.0f);
    unkA8->SetPos(365.0f, 388.0f);
    if (unkE4)
        return 1;
    if (unkD4) {
        unkA8->SetPos(300.0f, 388.0f);
        unkB0->SetPos(300.0f, 388.0f);
        if (unkF0) {
            unkB4->SetPos(D_002A1FEC, 388.0f);
            unkAC->SetPos(D_002A1FEC, 388.0f);
            unkB0->SetPos(491.0f, 388.0f);
            unkA8->SetPos(491.0f, 388.0f);
        }
    } else {
        unkA8->SetPos(491.0f, 388.0f);
        unkB0->SetPos(491.0f, 388.0f);
    }
    if (unkA0)
        unkA8->func_001D5AD0();
    else
        unkB0->func_001D5AD0();
    if (unkE8 == 0 && unkEC == 0) {
        if (unkD4 && !unkF0) {
            unkAC->SetPos(40.0f, 388.0f);
            unkB4->SetPos(40.0f, 388.0f);
        } else {
            unkAC->SetPos(379.0f, 388.0f);
            unkB4->SetPos(379.0f, 388.0f);
        }
        if (unkA4)
            unkAC->func_001D5AD0();
        else
            unkB4->func_001D5AD0();
    }
    return 1;
}

void C_000788D0::func_000788D0()
{
    unkF4 = 1;
    v6();
    unkD8->v35();
    v18(0);
    unkD8->v35();
    unkD8->unk21 &= 0xfb;
    unkD8->unk1F4 = 1;
    unkB8 = 1;
    unkA4 = 0;
    unkA0 = 0;
    unkD4 = 0;
    unkDC = 0;
    unkE4 = 0;
    unkE8 = 0;
    unkEC = 0;
    unkC8->func_00092A50(&unkCC);
}

