/* 19 functions from 0x001867D0 to 0x00187670, found by Ghidra. */
#include "common.h"
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

struct C_001867D0 {
    void func_001867D0();
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
    return limit > len ? len : limit;
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

struct C_00187370 {
    virtual void func_00187390(void *a);
    int f4;
    int f8;
    void func_00187400(void *a);
};

struct C_00187510 {
    char pad0[0x24];
    int f24;
    C_00187370 *f28;
    int func_00187510(C_00187510Param *param);
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
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);

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
    C_00186B90 *self;
    int limit;
    int count;
    self = this;
    ((C_001867D0 *)self)->func_001867D0();
    self->vtbl = (void *)&D_00289A28;
    limit = sizeof(f168) - 1;
    if (limit > strlen("body")) {
        count = strlen("body");
    } else {
        count = limit;
    }
    func_001E8920(self->f168, (const char *)&D_00289A1C, count);
    self->f168[count] = 0;
    self->f370 = 0;
    return self;
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
    C_00186C70 * volatile self = this;
    volatile int limit;
    int n;

    ((C_001867D0 *)this)->func_001867D0();
    self->vtbl = (void *)&D_00289A60;
    limit = sizeof(f168) - 1;
    n = clamp_len_00186C70(limit, 4);
    func_001E8920(self->f168, (const char *)&D_00289A1C, n);
    self->f168[n] = 0;
    return self;
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
