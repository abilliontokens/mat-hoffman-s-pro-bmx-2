/* 2 functions from 0x0003D220 to 0x0003D910, found by Ghidra. */
#include "common.h"
#include <string.h>

struct Vec4_3D220 { float x, y, z, w; };
void *func_001E8A44(unsigned int size);
void func_001E891B(void *p);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
extern float D_00275AEC;
extern float D_00275460;
extern float D_00275548;
extern float D_00275F64;
struct Node_3D220 { int f0; int f4; void *f8; int fc; void *f10; int f14; int f18; };
struct Mgr_3D220 { void func_001577A0(void *obj, int arg); };
struct Obj_3D220 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
    virtual void v80(); virtual void v84(); virtual void v88();
    virtual int v8c(const char *name, int a, int b);
    char pad04[0x28 - 4];
    char name[0x1a3 - 0x28];
    unsigned char f1a3;
    Obj_3D220 *func_00143580(int a);
    void func_00198F50(void *a, void *b, int c, int d, int e);
    void func_0019ABA0(int a, int b);
    void func_0019A0A0(float a, float b, float c);
    void func_00199600(Vec4_3D220 v);
    void func_0019AC50();
};
struct Obj2_3D220 {
    virtual ~Obj2_3D220();
    Obj2_3D220 *func_001BB680(int a);
    int func_001BC040(Vec4_3D220 a, Vec4_3D220 b, Vec4_3D220 c, Vec4_3D220 d, int e, int f, int g, int h);
    void func_001BBAE0(int a);
};
struct Track_3D220 { char pad[0x44]; int f44; };
struct NameList_3D220 {
    int count; char **data;
    char *get(int i) { return (count > 0 && data && i < count) ? data[i] : 0; }
};
template <class T> inline T Min_3D220(const T &a, const T &b) { return (b < a) ? b : a; }
struct Game_3D220 {
    char pad0[0x3a8]; Mgr_3D220 **f3a8;
    char pad1[0x4a8 - 0x3ac]; int *f4a8; int *f4ac;
    char pad2[0x5a4 - 0x4b0]; Track_3D220 *f5a4; NameList_3D220 names;
};
struct Sub_3D220 { char pad[0x10]; char *f10; };
struct Ctl_3D220 { void func_0008A970(); };
struct Obj3D {
    char pad0[0x64]; Game_3D220 *f64;
    char pad1[0x2cc - 0x68]; int flag2cc;
    char pad2[0x474 - 0x2d0]; int f474;
    char pad3[0x47c - 0x478]; int f47c; int f480;
    char pad4[0x4a8 - 0x484]; int f4a8;
    char pad5[0x4bc - 0x4ac]; Vec4_3D220 f4bc; Vec4_3D220 f4cc; Vec4_3D220 f4dc;
    char pad6[0x554 - 0x4ec]; Ctl_3D220 *f554;
    char pad7[0x564 - 0x558]; Sub_3D220 *f564;
    void func_000399A0(int a);
    void func_0003AD50();
    int func_0003D220();
};

#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline void S_3D7B0_Round(int *out, float f)
{
    int * volatile p = out;

    *p = _mm_cvtss_si32(*(__m128 *)&f);
}
struct S_3D7B0_Vec4 { float x, y, z, w; };
struct C_3D7B0 {
    char pad0[0x428]; int f428; int f42c; int f430;
    char pad1[0x44c - 0x434]; int f44c; int f450; int f454;
    char pad2[0x45c - 0x458]; int f45c; int f460;
    char pad3[0x49c - 0x464]; int *f49c;
          char pad4[0x564 - 0x4a0]; void *f564;
      int *func_000389C0(int cell);
    int func_0003D7B0(S_3D7B0_Vec4 v);
};

