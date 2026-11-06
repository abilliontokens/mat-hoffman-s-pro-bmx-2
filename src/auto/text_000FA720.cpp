/* 1 function from 0x000FA720 to 0x000FC740, found by Ghidra. */
#include "common.h"
extern float D_00278C58;
extern float D_002756CC;
extern float D_002B91C4;
extern int D_0028F5E0;

struct RiderPane {
    void func_00093120(void);
    int func_00092A10(void);
    int func_00092A50(int *out);
    int func_00092B40(int idx);
    int func_00092BE0(void);
    void func_00093290(float a);
    void func_00093A00(float x, float y, int c, int a, int b, int d);
};

struct RiderBtn {
    void func_00103260(int a);
    void func_001B1980(void);
    void func_00103350(void);
};

struct RiderSub270 {
    int func_000BC670(void);
    void func_000BC590(void);
};

struct RiderPlayer {
    char pad0[0x270];
    RiderSub270 *f270;
    RiderBtn *func_000BA9B0(int a);
};

struct RiderPool {
    int *func_0005C020(int a);
};

struct RiderHandles {
    int func_00136170(int a, int b, int c);
};

struct RiderCfg {
    char pad0[4];
    int f4;
    char pad8[0x2c0 - 8];
    RiderPool *f2c0;
    char pad2c4[0x300 - 0x2c4];
    int f300;
};

struct RiderGlobal {
    char pad0[8];
    RiderHandles *f8;
    char padc[0x124 - 0xc];
    int f124;
    char pad128[0x2e0 - 0x128];
    RiderCfg *f2e0;
};
extern RiderGlobal *D_002A8490;

/* BmxUIPageRider */
struct BmxUIPageRider {
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
    virtual void v28(int a, int b);
    char pad4[0x124 - 4];
    RiderPlayer *f124;
    char pad128[0x484 - 0x128];
    int f484;
    int f488;
    int f48c;
    char pad490[0x498 - 0x490];
    int f498;
    char pad49c[0x4a8 - 0x49c];
    int f4a8;
    int f4ac;
    int f4b0;
    int f4b4;
    int f4b8;
    int f4bc;
    char pad4c0[0x4e0 - 0x4c0];
    int f4e0;
    int f4e4;
    char pad4e8[4];
    int f4ec;
    int f4f0;
    int f4f4;
    RiderPane *f4f8;
    int f4fc;
    int f500;
    int f504;
    int f508;
    int f50c;
    int f510;
    float f514;
    int f518;
    int f51c;
    int f520;
    int f524;
    int f528;
    int f52c;
    char pad530[0x538 - 0x530];
    int f538;
    char pad53c[0x558 - 0x53c];
    int f558;
    int f55c;
    int f560;
    char pad564[0x578 - 0x564];
    int f578;
    char pad57c[0x584 - 0x57c];
    int f584;
    int f588;
    char pad58c[0x5ac - 0x58c];
    int f5ac;
    void func_000FA720(float dt);
    void func_000CFCA0(void);
    void func_000CFDA0(void);
    void func_000CE0A0(void);
    void func_000FA620(void);
    void func_001BED00(float dt);
};
