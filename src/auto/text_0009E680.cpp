/* 10 functions from 0x0009E680 to 0x0009F620, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern int D_0027AC78;
extern int D_002A5558;
extern f32 D_002A2528;
extern f32 D_002A252C;
extern f32 D_002A2530;
extern f32 D_002A2534;
extern int D_0027AC8C;
extern float D_00277F40, D_002A24DC, D_002756DC, D_002754B0, D_002755E8, D_00275460;
struct Root9E { char pad0[0x124]; int f124; };
extern Root9E *D_002A8490;
struct Vec4f { float x, y, z, w; };
struct Pool9E {
    char pad0[0x11C];
    int count11C;
    char pad120[4];
    int cap124;
    char pad128[4];
    int **arr12C;
};
struct Particle9E {
    char pad0[0x10];
    Vec4f v10;
    float pad20[2];
    int f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    int f40;
    int f44;
    int f48;
};
float func_00011170(float *v);
void func_0009DA90(float *a, float *b);
float func_0014F7E0(float a);
void func_0001EAB0(float *a, float *b, float *c);
int func_001E8833();
Vec4f *func_0009DA50(float *a, float *b, float c);
void func_00158390(Vec4f a, Vec4f b, float c, void *d);
void func_001ADCC0(void *dst, int n, void *src, void *x);

struct C_0009EDF0 {
    void *vtbl;
    char pad4[0x20];
    Vec4f v24;
    Vec4f v34;
    char pad44[0x20];
    Pool9E *f64;
    char pad68[4];
    char f6c[0x104];
    float f170, f174, f178, f17c;
    char pad180[8];
    int f188;
    char pad18c[4];
    int f190;
    char pad194[0x14];
    int f1a8, f1ac;
    char pad1b0[0x1c];
    unsigned char f1cc;
    char pad1cd[0x23];
    float f1f0;
    int f1f4, f1f8;
    f32 f1fc, f200, f204, f208;
    float f20c, f210, f214, f218;
    C_0009EDF0 *func_0009EDF0(int a);
    int func_0009E680(C_0009EDF0 *arg);
    float func_00011170(float *v);
    void func_00169C50(int a);
    C_0009EDF0 *func_0009EF00(int a, int b, int c);
    void func_0016A1D0(int a, int b, int c);
    void func_0016A330(void *a);
};

struct C_0009F580 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F580(int flags);
};

void func_001E891B(void *ptr);

struct C_0009F550 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F550(int flags);
};

extern int D_0027AA3C;
extern int D_0027AAEC;

struct C_0009F4F0 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F4F0(int flags);
};

struct C_0009F520 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F520(int flags);
};

struct Vec4i {
    int x, y, z, w;
};

struct C_0009EDB0 {
    char pad0[0x24];
    Vec4i v24;
    Vec4i v34;
    char pad44[0x188];
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 6;
    char pad1cd[0xf];
    int unk1dc;
    void func_0009EDB0(char param_1);
    void func_0009F4C0(char param_1);
};

int C_0009EDF0::func_0009E680(C_0009EDF0 *arg)
{
    float diff[4];
    float norm[4];
    float up[4];
    float side[4];
    float fwd[4];
    float len;
    float dot;
    float t;
    int count;
    int i;
    float dx;
    float dy;
    float dz;

    if (D_002A8490->f124 != 0)
        return 0;
    if ((f1cc & 2) == 0)
        return 0;
    if (f1cc & 1) {
        f1cc &= 0xfe;
        arg->v34 = arg->v24;
        return 1;
    }

    dz = v34.z - v24.z;
    dy = v34.y - v24.y;
    dx = v34.x - v24.x;
    diff[3] = 1.0f;
    diff[0] = dx;
    diff[1] = dy;
    diff[2] = dz;
    len = func_00011170(diff);
    norm[0] = diff[0];
    norm[1] = diff[1];
    norm[2] = diff[2];
    norm[3] = len;
    func_0009DA90(norm, diff);
    dot = norm[0] * arg->f1fc + norm[1] * arg->f200 + len * arg->f204;
    dot = func_0014F7E0(dot);
    if (dot < D_00277F40)
        return 0;

    up[0] = 0.0f;
    up[1] = 0.0f;
    up[2] = 0.0f;
    up[3] = 1.0f;
    func_0001EAB0(up, (float *)&arg->f1fc, up);
    func_0009DA90(up, up);
    t = D_002A24DC * up[1];
    func_00158390(*(Vec4f *)&arg->f1fc, *(Vec4f *)up, t, (void *)&arg->f1fc);
    func_0009DA90((float *)&arg->f1fc, (float *)&arg->f1fc);

    side[0] = 0.0f;
    side[1] = 0.0f;
    side[2] = 0.0f;
    side[3] = 1.0f;
    fwd[0] = 0.0f;
    fwd[1] = 0.0f;
    fwd[2] = 0.0f;
    fwd[3] = 1.0f;
    AsmVec3Cross(side, (const float *)&D_002A2528, norm);
    func_0009DA90(side, side);
    AsmVec3Cross(fwd, up, side);
    AsmVec3Cross(up, (const float *)&arg->f1fc, side);
    func_0009DA90(up, side);

    t = len / ((float *)this)[0xe8 / 4];
    if (t < D_002756DC)
        return 0;

    arg->f1f0 = t * arg->f17c;
    AsmFloatToInt(t * arg->f1f0, &count);
    if (count < 1)
        return 0;

    {
        Vec4f *base = func_0009DA50((float *)&arg->f64, norm, (float)count / len);
        Vec4f start = *base;
        float step = (float)count / len;
        for (i = 0; i < count; i++) {
            Pool9E *pool = arg->f64;
            Particle9E *p;
            float r1, r2;
            float s1[3];
            float s2[3];
            float s3[3];
            float pos[3];
            float vel[3];
            if (pool->count11C >= pool->cap124)
                continue;
            r1 = (float)func_001E8833() * D_002754B0;
            p = (Particle9E *)pool->arr12C[pool->count11C];
            r1 = r1 * arg->f218 + arg->f20c;
            s1[0] = side[0] * r1;
            s1[1] = side[1] * r1;
            s1[2] = side[2] * r1;
            pos[0] = s1[0];
            pos[1] = s1[1];
            pos[2] = s1[2];
            r2 = (float)func_001E8833() * D_002754B0;
            r2 = arg->f210 * D_002755E8 - r2 * arg->f210;
            s2[0] = up[0] * r2;
            s2[1] = up[1] * r2;
            s2[2] = up[2] * r2;
            pos[0] += s2[0];
            pos[1] += s2[1];
            pos[2] += s2[2];
            s3[0] = norm[0] * -(t * arg->f214);
            s3[1] = norm[1] * -(t * arg->f214);
            s3[2] = norm[2] * -(t * arg->f214);
            pos[0] += s3[0];
            pos[1] += s3[1];
            pos[2] += s3[2];
            vel[0] = (pos[0] * step + start.x) * t;
            vel[1] = (pos[1] * step + start.y) * t;
            vel[2] = (pos[2] * step + start.z) * t;
            p->f2C = arg->f170 * D_002755E8 * (float)func_001E8833() * D_002754B0;
            p->v10.x = vel[0] + arg->v34.x;
            p->v10.y = vel[1] + arg->v34.y;
            p->v10.z = vel[2] + arg->v34.z;
            p->v10.w = 1.0f;
            p->f28 = arg->f188;
            p->f38 = ((float)func_001E8833() * D_002754B0 + D_00275460) * arg->f178;
            p->f40 = arg->f174;
            p->f48 = (int)arg;
            p->f30 = arg->f170;
            p->f34 = D_00275460 / arg->f170;
            p->f44 = arg->f190;
            pool->count11C++;
            arg->f188++;
            if (arg->f188 >= arg->f1ac)
                arg->f188 = arg->f1a8;
        }
    }
    arg->f1f8 = (int)t;
    return 1;
}

void C_0009EDB0::func_0009EDB0(char param_1) {
    if (!(b1)) {
        v34 = v24;
    }
    b1 = param_1;
}

C_0009EDF0 *C_0009EDF0::func_0009EDF0(int a) {
    func_00169C50(a);
    vtbl = &D_0027AC8C;
    f32 *p = &f1fc;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    f1ac = 0;
    f1a8 = 0;
    f188 = 0;
    f170 = 1000.0f;
    f178 = 0.015f;
    f174 = 0.5f;
    f190 = 0x26;
    f1cc |= 1;
    f1f0 = 1000.0f;
    f1f4 = 0;
    f1f8 = 0;
    f17c = 5.0f;
    f1fc = D_002A2528;
    f200 = D_002A252C;
    f204 = D_002A2530;
    f208 = D_002A2534;
    f218 = 5.0f;
    f20c = 10.0f;
    f210 = 6.0f;
    f214 = 0.8f;
    func_001ADCC0(f6c, 0x104, &D_0027AC78, &D_002A5558);
    return this;
}

C_0009EDF0 *C_0009EDF0::func_0009EF00(int a, int b, int c)
{
    char *p;
    char *q;

    func_0016A1D0(a, b, c);
    p = *(char **)((char *)f64 + 0x134);
    q = p ? p + 0x24 : 0;
    if (q) {
        f1ac = *(int *)(q + 8);
        f1a8 = *(int *)(q + 4);
        f188 = f1a8;
        func_0016A330(f6c);
    }
    return this;
}

void C_0009EDB0::func_0009F4C0(char param_1) {
    b1 = param_1;
    unk1dc = 0;
}

void *C_0009F4F0::func_0009F4F0(int flags) {
    unk0 = (int)&D_0027AA3C;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0009F520::func_0009F520(int flags) {
    unk0 = (int)&D_0027AAEC;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0009F550::func_0009F550(int flags) {
    extern int D_0027AB9C;
    void func_001E891B(void *);
    unk0 = (int)&D_0027AB9C;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0009F580::func_0009F580(int flags) {
    extern int D_0027AC8C;
    unk0 = (int)&D_0027AC8C;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_0009F5B0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

