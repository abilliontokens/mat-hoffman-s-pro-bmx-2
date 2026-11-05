/* 14 functions from 0x0001A5A6 to 0x0001B440, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>

extern float D_00275AFC;
extern float D_00275B00;
extern float D_00275460;
extern float D_00275544;

float func_0014F890(float x);
float func_0014F450(float x);

struct Quat {
    float w, x, y, z;
};

struct Vec3 {
    float x, y, z;
};

/* object with a virtual base class that has virtual slots (slot 5 at +0x14) */
struct VBase_0001B360 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};

struct VDerived_0001B360 : virtual VBase_0001B360 {
};

struct S_0001B360 {
    char pad0[0x1A4];
    VDerived_0001B360 *obj;
};

extern float D_00275B04;
extern float D_00275B40;
extern int D_00275B54;
extern float D_002B7C74;
extern float D_002B7C78;
extern float D_002AF46C[];
extern float D_002B346C[];
extern float D_002B3470[];
extern float D_002B386C[];
extern float D_002B3870[];
extern float D_002B3C6C[];

struct C_00157600 {
    void func_00157600(int a);
};

struct C_0001B380 {
    void *vtbl;
    char pad4[0x24 - 4];
    int f24;
    float f28;
    int f2c;
    C_0001B380 *func_0001B380(int a);
};
extern C_0001B380 *D_002B7C88;

/* quaternion packed in 4 bytes: angle index + 3 axis components */
struct PackedQuat {
    u8 angle;
    s8 x, y, z;
};

struct C_0001B0A0 {
    C_0001B0A0 *func_0001B0A0(void);
};

/* float rgb -> 8-bit rgb */
struct C_0001AE60 {
    s8 r, g, b;
    C_0001AE60* func_0001AE60(const Vec3* v);
};

/* float rgb -> 16-bit rgb */
struct C_0001AF00 {
    s16 r, g, b;
    C_0001AF00* func_0001AF00(const Vec3* v);
};

struct C_0001B3B0 {
    char pad0[0x2C];
    int unk2C;
    C_0001B3B0* func_0001B3B0(int a0);
};

struct S_0001B2E0_In {
    u16 idx;
    s16 x;
    s16 y;
    s16 z;
};

struct S_0001B2E0_Out {
    u32 v0;
    f32 x;
    f32 y;
    f32 z;
};

extern u32 D_002AF470[];
extern f32 D_002B3C70[];
extern f32 D_002B7C70;

struct S_0001B250_Block {
    f32 x, y, z, w;
};

struct S_0001B250_Out {
    u32 f0;
    u32 f2;
    u16 f6;
};

extern f32 D_002B7C80;
void func_0001AFB0(void *a, void *b);

struct S_0001B3C0_Entry {
    char pad0[4];
    int f4;
    char pad8[0x98];
    char name[8];
};

struct S_0001B3C0_Table {
    char pad0[0x24];
    int count;
    S_0001B3C0_Entry **entries;
};

struct C_0001B3C0 {
    char pad0[0x2C];
    S_0001B3C0_Table *tbl;
    int func_0001B3C0(const char *name);
};

extern "C" int strcmp(const char *, const char *);


C_0001AE60* C_0001AE60::func_0001AE60(const Vec3* v) {
    C_0001AE60 * volatile self = this;
    int tmp;
    int * volatile p;
    float t;
    p = &tmp;
    t = D_00275AFC * v->x;
    *p = _mm_cvtss_si32(*(__m128 *)&t);
    self->r = (s8)tmp;
    p = &tmp;
    t = D_00275AFC * v->y;
    *p = _mm_cvtss_si32(*(__m128 *)&t);
    self->g = (s8)tmp;
    p = &tmp;
    t = D_00275AFC * v->z;
    *p = _mm_cvtss_si32(*(__m128 *)&t);
    self->b = (s8)tmp;
    return self;
}

