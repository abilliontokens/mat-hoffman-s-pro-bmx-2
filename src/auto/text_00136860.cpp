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
struct Vec3_00136FE0 {
    float x, y, z;
};
/* sky cube grid vertex: position, colour, texture coordinates */
struct Vtx_00136FE0 {
    Vec3_00136FE0 pos;
    int color;
    float u, v;
};
extern float D_002BE9A0[][4];
extern Vtx_00136FE0 D_002BA728[];
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

int func_001B2810(int id);
int func_00136460(int id, int i, int j);
extern float D_002BA73C[];
extern float D_002BDD3C[];
struct C_001376B0 {
    char pad0[0x28];
    Cube *f28;
    char pad2C[0x7C0 - 0x2C];
    int f7C0;
    int func_001376B0(Cube *arg);
};

struct TokenizerBuf {
    double align;
    void Tokenizer_SetString(int a);
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
    unsigned int *q;
    int n = 6;
    func_0001DFE0();
    vtbl = &D_00284860;
    p = (unsigned int *)v08;
    p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = (unsigned int *)v18;
    p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = (unsigned int *)v28;
    p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    q = (unsigned int *)((char *)this + 0x134);
    do {
        q[1] = 0; q[0] = 0; q[-1] = 0; q[2] = 0x3f800000;
        q += 0x3f;
    } while (--n);
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
    tok.Tokenizer_SetString(a);
    for (int n = 0; n < 16; n++) {
        char *s;
        for (s = tok.func_001B4A70(D_00284878); s != 0; i++) {
            out[i].name = (char *)func_001E91F4((int)s);
            s = tok.func_001B4A70(D_00284878);
        }
    }
}

