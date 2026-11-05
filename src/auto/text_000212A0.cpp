/* 17 functions from 0x000212A0 to 0x00022060, found by Ghidra. */
#include "common.h"

extern float D_00275544;
extern int D_002760E4;
extern u32 D_002A0F74;
extern u32 D_002A0F78;
extern u32 D_002A0F7C;
extern u32 D_002A0F80;

extern u32 D_002761A4;
extern char D_0027618C;
extern char D_00276180;
extern char D_00276174;
extern char D_00276164;
extern char D_00276150;

void *func_001E8A44(int size);

struct V4_000212A0 {
    float x, y, z, w;
};

/* the config reader passed to the load functions */
struct S_Stream_000212A0 {
    void func_00168CB0(void *key, void *def, void *dst);
    void func_00168C20(void *key, int def, void *dst);
};

/* 0x20-byte object: four ints and a position vector */
struct C_00021740 {
    int f0;
    int f4;
    int f8;
    int fC;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1C;
    C_00021740 *init(void)
    {
        f18 = 0;
        f14 = 0;
        f10 = 0;
        f1C = 0x3f800000;
        return this;
    }
    void func_00021740(S_Stream_000212A0 *stream, int base);
};

struct S_000217F0_Model {
    virtual void v0();
    virtual void v1(S_Stream_000212A0 *stream);
    int f4;
    S_000217F0_Model *func_001B5110(void);
};

struct C_00021890 {
    char pad0[0x24];
    C_00021740 *f24;
    S_000217F0_Model *f28;
    void func_00021890(S_Stream_000212A0 *stream, int base);
};

struct S_00021A20_List {
    int f0;
    int count;
};

struct C_00021A20 {
    char pad0[0x2c];
    S_00021A20_List *f2c;
    char pad30[4];
    int f34;
    int f38;
    void func_00021A20(void);
};

struct C_000217F0 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2c;
    int f30;
    u32 f34;
    u32 f38;
    int f3c;
    u32 f40;
    int f44;
    u32 f48;
    u32 f4c;
    u32 f50;
    u32 f54;
    u32 f58;
    u32 f5c;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6c;
    u32 f70;
    u32 f74;
    char pad78[2];
    char f7a;
    char f7b;
    C_000217F0 *func_000217F0(int a);
};

inline float Dot3_000212A0(V4_000212A0 *p, V4_000212A0 *q)
{
    return p->y * q->y + p->x * q->x + p->z * q->z;
}

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
    float v[4];
    V4_000212A0 r;
    float d;

    d = b->y * a->y + a->x * b->x;
    d = d + b->z * a->z;
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

void C_00021740::func_00021740(S_Stream_000212A0 *stream, int base)
{
    int v;

    stream->func_00168CB0(&D_0027618C, &D_002A0F74, &f10);
    stream->func_00168C20(&D_00276180, 0, &f8);
    stream->func_00168C20(&D_00276174, -1, &v);
    fC = v - 1;
    if (fC < 0) {
        fC = 0;
    }
    stream->func_00168C20(&D_00276164, 0, &v);
    f0 = v + base - 1;
    if (f0 < 0) {
        f0 = 0;
    }
    stream->func_00168C20(&D_00276150, 1, &v);
    f4 = v - 1;
    if (f4 < 0) {
        f4 = 0;
    }
}

C_000217F0 *C_000217F0::func_000217F0(int a)
{
    ((C_00157600 *)this)->func_00157600(a);
    vtbl = &D_002761A4;
    f54 = 0;
    f50 = 0;
    f4c = 0;
    f58 = 0x3f800000;
    f68 = 0x3f800000;
    f64 = 0;
    f60 = 0;
    f5c = 0;
    f74 = 0;
    f70 = 0;
    f6c = 0;
    f2c = 0;
    f34 = 0;
    f40 = 0;
    f30 = -1;
    f3c = -1;
    f38 = 1;
    f4c = D_002A0F74;
    f50 = D_002A0F78;
    f54 = D_002A0F7C;
    f58 = D_002A0F80;
    f28 = 0;
    f24 = 0;
    f7a = 0;
    f48 = 0;
    f7b = 1;
    f44 = -1;
    return this;
}

void C_00021890::func_00021890(S_Stream_000212A0 *stream, int base)
{
    void *mem = func_001E8A44(0x1b0);
    S_000217F0_Model *m = mem != 0 ? ((S_000217F0_Model *)mem)->func_001B5110() : 0;

    f28 = m;
    f28->f4 = 1;
    f28->v1(stream);
    mem = func_001E8A44(0x20);
    f24 = mem != 0 ? ((C_00021740 *)mem)->init() : 0;
    f24->func_00021740(stream, base);
}

void C_000219E0::func_000219E0(int idx)
{
    C_000219E0_Mgr *mgr = f28->f1a4;
    if (mgr->unk10 == 0) {
        mgr->func_00166C80(f28->f1ac[idx], 1);
    } else {
        mgr->func_00164820(f28->f1ac[idx]);
    }
}

void C_00021A20::func_00021A20(void)
{
    if (f34 < 0 || f34 >= f2c->count) {
        f34 = 0;
    }
    f38 = f34 + 1;
    if (f38 >= f2c->count) {
        f38 = 0;
    }
}

int C_00021A50::func_00021A50(int idx, int v)
{
    int n;
    if (idx >= 0 && idx < D_002B7E18->f34 && D_002B7E18->f64[idx]->f4 != 0) {
        f2c = D_002B7E18->f64[idx];
        f30 = idx;
        n = v;
        if (n != 0) {
            n = n - 1;
            if (n < 0) {
                n = D_002B7E18->f64[idx]->f4 - 1;
            }
        }
        f34 = n;
        func_00021A20();
        return 1;
    }
    return 0;
}

