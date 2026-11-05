/* 9 functions from 0x001B6A70 to 0x001B7570, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);
int func_001E8AF0(int a, void *b);

extern int D_0028CE6C;
extern char D_0028CEE8[];
extern int D_0028CF14;
extern int D_0028CF20;
extern int D_0028CF24;

struct C_00157600 {
    void func_00157600(void *param);
};

struct C_00169710 {
    int func_00169710(char *name);
};

struct C_001BB950 {
    void func_001BB950(void *a, void *b, void *c, void *d, int e);
};

struct C_001B6850 {
    C_001B6850 *func_001B6850(void);
    void func_001B6930(void *a, int b);
};

struct C_001B7370_item {
    virtual void vf0();
    virtual void vf1(void *p);
    void *f4;
};

struct C_001B7010_arg {
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void vf53(void *p);
    virtual void vf54(void *p);
    virtual void vf55(void *p);
};

struct C_001B6E70 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    C_001B7370_item **f28;
    C_001B6E70 *func_001B6E70(void *param);
    void func_001B7010(C_001B7010_arg *arg);
    int func_001B72B0(C_00169710 *param);
    int func_001B7370(void *param);
    void func_001577A0(void *p, int v);
};

C_001B6E70 *C_001B6E70::func_001B6E70(void *param) {
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028CE6C;
    return this;
}

void C_001B6E70::func_001B7010(C_001B7010_arg *arg) {
    int i;

    for (i = 0; i < f24; i++) {
        if (func_001E8AF0((int)f28[i] + 0x90, &D_0028CF24))
            arg->vf53(f28[i]);
        if (func_001E8AF0((int)f28[i] + 0x90, &D_0028CF20))
            arg->vf54(f28[i]);
        if (func_001E8AF0((int)f28[i] + 0x90, &D_0028CF14))
            arg->vf55(f28[i]);
    }
}

int C_001B6E70::func_001B72B0(C_00169710 *param) {
    char buf[0x104];
    C_001B6850 *obj;
    int i;

    for (i = 0; i < f24; i++) {
        func_001ADCC0(buf, 0x104, D_0028CEE8, i + 1);
        if (param->func_00169710(buf)) {
            obj = (C_001B6850 *)func_001E8A44(0x50);
            obj = obj ? obj->func_001B6850() : 0;
            obj->func_001B6930(param, i);
            ((C_001BB950 *)f28[i]->f4)->func_001BB950(obj, (char *)obj + 0x10,
                (char *)obj + 0x20, (char *)obj + 0x30, *(int *)((char *)obj + 0x4C));
        }
    }
    return 1;
}

int C_001B6E70::func_001B7370(void *param) {
    int i;

    for (i = 0; i < f24; i++) {
        if (f28[i]) {
            f28[i]->vf1(param);
            func_001577A0(f28[i]->f4, 0x402);
        }
    }
    return 1;
}

