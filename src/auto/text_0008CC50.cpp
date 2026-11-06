/* 5 functions from 0x0008CC50 to 0x0008DB70, found by Ghidra. */
#include "common.h"

struct W_8D910 { virtual ~W_8D910(); };
struct D_8D910 { void func_001D6410(); };
void func_001E891B(void *p);
extern int D_0027915C;

struct C_0008D910 {
    void *vtbl;
    char pad4[0x20];
    D_8D910 *unk24[4];
    char pad34[0x130];
    W_8D910 *unk164;
    W_8D910 *unk168;
    D_8D910 *unk16C;
    W_8D910 *unk170;
    W_8D910 *unk174;
    D_8D910 *unk178;
    char pad17C[0xc];
    W_8D910 *unk188;
    D_8D910 *unk18C;
    W_8D910 *unk190;
    W_8D910 *unk194;
    char pad198[0x70];
    D_8D910 *unk208;
    char pad20C[0xa44];
    D_8D910 *unkC50;
    char pad_c54[0xbc];
    W_8D910 *unkD10;
    W_8D910 *unkD14;
    char padD18[0x24];
    W_8D910 *unkD3C;
    W_8D910 *unkD40;
    W_8D910 *unkD44;
    W_8D910 *unkD48;
    char padD4C[0x30];
    D_8D910 *unkD7C;
    D_8D910 *unkD80;
    W_8D910 *unkD84;
    W_8D910 *unkD88;
    void func_00157660();
    void func_0008D910();
};

struct S_5E { void func_0005E840(char *s); void func_001D6600(); void func_001D5AD0(); };
struct S_64 { char pad[0x574]; int u574; int u578; char pad2[8]; int u584; };
struct S_68 { char pad[0x4d4]; int u4d4; };
extern char D_00277038[];
int func_001ADCC0(char *buf, int n, char *fmt, int v);
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
struct S_0008D290 {
    char pad0[0x28];
    S_5E *u28; S_5E *u2c; char pad30[4]; S_5E *u34;
    char pad38[0x10];
    S_5E *u48; S_5E *u4c; char pad50[0x14];
    S_64 *u64; S_68 *u68; char pad6c[4];
    int u70; int u74; int u78;
    void func_0008D290();
};

struct C_001B1980 {
    void func_001B1980(void);
};

void *func_001E8A44(unsigned int);
struct Elem_8CC50 { Elem_8CC50 *func_001D5760(); };
struct C_0008CC50 {
    char pad0[0x7c];
    int u7c;
    void func_0008CC50();
};

struct C_0008D550 {
    char pad0[0x54];
    C_001B1980 *unk54;
    int unk58;
    int unk5C;
    int unk60;
    char pad64[0xc];
    int unk70;
    int unk74;
    int unk78;
    void func_0008D550(void);
};

struct S_0008D590_Vals {
    char pad0[0x10];
    float f10;
    float f14;
};

struct S_0008D590_Obj {
    S_0008D590_Vals *func_0018C070();
};

struct S_0008D590_Reg {
    S_0008D590_Obj **func_0018C160(char *name);
};

struct S_0008D590_G {
    char pad0[0x2ec];
    S_0008D590_Reg *f2ec;
};

extern S_0008D590_G *D_002A8490;
extern char D_00278690[];
extern char D_0027958C[];
extern float D_00275AEC;

struct C_0008D590 {
    void func_0008D590();
    void func_001578D0();
};

