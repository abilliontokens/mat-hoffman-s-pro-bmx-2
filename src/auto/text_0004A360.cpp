/* 8 functions from 0x0004A360 to 0x0004AD10, found by Ghidra. */
#include "common.h"

extern int D_0027718C;
void func_001E891B(void *p);
void func_00011260(int a, int b);

struct S_Item2C0 {
    int func_0005C0A0(void);
    void func_0005C1E0(int param_1);
    void func_0005C090(void);
};

struct S_Mgr2E0 {
    int f0;
    char pad4[0x2c0 - 4];
    S_Item2C0 *f2c0;
};

struct S_Global {
    char pad0[0x124];
    int f124;
    char pad128[0x2e0 - 0x128];
    S_Mgr2E0 *f2e0;
};

extern S_Global *D_002A8490;

struct S_Obj1AC {
    void func_000758F0(void);
};

struct S_Obj284 {
    char pad0[0x60];
    int f60;
};

struct S_Obj2D0 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    void func_001394F0(int param_1);
};

struct S_Obj12140 {
    void func_00012140(void);
};

struct S_Vec4Pod {
    float x, y, z, w;
};

struct S_Vec4 : S_Vec4Pod {
    S_Vec4() { z = 0; y = 0; x = 0; w = 1.0f; }
    S_Vec4(float nx, float ny, float nz) { x = nx; y = ny; z = nz; w = 1.0f; }
    S_Vec4 &operator=(const S_Vec4Pod &p) { x = p.x; y = p.y; z = p.z; w = p.w; return *this; }
};

struct S_Overlay {
    void func_00088A40(int a, S_Vec4 *v);
};

extern S_Vec4Pod D_002A15B0;
extern float D_00277240;
void func_000499B0(S_Vec4Pod *out, S_Vec4Pod *in);
float func_0014FBA0(float x, float z);

struct C_001983A0 {
    S_Vec4Pod *func_00199B00(S_Vec4Pod *out, int a);
    S_Vec4Pod func_00198040(S_Vec4Pod *in);
    void func_001983A0(void);
    void func_00198390(void);
};

struct S_Obj488 {
    void func_0016F7B0(void);
};

/* base reached through virtual inheritance */
struct S_PartBase {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
};

struct S_Part : virtual S_PartBase {
    C_001983A0 *f4;
};

struct S_Obj1A4 {
    char pad0[0x1a4];
    S_Part *f1a4;
};

struct S_Obj80 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
};

struct S_Item80 {
    char pad0[4];
    S_Obj1A4 *f4;
    char pad8[0x80 - 8];
    S_Obj80 *f80;
};

struct S_Anim150 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    void func_00198390(void);
};

struct S_Ctl1A4 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0a(); virtual void v0b();
    virtual void v0c(); virtual void v0d(); virtual void v0e(); virtual void v0f();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1a(); virtual void v1b();
    virtual void v1c(); virtual void v1d(); virtual void v1e(); virtual void v1f();
    virtual void v20();
};

struct S_Slot60 {
    S_Anim150 *f0;
    char pad4[0x44 - 4];
    int f44;
    char pad48[0x54 - 0x48];
    S_Ctl1A4 *f54;
    S_Ctl1A4 *f58;
    S_Ctl1A4 *f5c;
};

struct S_Obj4E4 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    char pad4[0x2c - 4];
    S_Obj1A4 *f2c;
    char pad30[0x150 - 0x30];
    S_Slot60 f150[11];
    void func_00150F80(void);
};

struct S_Obj3C {
    char pad0[4];
    C_001983A0 *f4;
};

struct S_Obj528 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    char pad4[0x3c - 4];
    S_Obj3C *f3c;
    void func_00018EB0(void);
};

struct S_List {
    char pad0[0x488];
    S_Obj488 *f488;
    char pad48c[0x4e4 - 0x48c];
    S_Obj4E4 *f4e4[16];
    S_Item80 **f524;
    S_Obj528 *f528;
    char pad52c[0x560 - 0x52c];
    int f560;
};

extern S_List *D_002B9120;

