/* 9 functions from 0x0005A8F0 to 0x0005B8D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" char *strcpy(char *, const char *);
struct R_Reader {
    int func_00168280(void);
    int func_00169490(char *name, int mode);
    void func_00169710(char *s);
    void func_00168A10(char *fmt, int *out);
    void func_001691E0(void);
};
extern "C" char *strcat(char *, const char *);
extern char D_002A5348[];
struct S_Str15 { char c[15]; };
extern S_Str15 D_00278250;
extern char D_00278244[], D_0027823C[], D_00278234[], D_00278228[], D_0027821C[], D_00278210[], D_00278204[], D_002781FC[], D_002781F4[];
extern void *func_001E8A44(int);
extern void func_001E891B(void *);
struct C_0005B240 {
    char pad0[0x2DC];
    int v[8];
    void func_0005B240(void);
};
struct C_0005B3F0 {
    char pad0[0x48];
    int f48;
    char name[9];
    char pad55[0x99 - 0x55];
    int f99;
    char pad9D[0x9F - 0x9D];
    short f9D;
    char f9F;
    char padA0[0xE6 - 0xA0];
    int fE6;
    void func_0005B3F0(void);
};

struct C_0005B220 {
    void func_0005B220(void);
};

struct C_0005B870 {
    char pad0[0xCD0];
    int unkCD0;
    int func_0005B870(void);
};

struct S_2E0 {
    char pad0[0xC];
    int fC;
    char pad10[8];
    int f18;
    int f1C;
    char pad20[0x2DC];
    int f2FC;
    char pad300[0x8C];
    int f38C;
    char pad390[0xD0];
    int f460;
    int f464;
};

struct S_2A8490 {
    char pad0[0x2E0];
    S_2E0 *f2E0;
};

extern S_2A8490 *D_002A8490;

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
extern "C" int strcmp(const char *a, const char *b);
char *func_001E8920(char *dst, const char *src, int n);
int func_001EA426(const char *a, const char *b);
int func_001ADCC0(char *buf, int size, char *fmt, char *arg);
extern char D_002A48F8[];
extern char D_00276F28[];
extern char D_002A47F0[];

struct S_VObj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual int v7(char *s);
    int func_001CB170(char *s, int *out);
};
struct S_MgrB { char pad0[0xB4]; S_VObj *fB4; };
struct S_GGame { char pad0[4]; S_MgrB *f4; };
struct S_F07B8 { int func_001D7FB0(float a, float b, float c, int d); };
extern S_F07B8 *D_002F07B8;
struct S_ObjAA { int func_00147890(char *s); };
extern S_ObjAA *D_002AA46C;
extern S_ObjAA *D_002AA470;
struct S_EFDB8 { char pad0[0x30]; int f30; };
extern S_EFDB8 *D_002EFDB8;
struct S_Obj14 { int func_001577A0(void *a, int b); };

struct S_LevelInfo {
    int f0; int f4; int f8; int fC;
    char pad10[0x38];
    int f48;
    char f4C[0x300 - 0x50];
    int arr300[8];
    char pad320[4];
    int f324;
};
struct S_Obj2EC {
    S_Obj2EC *func_001D5350();
    S_Obj2EC *func_001D3F50();
};
struct S_Obj2F0 {
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
    virtual int v10();
    char pad4[0xB8 - 4];
    int fB8;
    S_Obj2F0 *func_001A58D0(int a);
    int func_0001EDC0(int a);
};
struct S_ModeObj {
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
    virtual int v10();
    S_ModeObj *func_0004BAB0(int a);
    S_ModeObj *func_000511A0(int a);
    S_ModeObj *func_000536A0(int a);
    S_ModeObj *func_0004C610(int a);
    S_ModeObj *func_0004D930(int a);
    S_ModeObj *func_00053D20(int a);
    S_ModeObj *func_0004ECC0(int a);
    S_ModeObj *func_00050A10(int a);
    S_ModeObj *func_0004F220(int a);
    S_ModeObj *func_00049C00(int a);
    S_ModeObj *func_000378D0(int a);
};
struct S_LevelObj {
    char pad0[0x2F0];
    S_Obj2F0 *f2F0;
};
struct BmxGame {
    char pad0[0x14];
    S_Obj14 *f14;
    char pad18[0x2A4 - 0x18];
    int f2A4;
    char pad2A8[0x2B8 - 0x2A8];
    char name1[15];
    char name2[17];
    int f2D8;
    char pad2DC[4];
    S_LevelInfo *f2E0;
    int f2E4;
    char pad2E8[4];
    S_Obj2EC *f2EC;
    S_Obj2F0 *f2F0;
    int func_0005A8F0();
    int func_0005A480(int a);
    S_LevelObj *func_0005D6A0();
};

struct C_000952A0 {
    int func_000952A0(int i);
};

struct C_00095250 {
    int func_00095250(int i);
};

struct C_0005B850 {
    char pad0[0xCD0];
    char unkCD0[1];
    void func_0005B850(char *src);
};

struct C_0005B730 {
    char pad0[0x258];
    int f258, f25C, f260, f264, f268, f26C;
    void func_0005B730(void);
    void func_0005B7C0(void);
};

struct S_Pair {
    int a;
    int b;
};

struct C_0005B880 {
    char pad0[0xCF0];
    S_Pair pairs[0x12];
    void func_0005B880(void);
};


int func_0005A8F0(void) { return 0; }

void C_0005B220::func_0005B220(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(in_ECX + 0x300);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  return;
}

extern "C" void *memcpy(void *, const void *, unsigned int);
void C_0005B240::func_0005B240(void)
{
    char buf[0x104];
    R_Reader *r;
    void *p;
    char *e;
    strcpy(buf, D_002A5348);
    e = buf - 1;
    do { } while (*++e);
    *(S_Str15 *)e = D_00278250;
    p = func_001E8A44(0x4cc);
    if (p) r = (R_Reader *)((R_Reader *)p)->func_00168280();
    else r = 0;
    if (r->func_00169490(buf, 0)) {
        r->func_00169710(D_00278244); r->func_00168A10(D_0027823C, &v[0]);
        r->func_00169710(D_00278234); r->func_00168A10(D_0027823C, &v[1]);
        r->func_00169710(D_00278228); r->func_00168A10(D_0027823C, &v[2]);
        r->func_00169710(D_0027821C); r->func_00168A10(D_0027823C, &v[3]);
        r->func_00169710(D_00278210); r->func_00168A10(D_0027823C, &v[4]);
        r->func_00169710(D_00278204); r->func_00168A10(D_0027823C, &v[5]);
        r->func_00169710(D_002781FC); r->func_00168A10(D_0027823C, &v[6]);
        r->func_00169710(D_002781F4); r->func_00168A10(D_0027823C, &v[7]);
        if (r) { r->func_001691E0(); func_001E891B(r); }
    }
}

void C_0005B3F0::func_0005B3F0(void)
{
    switch (f48) {
    case 0:
        strcpy(name, "oklahoma");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 7:
        strcpy(name, "hawaii");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 6:
        strcpy(name, "boston");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 3:
        strcpy(name, "lasvegas");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 2:
        strcpy(name, "langeles");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 5:
        strcpy(name, "portland");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 1:
        strcpy(name, "chicago");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 4:
        strcpy(name, "norleans");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 11:
        strcpy(name, "editor");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 8:
        strcpy(name, "daytona");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 9:
        strcpy(name, "sf");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 10:
        strcpy(name, "austin");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 12:
        strcpy(name, "halfpipe");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    case 13:
        strcpy(name, "london");
        strcpy((char *)D_002A8490 + 0x2B8, name);
        break;
    }
}

void C_0005B730::func_0005B730(void)
{
    f258 = D_002A8490->f2E0->f18;
    f25C = D_002A8490->f2E0->f1C;
    f260 = D_002A8490->f2E0->fC;
    f264 = D_002A8490->f2E0->f38C;
    f268 = D_002A8490->f2E0->f460;
    f26C = D_002A8490->f2E0->f464;
}

void C_0005B730::func_0005B7C0(void)
{
    D_002A8490->f2E0->f18 = f258;
    D_002A8490->f2E0->f1C = f25C;
    D_002A8490->f2E0->fC = f260;
    D_002A8490->f2E0->f38C = f264;
    D_002A8490->f2E0->f460 = f268;
    D_002A8490->f2E0->f464 = f26C;
}

void C_0005B850::func_0005B850(char *src)
{
    strcpy(unkCD0, src);
}

int C_0005B870::func_0005B870(void) {
    return (int)&unkCD0;
}

void C_0005B880::func_0005B880(void)
{
    int i;

    for (i = 0; i < 0x12; i++) {
        pairs[i].a = ((C_000952A0 *)D_002A8490->f2E0->f2FC)->func_000952A0(i);
        pairs[i].b = ((C_00095250 *)D_002A8490->f2E0->f2FC)->func_00095250(i);
    }
}

