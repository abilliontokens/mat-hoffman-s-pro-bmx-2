/* 19 functions from 0x001867D0 to 0x00187670, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
extern int D_002764F0, D_0027B168, D_00275AD4, D_00287DA0;
extern int D_0028998C, D_00289978, D_00289970, D_0027A20C;
extern int D_00289960, D_00289948, D_0027CB54, D_0027CB60, D_0028993C, D_00289930;
struct Stream_00186960 {
 int func_00168BE0(void *, void *, void *, int);
 int func_00168CB0(void *, void *, void *);
 int func_00168C20(void *, int, void *);
 int func_00168C50(void *, int, void *);
};
struct BasicSoundTempData {
 char pad0[4]; char f4[0x104]; char f108[0x10];
 int f118, f11C, f120, f124, f128, f12C, f130, f134, f138;
 char pad13C[0xC]; int f148, f14C; char pad150[0x10]; int f160, f164;
 int func_00186960(Stream_00186960 *);
};
struct C_00186EF0 {
    int unk0;
    char unk4;
    char pad5[0x103];
    int unk108;
    int unk10C;
    int unk110;
    C_00186EF0* func_00186EF0(void);
};


extern int D_00289B5C;
extern int D_00289998;
extern int D_00289A08;
extern int D_002899F4;
extern int D_002899E0;
extern int D_002899CC;
extern int D_002899B0;
extern int D_0028999C;
extern int D_00289A28;
extern int D_00289A1C;

extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);

struct C_00157600 {
    void func_00157600(void *param);
};

struct S16_1A;

/* BasicSoundTempData */
struct C_001867D0 {
    void *vtbl;
    char f4[0x104];
    int f108[4];
    int f118, f11C, f120, f124, f128, f12C, f130, f134, f138;
    int f13C[9];
    int f160;
    C_001867D0 *func_001867D0();
};

extern int D_0028992C;
extern int D_002764F0;
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern int D_00289A7C;
struct C_00186D60 {
    void *vtbl;
    int f4;
    int f8;
    C_00186D60 *func_00186D60(void);
};

struct C_00187640 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_00187640 *func_00187640(void *param);
};

struct C_00186AB0 {
    void *vtbl;
    char pad4[0x164];
    int f168;
    int f16c;
    int f170;
    int f174;
    int f178;
    int f17c;
    C_00186AB0 *func_00186AB0();
};

struct C_00186AF0Param {
    int func_00168BE0(void *a, void *b, void *c, int d);
    int func_00168C20(void *a, int b, void *c);
    int func_00168C50(void *a, int b, void *c);
};

extern int D_00289A4C;
extern int D_00289A3C;
extern int D_00289A2C;
extern int D_00275630;
extern int D_00289A60;

struct C_00186C00 {
    char pad0[0x168];
    char f168[0x104];
    char f26C[0x104];
    int f370;
    int func_00186960(void *param);
    int func_00186C00(C_00186AF0Param *param);
    int func_00186CE0(C_00186AF0Param *param);
};

struct SoundObj_00186F50 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(int a0);
};

struct C_001CFE90 {
    int func_001CFE90(int a1, int a2, int a3, int a4, int a5, int a6);
};

struct Sub_00186F50 {
    char pad0[0x5C];
    int f5C;
    char pad60[0xb4 - 0x60];
    C_001CFE90 *fb4;
};

struct Game_00186F50 {
    int f0;
    Sub_00186F50 *f4;
};

extern Game_00186F50 *D_002A8490;

struct C_00186F50 {
    char pad0[0x110];
    SoundObj_00186F50 *f110;
    int func_00186F50(void);
};

struct C_00186C70 {
    void *vtbl;
    char pad4[0x164];
    char f168[0x104];
    C_00186C70 *func_00186C70(void);
};

static __forceinline int clamp_len_00186C70(int limit, int len)
{
    return len < limit ? len : limit;
}

template <class T>
static __forceinline const T &min_ref_00186C70(const T &a, const T &b)
{
    return b < a ? b : a;
}

