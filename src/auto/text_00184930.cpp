/* 15 functions from 0x00184930 to 0x001858A0, found by Ghidra. */
#include "common.h"

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
void *func_001E8A44(int size);
extern char D_002895F4[];
extern char D_002895EC[];

struct S_00184BB0_Elem {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(void *scene);
    int f4;
};

struct S_00184BB0_List {
    char pad0[0x24];
    int f24;
    S_00184BB0_Elem **f28;
};

struct S_00184C00_Obj {
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
    virtual void v28(void *scene);
    virtual void v29(void *scene);
};

struct S_00184C00_Mgr {
    S_00184C00_Mgr *func_0001B380(int a);
    void func_0001B3B0(S_00184C00_Obj *o);
};

/* element of the list at BasicScene+0x3b0, notified through vtable slot 28 */
struct S_00184CC0_Item {
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
    virtual void v28(void *scene);
    char pad4[0x20];
    int f24;
};

struct S_00184D10_Info {
    char pad0[0x10];
    char name[1];
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_00030F30(char *s, void *p);
extern char D_00275678[];
extern char D_00289580[];

struct C_0013B210 {
    int func_0013B1A0(char *name);
};

extern C_0013B210 *D_002BEAAC;

struct C_001B1130 {
    C_001B1130 *func_001B1130(int a);
    C_001B1130 *func_001B1190(char *a, int b, int c, int d, int e, int f, int g);
};

/* BasicScene */
struct C_00184930 {
    void *vtbl;
    char pad4[0x2c];
    char f30[0x104];
    char pad134[0x340 - 0x134];
    int f340;
    char pad344[4];
    int f348;
    char pad34c[0x388 - 0x34c];
    S_00184D10_Info *f388;
    char pad38c[0x3a8 - 0x38c];
    S_00184BB0_List **f3a8;
    S_00184C00_Obj *f3ac;
    S_00184CC0_Item **f3b0;
    char pad3b4[0x3c0 - 0x3b4];
    S_00184C00_Obj *f3c0;
    char pad3c4[0x3e4 - 0x3c4];
    C_001B1130 *f3e4;
    char pad3e8[0x484 - 0x3e8];
    S_00184C00_Mgr *f484;
    void func_00184BB0(void);
    int func_00184C00(void);
    int func_00184C60(void);
    int func_00184CC0(void);
    int func_00184D10(void);
};

/* PlayerStart */
struct S_Stream {
    int func_00169710(char *name);
    void func_00168CB0(void *key, void *def, void *dst);
};

extern char D_0027B1FC[];
extern char D_002895CC[];
extern char D_002895B4[];
extern float D_002A90B4;
extern float D_002A90B8;
extern float D_002A90BC;
extern float D_002A90C0;
extern float D_002A90E4;
extern float D_002A90E8;
extern float D_002A90EC;
extern float D_002A90F0;
extern char D_002895B0;

struct C_00185790 {
    void *vtbl;
    float f4;
    float f8;
    float fC;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    C_00185790 *func_00185790(void);
    int func_00185800(S_Stream *stream);
};

void C_00184930::func_00184BB0(void)
{
    int i;

    for (i = 0; i < f3a8[f348]->f24; i++) {
        S_00184BB0_Elem *e = f3a8[f348]->f28[i];
        if (e->f4 == 2) {
            e->v3(this);
        }
    }
}

int C_00184930::func_00184C00(void)
{
    if (f3ac != 0) {
        void *mem = func_001E8A44(0x30);
        f484 = mem != 0 ? ((S_00184C00_Mgr *)mem)->func_0001B380(1) : 0;
        f3ac->v29(this);
        f484->func_0001B3B0(f3ac);
    }
    return 1;
}

int C_00184930::func_00184C60(void)
{
    if (f3c0 != 0) {
        f3c0->v28(this);
    }
    return 1;
}

int C_00184930::func_00184CC0(void)
{
    int i;

    if (f3b0 != 0) {
        for (i = 0; i < f340; i++) {
            f348 = i;
            if (f3b0[i]->f24 > 0) {
                f3b0[i]->v28(this);
            }
        }
    }
    return 1;
}

int C_00184930::func_00184D10(void)
{
    char buf[0x104];

    if (f388 != 0) {
        func_001ADCC0(buf, 0x104, D_00275678, f30, f388->name);
        func_00030F30(buf, D_00289580);
        if (D_002BEAAC->func_0013B1A0(buf) != 0) {
            void *mem = func_001E8A44(0xe00);
            C_001B1130 *obj = mem != 0 ? ((C_001B1130 *)mem)->func_001B1130(1) : 0;
            f3e4 = obj;
            f3e4 = obj->func_001B1190(buf, 1, 8, 0, 0, 0, 0);
            return 1;
        }
        return 0;
    }
    return 1;
}

C_00185790 *C_00185790::func_00185790(void)
{
    u32 *p;

    vtbl = &D_002895B0;
    p = (u32 *)&f4;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f14;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f4 = D_002A90B4;
    f8 = D_002A90B8;
    fC = D_002A90BC;
    f10 = D_002A90C0;
    f14 = D_002A90E4;
    f18 = D_002A90E8;
    f1C = D_002A90EC;
    f20 = D_002A90F0;
    return this;
}

int C_00185790::func_00185800(S_Stream *stream)
{
    if (stream->func_00169710(D_0027B1FC) == 0) {
        return 0;
    }
    stream->func_00168CB0(D_002895CC, &D_002A90B4, &f4);
    stream->func_00168CB0(D_002895B4, &D_002A90E4, &f14);
    return 1;
}

int __stdcall func_00185860(char *name)
{
    if (memcmp(name, D_002895F4, 9) == 0) {
        return 2;
    }
    return memcmp(name, D_002895EC, 5) == 0;
}
