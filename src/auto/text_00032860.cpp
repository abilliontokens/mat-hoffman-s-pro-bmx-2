/* 12 functions from 0x00032860 to 0x00033680, found by Ghidra. */
#include "common.h"
struct S_002A8490 {
    char pad0[0x124];
    int f124;
    char pad128[0x11C];
    float f244;
};
extern S_002A8490 *D_002A8490;
extern int D_002F08BC;
extern float D_00275544;
extern float D_00275600;

struct V4_00032E50 {
    float x, y, z, w;
    void Set(float a, float b, float c, float d) {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct C_00032A20 {
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
    virtual void v18(int a);
    void func_00032A20(void);
    void func_00032A40(void);
};

struct C_00032E50 {
    char pad0[0x210];
    V4_00032E50 f210;
    char pad220[0x10];
    float f230;
    void func_00032E50(float a, float b, float c, float d);
};

struct C_00032A00 {
    char pad0[0x1C8];
    int unk1C8;
    void func_00032A00(void);
};


void C_00032A00::func_00032A00(void) {
    extern int D_002AADF8;
    unk1C8 = 0;
    D_002AADF8 = 1;
}

void C_00032A20::func_00032A20(void)
{
    v18(1);
    D_002A8490->f124 = 1;
}

void C_00032A20::func_00032A40(void)
{
    v18(0);
    D_002A8490->f124 = 0;
}

void C_00032E50::func_00032E50(float a, float b, float c, float d)
{
    if (D_002F08BC != 0) {
        V4_00032E50 *p = &f210;
        p->x = a;
        p->y = b;
        p->z = c;
        p->w = d;
        f230 = 0.0f;
    }
}