C_0001AF00* C_0001AF00::func_0001AF00(const Vec3* v) {
    int t;
    t = _mm_cvtss_si32(_mm_set_ss(D_00275B00 * v->x));
    r = (s16)t;
    t = _mm_cvtss_si32(_mm_set_ss(D_00275B00 * v->y));
    g = (s16)t;
    t = _mm_cvtss_si32(_mm_set_ss(D_00275B00 * v->z));
    b = (s16)t;
    return this;
}

void func_0001B020(Quat *q, float *angle, Vec3 *axis) {
    float t = func_0014F890(q->w);
    *angle = t;
    if (t != D_00275544) {
        float s = D_00275460 / func_0014F450(t);
        axis->x = s * q->x;
        axis->y = s * q->y;
        axis->z = s * q->z;
    } else {
        axis->x = 1.0f;
        axis->y = 0.0f;
        axis->z = 0.0f;
    }
    *angle += *angle;
}

C_0001B0A0 *C_0001B0A0::func_0001B0A0(void) {
    int i = 0;
    if (D_00275544 < D_00275B04) {
        float a = D_00275544;
        do {
            float r = a * D_002B7C74;
            i++;
            D_002B3C6C[i] = sinf(r);
            D_002AF46C[i] = cosf(r);
            a = (float)i;
        } while (a < D_00275B04);
    }
    i = 0;
    do {
        float r = (float)i * D_00275B40;
        i++;
        D_002B346C[i] = sinf(r);
        D_002B386C[i] = cosf(r);
    } while (i < 0x100);
    return this;
}

void func_0001B1D0(const PackedQuat *p, Quat *q) {
    float v[4];
    float s = D_002B3470[p->angle];
    q->w = D_002B3870[p->angle];
    v[0] = (float)p->x * D_002B7C78;
    v[1] = (float)p->y * D_002B7C78;
    v[2] = (float)p->z * D_002B7C78;
    q->x = v[0] * s;
    q->y = v[1] * s;
    q->z = v[2] * s;
}

void func_0001B250(S_0001B250_Out *out, Quat *q)
{
    float angle;
    S_0001B250_Block v;
    v.z = 0;
    v.y = 0;
    v.x = 0;
    v.w = 1.0f;
    func_0001B020(q, &angle, (Vec3 *)&v);
    func_0001AFB0(&v, &v);
    float t = D_002B7C80 * angle;
    out->f0 = (int)t;
    C_0001AF00 obj;
    obj.func_0001AF00((Vec3 *)&v);
    out->f2 = *(u32 *)&obj;
    out->f6 = *(u16 *)((char *)&obj + 4);
}

void func_0001B2E0(const S_0001B2E0_In *in, S_0001B2E0_Out *out)
{
    u32 k = (u32)in->idx * 4;
    f32 s = *(f32 *)((char *)D_002B3C70 + k);
    out->v0 = *(u32 *)((char *)D_002AF470 + k);
    out->x = (f32)in->x * D_002B7C70 * s;
    out->y = (f32)in->y * D_002B7C70 * s;
    out->z = (f32)in->z * D_002B7C70 * s;
}

void func_0001B360(int a0, int a1, S_0001B360 *a2, int a3) {
    if (a3 != 0) {
        a2->obj->v5();
    }
}

C_0001B380 *C_0001B380::func_0001B380(int a) {
    ((C_00157600 *)this)->func_00157600(a);
    f24 = 0;
    f2c = 0;
    vtbl = (void *)&D_00275B54;
    f28 = 1.0f;
    D_002B7C88 = this;
    return this;
}

C_0001B3B0* C_0001B3B0::func_0001B3B0(int a0) {
    unk2C = a0;
    return this;
}

int C_0001B3C0::func_0001B3C0(const char *name)
{
    int i;

    if (tbl != 0) {
        for (i = 0; i < tbl->count; i++) {
            S_0001B3C0_Entry *e = tbl->entries[i];
            if (e->f4 == 1 && strcmp(name, e->name) == 0)
                return i;
        }
    }
    return -1;
}

