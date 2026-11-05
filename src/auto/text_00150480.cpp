/* 9 functions from 0x00150480 to 0x00151130, found by Ghidra. */
#include "common.h"
extern int D_002B911C, D_002B9110;
static inline float abs_150970(float v) { volatile float t = v; int bits = *(volatile int *)&t & 0x7fffffff; return *(float *)&bits; }
struct C_00150F60 {
    char pad0[0x24];
    int unk24;
    int unk28;
    void func_00150F60(int a0, int a1);
};

extern int D_00286B04;
extern float D_00275460;
void func_001E891B(void *);

struct C_001507E0 {
    void *vtbl;
    void *func_001507E0(int flags);
    void func_00157660();
};

struct S_002EFDB8 {
    char pad0[0x2C];
    int unk2C;
};
extern S_002EFDB8 *D_002EFDB8;

struct C_00150810 {
    char pad0[0x24];
    int unk24;
    float unk28;
    float unk2C;
    float unk30;
    float unk34;
    int unk38;
    int unk3C;
    char pad40[0x4];
    float unk44;
    float unk48;
    float unk4C;
    int unk50;
    C_00150810 *func_00150810(int a0, float a1, float a2, float a3, float a4, float a5);
    void func_001D3F50();
};

struct Vec4_150900 {
    float x, y, z, w;
};
extern float D_002A78BC;
extern float D_002A78CC;
extern float D_002A78C0;
extern float D_002A78C4;
extern float D_002A78C8;
extern float D_002A78D0;
extern float D_002A78D4;
extern float D_002A78D8;

struct C_00197B40 {
    void func_00197B40(Vec4_150900 *a0, Vec4_150900 *a1);
    void func_00199600(Vec4_150900 a);
    void func_001983A0();
};
struct C_00150900_sub {
    char pad0[0x4];
    C_00197B40 *unk4;
    void func_00132D20();
};
struct C_00150900_obj {
    char pad0[0x1A4];
    C_00150900_sub *unk1A4;
};
struct C_00150900 {
    char pad0[0x2C];
    C_00150900_obj *unk2C;
    void func_00150900(Vec4_150900 *a0, Vec4_150900 *a1);
};

extern int D_002A789C, D_002A78A0, D_002A78A4, D_002A78A8;
struct V_150F80 {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void v6c();
    virtual void v70();
    virtual void v74();
    virtual void v78();
    virtual void v7c();
    virtual void v80();
    void func_00198390();
    void func_0009FAC0(C_00197B40 *a);
    void func_0008D550();
};
struct Link_150F80 { char pad[0x64]; V_150F80 *f64; void func_0002F990(); };
struct Manager_150F80 { char pad[0x44]; Link_150F80 *f44[144]; V_150F80 *f284[4]; };
struct Global_150F80 { char pad[0x2a4]; Manager_150F80 *f2a4; };
struct Players_150F80 { char pad[0x4e4]; C_00150900 *f4e4[4]; };
extern Global_150F80 *D_002A8490;
extern Players_150F80 *D_002B9120;
struct C_00150F80 { int u[445]; void func_00150F80(); };
static __forceinline void ResetVec_150F80(int *p) {
    p[0]=D_002A789C; p[1]=D_002A78A0; p[2]=D_002A78A4; p[3]=D_002A78A8;
}

void *C_001507E0::func_001507E0(int flags) {
    vtbl = (void *)&D_00286B04;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_00150810 *C_00150810::func_00150810(int a0, float a1, float a2, float a3, float a4, float a5) {
    func_001D3F50();
    unk44 = a3;
    unk48 = a4;
    unk4C = a5;
    unk2C = (a3 - a4) * a1 + a4;
    unk30 = a1;
    unk34 = a2;
    unk24 = a0;
    unk28 = (D_00275460 - a2) * (unk2C - a5);
    unk38 = 0x100;
    unk3C = 1;
    D_002EFDB8->unk2C = a0;
    unk50 = 1;
    return this;
}

void C_00150900::func_00150900(Vec4_150900 *a0, Vec4_150900 *a1) {
    if (unk2C == 0) {
        int *d0 = (int *)a0;
        int *d1 = (int *)a1;
        d0[0] = *(int *)&D_002A78CC;
        d0[1] = *(int *)&D_002A78D0;
        d0[2] = *(int *)&D_002A78D4;
        d0[3] = *(int *)&D_002A78D8;
        d1[0] = *(int *)&D_002A78BC;
        d1[1] = *(int *)&D_002A78C0;
        d1[2] = *(int *)&D_002A78C4;
        d1[3] = *(int *)&D_002A78C8;
        return;
    }
    unk2C->unk1A4->unk4->func_00197B40(a0, a1);
}

void C_00150F60::func_00150F60(int a0, int a1) {
    int func_001D3F50(...);
    unk24 = a0;
    unk28 = a1;
    func_001D3F50();
}

