/* 6 functions from 0x0017F2B0 to 0x001800A0, found by Ghidra. */
#include "common.h"

struct C_00199C20 {
    void func_00199C20(int a, void *out);
};

struct __declspec(align(16)) S_Matrix16 {
    f32 m[16];
};

struct RayCollisionObject {
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
    virtual void v31(void *a);
    char pad4[0xF0];
    C_00199C20 *f19C;
    void func_00180070(void);
};

void RayCollisionObject::func_00180070(void) {
    S_Matrix16 m;

    f19C->func_00199C20(0, &m);
    v31(&m);
}
