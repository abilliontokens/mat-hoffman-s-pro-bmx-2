/* 13 functions from 0x00173B00 to 0x001747F0, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>

extern float D_00275460;
extern float D_00275544;
extern float D_002755E8;
extern float D_00277FBC;

struct Vec4 {
    f32 x, y, z, w;
};

extern Vec4 D_002EF740;
static __forceinline void Zero3(int *p) { p[0]=0; p[1]=0; p[2]=0; }

struct __declspec(align(16)) Mat4_001741C0 {
    float m[16];
};

struct C_00198040 {
    void func_00198040(void *a0, void *a1);
    void func_00197EC0(void *a0, void *a1);
};

struct C_00198330 {
    void func_00199A70(C_00198330 *a0, Vec4 *a1);
    void func_001994C0(int a0, Vec4 *a1, Vec4 *a2);
};

struct PhysicsRigidBody {
    char pad0[0x44];
    Vec4 f44;
    Vec4 f54;
    Vec4 f64;
    char pad74[0xD8];
    C_00198330 *f14C;
    char pad150[0xDC];
    C_00198040 *f22C;
    char pad230[8];
    Vec4 f238;
    char pad248[0x20];
    Vec4 f268;
    char pad278[0x20];
    int f298[2][3];
    int f2B0[2][3];
    Vec4 f2C8[2];
    int f2E8[2][3];
    void func_001746D0();
    Vec4 *func_001744D0(Vec4 *out);
    void *func_00174530(void *a0);
    void func_00173580(int a0, int a1, int a2, int a3, int a4);
    PhysicsRigidBody *func_001740B0(C_00198330 *a0, int a1, int a2, int a3, int a4, int a5);
    void *func_001744B0(void *a0);
};

static __forceinline float LengthSq(float x, float y, float z, float w) {
    return x * x + y * y + z * z + w * w;
}
static inline float Sqrt_001743A0(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }
struct C_00174550 {
    char pad0[0x28C];
    int unk28C;
    int unk290;
    int unk294;
    void func_00174550(int a0, int a1, int a2);
};


PhysicsRigidBody *PhysicsRigidBody::func_001740B0(C_00198330 *a0, int a1, int a2, int a3, int a4, int a5)
{
    f14C = a0;
    a0->func_00199A70(0, &f44);
    f14C->func_001994C0(0, &f54, &f64);
    func_00173580(a1, a2, a3, a4, a5);
    return this;
}

Vec4 *func_00174110(Vec4 *dst, Vec4 *src)
{
    Vec4 r;
    float sum = LengthSq(src->x, src->y, src->z, src->w);
    if (sum != D_00275544) {
        float inv = D_00275460 / sqrtf(sum);
        r.x = inv * src->x;
        r.y = inv * src->y;
        r.z = inv * src->z;
        r.w = inv * src->w;
    } else {
        r.x = 0.0f;
        r.y = 0.0f;
        r.z = 0.0f;
        r.w = 0.0f;
    }
    *dst = r;
    return dst;
}

Mat4_001741C0 func_001741C0(const float *q)
{
    Mat4_001741C0 r;
    float b2 = q[1] + q[1];
    float c2 = q[2] + q[2];
    float d2 = q[3] + q[3];
    float ab = b2 * q[0];
    float ac = c2 * q[0];
    float ad = d2 * q[0];
    float bc = c2 * q[1];
    float bd = d2 * q[1];
    float cd = d2 * q[2];
    float bb = b2 * q[1];
    float cc = c2 * q[2];
    float dd = d2 * q[3];
    r.m[12] = 0.0f;
    r.m[13] = 0.0f;
    r.m[14] = 0.0f;
    r.m[3] = 0.0f;
    r.m[7] = 0.0f;
    r.m[11] = 0.0f;
    r.m[15] = 1.0f;
    r.m[0] = D_00275460 - (dd + cc);
    r.m[4] = bc + ad;
    r.m[8] = bd - ac;
    r.m[1] = bc - ad;
    r.m[5] = D_00275460 - (dd + bb);
    r.m[9] = cd + ab;
    r.m[2] = bd + ac;
    r.m[6] = cd - ab;
    r.m[10] = D_00275460 - (cc + bb);
    return r;
}

Vec4 *func_001742F0(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    Vec4 r;
    r.x = (a->z * b->y + b->z * a->w + a->y * b->x) * D_00277FBC;
    r.y = (a->x * b->x + a->z * b->z - a->w * b->y) * D_002755E8;
    r.z = (a->x * b->y + b->x * a->w - a->y * b->z) * D_002755E8;
    r.w = (a->y * b->y + b->z * a->x - a->z * b->x) * D_002755E8;
    *dst = r;
    return dst;
}

void *PhysicsRigidBody::func_001744B0(void *a0)
{
    f22C->func_00198040(a0, &f238);
    return a0;
}

Vec4 *PhysicsRigidBody::func_001744D0(Vec4 *out)
{
    *out = f238;
    return out;
}

void *PhysicsRigidBody::func_00174530(void *a0)
{
    f22C->func_00197EC0(a0, &f268);
    return a0;
}

void C_00174550::func_00174550(int a0, int a1, int a2) {
    unk28C = a0;
    unk290 = a1;
    unk294 = a2;
}
