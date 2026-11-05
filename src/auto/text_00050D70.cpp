/* 18 functions from 0x00050D70 to 0x00051CF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00030F90 {
    void func_00030F90(undefined4 param_1);
};

struct C_00033220 {
    void func_00033220(void);
};

struct C_0012B190 {
    void func_0012B190(int x, int y, int w, int h);
};

struct C_00051BB0 {
    void func_00051BB0(void);
};

struct C_000511A0 {
    undefined4 *func_000511A0(undefined4 param_1);
};

struct C_00051260 {
    void func_00051260(void);
};

struct C_000516C0 {
    void func_000516C0(void);
};

struct C_00051CB0 {
    undefined4 func_00051CB0(void *param_1);
};

extern undefined4 D_00277934;
extern int *D_002A8490;
extern float D_002B8F98;
extern float D_002B8FA0;

struct C_00051180 {
    void func_00051180(float param_1);
};

struct C_00051160 {
    void func_00051160(float param_1);
};

struct C_00051140 {
    void func_00051140(float param_1);
};

struct C_00051120 {
    void func_00051120(short param_1);
};

extern float D_00275544;

struct C_00051840 {
    char pad0[0x2B8];
    float f2B8[4];
    int func_00051840(void);
};

struct C_0009FE70 {
    void func_0009FE70(int a0);
};

struct C_00051A90Mid {
    char pad0[0x54];
    C_0009FE70 *f54;
};

struct C_00051A90 {
    char pad0[0x44];
    C_00051A90Mid *f44;
    char pad48[0x288];
    int f2D0;
    int func_00051A90(int flag);
};

struct C_00051A00Node {
    char pad0[4];
    int f4;
};

struct C_00051A00Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

struct C_00051A00Group {
    char pad0[4];
    C_00051A00Obj *f4;
    int f8;
    char padC[0x100];
    C_00051A00Node **f10c;
};

struct C_00051A00List {
    char pad0[0x24];
    int f24;
    C_00051A00Group **f28;
};

struct C_00051A00Owner {
    char pad0[0x3B4];
    C_00051A00List *f3b4;
};

struct C_00051A00 {
    char pad0[0x64];
    C_00051A00Owner *f64;
    int func_00051A00(void);
};


void C_00051120::func_00051120(short param_1)
{
  int in_ECX = (int)this;
  
  *(uint *)(in_ECX + 0x38) = (int)param_1 << 0x18 | *(uint *)(in_ECX + 0x38) & 0xffffff;
  *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 2;
  return;
}

void C_00051140::func_00051140(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x28) != param_1) {
    *(float *)(in_ECX + 0x28) = param_1;
    *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 1;
  }
  return;
}

void C_00051160::func_00051160(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x2c) != param_1) {
    *(float *)(in_ECX + 0x2c) = param_1;
    *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 1;
  }
  return;
}

void C_00051180::func_00051180(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x34) != param_1) {
    *(float *)(in_ECX + 0x34) = param_1;
    *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 1;
  }
  return;
}

int C_00051840::func_00051840(void)
{
    int count = 0;

    if (f2B8[0] > D_00275544) {
        count++;
    }
    if (f2B8[1] > D_00275544) {
        count++;
    }
    if (f2B8[2] > D_00275544) {
        count++;
    }
    if (f2B8[3] > D_00275544) {
        count++;
    }
    return count;
}

int C_00051A00::func_00051A00(void)
{
    int i;
    int j;

    for (i = 0; i < f64->f3b4->f24; i++) {
        for (j = 0; j < f64->f3b4->f28[i]->f8; j++) {
            C_00051A00Node *node = f64->f3b4->f28[i]->f10c[j];
            if (node->f4 == 0xd) {
                f64->f3b4->f28[i]->f4->v7();
            }
        }
    }
    return 1;
}

int C_00051A90::func_00051A90(int flag)
{
    if (flag != 0) {
        f2D0 = 1;
        f44->f54->func_0009FE70(1);
        return 1;
    }
    f2D0 = 2;
    f44->f54->func_0009FE70(0);
    return 1;
}