int Obj3D::func_0003D220()
{
    Obj3D *volatile self = this;
    *(volatile int *)&flag2cc = 1;
    Obj3D *s = self;
    int idx = s->f64->f5a4[s->f47c].f44 + s->f480;
    Node_3D220 *node;
    Node_3D220 *m = (Node_3D220 *)func_001E8A44(0x1c);
    if (m) {
        m->f0 = -1;
        m->f4 = 0;
        m->f8 = 0;
        m->fc = 0;
        m->f10 = 0;
        m->f14 = 0;
        m->f18 = 0;
        node = m;
    } else {
        node = 0;
    }
    Obj_3D220 *om = (Obj_3D220 *)func_001E8A44(0x1e0);
    Obj_3D220 *obj = om ? om->func_00143580(1) : 0;
    Vec4_3D220 v = *(Vec4_3D220 *)(self->f564->f10 + 0x24);
    switch (self->f4a8) {
    case 0: v.x -= D_00275AEC; break;
    case 1: v.x = *(volatile float *)&v.x + D_00275AEC; break;
    case 2: v.z -= D_00275AEC; break;
    case 3: v.z = *(volatile float *)&v.z + D_00275AEC; break;
    case 4: v.x -= D_00275AEC; v.z -= D_00275AEC; break;
    case 5: v.x -= D_00275AEC; v.z = *(volatile float *)&v.z + D_00275AEC; break;
    case 6: v.x = *(volatile float *)&v.x + D_00275AEC; v.z -= D_00275AEC; break;
    case 7: v.x = *(volatile float *)&v.x + D_00275AEC; v.z = *(volatile float *)&v.z + D_00275AEC; break;
    }
    if (obj->v8c(self->f64->names.get(idx), 0, 1)) {
        float a = ((self->f4bc.x > D_00275460) ? self->f4bc.x - D_00275548 : self->f4bc.x - D_00275460) * D_00275F64 + D_00275460;
        float b = (self->f4bc.y - D_00275548) * D_00275F64 + D_00275460;
        float c = ((self->f4bc.z > D_00275460) ? self->f4bc.z - D_00275548 : self->f4bc.z - D_00275460) * D_00275F64 + D_00275460;
        volatile int len = strlen(self->f64->names.get(idx));
        volatile int lim = 0x7f;
        int n = AsmMinI(lim, len);
        func_001E8920(obj->name, self->f64->names.get(idx), n);
        obj->name[n] = 0;
        obj->func_00198F50(&self->f4cc, &self->f4dc, 1, 0, 0);
        obj->f1a3 &= ~8;
        obj->func_0019ABA0(*self->f64->f4a8, 2);
        (*self->f64->f3a8)->func_001577A0(obj, 0);
        obj->func_0019A0A0(a, b, c);
        Vec4_3D220 w = v;
        w.y = v.y - self->f4bc.y;
        obj->func_00199600(w);
        obj->func_0019AC50();
    }
    node->f8 = obj;
    Obj2_3D220 *om2 = (Obj2_3D220 *)func_001E8A44(0x2f0);
    Obj2_3D220 *obj2 = om2 ? om2->func_001BB680(1) : 0;
    v = *(Vec4_3D220 *)(self->f564->f10 + 0x24);
    switch (self->f4a8) {
    case 0: v.x -= D_00275AEC; break;
    case 1: v.x = *(volatile float *)&v.x + D_00275AEC; break;
    case 2: v.z -= D_00275AEC; break;
    case 3: v.z = *(volatile float *)&v.z + D_00275AEC; break;
    case 4: v.x -= D_00275AEC; v.z -= D_00275AEC; break;
    case 5: v.x -= D_00275AEC; v.z = *(volatile float *)&v.z + D_00275AEC; break;
    case 6: v.x = *(volatile float *)&v.x + D_00275AEC; v.z -= D_00275AEC; break;
    case 7: v.x = *(volatile float *)&v.x + D_00275AEC; v.z = *(volatile float *)&v.z + D_00275AEC; break;
    }
    if (obj2->func_001BC040(v, self->f4bc, self->f4cc, self->f4dc, 0, 0, 0x64, 0)) {
        obj2->func_001BBAE0(*self->f64->f4ac);
        ((Mgr_3D220 *)self->f64)->func_001577A0(obj2, -1);
        node->f0 = 1;
        node->f10 = obj2;
        self->f554->func_0008A970();
        self->f474 = 7;
        self->f564 = (Sub_3D220 *)node;
        self->func_000399A0(0);
        self->func_0003AD50();
        return 1;
    }
    delete obj2;
    func_001E891B(node);
    return 0;
}

int C_3D7B0::func_0003D7B0(S_3D7B0_Vec4 v)
{
    S_3D7B0_Vec4 d = v;
    int ix;
    int iy;
    int iz;

    d.x -= (float)f428;
    d.y -= (float)f42c;
    d.z -= (float)f430;
    AsmFloatToIntRound(d.x, &ix);
    AsmFloatToIntRound(d.y, &iy);
    AsmFloatToIntRound(d.z, &iz);
    ix = ix / 10;
    iy = iy / 5;
    iz = iz / 10;
    ix += f44c;
    iy += f450;
    iz += f454;
    int cell = f49c[(f45c * ix + iy) * f460 + iz];
    if (cell == 0)
        return 0;
    this->f564 = func_000389C0(cell);
    return f564 != 0;
}
