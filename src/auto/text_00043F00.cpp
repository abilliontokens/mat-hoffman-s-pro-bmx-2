/* 1 function from 0x00043F00 to 0x000448D0, found by Ghidra. */
#include "common.h"
struct V4_43 { float x, y, z, w; };
struct Obj8_43 {
    void func_00197E70(V4_43 *out);
    void func_00197B40(V4_43 *a, V4_43 *b);
    void func_00199600(V4_43 v);
    void func_0019AC50();
    void func_001824E0(V4_43 *out, float a, float b, float c);
    void func_00199B00(V4_43 *out, int a);
};
struct Obj564_43 {
    int f0; char pad4[4]; Obj8_43 *f8; Obj8_43 *fC;
    void *f10; int f14; int *f18;
};
struct Obj53C_43 { void func_001A4100(int, int, int); };
struct Obj568_43 { void func_00133EF0(V4_43 *v); };
struct Ctx530_43 { void func_0015A250(int); };
struct Ctx43 {
    char pad0[0x530]; Ctx530_43 *f530;
    char pad534[0x5A4 - 0x534]; struct Ctx5A4_43 *f5A4; int f5A8; int *f5AC;
};
struct GlobEF_43 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int);
    virtual void v8();
};
extern GlobEF_43 *D_002EFDB8;
extern float D_0027701C;
extern float D_00275F64;
extern float D_00275548;
extern V4_43 D_002A14D4;
extern char D_00276F78[];
extern char D_00276F9C[];
void func_000265C0(void *, void *, void *, void *, int, int);
int func_001E8AF0(char *, char *);
void func_001ADCC0(int, int, char *, int);
struct C_00043F00 {
    char pad0[0x64]; Ctx43 *f64;
    char pad68[0x288 - 0x68]; unsigned char f288; char pad289[3];
    int f28C; int f290; V4_43 f294; V4_43 f2A4; V4_43 f2B4;
    char pad2C4[0x440 - 0x2C4]; float f440;
    char pad444[0x48C - 0x444]; int f48C;
    char pad490[0x4CC - 0x490]; V4_43 f4CC; char pad4DC[0x51C - 0x4DC]; V4_43 f51C;
    char pad52C[0x53C - 0x52C]; Obj53C_43 *f53C;
    char pad540[0x564 - 0x540]; Obj564_43 *f564; Obj568_43 *f568; Obj568_43 *f56C; Obj568_43 *f570;
    char pad574[0x5A0 - 0x574]; int f5A0;
    int func_00043F00(int arg);
    int func_00041560();
    int func_000395A0(V4_43 v);
    int func_000392B0();
};
