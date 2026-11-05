/* 12 functions from 0x00171D00 to 0x00172BA0, found by Ghidra. */
#include "common.h"

extern int D_00288C44;
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_001576D0 {
    void func_001576D0(void);
    void func_00157660(void);
};

struct C_00193490 {
    C_00193490 *func_00193490(void);
    void func_001938C0(void *a, int b, int c, float *d, float *e, int f);
};

struct C_00171D00_F14C {
    void func_001983A0(void);
    void func_0019A8C0(float *a, float *b);
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
    char padC8[0x164];
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
