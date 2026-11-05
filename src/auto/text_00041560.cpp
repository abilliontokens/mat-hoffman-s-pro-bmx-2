/* 4 functions from 0x00041560 to 0x00042260, found by Ghidra. */
#include "common.h"

struct S_41CF0_Pad {
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
    virtual int v16();
};

struct S_41CF0_Mgr8 {
    char pad0[0x14];
    S_41CF0_Pad *arr14[1];
};

struct S_41CF0_Slot18 {
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
};

struct S_41CF0_Slot31 {
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
    virtual void v31(int a, int b);
};

struct S_41CF0_Obj95C {
    char pad0[0x95c];
    int f95c;
};

struct S_41CF0_Obj1A8 {
    char pad0[0x1a8];
    S_41CF0_Obj95C *f1a8;
};

struct S_41CF0_Owner {
    char pad0[0x4c0];
    S_41CF0_Slot31 *f4c0;
    char pad4c4[0x4e0 - 0x4c4];
    S_41CF0_Obj1A8 *f4e0;
};

struct S_41CF0_Cam {
    void func_00069C40();
    void func_00069FD0(int a0);
};

struct S_41CF0_Mgr2E0 {
    char pad0[0x2fc];
    S_41CF0_Slot18 *f2fc;
    int f300;
};

struct S_41CF0_Global {
    char pad0[8];
    S_41CF0_Mgr8 *f8;
    char pad0c[0x2e0 - 0xc];
    S_41CF0_Mgr2E0 *f2e0;
};

extern S_41CF0_Global *D_002A8490;

struct BmxEventEditor {
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
    virtual void v34();
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
    char pad4[0x64 - 4];
    S_41CF0_Owner *f64;
    char pad68[0x2c4 - 0x68];
    S_41CF0_Cam *f2c4;
    int f2c8;
    char pad2cc[0x48c - 0x2cc];
    int f48c;
    char pad490[0x564 - 0x490];
    int f564;
    void func_0003D910(int a0);
    void func_00041CF0();
};
