/* 22 functions from 0x001B5D90 to 0x001B6A70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001B61A0 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    char unk10C;
    char pad10D[0x103];
    int unk210;
    int unk214;
    int unk218;
    int unk21C;
    int unk220;
    C_001B61A0* func_001B61A0(void);
};

struct C_001B6100 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    char unk10C;
    char pad10D[0x77];
    char unk184;
    char pad185[0x103];
    int unk288;
    int unk28C;
    C_001B6100* func_001B6100(void);
};

struct C_001B6410 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    int unk10C;
    int unk110;
    int unk114;
    C_001B6410* func_001B6410(void);
};

struct C_001B5EA0 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    int unk10C;
    char unk110;
    C_001B5EA0* func_001B5EA0(void);
};

struct C_001B65E0 {
    int unk0;
    void func_001B65E0(void);
};

struct C_001B65D0 {
    int unk0;
    void func_001B65D0(void);
};

extern int D_00275630;
extern int D_0027C4D0;
extern int D_0028CCBC;
extern int D_0027B0AC;
extern int D_0028CC30;
extern int D_0028B7F4;
extern int D_0028B80C;
extern int D_0028CCD4;
extern int D_0027CB60;
extern int D_0027CB54;
extern int D_00182890;

struct S_001B6130_Stream {
    void func_00168550(void *a, void *b, int c);
    void func_00168C20(void *a, int b, void *c);
    void func_00168C50(void *a, float b, void *c);
    void func_00168BE0(void *a, void *b, void *c, int d);
};

struct C_001B6130 {
    char pad0[0x8];
    char f8[0x104];
    char f10c[0x78];
    char f184[0x108];
    int f28c;
    int func_001B6130(S_001B6130_Stream *stream, int a1);
};

struct VT_001B6280 {
    char pad0[0x174];
    void (__fastcall *f174)(void *self);
    void (__fastcall *f178)(void *self);
};

struct S_001B6280_Sound {
    int func_001CFE90(int a, void *b, int c, int d, int e, int f);
};

struct S_001B6280_Mid {
    char pad0[0xb4];
    S_001B6280_Sound *fb4;
};

struct S_001B6280_Root {
    char pad0[0x4];
    S_001B6280_Mid *f4;
};

struct S_001B6280_Param {
    VT_001B6280 *vtbl;
    char pad4[0x4bc];
    int f4c0;
};

struct C_001BBAA0 {
    void func_001BBAA0(void *owner, void *fn);
};

extern S_001B6280_Root *D_002A8490;

struct C_001B61E0 {
    char pad0[0x8];
    char f8[0x104];
    char f10c[0x104];
    int f210;
    int f214;
    int f218;
    int f21c;
    int f220;
    int func_001B61E0(S_001B6130_Stream *stream, int a1);
    int func_001B6280(S_001B6280_Param *param, C_001BBAA0 *obj);
};

struct C_001B6570 {
    int f0;
    int f4;
    C_001B6570 *func_001B6570(int a0, int a1);
};


C_001B5EA0* C_001B5EA0::func_001B5EA0(void) {
    extern int D_0028CC9C;
    unk4 = 0;
    unk8 = 0;
    unk0 = (int)&D_0028CC9C;
    unk10C = -1;
    unk110 = 0;
    return this;
}

C_001B6100* C_001B6100::func_001B6100(void) {
    extern int D_0028CCB4;
    unk4 = 0;
    unk8 = 0;
    unk0 = (int)&D_0028CCB4;
    unk10C = 0;
    unk184 = 0;
    unk28C = 1;
    unk288 = 0;
    return this;
}

int C_001B6130::func_001B6130(S_001B6130_Stream *stream, int a1)
{
    stream->func_00168550(&D_0027C4D0, f10c, 0x77);
    stream->func_00168550(&D_0028CCBC, f184, 0x103);
    stream->func_00168C20(&D_0027B0AC, 1, &f28c);
    stream->func_00168BE0(&D_0028CC30, &D_00275630, f8, 0x103);
    return 1;
}

C_001B61A0* C_001B61A0::func_001B61A0(void) {
    extern int D_0028CCCC;
    unk4 = 0;
    unk8 = 0;
    unk0 = (int)&D_0028CCCC;
    unk10C = 0;
    unk214 = 0;
    unk210 = 0;
    unk218 = 0;
    unk21C = 0;
    unk220 = 0;
    return this;
}

int C_001B61E0::func_001B61E0(S_001B6130_Stream *stream, int a1)
{
    stream->func_00168550(&D_0028B7F4, f10c, 0x103);
    stream->func_00168C20(&D_0028B80C, 0, &f214);
    stream->func_00168C20(&D_0028CCD4, 0, &f218);
    stream->func_00168C50(&D_0027CB60, 10.0f, &f21c);
    stream->func_00168C50(&D_0027CB54, 50.0f, &f220);
    stream->func_00168BE0(&D_0028CC30, &D_00275630, f8, 0x103);
    return 1;
}

int C_001B61E0::func_001B6280(S_001B6280_Param *param, C_001BBAA0 *obj)
{
    if (f218 != 0) {
        param->vtbl->f174(param);
    } else {
        param->vtbl->f178(param);
    }
    f210 = D_002A8490->f4->fb4->func_001CFE90(param->f4c0, f10c, 1, 1, 0, 0);
    if (obj != 0) {
        obj->func_001BBAA0(this, &D_00182890);
    }
    return 1;
}

C_001B6410* C_001B6410::func_001B6410(void) {
    extern int D_0028CD24;
    unk4 = 0;
    unk8 = 0;
    unk0 = (int)&D_0028CD24;
    unk10C = 0;
    unk110 = 0;
    unk114 = 0;
    return this;
}

undefined4 func_001B6560(undefined4 *param_1)
{
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *param_1;
}

C_001B6570 *C_001B6570::func_001B6570(int a0, int a1)
{
    if (a0 != 0) {
        f0 = a1;
        f4 = a0;
    }
    return this;
}

void C_001B65D0::func_001B65D0(void) {
    unk0 = 1;
}

void C_001B65E0::func_001B65E0(void) {
    unk0 = 0;
}

