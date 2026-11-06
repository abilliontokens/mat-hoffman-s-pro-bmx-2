/* 5 functions from 0x001A7880 to 0x001A8720, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028BF14;
extern float D_002AA140;
extern float D_002AA144;
extern float D_002AA148;
extern float D_002AA14C;
struct V4_001A7FE0 { float x,y,z,w; };
struct Body_001A7FE0 {
    void **vtbl;
    char pad4[0x228];
    char *f22c;
};
struct Contact_001A7FE0 {
    char pad0[0x60];
    char *f60;
    Body_001A7FE0 *f64;
    unsigned f68;
};
struct Model_001A7FE0 {
    char pad0[0x154];
    Contact_001A7FE0 *f154;
    void func_001A95B0(V4_001A7FE0, V4_001A7FE0, V4_001A7FE0, V4_001A7FE0, unsigned, Body_001A7FE0 *, int, int);
};
struct Shape_001A7FE0 {
    int f0, f4;
    char pad8[0xc];
    V4_001A7FE0 f14;
    V4_001A7FE0 f24[1];
};
struct Mesh_001A7FE0 {
    char pad0[0x70];
    V4_001A7FE0 *f70, *f74, *f78;
    int f7c, f80, f84;
    int *f88;
};
struct State_001A7FE0 {
    char pad0[0x50];
    int f50;
    void *f54;
    char pad58[8];
    Model_001A7FE0 *f60;
    Body_001A7FE0 *f64;
    char pad68[0x44];
    int *fac;
    char padb0[0xc];
    float *fbc;
    V4_001A7FE0 *fc0, *fc4;
    char padc8[0x2c];
    int ff4;
    char padf8[8];
    float f100;
    char pad104[0xc];
    int f110;
};
extern unsigned D_002BA154, D_002BA15C, D_002BA160;
void func_0011F540(V4_001A7FE0 *, V4_001A7FE0, float *);
char *func_001E9260(const char *, int);
extern "C" unsigned int __cdecl strlen(const char *);
void func_001A7FE0(State_001A7FE0 *, Contact_001A7FE0 *);

struct C_00157600 {
    void func_00157600(int param);
};

struct C_001334E0 {
    char pad0[0x74];
    int unk74;
    void func_001334E0(int a0);
};

struct C_001A86D0_Body {
    void *vtbl;
    char pad4[0x20];
    void *f24;
    char pad28[0x38];
    void *f60;
    void *f64;
    void *f68;
    char pad6C[0x10];
    void *f7C;
    char pad80[0x1C];
    void *f9C;
};

struct SpringCollisionDetectionModel {
    void *vtbl;
    char pad4[0x20];
    void *f24;
    int f28;
    int f2C;
    char pad30[0x4];
    float f34;
    float f38;
    float f3C;
    float f40;
    float f44;
    float f48;
    float f4C;
    float f50;
    void *f54;
    int f58;
    int f5C;
    int f60;
    void *f64;
    int f68;
    SpringCollisionDetectionModel *func_001A8630(int param_1);
    void func_001A86D0(int param_1);
};
struct C_001A7FC0 {
    undefined4 func_001A7FC0(byte param_1);
};


undefined4 C_001A7FC0::func_001A7FC0(byte param_1)
{
  int func_001A7260(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001A7260();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

extern "C" void *__cdecl memset(void *, int, unsigned int);
SpringCollisionDetectionModel *SpringCollisionDetectionModel::func_001A8630(int param_1)
{
    ((C_00157600 *)this)->func_00157600(param_1);
    vtbl = &D_0028BF14;
    memset(&this->f34, 0, 12);
    this->f40 = 0x3f800000;
    this->f50 = 0x3f800000;
    memset(&this->f44, 0, 12);
    this->f58 = 0;
    this->f24 = 0;
    this->f28 = 0;
    this->f2C = 0;
    this->f54 = 0;
    this->f64 = 0;
    this->f68 = 0;
    this->f5C = 1;
    this->f60 = 1;
    this->f34 = D_002AA140;
    this->f38 = D_002AA144;
    this->f3C = D_002AA148;
    this->f40 = D_002AA14C;
    this->f44 = D_002AA140;
    this->f48 = D_002AA144;
    this->f4C = D_002AA148;
    this->f50 = D_002AA14C;
    return this;
}

void SpringCollisionDetectionModel::func_001A86D0(int param_1)
{
    C_001A86D0_Body *body = (C_001A86D0_Body *)param_1;
    this->f2C = param_1;
    body->f60 = this->f24;
    ((C_001A86D0_Body *)this->f2C)->f64 = ((C_001A86D0_Body *)this->f24)->f24;
    ((C_001A86D0_Body *)this->f2C)->f9C = &func_001A7FE0;
    ((C_001334E0 *)this->f2C)->func_001334E0(1);
    ((C_001A86D0_Body *)this->f24)->f7C = body->f68;
}

