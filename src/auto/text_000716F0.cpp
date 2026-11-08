/* 10 functions from 0x000716F0 to 0x000725B0, found by Ghidra. */
#include "common.h"
struct Clamp_716 { char pad[16]; float f10, f14; };
struct Lookup_716 { int *func_0018C160(int); void func_0018C780(int, int *, int); };
struct Mid_716 { Clamp_716 *func_0018C070(); };
extern float D_00275AEC;
extern int D_00278690, D_00278678;
extern int D_0028F5E0;
extern float D_00278654, D_00275544, D_0027653C, D_00278650, D_002755E8, D_002757F0, D_002786B8;
extern int D_00278664, D_00278668, D_0027866C, D_00278670;
extern char D_00278674;
extern int D_002A60B0, D_002A60B4, D_002A60B8, D_002A60BC;
extern char D_002A60C0;
extern char D_00278658[], D_002786B0[], D_00278600[], D_00278638[], D_00278608[], D_00275678[];
extern int D_002A5870, D_002A5FA8;
void *func_001E8A44(int size);
struct ObjB_71880 {
    ObjB_71880 *func_001B12C0(int);
    void func_001B13A0(int, int, int, int);
    void func_001B19C0(int, int, int);
    void func_001B2270(int);
    void func_001B19A0(int);
};
struct ObjD5_71880 {
    char pad0[4];
    int f4;
    int f8;
    char padC[0x1C];
    int f28;
    int f2c;
    char pad30[0x14];
    int f44;
    int f48;
    char pad4C[2];
    unsigned char b4E;
    char pad4F[9];
    unsigned char b58;
    ObjD5_71880 *func_001D5E90();
    void func_001D5FA0(int, int, int, int);
    void func_0005E840(char *);
};
struct ObjD57_71880 {
    char pad0[0x28];
    int f28;
    int f2c;
    char pad30[8];
    int f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    char pad54[4];
    unsigned char b58;
    ObjD57_71880 *func_001D5760();
    void func_001D5810(int, float, float, int);
};

struct S_Obj4_716 {
    char pad0[0x838];
    char *f838;
    char pad83C[0xF4];
    char *p930;
    char pad934[0x13C];
    char *fA70;
    char padA74[4];
    char *fA78;
    char padA7C[0x424];
    char *fEA0;
    char padEA4[0x74];
    char *fF18;
    char padF1C[0x10C];
    char *f1028;
    char pad102C[0xD4];
    char *f1100;
};

struct S_Obj2E8_716 {
    char pad0[4];
    S_Obj4_716 *p4;
};

struct S_Obj2E0_716 {
    char pad0[0x2FC];
    void *f2FC;
};

struct S_Root_716 {
    char pad0[0x2E0];
    S_Obj2E0_716 *f2E0;
    char pad2E4[4];
    S_Obj2E8_716 *p2E8;
    Lookup_716 *p2EC;
};

struct S_Setter_716 {
    void func_001B17D0(char *s);
};

struct S_A4_716 {
    char pad0[0x1F4];
    int f1F4;
};

struct C_000952A0 {
    int func_000952A0(int i);
};

struct C_00095250 {
    int func_00095250(int i);
};

struct C_00094890 {
    int func_00094890(void);
};

struct C_00094870 {
    int func_00094870(void);
};

extern S_Root_716 *D_002A8490;
extern int D_00277038;
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_001AC330(char *dest, char *fmt, char *arg);
extern char D_002786BC[];
extern char D_00275630[];

struct C_0005E840 {
    void func_0005E840(char *s);
};

struct C_000952F0 {
    int func_000952F0(void);
};

struct C_00095390 {
    char *func_00095390(int i);
};

struct C_00072450 {
    char pad0[0xB0];
    int fB0;
    char padB4[0x24];
    S_Setter_716 *fD8;
    void func_00072450(void);
};

struct C_000717E0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x60];
    int f64;
    int f68;
    int f6C;
    char pad70[0x18];
    int f88;
    int f8C;
    char pad90[4];
    int f94;
    int f98;
    int f9C;
    int fA0;
    S_A4_716 *fA4;
    int fA8;
    char padAC[0x10];
    int fBC;
    int fC0;
    char padC4[0x78];
    int f13C;
    void func_000717E0(void);
};

