/* 8 functions from 0x001C6DA0 to 0x001C76B0, found by Ghidra. */
#include "common.h"

int func_001EA426(const char *a, const char *b);
void *func_001E83E8(void *block, unsigned int size);
void *func_001E8A44(int size);

struct S_001C6DA0_V4 {
    int x;
    int y;
    int z;
    int w;
};
extern S_001C6DA0_V4 D_002AB798;

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

struct __declspec(align(16)) Vec4A {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

struct S_001C7310_Vec {
    float x, y, z, w;
    S_001C7310_Vec(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
};

struct C_0018C7B0 {
    void func_0018C7B0(int a0);
};

struct C_00198330 {
    void func_00199A70(C_00198330 *a0, Vec4 *a1);
};

struct C_001C6DA0_Mgr {
    char pad0[4];
    C_00198330 *unk4;
    char pad8[8];
    int unk10;
    void func_00166C80(int a, int b);
    void func_00164820(int a);
};

struct C_001C6DA0_Entry {
    char name[0x40];
    int unk40;
    int unk44;
    void *unk48;
    void *unk4C;
    char pad50[8];
};

struct C_001C6DA0 {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28();
    virtual void v29(Vec4 *a, Vec4 *b, int c);
    char pad4[0x38];
    C_001C6DA0_Mgr *unk3C;
    char pad40[8];
    void *unk48;
    void *unk4C;
    char pad50[0x60];
    int unkB0;
    char padB4[8];
    int unkBC;
    C_001C6DA0_Entry *unkC0;
    int unkC4;
    int unkC8;
    int unkCC;
    char padD0[4];
    S_001C6DA0_V4 unkD4;
    int func_001C6E30(const char *name);
    void func_001C6DA0(int idx, int arg);
    void func_001C6EA0(C_00198330 *obj, Vec4 *out, int unused);
    C_001C6DA0 *func_001C7310(int a0);
    void func_001C75A0();
    void func_001C6F90(Vec4 *a0, Vec4 *out, float a2);
    void func_0018C7F0();
};

struct C_001C65E0_Owned {
    virtual void *vf0(int flags);
};

extern int D_0028E74C;
void func_001E891B(void *p);
void func_001E8390(void *p);

struct C_001C65E0 {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fC;
    C_001C65E0_Owned *f10;
    void func_001C65E0(int key);
};

struct S_001C7250_Entry {
    C_001C65E0 *obj;
    int key;
};
extern S_001C7250_Entry *D_002F0890;
extern int D_002F0894;

static C_001C65E0 *init_001C7250(C_001C65E0 *p)
{
    u32 *q = (u32 *)p;
    q[2] = 0;
    q[1] = 0;
    q[0] = 0;
    q[3] = 0x3f800000;
    q[4] = 0;
    return p;
}

void C_001C6DA0::func_001C6DA0(int idx, int arg)
{
    int off = idx * 0x58;
    if (unk3C->unk10 == 0) {
        unk3C->func_00166C80(*(int *)((char *)unkC0 + off + 0x40), arg);
    } else {
        unk3C->func_00164820(*(int *)((char *)unkC0 + off + 0x40));
    }
    int old = unkC4;
    unkC4 = idx;
    unkCC = 0;
    unkC8 = old;
    unkD4 = D_002AB798;
}

int C_001C6DA0::func_001C6E30(const char *name)
{
    for (int i = 0; i < unkBC; i++) {
        if (func_001EA426(name, unkC0[i].name) == 0) {
            return i;
        }
    }
    return 0;
}

void func_001C6E90(void) {
    int func_00157960(...);
    func_00157960();
}

void C_001C6DA0::func_001C6EA0(C_00198330 *obj, Vec4 *out, int unused)
{
    if (unkB0 != 0) {
        Vec4 a;
        a.z = 0.0f;
        a.y = 0.0f;
        a.x = 0.0f;
        a.w = 1.0f;
        obj->func_00199A70(0, &a);
        Vec4 xf[2];
        xf[1].z = 0.0f;
        xf[1].y = 0.0f;
        xf[1].x = 0.0f;
        xf[1].w = 1.0f;
        Vec4 pos = a;
        xf[0].z = 0.0f;
        xf[0].y = 0.0f;
        xf[0].x = 0.0f;
        xf[0].w = 1.0f;
        unk3C->unk4->func_00199A70(0, &xf[0]);
        v29(&pos, &xf[1], 0);
        *out = pos;
    }
}

extern float D_002755EC;
extern "C" void func_000265C0(Vec4 *, Vec4 *, float *, float *, int, int);
extern "C" void func_001C63F0(Vec4 *, Vec4 *, Vec4 *);
void __stdcall func_000BA430(Vec4 *, int, int, int);
extern "C" int func_00134DE0(Vec4 *, Vec4 *, Vec4 *, int, int, int, int, int, int);
extern float D_002755E8;
void C_001C6DA0::func_001C6F90(Vec4 *a0, Vec4 *out, float a2)
{
    struct { float h; int hit; } L;
    L.hit = 0;
    if (unkB0 != 0) {
        char *l = *(char **)((char *)this + 0x37C);
        if (l != 0) {
            for (int **n = *(int ***)(l + 4); n != 0 && L.hit == 0; n = (int **)n[2]) {
                float *s = *(float **)n;
                Vec4 d;
                float v[16];
                Vec4 m;
                m.x = 0; m.y = 0; m.z = 0; m.w = 0;
                func_000265C0((Vec4 *)v, &m, s + 10, s + 6, 0, 1);
                func_001C63F0(&d, a0, (Vec4 *)v);
                d.x -= s[2];
                d.y -= s[3];
                d.z -= s[4];
                float r = *(volatile float *)s * D_002755E8;
                if (-r < d.x && d.x < r) {
                    r = *(volatile float *)(s + 1) * D_002755E8;
                    if (-r < d.z && d.z < r) L.hit = 1;
                }
            }
        }
    }
    L.h = a2;
    if (unkB0 != 0) {
        Vec4 p = *a0;
        if (L.hit == 0) {
            func_000BA430(&p, 0, 0, 0);
            if (*(volatile float *)&a0->y + D_002755EC > p.y) L.h = p.y;
        }
    }
    Vec4 res;
    Vec4A b;
    Vec4 x[2];
    for (int i = 0; i < 2; i++) { x[i].z = 0; x[i].y = 0; x[i].x = 0; x[i].w = 1.0f; }
    x[0] = *a0;
    x[0].y += D_002755EC;
    x[1] = *a0;
    x[1].y = L.h;
    b.z = 0; b.y = 0; b.x = 0; b.w = 1.0f;
    res.z = 0; res.y = 0; res.x = 0; res.w = 1.0f;
    if (func_00134DE0(x, (Vec4 *)&b, &res, 0, 0, 0, -1, 0, 0) != 0 && b.y > L.h) {
        L.h = b.y;
    }
    if (out != 0) *out = res;
    a0->y = L.h;
}

C_001C65E0 *func_001C7250(int key)
{
    for (int i = 0; i < D_002F0894; i++) {
        if (D_002F0890[i].key == key) {
            return D_002F0890[i].obj;
        }
    }
    D_002F0890 = (S_001C7250_Entry *)func_001E83E8(D_002F0890, D_002F0894 * 8 + 8);
    D_002F0890[D_002F0894].key = key;
    C_001C65E0 *p = (C_001C65E0 *)func_001E8A44(0x14);
    D_002F0890[D_002F0894].obj = p ? init_001C7250(p) : 0;
    D_002F0890[D_002F0894].obj->func_001C65E0(key);
    D_002F0894++;
    return D_002F0890[D_002F0894 - 1].obj;
}

C_001C6DA0 *C_001C6DA0::func_001C7310(int a0)
{
    int *u;
    int *p;
    int *q;
    int i;
    S_001C7310_Vec *pv;

    ((C_0018C7B0 *)this)->func_0018C7B0(a0);
    u = (int *)this;
    u[0] = (int)&D_0028E74C;
    p = &u[0x50 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x60 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x70 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x80 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x90 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xA0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xD4 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xE4 / 4];
    i = 10;
    do {
        p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
        p += 4;
        i--;
    } while (i != 0);
    q = &u[0x184 / 4];
    pv = (S_001C7310_Vec *)&u[0x184 / 4];
    i = 10;
    do {
        q[2] = 0; q[1] = 0; q[0] = 0; q[3] = 0x3f800000;
        q += 4;
        i--;
    } while (i != 0);
    q = &u[0x224 / 4];
    i = 10;
    do {
        q[2] = 0; q[1] = 0; q[0] = 0; q[3] = 0x3f800000;
        q += 4;
        i--;
    } while (i != 0);
    q = &u[0x2C4 / 4];
    i = 10;
    do {
        q[2] = 0; q[1] = 0; q[0] = 0; q[3] = 0x3f800000;
        q += 4;
        i--;
    } while (i != 0);
    u[0x3C / 4] = 0;
    u[0xBC / 4] = 0;
    u[0xC0 / 4] = 0;
    u[0xC8 / 4] = -1;
    S_001C7310_Vec t1(0.0f, 0.0f, 0.0f);
    S_001C7310_Vec t2(0.0f, 0.0f, 0.0f);
    S_001C7310_Vec t3(0.0f, 0.0f, 0.0f);
    S_001C7310_Vec t4(0.0f, 0.0f, 0.0f);
    a0 = 10;
    do {
        pv[-10] = t1;
        pv[0] = t2;
        pv[10] = t3;
        pv[20] = t4;
        pv++;
        a0--;
    } while (a0 != 0);
    u[0xD0 / 4] = 0xbf800000;
    u[0x378 / 4] = 0;
    u[0x370 / 4] = 0;
    u[0x37C / 4] = 0;
    u[0x380 / 4] = 0;
    return this;
}

void C_001C6DA0::func_001C75A0()
{
    int i;
    *(void **)this = &D_0028E74C;
    if (unkC0 != 0) {
        for (i = 0; i < unkBC; i++) {
            unkC0[i].unk44 = 0;
            if (unkC0[i].unk48 != 0) {
                func_001E891B(unkC0[i].unk48);
            }
            if (unkC0[i].unk4C != 0) {
                func_001E891B(unkC0[i].unk4C);
            }
        }
        func_001E8390(unkC0);
    }
    if (unk48 != 0) {
        func_001E891B(unk48);
    }
    if (unk4C != 0) {
        func_001E891B(unk4C);
    }
    for (i = 0; i < D_002F0894; i++) {
        C_001C65E0 *obj = D_002F0890[i].obj;
        if (obj != 0) {
            if (obj->f10 != 0) {
                obj->f10->vf0(1);
            }
            func_001E891B(obj);
        }
    }
    D_002F0894 = 0;
    if (D_002F0890 != 0) {
        func_001E8390(D_002F0890);
        D_002F0890 = 0;
    }
    func_0018C7F0();
}

