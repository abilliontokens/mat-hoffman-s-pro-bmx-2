/* 9 functions from 0x00144BF0 to 0x001458E0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001452A0_MgrA {
    void func_001B26C0(int a);
};

struct C_001452A0_MgrB {
    void func_001AC790(int a);
};

struct C_001452A0_MgrC {
    void func_0014A910(int a);
};

struct C_001452A0_MgrD {
    void func_00142D90(int a);
};

extern C_001452A0_MgrA *D_002AA6C0;
extern C_001452A0_MgrB *D_002A71C0;
extern C_001452A0_MgrC *D_002A751C;
extern C_001452A0_MgrD *D_002A6D84;

struct C_001452A0 {
    void *vtbl;
    char pad4[6];
    u8 fA;
    char padB[0x18 - 0xB];
    s16 a18[4];
    u8 a20[4];
    u8 f24;
    char pad25[1];
    s16 f26;
    s16 f28;
    char pad2A[2];
    int f2C;
    int f30;
    int f34;
    void func_001B0DC0();
    void func_001452A0();
};

struct C_00145290 {
    int func_00145290(int param_1);
};

struct C_00144D30_V { float v[4]; };
struct C_00144D30_E { int obj; C_00144D30_V m; void Apply(); };
struct C_00144D30_Cnt { char pad[0x40]; int n; };
struct C_00144D30 {
    char pad0[4];
    C_00144D30_E *f4;
    void func_00144D30();
};
void __fastcall func_001FEC30(void *self, C_00144D30_V *m);
void __fastcall func_001FEBD0(void *self, C_00144D30_V *m);
inline void C_00144D30_E::Apply() { func_001FEBD0((char *)obj + 0x60, &m); }

void *func_001E8A44(int size);
void func_001E891B(void *p);

#pragma intrinsic(memcpy)
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);

extern int D_00285CB0;

struct C_001AFB60 {
    void func_001AFB60(void *a, void *b, void *c);
};

struct C_00144CF0 {
    void func_00144CF0(void);
};

struct C_00144E70 {
    void func_00144E70(void);
};

struct C_00145230 {
    void func_001AFF50(void);
    C_00145230 *func_00145230(void);
};

struct C_00144BF0_Entry {
    int unk0;
    int unk4;
    char pad8[8];
};

struct C_00144BF0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(int a);
    virtual void v6();
    virtual int v7(const char *name, int a);
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    C_00144BF0_Entry *unk14;
};

struct C_00145370_Src {
    char pad0[0x88];
    int f88[4]; int f98[4]; int fA8[4]; int fB8[4];
    int fC8[4]; int fD8[4]; int fE8[4]; float fF8[4];
    int f108[4]; int f118[4]; int f128[4]; int f138[4];
    int f148[4]; int f158[4]; int f168[4]; int f178[4];
};
struct C_00145370_Out { int idx; int type; int val; };
extern "C" int __cdecl func_001ADCC0(char *buf, int n, const char *fmt, ...);
struct C_00168BE0;
int func_00140DF0(C_00168BE0 *cfg, const char *key, int def, int &out);
int func_00140F30(C_00168BE0 *cfg, const char *key, int def, int &out);
int func_00141070(C_00168BE0 *cfg, const char *key, int def, int &out);
int func_00140820(C_00168BE0 *cfg, const char *key, int def, int &out);
int func_00140890(C_00168BE0 *cfg, const char *key, int def, int &out);
int func_001411A0(C_00168BE0 *cfg, const char *key, int def, int &out);
int func_00140A10(C_00168BE0 *cfg, const char *key, int def, int &out);
int func_001412A0(C_00168BE0 *cfg, const char *key, int def, int &out);
int func_00140B60(C_00168BE0 *cfg, const char *key, int def, int &out);
int func_001409A0(C_00168BE0 *cfg, const char *key, int def, int &out);
extern char D_00285DC4[], D_00285DB8[], D_00285DAC[], D_00285DA0[], D_00285D90[], D_00285D80[], D_00285D70[], D_00285D5C[];
extern char D_00285D4C[], D_00285D38[], D_00285D28[], D_00285D18[], D_00285D08[], D_00285CF4[], D_00285CE4[], D_00285CD0[];

extern C_00144BF0_Obj *D_002A71C4;
extern char D_00285C6C[];
extern char D_00285C5C[];
extern char D_00285C40[];
extern char D_00285C28[];
extern char D_00285C0C[];
int __stdcall func_002012B0(int a, int b, int c, int d);


/* render-state replay for a pixel animation: secondary subobject at +0xC, src data pointer at this[-1] */
struct C_00144ED0_Src {
    char pad0[0x38];
    int count1;
    int count2;
};

struct C_00144ED0_A {
    int a;
    int k;
    unsigned int v;
};

struct C_00144ED0_B {
    int k;
    unsigned int v;
};

