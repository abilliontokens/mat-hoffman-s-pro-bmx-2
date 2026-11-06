/* 5 functions from 0x000B6180 to 0x000B6A70, found by Ghidra. */
#include "common.h"

extern int D_002BA154;
extern int D_002BA148;
extern int D_002B911C;
extern int D_000B6160;
void func_000B6140();
void *func_001E8A44(int size);

extern int D_0027D4C4;
extern int D_002A2FD8, D_002A2FDC, D_002A2FE0, D_002A2FE4;
struct C_000B6180 {
    int u[0x7c];
    C_000B6180 *func_000B6180(int a0);
    void func_00157600(int a0);
};
#define VEC(o) u[(o)/4+2] = 0; u[(o)/4+1] = 0; u[(o)/4] = 0; u[(o)/4+3] = 0x3f800000;
#define CPY(o) u[(o)/4] = D_002A2FD8; u[(o)/4+1] = D_002A2FDC; u[(o)/4+2] = D_002A2FE0; u[(o)/4+3] = D_002A2FE4;

extern int D_002A2FD8;

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
    V4Init_000B6840(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
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
        float y = (0.0f - f7C) + src->y;
        *dst = V4Init_000B6840(src->x, y, src->z, 1.0f);
    }
    void Box3(V4_000B6840 *dst, V4_000B6840 *src, float y)
    {
        *dst = V4Init_000B6840(src->x, y, src->z, 1.0f);
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
    int a = unk50;
    unk64 = (a != 0 && unk54 != 0);
    unk68 = (a != 0 || unk54 != 0);
    if (a == 0) {
        unk6C = (unk54 != 0);
    } else {
        unk6C = (unk54 == 0);
    }
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
