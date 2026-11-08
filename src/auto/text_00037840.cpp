/* 8 functions from 0x000377E0 to 0x00038760, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_00276DDC;
extern float D_00275460, D_00275AE8, D_00275548, D_00275F64;
extern char D_002A5870[], D_00276C34[];
struct S_000380B0_Manager {
    void func_0013DFF0(char *, int);
    void func_0013B260(int);
};
extern S_000380B0_Manager *D_002BEAAC;
void func_001ADCC0(char *, int, const char *, ...);
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
struct S_000380B0_Node {
    char pad0[0x14]; int count; void *data;
};
struct S_000380B0_Array {
    int count; void *data; char pad8[0xC];
    void clear() { memset(data, 0, count * 4); count = 0; }
};
struct S_000380B0_Widget {
    virtual void v0(int); virtual void v1(); virtual void v2();
};
struct BmxEventEditor {
    void *vtbl;
    char pad4[0x498];
    void *f49C;
    char pad4A0[0x9C];
    S_000380B0_Widget *f53C;
    int f540;
    S_000380B0_Widget *f544, *f548, *f54C;
    char pad550[0x40];
    S_000380B0_Widget *f590, *f594, *f598, *f59C;
    S_000380B0_Array a, b, c, d;
    void func_000380B0();
    void func_00033220();
    void func_000382D0(int mode);
};
struct C_00037820 {
    undefined4 func_00037820(int param_1);
};

struct C_000377E0 {
    int func_000377E0(void);
};

extern int D_00276CE4;
extern int D_002A8490;
void func_001E891B(void *p);
void __stdcall func_00035300(void *a, int b);

void *func_001E8A44(int size);
struct V4_378D0 {
    float x, y, z, w;
    V4_378D0() { x = y = z = 0.0f; w = 1.0f; }
    void init() { x = y = z = 0.0f; w = 1.0f; }
    void init2() { w = 1.0f; x = y = z = 0.0f; }
    void identity();
};
inline void *operator new[](unsigned int, V4_378D0 *p) { return p; }
extern float D_002A14D4, D_002A14D8, D_002A14DC, D_002A14E0;
inline void V4_378D0::identity() { x = D_002A14D4; y = D_002A14D8; z = D_002A14DC; w = D_002A14E0; }
extern int D_00276CA4;
struct Arr_378D0 {
    int count; void *data; int grow; int cap; unsigned char owned : 1;
    void init() { data = 0; count = 0; grow = 0; cap = 0; owned = 0; }
    void alloc(int n) { data = func_001E8A44(n * 4); grow = 16; cap = n; owned = 1; }
};
struct C_378D0_Sub {
    void *vtbl; int pad4[8];
    int f24, f28, f2C, f30, f34, f38, f3C, f40;
    void func_00157600(int a);
};
struct C_000378D0 {
    void *vtbl;
    char pad4[0x280];
    int f284; unsigned char f288; int f28C; int f290;
    V4_378D0 v294[3];
    int f2C4;
    int f2C8[0x12];
    int pad310[2];
    int f318, f31C, f320;
    char s324[50], s356[50], s388[50], s3BA[50];
    char pad3EC[0x34];
    int f420, f424;
    int f428[0x13];
    int f474, f478, f47C, f480, f484, f488, f48C, f490, f494, f498, f49C, f4A0, f4A4, f4A8;
    V4_378D0 v4AC[9];
    int f53C;
    C_378D0_Sub *f540;
    int f544, f548, f54C, f550, f554, f558, f55C, f560, f564, f568, f56C, f570, f574, f578, f57C, f580, f584, f588, f58C, f590, f594, f598, f59C;
    Arr_378D0 arr[4];
    V4_378D0 v5F0[50];
    int f910, f914, f918, f91C, f920, f924;
    V4_378D0 v928, v938;
    int f948;
    void func_00030F90(int a);
    C_000378D0 *func_000378D0(int a);
};

struct C_000378A0 {
    int unk0;
    void func_00157660();
    void *func_000378A0(int flags);
};

struct C_000377F0 {
    int count;
    int *items;
    undefined4 func_000377F0(int param_1);
};

struct S_00037840_A {
    char pad0[0x64];
    int f64;
};

struct S_00037840_Owner { char pad0[0x1E0]; int f1E0; };
struct S_00037840_Rider { char pad0[0x1A8]; S_00037840_Owner *f1A8; };
struct S_00037840_Bike { char pad0[0x4E0]; S_00037840_Rider *f4E0; };
struct S_00037840_Player { char pad0[0x64]; S_00037840_Bike *f64; };
struct S_00037840_State { char pad0[0x2A4]; S_00037840_Player *f2A4; };

static __forceinline int CurrentOwner(void)
{
    return ((S_00037840_State *)D_002A8490)->f2A4->f64->f4E0->f1A8->f1E0;
}

struct S_00037840_B {
    char pad0[0x24];
    int f24;
    char pad28[0xB4];
    int fDC;
    void func_001BB4D0(int a);
};

void func_00037840(S_00037840_A *a1, S_00037840_B *a2, int a3, int a4)
{
    if (a4 != 0 &&
        *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(D_002A8490 + 0x2a4) + 0x64) + 0x4e0) + 0x1a8) + 0x1e0) == a1->f64) {
        int *p = &a2->f24;

        func_00035300(p, a2->fDC);
        a2->func_001BB4D0(0);
    }
}

