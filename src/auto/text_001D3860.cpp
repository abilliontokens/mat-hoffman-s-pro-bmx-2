/* 26 functions from 0x001D3860 to 0x001D47C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct S_001D3F90_Size {
    unsigned int lo;
    unsigned int hi;
};

int __stdcall func_001DE942(char *path, S_001D3F90_Size *a, S_001D3F90_Size *b, S_001D3F90_Size *c);

struct C_001D3F50;

struct C_001D3F90 {
    int f0;
    char f4[1];
    int func_001D3F90(unsigned int *a, unsigned int *b, unsigned int *c);
};

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

static __forceinline void ClearInt_001D3F60(int *p)
{
    *p = 0;
}

struct S_001D3F60_Sub {
    int x;
    __forceinline void reset(void)
    {
        x = 0;
    }
};

struct C_001D3F60 : C_001D3F50 {
    int f0;
    union {
        int f4;
        S_001D3F60_Sub sub4;
    };
    int f8;
    C_001D3F60 *func_001D3F60(void);
};

extern int D_0028F474;
extern int D_00080000;
extern char D_00278068[];
extern char D_0028F0A8[];
extern char D_0028F510[];
extern int D_0026D8D0;
extern char D_0028F130[];

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
int __stdcall func_001DEF8D(const char *name);
int __stdcall func_001DE51E(void *path, void *find);
int __stdcall func_001DE625(int handle, void *find);
int __stdcall func_001DE66C(int handle);
int __stdcall func_001DE2BB(void *a, void *b, int c, int d, void *e, int f);
void __cdecl func_001DDE3E(char *buf, const char *fmt, ...);
void __cdecl func_001DDE51(char *buf, const char *fmt, ...);
int func_001EA426(const char *a, const char *b);
unsigned __stdcall func_0026EBC5(void *type);
int __stdcall func_0026EBE7(void *type, unsigned *insertions, unsigned *removals);
int __stdcall func_0026ED5B(int port, int slot, char *letter);
int __stdcall func_0026EE8D(int port, int slot);

struct S_001D4200_Find {
    char pad0[0x140];
    char name[0x104];
    char alt[0x100];
};

struct C_001D4200 {
    int unk0;
    char unk4[4];
    int unk8;
    int func_001D4010(int a);
    unsigned func_001D4060(int a);
    int func_001D40E0(int a);
    int func_001D4170(int a);
    int func_001D41D0(int a);
    int func_001D4200(char *out);
    int func_001D4300(unsigned a);
    int func_001D4380(char *out);
};

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

void C_001D3E30::func_001D3F20(const char *s, int n)
{
    strcpy(&unk1F, s);
    unk5C = n * 2;
}

C_001D3F50* C_001D3F50::func_001D3F50(void) {
    return this;
}

C_001D3F60 *C_001D3F60::func_001D3F60(void)
{
    int func_001D3F50(...);
    func_001D3F50();
    f8 = 0;
    f0 = -1;
    ClearInt_001D3F60(&f4);
    return this;
}

int C_001D3F90::func_001D3F90(unsigned int *a, unsigned int *b, unsigned int *c)
{
    S_001D3F90_Size total;
    S_001D3F90_Size totalFree;
    S_001D3F90_Size avail;
    unsigned int v;

    func_001DE942(f4, &avail, &total, &totalFree);
    if (a != 0) {
        v = total.lo;
        if (v > 0x7fffffff) {
            v = 0x7fffffff;
        }
        *a = v >> 10;
    }
    if (b != 0) {
        v = totalFree.lo;
        if (v > 0x7fffffff) {
            v = 0x7fffffff;
        }
        *b = v >> 10;
    }
    if (c != 0) {
        v = avail.lo;
        if (v > 0x7fffffff) {
            v = 0x7fffffff;
        }
        *c = v >> 10;
    }
    return 1;
}

int __stdcall func_001D4010(int x)
{
    switch (x) {
    case 0:
        return 0;
    case 1:
    case 5:
        return 1;
    case 2:
    case 6:
        return 2;
    case 3:
    case 7:
        return 3;
    case 4:
        return 0;
    default:
        return 0;
    }
}

int C_001D4200::func_001D4200(char *out)
{
    int func_001E8920(...);
    S_001D4200_Find find;
    char buf[0x80];
    int found;
    int h;

    h = func_001DE51E(&unk4, &find);
    found = 0;
    if (h != -1) {
        do {
            func_001DDE51(buf, D_0028F0A8, find.alt);
            if (func_001EA426(buf, out + 0x1f) == 0) {
                func_001E8920(out, find.name, 30);
                found = 1;
                break;
            }
        } while (func_001DE625(h, &find) != 0);
        func_001DE66C(h);
    }
    return found;
}

int __stdcall func_001D42A0(const char *a, const char *b)
{
    char buf[0x104];
    int attr;

    func_001ADCC0(buf, 0x104, D_00278068, a, b);
    attr = func_001DEF8D(buf);
    if (attr != -1 && (attr & 0x10) == 0) {
        return 1;
    }
    return 0;
}

int C_001D4200::func_001D4300(unsigned a)
{
    unsigned removed;
    unsigned mask;
    unsigned cur;

    if (a == 8) {
        return 1;
    }
    mask = func_001D4060(a);
    if (func_0026EBE7(&D_0026D8D0, &a, &removed) != 0) {
        if ((a & mask) != 0) {
            return 2;
        }
        if ((removed & mask) != 0) {
            return 0;
        }
    }
    cur = func_0026EBC5(&D_0026D8D0);
    unk8 = cur;
    return (cur | mask) == cur;
}

int C_001D4200::func_001D4380(char *out)
{
    int func_001E8920(...);
    char bufB[0x104];
    char bufA[0x104];
    char bufC[0x104];
    int r;
    int h;

    if (unk0 == -1) {
        return 0;
    }
    r = func_001D4300(unk0);
    if (r == 2) {
        h = unk0;
        if (h == -1 || func_001D4170(h) != 0) {
            func_001D40E0(h);
        }
    } else if (r != 1) {
        func_001D4170(unk0);
        return 0;
    }
    func_001DDE3E(bufA, D_0028F510, out + 0x1f);
    if (func_001DE2BB(&unk4, bufA, 4, 0, bufB, 0x104) != 0) {
        return 0;
    }
    func_001E8920(out, bufB, 30);
    return 1;
}

