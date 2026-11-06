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

struct C_000342C0 {
    void **vtbl;
    char pad4[0x64];
    void *f68;
    char pad6C[0x24];
    int f90;
    char pad94[0xc4];
    void *f158;
    char pad15C[0x78];
    void *f1d4;
    void func_000342C0();
};
void *func_001E8A44(int size);

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
    float t2 = t * t;
    float t3 = t * t2;
    float a = ((t3 + t3) - t2 * D_002755EC) + D_00275460;
    float b = t2 * D_002755EC - (t3 + t3);
    float c = (t3 - D_00275600 * t2) + t;
    float d = t3 - t2;
    Vec4 m0 = Vec3Scale(Vec3Sub(p2, p0), D_002755E8);
    Vec4 m1 = Vec3Scale(Vec3Sub(p3, p1), D_002755E8);
    Vec4 n1 = Vec3Scale(m1, d);
    Vec4 n0 = Vec3Scale(m0, c);
    Vec4 q2 = Vec3Scale(p2, b);
    Vec4 q1 = Vec3Scale(p1, a);
    Vec4 s = Vec3Add(q1, q2);
    Vec4 u = Vec3Add(s, n0);
    out->x = u.x + n1.x;
    out->y = u.y + n1.y;
    out->z = u.z + n1.z;
    out->w = 1.0f;
}

