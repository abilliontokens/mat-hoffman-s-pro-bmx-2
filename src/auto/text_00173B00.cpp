/* 13 functions from 0x00173B00 to 0x001747F0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern float D_00275460;
extern float D_00275544;
extern float D_002755E8;
extern float D_00277FBC;

struct Vec4 {
    f32 x, y, z, w;
};

struct C_00198040 {
    void func_00198040(void *a0, void *a1);
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
    int f238;
    void func_00173580(int a0, int a1, int a2, int a3, int a4);
    PhysicsRigidBody *func_001740B0(C_00198330 *a0, int a1, int a2, int a3, int a4, int a5);
    void *func_001744B0(void *a0);
};

static __forceinline float LengthSq(float x, float y, float z, float w) {
    return x * x + y * y + z * z + w * w;
}
struct C_00174550 {
    char pad0[0x28C];
    int unk28C;
    int unk290;
    int unk294;
    void func_00174550(int a0, int a1, int a2);
};


void *PhysicsRigidBody::func_001744B0(void *a0)
{
    f22C->func_00198040(a0, &f238);
    return a0;
}

void C_00174550::func_00174550(int a0, int a1, int a2) {
    unk28C = a0;
    unk290 = a1;
    unk294 = a2;
}
