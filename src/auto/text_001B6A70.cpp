/* 9 functions from 0x001B6A70 to 0x001B7570, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

struct C_6A70_V4 { float x, y, z, w; };

struct C_6A70_Item {
    virtual void v0(void *cfg, int a);
    int f4;
};

struct C_6A70_Src {
    virtual void v0(int *out, C_6A70_Item **slot);
    virtual int v1(char *name);
};

struct C_6A70_Data {
    C_6A70_V4 f0;
    C_6A70_V4 f10;
    C_6A70_V4 f20;
    C_6A70_V4 f30;
    char pad40[0xc];
    int f4c;
    C_6A70_Data *func_001B6850(void);
    void func_001B6930(void *cfg, int a);
};

struct S_6A70_Bits {
    u8 b0 : 1, b1 : 1, b2 : 1, b3 : 1, b4 : 1, b5 : 1, b6 : 1, b7 : 1;
};

struct C_6A70_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    char pad14[0xbc - 4];
    int *fBC;
    int *fC0;
    int *fC4;
    char padC8[0xd4 - 0xc8];
    char fD4[0x104];
    char f1D8[0x104];
    char pad2DC[0x2ec - 0x2dc];
    u8 b2EC;
    C_6A70_Obj *func_001BB680(int a);
    void func_001BC040(C_6A70_V4 a, C_6A70_V4 b, C_6A70_V4 c, C_6A70_V4 d, int e, int f, int g, int h);
};

struct C_6A70_Cfg {
    void func_00168BE0(const void *key, const void *fmt, void *buf, int size);
    void func_00168C20(const void *key, int def, int *out);
    void func_00168C50(const void *key, int def, int *out);
    int func_00169710(char *name);
};
struct C_6A70 {
    void *vtbl;
    C_6A70_Obj *f4;
    int f8;
    int fC;
    int f10;
    int f14;
    char f18[0x78];
    char f90[0x78];
    C_6A70_Data *f108;
    C_6A70_Item **f10C;
    int func_001B6A70(C_6A70_Cfg *cfg, int a1, int a2, C_6A70_Src *a3, int a4);
};
extern char D_0027CC48[], D_0027CC38[], D_0028CE4C[], D_0028CE38[], D_0027CAD4[], D_0028CE20[], D_0028CE04[], D_0028CDEC[];
extern char D_00275630[], D_00276980[], D_0027A84C[], D_00284B7C[], D_0028CE58[], D_0027B0AC[], D_00289948[];
extern int D_002764F0;
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" char *strcpy(char *dst, const char *src);
void *func_001E8A44(int size);
void func_00012140(void);
extern char D_0028CF08[], D_0028CEF4[];
extern int D_0028CDE4;
void *func_001E83E8(void *, int);

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
extern "C" char *strcpy(char *dst, const char *src);
extern "C" int strcmp(const char *a, const char *b);
extern "C" void *memset(void *dst, int c, unsigned int n);
char *func_001E8AC0(const char *s, int c);
int func_001EA426(const char *a, const char *b);

/* blob holding a name at +0xD4, a name at +0x1D8 and a slot at +0x2DC */
struct S_001B70D0_Obj {
    char pad0[0xD4];
    char fD4[0x104];
    char f1D8[0x104];
    int f2DC;
};

struct S_001B70D0_Src {
    char pad0[0x22C];
    int f22C;
    char pad230[0x300 - 0x230];
    char f300[1];
};

struct S_001B70D0_Slot {
    char pad0[0x64];
    S_001B70D0_Src *f64;
    char pad68[0x1C0 - 0x68];
    int f1C0;
};

struct S_001B70D0_Mgr {
    char pad0[4];
    struct S_001B70D0_Lookup *f4;
    char pad8[0x280 - 8];
    S_001B70D0_Slot **volatile f280;
    int f284;
};

struct S_001B70D0_Lookup {
    int func_00198330(void *name);
};

struct S_001B70D0_Entry {
    char pad0[4];
    int f4;
    char pad8[0x58 - 8];
    S_001B70D0_Src *f58;
    char pad5C[0xA0 - 0x5C];
    char fA0[1];
    char padA1[0x1A4 - 0xA1];
    S_001B70D0_Mgr *f1A4;
};

