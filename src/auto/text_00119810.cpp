/* 4 functions from 0x00119810 to 0x0011A590, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"

extern int D_00283D5C;
extern int D_0027D3F0;

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() {}
    __forceinline void Set4(const f32 &x_, const f32 &y_, const f32 &z_, const f32 &w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
    void Set(f32 x_, f32 y_, f32 z_, f32 w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
    Vec4(f32 x_, f32 y_, f32 z_, f32 w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

static __forceinline Vec4 MakeVec4_0011A4B0(f32 a, f32 b, f32 c, f32 d)
{
    Vec4 r(a, b, c, d);
    return r;
}

static __forceinline Vec4 PlantPos_0011A4B0(const Vec4 &v, f32 h)
{
    Vec4 r;
    double dy = v.y;
    r.x = 0.0f;
    r.y = (float)dy;
    r.z = v.z + h;
    r.w = 1.0f;
    return r;
}

struct C_00157600 {
    void func_00157600(int a0);
};

struct S119_UI {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int vf5(int a, int b, int c);
};
struct S119_G8 {
    char pad0[0x38];
    S119_UI *f38;
};
struct S119_Obj1C4 {
    char pad0[0xe0];
    char fe0;
    void func_001048E0();
};
struct S119_Veh138 {
    char pad0[0x138];
    float f138;
};
struct S119_P2A4 {
    char pad0[0x170];
    S119_Veh138 *list[21];
    S119_Obj1C4 *f1c4;
    int f1c8;
};
struct S_002A8490_119810 {
    char pad0[8];
    S119_G8 *f8;
    char padC[0x124 - 0xC];
    int f124;
    char pad128[0x2a4 - 0x128];
    S119_P2A4 *f2a4;
};
extern S_002A8490_119810 *D_002A8490;
extern float D_00275460;

struct C_00198330;

struct S119_Obj {
    void func_00199650(void *a);
    void func_00198F50(void *a, void *b, int c, int d, int e);
    void func_00199C20(int a, void *b);
    void func_0019AD60(int a, void *b);
    void func_0019AC50();
    void func_00026270(float s);
    void func_00133ED0();
    void func_000B6A70(float a);
    C_00198330 *func_00198330(char *name);
    Vec4 *func_00199B00(Vec4 *out, int a);
    void func_001994C0(int a, Vec4 *b, Vec4 *c);
};

struct S119_Cam {
    void func_0011CA60(Vec4 v);
    void func_0009F4C0(int a);
};

struct S119_Entry {
    Vec4 a;
    Vec4 b;
    f32 d;
};

extern float D_002755E8;
extern char D_00283D44[];
extern char D_00282A40[];
extern char D_00282A00[];
extern char D_002829C0[];
extern char D_002829A8[];
extern int D_002B9264;
extern float D_002B9254, D_002B9258, D_002B925C, D_002B9260;
extern float D_002B9244, D_002B9248, D_002B924C, D_002B9250;
extern float D_002B9234, D_002B9238, D_002B923C, D_002B9240;
extern float D_002B9224, D_002B9228, D_002B922C, D_002B9230;
void func_00104A90(void *a, void *b);

#define VF(off, T) (*(T *)((char *)this + (off)))
#define VP(off) ((char *)this + (off))

struct BmxVehicle {
    int func_00119810(int a);
    void func_00027D40();
    int func_001091D0();
    void func_0010DC00();
    int func_0010DAB0();
    void func_00112A80(int a);
    void func_0010C210();
    void func_00105890();
    void func_00118840(int a);
    void func_0002EE30(int a);
    void func_00119680(int a);
    void func_00111C60(int a);
    void func_00105AA0();
    void func_001184E0(int a);
    void func_00113290(int a);
    void func_00105B30(int a);
    void func_00105CB0();
    void func_00106B20();
    void func_00106E30();
    int func_00157A00(int a);
};

struct C_00198330 {
    char pad0[0x144];
    f32 f144;
    C_00198330 *func_00198330(void *a0);
    void func_00199A70(C_00198330 *a0, Vec4 *a1);
    void func_00197E70(Vec4 *v);
    Vec4 *func_00197F70(Vec4 *out, Vec4 *in);
};

struct BmxWallPlantConstraint {
    void *vtbl;          /* 0x00 */
    char pad04[0x24];    /* 0x04 */
    C_00198330 *f28;     /* 0x28 */
    Vec4 f2C;            /* 0x2C */
    Vec4 f3C;            /* 0x3C */
    Vec4 f4C;            /* 0x4C */
    f32 f5C;             /* 0x5C */
    f32 f60;             /* 0x60 */
    f32 f64;             /* 0x64 */
    f32 f68;             /* 0x68 */
    f32 f6C;             /* 0x6C */
    f32 f70;             /* 0x70 */
    BmxWallPlantConstraint *func_0011A440(int param_1);
    void func_0011A4B0();
    void func_0011A550(Vec4 *a, Vec4 *b);
};