struct C_00144ED0 {
    void *vtbl;
    C_00144ED0_A *arr1;
    C_00144ED0_B *arr2;
    void func_00144ED0();
};

extern int D_0020C6DC;
extern int D_0020C6E0[];
extern int D_0020C710[];
extern int D_0020C8E0[];
extern unsigned int D_002751E8[];
extern void *D_002752F0[];
extern "C" unsigned int _imp__PsCreateSystemThreadEx[];

void __fastcall func_001FD020(void *p, int v);
int __stdcall func_001FD8E0(int a, int b);
int __stdcall func_001FDA60(int a, int b);
int __stdcall func_001FDAA0(int a, int b);
int __stdcall func_001FD9F0(int a, int b, int c);
void __stdcall func_001FCFF0(unsigned int v);
void __stdcall func_001FD890(unsigned int v);
void __stdcall func_001FD400(unsigned int v);
void __stdcall func_001FD770(unsigned int v);
void __stdcall func_001FD7C0(unsigned int v);
void __stdcall func_001FD820(unsigned int v);
void __stdcall func_001FD500(unsigned int v);
void __stdcall func_001FE490(unsigned int v);
void __stdcall func_001FE520(unsigned int v);
void __stdcall func_001FE5B0(unsigned int v);
void __stdcall func_001FD450(unsigned int v);
void __stdcall func_001FD4C0(unsigned int v);
void __stdcall func_001FD540(unsigned int v);
void __stdcall func_001FD690(unsigned int v);
void __stdcall func_001FD710(unsigned int v);
void __stdcall func_001FD380(unsigned int v);
void __stdcall func_001FE810(unsigned int v);
void __stdcall func_001FE890(unsigned int v);
void __stdcall func_001FE790(unsigned int v);
void __stdcall func_001FE7D0(unsigned int v);
void __stdcall func_001FD3C0(unsigned int v);
void __stdcall func_001FD5A0(unsigned int v);
void __stdcall func_001FE8E0(unsigned int v);
void __stdcall func_001FD610(unsigned int v);
void __stdcall func_001FE620(unsigned int v);
void __stdcall func_001FE650(unsigned int v);
void __stdcall func_001FE6C0(unsigned int v);
void __stdcall func_001FE730(unsigned int v);
void __stdcall func_001FE750(unsigned int v);
void __stdcall func_001FE770(unsigned int v);

int func_00144BF0(const char *a0, int a1, int a2, int a3)
{
    int idx;
    int result;
    int ok;
    int fail;

    if (D_002A71C4->unk8 == 0) {
        D_002A71C4->v7(D_00285C6C, 0);
        D_002A71C4->v7(D_00285C5C, 0);
        D_002A71C4->v7(D_00285C40, 0);
        D_002A71C4->v7(D_00285C28, 0);
        D_002A71C4->v7(D_00285C0C, 0);
    }
    idx = D_002A71C4->v7(a0, 0);
    D_002A71C4->v5(idx);
    if (a1 != 0 && D_002A71C4->unk14[idx].unk4 == 0) {
        result = func_002012B0(a1, a2, 2, a3);
        ok = result != 0;
        fail = (int)((unsigned)(ok - 1) & 0x8007000E) < 0;
        if (fail) {
            return 0;
        }
        D_002A71C4->unk14[idx].unk4 = result;
    }
    return -idx;
}

void C_00144CF0::func_00144CF0(void)
{
  int in_ECX = (int)this;
  int *p;
  int n;

  p = (int *)(in_ECX + 0xc);
  n = 4;
  do {
    if (*p != 0) {
      int base = *(int *)(in_ECX + 0x20);
      ((C_001AFB60 *)*p)->func_001AFB60((void *)(base + 4), (void *)(base + 0x18), (void *)(base + 0x2c));
    }
    p++;
  } while (--n);
}

void C_00144D30::func_00144D30()
{
 char *self=(char *)this;
 int n=(*(C_00144D30_Cnt **)(self-0x14))->n;
 int i=0;
 float t;
 if(n>=4) {
 float m[4][4];
 C_00144D30_E *e;
 int j;
 for(j=0;j<4;j++){m[j][2]=0; m[j][1]=0; m[j][0]=0; m[j][3]=1.0f;}
 e=*(C_00144D30_E **)(self+4);
 *(C_00144D30_V *)m[0]=e[0].m;
 *(C_00144D30_V *)m[1]=e[1].m;
 *(C_00144D30_V *)m[2]=e[2].m;
 *(C_00144D30_V *)m[3]=e[3].m;
 t=m[1][0]; m[1][0]=m[0][1]; m[0][1]=t;
 t=m[2][0]; m[2][0]=m[0][2]; m[0][2]=t;
 t=m[2][1]; m[2][1]=m[1][2]; m[1][2]=t;
 func_001FEC30((char *)e->obj+0x60,(C_00144D30_V *)m);
 i=4;
 }
 for(;i<n;i++) {
 func_001FEBD0((char *)f4[i].obj+0x60, &f4[i].m);
 }
}

