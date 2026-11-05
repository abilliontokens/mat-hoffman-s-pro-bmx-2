/* 8 functions from 0x0012B7D0 to 0x0012C540, found by Ghidra. */
#include "common.h"

extern int D_00284194;
extern int D_002A3F00;
extern int D_002A3F04;
extern int D_002A3F08;
extern int D_002A3F0C;
extern float D_00275460;
extern float D_002755E8;
extern float D_002755EC;
extern float D_00275600;

struct S_0012B950_Vec4 {
    float x, y, z, w;
};

struct S_0012B950_V3 {
    float x, y, z;
};

static inline S_0012B950_V3 V3Sub_0012B950(const S_0012B950_V3 &a, const S_0012B950_V3 &b)
{
    S_0012B950_V3 r;
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
    return r;
}

static inline S_0012B950_V3 V3Add_0012B950(const S_0012B950_V3 &a, const S_0012B950_V3 &b)
{
    S_0012B950_V3 r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    r.z = a.z + b.z;
    return r;
}

static inline S_0012B950_V3 V3Scale_0012B950(const S_0012B950_V3 &v, float s)
{
    S_0012B950_V3 r;
    r.x = v.x * s;
    r.y = v.y * s;
    r.z = v.z * s;
    return r;
}

void func_001E891B(void *p);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct S_0012B7D0_Vec {
    int x, y, z, w;
};

struct S_0012B7D0_Obj {
    virtual void v0(void *buf, int a1);
    virtual void v1(void *buf);
};

struct S_0012B7D0_Cam28 {
    char pad0[0x18];
    S_0012B7D0_Vec f18;
};

struct S_0012B7D0_Cam {
    char pad0[0x28];
    S_0012B7D0_Cam28 *f28;
    char pad2c[0x144];
    S_0012B7D0_Vec f170;
    void func_0012AC20(void *p1, void *p2, void *p3, void *p4, void *p5);
    void func_0012B350(void);
    void func_0012A770(int a, int b);
};

struct C_0012B7D0 {
    char pad0[0x24];
    int f24;
    int f28;
    S_0012B7D0_Obj **f2C;
    S_0012B7D0_Cam *f30;
    int func_0012B7D0(void *id, int a1, int a2, S_0012B7D0_Vec *a3, S_0012B7D0_Vec *a4);
};

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_0012B8F0 {
    void *vtbl;
    char pad4[0x20];
    char *f24;
    char *f28;
    char *f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int *f44;
    C_0012B8F0 *func_0012B8F0(void);
    void func_0012BF10(int idx, u32 *a, u32 *b, u32 *c, int *d);
    void func_0012C4E0(void);
};

int C_0012B7D0::func_0012B7D0(void *id, int a1, int a2, S_0012B7D0_Vec *a3, S_0012B7D0_Vec *a4) {
    int i;

    for (i = 0; i < f24; i++) {
        if (id == (void *)f2C[i]) {
            float buf[24];
            memset(buf, 0, sizeof(buf));
            if (f28 >= 0) {
                f2C[f28]->v1(buf);
            }
            f30->func_0012AC20(buf, buf + 4, buf + 8, buf + 12, buf + 13);
            f28 = i;
            f2C[i]->v0(buf, a1);
            if (a2 != 0 && a3 != 0 && a4 != 0) {
                f30->func_0012B350();
                f30->f170 = *a3;
                f30->func_0012A770(a2, 2);
                f30->f28->f18 = *a4;
            }
            return 1;
        }
    }
    return 0;
}

C_0012B8F0 *C_0012B8F0::func_0012B8F0(void) {
    int *p;

    ((C_00157600 *)this)->func_00157600(1);
    p = &f30;
    p[2] = 0;
    vtbl = (void *)&D_00284194;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f24 = 0;
    f28 = 0;
    f2C = 0;
    f44 = 0;
    f40 = 0;
    p[0] = D_002A3F00;
    p[1] = D_002A3F04;
    p[2] = D_002A3F08;
    p[3] = D_002A3F0C;
    return this;
}

void __stdcall func_0012B950(S_0012B950_Vec4 *out, float t, S_0012B950_Vec4 p0, S_0012B950_Vec4 p1, S_0012B950_Vec4 p2, S_0012B950_Vec4 p3) {
    float t2;
    float t3;
    float a;
    float b;
    float c;
    float d;
    float dx0;
    float dy0;
    float dz0;
    float dx1;
    float dy1;
    float dz1;
    float m0x;
    float m0y;
    float m0z;
    float m1x;
    float m1y;
    float m1z;

    t2 = t * t;
    t3 = t * t2;
    a = ((t3 + t3) - t2 * D_002755EC) + D_00275460;
    b = t2 * D_002755EC - (t3 + t3);
    c = (t3 - D_00275600 * t2) + t;
    d = t3 - t2;
    dx0 = p2.x - p0.x;
    dy0 = p2.y - p0.y;
    dz0 = p2.z - p0.z;
    m0x = dx0 * D_002755E8;
    m0y = dy0 * D_002755E8;
    m0z = dz0 * D_002755E8;
    dx1 = p3.x - p1.x;
    dy1 = p3.y - p1.y;
    dz1 = p3.z - p1.z;
    m1x = dx1 * D_002755E8;
    m1y = dy1 * D_002755E8;
    m1z = dz1 * D_002755E8;
    out->w = 1.0f;
    out->x = p1.x * a + p2.x * b + m0x * c + m1x * d;
    out->y = p1.y * a + p2.y * b + m0y * c + m1y * d;
    out->z = p1.z * a + p2.z * b + m0z * c + m1z * d;
}

float __stdcall func_0012BAE0(float t, float p0, float p1, float p2, float p3) {
    float t2;
    float t3;
    float m0;
    float m1;
    float a;
    float b;

    t2 = t * t;
    t3 = t * t2;
    m0 = (p2 - p0) * D_002755E8;
    m1 = (p3 - p1) * D_002755E8;
    a = ((t3 + t3) - t2 * D_002755EC) + D_00275460;
    b = t2 * D_002755EC - (t3 + t3);
    return m0 * ((t3 - (t2 + t2)) + t)
         + m1 * (t3 - t2)
         + a * p1
         + b * p2;
}

void C_0012B8F0::func_0012BF10(int idx, u32 *a, u32 *b, u32 *c, int *d) {
    u32 *s = (u32 *)(f2C + idx * 12);
    a[0] = s[0];
    a[1] = s[1];
    a[2] = s[2];
    a[3] = 0x3f800000;
    s = (u32 *)(f24 + idx * 12);
    b[0] = s[0];
    b[1] = s[1];
    b[2] = s[2];
    b[3] = 0x3f800000;
    s = (u32 *)(f28 + idx * 12);
    c[0] = s[0];
    c[1] = s[1];
    c[2] = s[2];
    c[3] = 0x3f800000;
    *d = f44[idx];
}

void C_0012B8F0::func_0012C4E0(void) {
    vtbl = (void *)&D_00284194;
    if (f24 != 0) {
        func_001E891B(f24);
    }
    if (f28 != 0) {
        func_001E891B(f28);
    }
    if (f2C != 0) {
        func_001E891B(f2C);
    }
    if (f44 != 0) {
        func_001E891B(f44);
    }
    ((C_00157660 *)this)->func_00157660();
}
