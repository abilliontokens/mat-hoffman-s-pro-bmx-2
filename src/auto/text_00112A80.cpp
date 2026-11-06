/* 2 functions from 0x00112A80 to 0x001138E0, found by Ghidra. */
#include "common.h"

#define AT(T, p, o) (*(T *)((char *)(p) + (o)))

extern float D_00275544;
extern float D_002756DC;
extern float D_00275F64;
extern char *D_002A8490;
float func_00161F80(int a);
float func_0001C870(float a, int b, int c, float d, float e, int f);
int __stdcall func_000839F0(char *a, float b, int c);

struct Obj_A8520 {
    int func_000A8520(char *name);
};
struct Obj_5C5B0 {
    void func_0005C5B0(int a, int b);
};
struct Obj_VF {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38();
    virtual void v3C(int a, float b, int c);
};

struct Obj {
    char pad0[0x11dc];
    int f11dc;
    int f11e0;
    void func_00112A80(float dt);
    void func_00113290(float dt);
    void func_001059E0(void);
    float func_00108CE0(int a);
    float func_00108CB0(int a, float b);
    void func_0010DD90(float a, float b, char *c, int d, int e, int f);
};

extern float D_00275460;
extern float D_00275F58;
extern float D_002A3AA4;
extern float D_002755E8;
extern float D_002A3AA0;
extern float D_00283D08;
extern float D_00283D04;
extern float D_00283D00;
extern float D_00283CFC;
extern float D_00283CF8;
extern float D_00283CF4;
extern float D_002B9200;
extern int D_002A3A3C;
extern int D_002A3A40;
extern int D_002A3A44;
extern int D_002A3A48;

struct Vec4_00108370 { float x, y, z, w; };
struct V3_00104A00 { float x, y, z; };
struct V4_00104A00 { float x, y, z, w; };
struct S_0001C610_V4 { float x, y, z, w; };
struct C_00109180 { Vec4_00108370 *func_00109180(Vec4_00108370 *out); };
struct C_00108F50 { void func_00108F50(void); };
struct C_0010E260 { void func_0010E260(void); };
struct BmxVehicle_10DA70 { void func_0010E2A0(void); };
struct C_000831E0 {
    void func_00083750(int a);
    void func_00083880(void);
    void func_000838B0(int a0);
};
struct C_00109520 { void func_00109550(int p); };
struct C_0001EF40 { int func_0001EF40(void); };
struct C_0010DD90 { void func_0010DD90(float a, int b, int c, int d, int e, int f); };
void func_00104A00(V4_00104A00 *out, V3_00104A00 *src);
float *func_0001E9E0(float *out, float *v);
void func_0001EAB0(float *out, float *a, float *b);
S_0001C610_V4 func_0001C610(float *a, float *b);
