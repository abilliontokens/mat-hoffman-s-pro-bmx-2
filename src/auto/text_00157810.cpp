/* 24 functions from 0x00157810 to 0x001587F0, found by Ghidra. */
#include "common.h"

struct S_00157810_Audio {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
};

extern S_00157810_Audio *D_002EFDB8;

/* child in the intrusive list headed at C_00157810::f10, linked through fC */
struct S_00157810_Child {
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
    virtual void v12(int a);
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    char pad4[8];
    S_00157810_Child *fC;
    char pad10[8];
    unsigned char f18;
    char pad19[8];
    unsigned char f21;
};

struct C_00157810 {
    void *vtbl;
    char pad4[0xc];
    S_00157810_Child *f10;
    char pad14[8];
    char f1C;
    int func_00157960(void);
    int func_001579B0(void);
    int func_00157A00(int a);
    int func_00157AE0(void);
};