struct C_000721D0 {
    char pad0[0x88];
    int f88;
    int f8C;
    int f90;
    char pad94[0x14];
    int fA8;
    char padAC[8];
    int fB4;
    void func_000721D0(void);
};

struct C_00072280 {
    char pad0[0x88];
    int f88;
    int f8C;
    int f90;
    char pad94[0x14];
    int fA8;
    char padAC[8];
    int fB4;
    void func_00072280(void);
};

/* a drawable the page owns: func_001D5AD0 draws it, f38/b58 are its colour and dirty flag */
struct Sprite_724E0 {
    virtual ~Sprite_724E0();
    char pad0[0x34];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char b58;
    void func_001D5AD0();
    Clamp_716 *func_001D5AA0();
};

extern int D_00278C64;
extern "C" void __cdecl func_001E891B(void *);
struct Resource_716F0 { void func_001D6410(); };
struct C_000724E0 {
    void *vtbl;
    char pad0[0x60];
    int unk64;
    char pad68[8];
    Resource_716F0 *unk70;
    Resource_716F0 *unk74;
    Sprite_724E0 *unk78;
    Sprite_724E0 *unk7C;
    Sprite_724E0 *unk80;
    char pad84[4];
    int f88;
    int f8C;
    int f90;
    int f94;
    int unk98;
    char pad9C[8];
    int fA4;
    char padA8[0x24];
    ObjB_71880 *arrCC[4];
    int arrDC[4];
    Sprite_724E0 *arrEC[8];
    Sprite_724E0 *arr10C[5];
    Sprite_724E0 *arr120[5];
    Sprite_724E0 *unk134;
    Sprite_724E0 *unk138;
    void func_000716F0();
    void func_00157660();
    void func_000724E0(void);
    C_000724E0 *func_00071880(int a0);
    void func_001577A0(ObjB_71880 *o, int a1);
    void func_00071F40();
    void func_001578D0();
};

struct C_00072330 {
    char pad0[0x70];
    C_0005E840 *f70;
    char pad74[0x14];
    int f88;
    char pad8C[0x38];
    int fC4;
    int fC8;
    char padCC[4];
    S_Setter_716 *fD0;
    void func_00072330(void);
};

struct C_00072590 {
    char pad0[0xC0];
    int unkC0;
    int unkC4;
    int unkC8;
    void func_00072590(int a0);
};


void C_000724E0::func_000716F0()
{
    int i;
    Resource_716F0 *p;
    vtbl = &D_00278C64;
    if (unk78) { delete unk78; unk78 = 0; }
    if (unk7C) { delete unk7C; unk7C = 0; }
    p = unk74;
    if (p) { p->func_001D6410(); func_001E891B(p); unk74 = 0; }
    for (i = 0; i < 8; i++) { if (arrEC[i]) { delete arrEC[i]; arrEC[i] = 0; } }
    for (i = 0; i < 2; i++) { if ((&unk134)[i]) { delete (&unk134)[i]; (&unk134)[i] = 0; } }
    if (unk80) { delete unk80; unk80 = 0; }
    for (i = 0; i < 5; i++) {
        if (arr10C[i]) { delete arr10C[i]; arr10C[i] = 0; }
        if (arr120[i]) { delete arr120[i]; arr120[i] = 0; }
    }
    p = unk70;
    if (p) { p->func_001D6410(); func_001E891B(p); unk70 = 0; }
    func_00157660();
}

void C_000717E0::func_000717E0(void)
{
    int a;
    int b;

    v6();
    fA4->f1F4 = 1;
    fA8 = 0;
    f64 = f6C;
    f98 = 0;
    f94 = 1;
    fBC = 0;
    f9C = 1;
    f68 = -1;
    fA0 = 0;
    a = ((C_00094890 *)D_002A8490->f2E0->f2FC)->func_00094890();
    f88 = a;
    b = ((C_00094870 *)D_002A8490->f2E0->f2FC)->func_00094870();
    fBC = 0;
    fC0 = 1;
    f13C = 1;
    f8C = b;
}

