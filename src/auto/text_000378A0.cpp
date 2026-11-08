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
    void func_001A4100(int, int, int);
};
struct V4_382D0 {
    f32 x, y, z, w;
    void init() { x = y = z = 0.0f; w = 1.0f; }
};
struct S_000382D0_Item {
    char pad0[0x44];
    int f44;
};
struct S_000382D0_Pool {
    char pad0[0x5A4];
    S_000382D0_Item *f5A4;
    int f5A8;
    int *f5AC;
};
struct S_000382D0_Render {
    void func_0019A0A0(f32, f32, f32);
    void func_00199600(V4_382D0);
    void func_00198F50(V4_382D0 *, V4_382D0 *, int, int, int);
    void func_0019AC50();
    void func_001BB950(V4_382D0 *, V4_382D0 *, V4_382D0 *, V4_382D0 *, int);
};
struct S_000382D0_Holder {
    char pad0[8];
    S_000382D0_Render *f8;
    char padC[4];
    S_000382D0_Render *f10;
};
struct BmxEventEditor {
    void *vtbl;
    char pad4[0x60];
    S_000382D0_Pool *f64;
    char pad68[0x414];
    int f47C, f480;
    char pad484[0x18];
    void *f49C;
    char pad4A0[0x1C];
    V4_382D0 v4BC, v4CC, v4DC;
    char pad4EC[0x50];
    S_000380B0_Widget *f53C;
    int f540;
    S_000380B0_Widget *f544, *f548, *f54C;
    char pad550[0x14];
    S_000382D0_Holder *f564;
    char pad568[0x28];
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

void *C_000378A0::func_000378A0(int flags)
{
    unk0 = (int)&D_00276CE4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_000378D0 *C_000378D0::func_000378D0(int a)
{
    int i;
    func_00030F90(a);
    vtbl = &D_00276DDC;
    v294[0].init(); v294[1].init(); v294[2].init();
    for (i = 0; i < 9; i++) v4AC[i].init();
    arr[0].init(); arr[1].init(); arr[2].init(); arr[3].init();
    V4_378D0 *v = v5F0;
    i = 50;
    while (i--) { v->init(); v++; }
    v928.init2();
    v938.init2();
    f284 = 0;
    f288 = 0;
    f290 = 0;
    f28C = -1;
    v294[0].identity();
    v294[1].identity();
    v294[2].identity();
    f2C8[0] = 0; f2C8[1] = 0; f2C8[2] = 0; f2C8[3] = 0; f2C8[4] = 0; f2C8[5] = 0;
    f2C8[6] = 0; f2C8[7] = 0; f2C8[8] = 0; f2C8[9] = 0; f2C8[10] = 0; f2C8[11] = 0;
    f2C8[12] = 0; f2C8[13] = 0; f2C8[14] = 0; f2C8[15] = 0; f2C8[16] = 0; f2C8[17] = 0;
    f318 = 0; f31C = 0; f320 = 0;
    memset(s324, 0, 50);
    memset(s356, 0, 50);
    memset(s388, 0, 50);
    memset(s3BA, 0, 50);
    f55C = 0;
    f420 = 1;
    f424 = 500;
    memset(f428, 0, sizeof(f428));
    f474 = 1; f478 = 1;
    f47C = 0; f480 = 0; f484 = 0; f488 = 0;
    f48C = -1;
    f490 = 0; f494 = 0; f498 = 0; f49C = 0; f4A0 = 0;
    f4A4 = -1;
    f4A8 = 0;
    v4AC[0].identity(); v4AC[1].identity(); v4AC[2].identity();
    v4AC[3].identity(); v4AC[4].identity(); v4AC[5].identity();
    v4AC[6].identity(); v4AC[7].identity(); v4AC[8].identity();
    f53C = 0;
    C_378D0_Sub *p = (C_378D0_Sub *)func_001E8A44(0x44);
    if (p) {
        p->func_00157600(1);
        p->vtbl = &D_00276CE4;
        p->f24 = 0; p->f2C = 0; p->f28 = 0; p->f30 = 0; p->f34 = 0; p->f3C = 0; p->f40 = 0;
    } else p = 0;
    f540 = p;
    f544 = 0; f548 = 0; f54C = 0; f550 = 0; f554 = 0; f558 = 0; f55C = 0;
    f560 = 0; f564 = 0; f568 = 0; f56C = 0; f570 = 0; f574 = 0;
    f578 = -1;
    f57C = 0; f580 = 0; f584 = 0;
    f2C4 = 0;
    f588 = 0; f58C = 0; f590 = 0; f594 = 0; f598 = 0; f59C = 0;
    arr[0].alloc(200);
    arr[1].alloc(300);
    arr[2].alloc(50);
    arr[3].alloc(50);
    f910 = 0; f920 = 0; f924 = 0;
    f918 = D_00276CA4;
    f91C = 0; f914 = 0;
    v928.identity();
    v938.identity();
    f948 = 0;
    return this;
}

void BmxEventEditor::func_000380B0()
{
    char path[260];
    vtbl = &D_00276DDC;
    func_001ADCC0(path, 260, D_00276C34, D_002A5870, *(char **)(D_002A8490 + 0x2E0) + 0x4C);
    D_002BEAAC->func_0013DFF0(path, 1);
    D_002BEAAC->func_0013B260(0);
    for (int i = a.count - 1; i >= 0; i--) {
        S_000380B0_Node *node;
        if (a.count > 0 && a.data && i < a.count) node = ((S_000380B0_Node **)a.data)[i];
        else node = 0;
        if (node->count > 0) func_001E891B(node->data);
        func_001E891B(node);
    }
    a.clear();
    b.clear();
    c.clear();
    d.clear();
    func_001E891B(f49C);
    f544->v2(); f548->v2();
    if (f54C) f54C->v2();
    if (f53C) f53C->v2();
    if (f594) f594->v0(1);
    if (f59C) f59C->v0(1);
    if (f590) f590->v0(1);
    if (f598) f598->v0(1);
    char *p = *(char **)(D_002A8490 + 0x2E0);
    *(int *)(p + 0x190) = *(int *)(p + 0x1F0);
    func_001E891B(d.data);
    func_001E891B(c.data);
    func_001E891B(b.data);
    func_001E891B(a.data);
    func_00033220();
}

void BmxEventEditor::func_000382D0(int mode)
{
    V4_382D0 a, b, c, d;
    int idx;
    float t1, t2, t3;

    a.init();
    b.init();
    c.init();
    d.init();

    a = *(V4_382D0 *)((char *)f564->f10 + 0x24);
    d = v4BC;
    b = v4CC;
    c = v4DC;

    idx = *(int *)((char *)f64->f5A4 + f47C * 0x48 + 0x44) + f480;

    switch (mode) {
    case 0:
        d = *(V4_382D0 *)((char *)((f64->f5A8 > 0 && f64->f5AC != 0 && idx < f64->f5A8)
                                   ? f64->f5AC[idx] : 0) + 0x348);
        b.x = 1.0f; b.y = 0.0f; b.z = 0.0f;
        c.x = 0.0f; c.y = 1.0f; c.z = 0.0f;
        break;
    case 1:
        if (d.z > D_00275460) {
            d.z = d.z - D_00275460;
        }
        break;
    case 2:
        if (d.z < D_00275AE8) {
            d.z = D_00275460 + d.z;
        }
        break;
    case 3:
        if (d.y < D_00275AE8) {
            d.y = D_00275548 + d.y;
        }
        break;
    case 4:
        if (d.y > D_00275548) {
            d.y = d.y - D_00275548;
        }
        break;
    }

    if (v4BC.x != d.x || v4BC.y != d.y || v4BC.z != d.z) {
        t1 = (d.x > D_00275460 ? d.x - D_00275548 : d.x - D_00275460) * D_00275F64 + D_00275460;
        t2 = (d.y - D_00275548) * D_00275F64 + D_00275460;
        t3 = (d.z > D_00275460 ? d.z - D_00275548 : d.z - D_00275460) * D_00275F64 + D_00275460;
        f564->f8->func_0019A0A0(t1, t2, t3);
    }
    a.y = a.y - d.y;
    f564->f8->func_00199600(a);
    if (mode == 0) {
        f564->f8->func_00198F50(&b, &c, 0, 1, 0);
        f564->f8->func_0019AC50();
    }
    f564->f10->func_001BB950(&a, &d, &b, &c, 0);
    if (mode == 0) {
        f564->f8->func_00198F50(&b, &c, 0, 1, 0);
        f564->f8->func_0019AC50();
        f564->f8->func_0019AC50();
    }
    if (v4BC.x != d.x || v4BC.y != d.y || v4BC.z != d.z) {
        f53C->func_001A4100(3, 1, 0);
    }
    v4BC = d;
    v4CC = b;
    v4DC = c;
}
