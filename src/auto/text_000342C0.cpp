/* 6 functions from 0x000342C0 to 0x00034EF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern float D_00275460;
extern float D_002755E8;
extern float D_002755EC;
extern float D_00275600;

struct Vec4 {
    float x;
    float y;
    float z;
    float w;
};

static __forceinline Vec4 Vec3Sub(Vec4 a, Vec4 b)
{
    Vec4 r;
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
    return r;
}

static __forceinline Vec4 Vec3Scale(Vec4 a, float s)
{
    Vec4 r;
    r.x = a.x * s;
    r.y = a.y * s;
    r.z = a.z * s;
    return r;
}

static __forceinline Vec4 Vec3Add(Vec4 a, Vec4 b)
{
    Vec4 r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    r.z = a.z + b.z;
    return r;
}

struct C_00034890 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    C_00034890* func_00034890(void);
};


void func_000347F0(char *param_1)
{
  int func_001E8D25(...);
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    cVar2 = func_001E8D25((int)*param_1);
    *param_1 = cVar2;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}

C_00034890* C_00034890::func_00034890(void) {
    unk0 = -1;
    unk4 = 0;
    unk8 = 0;
    unkC = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    return this;
}

void func_000348B0(Vec4 *out, float t, Vec4 p0, Vec4 p1, Vec4 p2, Vec4 p3)
{
    Vec4 n0, m0;
    Vec4 n1, m1, q1, q2, s, u;
    float t2 = t * t;
    float t3 = t * t2;
    float a = ((t3 + t3) - t2 * D_002755EC) + D_00275460;
    float b = t2 * D_002755EC - (t3 + t3);
    float c = (t3 - D_00275600 * t2) + t;
    float d = t3 - t2;
    m0.x = p2.x - p0.x;
    m0.y = p2.y - p0.y;
    m0.z = p2.z - p0.z;
    m0.x *= D_002755E8;
    m0.y *= D_002755E8;
    m0.z *= D_002755E8;
    m1.x = p3.x - p1.x;
    m1.y = p3.y - p1.y;
    m1.z = p3.z - p1.z;
    m1.x *= D_002755E8;
    m1.y *= D_002755E8;
    m1.z *= D_002755E8;
    n1.x = m1.x * d;
    n1.y = m1.y * d;
    n1.z = m1.z * d;
    n0.x = m0.x * c;
    n0.y = m0.y * c;
    n0.z = m0.z * c;
    q2.x = p2.x * b;
    q2.y = p2.y * b;
    q2.z = p2.z * b;
    out->w = 1.0f;
    q1.x = p1.x * a;
    q1.y = p1.y * a;
    q1.z = p1.z * a;
    s.x = q1.x + q2.x;
    s.y = q1.y + q2.y;
    s.z = q1.z + q2.z;
    u.x = s.x + n0.x;
    u.y = s.y + n0.y;
    u.z = s.z + n0.z;
    out->x = u.x + n1.x;
    out->y = u.y + n1.y;
    out->z = u.z + n1.z;
}

