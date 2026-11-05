/* 12 functions from 0x00171D00 to 0x00172BA0, found by Ghidra. */
#include "common.h"

extern int D_00288C44;
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_001576D0 {
    void func_001576D0(void);
    void func_001576C0(void);
    void func_00157660(void);
};

struct C_00193490 {
    C_00193490 *func_00193490(void);
    void func_001938C0(void *a, int b, int c, float *d, float *e, int f);
    void func_00193950(void *a, float *vecA, float *vecB, int d);
};

struct C_00171D00_F14C {
    void func_001983A0(void);
    void func_00198390(void);
    void func_00198E60(void);
    void func_0019A8C0(float *a, float *b);
};

struct C_00172460Obj {
    void func_001332A0(void);
};

struct C_00171D00_C4VT {
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
};

struct PhysicsBodyVT {
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
};

/* PhysicsBody */
struct PhysicsBody {
    void *vtbl;
    char pad4[0x20];
    void *f24;
    char pad28[0x88];
    C_00193490 *fB0;
    char padB4[0x10];
    void *fC4;
    char padC8[0x64];
    int f12C;
    char pad130[0x1C];
    C_00171D00_F14C *f14C;
    char pad150[0xE0];
    int f230;
    void *func_00171E60(int flags);
    void func_00171F50(int a1, int a2);
    void func_00172420(void);
};

struct S_00171F10_F60 {
    char pad0[0x28];
    void *f28;
};

struct S_00171F10_Arg0 {
    char pad0[0x60];
    S_00171F10_F60 *f60;
    C_00171D00_C4VT *f64;
};

void *PhysicsBody::func_00171E60(int flags)
{
    int p = f230;

    vtbl = (void *)&D_00288C44;
    if (p != 0) {
        func_001E891B((void *)p);
    }
    ((C_001576D0 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_00171F10(S_00171F10_Arg0 *arg)
{
    C_00171D00_C4VT *obj = arg->f64;

    if (arg->f60->f28 != 0) {
        obj->v34(1);
    }
}

void PhysicsBody::func_00171F50(int a1, int a2)
{
    float vecB[4];
    float vecA[4];
    C_00193490 *p = (C_00193490 *)func_001E8A44(0x28);

    fB0 = p != 0 ? p->func_00193490() : 0;
    vecA[2] = 0.0f;
    vecA[1] = 0.0f;
    vecA[0] = 0.0f;
    vecA[3] = 1.0f;
    vecB[2] = 0.0f;
    vecB[1] = 0.0f;
    vecB[0] = 0.0f;
    vecB[3] = 1.0f;
    f14C->func_0019A8C0(vecA, vecB);
    fB0->func_001938C0(&f24, a1, a2, vecA, vecB, 0);
}

void PhysicsBody::func_00172420(void)
{
    f12C = 0;
    ((C_001576D0 *)this)->func_001576D0();
    ((C_00171D00_C4VT *)fC4)->v34(1);
    f14C->func_001983A0();
    ((PhysicsBodyVT *)this)->v29();
}
