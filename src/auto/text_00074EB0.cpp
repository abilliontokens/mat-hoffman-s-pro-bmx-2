/* 7 functions from 0x00074EB0 to 0x00075C70, found by Ghidra. */
#include "common.h"

extern int D_0027850C;
struct Clamp_74 { char pad[0x10]; float f10, f14; };
struct Mid_74 { Clamp_74 *func_0018C070(); };
struct Lookup_74 { int *func_0018C160(int); };
struct Mgr2A4_74 { char pad0[0x2c4]; float f2C4; };
struct Strs_74 { char pad0[0x850]; char *f850; char pad854[0xec0 - 0x854]; char *fEC0; char padEC4[0xfd8 - 0xec4]; char *fFD8; };
struct Mgr2E8_74 { char pad0[4]; Strs_74 *p4; };
struct Global_74 { char pad[0x2a4]; Mgr2A4_74 *p2A4; char pad2A8[0x40]; Mgr2E8_74 *p2E8; Lookup_74 *p2EC; };
extern Global_74 *D_002A8490;
extern float D_00275AEC;
extern int D_002786A0, D_00278690, D_00278678;
struct W_74EB0 { Clamp_74 *func_001D5AA0(); };
struct C_00074EB0 {
    char pad0[0xac];
    W_74EB0 *unkAC[19];
    char padF8[0x198 - 0xf8];
    W_74EB0 *unk198[3];
    void func_001578D0();
    void func_00074EB0();
};
extern int D_00278DF4;

struct Lbl_75170 {
    char pad0[0x34];
    u32 f34;
    char pad38[0xC];
    u32 f44, f48;
    char pad4C[2];
    u8 f4E;
    void func_0005E840(char *);
    void func_001D6600();
};
struct Text_75170 {
    void func_001B1980();
    void func_001B2270(unsigned int);
    void func_001B19C0(int, int, int);
    void func_001B1860(float, float, int, float, float, float, float, int, float, float, float, float, float);
};
struct Mode_75170 { char pad0[0x90]; int f90; };
struct Player_75170 { char pad0[0x6CC]; int f6CC, f6D0, f6D4, f6D8; };
struct Shared_75170 { char pad0[0x76C]; int f76C, f770, f774, f778; };
struct Root_75170 { char pad0[0x4E4]; Player_75170 *f4E4[17]; Shared_75170 *f528; };
extern Root_75170 *D_002B9120;
extern char D_00278DE4[], D_00278DD8[], D_00277038[], D_00278DD0[];
extern float D_00276DD4, D_00275994;
extern u32 D_0028F5E0;
int func_001ADCC0(char *, int, const char *, ...);
int func_001AC330(char *, const char *, ...);

struct C_00075170 {
    char pad0[0x64];
    Lbl_75170 *unk64[3];
    Lbl_75170 *unk70[3];
    Lbl_75170 *unk7C[3];
    Lbl_75170 *unk88[3];
    Text_75170 *unk94[3];
    float fA0[3];
    char padAC[0x100 - 0xAC];
    Lbl_75170 *unk100, *unk104, *unk108, *unk10C, *unk110, *unk114, *unk118;
    int unk11C;
    Mode_75170 *unk120;
    char pad124[0x12C - 0x124];
    int unk12C[8];
    int unk14C[8];
    int unk16C[8];
    int unk18C, unk190;
    char pad194[0x1A8 - 0x194];
    int unk1A8, unk1AC;
    char pad1B0[4];
    int unk1B4;
    void func_00075170();
};
static __forceinline int Percent_75170(float n, float total)
{
    return (int)(n * D_00275994 / total);
}
#define SETUP_LABEL(slot) { \
    Lbl_75170 *p = (slot); \
    u32 color = p->f48; \
    if (color != 0xffcccccc) { p->f4E |= 8; p->f48 = (color & 0xffcccccc) | 0xcccccc; } \
    p = (slot); \
    if (p->f44 != D_0028F5E0) { p->f44 = D_0028F5E0; p->f4E |= 6; } \
    p = (slot); \
    if (p->f34 != 0x3f800000) { p->f34 = 0x3f800000; p->f4E |= 6; } }

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

struct C_00075880_Obj {
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
    void func_00032A40();
    void func_00031610(int, int);
};

struct C_00075880 {
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
    char pad4[0x118];
    int unk11C;
    C_00075880_Obj *unk120;
    int unk124;
    char pad128[0x6c];
    int unk194;
    char pad198[0x10];
    int unk1A8;
    int unk1AC;
    int unk1B0;
    int unk1B4;
    int unk1B8;
    char pad1BC[4];
    int unk1C0;
    void func_00075880();
    void func_000758F0();
    int func_00075980(int *, int);
    int func_00157BF0(int *, int);
};

