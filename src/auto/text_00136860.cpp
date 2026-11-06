/* 9 functions from 0x00136860 to 0x00137810, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern char D_00284914[], D_00284908[], D_002848F8[], D_002848EC[];
extern char D_00276974[], D_00276968[], D_002848DC[], D_002848D0[];
extern char D_002848BC[], D_002848B0[], D_002848A4[], D_00284894[];
extern char D_0028488C[], D_0028487C[], D_00275630[];
void func_00030F30(char *, const char *);
int func_001ADCC0(char *, int, const char *, ...);
extern const float D_00275460;
struct Config136BE0 {
 double data[0x4d0 / 8];
 void func_00168280();
 void func_001691E0();
 int func_00169490(char *, int);
 void func_00169710(const char *);
 void func_00168C20(const char *, int, int *);
 void func_00168C50(const char *, float, float *);
 void func_00168BE0(const char *, const char *, char *, int);
};
struct Locals136BE0 {
 char key[0x108], section[0x108];
 Config136BE0 cfg;
 char list[0x108], path[0x108], text[0x104];
};
struct Anim136BE0 {
 float start, end;
 int count;
 float fC, f10;
 int f14;
 float f18, f1C, f20;
 unsigned char flags : 1;
 unsigned char otherFlags : 7;
 char pad[3];
};
struct Group136BE0 { int id, count, entries[3]; };
struct C_00136BE0 {
 char pad[0x38];
 int count;
 Anim136BE0 *anims;
 Group136BE0 groups[6][16];
 void func_00136BE0(char *);
};
struct C_00136B40 {
    undefined4 func_00136B40(byte param_1);
};

extern int D_00284860;
extern char D_00284878[];

int func_001E91F4(int p);

struct C_0013B210 {
    int func_0013AFD0(int a);
    void func_0013AFF0(int a, int b, int c);
    void func_0013C8A0(int a, void *b, int c, int d);
};
extern C_0013B210 *D_002BEAAC;

int func_001B27B0(int format);
struct V136FE0 { float x, y, z; int color; float u, v; };
extern const float D_00278C48, D_00275994;
extern float D_002BE040[];
int func_001B2730(int format);
void *func_001E8A44(int size);

struct C_0001DFE0 {
    void *vtbl;
    int unk4;
    void func_0001DFE0(void);
    void func_0001DFF0(void);
};

struct XboxTextureMap {
    virtual void slot0(int flags);
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual int slot8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
    virtual int slot9(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
    virtual void slot10();
    virtual void slot11();
    virtual void slot12(int a1, int a2, int a3);
    XboxTextureMap *func_001D6AD0(void *param);
};

struct CubeGroup {
    int sizes;
    unsigned short mask;
    XboxTextureMap *ptrs[0x39];
    unsigned int vec[4];
};

struct Cube : C_0001DFE0 {
    float v08[4];
    float v18[4];
    float v28[4];
    int unk38;
    int unk3C;
    char unk40;
    char pad41[3];
    CubeGroup groups[6];
    unsigned int unk62C;
    void func_001364B0(void);
    int func_00136860(int i, int j, int a);
    void func_00136A70(void);
    int func_001369E0(int a);
    Cube *func_00136AD0(void);
};

struct TokenizerBuf {
    double align;
    void func_001B4A40(int a);
    char *func_001B4A70(const char *delims);
};

struct TokenEntry {
    char *name;
    int pad[4];
};


int Cube::func_00136860(int i, int j, int a)
{
    int res;
    int size;
    XboxTextureMap *tex;
    void *mem;

    switch (((groups[i].sizes >> ((j % 4) * 2)) >> ((j / 4) * 8)) & 3) {
    case 0:
        res = 0x200;
        break;
    case 1:
        res = 0x40;
        break;
    case 2:
        res = 0x80;
        break;
    case 3:
        res = 0x100;
        break;
    default:
        res = 0;
    }
    if (func_001B27B0(unk3C)) {
        D_002BEAAC->func_0013C8A0(unk38, &size, 4, 1);
    } else {
        size = func_001B2730(unk3C) * res * res / 8;
    }
    mem = func_001E8A44(0x110);
    if (mem != 0) {
        tex = ((XboxTextureMap *)mem)->func_001D6AD0((void *)1);
    } else {
        tex = 0;
    }
    groups[i].ptrs[j] = tex;
    if (tex != 0) {
        if (unk3C == 0x26) {
            tex->slot9(unk38, res, res, 1, 0x26, size, 0xc, 2, 0);
        } else {
            tex->slot9(unk38, res, res, 1, unk3C, size, 6, 2, 0);
        }
        groups[i].ptrs[j]->slot12(1, 0, 0);
    }
    if (unk40 & 2) {
        int h = unk38;
        int r = 0x800 - D_002BEAAC->func_0013AFD0(h) % 0x800;
        if (r != 0x800) {
            D_002BEAAC->func_0013AFF0(h, r, 1);
        }
    }
    return 1;
}

int Cube::func_001369E0(int a)
{
    D_002BEAAC->func_0013AFF0(unk38, unk62C, 0);
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 16; j++) {
            if ((groups[i].mask & (1 << j)) && groups[i].ptrs[j] == 0) {
                func_00136860(i, j, a);
            }
        }
    }
    return 1;
}

void Cube::func_00136A70(void)
{
    vtbl = &D_00284860;
    for (int i = 5; i >= 0; i--) {
        for (int j = 15; j >= 0; j--) {
            if (groups[i].ptrs[j] != 0) {
                groups[i].ptrs[j]->slot2();
                groups[i].ptrs[j] = 0;
            }
        }
    }
    func_0001DFF0();
}

Cube *Cube::func_00136AD0(void)
{
    unsigned int *p;
    int i;
    func_0001DFE0();
    vtbl = &D_00284860;
    p = (unsigned int *)v08;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (unsigned int *)v18;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (unsigned int *)v28;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    for (i = 0; i < 6; i++) {
        groups[i].vec[0] = groups[i].vec[1] = groups[i].vec[2] = 0;
        groups[i].vec[3] = 0x3f800000;
    }
    func_001364B0();
    return this;
}

undefined4 C_00136B40::func_00136B40(byte param_1)
{
  int func_00136A70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00136A70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void func_00136B60(int a, TokenEntry *out)
{
    TokenizerBuf tok;
    int i = 0;
    tok.func_001B4A40(a);
    for (int n = 0; n < 16; n++) {
        char *s;
        for (s = tok.func_001B4A70(D_00284878); s != 0; i++) {
            out[i].name = (char *)func_001E91F4((int)s);
            s = tok.func_001B4A70(D_00284878);
        }
    }
}


