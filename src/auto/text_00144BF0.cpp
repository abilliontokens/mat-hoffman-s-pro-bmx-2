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

extern C_00144BF0_Obj *D_002A71C4;
extern char D_00285C6C[];
extern char D_00285C5C[];
extern char D_00285C40[];
extern char D_00285C28[];
extern char D_00285C0C[];
int __stdcall func_002012B0(int a, int b, int c, int d);


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