struct BmxEventFPS {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual void dummy27();
    virtual void dummy28();
    virtual void dummy29();
    virtual void dummy30();
    virtual void dummy31();
    virtual void dummy32();
    virtual void dummy33();
    virtual void dummy34();
    virtual void dummy35();
    virtual void dummy36();
    virtual void dummy37();
    virtual void dummy38();
    virtual void dummy39();
    char pad4[0x64 - 4];
    S_List *f64;
    char pad68[0x1a8 - 0x68];
    S_Obj1AC *f1a8;
    S_Obj1AC *f1ac;
    char pad1b0[0x284 - 0x1b0];
    S_Obj284 *f284;
    char pad288[0x2a4 - 0x288];
    S_Overlay *f2a4;
    S_Overlay *f2a8;
    char pad2ac[0x2d0 - 0x2ac];
    S_Obj2D0 *f2d0;
    int f2d4;
    int f2d8;
    char pad2dc[0x2e4 - 0x2dc];
    S_Obj12140 *f2e4;
    S_Obj12140 *f2e8;
    void func_00033220(void);
    void func_00033320(int param_1, int param_2);
    void func_0004A360(void);
    void func_0004A590(void);
    void func_0004A6A0(void);
    void func_0004AC70(int param_1, int param_2);
    void func_0004AAD0(void);
    void func_0004AB90(int param_1);
    void func_0004ACB0(void);
};

static __forceinline S_Vec4Pod GetPos_0004A6A0(S_Obj4E4 *o)
{
    S_Vec4Pod t;
    if (o->f2c == 0)
        t = *(S_Vec4Pod *)&D_002A15B0;
    else
        o->f2c->f1a4->f4->func_00199B00(&t, 0);
    return t;
}

static inline S_Vec4 Sub_0004A6A0(const S_Vec4Pod &a, const S_Vec4Pod &b)
{
    S_Vec4 r(a.x - b.x, a.y - b.y, a.z - b.z);
    return r;
}

void BmxEventFPS::func_0004A360(void)
{
    int i;
    int j;

    for (i = 0; i < D_002A8490->f2e0->f0; i++) {
        f64->f4e4[i]->dummy4();
        f64->f4e4[i]->f2c->f1a4->f4->func_00198390();
        for (j = 0; j < 11; j++) {
            f64->f4e4[i]->f150[j].f44 = 0;
            f64->f4e4[i]->f150[j].f0->func_00198390();
            f64->f4e4[i]->f150[j].f0->dummy4();
            f64->f4e4[i]->f150[j].f5c->v1f();
            f64->f4e4[i]->f150[j].f5c->v20();
            f64->f4e4[i]->f150[j].f5c->v04();
            f64->f4e4[i]->f150[j].f58->v1f();
            f64->f4e4[i]->f150[j].f58->v20();
            f64->f4e4[i]->f150[j].f58->v04();
            f64->f4e4[i]->f150[j].f54->v1f();
            f64->f4e4[i]->f150[j].f54->v20();
            f64->f4e4[i]->f150[j].f54->v04();
        }
    }
    if (D_002B9120->f528 != 0) {
        D_002B9120->f528->func_00018EB0();
        D_002B9120->f528->dummy4();
        D_002B9120->f528->f3c->f4->func_00198390();
    }
    if (D_002B9120->f488 != 0)
        D_002B9120->f488->func_0016F7B0();
    for (i = 0; i < D_002B9120->f560; i++) {
        D_002B9120->f524[i]->f80->dummy4();
        D_002B9120->f524[i]->f4->f1a4->dummy4();
        D_002B9120->f524[i]->f4->f1a4->f4->func_00198390();
    }
}

void BmxEventFPS::func_0004A590(void)
{
    int i;

    for (i = 0; i < D_002A8490->f2e0->f0; i++) {
        f64->f4e4[i]->dummy6();
        f64->f4e4[i]->f2c->f1a4->f4->func_001983A0();
    }
    if (D_002B9120->f528 != 0) {
        D_002B9120->f528->dummy6();
        D_002B9120->f528->f3c->f4->func_001983A0();
    }
    for (i = 0; i < D_002B9120->f560; i++) {
        D_002B9120->f524[i]->f80->dummy6();
        D_002B9120->f524[i]->f4->f1a4->dummy6();
        D_002B9120->f524[i]->f4->f1a4->f4->func_001983A0();
    }
}