struct C_00075B20 {
    void *vtbl;                  /* 0x00 */
    char pad04[0x14];            /* 0x04 */
    u32 unk18;                   /* 0x18 */
    char pad1C[0x08];            /* 0x1C */
    u32 unk24[8];                /* 0x24 */
    u32 unk44[8];                /* 0x44 */
    u32 unk64[3];                /* 0x64 */
    u32 unk70[3];                /* 0x70 */
    u32 unk7C[3];                /* 0x7C */
    u32 unk88[3];                /* 0x88 */
    u32 unk94[3];                /* 0x94 */
    char padA0[0x0C];            /* 0xA0 */
    u32 unkAC[2];                /* 0xAC */
    u32 unkB4[5];                /* 0xB4 */
    u32 unkC8[5];                /* 0xC8 */
    u32 unkDC[6];                /* 0xDC */
    char padF4[0x04];            /* 0xF4 */
    u32 unkF8;                   /* 0xF8 */
    u32 unkFC;                   /* 0xFC */
    u32 unk100;                  /* 0x100 */
    u32 unk104;                  /* 0x104 */
    u32 unk108;                  /* 0x108 */
    u32 unk10C;                  /* 0x10C */
    u32 unk110;                  /* 0x110 */
    u32 unk114;                  /* 0x114 */
    u32 unk118;                  /* 0x118 */
    u32 unk11C;                  /* 0x11C */
    u32 unk120;                  /* 0x120 */
    u32 unk124;                  /* 0x124 */
    char pad128[0x04];           /* 0x128 */
    u32 unk12C[8];               /* 0x12C */
    u32 unk14C[8];               /* 0x14C */
    u32 unk16C[8];               /* 0x16C */
    char pad18C[0x08];           /* 0x18C */
    u32 unk194;                  /* 0x194 */
    u32 unk198[2];               /* 0x198 */
    u32 unk1A0[2];               /* 0x1A0 */
    u32 unk1A8;                  /* 0x1A8 */
    u32 unk1AC;                  /* 0x1AC */
    char pad1B0[0x04];           /* 0x1B0 */
    u32 unk1B4;                  /* 0x1B4 */
    u32 unk1B8;                  /* 0x1B8 */
    char pad1BC[0x04];           /* 0x1BC */
    u32 unk1C0;                  /* 0x1C0 */
    void *func_00075B20(int param_1);
    void func_00157600(int a0);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct S_00075750_Mode {
    char pad0[0x90];
    int f90;
};

struct C_00075750 {
    char pad0[0xAC];
    C_001D5AD0 *unkAC[2];
    C_001D5AD0 *unkB4[5];
    C_001D5AD0 *unkC8[5];
    C_001D5AD0 *unkDC[6];
    C_001D5AD0 *unkF4;
    char padF8[0x11C - 0xF8];
    int unk11C;
    S_00075750_Mode *unk120;
    char pad124[0x194 - 0x124];
    int unk194;
    C_001D5AD0 *unk198[2];
    C_001D5AD0 *unk1A0[2];
    char pad1A8[0x1B4 - 0x1A8];
    int unk1B4;
    int unk1B8;
    int func_00075750(void);
};

void C_00074EB0::func_00074EB0() {
int ids[3]; int i; int *r; Clamp_74 *o; W_74EB0 **e; Lookup_74 *lk;
ids[0]=(int)&D_002786A0; ids[1]=(int)&D_00278690; ids[2]=(int)&D_00278678;
for(i=0;i<3;i++) { lk=D_002A8490->p2EC; r=lk->func_0018C160(ids[i]); if(r && *r) { o=((Mid_74 *)*r)->func_0018C070(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } }
e=unkAC; i=2; do { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; e++; i--; }while(i);
e=unk198; i=2; do { if(e[2]) { o=e[2]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if(*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; }while(i);
if(unkAC[18]) { o=unkAC[18]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
e=&unkAC[7]; i=5; do { if(e[-5]) { o=e[-5]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if(*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; }while(i);
e=&unkAC[12]; i=6; do { if(*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; }while(i);
func_001578D0();
}

void C_00075170::func_00075170()
{
    char buf[64];
    char num[8];
    int i;
    int t;
    int mins;
    int secs;

    if (unk1B4 != 0) {
        Text_75170 **p;
        unk100->func_0005E840(D_002A8490->p2E8->p4->fEC0);
        p = &unk94[0];
        i = 3;
        do {
            (*p)->func_001B1980();
            p++;
            i--;
        } while (i != 0);
        unk118->func_001D6600();
        unk100->func_001D6600();
        return;
    }
    unk100->func_0005E840(D_002A8490->p2E8->p4->fFD8);
    unk104->func_001D6600();
    unk108->func_001D6600();
    unk10C->func_001D6600();
    unk110->func_001D6600();
    t = (int)D_002A8490->p2A4->f2C4;
    mins = t / 60;
    secs = t - mins * 60;
    unk18C = mins;
    unk190 = secs;
    func_001ADCC0(buf, 0x104, D_00278DE4, mins, secs);
    unk114->func_0005E840(buf);
    unk114->func_001D6600();
    if (unk1AC != 0) {
        for (i = 0; i < 2; i++) {
            unk94[i]->func_001B1980();
            if (i == unk11C) {
                unk94[i]->func_001B2270(0xffbfa35a);
                unk94[i]->func_001B19C0(320, (int)(fA0[i] - D_00276DD4), 0);
                unk94[i]->func_001B1860(0, -1, 255, 1, 0, 0, 0, 255, 1.3f, 0, 0, 0.2f, 0);
            } else if (i == unk1A8) {
                unk94[i]->func_001B2270(0xffcccccc);
                unk94[i]->func_001B19C0(320, (int)fA0[i], 0);
                unk94[i]->func_001B1860(0, -1, 255, 1.3f, 0, 0, 0, 255, 1, 0, 0, 0.2f, 0);
            } else {
                unk94[i]->func_001B2270(0xffcccccc);
                unk94[i]->func_001B19C0(320, (int)fA0[i], 0);
                unk94[i]->func_001B1860(0, -1, 255, 1, 0, 0, -1, 255, 1, 0, 0, 0, 0);
            }
        }
        unk1AC = 0;
    }
    if (unk120->f90 == 1) {
        for (i = 0; i < 2; i++) {
            if (i == 1) {
                func_001AC330(buf, D_00278DD8);
                unk64[1]->func_0005E840(buf);
                unk12C[1] = D_002B9120->f4E4[0]->f6CC;
                unk14C[1] = D_002B9120->f4E4[0]->f6D0;
                if (D_002B9120->f528->f774 == 0) {
                    unk16C[1] = 0;
                } else {
                    float pct = (float)D_002B9120->f4E4[0]->f6D8 * D_00275994;
                    float total = (float)D_002B9120->f528->f774;
                    unk16C[1] = (int)(pct / total);
                }
            } else {
                func_001ADCC0(num, 0x104, D_00277038, i + 1);
                func_001AC330(buf, D_002A8490->p2E8->p4->f850, num);
                unk64[i]->func_0005E840(buf);
                unk12C[i] = D_002B9120->f528->f76C;
                unk14C[i] = D_002B9120->f528->f770;
                if (D_002B9120->f4E4[i]->f6D4 == 0) {
                    unk16C[i] = 0;
                } else {
                    float pct = (float)D_002B9120->f528->f778 * D_00275994;
                    float total = (float)D_002B9120->f4E4[i]->f6D4;
                    unk16C[i] = (int)(pct / total);
                }
            }
            SETUP_LABEL(unk64[i]);
            unk64[i]->func_001D6600();
            func_001ADCC0(buf, 0x104, D_00277038, unk12C[i]);
            {
                Lbl_75170 *w = unk70[i];
                w->func_0005E840(buf);
            }
            SETUP_LABEL(unk70[i]);
            unk70[i]->func_001D6600();
            func_001ADCC0(buf, 0x104, D_00277038, unk14C[i]);
            {
                Lbl_75170 *w = unk7C[i];
                w->func_0005E840(buf);
            }
            SETUP_LABEL(unk7C[i]);
            unk7C[i]->func_001D6600();
            func_001ADCC0(buf, 0x104, D_00278DD0, unk16C[i]);
            {
                Lbl_75170 *w = unk88[i];
                w->func_0005E840(buf);
            }
            SETUP_LABEL(unk88[i]);
            unk88[i]->func_001D6600();
        }
    }
    unk100->func_001D6600();
}

int C_00075750::func_00075750(void)
{
    int i;
    C_001D5AD0 **ptr;
    C_001D5AD0 *p;

    unkAC[0]->func_001D5AD0();
    unkAC[1]->func_001D5AD0();
    if (unk1B4 != 0) {
        p = unk194 ? unk198[0] : unk1A0[0];
        p->func_001D5AD0();
        p = unk1B8 ? unk198[1] : unk1A0[1];
    } else {
        if (unk120->f90 > 1) {
            if (unk11C == 0) {
                unkDC[2]->func_001D5AD0();
                unkDC[3]->func_001D5AD0();
            } else {
                unkDC[4]->func_001D5AD0();
                unkDC[5]->func_001D5AD0();
            }
        } else {
            for (i = 0; i < 6; i++) {
                if (i == unk11C * 2 || i == unk11C * 2 + 1) {
                    unkDC[i]->func_001D5AD0();
                }
            }
        }
        p = unk194 ? unk198[0] : unk1A0[0];
    }
    p->func_001D5AD0();
    ptr = &unkC8[0];
    i = 5;
    do {
        (*(ptr - 5))->func_001D5AD0();
        (*ptr)->func_001D5AD0();
        ptr++;
        i--;
    } while (i != 0);
    if (unkF4 != 0) {
        unkF4->func_001D5AD0();
    }
    return 1;
}

void C_00075880::func_00075880() {
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    unk194 = 0;
    unk1C0 = 0;
    unk120->v34();
    unk120->func_00032A40();
    v4();
    unk120->unk1F4 = 0;
}

void C_00075880::func_000758F0() {
    unk11C = 0;
    unk1C0 = 1;
    v6();
    unk120->v35();
    v18(0);
    unk120->v35();
    unk120->unk21 &= 0xfb;
    unk120->unk1F4 = 1;
    unk1AC = 1;
    unk1B0 = 1;
    unk1B8 = 0;
    unk194 = 0;
    unk1B4 = 0;
    unk1A8 = -1;
}

int C_00075880::func_00075980(int *a, int b) {
 int func_001361E0(int,int,int *,int);
 if(unk194) return 0;
 if(func_001361E0(2,2,a,0x80000000)) {
 unk120->func_00031610(2,1);
 unk1A8=unk11C;
 unk1AC=1;
 --unk11C;
 if(unk11C<0) unk11C=1;
 } else if(func_001361E0(3,2,a,0x80000000)) {
 unk120->func_00031610(2,1);
 unk1A8=unk11C;
 unk1AC=1;
 ++unk11C;
 if(unk11C>1) unk11C=0;
 } else {
 if(func_001361E0(4,2,a,0x80000000) || func_001361E0(23,2,a,0x80000000)) {
 unk120->func_00031610(4,1); unk194=1; unk124=0; return 0;
 }
 if((func_001361E0(5,2,a,0x80000000) || func_001361E0(24,2,a,0x80000000)) && unk1B4) {
 unk120->func_00031610(4,1); unk1B8=1; unk124=0; return 0;
 }
 }
 return func_00157BF0(a,b);
}

void *C_00075B20::func_00075B20(int param_1) {
    u32 *p;
    int n;
    int i;

    func_00157600(param_1);
    vtbl = &D_0027850C;
    p = unk44;
    n = 8;
    do {
        p[-8] = 0;
        p[0] = 0;
        p++;
    } while (--n != 0);
    vtbl = &D_00278DF4;
    unk1C0 = 0;
    unk11C = 0;
    unk18 = -1;
    unkFC = 0;
    unkF8 = 0;
    p = unk70;
    n = 2;
    do {
        p[-3] = 0;
        p[0] = 0;
        p[3] = 0;
        p[6] = 0;
        p++;
    } while (--n != 0);
    for (i = 0; i < 3; i++) {
        unk94[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        unkAC[i] = 0;
    }
    unk120 = 0;
    p = unk1A0;
    n = 2;
    do {
        p[-2] = 0;
        p[0] = 0;
        p++;
    } while (--n != 0);
    unk194 = 0;
    unk124 = 0;
    p = unk14C;
    n = 8;
    do {
        p[-8] = 0;
        p[0] = 0;
        p[8] = 0;
        p++;
    } while (--n != 0);
    unk1AC = 1;
    unk1A8 = -1;
    p = unkC8;
    n = 5;
    do {
        p[-5] = 0;
        p[0] = 0;
        p++;
    } while (--n != 0);
    for (i = 0; i < 6; i++) {
        unkDC[i] = 0;
    }
    unk100 = 0;
    unk104 = 0;
    unk108 = 0;
    unk10C = 0;
    unk110 = 0;
    unk114 = 0;
    unk118 = 0;
    unk1B4 = 0;
    unk1B8 = 0;
    return this;
}
