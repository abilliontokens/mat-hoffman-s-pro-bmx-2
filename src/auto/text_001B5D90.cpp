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

struct S_001B6130_Stream;
struct C_001BBAA0;

struct S_001B6440_Param {
    char pad0[0x3c8];
    int f3c8;
};

struct S_001B64C0_Item {
    char pad0[4];
    void **f4;
    char pad8[4];
    int fc;
};

struct S_001B64C0_List {
    char pad0[0x28];
    S_001B64C0_Item **f28;
};

struct S_001B64C0_Param {
    char pad0[0x3c0];
    S_001B64C0_List *f3c0;
};

extern int D_00169C30;
void func_00169C00(void);

struct C_001B6410 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    int unk10C;
    int unk110;
    int unk114;
    C_001B6410* func_001B6410(void);
    int func_001B6440(S_001B6130_Stream *stream, S_001B6440_Param *param);
    int func_001B64C0(S_001B64C0_Param *param, C_001BBAA0 *obj);
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

extern int D_0028CD44;
extern int D_0028CD34;
extern int D_0028CD2C;
extern int D_00275AD4;
extern int D_002AA9F4;
extern int D_0027CCD8;
extern int D_0028CAB8;
extern int D_0028CAB0;
extern int D_0028CAA8;
extern int D_0028CDD8;
extern float D_00275998;

struct S_001B6130_Stream {
    void func_00168550(void *a, void *b, int c);
    void func_00168C20(void *a, int b, void *c);
    void func_00168C50(void *a, float b, void *c);
    void func_00168BE0(void *a, void *b, void *c, int d);
    void func_00168CB0(void *a, void *b, void *c);
};

void func_00167FE0(void *a, void *b, float x, float y, float z);

struct C_001B6930 {
    char f0[0x10];
    char f10[0x10];
    char f20[0x10];
    char f30[0x10];
    float f40;
    float f44;
    float f48;
    float f4c;
    C_001B6930* func_001B6850(void);
    int func_001B6930(S_001B6130_Stream *stream, int a1);
};

extern int D_002AA9F8;
extern int D_002AA9FC;
extern int D_002AAA00;

/* resource manager held in D_002A829C */
struct S_002A829C {
    int func_001617F0(const char *name, int flag);
};
extern S_002A829C *D_002A829C;

/* object held at +4 of C_001B6570 */
struct S_001B6590_Obj {
    void func_00181DB0(int handle);
    void func_001820B0(void *fn, void *ctx, int handle);
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
    void func_001B6590(const char *name);
};

void func_001E891B(void *p);

struct C_001B69F0 {
    void *vtbl;
    int f4;
    int f8;
    char padc[0xfc];
    void *f108;
    void **f10c;
    void func_001B69F0(void);
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

int C_001B6410::func_001B6440(S_001B6130_Stream *stream, S_001B6440_Param *param)
{
    stream->func_00168C20(&D_0028CD44, 0, &unk10C);
    stream->func_00168C20(&D_0028CD34, 0, &unk110);
    stream->func_00168C20(&D_0028CD2C, 1, &unk114);
    unk10C += param->f3c8;
    stream->func_00168BE0(&D_0028CC30, &D_00275630, &unk8, 0x103);
    return 1;
}

int C_001B6410::func_001B64C0(S_001B64C0_Param *param, C_001BBAA0 *obj)
{
    S_001B64C0_Item *item = param->f3c0->f28[unk10C - 1];
    switch (item->fc) {
    case 0:
    case 1:
    case 2:
    case 8:
    case 9:
    case 0xb:
    case 0xc: {
        void *owner = item->f4[unk110 - 1];
        if (unk114 != 0) {
            obj->func_001BBAA0(owner, (void *)func_00169C00);
            return 1;
        }
        obj->func_001BBAA0(owner, &D_00169C30);
        return 1;
    }
    case 3:
        return 1;
    case 4:
        return 1;
    case 5:
        return 1;
    case 6:
        return 1;
    case 7:
        return 1;
    case 0xa:
        return 1;
    }
    return 1;
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

void C_001B6570::func_001B6590(const char *name)
{
    int handle = -1;
    if (*name != 0) {
        handle = D_002A829C->func_001617F0(name, 1);
    }
    ((S_001B6590_Obj *)f4)->func_00181DB0(handle);
    ((S_001B6590_Obj *)f4)->func_001820B0((void *)func_001B6560, this, handle);
}

void C_001B65D0::func_001B65D0(void) {
    unk0 = 1;
}

void C_001B65E0::func_001B65E0(void) {
    unk0 = 0;
}

int C_001B6930::func_001B6930(S_001B6130_Stream *stream, int a1)
{
    stream->func_00168CB0(&D_00275AD4, &D_002AA9F4, this);
    stream->func_00168CB0(&D_0027CCD8, &D_002AA9F4, f10);
    stream->func_00168C50(&D_0028CAB8, 0, &f40);
    stream->func_00168C50(&D_0028CAB0, 0, &f44);
    stream->func_00168C50(&D_0028CAA8, 0, &f48);
    func_00167FE0(f20, f30, f40 * 0.0174532905f, f44 * 0.0174532905f, f48 * 0.0174532905f);
    stream->func_00168C50(&D_0028CDD8, 0, &f4c);
    return 1;
}

void C_001B69F0::func_001B69F0(void) {
    extern int D_0028CDE4;
    int i;

    vtbl = &D_0028CDE4;
    if (f108 != 0) {
        func_001E891B(f108);
        f108 = 0;
    }
    if (f10c != 0) {
        for (i = 0; i < f8; i++) {
            if (f10c[i] != 0) {
                func_001E891B(f10c[i]);
                f10c[i] = 0;
            }
        }
        func_001E891B(f10c);
    }
}