C_000724E0 *C_000724E0::func_00071880(int a0)
{
    ObjB_71880 **slot;
    int edi;
    int ids[2];
    int *r;
    int saved;
    int ebxval;
    void *mem;
    int i;

    ids[0] = (int)&D_00278678;
    ids[1] = (int)&D_00278690;
    D_002A8490->p2EC->func_0018C780(2, ids, 0);
    r = D_002A8490->p2EC->func_0018C160((int)&D_00278690);
    saved = r ? *r : 0;
    r = D_002A8490->p2EC->func_0018C160((int)&D_00278678);
    ebxval = r ? *r : 0;
    fA4 = a0;
    edi = 0x75;
    slot = arrCC;
    do {
        mem = func_001E8A44(0x184);
        *slot = mem ? ((ObjB_71880 *)mem)->func_001B12C0(1) : 0;
        (*slot)->func_001B13A0((int)&D_00278690, (int)&D_00278690, 0, 0x28);
        ((int *)slot)[4] = edi;
        (*slot)->func_001B19C0(0x140, edi, 0);
        (*slot)->func_001B2270(0xffcccccc);
        (*slot)->func_001B19A0(D_0028F5E0);
        func_001577A0(*slot, -1);
        edi += 0x28;
        slot++;
    } while (edi < 0x115);

    mem = func_001E8A44(0x60);
    unk70 = (Resource_716F0 *)(mem ? ((ObjD5_71880 *)mem)->func_001D5E90() : 0);
    ((ObjD5_71880 *)unk70)->func_001D5FA0(ebxval, (int)&D_00278678, 0x32, (int)D_002A8490->p2E8->p4->fEA0);
    if (((ObjD5_71880 *)unk70)->f4 != 0x43a00000 || ((ObjD5_71880 *)unk70)->f8 != 0x42280000) {
        ((ObjD5_71880 *)unk70)->f4 = 0x43a00000;
        ((ObjD5_71880 *)unk70)->f8 = 0x42280000;
        ((ObjD5_71880 *)unk70)->b4E |= 6;
    }
    if (((ObjD5_71880 *)unk70)->f48 != 0xaaaaaaaa) {
        ((ObjD5_71880 *)unk70)->b4E |= 8;
        ((ObjD5_71880 *)unk70)->f48 = (((ObjD5_71880 *)unk70)->f48 & 0xffaaaaaa) | 0x00aaaaaa;
    }
    if (((ObjD5_71880 *)unk70)->f44 != D_0028F5E0) {
        ((ObjD5_71880 *)unk70)->f44 = D_0028F5E0;
        ((ObjD5_71880 *)unk70)->b4E |= 6;
    }

    mem = func_001E8A44(0x60);
    unk74 = (Resource_716F0 *)(mem ? ((ObjD5_71880 *)mem)->func_001D5E90() : 0);
    ((ObjD5_71880 *)unk74)->func_001D5FA0(saved, (int)&D_00278690, 4, 0);
    if (((ObjD5_71880 *)unk74)->f48 != -0x333334) {
        ((ObjD5_71880 *)unk74)->b4E |= 8;
        ((ObjD5_71880 *)unk74)->f48 = (((ObjD5_71880 *)unk74)->f48 & -0x333334) | 0x00cccccc;
    }
    ((ObjD5_71880 *)unk74)->func_0005E840(D_002A8490->p2E8->p4->f838);
    if (((ObjD5_71880 *)unk74)->f4 != 0x43d08000 || ((ObjD5_71880 *)unk74)->f8 != 0x43c48000) {
        ((ObjD5_71880 *)unk74)->f8 = 0x43c48000;
        ((ObjD5_71880 *)unk74)->f4 = 0x43d08000;
        ((ObjD5_71880 *)unk74)->b4E |= 6;
    }

    D_002A60B0 = D_00278664;
    D_002A60B4 = D_00278668;
    D_002A60B8 = D_0027866C;
    D_002A60BC = D_00278670;
    D_002A60C0 = D_00278674;

    mem = func_001E8A44(0x64);
    unk134 = (Sprite_724E0 *)(mem ? ((ObjD57_71880 *)mem)->func_001D5760() : 0);
    ((ObjD57_71880 *)unk134)->func_001D5810((int)&D_00278658, 0.0f, 0.0f, 0);
    ((ObjD57_71880 *)unk134)->f3c = ((ObjD57_71880 *)unk134)->f4c * D_00278654;
    ((ObjD57_71880 *)unk134)->b58 |= 4;
    ((ObjD57_71880 *)unk134)->f40 = ((ObjD57_71880 *)unk134)->f4c * D_00275544;
    ((ObjD57_71880 *)unk134)->f44 = ((ObjD57_71880 *)unk134)->f50 * D_0027653C;
    ((ObjD57_71880 *)unk134)->f48 = ((ObjD57_71880 *)unk134)->f50 * D_00275544;
    if (((ObjD57_71880 *)unk134)->f2c != 0x42480000) {
        ((ObjD57_71880 *)unk134)->f2c = 0x42480000;
        ((ObjD57_71880 *)unk134)->b58 |= 1;
    }
    if (((ObjD57_71880 *)unk134)->f28 != 0x44200000) {
        ((ObjD57_71880 *)unk134)->f28 = 0x44200000;
        ((ObjD57_71880 *)unk134)->b58 |= 1;
    }

    mem = func_001E8A44(0x64);
    unk138 = (Sprite_724E0 *)(mem ? ((ObjD57_71880 *)mem)->func_001D5760() : 0);
    ((ObjD57_71880 *)unk138)->func_001D5810((int)&D_00278658, 0.0f, 398.0f, 0);
    if (((ObjD57_71880 *)unk138)->f28 != 0x44200000) {
        ((ObjD57_71880 *)unk138)->f28 = 0x44200000;
        ((ObjD57_71880 *)unk138)->b58 |= 1;
    }
    if (((ObjD57_71880 *)unk138)->f2c != 0x42480000) {
        ((ObjD57_71880 *)unk138)->f2c = 0x42480000;
        ((ObjD57_71880 *)unk138)->b58 |= 1;
    }
    ((ObjD57_71880 *)unk138)->f3c = ((ObjD57_71880 *)unk138)->f4c * D_00278654;
    ((ObjD57_71880 *)unk138)->b58 |= 4;
    ((ObjD57_71880 *)unk138)->f40 = ((ObjD57_71880 *)unk138)->f4c * D_00275544;
    ((ObjD57_71880 *)unk138)->f44 = ((ObjD57_71880 *)unk138)->f50 * D_0027653C;
    ((ObjD57_71880 *)unk138)->f48 = ((ObjD57_71880 *)unk138)->f50 * D_00275544;

    i = 0;
    {
        Sprite_724E0 **sp = arr120;
        do {
            float fv;
            mem = func_001E8A44(0x64);
            sp[-5] = (Sprite_724E0 *)(mem ? ((ObjD57_71880 *)mem)->func_001D5760() : 0);
            fv = (float)i * D_00278650;
            ((ObjD57_71880 *)sp[-5])->func_001D5810((int)&D_00278658, fv, 50.0f, 0);
            mem = func_001E8A44(0x64);
            *sp = (Sprite_724E0 *)(mem ? ((ObjD57_71880 *)mem)->func_001D5760() : 0);
            ((ObjD57_71880 *)*sp)->func_001D5810((int)&D_00278658, fv, 366.0f, 0);
            ((ObjD57_71880 *)*sp)->f3c = 0.0f;
            ((ObjD57_71880 *)*sp)->f48 = 0.0f;
            ((ObjD57_71880 *)*sp)->b58 |= 4;
            ((ObjD57_71880 *)*sp)->f40 = 1.0f;
            ((ObjD57_71880 *)*sp)->f44 = 0.99f;
            i++;
            sp++;
        } while (i < 5);
    }

    i = 0;
    {
        Sprite_724E0 **sp = arrEC;
        do {
            mem = func_001E8A44(0x64);
            *sp = (Sprite_724E0 *)(mem ? ((ObjD57_71880 *)mem)->func_001D5760() : 0);
            if (i % 2 == 0) {
                float fv = (float)i * D_002755E8 * D_002757F0 + D_002786B8;
                ((ObjD57_71880 *)*sp)->func_001D5810((int)&D_002786B0, 100.0f, fv, 0);
            } else {
                float fv = (float)(i - 1) * D_002755E8 * D_002757F0 + D_002786B8;
                ((ObjD57_71880 *)*sp)->func_001D5810((int)&D_002786B0, 321.0f, fv, 0);
                ((ObjD57_71880 *)*sp)->f3c = 1.0f;
                ((ObjD57_71880 *)*sp)->f48 = 1.0f;
                ((ObjD57_71880 *)*sp)->b58 |= 4;
                ((ObjD57_71880 *)*sp)->f40 = 0.0f;
                ((ObjD57_71880 *)*sp)->f44 = 0.0f;
            }
            if (((ObjD57_71880 *)*sp)->f28 != 0x435d0000) {
                ((ObjD57_71880 *)*sp)->f28 = 0x435d0000;
                ((ObjD57_71880 *)*sp)->b58 |= 1;
            }
            i++;
            sp++;
        } while (i < 8);
    }

    mem = func_001E8A44(0x64);
    unk80 = (Sprite_724E0 *)(mem ? ((ObjD57_71880 *)mem)->func_001D5760() : 0);
    ((ObjD57_71880 *)unk80)->func_001D5810((int)&D_00278600, 0.0f, 0.0f, 0);
    ((ObjD57_71880 *)unk80)->f38 &= 0xff000000;
    ((ObjD57_71880 *)unk80)->b58 |= 2;
    ((ObjD57_71880 *)unk80)->b58 |= 2;
    ((char *)&((ObjD57_71880 *)unk80)->f38)[3] = (char)0x80;
    if (((ObjD57_71880 *)unk80)->f2c != 0x43e00000) {
        ((ObjD57_71880 *)unk80)->f2c = 0x43e00000;
        ((ObjD57_71880 *)unk80)->b58 |= 1;
    }
    if (((ObjD57_71880 *)unk80)->f28 != 0x44200000) {
        ((ObjD57_71880 *)unk80)->f28 = 0x44200000;
        ((ObjD57_71880 *)unk80)->b58 |= 1;
    }

    mem = func_001E8A44(0x64);
    unk78 = (Sprite_724E0 *)(mem ? ((ObjD57_71880 *)mem)->func_001D5760() : 0);
    ((ObjD57_71880 *)unk78)->func_001D5810((int)&D_00278638, 379.0f, 388.0f, 0);

    mem = func_001E8A44(0x64);
    unk7C = (Sprite_724E0 *)(mem ? ((ObjD57_71880 *)mem)->func_001D5760() : 0);
    ((ObjD57_71880 *)unk7C)->func_001D5810((int)&D_00278608, 379.0f, 388.0f, 0);

    func_001ADCC0((char *)&D_002A60B0, 0x104, D_00275678, (char *)&D_002A5870, (char *)&D_002A5FA8);
    f88 = ((C_00094890 *)D_002A8490->f2E0->f2FC)->func_00094890();
    f8C = ((C_00094870 *)D_002A8490->f2E0->f2FC)->func_00094870();
    f94 = 1;
    return this;
}

