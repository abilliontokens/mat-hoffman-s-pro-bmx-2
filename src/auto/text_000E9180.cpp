/* 3 functions from 0x000E9180 to 0x000EA070, found by Ghidra. */
#include "common.h"
struct C_000E9FD0 {
    char pad0[0x784];
    int unk784;
    void func_000E9FD0(void);
};


struct C_001B1980 {
    void func_001B1980(void);
};

struct C_000E9FE0 {
    char pad0[0x340];
    C_001B1980 *unk340;
    C_001B1980 *unk344;
    C_001B1980 *unk348;
    C_001B1980 *unk34C;
    C_001B1980 *unk350;
    char pad354[0x12C];
    int unk480;
    char pad484[0xC];
    int unk490;
    int unk494;
    int unk498;
    int unk49C;
    int unk4A0;
    char pad4A4[0x24];
    int unk4C8;
    int unk4CC;
    char pad4D0[0x2B8];
    int unk788;
    void func_000E86C0(void);
    void func_000E9FE0(void);
};

extern float D_0027DE74;
extern float D_002755E8;
extern float D_00276524;
extern float D_00281A60;
extern float D_00281A5C;
extern int D_00281A64;
extern void *D_002EFDB8;
extern void *D_002A8490;
extern float D_002A33B8;
extern float D_002A33BC;
extern float D_002A33C0;

int func_000BC670();
void func_000BC590();
int func_000BE020(int a);
int func_000BDF30(int a);
int func_001E8858(float v);
void func_0001C1E0(int a, int b, int c, int d);
void func_0001BB00(int a, int b, int c);
void func_00197E70(float *v);
void func_001996A0(int a, float *v, float *w, float *x, int y);
void func_0001B910(void *p);

struct S_0E9180_270 {
    char pad0[0x270];
    int func_000BC670();
    void func_000BC590();
};

#include <xmmintrin.h>
struct Vec_0E9180 { float x,y,z,w; };
struct V_0E9180 {
    virtual void v0(); virtual void v4(); virtual void v8(); virtual void vc();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
};
struct Transform_0E9180 {
    void func_00197E70(void *);
    void func_001996A0(int, Vec_0E9180);
};
struct Model_0E9180 {
    int *vbtable;
    Transform_0E9180 *transform;
    V_0E9180 *interfacePtr() { return (V_0E9180 *)((char *)this + vbtable[1]); }
};
struct Item_0E9180 { char pad[0x1a4]; Model_0E9180 *model; };
struct List_0E9180 : V_0E9180 { char pad[0x24]; Item_0E9180 **items; };
struct Query_0E9180 { int func_0005C1D0(int); };
struct Timer_0E9180 { void func_001C4B60(int,int); int func_001C3F10(); };
struct S_0E9180_Manager {
    char pad0[0x2c];
    List_0E9180 *f2c;
    void func_0001BC00(int,void *);
    int func_0001B3C0(void *);
    void func_0001C1E0(int, int, int, int);
    void func_0001BB00(int, void *, int);
    void func_0001B910(void *);
};
struct S_0E9180_150 {
    char pad0[0x3a8];
    V_0E9180 **f3a8;
    char pad3ac[0x484-0x3ac];
    S_0E9180_Manager *f484;
};

struct S_0E9180_124 {
    char pad0[0x134];
    int f134, f138;
    char pad13c[0x150-0x13c];
    S_0E9180_150 *f150;
    char pad154[0x264-0x154];
    unsigned int f264;
    Timer_0E9180 *f268;
    void *f270;
    char pad274[8];
    char *f27c;
    char pad280[8];
    int f288;
    int f28c;
    int func_000BE020(int);
    int func_000BDF30(int);
    void *func_000BA9D0(int);
};

struct C_000E9180 {
    void *vtbl;
    char pad4[0x124 - 4];
    S_0E9180_124 *f124;
    char pad128[0x288 - 0x128];
    int f288;
    int f28c;
    int f290;
    int f294;
    float f298;
    int f29c;
    int f2a0;
    int f2a4;
    int f2a8;
    char pad2AC[0x468 - 0x2AC];
    int f468;
    char pad46C[0x47c - 0x46C];
    int f47c;
    int f480;
    int f484;
    float f488;
    float f48c;
    int f490;
    int f494;
    int f498;
    float f49c;
    float f4a0;
    char pad4A4[0x4c8 - 0x4A4];
    int f4c8;
    int f4cc;
    int f4d0;
    int f4d4;
    char pad4D8[0x4dc - 0x4D8];
    int f4dc;
    int f4e0;
    int f4e4;
    int f4e8;
    float f4ec;
    char pad4F0[0x50c - 0x4F0];
    int f50c;
    char pad510[0x514 - 0x510];
    void *f514;
    char pad518[0x6b8 - 0x518];
    void *f6b8;
    char pad6BC[0x784 - 0x6BC];
    int f784;
    int f788;
    int f78c;
    void func_000E9180(float dt);
    void func_000E8630();
    void func_001BEB00();
    void func_001BED00(float);
};

