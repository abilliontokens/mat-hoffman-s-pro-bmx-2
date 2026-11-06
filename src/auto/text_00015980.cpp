/* 1 function from 0x00015980 to 0x00016CF0, found by Ghidra. */
#include "common.h"

typedef struct { float x, y, z, w; } Vec4_15980;

struct S_15980_Sub {
    char pad0[0xbc];
    int fbc;
};

struct S_15980_Sub2 {
    char pad0[4];
    int f4;
};

struct S_15980_Elem {
    char pad0[0x230];
    void *f230;
    char pad234[0x600];
    Vec4_15980 v834;
    char pad844[0x10c];
    S_15980_Sub *f950;
    char pad954[0xac];
    S_15980_Sub2 *fa00;
    char pada04[0x790];
    void *f1194;
};

struct S_15980_World {
    char pad0[0x4e0];
    S_15980_Elem **f4e0;
};

struct S_15980_State {
    char pad0[0x1c8];
    int f1c8;
};

struct S_15980_Mgr {
    char pad0[0x2a4];
    S_15980_State *f2a4;
};

extern S_15980_World *D_002B9120;
extern S_15980_Mgr *D_002A8490;
extern float D_002756C0;
extern float D_002756C4;
extern float D_00275460;
extern float D_002755F8;
extern float D_002756BC;
extern float D_002755E0;
extern float D_00275544;

void func_000111B0(Vec4_15980 *dst, Vec4_15980 *src);

struct S_15980_Obj {
    void func_00011BE0(int *i, float *f);
    void *func_00199B00(int a, Vec4_15980 *out);
    void func_00197B40(void *a, void *b);
    void func_0008AB90(void *a);
    void func_000149A0(int a, float b);
};

struct C_00015980 {
    char pad0[0x384];
    void *f384;
    char pad388[8];
    int f390;
    int f394;
    int f398;
    int f39c;
    char pad3a0[0x1c];
    int f3bc;
    char pad3c0[0x18];
    float f3d8;
    char pad3dc[6];
    unsigned char f3e2;
    char pad3e3;
    float f3e4;
    float f3e8;
    float f3ec;
    void func_00011BE0(int *i, float *f);
    void *func_00199B00(int a, Vec4_15980 *out);
    void func_00197B40(void *a, void *b);
    void func_0008AB90(void *a);
    void func_000149A0(int a, float b);
    int func_00015980(void);
};
