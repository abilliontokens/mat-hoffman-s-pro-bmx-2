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

struct C_001A77F0 {
    void *vtbl;
    char pad4[0x24];
    C_Item8 *f28;
    void func_00157660();
    void *func_001A77F0(int flags);
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

extern int D_0028BB04;

struct C_001A7120 {
    void func_001A5950();
    void *func_001A7120(int flags);
};

struct C_001A7830 {
    void *vtbl;
    void func_00157660();
    void *func_001A7830(int flags);
};

struct C_001A7260 {
    void *vtbl;
    char pad4[0x20];
    C_Holder24 *f24;
    C_Item8 *f28;
    char pad2c[4];
    C_001D6410 *f30;
    C_001D6410 *f34[8];
    void func_00157660();
    void func_001A7260();
};

struct C_001A7860 {
    void *func_001A7860(unsigned int flags);
};

void C_001A6B70::func_001A6B70()
{
    if (f50 != 0) {
        D_002EFDB8->v4(0, f50, 0, 0);
    }
    func_00157920();
}

void *C_001A7120::func_001A7120(int flags)
{
    func_001A5950();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001A7260::func_001A7260()
{
    vtbl = (void *)&D_0028B974;
    if (D_002F0630 != 0) {
        D_002F0630->destroyObject(1);
        D_002F0630 = 0;
    }
    if (f28) {
        f28->destroy8();
        f28 = 0;
    }
    if (f24->fb4 != 0) {
        C_00160BF0Obj *obj;
        obj = f24->fb4;
        obj->func_00160BF0();
        func_001E891B(obj);
        f24->fb4 = 0;
    }
    {
        C_001D6410 **p;
        int count;
        p = f34;
        count = 8;
        do {
            C_001D6410 *obj;
            obj = *p;
            if (obj != 0) {
                obj->func_001D6410();
                func_001E891B(obj);
                *p = 0;
            }
            p = p + 1;
            count = count - 1;
        } while (count != 0);
    }
    {
        C_001D6410 *obj;
        obj = f30;
        if (obj != 0) {
            obj->func_001D6410();
            func_001E891B(obj);
            f30 = 0;
        }
    }
    D_002A8490->f2ec->func_0018C120();
    func_00157660();
}

void *C_001A77B0::func_001A77B0(int flags)
{
    vtbl = (void *)&D_0028B9E4;
    if (f28) {
        f28->destroy8();
        f28 = 0;
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001A77F0::func_001A77F0(int flags)
{
    extern int D_0028BA74;
    vtbl = (void *)&D_0028BA74;
    if (f28) {
        f28->destroy8();
        f28 = 0;
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001A7830::func_001A7830(int flags)
{
    vtbl = (void *)&D_0028BB04;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001A7860::func_001A7860(unsigned int flags)
{
  int func_001A6260(...);

  func_001A6260();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

