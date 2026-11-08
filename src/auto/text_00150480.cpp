/* 9 functions from 0x00150480 to 0x00151130, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
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

extern int D_0020C6DC, D_0020CA50, D_0020CA54;
void __stdcall func_001FD400(int);
struct C_00150480 {
    char pad0[0x21];
    unsigned char unk21;
    char pad22[2];
    int unk24;
    char pad28[0x14];
    int unk3C;
    int func_00150480();
};

struct S_002EFDB8 {
    char pad0[0x2C];
    int unk2C;
};
extern S_002EFDB8 *D_002EFDB8;

struct V3_150810 { float x, y, z; };
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

struct Vec3_150F80 { int x, y, z; };
struct Vec4_150F80 { float x, y, z, w; };
extern int D_002A789C, D_002A78A0, D_002A78A4, D_002A78A8;
struct Vec4_150900 {
    float x, y, z, w;
    __forceinline void reset_150F80(int *flag);
 __forceinline Vec4_150900 &operator=(const Vec4_150900 &v) {
 *(int*)&x=*(const int*)&v.x;*(int*)&y=*(const int*)&v.y;
 *(int*)&z=*(const int*)&v.z;*(int*)&w=*(const int*)&v.w; return *this;
 }
 __forceinline void reset_150A80() {
 *(int*)&x=D_002A789C;*(int*)&y=D_002A78A0;*(int*)&z=D_002A78A4;*(int*)&w=D_002A78A8;
 }
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
extern int D_002BA148;
struct State_150A80 { char p0[0x64]; void *f64; char p68[0x1c]; Vec4_150900 f84,f94; char pa4[0x34]; int fd8,fdc; };
struct Path_150A80 { char p0[0x74]; Vec4_150900 *f74,*f78; int f7c,f80; };
struct Arg_150A80 { char p0[0x50]; int f50; Path_150A80 *f54; char p58[8]; State_150A80 *f60; int f64,f68; };
struct Check_150A80 { char p0[0x4f4]; int f4f4; };
struct C_00150F80 { int u[445]; void func_00150F80(); };
__forceinline void Vec4_150900::reset_150F80(int *flag) {
    *(int *)&x=D_002A789C; *(int *)&y=D_002A78A0; *(int *)&z=D_002A78A4;
    int t=D_002A78A8; *flag=0; *(int *)&w=t;
}
static __forceinline void SetVec_150F80(Vec4_150F80 *dst, int *flag) {
    *dst = *(Vec4_150F80 *)&D_002A789C;
    *flag = 0;
}
static __forceinline void ResetVec_150F80(int *p) {
    p[0]=D_002A789C; p[1]=D_002A78A0; p[2]=D_002A78A4; p[3]=D_002A78A8;
}

int C_00150480::func_00150480()
{
    if ((unk21 & 1) && unk3C != 0) {
        D_0020C6DC |= 0x2000;
        D_0020CA50 = 1;
        func_001FD400(unk24);
        D_0020C6DC |= 0x2000;
        D_0020CA54 = 0;
    }
    return 1;
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
    unk4C = a5;
    unk44 = a3;
    unk48 = a4;
    unk30 = a1;
    unk2C = (a3 - a4) * a1 + a4;
    float t = (unk2C - a5) * (D_00275460 - a2);
    unk3C = 1;
    unk24 = a0;
    unk38 = 0x100;
    unk34 = a2;
    unk28 = t;
    D_002EFDB8->unk2C = a0;
    unk50 = 1;
    return this;
}

void func_00150890(float *out, float *in) {
    AsmVec3Normalize(out, in);
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

void func_00150970(char *a, char *b) {
 if (a != b && *(int *)(b+0x68) != D_002B911C && *(int *)(b+0x68) != D_002B9110) {
 volatile float t;
 volatile int v1, v2;
 char *obj = *(char **)(a+0x60);
 char *data = *(char **)(a+0x54);
 *(char **)(obj+0x64) = b;
 t = *(float *)(data+0x40); v1 = *(volatile int *)&t & 0x7fffffff;
 t = *(float *)(obj+0x68); v2 = *(volatile int *)&t & 0x7fffffff;
 if (*(volatile float *)&v1 > *(volatile float *)&v2) *(int *)(obj+0x68) = *(int *)(data+0x40);
 t = *(float *)(data+0x44); v1 = *(volatile int *)&t & 0x7fffffff;
 t = *(float *)(obj+0x6c); v2 = *(volatile int *)&t & 0x7fffffff;
 if (*(volatile float *)&v1 > *(volatile float *)&v2) *(int *)(obj+0x6c) = *(int *)(data+0x44);
 t = *(float *)(data+0x48); v1 = *(volatile int *)&t & 0x7fffffff;
 t = *(float *)(obj+0x70); v2 = *(volatile int *)&t & 0x7fffffff;
 if (*(volatile float *)&v1 > *(volatile float *)&v2) *(int *)(obj+0x70) = *(int *)(data+0x48);
 *(float *)(data+0x94) = 1.0f;
 } else a[0xa7] &= ~0x20;
}

#pragma optimize("g", off)
void func_00150A80(Arg_150A80 *a, Arg_150A80 *b)
{
    Vec4_150900 t;
    if (b->f68 == D_002B911C || b->f68 == D_002B9110)
        return;
    {
        State_150A80 *state = a->f60;
        state->f64 = b;
        Path_150A80 *path = a->f54;
        Vec4_150900 *p94 = &state->f94;
        Vec4_150900 *p84 = &state->f84;
        t = *(Vec4_150900 *)&D_002A789C;
        *p94 = t;
        t = *(Vec4_150900 *)&D_002A789C;
        *p84 = t;
        if (path->f80 > 0) {
            *p84 = path->f78[0];
            *p94 = path->f74[0];
        }
        state->fd8 = 1;
        if (b->f50 == 1 && b->f68 == D_002BA148) {
            Check_150A80 *check = *(Check_150A80 **)((char *)D_002B9120 + 0x528);
            if (check) {
                if (check->f4f4 == 1)
                    state->fd8 = 0;
                else
                    state->fdc = 1;
            }
        }
    }
}
#pragma optimize("", on)

void C_00150F60::func_00150F60(int a0, int a1) {
    int func_001D3F50(...);
    unk24 = a0;
    unk28 = a1;
    func_001D3F50();
}

void C_00150F80::func_00150F80() {
    ((C_00150900_obj *)u[0x2c/4])->unk1A4->unk4->func_00199600(*(Vec4_150900 *)&u[0x6dc/4]);
    u[0x4c/4] = u[0x6ec/4];
    u[0x48/4] = u[0x6f0/4];
    ((C_00150900_obj *)u[0x2c/4])->unk1A4->func_00132D20();
    ((V_150F80 *)this)->v18();
    u[0x584/4] = 1000;
    u[0x574/4] = 10;
    int *p = &u[0xe8/4];
    *(Vec4_150F80 *)p = *(Vec4_150F80 *)&D_002A789C;
    p = &u[0xf8/4];
    *(Vec4_150F80 *)p = *(Vec4_150F80 *)&D_002A789C;
    u[0x10c/4]=0;
    ((C_00150900_obj *)u[0x2c/4])->unk1A4->unk4->func_001983A0();
    Manager_150F80 *manager = D_002A8490->f2a4;
    manager->f44[u[9]]->f64->func_0009FAC0(D_002B9120->f4e4[u[9]]->unk2C->unk1A4->unk4);
    manager->f44[u[9]]->func_0002F990();
    manager->f284[u[9]]->func_0008D550();
    SetVec_150F80((Vec4_150F80 *)&u[0x120/4], &u[0xdc/4]);
    p = &u[0x1ac/4];
    for(int i=0;i<11;++i,p+=24) {
        p[-6]=0;
        ((V_150F80 *)p[-23])->func_00198390();
        ((V_150F80 *)p[-23])->v10();
        ((V_150F80 *)p[0])->v7c();
        ((V_150F80 *)p[0])->v80();
        ((V_150F80 *)p[0])->v10();
        ((V_150F80 *)p[-1])->v7c();
        ((V_150F80 *)p[-1])->v80();
        ((V_150F80 *)p[-1])->v10();
    }
}

