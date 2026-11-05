/* 5 functions from 0x00151F80 to 0x00152E30, found by Ghidra. */
#include "common.h"
struct Vec1521 { float x, y, z, w; Vec1521() { x = y = z = 0; w = 1; } };
struct C1521 { char pad[0x34]; float height; void func_001521D0(Vec1521*, Vec1521*); };
extern int D_002B9110, D_002B911C;
extern "C" void func_00134DE0(Vec1521*, Vec1521*, Vec1521*, int, int, int, int, int, int);

struct S_151F80_Vec {
    float x, y, z, w;
    S_151F80_Vec() { x = y = z = 0.0f; w = 1.0f; }
    S_151F80_Vec(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
    void Set(float a, float b, float c) { x = a; y = b; z = c; }
    S_151F80_Vec operator+(const S_151F80_Vec &o) const { return S_151F80_Vec(x + o.x, y + o.y, z + o.z); }
    S_151F80_Vec operator-(const S_151F80_Vec &o) const { return S_151F80_Vec(x - o.x, y - o.y, z - o.z); }
    S_151F80_Vec operator*(float s) const { return S_151F80_Vec(x * s, y * s, z * s); }
};
struct S_151F80_Root { char pad0[0x528]; int f528; };
struct S_151F80_Xf { S_151F80_Vec func_00197F70(float *vin); };
struct S_151F80_Mid { char pad0[4]; S_151F80_Xf *f4; };
struct S_151F80_Cam { char pad0[0x1a4]; S_151F80_Mid *f1a4; };
struct S_151F80_Tgt { char pad0[0x50]; int f50; char pad54[0x14]; int f68; };
struct S_151F80_Line {
    void func_0014AC30(S_151F80_Vec *line, int a);
    void func_00133ED0(void);
    void func_00133F10(int a);
};
extern S_151F80_Root *D_002B9120;
extern S_151F80_Vec D_002A789C;
extern float D_002A78A0;
extern float D_002A78A4;
extern float D_002A78A8;
extern float D_00286CA8;
extern int D_002BA148;
struct C_00151F80 {
    char pad0[0x2c];
    S_151F80_Cam *f2c;
    char pad30[0x34];
    S_151F80_Tgt *f64;
    char pad68[0x10];
    S_151F80_Line *f78;
    char pad7c[8];
    S_151F80_Vec f84;
    S_151F80_Vec f94;
    char pada4[0x20];
    int fc4;
    S_151F80_Vec fc8;
    char padd8[0x498];
    int f570;
    S_151F80_Vec func_00016E40(void);
    void func_00151F80(int a0);
};

void C_00151F80::func_00151F80(int a0)
{
    if (D_002B9120->f528 != 0) {
        S_151F80_Vec a;
        a.x = 1.0f;
        a.y = 0.0f;
        a.z = 0.0f;
        a = f2c->f1a4->f4->func_00197F70(&a.x) - func_00016E40();
        fc4 = 0;
        f94 = D_002A789C;
        f84 = D_002A789C;
        S_151F80_Vec line[2];
        line[0] = func_00016E40();
        line[1] = line[0] + a * 10000.0f;
        fc8 = line[0];
        f78->func_0014AC30(line, 0);
        f78->func_00133ED0();
        f78->func_00133F10(0);
        if (fc4 != 0 && f64->f50 == 1 && f64->f68 == D_002BA148 && D_002B9120->f528 != 0) {
            f570 = 1;
        } else {
            f570 = 0;
        }
    }
}

void C1521::func_001521D0(Vec1521* pos, Vec1521* out)
{
 float h = 0;
 Vec1521 result;
 Vec1521 hit;
 Vec1521 line[2];
 line[0] = *pos;
 line[0].y += height;
 line[1] = *pos;
 hit.x = hit.y = hit.z = 0; hit.w = 1;
 result.x = result.y = result.z = 0; result.w = 1;
 line[1].y = 0;
 func_00134DE0(line, &hit, &result, 0, 0, 0, -1, 0, 1);
 h = (D_002B911C | D_002B9110) ? hit.y : h;
 if (out) *out = result;
 pos->y = h;
}
