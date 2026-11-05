/* 7 functions from 0x0017AA90 to 0x0017BA00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern char D_002A60B0[];
extern char D_00284644[];
extern int D_002A8D2C, D_002A8D30, D_002A8D34;
extern float D_002A8D38;
extern int D_00288FF4;
extern int D_002AA46C;
extern "C" void *func_001E8A44(unsigned int);
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);
struct C_0017AA90;
struct ShadowPreambleDataItem {
    void *vtbl;
    C_0017AA90 *owner;
    ShadowPreambleDataItem(C_0017AA90 *p);
};

inline ShadowPreambleDataItem::ShadowPreambleDataItem(C_0017AA90 *p) {
    vtbl = &D_00288FF4;
    owner = p;
}

struct C_0017AA90_Child {
    virtual void v0();
    virtual void v1(C_0017AA90 *owner);
};

struct C_0017AA90_Xform {
    char pad0[0x250];
    int f250;
};

struct C_0017AA90_Dest {
    int f0, f4, f8;
    char padC[0xC];
    int f18;
};

struct C_0017AA90_Res {
    char pad0[0x4c];
    C_0017AA90_Dest *f4C;
};

struct C_0017AA90_Node {
    int f0;
    C_0017AA90_Res *f4;
    int f8;
    int fC;
};

struct C_0017AA90_Mgr {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a, int b);
    char pad4[0x10];
    C_0017AA90_Node *f14;
    int func_001617F0(const char *, int);
};

extern int D_002EFD5C;
extern int D_002A8CDC;
extern C_0017AA90_Mgr *D_002A829C;
void func_000263B0(void *a, void *b, void *c);

struct C_0017AA90 {
    void *vtbl;
    char pad4[0xEC];
    C_0017AA90_Child **fF0;
    int fF4;
    char padF8[4];
    char *fFC;
    int f100, f104, f108, f10C, f110, f114;
    char pad118[0x24];
    int f13C;
    struct ShadowObject **f140;
    int f144, f148, f14C;
    int f150;
    int f154;
    char pad158[8];
    int f160;
    int func_0017AA90();
    int func_0017B800();
    void func_0017AD20();
    void func_001D3F50();
    C_0017AA90 *func_0017ABE0(const char *name);
    C_0017AA90(const char *name);
};

struct C_0017ABC0 {
    undefined4 func_0017ABC0(byte param_1);
};

struct C_0017B9E0 {
    int unk0;
    int unk4;
    C_0017B9E0* func_0017B9E0(int a0, int a1);
};

struct C_0017AB70 {
    char pad0[0x158];
    int *unk158;
    int unk15C;
    int func_0017AB70(int param_1);
};


int C_0017AA90::func_0017AA90()
{
    if (D_002EFD5C == 0) {
        D_002EFD5C = 1;
        return 1;
    }
    if (D_002A8CDC != 0 && f150 == 0 && fF4 != 0) {
        func_000263B0(fFC + 0x250, fFC + 0xb0, fFC + 0x70);
        D_002A829C->f14[f154].f4->f4C->f18 = f160;
        for (int i = 0; i < fF4; i++) {
            fF0[i]->v1(this);
        }
    }
    return 1;
}

int C_0017AB70::func_0017AB70(int param_1)
{
    if (unk158 == 0) {
        return 1;
    }
    for (int i = 0; i < unk15C; i++) {
        if (unk158[i] == param_1) {
            return 0;
        }
    }
    return 1;
}

undefined4 C_0017ABC0::func_0017ABC0(byte param_1)
{
  int func_0017A640(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0017A640();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0017B9E0* C_0017B9E0::func_0017B9E0(int a0, int a1) {
    unk0 = a0;
    unk4 = a1;
    return this;
}
extern char D_002A60B0[];
extern char D_00284644[];
extern int D_002A8D2C, D_002A8D30, D_002A8D34;
extern float D_002A8D38;
extern int D_00288FF4;
extern int D_002AA46C;
extern "C" void *func_001E8A44(unsigned int);
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);
