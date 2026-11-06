/* 2 functions from 0x000689E0 to 0x00069340, found by Ghidra. */
#include "common.h"
struct Sprite_69 {
    char pad0[0x10];
    float f10, f14;
    Sprite_69 *func_001D5AA0();
};
struct Mid_69 { Sprite_69 *func_0018C070(); };
struct Lookup_69 { int *func_0018C160(int); };
struct Mgr_69 { char pad0[0x2EC]; Lookup_69 *f2EC; };
extern Mgr_69 *D_002A8490;
extern float D_00275AEC;
extern char D_002786A0[], D_00278690[], D_00278678[];

struct C_00069080 {
    char pad0[0x80];
    Sprite_69 *arr80[2];
    char pad88[0x30];
    Sprite_69 *arrB8[4];
    Sprite_69 *arrC8[4];
    Sprite_69 *arrD8[5];
    Sprite_69 *arrEC[5];
    Sprite_69 *arr100[14];
    Sprite_69 *unk138;
    void func_00069080();
    void func_001578D0();
};
#define CLAMP(p) { Sprite_69 *o = (p)->func_001D5AA0(); if (D_00275AEC > o->f10) o->f10 = 10.0f; if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f; }

struct Tex_689E0 {
    char pad0[0x7a0];
    void *s7A0;
    char pad1[0x7a8 - 0x7a4]; void *s7A8;
    char pad2[0x7c8 - 0x7ac]; void *s7C8;
    char pad3[0x828 - 0x7cc]; void *s828;
    char pad4[0x868 - 0x82c]; void *s868;
    char pad5[0x870 - 0x86c]; void *s870;
    char pad6[0x878 - 0x874]; void *s878;
    char pad7[0x890 - 0x87c]; void *s890;
    char pad8[0xad0 - 0x894]; void *sAD0;
    char pad9[0xe98 - 0xad4]; void *sE98;
    char padA[0xea0 - 0xe9c]; void *sEA0;
    char padB[0x1278 - 0xea4]; void *s1278;
};
struct E2E8_689E0 { char pad0[4]; Tex_689E0 *f4; };
struct G2_689E0 {
    char pad0[0x2e8];
    E2E8_689E0 *f2E8;
};
extern G2_689E0 *D_002A8490_2;
extern int D_0028F5E0;
extern char D_00275630[];

struct W_689E0 {
    void *func_001B12C0(int a);
    void func_001B1580(char *a, char *b, void *c, int d);
    void func_001B13A0(char *a, char *b, void *c, int d);
    void func_001B19C0(int a, int b, int c);
    void func_001B2270(int color);
    void func_001B1C10(int a);
    void func_001B1840(int a, int b, int c);
    void func_001B17D0(void *a);
};
struct S_689E0 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x44 - 0xc];
    int f44;
    int f48;
    char pad4C[2];
    unsigned char f4E;
    void *func_001D5E90(void);
    void func_001D5FA0(void *a, char *b, int c, void *d);
    void func_0005E840(void *a);
};
struct C_000689E0 {
    char pad0[0x64];
    S_689E0 *w64, *w68, *w6C, *w70, *w74, *w78, *w7C;
    int y88, y8C, y90, y94, y98, y9C, yA0;
    char padA4[4];
    S_689E0 *wA8;
    S_689E0 *wAC;
    char padB0[0x13c - 0xb0];
    S_689E0 *w13C;
    void func_000689E0(void);
    void func_001577A0(void *w, int b);
};
void *func_001E8A44_689E0(int size);

void C_00069080::func_00069080()
{
    int ids[3];
    int i;
    Sprite_69 **e;
    Lookup_69 *lk;
    ids[0] = (int)D_002786A0;
    ids[1] = (int)D_00278690;
    ids[2] = (int)D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->f2EC;
        int *r = lk->func_0018C160(ids[i]);
        if (r && *r) {
            Sprite_69 *o = ((Mid_69 *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) o->f10 = 10.0f;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f;
        }
    }
    e = &arr80[0];
    i = 2;
    do { CLAMP(*e); e++; i--; } while (i);
    e = arrC8;
    i = 4;
    do {
        if (e[-4]) CLAMP(e[-4]);
        if (*e) CLAMP(*e);
        e++; i--;
    } while (i);
    e = arrEC;
    i = 5;
    do {
        if (e[-5]) CLAMP(e[-5]);
        if (*e) CLAMP(*e);
        e++; i--;
    } while (i);
    e = arr100;
    i = 14;
    do { if (*e) CLAMP(*e); e++; i--; } while (i);
    if (unk138) CLAMP(unk138);
    func_001578D0();
}