struct S_001B70D0_Arg {
    char pad0[0x24];
    int f24;
    S_001B70D0_Entry *volatile *f28;
};

struct S_001B7480_Quat {
    u32 x;
    u32 y;
    u32 z;
    u32 w;
};

extern S_001B7480_Quat D_002AA9F4;

static inline const int &min_ref(const int &a, const int &b) {
    return (b < a) ? b : a;
}

extern char D_00275630[], D_00276980[], D_0027A84C[], D_00284B7C[], D_0028CE58[], D_0027B0AC[], D_00289948[];

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
    void func_00168C20(char *name, int def, int *out);
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
    virtual void vf0(C_00169710 *, void *, int, void *, void *);
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
    void func_001B70D0(S_001B70D0_Arg *arg);
    int func_001B72B0(C_00169710 *param);
    int func_001B6EA0(void *a, C_00169710 *param, void *b, void *c);
    int func_001B7370(void *param);
    void func_001B73C0(C_001B73C0_Arg *arg);
    void func_001577A0(void *p, int v);
};

int C_6A70::func_001B6A70(C_6A70_Cfg *cfg, int a1, int a2, C_6A70_Src *a3, int a4)
{
    int r = 0;
    int flag;
    int i;
    char buf1[0x104];
    char buf2[0x104];
    char buf3[0x104];
    char buf4[0x104];
    C_6A70_Data *d;
    C_6A70_Obj *o;

    cfg->func_00168BE0(D_00276980, D_00275630, f18, 0x78);
    cfg->func_00168C20(D_0027A84C, 0, &f8);
    cfg->func_00168C20(D_00284B7C, 1, &fC);
    cfg->func_00168BE0(D_0028CE58, D_00275630, f90, 0x78);
    cfg->func_00168C20(D_0027B0AC, 1, &f10);
    cfg->func_00168BE0(D_0027CC48, D_00275630, buf1, 0x104);
    cfg->func_00168BE0(D_0027CC38, D_00275630, buf3, 0x104);
    fC--;
    cfg->func_00168C20(D_00289948, 0x64, &f14);
    d = (C_6A70_Data *)func_001E8A44(0x50);
    d = d ? d->func_001B6850() : 0;
    f108 = d;
    d->func_001B6930(cfg, a2);
    o = (C_6A70_Obj *)func_001E8A44(0x2f0);
    o = o ? o->func_001BB680(1) : 0;
    f4 = o;
    o->func_001BC040(f108->f0, f108->f10, f108->f20, f108->f30, f108->f4c, f8, f14, a4);
    cfg->func_00168C20(D_0028CE4C, 0, &flag);
    ((S_6A70_Bits *)&f4->b2EC)->b3 = (char)flag;
    strcpy(f4->fD4, buf1);
    strcpy(f4->f1D8, buf3);
    if (f10 == 0)
        f4->v4();
    if (f8 == 0)
        return 0;
    f10C = (C_6A70_Item **)func_001E8A44(f8 * 4);
    for (i = 0; i < f8; i++) {
        func_001ADCC0(buf2, 0x104, D_0028CE38, a2, i + 1);
        if (cfg->func_00169710(buf2) == 0) {
            func_00012140();
            continue;
        }
        cfg->func_00168BE0(D_0027CAD4, (const char *)&D_002764F0, buf4, 0x104);
        cfg->func_00168C20(D_0028CE20, -1, &f4->fBC[i]);
        cfg->func_00168C20(D_0028CE04, -1, &f4->fC0[i]);
        cfg->func_00168C50(D_0028CDEC, 0, &f4->fC4[i]);
        r = a3->v1(buf4);
        a3->v0(&r, &f10C[i]);
        if (r == 0)
            continue;
        f10C[i]->f4 = r;
        f10C[i]->v0(cfg, a1);
    }
    return 1;
}

C_001B6E70 *C_001B6E70::func_001B6E70(void *param) {
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028CE6C;
    return this;
}