void C_000724E0::func_00071F40() {
int ids[2]; int i; int *r; Clamp_716 *o; Sprite_724E0 **e; Lookup_716 *lk;
ids[0]=(int)&D_00278690; ids[1]=(int)&D_00278678;
for(i=0;i<2;i++) { lk=D_002A8490->p2EC; r=lk->func_0018C160(ids[i]); if(r && *r) { o=((Mid_716*)*r)->func_0018C070(); if (D_00275AEC > o->f10) *(int *)&o->f10=0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14=0x41200000; } }
if (unk78) { o=unk78->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10=0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14=0x41200000; }
if (unk7C) { o=unk7C->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10=0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14=0x41200000; }

e=&unk134; i=2; do { if ((*e)) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10=0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14=0x41200000; }
 e++; i--; } while(i);
e=arrEC; i=8; do { if ((*e)) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10=0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14=0x41200000; }
 e++; i--; } while(i);
e=arr120; i=5; do { if (e[-5]) { o=e[-5]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10=0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14=0x41200000; }
if ((*e)) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10=0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14=0x41200000; }
 e++; i--; } while(i);
if (unk80) { o=unk80->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10=0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14=0x41200000; }
func_001578D0();
}

void C_000721D0::func_000721D0(void)
{
    while (f90 != 0) {
        if (((C_000952A0 *)D_002A8490->f2E0->f2FC)->func_000952A0(f88) != 0 &&
            ((C_00095250 *)D_002A8490->f2E0->f2FC)->func_00095250(f88) == 0) {
            f90 = 0;
            fA8 = 1;
            fB4 = 0;
        } else {
            f88++;
            if (f88 > f8C) {
                f88 = 1;
            }
        }
    }
}

