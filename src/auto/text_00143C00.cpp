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

struct C_00144660 {
    void *vtbl;
    char pad4[8];
    u8 fc;
    char padD[3];
    void *f10;
    void func_00144660();
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

C_001449B0 *C_001449B0::func_001449B0(void *param)
{
    ((C_001AF300 *)this)->func_001AF300(param);
    f24 = 0;
    f28 = 0;
    f2c = 0;
    vtbl = (void *)&D_00285B84;
    return this;
}
