/* 2 functions from 0x0003D910 to 0x0003E660, found by Ghidra. */
#include "common.h"
struct V4 { float x, y, z, w; };
struct Blk { char pad[0x358]; int w; int h; int d; int flag; };
struct Q { char pad[0x28]; void func_00197E70(V4*); void func_00197B40(V4*, V4*); };
struct Sub { int a; int b; Q* q; };
struct Obj {
    char pad0[0x438];
    int f438;
    char pad1[0x45c - 0x43c];
    int f45c;
    int f460;
    char pad2[0x49c - 0x464];
    int* grid;
    char pad3[0x564 - 0x4a0];
    Sub* f564;
    int func_00038B10(Q*, V4, V4, int*, int*, int*, int*);
    void func_00038A70(Q*, Blk**);
    int _func_0003E410();
};
extern float D_00276E9C;
extern float D_00276E98;
void func_00197E70(Q*, V4*);
void func_00197B40(Q*, V4*, V4*);
