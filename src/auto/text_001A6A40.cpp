/* 13 functions from 0x001A6A40 to 0x001A7880, found by Ghidra. */
#include "common.h"

extern int D_0028B9E4;
extern int D_0028B974;

void func_001E891B(void *p);

struct C_Item0 {
    virtual void destroyObject(int flags);
};

struct C_Item8 {
    virtual void vv0();
    virtual void vv1();
    virtual void destroy8();
};

struct C_001A77B0 {
    void *vtbl;
    char pad4[0x24];
    C_Item8 *f28;
    void func_00157660();
    void *func_001A77B0(int flags);
};

struct C_GlobalObj {
    virtual void vv0();
    virtual void vv1();
    virtual void vv2();
    virtual void vv3();
    virtual void v4(int a, void *b, int c, int d);
};

extern C_GlobalObj *D_002EFDB8;
extern C_Item0 *D_002F0630;

struct C_001A6B70 {
    char pad0[0x50];
    void *f50;
    void func_00157920();
    void func_001A6B70();
};

struct C_001D6410 {
    void func_001D6410();
};

struct C_00160BF0Obj {
    void func_00160BF0();
};

struct C_Holder24 {
    char pad0[0xb4];
    C_00160BF0Obj *fb4;
};

struct C_0018C120Obj {
    void func_0018C120();
};

struct C_Global2 {
    char pad0[0x2ec];
    C_0018C120Obj *f2ec;
};

extern C_Global2 *D_002A8490;

struct C_001A7260 {
    void *vtbl;
    char pad4[0x20];
    C_Holder24 *f24;
    C_Item8 *f28;
    C_001D6410 *f30;
    C_001D6410 *f34[8];
    void func_00157660();
    void func_001A7260();
};
