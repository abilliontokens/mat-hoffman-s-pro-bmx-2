/* 1 function from 0x0011B240 to 0x0011BBB0, found by Ghidra. */
#include "common.h"
struct V4_0011B240 { float x, y, z, w; V4_0011B240() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; } };
struct Obj_0011B240 {
    char pad_00[0x60];
    void *f60;
    char pad_64[0x9c - 0x64];
    void *f9c;
    char pad_a0[0x110 - 0xa0];
    Obj_0011B240 *func_0017F050(int a);
    void func_0017F0A0(int a);
    void func_00180E00(int n, void *verts, int a, int b);
    void func_00133140(void *tex, int a);
    void func_00133660(void *tex);
    void func_00086C20(int a);
};
struct Glob_0011B240 {
    char pad_00[0x348];
    int f348;
    char pad_34c[0x4a8 - 0x34c];
    void **f4a8;
};
extern float D_002A3BBC, D_002A3BC0, D_002A3BC4, D_002A3BC8;
extern float D_002A3BDC, D_002A3BE0, D_002A3BE4;
extern float D_00283E10;
extern double D_00283E08;
extern float D_00276288;
extern float D_00283E00;
extern float D_00278C48;
extern float D_002755EC;
extern Glob_0011B240 *D_002B9120;
extern void *D_002BA154;
extern void *D_002B911C;
extern int D_0011B150;
void *func_001E8A44(int size);
void func_0011AFF0();
extern "C" double __cdecl cos(double);
extern "C" double __cdecl sin(double);
#pragma intrinsic(cos, sin)
struct S_0011B240 {
    char pad[0x9c];
    Obj_0011B240 *a;
    Obj_0011B240 *b;
    Obj_0011B240 *c;
    void func_001577A0(void *obj, int a);
    void func_0011B240(float x, float y);
};

void S_0011B240::func_0011B240(float x, float y)
{
    V4_0011B240 verts[52];
    int i;
    void *mem;

    for (i = 0; i < 8; i++) {
        verts[i * 2] = *(V4_0011B240 *)&D_002A3BBC;
        verts[i * 2 + 1].x = (float)cos(i * D_00283E10) * x;
        verts[i * 2 + 1].y = 0.0f;
        verts[i * 2 + 1].z = (float)sin(i * D_00283E10) * x;
        verts[i * 2 + 1].w = 1.0f;
    }
    mem = func_001E8A44(0x110);
    a = mem ? ((Obj_0011B240 *)mem)->func_0017F050(1) : 0;
    a->func_0017F0A0(2);
    a->func_00180E00(0x1a, verts, 0, 0);
    a->f60 = this;
    a->f9c = (void *)&func_0011AFF0;
    a->func_00133140(D_002B9120->f4a8[D_002B9120->f348], 2);
    func_001577A0(a, -1);
    for (i = 0; i < 16; i++) {
        verts[i * 2] = *(V4_0011B240 *)&D_002A3BBC;
        verts[i * 2 + 1].x = (float)cos(i * D_00283E00) * x;
        verts[i * 2 + 1].y = 1.5f;
        verts[i * 2 + 1].z = (float)sin(i * D_00283E00) * x;
        verts[i * 2 + 1].w = 1.0f;
    }
    mem = func_001E8A44(0x110);
    b = mem ? ((Obj_0011B240 *)mem)->func_0017F050(1) : 0;
    b->func_0017F0A0(2);
    b->func_00180E00(0x10, verts, 0, 0);
    b->f60 = this;
    b->f9c = (void *)&func_0011AFF0;
    b->func_00133140(D_002B9120->f4a8[D_002B9120->f348], 2);
    func_001577A0(b, -1);
    {
        V4_0011B240 v[4];
        v[0].x = -D_002A3BDC * D_00278C48;
        v[0].y = -D_002A3BE0 * D_00278C48;
        v[0].z = -D_002A3BE4 * D_00278C48;
        v[1].x = D_002A3BDC * D_002755EC;
        v[1].y = D_002A3BE0 * D_002755EC;
        v[1].z = D_002A3BE4 * D_002755EC;
        mem = func_001E8A44(0x110);
        c = mem ? ((Obj_0011B240 *)mem)->func_0017F050(1) : 0;
        c->func_0017F0A0(2);
        c->func_00180E00(1, v, 0, 0);
        c->f60 = this;
        c->f9c = (void *)&D_0011B150;
        c->func_00133140(D_002B9120->f4a8[D_002B9120->f348], 2);
        func_001577A0(c, -1);
        c->func_00086C20(1);
        c->func_00133660(D_002BA154);
        c->func_00133660(D_002B911C);
    }
}
