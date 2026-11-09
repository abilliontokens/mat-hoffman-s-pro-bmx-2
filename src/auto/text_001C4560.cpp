/* 14 functions from 0x001C4560 to 0x001C4FB0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
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

extern int D_0028E5DC;
void *func_001E8A44(unsigned int size);

struct MotionBlur_Fx {
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
    char pad4[0x20];
    int f24;
    int f28;
    float f2C;
    int f30;
    int f34;
    void func_00157600(int a);
};

struct MotionBlur {
    void *vtbl;
    char pad4[0x20];
    int f24;
    char pad28[0x34];
    MotionBlur_Fx *f5C[4];
    MotionBlur_Fx *f6C;
    void func_001577A0(MotionBlur_Fx *fx, int flags);
    void func_001C4D90(void);
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

struct S_001C4560_This {
    char pad0[0x24];
    void *f24;
    char pad28[8];
    float f30;
    int f34;
    int func_001C4560();
};

struct S_1C4560_G {
    char pad0[0x10];
    int f10;
    char pad14[0x25c];
    int f270;
    int f274;
};
extern S_1C4560_G *D_002A8490;
extern float D_00275818;
extern float D_002AB4EC;
extern float D_002AB4F0;
struct S_1C4560_Mgr {
    char pad0[4];
    char *f4;
};
extern S_1C4560_Mgr *D_002EFDB8;
struct S_1C4560_Call {
    int func_00157920(void);
    int func_00157960(void);
};
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
    S_CrossFadeFx *Init(void)
    {
        ((C_00157600 *)this)->func_00157600(1);
        f24 = 0;
        f28 = 0;
        f2C = 1.0f;
        f30 = 0;
        f34 = 0;
        *(void **)this = (void *)&D_0028E554;
        return this;
    }
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

extern int D_0028E4CC;

/* one 0x44-byte ViewportFade layer */
struct S_ViewportFadeFx {
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
    char pad4[0x20];
    int f24;
    int f28;
    float f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    S_ViewportFadeFx *Init(void)
    {
        ((C_00157600 *)this)->func_00157600(1);
        f24 = 0;
        f28 = 0;
        f2C = 1.0f;
        f30 = 0;
        f34 = 0;
        *(void **)this = (void *)&D_0028E4CC;
        f38 = 0;
        f3C = 0;
        f40 = 0;
        return this;
    }
};

/* ViewportFade */
struct C_001C4A70 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    char pad28[0x30 - 0x28];
    S_ViewportFadeFx *a30[4];
    S_ViewportFadeFx *f40;
    void func_001577A0(void *child, int b);
    void func_001C4A70(void);
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

