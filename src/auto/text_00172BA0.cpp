/* 5 functions from 0x00172BA0 to 0x00173B00, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <string.h>
#include "asm_helpers.h"

extern float D_00275544;
float func_0001C870(float a, float b, float c, float d, float e);

/* controlled object: vtable slots 0x88 (v34) and 0xb4 (v45) are called by func_001730B0 */
struct S_001730B0_Obj {
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
    virtual void v32();
    virtual void v33();
    virtual void v34(int a);
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    char pad4[0x24];
    float f28;
    char pad2c[0x268 - 0x2c];
    float f268, f26c, f270;
};

struct S_001730B0_Ref {
    char pad0[0x30];
    int f30;
};

struct C_001730B0 {
    char pad0[0x2c];
    int f2c, f30, f34, f38;
    char pad3c[0xc4 - 0x3c];
    S_001730B0_Obj *fc4;
    char padc8[0xd0 - 0xc8];
    S_001730B0_Ref *fd0;
    char padd4[0xe0 - 0xd4];
    float fe0, fe4;
    char padec[0xfc - 0xe8];
    float ffc, f100, f104, f108;
    char pad10c[0x124 - 0x10c];
    float f124, f128, f12c, f130, f134, f138, f13c, f140;
    void func_001730B0(float dt);
};

struct C_00172BA0 {
    char pad[0x38];
    int f38;
    void func_00172BA0();
    void __fastcall func_001578D0(void *self);
};

extern int D_002A8BA0;
extern int D_002A8BA4;
extern int D_002A8BA8;
extern int D_002A8BAC;
extern int D_00288D34;

struct Q4_00173580 { int x, y, z, w; };

struct G_00173580 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(int a); virtual void v28(G_00173580 *a);
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(int a);
    G_00173580 *func_00175110(int a);
    G_00173580 *func_00194130(int a);
    G_00173580 *func_0017F050(int a);
    void func_0017F0A0(int a);
    void func_00181140(int a, char *b, int c);
    void func_001A52C0();
    G_00173580 *func_001A8E30(int a);
    void func_001A9070(int a);
    void func_0001EDC0(G_00173580 *a);
    void func_001A9430(G_00173580 *a, int b, int c);
    G_00173580 *func_001A8630(int a);
    void func_001A8BC0(G_00173580 *a, int b, int c, int d, Q4_00173580 e, int f);
    void func_001A86D0(G_00173580 *a);
    G_00173580 *func_0019B700(int a);
    void func_00129920(int a);
    void func_0019D7B0(int a, char *b);
    void func_0019C1E0();
    G_00173580 *func_0014AB30(int a);
    void func_0014C1C0(int a, int b, int c);
    void func_00086C20(int a);
    void func_00133660(int a);
    void func_001334E0(int a);
    void func_001334F0(G_00173580 *a);
};

struct C_00173580 {
    char pad0[0x27];
    unsigned char f27;
    char pad28[0xa8 - 0x28];
    int fa8, fac;
    char padb0[0xc4 - 0xb0];
    G_00173580 *fc4, *fc8, *fcc, *fd0, *fd4, *fd8, *fdc;
    char pade0[0x14c - 0xe0];
    int f14c;
    void func_001D3F50();
    void func_001577A0(G_00173580 *a, int b);
    void func_00171F50(int a, int b);
    void func_00173580(int a1, int a2, const char *name, int a4, int a5);
};

void *func_001E8A44(int size);
char *func_001E8AC0(char *s, int c);
void func_00171F10();
extern int D_002BA15C;
extern int D_002BA148;

#define F_00173580(p, off, T) (*(T *)((char *)(p) + (off)))

struct C_001732E0 {
    void func_00192370(int a0);
    C_001732E0 *func_001732E0(int a0);
};

struct C_00173550 {
    int unk0;
    void *func_00173550(int flags);
};

void __fastcall func_001578D0(void *self);
void __fastcall func_00172BA0(int *self)
{
    self[0x38 / 4] = 1;
    func_001578D0(self);
}

