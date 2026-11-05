/* 15 functions from 0x001CA480 to 0x001CB440, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
struct C_001CB120 {
    bool func_001CB120(void);
};

extern int D_0028EC24;
extern int D_0028ECAC;
extern int D_0028ED5C;
extern float D_002755E0;
extern float D_0028B320;
extern char D_002A5EA0[];
void func_001E891B(void *);
void func_001E8390(void *);
void func_0001DFF0(void);
void __stdcall func_0021FC46(int);

struct C_001CB130 {
    void *vtbl;
    int unk4;
    int unk8;
    void func_0001DFF0();
    void *func_001CB130(int flags);
};

struct Quat_1CAF20 {
    float x, y, z, w;
    void Identity() {
        x = y = z = 0.0f;
        w = 1.0f;
    }
    void Reset() {
        w = 1.0f;
        x = y = z = 0.0f;
    }
};

struct WaterDisplacement {
    void *vtbl;
    char pad4[0x24];
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    char pad3C[0x18];
    Quat_1CAF20 unk54;
    Quat_1CAF20 unk64;
    Quat_1CAF20 unk74[4];
    Quat_1CAF20 unkB4;
    WaterDisplacement *func_001CAF20();
    void *func_001CAFA0(int flags);
    void func_00157600(int a0);
    void func_00157660();
};

struct WaterObject {
    void *vtbl;
    void *func_001CAFD0(int a0);
    WaterObject *func_001CAFF0(int a0, int a1, int a2);
    void func_00143580(int a0);
    void func_00143540(int a0, int a1, int a2);
    void func_001435D0();
    void *func_001CB070(int flags);
};

struct VCall_1CAFF0 {
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
};


WaterDisplacement *WaterDisplacement::func_001CAF20()
{
    Quat_1CAF20 *p;
    int n;
    func_00157600(1);
    vtbl = (void *)&D_0028EC24;
    unk54.Identity();
    unk64.Identity();
    p = unk74;
    n = 4;
    do {
        p->Identity();
        p++;
    } while (--n);
    unkB4.w = 1.0f;
    unkB4.z = 0.0f;
    unkB4.y = 0.0f;
    unkB4.x = 0.0f;
    unk2C = 0;
    unk28 = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    return this;
}

void *WaterDisplacement::func_001CAFA0(int flags)
{
    vtbl = (void *)&D_0028EC24;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *WaterObject::func_001CAFD0(int a0)
{
    func_00143580(a0);
    vtbl = (void *)&D_0028ECAC;
    return this;
}

WaterObject *WaterObject::func_001CAFF0(int a0, int a1, int a2)
{
    char buf[260];
    strcpy(buf, D_002A5EA0);
    D_002A5EA0[0] = 0;
    func_00143540(a0, 0, 0);
    ((VCall_1CAFF0 *)this)->v31();
    strcpy(D_002A5EA0, buf);
    return this;
}

void *WaterObject::func_001CB070(int flags) {
    vtbl = &D_0028ECAC;
    func_001435D0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

extern "C" double __cdecl log10(double);
int func_001CB0A0(int x)
{
    float f;
    if (x == 0)
        return -10000;
    f = (float)log10((double)x * D_002755E0) * D_0028B320;
    x = (int)f;
    if (x > -2500)
        x = x > -10000 ? x : -10000;
    x = x < 0 ? x : 0;
    return x;
}

bool C_001CB120::func_001CB120(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0xcc) == 2;
}

void *C_001CB130::func_001CB130(int flags) {
    int p = unk8;
    vtbl = (void *)&D_0028ED5C;
    if (p != 0) {
        func_001E8390((void *)p);
    }
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_001CB270(void)
{
    func_0021FC46(0);
}