int C_001B6E70::func_001B6EA0(void *a, C_00169710 *param, void *b, void *c)
{
    int count;
    int i;
    int end;
    int start;
    char buf[0x104];
    C_001B7370_item *obj;

    if (param->func_00169710(D_0028CF08) == 0) {
        return 0;
    }
    param->func_00168C20(D_0028CEF4, 0, &count);
    if (count > 0) {
        if (f28 != 0) {
            start = f24;
            f24 = start + count;
            end = f24;
            f28 = (C_001B7370_item **)func_001E83E8(f28, f24 * 4);
        } else {
            start = 0;
            f24 = count;
            end = f24;
            f28 = (C_001B7370_item **)func_001E8A44(f24 * 4);
        }
        for (i = start; i < end; i++) {
            func_001ADCC0(buf, 0x104, D_0028CEE8, i - start + 1);
            if (param->func_00169710(buf) != 0) {
                obj = (C_001B7370_item *)func_001E8A44(0x110);
                if (obj != 0) {
                    *(void **)obj = &D_0028CDE4;
                    *(int *)((char *)obj + 0x4) = 0;
                    *(int *)((char *)obj + 0x108) = 0;
                    *(int *)((char *)obj + 0x8) = 0;
                    *(int *)((char *)obj + 0x10c) = 0;
                    *(int *)((char *)obj + 0x10) = 1;
                } else {
                    obj = 0;
                }
                f28[i] = obj;
                f28[i]->vf0(param, a, i - start + 1, b, c);
            }
        }
    }
    return 1;
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

static __forceinline int ResolveSlot_001B70D0(C_001B6E70 *self, int i, S_001B70D0_Mgr *mgr, int id)
{
    int k;
    for (k = 0; k < mgr->f284; k++) {
        if (mgr->f280[k]->f1C0 == id) {
            ((S_001B70D0_Obj *)((C_001B7370_item * volatile *)self->f28)[i]->f4)->f2DC =
                mgr->f280[k]->f64->f22C;
            return 1;
        }
    }
    return 0;
}

void C_001B6E70::func_001B70D0(S_001B70D0_Arg *arg) {
    char name[0x40];
    char buf[0x40];
    int i;

    for (i = 0; i < f24; i++) {
        if (((S_001B70D0_Obj *)((C_001B7370_item * volatile *)f28)[i]->f4)->fD4[0] != 0) {
            int found;
            int j;
            strcpy(name, ((S_001B70D0_Obj *)((C_001B7370_item * volatile *)f28)[i]->f4)->fD4);
            found = 0;
            for (j = 0; j < arg->f24 && !found; j++) {
                S_001B70D0_Entry *e = arg->f28[j];
                if (e != 0) {
                    if (e->f4 == 1) {
                        if (strcmp(name, e->fA0) == 0) {
                            S_001B70D0_Mgr *mgr = e->f1A4;
                            int id = mgr->f4->func_00198330(
                                ((S_001B70D0_Obj *)((C_001B7370_item * volatile *)f28)[i]->f4)->f1D8);
                            if (ResolveSlot_001B70D0(this, i, mgr, id))
                                found = 1;
                        }
                    } else {
                        S_001B70D0_Entry *p = arg->f28[j];
                        strcpy(buf, p->f58->f300);
                        char *dot = func_001E8AC0(buf, '.');
                        if (dot != 0) {
                            memset(dot, 0, strlen(dot));
                        }
                        if (func_001EA426(buf, name) == 0) {
                            ((S_001B70D0_Obj *)((C_001B7370_item * volatile *)f28)[i]->f4)->f2DC =
                                p->f58->f22C;
                            found = 1;
                        }
                    }
                }
            }
        }
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
            if (f28[i]->f10C[j]->f4 == 4) {
                C_001B73C0_Line *line = arg->f3AC->f28[f28[i]->f10C[j]->f10C];
                line->f1A4->v7();
            }
        }
    }
}

C_001B7480 *C_001B7480::func_001B7480(void)
{
    vtbl = (void *)&D_0028CF30;
    {
        S_001B7480_Quat *q = &f318;
        q->z = 0;
        q->y = 0;
        q->x = 0;
        q->w = 0x3f800000;
    }
    {
        int limit = sizeof(fC) - 1;
        int count = AsmMinI(limit, 4);
        func_001E8920(fC, (const char *)&D_002764F0, count);
        fC[count] = 0;
    }
    {
        int limit = sizeof(f214) - 1;
        int count = AsmMinI(limit, 4);
        func_001E8920(f214, (const char *)&D_002764F0, count);
        f214[count] = 0;
    }
    f4 = 0;
    f8 = 0;
    f318 = D_002AA9F4;
    return this;
}