void C_001730B0::func_001730B0(float dt)
{
    if (f130 > D_00275544) {
        if ((f30 == 0 || f34 == 0) && fd0->f30 != 0) {
            f12c = dt + f12c;
            f12c = AsmMinF(f12c, f130 + f130);
        } else {
            f12c = f12c - dt;
            f12c = AsmMaxF(f12c, 0.0f);
        }
        C_001730B0 *p = this;
        p->fe4 = func_0001C870(p->f12c, p->f130, p->f100, p->f130 + p->f130, p->f104);
        p = this;
        p->fe0 = func_0001C870(p->f12c, p->f130, p->ffc, p->f130 + p->f130, p->f108);
    }
    {
        float *v = &fc4->f268;
        float z = v[2], y = v[1], x = v[0];
        float len = AsmSqrtF(x*x+y*y+z*z);
        if (fc4->f28 < f134 && len < f138 && f124 < f13c && f128 < f140 && fd0->f30 != 0) {
            fc4->v34(0);
            return;
        }
        if (f2c != 0 && f38 == 0 && fd0->f30 != 0) {
            fc4->v34(0);
            fc4->v45();
        }
    }
}

C_001732E0 *C_001732E0::func_001732E0(int a0)
{
    struct Q4 { int x, y, z, w; };
    int *u;
    float *f;
    int *p;
    int i;
    func_00192370(a0);
    u = (int *)this;
    f = (float *)this;
    u[0] = (int)&D_00288D34;
    p = &u[0x44 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x54 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x64 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x74 / 4];
    i = 2;
    do { p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000; p += 4; } while (--i);
    p = &u[0x94 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xb4 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    *(Q4 *)&u[0x44 / 4] = *(Q4 *)&D_002A8BA0;
    *(Q4 *)&u[0x54 / 4] = *(Q4 *)&D_002A8BA0;
    *(Q4 *)&u[0x64 / 4] = *(Q4 *)&D_002A8BA0;
    *(Q4 *)&u[0x94 / 4] = *(Q4 *)&D_002A8BA0;
    ((Q4 *)&u[0x74 / 4])[0] = *(Q4 *)&D_002A8BA0;
    ((Q4 *)&u[0x74 / 4])[1] = *(Q4 *)&D_002A8BA0;
    u[0x3C / 4] = 0; u[0x40 / 4] = 0; u[0xA4 / 4] = 0; u[0x14C / 4] = 0; u[0x150 / 4] = 0;
    u[0x28 / 4] = 1; u[0x2C / 4] = 1;
    u[0x30 / 4] = 0; u[0x38 / 4] = 0; u[0x34 / 4] = 0;
    f[0x120 / 4] = 0.5f;
    f[0x10C / 4] = 0.0f; f[0x110 / 4] = 1.0f; f[0x114 / 4] = 0.0f; f[0x118 / 4] = 1.0f;
    f[0xE0 / 4] = 0.0f; f[0xE4 / 4] = 0.0f; f[0xE8 / 4] = 0.0f; f[0xEC / 4] = 0.0f;
    f[0xF0 / 4] = 0.0f; f[0xF4 / 4] = 0.0f; f[0xF8 / 4] = 0.0f;
    f[0x104 / 4] = 200.0f; f[0x108 / 4] = 50.0f;
    f[0x134 / 4] = 10.0f;
    f[0x138 / 4] = 0.5f;
    f[0x13C / 4] = 10.0f;
    f[0x140 / 4] = 1.0f;
    f[0xFC / 4] = 0.0f; f[0x100 / 4] = 0.0f;
    f[0x11C / 4] = 0.0f;
    f[0x124 / 4] = 0.0f; f[0x128 / 4] = 0.0f; f[0x12C / 4] = 0.0f; f[0x130 / 4] = 0.0f;
    f[0x144 / 4] = 0.0f; f[0x148 / 4] = 0.0f; u[0xB0 / 4] = 0;
    return this;
}

void *C_00173550::func_00173550(int flags) {
    extern int D_00288D34;
    void func_001E891B(void *);
    int func_00157660(...);
    unk0 = (int)&D_00288D34;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_00173580::func_00173580(int a1, int a2, const char *name, int a4, int a5)
{
    char buf2[0x104];
    char buf[0x104];
    char *p;
    void *mem;

    func_001D3F50();
    fa8 = a4;
    fac = a5;

    mem = func_001E8A44(0x310);
    fc4 = mem ? ((G_00173580 *)mem)->func_00175110(1) : 0;
    fc4->v10();
    fc4->v27(f14c);
    F_00173580(fc4, 0x300, int) = 1;
    fc4->v34(0);
    func_001577A0(fc4, -1);

    mem = func_001E8A44(0x44);
    fc8 = mem ? ((G_00173580 *)mem)->func_00194130(1) : 0;
    fc8->v27(1);
    fc8->v28(fc4);
    func_001577A0(fc8, 0);

    strcpy(buf, name);
    p = func_001E8AC0(buf, '.');
    if (p) {
        strcpy(p, "m.col");
    } else {
        strcat(buf, "m.col");
    }

    mem = func_001E8A44(0x110);
    fd4 = mem ? ((G_00173580 *)mem)->func_0017F050(1) : 0;
    fd4->func_0017F0A0(3);
    F_00173580(fd4, 0x68, int) = D_002BA15C;
    F_00173580(fd4, 0x60, C_00173580 *) = this;
    F_00173580(fd4, 0x64, G_00173580 *) = fc4;
    fd4->func_00181140(f14c, buf, 0);
    fd4->func_001A52C0();
    func_001577A0(fd4, 0);

    mem = func_001E8A44(0x158);
    fd0 = mem ? ((G_00173580 *)mem)->func_001A8E30(1) : 0;
    fd0->func_001A9070(0x32);
    fd0->func_0001EDC0(fc4);
    fd0->func_001A9430(fd4, 1, f14c);
    F_00173580(fd0, 0x28, int) = 1;
    F_00173580(fd0, 0x4c, int) = 1;
    F_00173580(fd0, 0x40, int) = 0;
    F_00173580(fd0, 0x60, int) = 1;
    F_00173580(fd0, 0x44, int) = 1;
    F_00173580(fd0, 0xb0, float) = 1.0f;
    F_00173580(fd0, 0xb4, float) = 1.0f;
    F_00173580(fd0, 0xb8, float) = 1.0f;
    F_00173580(fd0, 0xc8, float) = 1.0f;
    F_00173580(fd0, 0xd0, float) = 0.005f;
    F_00173580(fd0, 0xd4, float) = 0.0f;
    F_00173580(fd0, 0x9c, float) = 1.0f;
    func_001577A0(fd0, 0);

    mem = func_001E8A44(0x6c);
    fcc = mem ? ((G_00173580 *)mem)->func_001A8630(1) : 0;
    fcc->func_001A8BC0(fd0, a1, 0, 0, *(Q4_00173580 *)&D_002A8BA0, 0);
    F_00173580(fcc, 0x58, int) = 1;
    fcc->func_001A86D0(fd4);
    func_001577A0(fcc, 0);

    strcpy(buf2, name);
    p = func_001E8AC0(buf2, '.');
    if (p) {
        strcpy(p, "f.col");
    } else {
        strcat(buf2, "f.col");
    }

    mem = func_001E8A44(0x1e0);
    fd8 = mem ? ((G_00173580 *)mem)->func_0019B700(1) : 0;
    fd8->func_00129920(5);
    F_00173580(fd8, 0x68, int) = D_002BA148 | D_002BA15C;
    fd8->func_0019D7B0(f14c, buf2);
    F_00173580(fd8, 0xa0, void *) = (void *)func_00171F10;
    F_00173580(fd8, 0x60, C_00173580 *) = this;
    F_00173580(fd8, 0x64, G_00173580 *) = fc4;
    fd8->func_0019C1E0();
    func_001577A0(fd8, 0);

    mem = func_001E8A44(0xf4);
    fdc = mem ? ((G_00173580 *)mem)->func_0014AB30(1) : 0;
    fdc->func_00129920(3);
    func_001577A0(fdc, 0);
    F_00173580(fdc, 0x60, C_00173580 *) = this;
    F_00173580(fdc, 0x68, int) = D_002BA15C;
    fdc->func_0014C1C0(1, 0, 0);
    fdc->func_00086C20(1);
    fdc->func_00133660(D_002BA15C);
    F_00173580(fdc, 0xa7, unsigned char) |= 1;
    fd4->func_001334E0(1);
    fd8->func_001334E0(1);
    fd4->func_001334F0(fd8);
    fd4->func_001334F0(fdc);
    fd8->func_001334F0(fd4);
    fd8->func_001334F0(fdc);
    func_00171F50(a4, 1);
    f27 = (f27 & ~4) | 3;
}