void C_00144E70::func_00144E70(void)
{
  int in_ECX = (int)this;
  int src = *(int *)(in_ECX + 8);
  int n1 = *(int *)(src + 0x38);
  int *dst1 = (int *)func_001E8A44(n1 * 0xc);
  *(int **)(in_ECX + 0x10) = dst1;
  memcpy(dst1, *(void **)(src + 0x2c), n1 * 0xc);
  int n2 = *(int *)(src + 0x3c);
  int *dst2 = (int *)func_001E8A44(n2 * 8);
  *(int **)(in_ECX + 0x14) = dst2;
  memcpy(dst2, *(void **)(src + 0x30), n2 * 8);
}

void C_00144ED0::func_00144ED0()
{
    int in_ECX = (int)this;
    C_00144ED0_Src *src = *(C_00144ED0_Src **)(in_ECX - 4);
    int n1 = src->count1;
    int n2 = src->count2;
    int i;

    for (i = 0; i < n1; i++) {
        unsigned int v = arr1[i].v;
        C_00144ED0_A *e = &arr1[i];
        int k = e->k;
        int a = e->a;
        if (k < 0xc) {
            D_0020C6DC |= 1 << a;
            D_0020C6E0[a * 0x20 + k] = v;
        } else if (k == 0xc) {
            D_0020C6DC |= v < 0x19 ? 0x800 : 0x480f;
            D_0020C710[a * 0x20] = v;
        } else if (k < 0x16) {
            D_0020C6DC |= D_002751E8[k];
            D_0020C6E0[a * 0x20 + k] = v;
        } else if (k == 0x1c) {
            func_001FD8E0(a, v);
        } else if (k == 0x1d) {
            func_001FDA60(a, v);
        } else if (k == 0x1e) {
            func_001FDAA0(a, v);
        } else if (k <= 0x1b) {
            func_001FD9F0(a, k, v);
        }
    }
    for (i = 0; i < n2; i++) {
        unsigned int v = arr2[i].v;
        int k = arr2[i].k;
        if (k < 0x5c) {
            func_001FD020(D_002752F0[k], v);
        } else if (k < 0x88) {
            D_0020C6DC |= _imp__PsCreateSystemThreadEx[k];
            D_0020C8E0[k] = v;
        } else if (k == 0x88) {
            func_001FCFF0(v);
        } else if (k == 0x89) {
            func_001FD890(v);
        } else if (k == 0x8a) {
            func_001FD400(v);
        } else if (k == 0x8b) {
            func_001FD770(v);
        } else if (k == 0x8c) {
            func_001FD7C0(v);
        } else if (k == 0x8d) {
            func_001FD820(v);
        } else if (k == 0x8e) {
            func_001FD500(v);
        } else if (k == 0x8f) {
            func_001FE490(v);
        } else if (k == 0x90) {
            func_001FE520(v);
        } else if (k == 0x91) {
            func_001FE5B0(v);
        } else if (k == 0x93) {
            func_001FD450(v);
        } else if (k == 0x92) {
            func_001FD4C0(v);
        } else if (k == 0x94) {
            func_001FD540(v);
        } else if (k == 0x95) {
            func_001FD690(v);
        } else if (k == 0x96) {
            func_001FD710(v);
        } else if (k == 0x97) {
            func_001FD380(v);
        } else if (k == 0x98) {
            func_001FE810(v);
        } else if (k == 0x99) {
            func_001FE890(v);
        } else if (k == 0x9a) {
            func_001FE790(v);
        } else if (k == 0x9b) {
            func_001FE7D0(v);
        } else if (k == 0x9c) {
            func_001FD3C0(v);
        } else if (k == 0x9d) {
            func_001FD5A0(v);
        } else if (k == 0x9e) {
            func_001FE8E0(v);
        } else if (k == 0x9f) {
            func_001FD610(v);
        } else if (k == 0xa0) {
            func_001FE620(v);
        } else if (k == 0xa1) {
            func_001FE650(v);
        } else if (k == 0xa2) {
            func_001FE6C0(v);
        } else if (k == 0xa3) {
            func_001FE730(v);
        } else if (k == 0xa4) {
            func_001FE750(v);
        } else if (k == 0xa5) {
            func_001FE770(v);
        }
    }
}