struct C_00186AF0 {
    char pad0[0x168];
    int f168;
    int f16c;
    int f170;
    int f174;
    int f178;
    int f17c;
    int func_00186960(void *param);
    int func_00186AF0(C_00186AF0Param *param);
};

struct C_00186B90 {
    void *vtbl;
    char pad4[0x164];
    char f168[0x104];
    char pad26c[0x104];
    int f370;
    C_00186B90 *func_00186B90();
};

struct C_00187510Param {
    int func_00169710(void *a);
    int func_00168C20(void *a, int b, void *c);
};

struct S16_1A {
    int a;
    int b;
    int c;
    int d;
};

struct S36_1A {
    int f[9];
};

/* callees of C_00187370::func_00187400, one class per original file layout */
struct C_001A2210 {
    C_001A2210 *func_001A2210(int a0, int a1, unsigned short a2, int a3);
};

struct C_001A2250 {
    C_001A2250 *func_001A2250(int a0, S36_1A s0, S16_1A s1, S16_1A s2, int a18, int a19, int a20, int a21, int a22);
};

struct C_001A22E0 {
    void func_001A22E0(int a0);
};

/* heap-owned description block of a C_00187370 entry (freed in func_00187400) */
struct S_00187400_Desc {
    char pad0[4];
    char f4[0x104];
    S16_1A f108;
    char pad118[8];
    int f120;
    char pad124[8];
    int f12C;
    char pad130[4];
    int f134;
    int f138;
    S36_1A f13C;
    unsigned short f160;
    char pad162[6];
    int f168;
};

struct C_00187370 {
    virtual void func_00187390(void *a);
    int f4;
    S_00187400_Desc *f8;
    int func_00187400(void *a);
};

struct C_00187510 {
    char pad0[0x24];
    int f24;
    C_00187370 *f28;
    int func_00187510(C_00187510Param *param);
};

extern int D_00289AA4;
struct C_00187000 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    C_00187000 *func_00187000(void);
};

extern int D_00289A6C;
extern int D_00284AB0;
extern int D_00276844;
extern int D_00289A8C;

struct C_00186D20 {
    char pad0[0x168];
    int f168;
    int func_00186960(void *param);
    int func_00186D20(C_00186AF0Param *param);
};

struct C_00186F10 {
    char pad0[0x4];
    char f4[0x10c];
    int f110;
    int func_00186F10(int a);
};

struct C_00186F80 {
    int unk0;
    char f4[0x104];
    int f108;
    int func_00186F80(C_00186AF0Param *stream, int n);
};

struct C_001875F0 {
    char pad0[0x24];
    int f24;
    C_00187370 *f28;
    void func_001577A0(void *p, int n);
    int func_001875F0(void *param);
};

extern int D_0027AEE4;
extern int D_00289B40;
extern int D_00289B30;
extern int D_00187370;

void *func_001E8A44(int size);
void func_001E891B(void *p);
extern S16_1A D_002A90B4;
extern int D_002A90B8, D_002A90BC, D_002A90C0;
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);

C_001867D0 *C_001867D0::func_001867D0()
{
    int *p;
    int lim;
    int n;

    vtbl = (void *)&D_0028992C;
    p = this->f108;
    p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
    lim = sizeof(f4)-1;
    n = AsmMinI(lim, (int)strlen("none"));
    func_001E8920(this->f4,(const char *)&D_002764F0,n);
    this->f4[n]=0;
    *(S16_1A *)this->f108=D_002A90B4;
    ((volatile C_001867D0 *)this)->f118=0;
    ((volatile C_001867D0 *)this)->f11C=0;
    ((volatile C_001867D0 *)this)->f120=0;
    ((volatile C_001867D0 *)this)->f124=0;
    ((volatile C_001867D0 *)this)->f128=0;
    ((volatile C_001867D0 *)this)->f12C=0;
    ((volatile C_001867D0 *)this)->f130=0;
    ((volatile C_001867D0 *)this)->f134=0;
    ((volatile C_001867D0 *)this)->f138=0;
    memset(this->f13C,0,sizeof(this->f13C));
    ((volatile C_001867D0 *)this)->f13C[0]=0x168;
    ((volatile C_001867D0 *)this)->f13C[1]=0x168;
    ((volatile C_001867D0 *)this)->f13C[2]=0x0;
    ((volatile C_001867D0 *)this)->f13C[3]=0x3f800000;
    ((volatile C_001867D0 *)this)->f13C[4]=0x4e6e6b28;
    ((volatile C_001867D0 *)this)->f13C[5]=0x0;
    ((volatile C_001867D0 *)this)->f13C[6]=0x3e9c0ebf;
    ((volatile C_001867D0 *)this)->f13C[7]=0x3f800000;
    ((volatile C_001867D0 *)this)->f13C[8]=0x3f800000;
    ((volatile C_001867D0 *)this)->f160=10; return this;
}