void C_00072280::func_00072280(void)
{
    while (f90 != 0) {
        if (((C_000952A0 *)D_002A8490->f2E0->f2FC)->func_000952A0(f88) != 0 &&
            ((C_00095250 *)D_002A8490->f2E0->f2FC)->func_00095250(f88) == 0) {
            f90 = 0;
            fA8 = 1;
            fB4 = 0;
        } else {
            f88--;
            if (f88 < 1) {
                f88 = f8C;
            }
        }
    }
}

extern "C" unsigned int strlen(const char *);
void C_00072330::func_00072330(void)
{
    char a[0x34];
    char b[0x40];

    if (fC8 != 0) {
        S_Obj4_716 *o = D_002A8490->p2E8->p4;
        func_001ADCC0(a, 0x32, D_002786BC, o->f1028, fC4 + 1, o->f1100);
        f70->func_0005E840(a);
    } else {
        f70->func_0005E840(D_002A8490->p2E8->p4->fEA0);
    }
    if (((C_000952F0 *)D_002A8490->f2E0->f2FC)->func_000952F0() == 0) {
        func_001AC330(b, D_002A8490->p2E8->p4->fA78, D_00275630);
    } else {
        char *fmt = D_002A8490->p2E8->p4->fA78;
        func_001AC330(b, fmt, ((C_00095390 *)D_002A8490->f2E0->f2FC)->func_00095390(f88));
    }
    if (strlen(b) > 0x27) {
        b[0x27] = 0;
    }
    fD0->func_001B17D0(b);
}