int BmxVehicle::func_00119810(int a)
{
    float sv;
    Vec4 vd;
    __declspec(align(16)) char v70[0x28];
    Vec4 ve;

    if (D_002A8490->f124 != 0) {
        if (*(char *)((char *)this + 0x12a8) < 0) {
            if (this->func_0010DAB0() != 0)
                return 1;
        }
    }
    if (D_002A8490->f2a4->f1c8 != 0) {
        ((S119_Obj *)VF(0x230, void *))->func_00199650(VP(0x834));
        ((S119_Obj *)VF(0x230, void *))->func_00198F50(VP(0x854), VP(0x874), 0, 1, 0);
        ((S119_Obj *)*(void **)(VF(0x1e0, char *) + 0x22c))->func_00199C20(0, v70);
        ((S119_Obj *)*(void **)(VF(0xa00, char *) + 4))->func_0019AD60(0, v70);
        ((S119_Obj *)VF(0x230, void *))->func_0019AC50();
        ((S119_Obj *)*(void **)(VF(0xa00, char *) + 4))->func_0019AC50();
    } else {
        if (VF(0x209c, int) != 0 && VF(0x1178, int) != 0 && VF(0x11f4, int) != 1 && VF(0x454, int) == 0 && VF(0x468, int) == 0) {
            VF(0x20a0, int) = 1;
            VF(0x209c, int) = 0;
        }
        if (VF(0x20a0, int) != 0) {
            VF(0x99c, int) = 0;
            VF(0x9bc, int) = 0;
            VF(0x964, int) = 0;
            VF(0x968, int) = 0;
            VF(0x9e0, int) = 1;
            this->func_00027D40();
            if (this->func_001091D0())
                VF(0x9a0, float) = 1.0f;
            else
                VF(0x9a0, int) = 0;
            if (VF(0x20a0, int) != 0 && VF(0x20a4, int) == 0 && VF(0x15d8, int) == 1 && (VF(0x15f4, float) >= D_00275460 || VF(0x1130, int) != 0)) {
                VF(0x20a4, int) = 1;
                this->func_0010DC00();
            }
        }
    }
    this->func_00112A80(a);
    {
        S119_UI *ui = D_002A8490->f8->f38;
        if (ui != 0) {
            if (ui->vf5(0x26, 0x3f, 0) != 0)
                this->func_0010C210();
        }
    }
    this->func_00105890();
    {
        S119_Veh138 *veh = D_002A8490->f2a4->list[VF(0xa2c, int)];
        sv = 1.0f;
        if (veh != 0)
            sv = veh->f138;
        ((S119_Obj *)VF(0x5ec, void *))->func_00026270(sv);
        ((S119_Obj *)VF(0x5f0, void *))->func_00026270(sv);
        ((S119_Obj *)VF(0x5f4, void *))->func_00026270(sv);
    }
    this->func_00118840(a);
    this->func_0002EE30(a);
    ((S119_Obj *)VF(0x204, void *))->func_00133ED0();
    ((S119_Obj *)VF(0x11b8, void *))->func_00133ED0();
    this->func_00119680(a);
    {
        S119_Obj1C4 *o = D_002A8490->f2a4->f1c4;
        if (o != 0 && (VF(0x468, int) == 0 || (VF(0x470, int) == 0 && VF(0x704, int) == 0)) && o->fe0 != 0)
            o->func_001048E0();
    }
    VF(0x460, int) = (VF(0x15d8, int) == 1);
    if (D_002A8490->f2a4->f1c8 == 0) {
        this->func_00111C60(a);
        this->func_00105AA0();
        this->func_001184E0(a);
        this->func_00113290(a);
        VF(0x1194, int) = VF(0x744, int);
        {
            int m = VF(0x5c8, int);
            if (m != 0 && m == 1)
                VF(0x5c8, int) = 2;
        }
        this->func_00105B30(a);
    }
    ((S119_Obj *)*(void **)(VF(0xa00, char *) + 4))->func_0019AC50();
    ((S119_Obj *)VF(0xa08, void *))->func_0019AC50();
    ((S119_Obj *)VF(0xa0c, void *))->func_0019AC50();
    ((S119_Obj *)VF(0xa10, void *))->func_0019AC50();
    ((S119_Obj *)VF(0xa14, void *))->func_0019AC50();
    if (D_002A8490->f2a4->f1c8 == 0)
        this->func_00105CB0();

    if (D_002A8490->f2a4->f1c8 != 0) {
        float dx = VF(0x834, float) - VF(0x844, float);
        float dy = VF(0x838, float) - VF(0x848, float);
        float dz = VF(0x83c, float) - VF(0x84c, float);
        *(Vec4 *)((char *)this + 0x844) = *(Vec4 *)((char *)this + 0x834);
        float t = 1.0f / (float)a;
        float sum = (dx * t) * (dx * t) + (dy * t) * (dy * t) + (dz * t) * (dz * t);
        float len = AsmSqrtF(sum);
        VF(0x1194, float) = len;
        VF(0x744, float) = len;
        ((S119_Obj *)VF(0x1e8, void *))->func_000B6A70(a);
        this->func_00106B20();
        this->func_00106E30();
        VF(0x11d0, int) = *(int *)(VF(0x20c, char *) + 0x30);
        VF(0x708, int) = VF(0x704, int);
        VF(0x710, int) = VF(0x70c, int);
    }

    if (VF(0x7d4, void *) != 0) {
        Vec4 va(0.0f, 0.0f, 0.0f, 1.0f);
        Vec4 vb(0.0f, 0.0f, 0.0f, 1.0f);
        Vec4 tmp;
        C_00198330 *p = ((S119_Obj *)*(void **)(VF(0xa00, char *) + 4))->func_00198330(D_00283D44);
        p->func_00197E70(&va);
        vb = va;
        vb.y = vb.y - 1.0f;
        va.y = va.y - 1.0f;
        va.z = va.z + 0.5f;
        va = *p->func_00197F70(&tmp, &va);
        vb = *p->func_00197F70(&tmp, &vb);
        ((S119_Cam *)VF(0x7d4, void *))->func_0011CA60(va);
        Vec4 d;
        d.x = va.x - vb.x;
        d.y = va.y - vb.y;
        d.z = va.z - vb.z;
        d.w = 1.0f;
        func_00104A90((char *)VF(0x7d4, void *) + 0x1fc, &d);
        if (VF(0x5c8, int) != 0 && *(int *)(VF(0x950, char *) + 0x124) != 0)
            ((S119_Cam *)VF(0x7d4, void *))->func_0009F4C0(1);
    }

    if (VF(0x1588, void *) != 0 && VF(0x158c, void *) != 0 && VF(0x1590, void *) != 0 && VF(0x1594, void *) != 0) {
        Vec4 va;
        Vec4 tmp;
        C_00198330 *p;

        p = ((S119_Obj *)*(void **)(VF(0xa00, char *) + 4))->func_00198330(D_00282A40);
        p->func_00197E70(&va);
        if (!(D_002B9264 & 1)) {
            D_002B9264 |= 1;
            D_002B9254 = 0.85f;
            D_002B9258 = 0.0f;
            D_002B925C = 0.0f;
            D_002B9260 = 1.0f;
        }
        va.x = va.x + D_002B9254;
        va.y = va.y + D_002B9258;
        va.z = va.z + D_002B925C;
        ((S119_Cam *)VF(0x1588, void *))->func_0011CA60(*p->func_00197F70(&tmp, &va));

        p = ((S119_Obj *)*(void **)(VF(0xa00, char *) + 4))->func_00198330(D_00282A00);
        p->func_00197E70(&va);
        if (!(D_002B9264 & 2)) {
            D_002B9264 |= 2;
            D_002B9244 = -0.85f;
            D_002B9248 = 0.0f;
            D_002B924C = 0.0f;
            D_002B9250 = 1.0f;
        }
        va.x = va.x + D_002B9244;
        va.y = va.y + D_002B9248;
        va.z = va.z + D_002B924C;
        ((S119_Cam *)VF(0x158c, void *))->func_0011CA60(*p->func_00197F70(&tmp, &va));

        p = ((S119_Obj *)*(void **)(VF(0xa00, char *) + 4))->func_00198330(D_002829C0);
        p->func_00197E70(&va);
        if (!(D_002B9264 & 4)) {
            D_002B9264 |= 4;
            D_002B9234 = 0.2f;
            D_002B9238 = 1.2f;
            D_002B923C = 0.3f;
            D_002B9240 = 1.0f;
        }
        va.x = va.x + D_002B9234;
        va.y = va.y + D_002B9238;
        va.z = va.z + D_002B923C;
        ((S119_Cam *)VF(0x1590, void *))->func_0011CA60(*p->func_00197F70(&tmp, &va));

        p = ((S119_Obj *)*(void **)(VF(0xa00, char *) + 4))->func_00198330(D_002829A8);
        p->func_00197E70(&va);
        if (!(D_002B9264 & 8)) {
            D_002B9264 |= 8;
            D_002B9224 = -0.2f;
            D_002B9228 = 1.2f;
            D_002B922C = 0.3f;
            D_002B9230 = 1.0f;
        }
        va.x = va.x + D_002B9224;
        va.y = va.y + D_002B9228;
        va.z = va.z + D_002B922C;
        ((S119_Cam *)VF(0x1594, void *))->func_0011CA60(*p->func_00197F70(&tmp, &va));
    }

    {
        Vec4 pos;
        Vec4 v;
        ve.x = 0.0f;
        ve.y = 0.0f;
        ve.z = 0.0f;
        ve.w = 1.0f;
        vd.x = 0.0f;
        vd.y = 0.0f;
        vd.z = 0.0f;
        vd.w = 1.0f;
        v = *((S119_Obj *)*(void **)(VF(0x1e0, char *) + 0x22c))->func_00199B00(&pos, 0);
        ((S119_Obj *)*(void **)(VF(0x1e0, char *) + 0x22c))->func_001994C0(0, &ve, &vd);
        S119_Entry *e = (S119_Entry *)((char *)this + 0x12ac) + VF(0x157c, int);
        float dx = v.x - e->a.x;
        float dy = v.y - e->a.y;
        float dz = v.z - e->a.z;
        float sum = dx * dx + dy * dy + dz * dz;
        float len = AsmSqrtF(sum);
        e->d = len;
        if (len > 1.0f) {
            VF(0x157c, int) = VF(0x1580, int);
            e = (S119_Entry *)((char *)this + 0x12ac) + VF(0x157c, int);
            e->a = v;
            e->b = vd;
            e->d = 0.0f;
            if (--VF(0x1580, int) < 0)
                VF(0x1580, int) = 0x13;
        }
    }
    return this->func_00157A00(a);
}

BmxWallPlantConstraint *BmxWallPlantConstraint::func_0011A440(int param_1)
{
    u32 *p;
    ((C_00157600 *)this)->func_00157600(param_1);
    vtbl = &D_00283D5C;
    p = (u32 *)&f2C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f3C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f4C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f5C = 0.1f;
    f60 = 0.03490658f;
    f64 = 0.05f;
    f68 = 0.01745329f;
    f70 = 15.707961f;
    f6C = 10.0f;
    return this;
}

void BmxWallPlantConstraint::func_0011A4B0()
{
    Vec4 v;
    v.z = 0.0f;
    v.y = 0.0f;
    v.x = 0.0f;
    v.w = 1.0f;
    C_00198330 *obj = f28->func_00198330(&D_0027D3F0);
    obj->func_00199A70(f28, &v);
    f32 h = obj->f144;
    Vec4 t;
    double dy = v.y;
    t.y = (float)dy;
    t.x = 0.0f;
    t.z = v.z + h;
    t.w = 1.0f;
    f2C = t;
}

void BmxWallPlantConstraint::func_0011A550(Vec4 *a, Vec4 *b)
{
    f3C = *a;
    f4C = *b;
}
