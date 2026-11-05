/* 8 functions from 0x0004A360 to 0x0004AD10, found by Ghidra. */
#include "common.h"

extern int D_0027718C;
void func_001E891B(void *p);

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

struct S_Item80 {
    char pad0[0x80];
    int f80;
};

struct S_List {
    char pad0[0x524];
    S_Item80 **f524;
    char pad528[0x560 - 0x528];
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
    char pad4[0x1ac - 4];
    S_Obj1AC *f1ac;
    char pad1b0[0x284 - 0x1b0];
    S_Obj284 *f284;
    char pad288[0x2d0 - 0x288];
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
    void func_0004AC70(int param_1, int param_2);
    void func_0004AAD0(void);
    void func_0004ACB0(void);
};

S_Item80 *__stdcall func_0004AA80(int param_1)
{
    int i = 0;
    if (0 < D_002B9120->f560) {
        S_Item80 **p = D_002B9120->f524;
        do {
            if ((*p)->f80 == param_1) {
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

