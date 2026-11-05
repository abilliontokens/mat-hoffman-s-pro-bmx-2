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

extern int D_0028CF30;
extern int D_002764F0;
extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);

struct S_001B7480_Quat {
    u32 x;
    u32 y;
    u32 z;
    u32 w;
};

extern S_001B7480_Quat D_002AA9F4;

/* ParticleEmitterTempData */
struct C_001B7480 {
    void *vtbl;
    int f4;
    int f8;
    char fC[0x104];
    char f110[0x104];
    char f214[0x104];
    S_001B7480_Quat f318;
    C_001B7480 *func_001B7480(void);
};

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

struct C_001B73C0_Node {
    char pad0[4];
    int f4;
    char pad8[0x10c - 8];
    u32 f10C;
};

struct C_001B73C0_VB {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

struct C_001B73C0_Obj : virtual C_001B73C0_VB {
    int f0;
};

struct C_001B73C0_Line {
    char pad0[0x1a4];
    C_001B73C0_Obj *f1A4;
};

struct C_001B73C0_Holder {
    char pad0[0x28];
    C_001B73C0_Line **f28;
};

struct C_001B73C0_Arg {
    char pad0[0x3ac];
    C_001B73C0_Holder *f3AC;
};

struct C_001B73C0_ItemObj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad0[0xd0 - 4];
    int fD0;
    char pad1[0x2ec - 0xd4];
    u8 b2EC;
};

struct C_001B7370_item {
    virtual void vf0();
    virtual void vf1(void *p);
    C_001B73C0_ItemObj *f4;
    int f8;
    char padC[4];
    int f10;
    char pad14[0x10c - 0x14];
    C_001B73C0_Node **f10C;
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
    void func_001B73C0(C_001B73C0_Arg *arg);
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

void C_001B6E70::func_001B73C0(C_001B73C0_Arg *arg) {
    int i, j;

    for (i = 0; i < f24; i++) {
        f28[i]->f4->b2EC &= ~0x10;
        f28[i]->f4->fD0 = 0;
        if (f28[i]->f10 != 0) {
            f28[i]->f4->v6();
        } else {
            f28[i]->f4->v4();
        }
        for (j = 0; j < f28[i]->f8; j++) {
            C_001B73C0_Node *node = f28[i]->f10C[j];
            if (node->f4 == 4) {
                C_001B73C0_Line **arr = arg->f3AC->f28;
                C_001B73C0_Line *line = arr[node->f10C];
                line->f1A4->v7();
            }
        }
    }
}

