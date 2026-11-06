/* 1 function from 0x0011D2F0 to 0x0011EDF0, found by Ghidra. */
#include "common.h"

struct V4_0011D2F0 {
    float x, y, z, w;
};
struct M4_0011D2F0 {
    float m[16];
};

struct Node_0011D2F0 {
    void func_001996A0(int a, V4_0011D2F0 v);
    void func_00199300(V4_0011D2F0 *v);
    void func_00197EA0(M4_0011D2F0 *m);
    void func_00199C20(int a, M4_0011D2F0 *m);
    void func_00199A70(int a, V4_0011D2F0 *v);
    void func_001994C0(int a, V4_0011D2F0 *b, V4_0011D2F0 *c);
    void func_00199110(int a, V4_0011D2F0 *b, V4_0011D2F0 *c, int d, int e, int f);
};

struct Body_0011D2F0 {
    char pad0[4];
    Node_0011D2F0 *node;
    char pad8[8];
    int f10;
    char pad14[4];
    int f18;
    char pad1C[0x1e4];
    V4_0011D2F0 *f200;
    V4_0011D2F0 *f204;
    void func_00164820(int a);
    void func_001670C0(float dt, int a, int b);
    void func_00166C80(int a, int b);
};

struct G2_0011D2F0 {
    char pad[0x1c8];
    int f1c8;
};
struct G1_0011D2F0 {
    char pad[0x2a4];
    G2_0011D2F0 *f2a4;
};
extern G1_0011D2F0 *D_002A8490;
extern V4_0011D2F0 D_002A3BBC;

M4_0011D2F0 *func_0011ADA0(M4_0011D2F0 *out, M4_0011D2F0 *a, M4_0011D2F0 *b);
V4_0011D2F0 *func_00026910(V4_0011D2F0 *out, M4_0011D2F0 *m, int n);
V4_0011D2F0 *func_0011ADD0(V4_0011D2F0 *out, M4_0011D2F0 *m);
void func_00026960(M4_0011D2F0 *m);
void __stdcall func_0011BBB0(V4_0011D2F0 v);

struct C_0011D2F0 {
    char pad0[0x24];
    V4_0011D2F0 f24;
    char pad34[0x84 - 0x34];
    Body_0011D2F0 *f84;
    Node_0011D2F0 *f88;
    char pad8C[0xbc - 0x8c];
    int fBC;
    int fC0;
    int fC4;
    int *fC8;
    char padCC[0x12c - 0xcc];
    int f12C;
    int f130;
    V4_0011D2F0 f134;
    V4_0011D2F0 f144;
    void func_00157A00(float dt);
    void func_0011D2F0(float dt);
};
