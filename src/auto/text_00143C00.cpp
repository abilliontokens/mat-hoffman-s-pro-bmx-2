/* 14 functions from 0x00143C00 to 0x00144BF0, found by Ghidra. */
#include "common.h"

extern int D_00285B84;
extern int D_00285B58;
extern int D_00284E94;
extern int D_00285B64;

void __stdcall func_00201100(void *p);
void func_001E891B(void *p);

struct C_001AF300 {
    void func_001AF300(void *param);
};

struct C_001AF0B0 {
    void func_001AF0B0();
};

struct C_001AF0D0 {
    void func_001AF0D0();
};

struct C_001449B0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    C_001449B0 *func_001449B0(void *param);
    void func_001449E0();
};

struct C_001445C0 {
    void *vtbl;
    char pad4[0x10];
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void *f24;
    void *f28;
    char pad2c[4];
    void *f30;
    void *f34;
    void func_001445C0();
};

struct C_00144640 {
    void *vtbl;
    char pad4[8];
    u8 fc;
    char padD[3];
    void *f10;
    C_00144640 *func_00144640();
};

struct C_00144660Obj {
    virtual void func_v0(int param);
};

struct C_00144660 {
    void *vtbl;
    char pad4[8];
    u8 fc;
    char padD[3];
    C_00144660Obj *f10;
    void func_00144660();
};

struct C_00144940 {
    void *vtbl;
    void *func_00144940(unsigned int flags);
};

struct C_00144710 {
    C_00144710 *func_00144710(int a0);
};

struct C_001474B0 {
    void func_001474B0(void *owner, int a0, int a1);
};

struct Sel_001446B0 {
    char pad0[4];
    C_001474B0 *obj;
    char pad8[8];
};

struct C_00144690 {
    virtual void v0();
    virtual int func_00144690(int a0, int a1);
};

struct Mgr_002A829C {
    char pad0[0x14];
    Sel_001446B0 *arr;
};

extern Mgr_002A829C *D_002A829C;

struct C_001446B0 {
    char pad0[4];
    int f4;
    void func_001446B0(int a0, int a1, int a2);
};

struct C_00144960 {
    void *vtbl;
    char pad4[8];
    u8 fc;
    char padD[3];
    void *f10;
    void func_001AF100(int a0, int a1, int a2, int a3);
    void func_00144960(int a0, int a1, int a2, int a3);
};

void C_001445C0::func_001445C0()
{
    vtbl = (void *)&D_00285B58;
    if (f14 != 0) {
        func_00201100(f14);
    }
    if (f18 != 0) {
        func_00201100(f18);
    }
    if (f1c != 0) {
        func_00201100(f1c);
    }
    if (f20 != 0) {
        func_00201100(f20);
    }
    if (f24 != 0) {
        func_00201100(f24);
    }
    if (f34 != 0) {
        func_00201100(f34);
    }
    if (f28 != 0) {
        func_00201100(f28);
    }
    if (f30 != 0) {
        func_001E891B(f30);
    }
    vtbl = (void *)&D_00284E94;
}

C_00144640 *C_00144640::func_00144640()
{
    ((C_001AF0B0 *)this)->func_001AF0B0();
    fc = fc & 0xfe;
    vtbl = (void *)&D_00285B64;
    f10 = 0;
    return this;
}

void C_00144660::func_00144660()
{
    vtbl = (void *)&D_00285B64;
    if ((fc & 1) != 0 && f10 != 0) {
        f10->func_v0(1);
        f10 = 0;
    }
    ((C_001AF0D0 *)this)->func_001AF0D0();
}

int __stdcall func_001AF120(int a0, int a1);
int C_00144690::func_00144690(int a0, int a1)
{
    func_001AF120(a0, a1);
    return 1;
}

void C_001446B0::func_001446B0(int a0, int a1, int a2)
{
    if (a2 != -1) {
        ((C_001474B0 *)D_002A829C->arr[a2].obj)->func_001474B0(this, a0, a1);
    } else {
        ((C_001474B0 *)D_002A829C->arr[f4].obj)->func_001474B0(this, a0, a1);
    }
}

void *C_00144940::func_00144940(unsigned int flags)
{
    ((C_001445C0 *)this)->func_001445C0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_00144960::func_00144960(int a0, int a1, int a2, int a3)
{
    void *func_001E8A44(int);
    func_001AF100(a0, a1, a2, a3);
    void *p = func_001E8A44(0x38);
    if (p != 0) {
        p = ((C_00144710 *)p)->func_00144710(a0);
    }
    f10 = p;
    fc |= 1;
}

C_001449B0 *C_001449B0::func_001449B0(void *param)
{
    ((C_001AF300 *)this)->func_001AF300(param);
    f24 = 0;
    f28 = 0;
    f2c = 0;
    vtbl = (void *)&D_00285B84;
    return this;
}
