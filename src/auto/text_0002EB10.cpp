/* 11 functions from 0x0002EB10 to 0x0002FA80, found by Ghidra. */
#include "common.h"

extern int D_002768FC;
struct S_0002F6C0_Global {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(int); virtual void v8();
};
extern S_0002F6C0_Global *D_002EFDB8;
struct S_0002F6C0_Obj {
    virtual void v0(void *, int);
    virtual void v1(void *);
};
struct S_0002F6C0_Camera {
    void func_0012AC20(void *, void *, void *, void *, void *);
};
struct C_0002F6C0 {
    char pad0[0x30];
    S_0002F6C0_Camera *f30;
    char pad34[0x20];
    S_0002F6C0_Obj *f54;
    char pad58[8];
    S_0002F6C0_Obj *f60;
    S_0002F6C0_Obj *f64;
    char pad68[4];
    int f6c;
    void func_0012B7D0(void *, int, int, int, int);
    void func_0002F6C0();
    void func_0002F7B0();
    void func_0002F990();
};

struct C_0002F8A0 {
    char pad0[0x30];
    S_0002F6C0_Camera *f30;
    char pad34[0x1c];
    S_0002F6C0_Obj *f50;
    char pad54[0x18];
    int f6c;
    void func_0012B7D0(void *, int, int, int, int);
    void func_0002F8A0();
};

struct C_0002F190 {
    float m[12];
    C_0002F190 *func_0002F190(void);
};

struct BmxCameraController_0002EF20 {
    void *vtbl;
    char pad4[0x34 - 4];
    int unk34;
    char pad38[4];
    int unk3C;
    int unk40;
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    int unk54;
    int unk58;
    int unk5C;
    int unk60;
    int unk64;
    int unk68;
    int unk6C;
    int unk70;
    int unk74;
    void func_0012B550(int a0);
    BmxCameraController_0002EF20 *func_0002EF20(int a0);
};

BmxCameraController_0002EF20 *BmxCameraController_0002EF20::func_0002EF20(int a0)
{
    func_0012B550(a0);
    unk70 = 0;
    unk34 = 0;
    unk68 = 0;
    unk50 = 0;
    unk58 = 0;
    unk5C = 0;
    unk60 = 0;
    unk54 = 0;
    unk64 = 0;
    unk6C = 0;
    unk3C = 0;
    unk40 = 0;
    unk44 = 0;
    unk48 = 0;
    unk4C = 0;
    unk74 = 0;
    vtbl = &D_002768FC;
    return this;
}

C_0002F190 *C_0002F190::func_0002F190(void)
{
    unsigned int *p;

    p = (unsigned int *)&m[0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (unsigned int *)&m[4];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (unsigned int *)&m[8];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    return this;
}

void C_0002F6C0::func_0002F6C0()
{
    float m[12];
    float other[12];
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (f54) {
        f6c = 8;
        func_0012B7D0(f54, 0, 0, 0, 0);
        m[0] = m[1] = m[2] = 0.0f; m[3] = 1.0f;
        m[4] = m[5] = m[6] = 0.0f; m[7] = 1.0f;
        m[8] = m[9] = m[10] = 0.0f; m[11] = 1.0f;
        f54->v1(m);
        f30->func_0012AC20(m, m+4, m+8, other, other+1);
        f54->v0(m, 0);
    }
}

void C_0002F8A0::func_0002F8A0()
{
    float m[12];
    float other[12];
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (f50) {
        f6c = 0;
        func_0012B7D0(f50, 0, 0, 0, 0);
        m[2] = 0.0f; m[1] = 0.0f; m[0] = 0.0f; m[3] = 1.0f;
        m[6] = 0.0f; m[5] = 0.0f; m[4] = 0.0f; m[7] = 1.0f;
        m[10] = 0.0f; m[9] = 0.0f; m[8] = 0.0f; m[11] = 1.0f;
        f50->v1(m);
        f30->func_0012AC20(m, m+4, m+8, other, other+1);
        f50->v0(m, 0);
    }
}

void C_0002F6C0::func_0002F990()
{
    float m[12];
    float other[12];
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (f64) {
        f6c = 10;
        func_0012B7D0(f64, 0, 0, 0, 0);
        m[2] = 0.0f; m[1] = 0.0f; m[0] = 0.0f; m[3] = 1.0f;
        m[6] = 0.0f; m[5] = 0.0f; m[4] = 0.0f; m[7] = 1.0f;
        m[10] = 0.0f; m[9] = 0.0f; m[8] = 0.0f; m[11] = 1.0f;
        f64->v1(m);
        f30->func_0012AC20(m, m+4, m+8, other, other+1);
        f64->v0(m, 0);
    }
}

