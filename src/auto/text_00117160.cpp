/* 1 function from 0x00117160 to 0x00118380, found by Ghidra. */
#include "common.h"

extern float D_00275544;
extern float D_00276094;
extern "C" float func_0001C870(float, float, float, float, float);

struct Rider_00117160 {
    void func_00117160(float dt);
    void func_00027850(float f);
};

#define RF(o) (*(float*)((char*)this + (o)))
#define RI(o) (*(int*)((char*)this + (o)))
#define RP(o) (*(char**)((char*)this + (o)))