int BasicSoundTempData::func_00186960(Stream_00186960 *stream)
{
 if (!stream->func_00168BE0(&D_0027B168, &D_002764F0, f4, -1)) return 0;
 stream->func_00168CB0(&D_00275AD4, &D_002A90B4, f108);
 stream->func_00168C20(&D_00287DA0, 0, &f120);
 stream->func_00168C20(&D_0028998C, 0, &f124);
 stream->func_00168C20(&D_00289978, 0, &f128);
 stream->func_00168C20(&D_00289970, 0, &f12C);
 stream->func_00168C20(&D_0027A20C, 0, &f130);
 stream->func_00168C50(&D_00289960, 0x41a00000, &f134);
 stream->func_00168C50(&D_00289948, 0x42c80000, &f138);
 stream->func_00168C50(&D_0027CB54, 0, &f118);
 stream->func_00168C50(&D_0027CB60, 0, &f11C);
 stream->func_00168C20(&D_0028993C, 10, &f160);
 stream->func_00168C20(&D_00289930, 0, &f164);
 f148 = f11C;
 f14C = f118;
 return 1;
}

C_00186AB0 *C_00186AB0::func_00186AB0()
{
    ((C_001867D0 *)this)->func_001867D0();
    f168 = 0;
    f16c = 0;
    f170 = 0;
    f174 = 0;
    f178 = 0;
    f17c = 0;
    vtbl = (void *)&D_00289998;
    return this;
}

int C_00186AF0::func_00186AF0(C_00186AF0Param *param)
{
    if (func_00186960(param) == 0) {
        return 0;
    }
    param->func_00168C20((void *)&D_00289A08, 0, &f168);
    param->func_00168C20((void *)&D_002899F4, 0, &f16c);
    param->func_00168C20((void *)&D_002899E0, 0, &f170);
    param->func_00168C20((void *)&D_002899CC, 0, &f174);
    param->func_00168C20((void *)&D_002899B0, 0, &f178);
    param->func_00168C50((void *)&D_0028999C, 0, &f17c);
    return 1;
}

C_00186B90 *C_00186B90::func_00186B90()
{
    ((C_001867D0 *)this)->func_001867D0();
    vtbl = (void *)&D_00289A28;
    int limit = sizeof(f168) - 1;
    int count = AsmMinI(limit, strlen("body"));
    func_001E8920(f168, (const char *)&D_00289A1C, count);
    f168[count] = 0;
    f370 = 0;
    return this;
}

int C_00186C00::func_00186C00(C_00186AF0Param *param)
{
    if (func_00186960(param) == 0) {
        return 0;
    }
    param->func_00168BE0((void *)&D_00289A4C, (void *)&D_00289A1C, f168, -1);
    param->func_00168C20((void *)&D_00289A3C, 0, &f370);
    param->func_00168BE0((void *)&D_00289A2C, (void *)&D_00275630, f26C, -1);
    return 1;
}

C_00186C70 *C_00186C70::func_00186C70(void)
{
    ((C_001867D0 *)this)->func_001867D0();
    vtbl = (void *)&D_00289A60;
    int limit = sizeof(f168) - 1;
    int count = AsmMinI(limit, strlen("body"));
    func_001E8920(f168, (const char *)&D_00289A1C, count);
    f168[count] = 0;
    return this;
}