typedef void (__fastcall *VF_0E9180)(void *self, int dummy, int a, int b);
void C_000E9180::func_000E9180(float dt)
{
    S_0E9180_124 *m = f124;
    int b, v;

    if (((S_0E9180_270 *)m->f270)->func_000BC670() != 0) {
        ((S_0E9180_270 *)m->f270)->func_000BC590();
    }
    v = ((u8 *)f6b8)[0x3b];
    if (f490 != v) {
        if (f49c >= f4a0) {
            b = f494;
            f498 = func_001E8858((float)(f490 - b) * f49c / f4a0) + b;
        } else {
            f498 = f490;
        }
    }
    f49c = f49c + dt;
    if (f2a0 == 0 && f2a4 == 0 && f29c == 0 && f50c != 0) {
        f298 = f298 + dt;
        if (!(f298 < D_0027DE74)) {
            f2a8 = 1;
            ((VF_0E9180)(*(void ***)this)[0x1C])(this, 0, f290, f294);
            f2a0 = 0;
            f2a4 = 0;
            f29c = 0;
            f50c = 0;
            f298 = 0;
        }
    }
    if (f4dc != 0 || f4e8 != 0 || f4e0 != 0 || f4e4 != 0) {
        f4ec = f4ec + dt;
        if (!(f4ec < D_002755E8)) {
            if (f4e0 != 0) {
                f288 = func_000BE020(1);
                func_0001C1E0((int)m->f150->f484, f28c, 0, 1);
                func_0001C1E0((int)m->f150->f484, f288, 0, 1);
                func_0001BB00((int)m->f150->f484, f28c, D_00281A64);
                func_0001BB00((int)m->f150->f484, f288, D_00281A64);
                f4c8 = 1;
                f4d4 = m->f288;
                f4e0 = 0;
            }
            if (f4dc != 0) {
                f288 = func_000BE020(1);
                func_0001C1E0((int)m->f150->f484, f28c, 0, 1);
                func_0001C1E0((int)m->f150->f484, f288, 0, 1);
                func_0001BB00((int)m->f150->f484, f28c, D_00281A64);
                func_0001BB00((int)m->f150->f484, f288, D_00281A64);
                f4c8 = 1;
                f4d4 = m->f288;
                f4dc = 0;
            }
            if (f4e8 != 0) {
                f28c = func_000BDF30(1);
                func_0001C1E0((int)m->f150->f484, f28c, 0, 1);
                func_0001C1E0((int)m->f150->f484, f288, 0, 1);
                func_0001BB00((int)m->f150->f484, f28c, D_00281A64);
                func_0001BB00((int)m->f150->f484, f288, D_00281A64);
                f4cc = 1;
                f4d0 = m->f28c;
                f4e8 = 0;
            }
            if (f4e4 != 0) {
                f28c = func_000BDF30(1);
                func_0001C1E0((int)m->f150->f484, f28c, 0, 1);
                func_0001C1E0((int)m->f150->f484, f288, 0, 1);
                func_0001BB00((int)m->f150->f484, f28c, D_00281A64);
                func_0001BB00((int)m->f150->f484, f288, D_00281A64);
                f4cc = 1;
                f4d0 = m->f28c;
                f4e4 = 0;
            }
        }
    }
    v = ((u8 *)f514)[0x3b];
    if (f47c != v) {
        if (f488 >= f48c) {
            b = f480;
            f484 = func_001E8858((float)(f47c - b) * f488 / f48c) + b;
        } else {
            f484 = f47c;
        }
    }
    f488 = f488 + dt;
    if (f78c != 0) {
        if (f784 != 0) {
            f28c = func_000BDF30(0);
            f288 = func_000BE020(0);
        }
    }
}

void C_000E9FD0::func_000E9FD0(void) {
    int func_001BF220(...);
    unk784 = 1;
    func_001BF220();
}

void C_000E9FE0::func_000E9FE0(void) {
    func_000E86C0();
    unk490 = 0;
    unk494 = 255;
    unk498 = unk480;
    unk49C = 0;
    unk4A0 = 0;
    unk34C->func_001B1980();
    unk350->func_001B1980();
    unk340->func_001B1980();
    unk344->func_001B1980();
    unk348->func_001B1980();
    unk4C8 = 0;
    unk4CC = 0;
    unk788 = 1;
}

