/* 26 functions from 0x001D3860 to 0x001D47C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D3E30 {
    char unk0;
    char pad1[0x1E];
    char unk1F;
    char pad20[0x3C];
    int unk5C;
    int unk60;
    char unk64;
    char pad65[0x1E];
    char unk83;
    char pad84[0x1E];
    char unkA2;
    char padA3[0x1E];
    char unkC1;
    C_001D3E30* func_001D3E30(void);
    void func_001D3F20(const char *s, int n);
    void func_001D3E80(const char *s);
    void func_001D3EA0(int n, const char *a, const char *b, const char *c);
};

struct C_001D3CA0 {
    undefined4 func_001D3CA0(byte param_1);
};

struct C_001D3E60 {
    void func_001D3E60(int a0);
};

struct C_001D3F50 {
    C_001D3F50* func_001D3F50(void);
};

extern int D_0028F474;
extern int D_00080000;

void __stdcall func_0025ADD0(void *p);
void __stdcall func_0025AA70(void *p);
void __stdcall func_0025AC10(void *p, int a, void *b);
void __stdcall func_00201100(void *p);

struct C_001C3D80 {
    void func_001C3D80(void);
};
extern C_001C3D80 *D_002F07B8;

struct C_001625D0 {
    void func_001625D0(void);
};

struct C_00157920 {
    void func_00157920(void);
};

/* object released through virtual slot 2 */
struct S_001D3AB0_Res {
    virtual void v0();
    virtual void v1();
    virtual void Release();
};

struct S_001D3C30_Stream {
    char pad0[8];
    int f8;
    int fC;
};

/* XboxMediaControl */
struct C_001D3AB0 {
    void *vtbl;
    char pad4[0x40];
    S_001D3C30_Stream *unk44;
    int unk48;
    int unk4C;
    int unk50;
    char pad54[0x1C];
    S_001D3AB0_Res *unk70;
    char pad74[8];
    void *unk7C;
    void func_001D3800(void);
    void func_001D3860(void);
    void func_001D37C0(void);
    void func_001D3AB0(void);
    void func_001D3C30(void);
};


void C_001D3AB0::func_001D3AB0(void)
{
    vtbl = &D_0028F474;
    unk48 = 0;
    D_002F07B8->func_001C3D80();
    if (unk44 != 0) {
        func_0025ADD0(unk44);
        unk44 = 0;
        if (unk70 != 0) {
            unk70->Release();
            unk70 = 0;
        }
    }
    if (unk44 != 0) {
        func_0025ADD0(unk44);
        unk44 = 0;
        if (unk70 != 0) {
            unk70->Release();
            unk70 = 0;
        }
    }
    if (unk7C != 0) {
        func_00201100(unk7C);
    }
    ((C_001625D0 *)this)->func_001625D0();
}

void C_001D3AB0::func_001D3C30(void)
{
    if (unk48 != 0) {
        func_001D3800();
        if (unk50 == 0 && unk70 != 0) {
            func_001D3860();
        }
        func_0025AA70(unk44);
        if (unk44->fC == unk44->f8 - 1) {
            if (unk4C != 0) {
                func_0025AC10(unk44, 1, &D_00080000);
                unk48 = 1;
            } else {
                func_001D37C0();
            }
        }
    }
    ((C_00157920 *)this)->func_00157920();
}

undefined4 C_001D3CA0::func_001D3CA0(byte param_1)
{
  int func_001D3AB0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D3AB0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001D3E30* C_001D3E30::func_001D3E30(void) {
    unk0 = 0;
    unk60 = 0;
    unk64 = 0;
    unk83 = 0;
    unkA2 = 0;
    unkC1 = 0;
    unk1F = 0;
    unk5C = 0;
    return this;
}

void C_001D3E60::func_001D3E60(int a0) {
    int func_001E8920(...);
    func_001E8920(this, a0, 30);
}

void C_001D3E30::func_001D3E80(const char *s)
{
    int func_001E8920(...);
    func_001E8920(&unk64, s, 30);
}

void C_001D3E30::func_001D3EA0(int n, const char *a, const char *b, const char *c)
{
    int func_001E8920(...);

    unk60 = n;
    if (n > 0) {
        func_001E8920(&unk83, a, 30);
    }
    if (unk60 > 1) {
        func_001E8920(&unkA2, b, 30);
    } else {
        func_001E8920(&unkA2, a, 30);
    }
    if (unk60 > 2) {
        func_001E8920(&unkC1, c, 30);
    } else {
        func_001E8920(&unkC1, a, 30);
    }
}

C_001D3F50* C_001D3F50::func_001D3F50(void) {
    return this;
}
