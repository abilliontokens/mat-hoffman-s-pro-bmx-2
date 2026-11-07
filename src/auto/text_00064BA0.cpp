/* 1 function from 0x00064BA0 to 0x00066C90, found by Ghidra. */
#include "common.h"
/* the object at BmxObjectivesMenu::f1D0 (a C_52C10) */
struct S_00064BA0_A {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};
struct S_00064BA0_B {
    void func_001C4D50(int ms);
};
struct S_00064BA0_Inner {
    char pad00[0x64];
    S_00064BA0_A *f64;              /* 0x64: object whose vtable slot 4 is called */
    char pad68[0x158 - 0x68];
    S_00064BA0_B *f158;             /* 0x158 */
    void func_00052C10(int a);
};

struct BmxObjectivesMenu {
    char pad00[0x64];
    int f64;                        /* 0x64 */
    char pad68[0x1D0 - 0x68];
    S_00064BA0_Inner *f1D0;         /* 0x1D0 */
    char pad1D4[0x1D8 - 0x1D4];
    float f1D8;                     /* 0x1D8 */
    char pad1DC[0x214 - 0x1DC];
    int f214, f218, f21C;
    int f220;
    int f224;                       /* 0x224 */
    int f228;                       /* 0x228 */
    char pad22C[0x280 - 0x22C];
    int f280;                       /* 0x280 */
    int f284;
    int f288;                       /* 0x288 */
    char pad28C[0x2B4 - 0x28C];
    int f2B4;                       /* 0x2B4 */
    void func_0005EA10(float dt);
    void func_00064BA0(float dt);
};

extern float D_002756DC;

void BmxObjectivesMenu::func_00064BA0(float dt)
{
    if (f64 == 4 && f280 != 0) {
        f288 = 1;
        if (f228 >= 0 && f228 < f224 && f1D8 >= D_002756DC) {
            f1D0->func_00052C10(0);
            f228++;
            f1D8 = 0.0f;
        }
        if (f228 >= f224) {
            f1D0->f64->v4();
            f228 = 0;
            f280 = 0;
            f2B4 = 1;
            f1D0->f158->func_001C4D50(1000);
            f1D8 = 0.0f;
            f288 = 0;
            func_0005EA10(dt);
            return;
        }
        f1D8 += dt;
        func_0005EA10(dt);
        return;
    }
}