void BmxEventFPS::func_0004A6A0(void)
{
    S_Vec4 a;
    S_Vec4 b;
    volatile float angle;

    a = Sub_0004A6A0(GetPos_0004A6A0(f64->f4e4[1]), GetPos_0004A6A0(f64->f4e4[0]));
    func_000499B0(&a, &a);
    *(S_Vec4Pod *)&a = f64->f4e4[0]->f2c->f1a4->f4->func_00198040(&a);
    angle = func_0014FBA0(a.x, a.z);
    *(S_Vec4Pod *)&b = GetPos_0004A6A0(f64->f4e4[1]);
    f2a4->func_00088A40((int)(angle * D_00277240), &b);
    a = Sub_0004A6A0(GetPos_0004A6A0(f64->f4e4[0]), GetPos_0004A6A0(f64->f4e4[1]));
    func_000499B0(&a, &a);
    *(S_Vec4Pod *)&a = f64->f4e4[1]->f2c->f1a4->f4->func_00198040(&a);
    angle = func_0014FBA0(a.x, a.z);
    *(S_Vec4Pod *)&b = GetPos_0004A6A0(f64->f4e4[0]);
    f2a8->func_00088A40((int)(angle * D_00277240), &b);
}

S_Item80 *__stdcall func_0004AA80(int param_1)
{
    int i = 0;
    if (0 < D_002B9120->f560) {
        S_Item80 **p = D_002B9120->f524;
        do {
            if ((int)(*p)->f80 == param_1) {
                return D_002B9120->f524[i];
            }
            i++;
            p++;
        } while (i < D_002B9120->f560);
    }
    return 0;
}

void BmxEventFPS::func_0004AAD0(void)
{
    S_Mgr2E0 *m = D_002A8490->f2e0;
    if (m->f0 <= 1) {
        if (m->f2c0->func_0005C0A0() == 0) {
            func_0004A360();
            dummy35();
            f2d8 = 1;
            f2d0->dummy6();
            f2d0->func_001394F0(-1);
            D_002A8490->f2e0->f2c0->func_0005C1E0(8);
            D_002A8490->f2e0->f2c0->func_0005C090();
        } else {
            func_0004A590();
            f284->f60 = 200;
            f1ac->func_000758F0();
            D_002A8490->f124 = 1;
        }
    }
}

void BmxEventFPS::func_0004AB90(int param_1)
{
    if (D_002A8490->f2e0->f0 == 1) {
        D_002A8490->f2e0->f2c0->func_0005C0A0();
        if (D_002A8490->f2e0->f2c0->func_0005C0A0() != 0) {
            f284->f60 = 200;
            f1ac->func_000758F0();
            D_002A8490->f124 = 1;
        } else {
            dummy39();
        }
    } else {
        ((S_Obj284 **)((char *)this + 0x284))[param_1]->f60 = 200;
        f1a8->func_000758F0();
        D_002A8490->f124 = 1;
        func_00011260(0, D_002A8490->f2e0->f0 - 1);
        D_002B9120->f4e4[param_1]->func_00150F80();
    }
}

void BmxEventFPS::func_0004AC70(int param_1, int param_2)
{
    if (f2d4 != 1 && f2d8 != 1) {
        func_00033320(param_1, param_2);
    }
}

void BmxEventFPS::func_0004ACB0(void)
{
    S_Obj12140 *p = f2e4;
    *(void **)this = (void *)&D_0027718C;
    if (p != 0) {
        p->func_00012140();
        func_001E891B(p);
        f2e4 = 0;
    }
    p = f2e8;
    if (p != 0) {
        p->func_00012140();
        func_001E891B(p);
        f2e8 = 0;
    }
    func_00033220();
}

