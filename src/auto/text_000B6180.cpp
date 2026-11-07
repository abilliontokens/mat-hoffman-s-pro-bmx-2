/* 5 functions from 0x000B6180 to 0x000B6A70, found by Ghidra. */
#include "common.h"

extern int D_002BA154;
extern int D_002BA148;
extern int D_002B911C;
extern int D_000B6160;
void func_000B6140();
void *func_001E8A44(int size);

extern int D_0027D4C4;
struct Q4_000B6180 { int x, y, z, w; };
extern Q4_000B6180 D_002A2FD8;
extern int D_002A2FDC, D_002A2FE0, D_002A2FE4;
/* BmxSuspension */
struct C_000B6180 {
    int f0;
    C_000B6180 *func_000B6180(int a0);
    void func_00157600(int a0);
};

struct C_000B6640_Obj {
    char pad0[0x60];
    void *unk60;
    int unk64;
    char pad68[0x34];
    void *unk9C;
    C_000B6640_Obj *func_0017F050(int a0);
    void func_0017F0A0(int a0);
    void func_00133660(int a0);
    void func_00180E00(int a0, void *a1, int a2, int a3);
    void func_00133140(int a0, int a1);
};

struct V4_000B6840 {
    float x, y, z, w;
};

struct V4Init_000B6840 : V4_000B6840 {
    V4Init_000B6840() { x = y = z = 0; w = 1; }
    V4Init_000B6840(float a, float b, float c, float d) { y = b; x = a; z = c; w = d; }
};

struct C_000B6840_Mgr;
struct C_000B6840_Node {
    char pad0[0x144];
    float f144;
    void func_00199A70(C_000B6840_Mgr *m, V4_000B6840 *out);
};
struct C_000B6840_Mgr {
    C_000B6840_Node *func_00198330(char *name);
};
struct C_000B6840_Owner {
    char pad0[0x22c];
    C_000B6840_Mgr *f22c;
};
struct C_000B6840_Arg {
    char pad0[0x4ac];
    int *f4ac;
};
extern float D_00275544;
extern float D_00275460;
extern char D_0027D3F0[];
extern char D_0027D3FC[];

struct C_000B6640 {
    char pad0[0x78];
    float f78;
    float f7C;
    float f80;
    char pad84[4];
    int unk88;
    char pad8C[4];
    int unk90;
    char pad94[0xC];
    V4_000B6840 vA;
    V4_000B6840 vB;
    char padC0[0x20];
    V4_000B6840 vE0;
    V4_000B6840 vF0;
    char pad100[0xD0];
    C_000B6640_Obj *unk1D0;
    C_000B6640_Obj *unk1D4;
    C_000B6640 *func_000B6640(int a0, int a1);
    void func_001577A0(C_000B6640_Obj *child, int a1);
    void func_000B6840(float a0, float a1, C_000B6840_Arg *a2);
    void Box(V4_000B6840 *dst, V4_000B6840 *src)
    {
        double y = (0.0f - f7C) + src->y;
        *dst = V4Init_000B6840(src->x, (float)y, src->z, 1.0f);
    }
};

struct C_000B6810 {
    int unk0;
    void *func_000B6810(int flags);
    void func_00157660(void);
};

struct C_000B67C0 {
    char pad_0[0x50];
    int unk50;
    int unk54;
    char pad_58[0x64 - 0x58];
    int unk64;
    int unk68;
    int unk6C;
    void func_000B67C0(void);
};