C_00145230 *C_00145230::func_00145230(void)
{
  int in_ECX = (int)this;
  int i;

  func_001AFF50();
  *(int *)in_ECX = (int)&D_00285CB0;
  for (i = 0; i < 4; i++) {
    *(short *)(in_ECX + 0x18 + i * 2) = -1;
    *(unsigned char *)(in_ECX + 0x20 + i) = 0xff;
  }
  *(unsigned char *)(in_ECX + 0x24) = 0;
  *(short *)(in_ECX + 0x26) = 0;
  *(short *)(in_ECX + 0x28) = 0;
  *(int *)(in_ECX + 0x2c) = 0;
  *(int *)(in_ECX + 0x30) = 0;
  *(int *)(in_ECX + 0x34) = 0;
  *(int *)(in_ECX + 0x38) = 0;
  *(int *)(in_ECX + 0x3c) = 0;
  *(int *)(in_ECX + 0x40) = 0;
  *(int *)(in_ECX + 0x48) = 0;
  *(int *)(in_ECX + 0x44) = 0;
  return (C_00145230 *)in_ECX;
}

int C_00145290::func_00145290(int param_1)
{
  int in_ECX = (int)this;
  
  return (int)*(short *)(in_ECX + 0x18 + param_1 * 2);
}

void C_001452A0::func_001452A0()
{
    int i;

    vtbl = &D_00285CB0;
    if (f2C != 0) {
        func_001E891B((void *)f2C);
    }
    if (f30 != 0) {
        func_001E891B((void *)f30);
    }
    if (f34 != 0) {
        func_001E891B((void *)f34);
    }
    for (i = 0; i < fA; i++) {
        short v = a18[i];
        if (v == -1 || v == -2 || v == -3 || v == -4) {
            continue;
        }
        if (v >= 0) {
            D_002AA6C0->func_001B26C0(v);
        } else if (v < -4) {
            D_002A71C0->func_001AC790(-v);
        }
    }
    D_002A751C->func_0014A910(f26);
    D_002A6D84->func_00142D90(f28);
    func_001B0DC0();
}

void __stdcall func_00145370(C_00168BE0 *cfg, C_00145370_Src *src, int idx, C_00145370_Out *out, int *count)
{
    int v;
    char buf[0x40];

    v = src->f88[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285DC4, idx); func_00140DF0(cfg, buf, v, v); }
    out->idx = idx; out->type = 0x15; out->val = v; out++; (*count)++;
    v = src->f98[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285DB8, idx); func_00140F30(cfg, buf, v, v); }
    out->val = v; out->idx = idx; out->type = 0; out++; (*count)++;
    v = src->fA8[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285DAC, idx); func_00140F30(cfg, buf, v, v); }
    out->idx = idx; out->type = 1; out->val = v; out++; (*count)++;
    v = src->fB8[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285DA0, idx); func_00140F30(cfg, buf, v, v); }
    out->idx = idx; out->type = 2; out->val = v; out++; (*count)++;
    v = src->fC8[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285D90, idx); func_00141070(cfg, buf, v, v); }
    out->val = v; out->idx = idx; out->type = 3; out++; (*count)++;
    v = src->fD8[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285D80, idx); func_00141070(cfg, buf, v, v); }
    out->idx = idx; out->type = 4; out->val = v; out++; (*count)++;
    v = src->fE8[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285D70, idx); func_00141070(cfg, buf, v, v); }
    out->idx = idx; out->type = 5; out->val = v; out++; (*count)++;
    *(float *)&v = src->fF8[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285D5C, idx); func_00140820(cfg, buf, v, v); }
    out->idx = idx; out->type = 6; out->val = v; out++; (*count)++;
    v = src->f108[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285D4C, idx); func_00140890(cfg, buf, v, v); }
    out->val = v; out->idx = idx; out->type = 7; out++; (*count)++;
    v = src->f118[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285D38, idx); func_00140890(cfg, buf, v, v); }
    out->idx = idx; out->type = 8; out->val = v; out++; (*count)++;
    v = src->f128[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285D28, idx); func_001411A0(cfg, buf, v, v); }
    out->idx = idx; out->type = 9; out->val = v; out++; (*count)++;
    v = src->f138[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285D18, idx); func_00140A10(cfg, buf, v, v); }
    out->val = v; out->idx = idx; out->type = 10; out++; (*count)++;
    v = src->f148[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285D08, idx); func_001412A0(cfg, buf, v, v); }
    out->idx = idx; out->type = 11; out->val = v; out++; (*count)++;
    v = src->f158[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285CF4, idx); func_00140B60(cfg, buf, v, v); }
    out->idx = idx; out->type = 0x1c; out->val = v; out++; (*count)++;
    v = src->f168[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285CE4, idx); func_001409A0(cfg, buf, v, v); }
    out->val = v; out->idx = idx; out->type = 0x1d; out++; (*count)++;
    v = src->f178[idx];
    if (cfg) { func_001ADCC0(buf, 0x40, D_00285CD0, idx); func_001409A0(cfg, buf, v, v); }
    out->idx = idx; out->type = 0x1e; out->val = v; (*count)++;
}

