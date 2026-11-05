/* 17 functions from 0x000212A0 to 0x00022060, found by Ghidra. */
#include "common.h"

extern float D_00275544;
extern int D_002760E4;
extern u32 D_002A0F74;
extern u32 D_002A0F78;
extern u32 D_002A0F7C;
extern u32 D_002A0F80;

struct V4_000212A0 {
    float x, y, z, w;
};

struct W4_000212A0 {
    u32 x, y, z, w;
    W4_000212A0 *func_000212A0(u32 *p);
};

struct C_00157600 {
    void func_00157600(int a);
};

struct C_000213F0 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44;
    u32 f48;
    u32 f4c;
    char pad50[4];
    u32 f54;
    u32 f58;
    u32 f5c;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6c;
    char pad70[4];
    u32 f74;
    u32 f78;
    u32 f7c;
    u32 f80;
    u32 f84;
    u32 f88;
    u32 f8c;
    u32 f90;
    u32 f94;
    u32 f98;
    u32 f9c;
    u32 fa0;
    C_000213F0 *func_000213F0(int a);
};

struct S_000216F0_Ent {
    int f0;
    int f4;
    int f8;
    int *fc;
};

struct C_000216F0 {
    char pad0[0x70];
    S_000216F0_Ent **f70;
    void func_000216F0(int a0, int idx, int val);
};

struct C_000219E0_Mgr {
    char pad0[0x10];
    int unk10;
    void func_00166C80(int a, int b);
    void func_00164820(int a);
};

struct C_000219E0_Owner {
    char pad0[0x1a4];
    C_000219E0_Mgr *f1a4;
    char pad1a8[4];
    int *f1ac;
};

struct C_000219E0 {
    char pad0[0x28];
    C_000219E0_Owner *f28;
    void func_000219E0(int idx);
};

struct S_00021A50_Ent {
    int f0;
    int f4;
};

struct S_00021A50_Mgr {
    char pad0[0x34];
    int f34;
    char pad38[0x2c];
    S_00021A50_Ent **f64;
};

extern S_00021A50_Mgr *D_002B7E18;

struct C_00021A50 {
    char pad0[0x2c];
    S_00021A50_Ent *f2c;
    int f30;
    int f34;
    void func_00021A20();
    int func_00021A50(int idx, int v);
};

struct C_00021720 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    C_00021720* func_00021720(void);
};


W4_000212A0 *W4_000212A0::func_000212A0(u32 *p)
{
    x = p[0];
    y = p[1];
    z = p[2];
    w = 0x3f800000;
    return this;
}

float *func_00021330(V4_000212A0 *out, V4_000212A0 *a, V4_000212A0 *b)
{
    V4_000212A0 r;
    float v[3];
    float d = a->y * b->y + a->x * b->x + b->z * a->z;

    v[0] = d * b->x;
    v[1] = d * b->y;
    v[2] = d * b->z;
    r.x = a->x - v[0];
    r.y = a->y - v[1];
    r.z = a->z - v[2];
    r.w = 1.0f;
    *out = r;
    if (out->x == D_00275544 && out->y == D_00275544 && out->z == D_00275544) {
        return 0;
    }
    return &out->x;
}

C_000213F0 *C_000213F0::func_000213F0(int a)
{
    u32 *p;

    ((C_00157600 *)this)->func_00157600(a);
    vtbl = &D_002760E4;
    p = &f74;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f84;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f94;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f2c = 0;
    f48 = 0;
    f54 = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3c = 0;
    f40 = 0;
    f60 = 0;
    f64 = 0;
    f68 = 0;
    f6c = 0;
    f5c = 0;
    f44 = 0;
    f58 = 0;
    f74 = D_002A0F74;
    f78 = D_002A0F78;
    f7c = D_002A0F7C;
    f80 = D_002A0F80;
    f24 = 0;
    f4c = 0;
    f28 = 0;
    return this;
}

void C_000216F0::func_000216F0(int a0, int idx, int val)
{
    f70[idx - 1]->fc[f70[idx - 1]->f4] = val;
    f70[idx - 1]->f4++;
}

C_00021720* C_00021720::func_00021720(void) {
    unk8 = 0;
    unk4 = 0;
    unk0 = 0;
    unk14 = 0;
    unk10 = 0;
    unkC = 0;
    return this;
}