void S_0008D290::func_0008D290()
{
    char a[15] = {0};
    char out[15] = {0};
    int i, j, k, r;
    u48->func_001D5AD0();
    u4c->func_001D5AD0();
    u70 = u64->u584;
    func_001ADCC0(a, 15, D_00277038, u70);
    r = strlen(a) % 3;
    k = 0; j = -r;
    for (i = 0; i < (int)strlen(a); i++) {
        if (i > r - 1 && i != 0 && (j == 0 || j % 3 == 0)) { out[k++] = ',';  out[k++] = a[i]; }
        else out[k++] = a[i];
        j++;
    }
    u28->func_0005E840(out);
    u28->func_001D6600();
    u74 = u64->u574 + u64->u578 * 10;
    func_001ADCC0(a, 15, D_00277038, u74);
    r = strlen(a) % 3;
    k = 0; j = -r;
    for (i = 0; i < (int)strlen(a); i++) {
        if (i > r - 1 && i != 0 && (j == 0 || j % 3 == 0)) { out[k++] = ',';  out[k++] = a[i]; }
        else out[k++] = a[i];
        j++;
    }
    out[k] = 0;
    u2c->func_0005E840(out);
    u2c->func_001D6600();
    if (u68) {
        for (i = 0; i < 15; i++) out[i] = 0;
        u78 = u68->u4d4;
        func_001ADCC0(a, 15, D_00277038, u78);
        r = strlen(a) % 3;
        k = 0; j = -r;
        for (i = 0; i < (int)strlen(a); i++) {
            if (i > r - 1 && i != 0 && (j == 0 || j % 3 == 0)) { out[k++] = ',';  out[k++] = a[i]; }
            else out[k++] = a[i];
            j++;
        }
        u34->func_0005E840(out);
        u34->func_001D6600();
    }
}

void C_0008D550::func_0008D550(void)
{
    unk70 = 1000;
    unk74 = 10;
    unk78 = 1000;
    unk58 = 0;
    unk54->func_001B1980();
    unk5C = 1;
    unk60 = 0;
}

void C_0008D590::func_0008D590()
{
    S_0008D590_Obj **pa;
    S_0008D590_Obj **pb;
    S_0008D590_Obj *a;
    S_0008D590_Obj *b;
    S_0008D590_Vals *v;

    pa = D_002A8490->f2ec->func_0018C160(D_00278690);
    a = pa ? *pa : 0;
    pb = D_002A8490->f2ec->func_0018C160(D_0027958C);
    b = pb ? *pb : 0;
    if (a != 0) {
        v = a->func_0018C070();
        if (D_00275AEC > v->f10) {
            v->f10 = 10.0f;
        }
        if (D_00275AEC < v->f14 || v->f14 > v->f10) {
            v->f14 = 10.0f;
        }
    }
    if (b != 0) {
        v = b->func_0018C070();
        if (D_00275AEC > v->f10) {
            v->f10 = 10.0f;
        }
        if (D_00275AEC < v->f14 || v->f14 > v->f10) {
            v->f14 = 10.0f;
        }
    }
    func_001578D0();
}

void C_0008D910::func_0008D910()
{
    int i;
    D_8D910 *p;
    vtbl = (void *)&D_0027915C;
    for (i = 0; i < 4; i++) {
        p = unk24[i];
        if (p) { p->func_001D6410(); func_001E891B(p); unk24[i] = 0; }
    }
    if (unk164) { delete unk164; unk164 = 0; }
    if (unk168) { delete unk168; unk168 = 0; }
    if (unk170) { delete unk170; unk170 = 0; }
    if (unk174) { delete unk174; unk174 = 0; }
    p = unk16C;
    if (p) { p->func_001D6410(); func_001E891B(p); unk16C = 0; }
    p = unk178;
    if (p) { p->func_001D6410(); func_001E891B(p); unk178 = 0; }
    if (unk188) { delete unk188; unk188 = 0; }
    p = unk18C;
    if (p) { p->func_001D6410(); func_001E891B(p); unk18C = 0; }
    p = unk208;
    if (p) { p->func_001D6410(); func_001E891B(p); unk208 = 0; }
    p = unkC50;
    if (p) { p->func_001D6410(); func_001E891B(p); unkC50 = 0; }
    if (unkD10) { delete unkD10; unkD10 = 0; }
    if (unkD14) { delete unkD14; unkD14 = 0; }
    if (unk194) { delete unk194; unk194 = 0; }
    if (unkD3C) { delete unkD3C; unkD3C = 0; }
    if (unkD40) { delete unkD40; unkD40 = 0; }
    if (unkD44) { delete unkD44; unkD44 = 0; }
    if (unkD48) { delete unkD48; unkD48 = 0; }
    p = unkD7C;
    if (p) { p->func_001D6410(); func_001E891B(p); }
    p = unkD80;
    if (p) { p->func_001D6410(); func_001E891B(p); }
    if (unkD84) { delete unkD84; unkD84 = 0; }
    if (unkD88) { delete unkD88; unkD88 = 0; }
    func_00157660();
}

