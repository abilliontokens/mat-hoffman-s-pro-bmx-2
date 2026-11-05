/* 24 functions from 0x00030A30 to 0x000318A0, found by Ghidra. */
#include "common.h"
extern "C" char *strcpy(char *dst, const char *src);
extern "C" char *strcat(char *dst, const char *src);
#pragma intrinsic(strcpy)
#pragma intrinsic(strcat)
char *func_001E8AC0(const char *s, int c);

struct C_00030CD0 {
    char pad0[0x78];
    int unk78;
    void func_00030CD0(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00030F00 {
    void *vtbl;
    void *func_00030F00(unsigned int flags);
};

struct C_00030B20 {
    char pad0[0x170];
    float f170;
    float f174;
    float f178;
    char pad17c[0xBC];
    float f238;
    float f23c;
    float f240;
    void func_00030B20(float x, float y, float z, float w);
};


struct Vec4_00030A30 {
    float x;
    float y;
    float z;
    float w;
};

struct C_00030B90 {
    char pad0[0x180];
    float f180;
    float f184;
    float f188;
    char pad18c[0xdc];
    float f268;
    float f26c;
    float f270;
    void func_00030B90(float x, float y, float z, float w);
};

struct V_00031430 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
};

extern V_00031430 *D_002EFDB8;

struct C_001576C0 {
    void func_001576C0(void);
};

struct C_00031430 {
    void func_00031430(void);
};

struct V4_00030E70 {
    float x;
    float y;
    float z;
    float w;
    V4_00030E70() {}
    V4_00030E70(float x_, float y_, float z_, float w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct S_00030E70_Target {
    char pad0[0x190];
    float f190;
    float f194;
    float f198;
};

struct C_00030E70 {
    char pad0[0x58];
    V4_00030E70 f58;
    float f68;
    float f6c;
    float f70;
    char pad74[4];
    S_00030E70_Target *f78;
    int func_00030E70(int a0);
};

void __stdcall func_0001C750(V4_00030E70 a, V4_00030E70 b);

void *func_001E8A44(int size);
void func_001E891B(void *p);

struct C_0009A290 {
    char pad0[0x194];
    int f194;
    C_0009A290 *func_0009A290(void *a0, char *a1, int a2);
    void func_0009C770(void);
};

struct C_00031840 {
    char pad0[0x64];
    char *f64;
    char pad68[0x158];
    C_0009A290 *f1C0;
    void func_00031840(void);
};

struct VObj_00031450 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct Target_00031610 {
    void func_001A4100(int a0, int a1, int a2);
};

struct Obj_000317B0 {
    char pad0[0x170];
    Vec4_00030A30 f170;
    Vec4_00030A30 f180;
    Vec4_00030A30 f190;
};

struct Inner_000317B0 {
    char pad0[0x238];
    int f238;
};

struct Elem_000317B0 {
    char pad0[0x1e0];
    Inner_000317B0 *f1e0;
};

struct List_000317B0 {
    char pad0[0x1a8];
    Elem_000317B0 *f1a8[1];
};

struct Holder_000317B0 {
    char pad0[0x4e0];
    List_000317B0 *f4e0;
};

struct Mgr_000317B0 {
    void func_0001CCE0(int id, Vec4_00030A30 *a, Vec4_00030A30 *b, Vec4_00030A30 *c, void *extra);
};

struct Root_000317B0 {
    void *f0;
    Mgr_000317B0 *f4;
};

extern Root_000317B0 *D_002A8490;

struct BmxEvent_00030A30 {
    char pad0[0x24];
    Obj_000317B0 *f24[16];
    Holder_000317B0 *f64;
    char pad68[4];
    int f6c[9];
    int f90;
    char pad94[0x170 - 0x94];
    VObj_00031450 *f170[10];
    VObj_00031450 *f198;
    char pad19c[0x1d8 - 0x19c];
    Target_00031610 *f1d8;
    void func_00031450(void);
    void func_000314A0(void);
    void func_00031610(int a0, int a1);
    void func_000317B0(int flag);
};

void func_00030A30(Vec4_00030A30 *out, float x, float y, float z, float w, float *m)
{
    Vec4_00030A30 r;
    r.x = x * m[0] + (y * m[4] + z * m[8]);
    r.y = x * m[1] + (y * m[5] + z * m[9]);
    r.z = x * m[2] + (y * m[6] + z * m[10]);
    r.w = 1.0f;
    *out = r;
}

void func_00030AC0(float *out, float *v, float *m)
{
    out[0] = v[0] * m[0] + v[1] * m[1] + v[2] * m[2] + v[3] * m[3];
    out[1] = v[0] * m[4] + v[1] * m[5] + v[2] * m[6] + v[3] * m[7];
    out[2] = v[0] * m[8] + v[1] * m[9] + v[2] * m[10] + v[3] * m[11];
    out[3] = 1.0f;
}

void C_00030B20::func_00030B20(float x, float y, float z, float w)
{
    f170 = x + f170;
    f174 = y + f174;
    f178 = z + f178;
    f238 = x + f238;
    f23c = y + f23c;
    f240 = z + f240;
}

void C_00030B90::func_00030B90(float x, float y, float z, float w)
{
    f180 = x + f180;
    f184 = y + f184;
    f188 = z + f188;
    f268 = x + f268;
    f26c = y + f26c;
    f270 = z + f270;
}

void C_00030CD0::func_00030CD0(int a0) {
    unk78 = a0;
}

int C_00030E70::func_00030E70(int a0)
{
    float *p = &f58.x;
    func_0001C750(f58, V4_00030E70(f78->f190 + f68, f78->f194 + p[5], f78->f198 + p[6], 1.0f));
    return 1;
}

void *C_00030F00::func_00030F00(unsigned int flags)
{
    extern int D_00276A24;
    void func_001E891B(void *);

    vtbl = (void *)&D_00276A24;
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_00030F30(char *dst, const char *src)
{
    char *dot = func_001E8AC0(dst, '.');
    if (dot != 0) {
        strcpy(dot, src);
    } else {
        strcat(dst, src);
    }
}

void func_00031400(void) {
    int func_001578D0(...);
    func_001578D0();
}

int func_00031410(void) {
    int func_00157960(...);
    func_00157960();
    return 1;
}

void func_00031420(void) {
    int func_001576D0(...);
    func_001576D0();
}

void C_00031430::func_00031430(void)
{
    D_002EFDB8->v8();
    ((C_001576C0 *)this)->func_001576C0();
}

void BmxEvent_00030A30::func_00031450(void)
{
    int i;

    if (f198 != 0) {
        f198->v4();
    }
    for (i = 0; i < f90; i++) {
        if (f170[i] != 0) {
            f170[i]->v4();
        }
    }
}

void BmxEvent_00030A30::func_000314A0(void)
{
    int i;

    if (f198 != 0) {
        f198->v6();
    }
    for (i = 0; i < f90; i++) {
        if (f170[i] != 0) {
            f170[i]->v6();
        }
    }
}

void BmxEvent_00030A30::func_00031610(int a0, int a1)
{
    if (f1d8 != 0) {
        f1d8->func_001A4100(a0, a1, 0);
    }
}

void func_00031630(void) {
    int func_000314F0(...);
    func_000314F0();
}

void BmxEvent_00030A30::func_000317B0(int flag)
{
    int i;

    for (i = 0; i < f90; i++) {
        int id = f6c[i];

        if (id != -1) {
            void *extra;
            Obj_000317B0 *obj;

            if (flag != 0) {
                extra = &f64->f4e0->f1a8[i]->f1e0->f238;
            } else {
                extra = 0;
            }
            obj = f24[i];
            D_002A8490->f4->func_0001CCE0(id, &obj->f170, &obj->f180, &obj->f190, extra);
        }
    }
}

void C_00031840::func_00031840(void)
{
    void *m = func_001E8A44(0x19c);
    C_0009A290 *obj = m ? ((C_0009A290 *)m)->func_0009A290(this, f64 + 0x134, 0) : 0;

    f1C0 = obj;
    if (*(volatile int *)&obj->f194 != 0) {
        if (obj != 0) {
            obj->func_0009C770();
            func_001E891B(obj);
        }
        f1C0 = 0;
    }
}