C_000B6180 *C_000B6180::func_000B6180(int a0)
{
    int *u = (int *)this;
    int *p;

    func_00157600(a0);
    u[0] = (int)&D_0027D4C4;
    p = &u[0xa0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xb0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xc0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xd0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xe0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xf0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x100 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x110 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x120 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x130 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x140 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x150 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x160 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x170 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x180 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x190 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x1a0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x1b0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x1c0 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    u[0x24 / 4] = 1;
    u[0x28 / 4] = 0; u[0x2c / 4] = 0; u[0x30 / 4] = 0; u[0x34 / 4] = 0;
    u[0x40 / 4] = 0; u[0x44 / 4] = 0; u[0x50 / 4] = 0; u[0x54 / 4] = 0;
    u[0x38 / 4] = 0; u[0x3c / 4] = 0; u[0x48 / 4] = 0; u[0x4c / 4] = 0;
    u[0x5c / 4] = 0; u[0x60 / 4] = 0;
    u[0x70 / 4] = 0; u[0x74 / 4] = 0; u[0x78 / 4] = 0; u[0x7c / 4] = 0;
    u[0x80 / 4] = 0x3f800000;
    u[0x84 / 4] = 0x3f060a91;
    u[0x88 / 4] = 0; u[0x8c / 4] = 0; u[0x90 / 4] = 0;
    u[0x1d0 / 4] = 0; u[0x1d4 / 4] = 0;
    u[0xa0 / 4] = D_002A2FD8.x; u[0xa4 / 4] = D_002A2FDC; u[0xa8 / 4] = D_002A2FE0; u[0xac / 4] = D_002A2FE4;
    u[0xb0 / 4] = D_002A2FD8.x; u[0xb4 / 4] = D_002A2FDC; u[0xb8 / 4] = D_002A2FE0; u[0xbc / 4] = D_002A2FE4;
    u[0xc0 / 4] = D_002A2FD8.x; u[0xc4 / 4] = D_002A2FDC; u[0xc8 / 4] = D_002A2FE0; u[0xcc / 4] = D_002A2FE4;
    u[0xd0 / 4] = D_002A2FD8.x; u[0xd4 / 4] = D_002A2FDC; u[0xd8 / 4] = D_002A2FE0; u[0xdc / 4] = D_002A2FE4;
    u[0xe0 / 4] = D_002A2FD8.x; u[0xe4 / 4] = D_002A2FDC; u[0xe8 / 4] = D_002A2FE0; u[0xec / 4] = D_002A2FE4;
    u[0xf0 / 4] = D_002A2FD8.x; u[0xf4 / 4] = D_002A2FDC; u[0xf8 / 4] = D_002A2FE0; u[0xfc / 4] = D_002A2FE4;
    u[0x100 / 4] = D_002A2FD8.x; u[0x104 / 4] = D_002A2FDC; u[0x108 / 4] = D_002A2FE0; u[0x10c / 4] = D_002A2FE4;
    u[0x110 / 4] = D_002A2FD8.x; u[0x114 / 4] = D_002A2FDC; u[0x118 / 4] = D_002A2FE0; u[0x11c / 4] = D_002A2FE4;
    u[0x140 / 4] = D_002A2FD8.x; u[0x144 / 4] = D_002A2FDC; u[0x148 / 4] = D_002A2FE0; u[0x14c / 4] = D_002A2FE4;
    u[0x150 / 4] = D_002A2FD8.x; u[0x154 / 4] = D_002A2FDC; u[0x158 / 4] = D_002A2FE0; u[0x15c / 4] = D_002A2FE4;
    u[0x160 / 4] = D_002A2FD8.x; u[0x164 / 4] = D_002A2FDC; u[0x168 / 4] = D_002A2FE0; u[0x16c / 4] = D_002A2FE4;
    u[0x170 / 4] = D_002A2FD8.x; u[0x174 / 4] = D_002A2FDC; u[0x178 / 4] = D_002A2FE0; u[0x17c / 4] = D_002A2FE4;
    u[0x94 / 4] = 0; u[0x98 / 4] = 0;
    u[0x1d8 / 4] = 0; u[0x1dc / 4] = 0; u[0x1e0 / 4] = 0; u[0x1e4 / 4] = 0; u[0x1e8 / 4] = 0;
    return this;
}

C_000B6640 *C_000B6640::func_000B6640(int a0, int a1)
{
    C_000B6640_Obj *p;

    unk88 = a1;
    unk90 = a0;
    p = (C_000B6640_Obj *)func_001E8A44(0x110);
    unk1D0 = p ? p->func_0017F050(1) : 0;
    unk1D0->func_0017F0A0(2);
    func_001577A0(unk1D0, -1);
    unk1D0->func_00133660(D_002BA154);
    unk1D0->unk9C = (void *)func_000B6140;
    unk1D0->unk60 = this;
    unk1D0->unk64 = unk88;
    p = (C_000B6640_Obj *)func_001E8A44(0x110);
    unk1D4 = p ? p->func_0017F050(1) : 0;
    unk1D4->func_0017F0A0(2);
    func_001577A0(unk1D4, -1);
    unk1D4->func_00133660(D_002BA154);
    unk1D4->unk9C = (void *)&D_000B6160;
    unk1D4->unk60 = this;
    unk1D4->unk64 = unk88;
    unk1D0->func_00133660(D_002BA154);
    unk1D4->func_00133660(D_002BA154);
    unk1D0->func_00133660(D_002BA148);
    unk1D4->func_00133660(D_002BA148);
    unk1D0->func_00133660(D_002B911C);
    unk1D4->func_00133660(D_002B911C);
    return this;
}

void C_000B67C0::func_000B67C0(void)
{
 int p=(int)this;
 
 if(*(int*)(p+0x50) && *(int*)(p+0x54)) *(int*)(p+0x64)=1; else *(int*)(p+0x64)=0;
 if(*(int*)(p+0x50) || *(int*)(p+0x54)) *(int*)(p+0x68)=1; else *(int*)(p+0x68)=0;
 if ((*(int*)(p+0x50) && !*(int*)(p+0x54)) || (!*(int*)(p+0x50) && *(int*)(p+0x54))) *(int*)(p+0x6c)=1; else *(int*)(p+0x6c)=0;
}

void *C_000B6810::func_000B6810(int flags)
{
    extern int D_0027D4C4;
    void func_001E891B(void *);
    unk0 = (int)&D_0027D4C4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_000B6640::func_000B6840(float a0, float a1, C_000B6840_Arg *a2)
{
    V4Init_000B6840 line[2];

    if (f7C == D_00275544) {
        C_000B6840_Node *n = ((C_000B6840_Owner *)unk88)->f22c->func_00198330(D_0027D3F0);
        n->func_00199A70(((C_000B6840_Owner *)unk88)->f22c, &vA);
        vA.x = 0;
        f7C = n->f144;
        f80 = D_00275460 / f7C;
        n = ((C_000B6840_Owner *)unk88)->f22c->func_00198330(D_0027D3FC);
        n->func_00199A70(((C_000B6840_Owner *)unk88)->f22c, &vB);
        vB.x = 0;
        Box(&vE0, &vA);
        Box(&vF0, &vB);
    }
    f78 = a0;
    line[0] = V4Init_000B6840(0.0f, a1, 0.0f, 1.0f);
    line[1] = V4Init_000B6840(0.0f, -a0, 0.0f, 1.0f);
    unk1D0->func_00180E00(1, line, 1, 0);
    unk1D4->func_00180E00(1, line, 1, 0);
    unk1D0->func_00133140(*a2->f4ac, 2);
    unk1D4->func_00133140(*a2->f4ac, 2);
}
