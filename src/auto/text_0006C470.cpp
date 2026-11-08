/* 9 functions from 0x0006C470 to 0x0006D3E0, found by Ghidra. */
#include "common.h"

struct Sprite_6D {
    char pad0[0x10];
    float f10, f14;
    char pad18[0x20];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char b58;
    void func_001D5AD0();
    Sprite_6D *func_001D5AA0();
};
extern float D_00275AEC;
struct Mid_6C { Sprite_6D *func_0018C070(); };
struct Lookup_6C { int *func_0018C160(int); };

struct C_0006D100 {
    char pad0[0x6C];
    Sprite_6D *unk6C;
    Sprite_6D *unk70;
    Sprite_6D *arr74[2];
    Sprite_6D *arr7C[5];
    Sprite_6D *arr90[5];
    Sprite_6D *arrA4[4];
    Sprite_6D *unkB4;
    char padB8[0x4];
    Sprite_6D *unkBC;
    Sprite_6D *unkC0;
    char padC4[0xC];
    int unkD0;
    char padD4[8];
    float unkDC;
    Sprite_6D *unkE0;
    int func_0006D100();
    void func_0006CC20();
    C_0006D100 *func_0006C570(int);
    void func_001578D0();
};
extern int D_002789F4;
void func_001E891B(void *p);
extern float D_00275544;
extern float D_00278654, D_0027653C, D_00278650, D_002757F0, D_00278A60;
extern char D_00278690[];
extern char D_00278658[], D_00278648[], D_00278624[], D_00278600[], D_002786B0[];
extern char D_00275678[], D_002A5870[], D_002A5FA8[];
extern int D_00278664, D_00278668, D_0027866C, D_00278670;
extern char D_00278674;
extern int D_002A60B0, D_002A60B4, D_002A60B8, D_002A60BC;
extern char D_002A60C0;
void *func_001E8A44(int);
struct Wid_6C570 {
    char pad0[0x28];
    float f28, f2c;
    char pad30[8];
    unsigned int color;
    float f3c, f40, f44, f48, f4c, f50;
    char pad54[4];
    unsigned char b58;
    __forceinline void SetRGB(unsigned int rgb) { unsigned int c = color & 0xff000000; b58 |= 2; color = c | rgb; }
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
    Wid_6C570 *func_001D5760();
    void func_001D5810(char *, float, float, float);
};
struct Txt_6C570 {
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
    Txt_6C570 *func_001D5E90();
    void func_001D5FA0(int, char *, int, int);
    void func_001D6190(int, int, int *);
};
struct Obj184_6C570 {
    Obj184_6C570 *func_001B12C0(int);
    void func_001B1580(char *, char *, int, int);
    void func_001B19C0(int, int, int);
    void func_001B2270(unsigned int);
    void func_001B19A0(unsigned int);
};
struct C210_6C570 { void func_0018C210(); };
struct Data6C570 { char pad0[4]; char *p4; };
struct C_6C570 {
    char pad0[0x64];
    Obj184_6C570 *f64, *f68;
    Wid_6C570 *w6C, *w70;
    int f74, f78;
    Wid_6C570 *arr7C[5];
    Wid_6C570 *arr90[5];
    Wid_6C570 *arrA4[4];
    Wid_6C570 *wB4;
    char padB8[4];
    Wid_6C570 *wBC, *wC0;
    Txt_6C570 *tC4, *tC8;
    char padCC[8];
    int fD4;
    C_6C570 *func_0006C570(int);
    void func_001577A0(void *, int);
};

struct Obj_6C {
    virtual ~Obj_6C();
};

struct Res_6C {
    char pad0[0x34];
    unsigned int f34;
    char pad38[0xC];
    unsigned int f44, f48;
    char pad4C[2];
    unsigned char flags;
    void func_001D6410();
    void func_0005E840(char *);
    void func_001D6600();
};
struct Item_6C {
    void func_001B1980();
    void func_001B2270(unsigned int);
    void func_001B19C0(int,int,int);
    void func_001B1860(float,float,int,float,float,float,float,int,float,float,float,float,float);
};
struct C_0006CEC0 {
    char pad0[0x64];
    Item_6C *items[2];
    char pad6C[8];
    int positions[2];
    char pad7C[0x3C];
    int fB8;
    char padBC[8];
    Res_6C *fC4, *fC8;
    int fCC, fD0;
    char padD4[8];
    float fDC;
    int fE0, fE4, fE8;
    void func_0006CEC0();
};
extern char D_00277038[];
extern unsigned int D_0028F5E0;
int func_001ADCC0(char *, int, const char *, ...);
int func_001AC330(char *, const char *, ...);
extern "C" char * __cdecl strcpy(char *, const char *);

