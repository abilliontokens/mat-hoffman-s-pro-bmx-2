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

extern float D_002755E0;
extern float D_00275544;

struct FadeSub_001C4B60 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x24];
    f32 f28;
    f32 f2C;
    f32 f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int func_001C4180(int a0);
    int func_001C41E0(int a0);
};

struct FadeLevel_001C4E70 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x28];
    int f2C;
    f32 f30;
};

struct VideoCardObj_001C4B60 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int a0);
};

extern VideoCardObj_001C4B60 *D_002F07B8;

struct FadeManager_001C4B60 {
    char pad0[0x40];
    FadeSub_001C4B60 *f40;
    int f44;
    C_001C4D50_Fx *a48[9];
    FadeLevel_001C4E70 *f6C;
    int func_001C4B60(int a0, int a1);
    int func_001C4BD0(int a0, int a1);
    void func_001C4D10(int idx, int v);
    void func_001C4E70(f32 v);
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

struct C_00157600 {
    void func_00157600(int a);
};

extern int D_0028E554;
void *func_001E8A44(int size);

/* one 0x38-byte CrossFade layer */
struct S_CrossFadeFx {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27(int a);
    char pad4[0x20 - 0x4 + 0x4];
    int f24;
    int f28;
    float f2C;
    int f30;
    int f34;
};

/* CrossFade */
struct C_001C4C30 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    char pad28[0x48 - 0x28];
    S_CrossFadeFx *a48[4];
    S_CrossFadeFx *f58;
    void func_001577A0(void *child, int b);
    void func_001C4C30(void);
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

int FadeManager_001C4B60::func_001C4B60(int a0, int a1)
{
    if (f40->f38 != 0) {
        return 0;
    }
    if (a1 != 0) {
        f40->func_001C4180(a0);
    } else {
        D_002F07B8->v4(a0);
        f40->f40 = 1;
        f40->f38 = 0;
        f40->f3C = 0;
        f40->f30 = 0;
    }
    return 1;
}

int FadeManager_001C4B60::func_001C4BD0(int a0, int a1)
{
    if (f40->f3C != 0) {
        return 0;
    }
    if (a1 != 0) {
        f40->func_001C41E0(a0);
        return 1;
    }
    f44 = 1;
    f40->f40 = 0;
    f40->f38 = 0;
    f40->f3C = 0;
    f40->f30 = 0;
    f40->f2C = (f32)a0;
    return 1;
}

void FadeManager_001C4B60::func_001C4D10(int idx, int v)
{
    C_001C4D50_Fx *fx = a48[idx];

    fx->f2C = (f32)v * D_00276098;
    fx->f28 = 0;
    if (v == 0) {
        fx->f30 = 1.0f;
    } else {
        fx->f30 = 0.0f;
    }
    fx->v6();
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

void FadeManager_001C4B60::func_001C4E70(f32 v)
{
    FadeLevel_001C4E70 *p = f6C;

    v = v * 0.01f;
    p->f2C = 0;
    p->f30 = v;
    if (v > D_00275544) {
        p->v6();
    }
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
