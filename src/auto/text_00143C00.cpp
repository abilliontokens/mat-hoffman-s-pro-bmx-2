/* 14 functions from 0x00143C00 to 0x00144BF0, found by Ghidra. */
#include "common.h"

struct Entry_00144AE0 { int f0; int f4; int f8; int fc; };
struct Mgr_00144AE0 {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual void v10();
    virtual void v14(int index);
    virtual void v18();
    virtual int v1c(const char *name, int flag);
    int f4;
    int f8;
    int fc;
    int f10;
    Entry_00144AE0 *f14;
};
extern Mgr_00144AE0 *D_002A71C0;
extern char D_00285C6C[], D_00285C5C[], D_00285C40[], D_00285C28[], D_00285C0C[];
int __stdcall func_001FCF20(int,int,int,int,int,int,int);
int __stdcall func_001FCE50(int,int);

extern unsigned char *D_002EFDB8;
void __stdcall func_001FEE00(int stream, void *data, int stride);
void __stdcall func_00200B30(void *a, int b, void *c);
struct DXStripSurfaceData {
    char pad0[0xc];
    int fc;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void *f24;
    void *f28;
    int f2c;
    void *f30;
    void func_001444F0();
};

extern int D_00285B84;
extern int D_00285B58;
extern int D_00284E94;
extern int D_00285B64;

void __stdcall func_00201100(void *p);
void func_001E891B(void *p);

void func_001E8390(void *p);
void *func_001E8AA5(unsigned int size);
void *func_001E8A44(int size);

struct C_0013B210 {
    void func_0013C8A0(int a0, void *a1, int a2, int a3);
};

struct C_00143C00 {
    char pad0[0xac];
    int fac;
    void func_00143C00(int arg);
};

extern C_0013B210 *D_002BEAAC;

struct C_001AF300 {
    void func_001AF300(void *param);
};

struct C_001AF320 {
    void func_001AF320();
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
    void func_00144A20(int size);
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

void C_00143C00::func_00143C00(int arg)
{
    if (fac != 3) {
        fac = arg;
    }
}

void DXStripSurfaceData::func_001444F0()
{
    if (f14) func_001FEE00(0, f14, 12);
    if (f18) func_001FEE00(1, f18, 12);
    if (f1c) func_001FEE00(2, f1c, 4);
    if (f28) func_001FEE00(4, f28, 4);
    for (int i = 0; i < 4; i++) {
        int selector = D_002EFDB8[0x90 + i];
        if (selector != 255) {
            int stream;
            if (i == 0) stream = 3;
            else if (i == 1) stream = 10;
            else if (i == 2) stream = 11;
            else if (i == 3) stream = 12;
            else stream = -1;
            func_001FEE00(stream, selector == 0 ? f20 : f24, 8);
        }
    }
    func_00200B30(f10, fc, f30);
}

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

void C_001449B0::func_001449E0()
{
    vtbl = (void *)&D_00285B84;
    if (f24 != 0) {
        func_001E8390((void *)f24);
    }
    if (f2c != 0) {
        func_001E891B((void *)f2c);
    }
    ((C_001AF320 *)this)->func_001AF320();
}

void C_001449B0::func_00144A20(int size)
{
    int id = size;
    D_002BEAAC->func_0013C8A0(id, &size, 4, 1);
    f24 = (int)func_001E8AA5(size);
    D_002BEAAC->func_0013C8A0(id, (void *)f24, size, 1);
    D_002BEAAC->func_0013C8A0(id, &size, 4, 1);
    f28 = size / 4;
    f2c = (int)func_001E8A44(f28 * 4);
    D_002BEAAC->func_0013C8A0(id, (void *)f2c, size, 1);
}

int func_00144AE0(const char *name, int width, int height, int format)
{
    if (!D_002A71C0->f8) {
        D_002A71C0->v1c(D_00285C6C, 0);
        D_002A71C0->v1c(D_00285C5C, 0);
        D_002A71C0->v1c(D_00285C40, 0);
        D_002A71C0->v1c(D_00285C28, 0);
        D_002A71C0->v1c(D_00285C0C, 0);
    }
    int index = D_002A71C0->v1c(name, 0);
    D_002A71C0->v14(index);
    if (width && !D_002A71C0->f14[index].f4) {
        int texture = func_001FCF20(width, height, 1, 1, 1, format, 3);
        if (((texture != 0) - 1 & (int)0x8007000e) < 0) return 0;
        int surface = func_001FCE50(texture, 0);
        if (((surface != 0) - 1 & (int)0x8007000e) < 0) return 0;
        D_002A71C0->f14[index].f4 = texture;
        D_002A71C0->f14[index].f8 = surface;
    }
    return -index;
}

