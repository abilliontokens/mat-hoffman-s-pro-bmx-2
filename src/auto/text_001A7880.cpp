/* 5 functions from 0x001A7880 to 0x001A8720, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028BF14;
extern float D_002AA140;
extern float D_002AA144;
extern float D_002AA148;
extern float D_002AA14C;
struct V4_001A7FE0 { float x,y,z,w; __forceinline V4_001A7FE0() { x=y=z=0; w=1; }
    __forceinline V4_001A7FE0(int) {}

    __forceinline void Clear() { x=y=z=0; w=1; }
    __forceinline V4_001A7FE0 operator*(float s) const { V4_001A7FE0 r; r.x=x*s; r.y=y*s; r.z=z*s; return r; }
    __forceinline V4_001A7FE0 operator-(const V4_001A7FE0 &b) const { V4_001A7FE0 r; r.x=x-b.x; r.y=y-b.y; r.z=z-b.z; return r; }
    __forceinline V4_001A7FE0 operator+(const V4_001A7FE0 &b) const { V4_001A7FE0 r; r.x=x+b.x; r.y=y+b.y; r.z=z+b.z; return r; } };
struct Body_001A7FE0 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(Body_001A7FE0 *);
    virtual void v37();
    virtual void v38(Body_001A7FE0 *);
    virtual int v39(Body_001A7FE0 *);
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