int S_001C4560_This::func_001C4560()
{
    void __stdcall func_0012B2B0(void *a, void *b);
    void __stdcall func_001D5AD0(void *fx);
    S_001C4560_This *volatile self = this;
    char *mgr;
    char *fx;
    int rect[6];
    int rect2[2];
    float x;
    float y;
    int result;
    int v;

    if (f34 != D_002A8490->f10 && f34 != -1) {
        ((S_1C4560_Call *)this)->func_00157920();
        return 0;
    }
    if (f34 == -1) {
        if (D_002A8490->f274 < D_002A8490->f270 - 1)
            goto realwork;
    }
    x = f30;
    y = D_00275818 - x * x * x * D_00275818;
    AsmFloatToIntRound(y, &result);
    if (result == 0) {
        ((C_001C4D50_Fx *)self)->v4();
        return 1;
    }
realwork:
    mgr = D_002EFDB8->f4;
    if (self->f34 == -1 && D_002A8490->f270 > 1) {
        *(int *)((char *)rect + 0x00) = *(int *)(mgr + 0x1e0);
        *(int *)((char *)rect + 0x04) = *(int *)(mgr + 0x1e4);
        *(int *)((char *)rect + 0x08) = *(int *)(mgr + 0x1e8);
        *(int *)((char *)rect + 0x0c) = *(int *)(mgr + 0x1ec);
        *(int *)((char *)rect + 0x10) = *(int *)(mgr + 0x1f0);
        *(int *)((char *)rect + 0x14) = *(int *)(mgr + 0x1f4);
        rect[0] = 0;
        rect[1] = 0;
        rect[4] = 0x280;
        rect[5] = 0x1c0;
        func_0012B2B0(rect, rect2);
    }
    fx = (char *)self->f24;
    if (*(float *)(fx + 0x4) == D_00275544 && *(float *)(fx + 0x8) == D_00275544) {
        *(int *)(fx + 0x4) = 0;
        *(int *)(fx + 0x8) = 0;
        *(unsigned char *)(fx + 0x58) |= 1;
    }
    v = *(int *)(mgr + 0x1e8);
    if (v < 0)
        y = (float)(v + 0x10000) / D_002AB4EC;
    else
        y = (float)v / D_002AB4EC;
    fx = (char *)self->f24;
    if (*(float *)(fx + 0x28) != y) {
        *(float *)(fx + 0x28) = y;
        *(unsigned char *)(fx + 0x58) |= 1;
    }
    v = *(int *)(mgr + 0x1ec);
    if (v < 0)
        y = (float)(v + 0x10000) / D_002AB4F0;
    else
        y = (float)v / D_002AB4F0;
    fx = (char *)self->f24;
    if (*(float *)(fx + 0x2c) != y) {
        *(float *)(fx + 0x2c) = y;
        *(unsigned char *)(fx + 0x58) |= 1;
    }
    fx = (char *)self->f24;
    *(int *)(fx + 0x38) = (*(int *)(fx + 0x38) & 0xffffff) | ((int)(*(short *)((char *)rect + 0x08)) << 24);
    *(unsigned char *)(fx + 0x58) |= 2;
    if (self->f34 != -1) {
        *(float *)(fx + 0x3c) = (float)(*(int *)(mgr + 0x1e4) + *(int *)(mgr + 0x1ec));
        *(float *)(fx + 0x40) = (float)*(int *)(mgr + 0x1e4);
        *(float *)(fx + 0x44) = (float)(*(int *)(mgr + 0x1e0) + *(int *)(mgr + 0x1e8));
        *(float *)(fx + 0x48) = (float)*(int *)(mgr + 0x1e0);
        *(unsigned char *)(fx + 0x58) |= 4;
    }
    fx = (char *)self->f24;
    func_001D5AD0(fx);
    if (self->f34 == -1 && D_002A8490->f270 > 1)
        func_0012B2B0(rect, 0);
    ((S_1C4560_Call *)self)->func_00157960();
    return 0;
}

void C_001C4A70::func_001C4A70(void)
{
    int i;
    void *mem;
    S_ViewportFadeFx *fx;

    for (i = 0; i < f24; i++) {
        mem = func_001E8A44(0x44);
        fx = mem != 0 ? ((S_ViewportFadeFx *)mem)->Init() : 0;
        a30[i] = fx;
        fx->v27(i);
        func_001577A0(a30[i], 10);
    }
    mem = func_001E8A44(0x44);
    fx = mem != 0 ? ((S_ViewportFadeFx *)mem)->Init() : 0;
    f40 = fx;
    fx->v27(-1);
    func_001577A0(f40, 10);
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

void C_001C4C30::func_001C4C30(void)
{
    int i;
    void *mem;
    S_CrossFadeFx *fx;

    for (i = 0; i < f24; i++) {
        mem = func_001E8A44(0x38);
        fx = mem != 0 ? ((S_CrossFadeFx *)mem)->Init() : 0;
        a48[i] = fx;
        fx->v27(i);
        func_001577A0(a48[i], 10);
    }
    mem = func_001E8A44(0x38);
    fx = mem != 0 ? ((S_CrossFadeFx *)mem)->Init() : 0;
    f58 = fx;
    fx->v27(-1);
    func_001577A0(f58, 10);
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

void MotionBlur::func_001C4D90(void)
{
    int i;
    MotionBlur_Fx *tmp;
    MotionBlur_Fx *p;

    for (i = 0; i < f24; i++) {
        tmp = (MotionBlur_Fx *)func_001E8A44(0x38);
        if (tmp != 0) {
            tmp->func_00157600(1);
            tmp->f24 = 0;
            tmp->f28 = 0;
            tmp->f2C = 1.0f;
            tmp->f30 = 0;
            tmp->f34 = 0;
            *(void **)tmp = &D_0028E5DC;
            p = tmp;
        } else {
            p = 0;
        }
        f5C[i] = p;
        p->v27(i);
        func_001577A0(f5C[i], 10);
    }
    tmp = (MotionBlur_Fx *)func_001E8A44(0x38);
    if (tmp != 0) {
        tmp->func_00157600(1);
        tmp->f24 = 0;
        tmp->f28 = 0;
        tmp->f2C = 1.0f;
        tmp->f30 = 0;
        tmp->f34 = 0;
        *(void **)tmp = &D_0028E5DC;
        p = tmp;
    } else {
        p = 0;
    }
    f6C = p;
    p->v27(-1);
    func_001577A0(f6C, 10);
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