struct C_0006C470 {
    void *vtbl;
    char pad4[0x68];
    Obj_6C *arr6C[2];
    char pad74[8];
    Obj_6C *arr7C[5];
    Obj_6C *arr90[5];
    Obj_6C *arrA4[4];
    Obj_6C *unkB4;
    char padB8[4];
    Obj_6C *unkBC;
    Obj_6C *unkC0;
    Res_6C *unkC4;
    Res_6C *unkC8;
    void func_00157660();
    void func_0006C470();
};
extern float D_00275544;
extern float D_00278500;
struct C_6D_ManagerObj { char pad[0x154]; int unk154; void func_0001EDC0(int); };
struct C_6D_Manager { char pad[0x2A4]; C_6D_ManagerObj *unk2A4; char pad2A8[0x44]; Lookup_6C *f2EC; C_6D_ManagerObj *unk2F0; };
extern char D_002786A0[], D_00278A64[];
struct Bl6C570 { void func_00161680(); };
extern Bl6C570 *D_002A829C;
#define CLAMP(p) { Sprite_6D *o = (p)->func_001D5AA0(); if (D_00275AEC > o->f10) o->f10 = 10.0f; if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f; }
extern C_6D_Manager *D_002A8490;

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_0006D210_Obj {
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
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    void func_00032720();
    void func_00032740();
    char pad4[0x1D];
    u8 unk21;
    char pad22[0x1D2];
    int unk1F4;
    void func_00032A40();
};

struct C_0006D1D0 {
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
    char pad4[0xC8];
    int unkCC;
    int unkD0;
    C_0006D210_Obj *unkD4;
    f32 unkD8;
    f32 unkDC;
    int unkE0;
    int unkE4;
    int unkE8;
    int unkEC;
    void func_0006D1D0();
    void func_0006D210();
    void func_0006D280();
    void func_0006D2F0(float dt);
    void func_0005EA10(float dt);
};

