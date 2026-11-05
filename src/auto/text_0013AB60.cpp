/* 27 functions from 0x0013AB60 to 0x0013B9C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0013B260 {
    undefined4 func_0013B260(int param_1);
};

struct C_0013B1F0 {
    undefined4 func_0013B1F0(int param_1, undefined4 param_2);
};

struct C_0013AFD0 {
    undefined4 func_0013AFD0(int param_1);
};

#include <string.h>

extern "C" int func_0014FF00(const char *path, char *drive, char *dir, char *fname, char *ext);
void func_001E8390(void *p);

/* one 0x20-byte slot of C_0013AEC0::fE8 */
struct S_0013AEC0_Slot {
    int f0;
    int f4;
    void *f8;
    int fC;
    unsigned int f10;
    unsigned int f14;
    int f18;
    int f1C;
};

struct S_0013AEC0_Ent {
    int f0;
    int f4;
    int f8;
};

/* one 0x28-byte row of C_0013AEC0::fC */
struct S_0013AF80_Row {
    char pad0[0x10];
    int f10;
    char pad14[0x14];
};

extern "C" int D_0014FEF0(int p);
int func_001EA426(const char *a, const char *b);

struct C_0013AEC0 {
    char pad0[0xC];
    S_0013AF80_Row *fC;
    char pad10[0x74];
    S_0013AEC0_Ent ents[7];
    char padD8[8];
    int fE0;
    int fE4;
    S_0013AEC0_Slot *fE8;
    int fEC;
    char padF0[8];
    int fF8;
    int func_0013AFB0(int idx);
    void func_0013AEC0(int idx);
    int func_0013AF80(int idx);
    int func_0013AF40(int idx, int *a, unsigned int *b);
    int func_0013AFF0(int idx, int v, int mode);
    int func_0013B130(const char *key);
};


char func_0013AB60(const char *path)
{
    char dir[256];
    char ext[256];
    char fname[260];
    char drive[3];
    char key;
    char c;
    const char *p;
    int n;
    int i;

    func_0014FF00(path, drive, dir, fname, ext);
    strcat(fname, ext);
    p = fname;
    key = (char)0xfa;
    n = strlen(fname);
    for (i = 0; i < n; i++) {
        c = *p++;
        key += (char)((key + 3) ^ c);
    }
    return key;
}

void func_0013AC00(unsigned char *p, unsigned int n, unsigned char key)
{
    unsigned char *last = p + (n - 1);
    unsigned char c;

    if (n > 1) {
        do {
            c = *p ^ key;
            key = key + *p;
            *p = c;
            p++;
        } while (p != last);
        *p = *p ^ key;
        return;
    }
    *p = *p ^ key;
}

void C_0013AEC0::func_0013AEC0(int idx)
{
    S_0013AEC0_Slot *s = &fE8[idx];

    if (s->f4 != -1) {
        S_0013AEC0_Ent *e = &ents[s->f4];
        if (e->f0 == idx) {
            e->f0 = -1;
            fE0 = s->f4;
        }
    }
    if (s->f8 != 0) {
        func_001E8390(s->f8);
        s->f8 = 0;
    }
    s->f4 = 0;
    s->f10 = 0;
    s->f0 = 0;
    s->f1C = 0;
    s->f14 = 0;
    s->fC = 0;
    s->f18 = 1;
    fE4 = idx;
}

int C_0013AEC0::func_0013AF80(int idx)
{
    int v = fC[fE8[idx].f0].f10;
    if (v != 0) {
        return D_0014FEF0(v);
    }
    return 0;
}

int C_0013AEC0::func_0013AFB0(int idx)
{
    S_0013AEC0_Slot *s = &fE8[idx];

    return (s->f10 < s->f14) - 1;
}

undefined4 C_0013AFD0::func_0013AFD0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0xe8) + 0x10 + param_1 * 0x20);
}

undefined4 C_0013B1F0::func_0013B1F0(int param_1, undefined4 param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(*(int *)(in_ECX + 0xe8) + 0x1c + param_1 * 0x20) = param_2;
  return 1;
}

undefined4 C_0013B260::func_0013B260(int param_1)
{
  int in_ECX = (int)this;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ECX + 0xfc);
  *(uint *)(in_ECX + 0xfc) = (uint)(param_1 == 0);
  return uVar1;
}

void __stdcall func_0013B440(int param_1)
{
  int func_001E8390(...);
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (iVar1 != 0) {
      func_001E8390(iVar1);
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

