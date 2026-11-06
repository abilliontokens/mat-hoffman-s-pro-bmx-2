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
    void func_00113290(float dt);
    void func_001059E0(void);
    float func_00108CE0(int a);
    float func_00108CB0(int a, float b);
    void func_0010DD90(float a, float b, char *c, int d, int e, int f);
};