void C_00072450::func_00072450(void)
{
    char dest[0x40];
    char buf[4];

    func_001ADCC0(buf, 0x104, (char *)&D_00277038, fB0);
    if (fB0 > 0) {
        func_001AC330(dest, D_002A8490->p2E8->p4->fA70, buf);
    } else {
        S_Obj4_716 *p = D_002A8490->p2E8->p4;
        func_001AC330(dest, p->fF18, p->p930);
    }
    fD8->func_001B17D0(dest);
}

void C_000724E0::func_000724E0(void)
{
    int i;
    Sprite_724E0 *e;

    unk134->func_001D5AD0();
    unk138->func_001D5AD0();
    for (i = 0; i < 5; i++) {
        arr10C[i]->func_001D5AD0();
        arr120[i]->func_001D5AD0();
    }
    if (unk98 != 0) {
        unk7C->func_001D5AD0();
    } else {
        unk78->func_001D5AD0();
    }
    if (unk80 != 0) {
        unk80->func_001D5AD0();
    }
    for (i = 0; i < 8; i++) {
        if (i == unk64 * 2 || i == unk64 * 2 + 1) {
            e = arrEC[i];
            e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
            e->b58 |= 2;
            arrEC[i]->func_001D5AD0();
        }
    }
}

void C_00072590::func_00072590(int a0) {
    unkC4 = a0;
    unkC0 = 1;
    unkC8 = 1;
}
