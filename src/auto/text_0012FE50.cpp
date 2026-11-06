/* 1 function from 0x0012FE50 to 0x00130C90, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern float D_00275544;
extern float D_00275460;
extern float D_002844CC;
extern float D_0027D268;
extern double D_002843A0;
extern float D_002756D0;
extern float D_002756B8;
extern float D_002756E8;

struct V4_0012FE50 {
    float x, y, z, w;
    V4_0012FE50() { x = y = z = 0.0f; w = 1.0f; }
};

struct V4P_0012FE50 { float x, y, z, w; };
extern V4P_0012FE50 D_002A4110;

struct Key_0012FE50 {
    float time;
    float f4;
    V4P_0012FE50 f8;
    V4P_0012FE50 pos;
};

struct Spline_0012FE50 {
    unsigned int count;
    int f4;
    Key_0012FE50 *arr;
    int fC;
    float f10;
    int f14;
};

struct Node_0012FE50 {
    void func_00197E70(V4_0012FE50 *out);
    void func_00199A70(int a, V4_0012FE50 *out);
};

struct Cam_0012FE50 {
    void func_00180E00(int a, V4_0012FE50 *v, int b, int c);
};

struct Attach_0012FE50 {
    void func_000BA430(V4_0012FE50 *a, V4_0012FE50 *b, int c, int d);
};

void func_00011FF0(void *arr, int size, int count, void *ctor);
void func_00011060();
void func_00030A30(V4_0012FE50 *out, V4_0012FE50 v, void *m);
void func_0012EEC0(V4_0012FE50 *out, V4_0012FE50 *in);
float func_0014FBA0(float a, float b);
extern "C" double __cdecl fmod(double, double);
#pragma intrinsic(fmod)

static __forceinline float Max_0012FE50(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Min_0012FE50(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

struct C_0012FE50 {
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
    virtual void v50(); virtual float v51(float a, float b); virtual V4_0012FE50 v52(float t);
    char pad4[0x400 - 4];
    Node_0012FE50 *f400;
    int f404;
    Cam_0012FE50 *f408;
    char pad40C[0x428 - 0x40C];
    V4_0012FE50 f428;
    V4_0012FE50 f438;
    V4_0012FE50 f448;
    V4_0012FE50 f458;
    char pad468[0x498 - 0x468];
    int f498;
    int f49c;
    int f4a0;
    int f4a4;
    int f4a8;
    int f4ac;
    int f4b0;
    unsigned int f4b4;
    unsigned int f4b8;
    char pad4bc[0x4c4 - 0x4bc];
    float f4c4;
    char pad4c8[0x4d4 - 0x4c8];
    float f4d4;
    float f4d8;
    float f4dc;
    float f4e0;
    float f4e4;
    float f4e8;
    char pad4ec[0x4f0 - 0x4ec];
    float f4f0;
    char pad4f4[0x4fc - 0x4f4];
    Attach_0012FE50 *f4fc;
    Node_0012FE50 **f500;
    char pad504[0x510 - 0x504];
    float f510;
    float f514;
    Spline_0012FE50 *f518;
    int func_00171230(float dt);
    V4_0012FE50 func_0012F0F0(float t);
    int func_0012FE50(float dt, int b);
};
