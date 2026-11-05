/* 26 functions from 0x000BB7C0 to 0x000BC7B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000BC0B0 {
    undefined4 func_000BC0B0(void);
};

struct C_000BBDF0 {
    int func_000BBDF0(void);
};

struct S_000BC180_Config {
    char pad0[0x324];
    int f324;
};

struct S_000BC180_Global {
    char pad0[0x2e0];
    S_000BC180_Config *f2e0;
};

/* one 0x1a8-byte entry of the list at +0x27c */
struct S_000BC180_Entry {
    char pad0[0x11c];
    int f11c;
    int *f120;
    int f124;
    int f128;
    char pad12c[0x7c];
};

struct C_000BC180 {
    char pad0[0x27c];
    S_000BC180_Entry *f27c;
    int f280;
    int f284;
    int f288;
    int f28c;
    undefined4 func_000BC180(void);
    undefined4 func_000BC050(void);
    undefined4 func_000BC130(void);
    undefined4 func_000BC1C0(void);
};

struct C_000BC4A0 {
    void func_000BC4A0(undefined4 param_1, undefined4 param_2);
};

struct C_000BC670 {
    undefined4 func_000BC670(void);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
int func_001EA426(const char *a, const char *b);

extern char D_0027DB74[];
extern char D_0027DB68[];
extern char D_0027DB8C[];
extern char D_0027DB80[];

struct S_000BBE30_Mgr {
    char pad0[0x324];
    int f324;
};

struct S_000BBE30_Game {
    char pad0[0x234];
    int f234;
    char pad238[0xa8];
    S_000BBE30_Mgr *f2E0;
};

struct S_000BBE30_Audio {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
};

extern S_000BBE30_Audio *D_002EFDB8;

/* 0x1a8-byte entry of C_000BBE30::f27C */
struct S_000BBE30_Entry {
    char pad0[0x104];
    char f104[8];
    int f10C;
    char pad110[0xc];
    int f11C;
    int *f120;
    int f124;
    int f128;
    char pad12C[4];
    char f130[0x78];
};

struct S_000BBE30_Lookup {
    int func_0001B3C0(const char *name);
};

struct S_000BBE30_Names {
    char pad0[0x484];
    S_000BBE30_Lookup *f484;
};

struct C_000BBE30 {
    char pad0[0x150];
    S_000BBE30_Names *f150;
    char pad154[0x128];
    S_000BBE30_Entry *f27C;
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    void func_000BBA80(int idx, char *buf);
    int func_000BBE30(int show);
    int func_000BBED0(int show);
    void func_000BBF90(const char *name);
    int func_000BC0F0(int idx);
    void func_000BC240(void);
    void func_000BC2A0(void);
    char *func_000BC2E0(void);
};

struct S_000BC590_Vt {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct S_000BC590_Owner {
    char pad0[0x150];
    S_000BC590_Vt *f150;
};

struct S_000BC590_Sub {
    void func_001D37C0(void);
};

struct C_000BC590 {
    char pad0[0x24];
    int f24;
    S_000BC590_Owner *f28;
    int f2C;
    S_000BC590_Sub *f30;
    char pad34[0xc];
    int f40;
    void func_000BC590(void);
};


int C_000BBDF0::func_000BBDF0(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(*(int *)(*(int *)(in_ECX + 0x284) * 0x1a8 + 0x120 + *(int *)(in_ECX + 0x27c)) +
                 *(int *)(in_ECX + 0x288) * 4) * 0x120 + *(int *)(in_ECX + 0x280);
}

extern S_000BBE30_Game *D_002A8490;

undefined4 C_000BC180::func_000BC050(void)
{
    if (D_002A8490->f2E0->f324 == 1) {
        f27c->f124 = f28c;
        return f28c;
    }
    f27c[f284].f124 = f28c;
    return f28c;
}

undefined4 C_000BC0B0::func_000BC0B0(void)
{
  int in_ECX = (int)this;
  
  if (D_002A8490->f2E0->f324 == 1) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x27c) + 0x124);
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x284) * 0x1a8 + 0x124 + *(int *)(in_ECX + 0x27c));
}

int C_000BBE30::func_000BC0F0(int idx)
{
    if (D_002A8490->f2E0->f324 == 1) {
        return f27C->f10C;
    }
    return f27C[idx].f10C;
}

undefined4 C_000BC180::func_000BC180(void)
{
    if (D_002A8490->f2E0->f324 == 1) {
        return f27c->f128;
    }
    return f27c[f284].f128;
}

void C_000BBE30::func_000BC240(void)
{
    f288 = 0;
    if (D_002A8490->f2E0->f324 == 1) {
        f27C->f128 = *f27C->f120;
    } else {
        f27C[f284].f128 = *f27C[f284].f120;
    }
}

void C_000BBE30::func_000BC2A0(void)
{
    if (D_002A8490->f2E0->f324 == 1) {
        f27C->f124 = 0;
    } else {
        f27C[f284].f124 = 0;
    }
}

char *C_000BBE30::func_000BC2E0(void)
{
    if (D_002A8490->f2E0->f324 == 1) {
        return f27C->f130;
    }
    return f27C[f284].f130;
}

void C_000BC4A0::func_000BC4A0(undefined4 param_1, undefined4 param_2)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x30);
  *(undefined4 *)(iVar1 + 0x3c) = param_1;
  *(undefined4 *)(iVar1 + 0x40) = param_2;
  return;
}

void C_000BC590::func_000BC590(void)
{
    f30->func_001D37C0();
    f24 = 1;
    f40 = 1;
    if (f2C != 0) {
        f28->f150->v6();
        f2C = 0;
    }
}

undefined4 C_000BC670::func_000BC670(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0x48);
}
