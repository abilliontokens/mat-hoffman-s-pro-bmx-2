/* 2 functions from 0x0012D460 to 0x0012E380, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
struct S_0012D460 { int pad0; int pad4; int f8; int fC; int f10; float f14; S_0012D460* func_0012D460(); };

extern float D_00275544;
extern float D_00275460;
extern float D_002A3FD8;
extern float D_002A3FDC;
extern float D_002A3FE0;
extern float D_002A3FE4;

struct V4_0012D620 {
    float x, y, z, w;
    V4_0012D620() { x = y = z = 0.0f; w = 1.0f; }
};

struct Anim_0012D620 {
    int f0;
    int f4;
    char *f8;
    float fC;
    float f10;
    float f14;
};

struct Node_0012D620 {
    void func_00197E70(V4_0012D620 *out);
};

struct Cam_0012D620 {
    void func_00180E00(int a, V4_0012D620 *v, int b, int c);
};

void func_00011FF0(void *arr, int size, int count, void *ctor);
void func_00011060();
double __cdecl fmod(double, double);

struct C_0012D620 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual float v51(float a, float b); virtual V4_0012D620 v52(float t);
    char pad4[0x400 - 4];
    char *f400;
    int f404;
    Cam_0012D620 *f408;
    char pad40C[0x414 - 0x40C];
    Anim_0012D620 *f414;
    char pad418[0x428 - 0x418];
    V4_0012D620 f428;
    V4_0012D620 f438;
    char pad448[0x4a4 - 0x448];
    int f4a4;
    char pad4a8[0x4b4 - 0x4a8];
    unsigned int f4b4;
    char pad4b8[0x4c4 - 0x4b8];
    float f4c4;
    char pad4c8[0x4d8 - 0x4c8];
    float f4d8;
    char pad4dc[0x4e4 - 0x4dc];
    float f4e4;
    float f4e8;
    float f4ec;
    char pad4f0[0x500 - 0x4f0];
    Node_0012D620 **f500;
    int func_00171230(float dt);
    int func_0012D620(float dt);
};
