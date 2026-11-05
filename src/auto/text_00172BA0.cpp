/* 5 functions from 0x00172BA0 to 0x00173B00, found by Ghidra. */
#include "common.h"
#include <math.h>

extern float D_00275544;
float func_0001C870(float a, float b, float c, float d, float e);

/* controlled object: vtable slots 0x88 (v34) and 0xb4 (v45) are called by func_001730B0 */
struct S_001730B0_Obj {
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
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34(int a);
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    char pad4[0x24];
    float f28;
    char pad2c[0x268 - 0x2c];
    float f268, f26c, f270;
};

struct S_001730B0_Ref {
    char pad0[0x30];
    int f30;
};

struct C_001730B0 {
    char pad0[0x2c];
    int f2c, f30, f34, f38;
    char pad3c[0xc4 - 0x3c];
    S_001730B0_Obj *fc4;
    char padc8[0xd0 - 0xc8];
    S_001730B0_Ref *fd0;
    char padd4[0xe0 - 0xd4];
    float fe0, fe4;
    char padec[0xfc - 0xe8];
    float ffc, f100, f104, f108;
    char pad10c[0x124 - 0x10c];
    float f124, f128, f12c, f130, f134, f138, f13c, f140;
    void func_001730B0(float dt);
};

extern int D_002A8BA0;
extern int D_002A8BA4;
extern int D_002A8BA8;
extern int D_002A8BAC;
extern int D_00288D34;

struct C_001732E0 {
    void func_00192370(int a0);
    C_001732E0 *func_001732E0(int a0);
};

struct C_00173550 {
    int unk0;
    void *func_00173550(int flags);
};

void C_001730B0::func_001730B0(float dt)
{
    if (f130 > D_00275544) {
        float v;
        if ((f30 == 0 || f34 == 0) && fd0->f30 != 0) {
            f12c = dt + f12c;
            v = f130 + f130;
            if (f12c < v) {
                v = f12c;
            }
        } else {
            f12c = f12c - dt;
            v = 0.0f;
            if (f12c > v) {
                v = f12c;
            }
        }
        f12c = v;
        fe4 = func_0001C870(f12c, f130, f100, f130 + f130, f104);
        fe0 = func_0001C870(f12c, f130, ffc, f130 + f130, f108);
    }
    {
        float len = (float)sqrt(fc4->f268 * fc4->f268 + fc4->f26c * fc4->f26c + fc4->f270 * fc4->f270);
        if (fc4->f28 < f134 && len < f138 && f124 < f13c && f128 < f140 && fd0->f30 != 0) {
            fc4->v34(0);
            return;
        }
        if (f2c != 0 && f38 == 0 && fd0->f30 != 0) {
            fc4->v34(0);
            fc4->v45();
        }
    }
}

void *C_00173550::func_00173550(int flags) {
    extern int D_00288D34;
    void func_001E891B(void *);
    int func_00157660(...);
    unk0 = (int)&D_00288D34;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
