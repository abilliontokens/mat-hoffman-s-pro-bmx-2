/* 14 functions from 0x001C4560 to 0x001C4FB0, found by Ghidra. */
#include "common.h"
struct C_001C4F70 {
    void func_0017C300(void);
    void func_0017C360(int a1, int a2, int a3, int a4, int a5);
    C_001C4F70 *func_001C4F70(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

struct C_001C4FA0 {
    char pad0[0x8B4];
    int unk8B4;
    void func_001C4FA0(int a0);
};

extern int D_0028E664;
extern int D_0028E454;
extern int D_0028E3D4;
extern void *D_002F07E8;
extern float D_00276098;
void func_001E891B(void *p);

struct C_00157660 {
    void func_00157660(void);
};

/* VisibilityQuadTree */
struct C_001C4F40 {
    void *vtbl;
    char pad4[0x88];
    int f8C;
    char pad90[0x7F0];
    int f880;
    char pad884[0x30];
    int f8B4;
    void func_00192720(void);
    C_001C4F40(void);
};

struct C_001C4D50_Fx {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x24];
    int f28;
    float f2C;
    float f30;
};

struct C_001C4D50 {
    char pad0[0x58];
    C_001C4D50_Fx *f58;
    void func_001C4D50(int a0);
};

/* ScreenTransition */
struct C_001C4EA0_Obj {
    virtual void v0(int flags);
};

struct C_001C4EA0 {
    void *vtbl;
    char pad4[0x20];
    C_001C4EA0_Obj *f24;
    void *func_001C4EA0(int flags);
};

/* VideoFXManager */
struct C_001C4EE0_Obj {
    void func_001D5360(void);
};

struct C_001C4EE0 {
    void *vtbl;
    char pad4[0x24];
    C_001C4EE0_Obj *f28;
    C_001C4EE0_Obj *f2C;
    void *func_001C4EE0(int flags);
};


C_001C4F40::C_001C4F40(void)
{
    func_00192720();
    vtbl = &D_0028E664;
    D_002F07E8 = this;
    f880 = 0;
    f8C = 0;
    f8B4 = 0;
}

void C_001C4D50::func_001C4D50(int a0)
{
    C_001C4D50_Fx *fx = f58;

    fx->f2C = (float)a0 * D_00276098;
    fx->f28 = 0;
    if (a0 == 0) {
        fx->f30 = 1.0f;
    } else {
        fx->f30 = 0.0f;
    }
    fx->v6();
}

void *C_001C4EA0::func_001C4EA0(int flags)
{
    vtbl = &D_0028E454;
    if (f24 != 0) {
        f24->v0(1);
    }
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001C4EE0::func_001C4EE0(int flags)
{
    C_001C4EE0_Obj *p = f28;

    vtbl = &D_0028E3D4;
    if (p != 0) {
        p->func_001D5360();
        func_001E891B(p);
    }
    p = f2C;
    if (p != 0) {
        p->func_001D5360();
        func_001E891B(p);
    }
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_001C4F70 *C_001C4F70::func_001C4F70(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    func_0017C300();
    func_0017C360(a1, a3, a4, a6, a7);
    return this;
}

void C_001C4FA0::func_001C4FA0(int a0) {
    unk8B4 = a0;
}
