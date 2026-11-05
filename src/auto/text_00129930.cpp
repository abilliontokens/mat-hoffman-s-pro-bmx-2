/* 17 functions from 0x00129930 to 0x0012A870, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00283F64;
void func_001E891B(void *p);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern int D_00284008;
void *func_001E8A44(int size);

struct Vec4 {
    int x, y, z, w;
};

struct VCall31_129E10 {
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
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31(int a);
};

struct CacheNode_129930 {
    void *f0;
    int f4;
    CacheNode_129930 *f8;
};

struct CacheList_129930 {
    int f0;
    CacheNode_129930 *f4;
    void func_00160B90(void);
};

struct CacheVCall_129930 {
    virtual void *v0(int a, int b);
    virtual void v1(void *p);
    virtual void v2();
};

struct CacheEntry_12A310 {
    int f0;
    int f4;
    ~CacheEntry_12A310() { f0 = 0; f4 = 0; }
    static void operator delete(void *p) { func_001E891B(p); }
};

struct Cache_129930 {
    void *vtbl;
    int f4;
    int f8;
    CacheList_129930 *fC;
    void func_0012A2C0(void);
    void func_0012A310(CacheEntry_12A310 *p);
    void func_0012A330(void);
};

extern int D_00284018;
extern int D_002A3E3C;
extern const float D_00284034;

struct StaticCache_12A350 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    StaticCache_12A350 *func_0012A350(int a, int b);
};

struct Cam_12A770 {
    Cam_12A770 *func_00193490(void);
    void func_001938C0(void *a, int b, int c, void *vecA, void *vecB, int d);
};

struct Emitter_12A770 {
    char pad0[0x24];
    int f24;
    Cam_12A770 *f28;
    int f2C;
    char pad30[0x170 - 0x30];
    int f170;
    void func_0012A770(int a1, int a2);
};

struct Emitter_12A7C0 {
    void *vtbl;
    char pad4[0x1DC - 4];
    float f1DC;
    int f1E0;
    int f1E4;
    int f1E8;
    int f1EC;
    int f1F0;
    float f1F4;
    float f1F8;
    char pad1FC[0x204 - 0x1FC];
    int f204;
    int f208;
    int func_0012A7C0(int a, int b, int c, int d);
};

struct ListEntry_12A200 {
    int f0;
    int f4;
};

struct BoxCollisionObject {
    void *vtbl;
    char pad4[0x50];
    void *f54;
    char pad58[0x58];
    f32 matrix[16];
    Vec4 fF0;
    Vec4 f100;
    void func_00133E60();
    void func_00133090(int a, int b);
    void *func_0012A1C0(unsigned int flags);
    void func_00129930(Vec4 a1, Vec4 a2);
    void func_001299C0(Vec4 *p1, Vec4 *p2);
    void func_00129DF0(int a, int b);
    void func_00129E10(void);
};

void BoxCollisionObject::func_00129930(Vec4 a1, Vec4 a2)
{
    (**(code **)(*(int *)this + 0x6c))();
    fF0 = a1;
    f100 = a2;
    memset(matrix, 0, 0x40);
    matrix[0] = 1.0f;
    matrix[5] = 1.0f;
    matrix[10] = 1.0f;
    matrix[15] = 1.0f;
}

void BoxCollisionObject::func_001299C0(Vec4 *p1, Vec4 *p2)
{
    if (p1)
        fF0 = *p1;
    if (p2)
        f100 = *p2;
}

void BoxCollisionObject::func_00129DF0(int a, int b)
{
    func_00133090(a, b);
}

void BoxCollisionObject::func_00129E10(void)
{
    ((VCall31_129E10 *)this)->v31(0);
}

void *BoxCollisionObject::func_0012A1C0(unsigned int flags)
{
    vtbl = (void *)&D_00283F64;
    if (f54) {
        func_001E891B(f54);
        f54 = 0;
    }
    func_00133E60();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

ListEntry_12A200 * __stdcall func_0012A200(int a, int b)
{
    ListEntry_12A200 *p = (ListEntry_12A200 *)func_001E8A44(8);

    if (p != 0) {
        p->f0 = a;
        p->f4 = b;
        return p;
    }
    return 0;
}

void Cache_129930::func_0012A2C0(void)
{
    if (fC != 0) {
        CacheNode_129930 *n;
        CacheList_129930 *l;

        for (n = fC->f4; n != 0; n = n->f8) {
            ((CacheVCall_129930 *)this)->v1(n->f0);
        }
        l = fC;
        if (l != 0) {
            l->func_00160B90();
            func_001E891B(l);
        }
        fC = 0;
    }
}

void Cache_129930::func_0012A310(CacheEntry_12A310 *p)
{
    delete p;
}

void Cache_129930::func_0012A330(void)
{
    vtbl = (void *)&D_00284008;
    f4 = 0;
    f8 = 0;
    func_0012A2C0();
    f4 = 0;
    f8 = 0;
}

StaticCache_12A350 *StaticCache_12A350::func_0012A350(int a, int b)
{
    int *p = &f4;

    p[0] = 0;
    p[1] = 0;
    f4 = a;
    f8 = b;
    fC = 0;
    vtbl = (void *)&D_00284018;
    return this;
}

void Emitter_12A770::func_0012A770(int a1, int a2)
{
    Cam_12A770 *p = (Cam_12A770 *)func_001E8A44(0x28);

    f28 = p ? p->func_00193490() : 0;
    f2C = a1;
    f28->func_001938C0(&f24, a1, a2, &f170, &D_002A3E3C, 0);
}

int Emitter_12A7C0::func_0012A7C0(int a, int b, int c, int d)
{
    f1E0 = a;
    f1E4 = (int)D_00284034 + b;
    f1E8 = c;
    f1EC = d;
    f1F0 = 0;
    f1F4 = 1.0f;
    f1F8 = ((float)d / c) / (((float)f208 / f204) * f1DC);
    ((VCall31_129E10 *)this)->v28();
    return 1;
}

