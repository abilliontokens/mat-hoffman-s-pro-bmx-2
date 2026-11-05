/* 17 functions from 0x001AED80 to 0x001AFCC0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
#include <math.h>
struct C_001446B0 {
    void func_001446B0(int a, int b, int c);
};
struct C_001D54F0 {
    void func_001D54F0(void);
};
struct C_00157960 {
    int func_00157960(void);
};
struct S_001AED80_Sub {
    char pad0[4];
    C_001446B0 *f4;
    char pad8[0x24];
    int f2C;
    int f30;
    int f34;
    int f38;
    float f3C;
    float f40;
    char pad44[0x10];
    unsigned int f54;
    unsigned int f58;
    unsigned int f5C;
    unsigned int f60;
    unsigned char f64;
};
struct C_001AED80 {
    void *vtbl;
    char pad4[0x28];
    float f2C;
    float f30;
    char pad34[0x1C];
    int f50;
    S_001AED80_Sub *f54;
    char pad58[0x10];
    float f68;
    int f6C;
    int f70;
    int f74;
    int f78;
    float f7C;
    float f80;
    unsigned char f84;
    int func_001AED80(void);
};
extern int D_002F00D0;
extern float D_002755E8, D_00279B54, D_00275460, D_002AA3F8, D_00276E9C, D_0027A060, D_00284758;
struct C_002A8490 { char pad[0x244]; float f244; };
extern char D_002A60B0[];
extern char D_002A60AF[];
extern char D_00284644[];
extern char *func_001E8AC0(const char *, int);
struct C_001AF120 {
    int f0;
    int f4;
    int func_001AF120(const char *name, int arg);
};
struct S_001AF360_Stream {
    void func_00168C50(const void *name, int val, void *p);
    void func_00168C20(const void *name, int val, void *p);
};
extern char D_0028C428[], D_0028C40C[], D_0028C3F8[], D_0028C3DC[], D_0028C3C0[];
extern char D_0028C3A4[], D_0028C384[], D_0028C36C[], D_0028C34C[], D_0028C32C[];
extern "C" void func_001ADCC0(char *buf, int n, const char *fmt, int idx);
struct C_001AF360 {
    float f0;
    unsigned char f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    C_001AF360 *func_001AF360(S_001AF360_Stream *stream, int owner, int idx);
};
struct S_001AF530_Anim { int pad[0x18 / 4]; int len; };
struct S_001AF530_Entry { int pad; S_001AF530_Anim *anim; int pad2[2]; };
struct S_001AF530_Tbl { char pad[0x14]; S_001AF530_Entry *arr; };
struct S_001AF530_Owner { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual int v7(int a); };
struct S_001AF530_Time { char pad[0x238]; unsigned int t; };
extern float D_00275544, D_002755E4, D_00276098;
extern S_001AF530_Tbl *D_002AA6C0;
extern S_001AF530_Time *D_002A8490;
extern "C" float func_001E9092(float a, float b);
struct C_001AF530 {
    float f0;
    unsigned char f4;
    int f8;
    float fC;
    unsigned int f10;
    S_001AF530_Owner *f14;
    void func_001AF530(int a);
};
struct C_001AF090 {
    undefined4 func_001AF090(byte param_1);
};

struct C_001AF0B0 {
    int unk0;
    int unk4;
    int unk8;
    C_001AF0B0* func_001AF0B0(void);
};

struct C_001AF320 {
    int unk0;
    void func_001AF320(void);
};

struct C_001AF330 {
    int unk0;
    void *func_001AF330(int flags);
};

struct C_001AF300 {
    void *vtbl;
    void *func_001AF300(int a0);
    void func_00157600(int a0);
};

struct C_001AF0D0 {
    void *vtbl;
    int f4;
    int f8;
    void func_001AF0D0();
};

struct C_0013B210 {
    void func_0013C8A0(int a0, void *a1, int a2, int a3);
};

extern C_0013B210 *D_002BEAAC;

struct C_001AF100 {
    char pad0[4];
    int func_001AF100(int a0, int a1, int a2, int a3);
};

struct C_002A829C_Sel {
    char pad0[0xc];
    int fC;
};

struct C_002A829C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a0, int a1);
    char pad4[0x10];
    C_002A829C_Sel *arr;
    int func_001617F0(const char *name, int flag);
    int func_00161850(int a0);
    void func_001B26C0(int a0);
};

extern C_002A829C *D_002A829C;

struct C_001AF250 {
    char pad0[4];
    int f4;
    int func_001AF250(int a0, int a1);
};

struct C_001AF2B0 {
    void *vtbl;
    int f4;
    int f8;
    void *func_001AF2B0(int flags);
};

struct C_001AF710 {
    int unk0;
    char pad4[8];
    int arr[4];
    void func_001AF710(void);
};

struct C_001AFB00 {
    float f0, f4, f8, fC, f10, f14, f18, f1C, f20, f24, f28, f2C;
    int f30;
    int f34;
    unsigned char f38;
    int func_001AFB00(void);
    void func_001AFB60(float *a, float *b, float *c);
};


undefined4 C_001AF090::func_001AF090(byte param_1)
{
  int func_001AE810(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001AE810();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001AF0B0* C_001AF0B0::func_001AF0B0(void) {
    extern int D_0028C290;
    unk0 = (int)&D_0028C290;
    unk4 = -1;
    unk8 = 0;
    return this;
}

void C_001AF0D0::func_001AF0D0()
{
    extern int D_0028C290;
    int func_001E891B(...);
    vtbl = (void *)&D_0028C290;
    if (f4 >= 0) {
        D_002A829C->func_001B26C0(f4);
    }
    if (f8) {
        func_001E891B(f8);
    }
}

int C_001AF100::func_001AF100(int a0, int a1, int a2, int a3)
{
    D_002BEAAC->func_0013C8A0(a0, (char *)this + 4, 4, 1);
    return 1;
}

int C_001AF120::func_001AF120(const char *name, int arg)
{
    char path[260];
    if (D_002A60B0[0]) {
        int i = 0;
        do { path[i] = D_002A60B0[i]; } while (D_002A60B0[i++]);
        if (D_002A60AF[strlen(D_002A60B0)] != '\\')
            strcat(path, "\\");
        strcat(path, name);
    } else {
        strcpy(path, name);
    }
    char *dot = func_001E8AC0(path, '.');
    if (dot) memset(dot, 0, strlen(dot));
    f4 = D_002A829C->func_001617F0(path, 1);
    D_002A829C->v6(f4, arg);
    return 1;
}

int C_001AF250::func_001AF250(int a0, int a1)
{
    if (f4 == a0) {
        f4 = a1;
        int v = D_002A829C->func_00161850(a0);
        D_002A829C->v6(a1, v);
        if (D_002A829C->arr[a0].fC != 0) {
            D_002A829C->func_001B26C0(a0);
        }
    }
    return f4;
}

void *C_001AF2B0::func_001AF2B0(int flags)
{
    extern int D_0028C290;
    int func_001E891B(...);
    vtbl = (void *)&D_0028C290;
    if (f4 >= 0) {
        D_002A829C->func_001B26C0(f4);
    }
    if (f8) {
        func_001E891B(f8);
    }
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}

void *C_001AF300::func_001AF300(int a0)
{
    extern int D_0028C2AC;
    func_00157600(a0);
    vtbl = (void *)&D_0028C2AC;
    return this;
}

void C_001AF320::func_001AF320(void) {
    extern int D_0028C2AC;
    int func_00157660(...);
    unk0 = (int)&D_0028C2AC;
    func_00157660();
}

void *C_001AF330::func_001AF330(int flags)
{
    extern int D_0028C2AC;
    int func_00157660(...);
    int func_001E891B(...);
    unk0 = (int)&D_0028C2AC;
    func_00157660();
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}

C_001AF360 *C_001AF360::func_001AF360(S_001AF360_Stream *stream, int owner, int idx)
{
    char buf[0x80];
    int a, b;
    f14 = owner;
    idx++;
    f4 = 0;
    f10 = -1;
    fC = 0;
    f0 = 1.0f;
    a = 1;
    b = 0;
    f8 = -1;
    if (idx == 1) {
        stream->func_00168C50(D_0028C428, 0, &fC);
        stream->func_00168C50(D_0028C40C, *(int *)&f0, &f0);
        stream->func_00168C20(D_0028C3F8, a, &a);
        stream->func_00168C20(D_0028C3DC, b, &b);
        stream->func_00168C20(D_0028C3C0, f8, &f8);
    }
    func_001ADCC0(buf, 0x80, D_0028C3A4, idx);
    stream->func_00168C50(buf, fC, &fC);
    func_001ADCC0(buf, 0x80, D_0028C384, idx);
    stream->func_00168C50(buf, *(int *)&f0, &f0);
    func_001ADCC0(buf, 0x80, D_0028C36C, idx);
    stream->func_00168C20(buf, a, &a);
    func_001ADCC0(buf, 0x80, D_0028C34C, idx);
    stream->func_00168C20(buf, b, &b);
    func_001ADCC0(buf, 0x80, D_0028C32C, idx);
    stream->func_00168C20(buf, f8, &f8);
    f4 = ((a & 1) << 1) | (f4 & 0xfc) | (b & 1);
    f18 = 0;
    return this;
}

void C_001AF710::func_001AF710(void)
{
    extern int D_0028C444;
    int func_001E891B(...);
    int i;

    unk0 = (int)&D_0028C444;
    for (i = 0; i < 4; i++) {
        if (arr[i] != 0) {
            func_001E891B(arr[i]);
        }
    }
}

int C_001AFB00::func_001AFB00(void)
{
    unsigned char f = f38;
    int v;

    if (f & 4) {
        v = f30 - 1;
    } else {
        v = f30 + 1;
    }
    f30 = v;
    if ((f & 2) == 0) {
        return f30;
    }
    if (f & 1) {
        if (v > 0) {
            if (v >= f34) {
                f38 = f | 4;
                f30 = f34 - 2;
                return f34 - 2;
            }
        } else {
            f38 = f & 0xfb;
        }
    } else if (f30 >= f34) {
        f30 = 0;
    }
    return f30;
}