void C_0006C470::func_0006C470()
{
    int i;
    vtbl = (void *)&D_002789F4;
    Res_6C *p = unkC8;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unkC4;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    for (i = 0; i < 2; i++) {
        if (arr6C[i]) {
            delete arr6C[i];
            arr6C[i] = 0;
        }
    }
    if (unkC0) {
        delete unkC0;
        unkC0 = 0;
    }
    if (unkBC) {
        delete unkBC;
        unkBC = 0;
    }
    if (unkB4) {
        delete unkB4;
        unkB4 = 0;
    }
    for (i = 0; i < 5; i++) {
        if (arr7C[i]) {
            delete arr7C[i];
            arr7C[i] = 0;
        }
        if (arr90[i]) {
            delete arr90[i];
            arr90[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (arrA4[i]) {
            delete arrA4[i];
            arrA4[i] = 0;
        }
    }
    func_00157660();
}

int func_001E8858();
C_6C570 *C_6C570::func_0006C570(int a)
{
    Wid_6C570 *w;
    Txt_6C570 *t;
    void *p;
    int v1, v2, *r;
    int i;
    int zero = 0;
    Wid_6C570 **e;
    fD4 = a;
    r = D_002A8490->f2EC->func_0018C160((int)D_002786A0);
    v1 = r ? *r : 0;
    r = D_002A8490->f2EC->func_0018C160((int)D_00278690);
    v2 = r ? *r : 0;
    D_002A60B0 = D_00278664;
    D_002A60B4 = D_00278668;
    D_002A60B8 = D_0027866C;
    D_002A60BC = D_00278670;
    D_002A60C0 = D_00278674;
    p = func_001E8A44(0x64);
    w = p ? ((Wid_6C570 *)p)->func_001D5760() : 0;
    w6C = w;
    w->func_001D5810(D_00278658, 0, 0, 0);
    w6C->SetW(640.0f);
    w6C->SetH(50.0f);
    w6C->Scale();
    p = func_001E8A44(0x64);
    w = p ? ((Wid_6C570 *)p)->func_001D5760() : 0;
    w70 = w;
    w->func_001D5810(D_00278658, 0, 398.0f, 0);
    w70->SetW(640.0f);
    w70->SetH(50.0f);
    w70->Scale();
    for (i = 0; i < 5; i++) {
        float x;
        p = func_001E8A44(0x64);
        w = p ? ((Wid_6C570 *)p)->func_001D5760() : 0;
        x = i * D_00278650;
        arr7C[i] = w;
        w->func_001D5810(D_00278658, x, 50.0f, 0);
        p = func_001E8A44(0x64);
        w = p ? ((Wid_6C570 *)p)->func_001D5760() : 0;
        arr90[i] = w;
        w->func_001D5810(D_00278658, x, 366.0f, 0);
        w = arr90[i];
        w->f3c = 0;
        w->f48 = 0;
        w->f40 = 1.0f;
        w->f44 = 0.99f;
        w->b58 |= 4;
    }
    p = func_001E8A44(0x64);
    w = p ? ((Wid_6C570 *)p)->func_001D5760() : 0;
    wBC = w;
    w->func_001D5810(D_00278648, 491.0f, 388.0f, zero);
    p = func_001E8A44(0x64);
    w = p ? ((Wid_6C570 *)p)->func_001D5760() : 0;
    wC0 = w;
    w->func_001D5810(D_00278624, 491.0f, 388.0f, zero);
    p = func_001E8A44(0x64);
    w = p ? ((Wid_6C570 *)p)->func_001D5760() : 0;
    wB4 = w;
    w->func_001D5810(D_00278600, zero, zero, zero);
    wB4->SetRGB(0);
    wB4->SetAlpha(0x80);
    wB4->SetH(448.0f);
    wB4->SetW(640.0f);
    for (i = 0, e = arrA4; i < 4; i++, e++) {
        p = func_001E8A44(0x64);
        w = p ? ((Wid_6C570 *)p)->func_001D5760() : 0;
        *e = w;
        if (i % 2)
            w->func_001D5810(D_002786B0, 321.0f, (i / 2) * D_002757F0 + D_00278A60, zero);
        else
            w->func_001D5810(D_002786B0, 100.0f, (i / 2) * D_002757F0 + D_00278A60, zero);
        w = *e;
        w->f3c = 1.0f;
        w->f48 = 1.0f;
        w->f40 = 0;
        w->f44 = 0;
        w->b58 |= 4;
        (*e)->SetW(221.0f);
    }
    func_001ADCC0((char *)&D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    p = func_001E8A44(0x184);
    f64 = p ? ((Obj184_6C570 *)p)->func_001B12C0(1) : 0;
    f64->func_001B1580(D_002786A0, D_002786A0, *(int *)(((Data6C570 *)*(void **)((char *)D_002A8490 + 0x2E8))->p4 + 0x7D8), zero);
    f74 = 0x115;
    f64->func_001B19C0(0x140, 0x115, zero);
    f64->func_001B2270(0xffcccccc);
    f64->func_001B19A0(D_0028F5E0);
    func_001577A0(f64, -1);
    p = func_001E8A44(0x184);
    f68 = p ? ((Obj184_6C570 *)p)->func_001B12C0(1) : 0;
    f68->func_001B1580(D_002786A0, D_002786A0, *(int *)(((Data6C570 *)*(void **)((char *)D_002A8490 + 0x2E8))->p4 + 0x7E8), zero);
    f78 = 0x13d;
    f68->func_001B19C0(0x140, 0x13d, zero);
    f68->func_001B2270(0xffcccccc);
    f68->func_001B19A0(D_0028F5E0);
    func_001577A0(f68, -1);
    p = func_001E8A44(0x60);
    t = p ? ((Txt_6C570 *)p)->func_001D5E90() : 0;
    tC8 = t;
    t->func_001D6190(v2, *(int *)(((Data6C570 *)*(void **)((char *)D_002A8490 + 0x2E8))->p4 + 0x7C8), (int *)D_00278690);
    tC8->SetPos(530.0f, 393.0f);
    tC8->SetColor(0xffcccccc);
    p = func_001E8A44(0x60);
    t = p ? ((Txt_6C570 *)p)->func_001D5E90() : 0;
    tC4 = t;
    t->func_001D5FA0(v1, D_002786A0, 0x14, zero);
    ((C210_6C570 *)v1)->func_0018C210();
    tC4->SetPos(320.0f, (float)(func_001E8858() * 2 + 0x5C));
    D_002A829C->func_00161680();
    return this;
}

void C_0006D100::func_0006CC20()
{
    int ids[2];
    int i;
    Sprite_6D **e;
    Lookup_6C *lk;
    ids[0] = (int)D_002786A0;
    ids[1] = (int)D_00278A64;
    for (i = 0; i < 2; i++) {
        lk = D_002A8490->f2EC;
        int *r = lk->func_0018C160(ids[i]);
        if (r && *r) {
            Sprite_6D *o = ((Mid_6C *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) o->f10 = 10.0f;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f;
        }
    }
    e = &unk6C;
    i = 2;
    do { CLAMP(*e); e++; i--; } while (i);
    if (unkBC) CLAMP(unkBC);
    if (unkC0) CLAMP(unkC0);
    e = &arr90[0];
    i = 5;
    do {
        if (e[-5]) CLAMP(e[-5]);
        if (*e) CLAMP(*e);
        e++; i--;
    } while (i);
    e = arrA4;
    i = 4;
    do { if (*e) CLAMP(*e); e++; i--; } while (i);
    if (unkB4) CLAMP(unkB4);
    func_001578D0();
}

void C_0006CEC0::func_0006CEC0()
{
 char buffer[68];
 Res_6C *p = fC4;
 unsigned int color = p->f48;
 if (color != 0xFFAAAAFF) { p->flags |= 8; p->f48 = (color & 0xFFAAAAFF) | 0xAAAAFF; }
 if (fB8 > 0) {
  func_001ADCC0(buffer, 260, D_00277038, fB8);
  func_001AC330(buffer + 4, *(char **)(*(char **)(*(char **)((char *)D_002A8490 + 0x2E8) + 4) + 0x858), buffer);
 } else strcpy(buffer + 4, *(char **)(*(char **)(*(char **)((char *)D_002A8490 + 0x2E8) + 4) + 0xEE0));
 fC4->func_0005E840(buffer + 4);
 p = fC4;
 if (p->f34 != 0x3F800000) { p->f34 = 0x3F800000; p->flags |= 6; }
 p = fC4;
 if (p->f44 != D_0028F5E0) { p->f44 = D_0028F5E0; p->flags |= 6; }
 fC4->func_001D6600();
 if (fDC > D_00275544) {
  for(int i=0;i<2;i++) items[i]->func_001B1980();
  return;
 }
 p = fC8;
 if (p->f34 != 0x3F800000) { p->f34 = 0x3F800000; p->flags |= 6; }
 fC8->func_001D6600();
 if(fE8) {
  for(int i=0;i<2;i++) {
   items[i]->func_001B1980();
   if(i==fD0) {
    items[i]->func_001B2270(0xFFBFA35A);
    items[i]->func_001B19C0(320,positions[i]+2,0);
    items[i]->func_001B1860(0,-1,255,1,0,0,0,255,1.3f,0,0,0.2f,0);
   } else if(i==fE4) {
    items[i]->func_001B2270(0xFFCCCCCC);
    items[i]->func_001B19C0(320,positions[i],0);
    items[i]->func_001B1860(0,-1,255,1.3f,0,0,0,255,1,0,0,0.2f,0);
   } else {
    items[i]->func_001B2270(0xFFCCCCCC);
    items[i]->func_001B19C0(320,positions[i],0);
    items[i]->func_001B1860(0,-1,255,1,0,0,-1,255,1,0,0,0,0);
   }
  }
  fE8=0;
 }
}

int C_0006D100::func_0006D100()
{
    int i;
    Sprite_6D *e;

    unk6C->func_001D5AD0();
    unk70->func_001D5AD0();
    if (unkB4 != 0) {
        unkB4->func_001D5AD0();
    }
    for (i = 0; i < 5; i++) {
        arr7C[i]->func_001D5AD0();
        arr90[i]->func_001D5AD0();
    }
    if (!(unkDC > D_00275544)) {
        for (i = 0; i < 4; i++) {
            if (i == unkD0 * 2 || i == unkD0 * 2 + 1) {
                e = arrA4[i];
                e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
                e->b58 |= 2;
                arrA4[i]->func_001D5AD0();
            }
        }
        if (unkE0 != 0) {
            unkC0->func_001D5AD0();
            return 1;
        }
        unkBC->func_001D5AD0();
    }
    return 1;
}

void C_0006D1D0::func_0006D1D0() {
    unkCC = 1;
    unkE0 = 0;
    v6();
    unkE8 = 1;
    unkE4 = -1;
    unkEC = 1;
}

void C_0006D1D0::func_0006D210() {
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    unkE0 = 0;
    unkCC = 0;
    unkD4->v34();
    unkD4->func_00032A40();
    v4();
    unkD4->unk1F4 = 0;
}

void C_0006D1D0::func_0006D280() {
    unkD0 = 0;
    unkCC = 1;
    v6();
    unkD4->v35();
    v18(0);
    unkD4->unk21 &= 0xfb;
    unkD4->unk1F4 = 1;
    unkE8 = 1;
    unkEC = 1;
    unkE4 = -1;
    unkDC = 1.5f;
}

void C_0006D1D0::func_0006D2F0(float dt) {
 if (unkE0 && (unkD8 += dt) >= D_00278500) {
 switch (unkD0) {
 case 1: D_002A8490->unk2A4->unk154 = 1; D_002A8490->unk2F0->func_0001EDC0(4); break;
 case 0: func_0006D210(); unkD4->func_00032720(); unkD4->v39(); unkD4->func_00032740(); break;
 }
 unkE0 = 0; unkD8 = 0.0f;
 }
 if (unkDC > D_00275544) { unkDC -= dt; if (unkDC < D_00275544) unkDC = 0.0f; }
 func_0005EA10(dt);
}

