/* 5 functions from 0x00028CD0 to 0x00029BD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00029290 {
    undefined4 func_00029290(void);
};

#define FLT_MAX_298F0 3.402823466e+38f

struct V4_000298F0 {
    float x, y, z, w;
};

extern float D_00275544;
extern float D_00275548;
extern float D_002766A0;
extern V4_000298F0 D_002A1110;

struct V4i_000298F0 {
    int x, y, z, w;
};
extern int D_002A1114;
extern int D_002A1118;
extern int D_002A111C;

float func_00011040(float a, float b);
float func_00011020(float a, float b);
void func_00158390(float f, V4_000298F0 a, V4_000298F0 b, V4_000298F0 *out);
void func_00158390(float f, V4_000298F0 a, V4i_000298F0 b, V4_000298F0 *out);

struct C_000269B0 {
    void func_000269B0(float a, float b, float c);
};

struct C_001994C0 {
    void func_001994C0(int a, V4_000298F0 *b, V4_000298F0 *c);
};

struct S_298F0_A {
    char pad0[0x28];
    float f28;
    char pad2C[0x250 - 0x2C];
    float f250;
    char pad254[0x26C - 0x254];
    float f26C;
};

struct S_298F0_B {
    char pad0[0x68];
    int f68;
    char pad6C[0x1A0 - 0x6C];
    V4_000298F0 f1A0;
};

struct S_298F0_C {
    char pad0[0x30];
    int f30;
};

struct C_000298F0 {
    char pad0[0x10C];
    V4_000298F0 f10C;
    V4_000298F0 f11C;
    V4_000298F0 f12C;
    char pad13C[0x1E0 - 0x13C];
    S_298F0_A *f1E0;
    char pad1E4[4];
    S_298F0_B *f1E8;
    char pad1EC[0x20C - 0x1EC];
    S_298F0_C *f20C;
    char pad210[0x220 - 0x210];
    C_000269B0 *f220;
    C_000269B0 *f224;
    C_000269B0 *f228;
    char pad22C[4];
    C_001994C0 *f230;
    char pad234[0x460 - 0x234];
    int f460;
    char pad464[4];
    int f468;
    char pad46C[0x5C0 - 0x46C];
    float f5C0;
    char pad5C4[4];
    int f5C8;
    char pad5CC[0x60C - 0x5CC];
    float f60C;
    float f610;
    float f614;
    char pad618[0x680 - 0x618];
    int f680;
    char pad684[0x704 - 0x684];
    int f704;
    char pad708[4];
    int f70C;
    void func_000298F0(int a0);
};


undefined4 C_00029290::func_00029290(void)
{
  int in_ECX = (int)this;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(int *)(in_ECX + 0x468) != 0) && (*(int *)(in_ECX + 0x210) != 0)) &&
     (*(int *)(*(int *)(in_ECX + 0x210) + 0x78) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

void C_000298F0::func_000298F0(int a0)
{
    float t;
    V4_000298F0 v;
    f230->func_001994C0(0, &f10C, &f11C);
    if ((f468 != 0 || f704 != 0 || f70C != 0 || f680 != 0 || f1E8->f68 != 0) && f5C8 == 0) {
        if (f468 != 0) {
            t = f5C0;
            v = D_002A1110;
        } else if (f704 != 0 || f70C != 0 || f460 != 0) {
            t = D_00275544;
            v = D_002A1110;
        } else if (f680 != 0 || f1E0->f28 < D_00275548) {
            t = D_00275544;
            v = f1E8->f1A0;
        } else {
            float c = f1E0->f26C * f60C * D_002766A0;
            c = c > -1.0f ? c : -1.0f;
            c = c < 1.0f ? c : 1.0f;
            if (f20C->f30 != 0) {
                t = func_00011020(func_00011040(c, -f614), f614);
            } else {
                t = func_00011020(func_00011040(c, -f610), f610);
            }
            if (f1E0->f250 < D_00275544 && f20C->f30 == 0) {
                t = -t;
            }
            v = f1E8->f1A0;
        }
        func_00158390(-t, f10C, v, &f12C);
    } else {
        f220->func_000269B0(f11C.x, FLT_MAX_298F0, FLT_MAX_298F0);
        f224->func_000269B0(f11C.y, FLT_MAX_298F0, FLT_MAX_298F0);
        f228->func_000269B0(f11C.z, FLT_MAX_298F0, FLT_MAX_298F0);
        f12C = f11C;
    }
}

