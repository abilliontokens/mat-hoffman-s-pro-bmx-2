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
    __forceinline S_000BC180_Entry *cur(void);
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
    char pad4[0x2c];
    int f30;
};

extern S_000BBE30_Audio *D_002EFDB8;
extern S_000BBE30_Game *D_002A8490;

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
    struct S_000BC320_Rec *func_000BC320(void);
    void func_000BC370(struct S_000BC320_Rec *out, int entry, int idx);
    void func_000BC3E0(int idx);
};

/* 0x14-byte record stored at entry+0x130 (3 of them) and entry+0x16c (3) */
struct S_000BC320_Rec {
    float w[5];
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

static inline void FloatToInt(int *out, float f) { *out = (int)f; }

struct S_000BC4C0_Sub {
    void func_001D3700(int a, int b);
};

struct C_000BC4C0 {
    char pad0[0x30];
    S_000BC4C0_Sub *f30;
    void func_000BC4C0(float a, float b);
};

extern char D_0027DC10[];
extern char D_0027DC08[];

void *func_001E8A44(int size);
void func_00030F30(char *s, void *p);
int func_001361E0(int a, int b, int c, int d);

/* 0x80-byte stream object of BmxVideoPlayer::f30 */
struct S_000BC520_Stream {
    char pad0[0x48];
    int f48;
    int f4C;
    S_000BC520_Stream *func_001D3690(int v);
    void func_001D3B20(char *name);
    void func_001D3730(int v);
    void func_001D3CC0(int v);
    void func_001D37C0(void);
};

/* BmxVideoPlayer */
struct C_000BC520 {
    char pad0[0x24];
    int f24;
    S_000BC590_Owner *f28;
    int f2C;
    S_000BC520_Stream *f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    void func_001577A0(void *a, int b);
    void func_00157A00(int a);
    void func_00157BF0(int a, int b);
    C_000BC520 *func_000BC520(int a, S_000BC590_Owner *owner);
    void func_000BC5D0(int idx, int play);
    void func_000BC680(int a);
    void func_000BC700(int a, int b);
};


int C_000BBDF0::func_000BBDF0(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(*(int *)(*(int *)(in_ECX + 0x284) * 0x1a8 + 0x120 + *(int *)(in_ECX + 0x27c)) +
                 *(int *)(in_ECX + 0x288) * 4) * 0x120 + *(int *)(in_ECX + 0x280);
}

int C_000BBE30::func_000BBE30(int show)
{
    char buf[0x104];
    int idx;

    func_001ADCC0(buf, 0x104, D_0027DB74, f27C->f104, f28C + 1);
    if (D_002A8490->f234 != 1) {
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();
    }
    idx = f150->f484->func_0001B3C0(D_0027DB68);
    if (show != 0) {
        func_000BBA80(idx, buf);
    }
    return idx;
}

int C_000BBE30::func_000BBED0(int show)
{
    char buf[0x104];
    int idx;

    func_001ADCC0(buf, 0x104, D_0027DB8C, f280 + f27C[f284].f120[f288] * 0x120 + 0x104);
    if (D_002A8490->f234 != 1) {
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();
    }
    idx = f150->f484->func_0001B3C0(D_0027DB80);
    if (show != 0) {
        func_000BBA80(idx, buf);
    }
    return idx;
}

void C_000BBE30::func_000BBF90(const char *name)
{
    int i;
    int j;

    if (D_002A8490->f2E0->f324 != 1) {
        f288 = -1;
        for (i = 0; i < f290; i++) {
            if (func_001EA426(name, (const char *)&f27C[i]) == 0) {
                f284 = i;
                f28C = f27C[i].f124;
                for (j = 0; j < f27C[i].f11C; j++) {
                    if (f27C[i].f120[j] == f27C[i].f128) {
                        f288 = j;
                    }
                }
            }
        }
    }
}

extern S_000BBE30_Game *D_002A8490;

S_000BC180_Entry *C_000BC180::cur(void)
{
    if (D_002A8490->f2E0->f324 == 1) {
        return f27c;
    }
    return &f27c[f284];
}

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

undefined4 C_000BC180::func_000BC130(void)
{
    S_000BC180_Entry *e = cur();
    e->f128 = e->f120[f288];
    return f288;
}

undefined4 C_000BC180::func_000BC180(void)
{
    if (D_002A8490->f2E0->f324 == 1) {
        return f27c->f128;
    }
    return f27c[f284].f128;
}

undefined4 C_000BC180::func_000BC1C0(void)
{
    S_000BC180_Entry *e;
    int i;
    f288 = -1;
    if (D_002A8490->f2E0->f324 == 1) {
        e = f27c;
    } else {
        e = &f27c[f284];
    }
    for (i = 0; i < e->f11c; i++) {
        if (e->f120[i] == e->f128) {
            f288 = i;
        }
    }
    return f288;
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

C_000BC520 *C_000BC520::func_000BC520(int a, S_000BC590_Owner *owner)
{
    D_002EFDB8->f30 = 0;
    f24 = 1;
    f28 = owner;
    if (f30 == 0) {
        S_000BC520_Stream *p = (S_000BC520_Stream *)func_001E8A44(0x80);
        f30 = p ? p->func_001D3690(1) : 0;
        if (f30 != 0) {
            func_001577A0(f30, -1);
            f30->func_001D3CC0(0);
            return this;
        }
    }
    return 0;
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

void C_000BC520::func_000BC5D0(int idx, int play)
{
    char buf[0x104];

    func_001ADCC0(buf, 0x104, D_0027DC10, idx);
    func_00030F30(buf, D_0027DC08);
    f40 = 0;
    f30->func_001D3B20(buf);
    f30->func_001D3730(0x14);
    f24 = 0;
    if (f34 == 0) {
        f30->f4C = 0;
    }
    f44 = 1;
    f2C = play;
    if (play != 0) {
        f28->f150->v4();
    }
}

undefined4 C_000BC670::func_000BC670(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0x48);
}

void C_000BC520::func_000BC680(int a)
{
    if (f34 != 0) {
        f30->f4C = 1;
        func_00157A00(a);
        return;
    }
    if (f30->f48 == 0) {
        f30->func_001D37C0();
        f24 = 1;
        if (f2C != 0) {
            f28->f150->v6();
            f2C = 0;
        }
        if (f44 != 0) {
            f40 = 1;
            f44 = 0;
        }
    }
    func_00157A00(a);
}

void C_000BC520::func_000BC700(int a, int b)
{
    if (f38 != 0) {
        if (f30 != 0) {
            f30->func_001D37C0();
            f24 = 1;
            if (f44 != 0) {
                f40 = 1;
                f44 = 0;
            }
        }
        f38 = 0;
    } else if (func_001361E0(4, 2, a, 0x80000000) != 0 || func_001361E0(0x17, 2, a, 0x80000000) != 0) {
        if (f3C != 0) {
            if (f30 != 0) {
                f30->func_001D37C0();
                f24 = 1;
                if (f44 != 0) {
                    f40 = 1;
                    f44 = 0;
                }
            }
            f3C = 0;
        }
    }
    func_00157BF0(a, b);
}