extern "C" char *strcpy(char *, const char *);
extern "C" int strncmp(const char *, const char *, unsigned int);
extern "C" int strcmp(const char *, const char *);
#pragma intrinsic(strcpy, strcmp)
void C_00136BE0::func_00136BE0(char *name)
{
 TokenizerBuf tok;
 Locals136BE0 local;
 strcpy(local.path,name);
 func_00030F30(local.path,D_00284914);
 local.cfg.func_00168280();
 int i=0;
 if(!local.cfg.func_00169490(local.path,i)) {
 local.cfg.func_001691E0();
 return;
 }
 local.cfg.func_00169710(D_00284908);
 local.cfg.func_00168C20(D_002848F8,i,&count);
 if(i<count) {
 anims=(Anim136BE0*)func_001E8A44(count*40);
 for(;i<count;i++) {
 float value;
 Anim136BE0 *a=&anims[i];
 func_001ADCC0(local.section,0x104,D_002848EC,i+1);
 local.cfg.func_00169710(local.section);
 local.cfg.func_00168C50(D_00276974,0,&a->start);
 a->start-=D_00275460;
 local.cfg.func_00168C50(D_00276968,0,&a->end);
 a->end-=D_00275460;
 a->count=(int)(a->end-a->start);
 local.cfg.func_00168C50(D_002848DC,0,&a->fC);
 local.cfg.func_00168C50(D_002848D0,0,&a->f10);
 local.cfg.func_00168C20(D_002848BC,100,&a->f14);
 local.cfg.func_00168C50(D_002848B0,0,&value);
 a->f18=value; a->f1C=1; a->f20=0; a->flags = 0;
 }
 local.cfg.func_00169710(D_002848A4);
 Group136BE0 (*base)[16]=groups;
 for(int j=0;j<6;j++){
 func_001ADCC0(local.key,0x104,D_00284894,j+1);
 local.cfg.func_00168BE0(local.key,D_00275630,local.list,-1);
 func_00136B60((int)local.list,(TokenEntry*)base[j]);
 }
 for(int k=0;k<6;k++){
 func_001ADCC0(local.key,0x104,D_00284894,k+1);
 local.cfg.func_00168BE0(local.key,D_00275630,local.list,-1);
 func_00136B60((int)local.list,(TokenEntry*)base[k]);
 }
 Group136BE0 *g=&base[0][0];
 for(int x=0;x<6;x++) for(int y=0;y<16;y++,g++){
 if(g->id){
 func_001ADCC0(local.section,0x104,D_0028488C,g->id);
 local.cfg.func_00169710(local.section);
 local.cfg.func_00168BE0(D_0028487C,D_00275630,local.text,-1);
 g->count=0;
 if(strcmp(local.text,"")!=0){
 tok.Tokenizer_SetString((int)local.text);
 char *p=tok.func_001B4A70(D_00284878);
 while(p){
 int frame;
 g->entries[g->count]=func_001E91F4((int)p)-1;
 Anim136BE0 *a=&anims[g->entries[g->count]];
 for(frame=(int)a->start;frame<a->end;frame++) {}
 p=tok.func_001B4A70(D_00284878);
 g->count++;
 }
 }
 }
 }
 }
 local.cfg.func_001691E0();
}
extern Vtx_00136FE0 D_002BA728[], D_002BA740[], D_002BA758[], D_002BA770[], D_002BA788[], D_002BA7A0[];
int func_00136FE0(void)
{
    Vtx_00136FE0 v[25];
    int face;
    int i;
    int j;
    int k;
    int n;
    int idx;
    int row;

    for (face = 0; face < 6; face++) {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                int a = 256 - j * 128;
                int au = j * 128 - 256;
                int b = 256 - i * 128;
                int bu = i * 128 - 256;
                switch (face) {
                case 0:
                    v[i * 5 + j].pos.y = b * D_00275994;
                    v[i * 5 + j].pos.z = 25600.0f;
                    D_002BE9A0[0][1] = 0;
                    D_002BE9A0[0][0] = 0;
                    D_002BE9A0[0][2] = -1.0f;
                    v[i * 5 + j].pos.x = au * D_00275994;
                    break;
                case 1:
                    v[i * 5 + j].pos.x = -25600.0f;
                    D_002BE9A0[1][1] = 0;
                    D_002BE9A0[1][2] = 0;
                    D_002BE9A0[1][0] = 1.0f;
                    v[i * 5 + j].pos.y = b * D_00275994;
                    v[i * 5 + j].pos.z = au * D_00275994;
                    break;
                case 2:
                    v[i * 5 + j].pos.z = -25600.0f;
                    D_002BE9A0[2][1] = 0;
                    D_002BE9A0[2][0] = 0;
                    D_002BE9A0[2][2] = 1.0f;
                    v[i * 5 + j].pos.x = a * D_00275994;
                    v[i * 5 + j].pos.y = b * D_00275994;
                    break;
                case 3:
                    v[i * 5 + j].pos.x = 25600.0f;
                    D_002BE9A0[3][1] = 0;
                    D_002BE9A0[3][2] = 0;
                    D_002BE9A0[3][0] = -1.0f;
                    v[i * 5 + j].pos.y = b * D_00275994;
                    v[i * 5 + j].pos.z = a * D_00275994;
                    break;
                case 4:
                    v[i * 5 + j].pos.y = 25600.0f;
                    D_002BE9A0[4][2] = 0;
                    D_002BE9A0[4][0] = 0;
                    D_002BE9A0[4][1] = -1.0f;
                    v[i * 5 + j].pos.x = au * D_00275994;
                    v[i * 5 + j].pos.z = bu * D_00275994;
                    break;
                case 5:
                    v[i * 5 + j].pos.y = -25600.0f;
                    D_002BE9A0[5][2] = 0;
                    D_002BE9A0[5][0] = 0;
                    D_002BE9A0[5][1] = 1.0f;
                    v[i * 5 + j].pos.x = au * D_00275994;
                    v[i * 5 + j].pos.z = b * D_00275994;
                    break;
                }
                v[i * 5 + j].color = -1;
                v[i * 5 + j].u = j * D_00278C48;
                v[i * 5 + j].v = i * D_00278C48;
            }
        }
        n = 0;
        idx = 0;
        for (row = 0; row < 4; row++) {
            for (k = 0; k < 4; k++) {
                D_002BA728[face * 96 + n].pos = v[idx].pos;
                D_002BA740[face * 96 + n].pos = v[idx + 1].pos;
                D_002BA758[face * 96 + n].pos = v[idx + 6].pos;
                D_002BA770[face * 96 + n].pos = v[idx + 5].pos;
                D_002BA788[face * 96 + n].pos = v[idx].pos;
                D_002BA7A0[face * 96 + n].pos = v[idx + 6].pos;
                D_002BA728[face * 96 + n].color = -1;
                D_002BA740[face * 96 + n].color = -1;
                D_002BA758[face * 96 + n].color = -1;
                D_002BA770[face * 96 + n].color = -1;
                D_002BA788[face * 96 + n].color = -1;
                D_002BA7A0[face * 96 + n].color = -1;
                n += 6;
                idx++;
            }
            idx++;
        }
        for (k = 0; k < 25; k++)
            *(Vec3_00136FE0 *)&D_002BE040[face * 100 + k * 4] = v[k].pos;
    }
    return 1;
}

int C_001376B0::func_001376B0(Cube *arg)
{
 float *p;
 int i,j,k;
 f28=arg;
 arg->func_001369E0(f7C0);
 if(func_001B2810(f28->unk3C)) {
 p=D_002BA73C;
 do {
 for(k=0;k<4;k++) {
 float *q=p; p+=0x240/4;
 for(j=0;j<4;j++) {
 q[-1]=0.03125f; q[0]=0.03125f;
 q[5]=0.96875f; q[6]=0.03125f;
 q[11]=0.96875f; q[12]=0.96875f;
 q[17]=0.03125f; q[18]=0.96875f;
 q[23]=0.03125f; q[24]=0.03125f;
 q[29]=0.96875f; q[30]=0.96875f;
 q+=0x90/4;
 }
 }
 }while((int)p<(int)D_002BDD3C);
 return 1;
 }
 int g=0; p=D_002BA73C;
 do {
 i=0;
 do {
 float *q=p; p+=0x240/4; float *next=p;
 j=0;
 do {
 float v=D_00275460/(float)func_00136460(f28->groups[g].sizes,j,i);
 q[-1]=v; q[0]=v;
 float w=D_00275460-v;
 q[5]=w; q[6]=v;
 q[11]=w; q[12]=w; q[17]=v; q[18]=w;
 q[23]=v; q[24]=v; q[29]=w; q[30]=w;
 ++j;
 q+=0x90/4;
 }while(j<4);
 p=next;
 ++i;
 }while(i<4);
 g++;
 }while((int)p<(int)D_002BDD3C);
 return 1;
}