int C_00186C00::func_00186CE0(C_00186AF0Param *param)
{
    if (func_00186960(param) == 0) {
        return 0;
    }
    param->func_00168BE0((void *)&D_00289A4C, (void *)&D_00289A1C, f168, -1);
    return 1;
}

int C_00186D20::func_00186D20(C_00186AF0Param *param)
{
    if (func_00186960(param) == 0) {
        return 0;
    }
    param->func_00168C50((void *)&D_00289A6C, 0, &f168);
    return 1;
}

C_00186D60 *C_00186D60::func_00186D60(void)
{
    vtbl = (void *)&D_00289A7C;
    f4 = 0;
    f8 = 0;
    return this;
}

C_00186EF0* C_00186EF0::func_00186EF0(void) {
    extern int D_00289A88;
    unk0 = (int)&D_00289A88;
    unk110 = 0;
    unk108 = 0;
    unk4 = 0;
    unk10C = 0;
    return this;
}

int C_00186F10::func_00186F10(int a)
{
    f110 = D_002A8490->f4->fb4->func_001CFE90(a, (int)this + 4, 1, 1, 0, 0);
    return 1;
}

int C_00186F50::func_00186F50(void)
{
    SoundObj_00186F50 *p = f110;

    if (p != 0 && D_002A8490->f4->f5C != 0) {
        return p->v5(2);
    }
    return 0;
}

int C_00186F80::func_00186F80(C_00186AF0Param *stream, int n)
{
    char buf[0x3c];

    func_001ADCC0(buf, 0x3c, (const char *)&D_00284AB0, n + 1);
    stream->func_00168BE0(buf, (void *)&D_00276844, f4, -1);
    func_001ADCC0(buf, 0x3c, (const char *)&D_00289A8C, n + 1);
    stream->func_00168C50(buf, 0, &f108);
    return 1;
}

C_00187000 *C_00187000::func_00187000(void)
{
    vtbl = (void *)&D_00289AA4;
    f4 = 0;
    fC = 0;
    f8 = 0;
    return this;
}

int C_00187370::func_00187400(void *a)
{
    int mode = 2;
    C_001A2210 *mem;
    C_001A2210 *obj;

    if (f8->f120 != 0) {
        mode = 10;
    }
    mem = (C_001A2210 *)func_001E8A44(0x1c8);
    if (mem != 0) {
        obj = mem->func_001A2210((int)D_002A8490->f4, (int)a, f8->f160, 1);
    } else {
        obj = 0;
    }
    f4 = (int)obj;
    ((C_001A2250 *)f4)->func_001A2250((int)f8->f4, f8->f13C, f8->f108, D_002A90B4, mode, f8->f134, f8->f138, 0, f8->f12C);
    ((C_001A22E0 *)f4)->func_001A22E0(f8->f168);
    func_001E891B(f8);
    f8 = 0;
    return 1;
}

int C_00187510::func_00187510(C_00187510Param *param)
{
    char buf[0x104];
    int i;
    int n;
    C_00187370 *p;

    param->func_00169710((void *)&D_0027AEE4);
    param->func_00168C20((void *)&D_00289B40, 0, &f24);
    n = f24;
    if (n == 0)
        return 0;
    p = (C_00187370 *)func_001E8A44(n * 0xc);
    if (p != 0) {
        func_00011FF0(p, 0xc, n, (void *)&D_00187370);
    } else {
        p = 0;
    }
    f28 = p;
    for (i = 0; i < f24; i++) {
        func_001ADCC0(buf, 0x104, (const char *)&D_00289B30, i + 1);
        param->func_00169710(buf);
        f28[i].func_00187390(param);
    }
    return 1;
}

int C_001875F0::func_001875F0(void *param)
{
    int i;

    for (i = 0; i < f24; i++) {
        f28[i].func_00187400(param);
        func_001577A0((void *)f28[i].f4, 2);
    }
    return 1;
}

C_00187640 *C_00187640::func_00187640(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_00289B5C;
    return this;
}
