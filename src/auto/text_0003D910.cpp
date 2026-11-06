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
    int func_00038B10(Q*, V4, V4, int*, int*, int*, int);
    void func_00038A70(Q*, Blk**);
    int _func_0003E410();
};
extern float D_00276E9C;
extern float D_00276E98;

struct NodeD {
    virtual void nv0();
    virtual void nv1();
    virtual void nv2();
    void func_00199600(V4 v);
    void func_00198F50(V4 *a, V4 *b, int c, int d, int e);
    void func_0019AC50();
    void func_001824E0(V4 *a, float b, float c, float d);
    void func_00133EF0(V4 *a);
    void func_00198E60();
    void func_00157810();
    void func_001332A0();
};
struct Obj390 { void func_00198390(); };
struct MidD {
    char pad0[4];
    Obj390 *f4;
    char pad8[8];
    int f10;
    void func_00164820(int a);
    void func_001670C0(int a, int b, int c);
    void func_00132D20();
    void func_00194EE0(V4 v);
};
struct Mid2D { char pad0[4]; int f4; };
struct MgrD {
    char pad0[0x1a4];
    MidD *f1A4;
    Mid2D *f1AC;
};
struct F4ObjD {
    char pad0[0xe8];
    NodeD *fE8;
    NodeD *fEC;
    void func_000A3B60(int a);
    void func_001332A0();
    void func_00157810();
};
struct Sub2D {
    int a;
    F4ObjD *f4;
    NodeD *f8;
    NodeD *fC;
    NodeD *f10;
    int f14;
    int *f18;
};
struct Obj44D { char pad0[0x5c]; MidD *f5C; };
struct RetD {
    char pad0[8];
    NodeD *f8;
    char padC[4];
    void *f10;
};
struct A530D { void func_0015A250(int a); void func_0015A180(int a); };
struct Obj64D { char pad0[0x530]; A530D *f530; };
struct ArrObjD { void func_000377F0(int a); };
struct GObjD {
    virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3();
    virtual void g4(); virtual void g5(); virtual void g6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern GObjD *D_002EFDB8;
extern int D_002A14D4;
extern int D_002A14D8;
extern int D_002A14DC;
extern int D_002A14E0;
void func_001E891B(void *p);
int func_000265C0(V4 *a, V4 *b, V4 *c, V4 *d, int e, int f);

struct C_0003D910 {
    char pad0[0x44];
    Obj44D *f44;
    char pad48[0x1c];
    Obj64D *f64;
    char pad68[0x268];
    int f2D0;
    char pad2D4[4];
    int f2D8;
    int f2DC;
    int f2E0;
    char pad2E4[0x1a8];
    int f48C;
    char pad490[0x10];
    int f4A0;
    char pad4A4[0x48];
    V4 v4EC;
    V4 v4FC;
    V4 v50C;
    V4 v51C;
    char pad52C[0x38];
    Sub2D *f564;
    NodeD *f568;
    NodeD *f56C;
    NodeD *f570;
    char pad574[0x24];
    MgrD *f598;
    MgrD *f59C;
    int f5A0;
    int *f5A4;
    char pad5A8[0xc];
    int f5B4;
    int *f5B8;
    void func_0003D910(int a0);
    RetD *func_00038A10(NodeD *a, int *b);
    void func_000399A0(int a);
    void func_000392B0();
};

