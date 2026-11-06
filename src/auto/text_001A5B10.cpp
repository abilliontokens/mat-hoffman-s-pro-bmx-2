/* 18 functions from 0x001A5B10 to 0x001A6A40, found by Ghidra. */
#include "common.h"

extern int D_0028BA74;
struct S_60A0_Ctl { void func_001D37C0(); };
struct S_60A0_Sub { char pad0[0x24]; int f24; char pad28[0x1b4]; int f1dc; };
struct S_60A0_Q { int func_0005C0E0(); };
struct S_60A0_P { char pad0[0x2c0]; S_60A0_Q *f2c0; };
struct S_60A0_G { char pad0[0x2e0]; S_60A0_P *f2e0; };
struct C_001A60A0 {
    void *vtbl; char pad4[0x20];
    S_60A0_Sub *f24; S_60A0_Ctl *f28; int f2c;
    void func_001A60A0(int a, int b);
    void func_00157BF0(int a, int b);
};
extern int D_0028BB74;
struct LoadMemoryCard {
    void *vtbl; char pad4[0x20];
    int f24; int f28; int f2c; int f30; int f34; int f38; int f3c; int f40; int f44; int f48; int f4c; int f50; int f54; int f58; int f5c; int f60; int f64; int f68; int f6c; int f70; int f74; int f78; int f7c; int f80; int f84; int f88; int f8c; int f90; int f94; int f98;
    void func_00157600(void *);
    LoadMemoryCard *func_001A61C0(void *);
};
struct S_6930_Clamp {
    char pad0[0x10];
    float f10;
    float f14;
};
struct S_6930_Mid {
    S_6930_Clamp *func_0018C070();
};
struct S_6930_Lookup {
    int *func_0018C160(int a);
};
extern int D_0027958C;
extern float D_00275AEC;
struct S_6260_V { virtual void v0(int d); virtual void v1(); virtual void v2(); S_6930_Clamp *func_001D5AA0(); };
struct S_6260_E { void func_001D6410(); };
struct S_6260_H { virtual void v0(int d); };
void func_001E891B(void *p);
extern S_6260_H *D_002F0630;
struct C_001A6260 {
    void *vtbl; char pad4[0x20];
    int f24; int f28; int f2c; int f30;
    struct S_LMC_Z24 { int a, b, c, d; };
    S_6260_V *f34[2];
    S_6260_V *f3c[2];
    S_6260_E *f44[2];
    S_6260_V *f4c; S_6260_V *f50;
    char pad54[0x40];
    S_6260_V *f94;
    void Fill24(int v) { f24 = v; f28 = v; f2c = v; f30 = v; }
    void func_001A6260();
    void func_001A6930();
    void func_001578D0();
    void func_00157660();
    void func_0018C120();
};
extern int D_0028BA50;
extern int D_00275630;

struct C_00157600 {
    void func_00157600(void *param);
};

struct C_001A5E40 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    C_001A5E40 *func_001A5E40(void *param);
};

struct S_001A5C30_Obj {
    void func_0005E840(char *s);
};

void func_001A5C30(char *text, S_001A5C30_Obj **arr, int width, int maxCount);

struct S_001A5CD0_Obj {
    void func_001D6600(void);
};

struct C_001A5CD0 {
    char pad0[0x30];
    S_001A5CD0_Obj *unk30;
    S_001A5CD0_Obj *unk34[8];
    void func_001A5CD0(void);
    void func_00157960(void);
};

struct S_001A5D80_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct S_001A5D80_G1 {
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
    char pad0[0x234 - 4];
    int f234;
    char pad238[0x2e0 - 0x238];
    void *f2e0;
    char pad2e4[8];
    S_6930_Lookup *f2ec;
};

struct S_001A5D80_G2 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int a, int b, int c, int d);
    char pad0[0x30 - 4];
    int f30;
};

/* object whose func_001A5B10 loads the named resource into a pointer slot (this = the param of func_001A5D80) */
struct C_001A5D80_P1 {
    void func_001A5B10(void *a, void *b);
};

struct C_001A5D80 {
    char pad0[0x24];
    int unk24;
    S_001A5D80_Obj *unk28;
    C_001A5D80 *func_001A5D80(int param);
};

extern S_001A5D80_G1 *D_002A8490;
extern S_001A5D80_G2 *D_002EFDB8;

bool __stdcall func_001A5B10(char *name, void **pp);

extern int D_0028B9E4;
extern int D_0028B974;
extern int D_00284C44;

extern "C" char *strcpy(char *, const char *);
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
void func_00030F30(char *s, void *p);
void *func_001D6E20(char *name, int a1, int a2);

struct C_002BEAAC {
    void func_0013D780(char *name, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    int func_0013DFF0(char *name, int a2);
};
extern C_002BEAAC *D_002BEAAC;

struct S_001A5B10_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001A5D50 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    C_001A5D50 *func_001A5D50(void *param);
};

struct C_001A5BF0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34[8];
    C_001A5BF0 *func_001A5BF0(void *param);
};

struct S_001A5BC0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    void func_00157810(void);
};

struct C_001A5BC0 {
    char pad0[0xb0];
    S_001A5BC0_Obj *fB0;
    void func_001A5BC0(void);
};

extern int D_0028BB04;
extern int D_0028BAE0;
void *func_001E8A44(int size);

struct C_001A5F10 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    C_001A5F10 *func_001A5F10(void *param);
};

struct C_001A5E20_Obj {
    char pad0[0x24];
    int f24;
};

struct C_001A5E20 {
    char pad0[0x24];
    C_001A5E20_Obj *f24;
    char pad28[0x2c - 0x28];
    int f2c;
    void func_00157A00(int arg);
    void func_001A5E20(int arg);
};

struct C_001A5E70_P1 {
    void func_001A5B10(void *a, void *b);
};

struct C_001A5E70 {
    char pad0[0x24];
    void *f24;
    void *f28;
    C_001A5E70 *func_001A5E70(void *param);
};

struct C_001A5F40_Obj {
    char pad0[0x24];
    int f24;
    C_001A5F40_Obj *func_001D3690(int v);
    void func_001D3CC0(int v);
    void func_001D3730(int v);
};

struct C_001A5F40 {
    char pad0[0x24];
    void *f24;
    C_001A5F40_Obj *f28;
    int f2c;
    void func_001577A0(void *a, int b);
    C_001A5F40 *func_001A5F40(void *a, int b);
};

struct S_001A5FD0_Movie {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    void func_00157810(void);
    char pad0[0x48 - 4];
    int f48;
};

struct S_001A5FD0_F24 {
    char pad0[0x24];
    int f24;
    char pad28[0x1dc - 0x28];
    int f1dc;
};

struct C_0005C0E0 {
    int func_0005C0E0(void);
};

struct S_001A5FD0_G1M {
    char pad0[0x2c0];
    C_0005C0E0 *f2c0;
};

struct C_001A5FD0 {
    char pad0[0x24];
    S_001A5FD0_F24 *f24;
    S_001A5FD0_Movie *f28;
    int f2c;
    void func_00157A00(int arg);
    void func_001A5FD0(int arg);
};

bool __stdcall func_001A5B10(char *name, void **pp)
{
    char buf[260];

    if (*pp != 0) {
        (*(S_001A5B10_Obj **)pp)->v2();
    }
    strcpy(buf, name);
    func_00030F30(buf, &D_00284C44);
    D_002BEAAC->func_0013D780(buf, 1, 0, 0, 0, 0, 0, 0);
    *pp = func_001D6E20(name, 0x22b8, 0);
    D_002BEAAC->func_0013DFF0(buf, 1);
    return *pp != 0;
}

void C_001A5BC0::func_001A5BC0(void)
{
    if (fB0 != 0) {
        fB0->func_00157810();
        fB0->v2();
        fB0 = 0;
    }
}

C_001A5BF0 *C_001A5BF0::func_001A5BF0(void *param)
{
    int i;

    ((C_00157600 *)this)->func_00157600(param);
    vtbl = (void *)&D_0028B974;
    f24 = 0;
    f28 = 0;
    f2c = 0;
    for (i = 0; i < 8; i++) {
        f34[i] = 0;
    }
    f30 = 0;
    return this;
}

void func_001A5C30(char *text, S_001A5C30_Obj **arr, int width, int maxCount)
{
    int start = 0;
    int lastSpace = -1;
    int count = 0;
    int i = 0;

    if (maxCount <= 0) {
        return;
    }
    do {
        int idx = start + i;
        char c = text[idx];
        i++;
        if (c == 0) {
            break;
        }
        if (c == ' ') {
            lastSpace = idx;
        }
        if (i == width) {
            text[lastSpace] = 0;
            arr[count++]->func_0005E840(text + start);
            i = i + start - lastSpace - 1;
            start = lastSpace + 1;
        }
    } while (count < maxCount);

    if (i > 0) {
        if (count >= maxCount) {
            return;
        }
        arr[count++]->func_0005E840(text + start);
    }
    while (count < maxCount) {
        arr[count++]->func_0005E840((char *)&D_00275630);
    }
}

void C_001A5CD0::func_001A5CD0(void)
{
    int i;

    unk30->func_001D6600();
    for (i = 0; i < 8; i++) {
        unk34[i]->func_001D6600();
    }
    func_00157960();
}

C_001A5D50 *C_001A5D50::func_001A5D50(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    f2c = 0;
    vtbl = (void *)&D_0028B9E4;
    return this;
}

C_001A5D80 *C_001A5D80::func_001A5D80(int param)
{
    D_002A8490->f234 = 1;
    D_002EFDB8->f30 = 0;
    unk24 = param;
    ((C_001A5D80_P1 *)param)->func_001A5B10(&D_0028BA50, &unk28);
    if (unk28 != 0) {
        D_002EFDB8->v4(0, (int)unk28, 0, 0);
        D_002A8490->v9();
        D_002EFDB8->v4(0, (int)unk28, 0, 0);
        D_002A8490->v9();
        D_002EFDB8->v4(0, (int)unk28, 0, 0);
        unk28->v2();
        unk28 = 0;
    }
    return this;
}

void C_001A5E20::func_001A5E20(int arg)
{
    if (f2c > 5) {
        f24->f24 = 1;
    }
    f2c++;
    func_00157A00(arg);
}

C_001A5E40 *C_001A5E40::func_001A5E40(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    f2c = 0;
    vtbl = (void *)&D_0028BA74;
    return this;
}

C_001A5E70 *C_001A5E70::func_001A5E70(void *param)
{
    D_002A8490->f234 = 1;
    D_002EFDB8->f30 = 0;
    f24 = param;
    ((C_001A5E70_P1 *)param)->func_001A5B10(&D_0028BAE0, &f28);
    if (f28 != 0) {
        D_002EFDB8->v4(0, (int)f28, 0, 0);
        D_002A8490->v9();
        D_002EFDB8->v4(0, (int)f28, 0, 0);
        D_002A8490->v9();
        D_002EFDB8->v4(0, (int)f28, 0, 0);
    }
    return this;
}

C_001A5F10 *C_001A5F10::func_001A5F10(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    f2c = 0;
    vtbl = (void *)&D_0028BB04;
    return this;
}

C_001A5F40 *C_001A5F40::func_001A5F40(void *a, int b)
{
    D_002A8490->f234 = 1;
    f2c = b;
    D_002EFDB8->f30 = 0;
    f24 = a;
    if (f28 == 0) {
        C_001A5F40_Obj *p = (C_001A5F40_Obj *)func_001E8A44(0x80);
        f28 = p ? p->func_001D3690(1) : 0;
        if (f28 != 0) {
            func_001577A0(f28, -1);
            f28->func_001D3CC0((int)f24 + 0xbc);
            f28->func_001D3730(0x14);
            return this;
        }
    }
    return 0;
}

void C_001A5FD0::func_001A5FD0(int arg)
{
    if (f28 != 0 && f28->f48 == 0) {
        f28->func_00157810();
        f28->v2();
        int m = f2c;
        f28 = 0;
        if (m == 9) {
            f24->f24 = 6;
        } else if (m == 0xb) {
            if (((S_001A5FD0_G1M *)D_002A8490->f2e0)->f2c0->func_0005C0E0() == 0) {
                f24->f24 = 0xc;
            } else {
                f24->f1dc = 1;
                f24->f24 = 1;
            }
        } else if (m == 0xd) {
            f24->f1dc = 1;
            f24->f24 = 1;
        } else {
            f24->f24 = 1;
        }
    }
    func_00157A00(arg);
}

int func_001361E0(int a, int b, int c, unsigned int d);
void C_001A60A0::func_001A60A0(int a, int b)
{
    if (f2c != 11) {
        if (func_001361E0(4, 2, a, 0x80000000) || func_001361E0(0x17, 2, a, 0x80000000)) {
            f24->f24 = 1;
        }
    } else if (f28 != 0) {
        f28->func_001D37C0();
        if (f2c == 9) {
            f24->f24 = 6;
        } else if (f2c == 11) {
            if (((S_60A0_P *)D_002A8490->f2e0)->f2c0->func_0005C0E0() == 0) {
                f24->f24 = 12;
            } else {
                f24->f1dc = 1;
                f24->f24 = 1;
            }
        } else if (f2c == 13) {
            f24->f1dc = 1;
            f24->f24 = 1;
        } else {
            f24->f24 = 1;
        }
    }
    func_00157BF0(a, b);
}

LoadMemoryCard *LoadMemoryCard::func_001A61C0(void *arg) {
    func_00157600(arg);
    vtbl = &D_0028BB74;
    for (int i = 0; i < 2; i++) {
        (&f44)[i] = 0;
        (&f34)[i] = 0;
        (&f3c)[i] = 0;
    }
    f24 = 0; f28 = 0; f2c = 0; f30 = 0;
    f4c = 0; f50 = 0; f54 = 0x3f800000; f58 = 0;
    f64 = 0; f5c = 0; f60 = 0; f68 = 0; f70 = 1;
    f74 = 0; f78 = 0; f7c = 0;
    f84 = 0; f88 = 0; f8c = 0; f90 = 0; f94 = 0; f98 = 0;
    return this;
}

void C_001A6260::func_001A6260()
{
    int i;
    vtbl = &D_0028BB74;
    if (D_002F0630 != 0) {
        D_002F0630->v0(1);
        D_002F0630 = 0;
    }
    if (f50 != 0) {
        f50->v2();
        f50 = 0;
    }
    for (i = 0; i < 2; i++) {
        if (f3c[i] != 0) {
            f3c[i]->v0(1);
            f3c[i] = 0;
        }
        if (f34[i] != 0) {
            f34[i]->v0(1);
            f34[i] = 0;
        }
        S_6260_E *e = f44[i];
        if (e != 0) {
            e->func_001D6410();
            func_001E891B(e);
            f44[i] = 0;
        }
    }
    memset(&f24, 0, 16);
    if (f94 != 0) {
        f94->v2();
        f94 = 0;
    }
    ((C_001A6260 *)*(void **)((char *)D_002A8490 + 0x2ec))->func_0018C120();
    func_00157660();
}

void C_001A6260::func_001A6930()
{
    int *r = D_002A8490->f2ec->func_0018C160((int)&D_0027958C);
    S_6930_Mid *mid = (S_6930_Mid *)(r ? *r : 0);
    if (mid != 0) {
        S_6930_Clamp *o = mid->func_0018C070();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
    }
    int i = 0;
    do {
        if (f34[i] != 0) {
            S_6930_Clamp *o2 = f34[i]->func_001D5AA0();
            if (D_00275AEC > o2->f10) *(int *)&o2->f10 = 0x41200000;
            if (D_00275AEC < o2->f14 || o2->f14 > o2->f10) *(int *)&o2->f14 = 0x41200000;
        }
        if (f3c[i] != 0) {
            S_6930_Clamp *o3 = f3c[i]->func_001D5AA0();
            if (D_00275AEC > o3->f10) *(int *)&o3->f10 = 0x41200000;
            if (D_00275AEC < o3->f14 || o3->f14 > o3->f10) *(int *)&o3->f14 = 0x41200000;
        }
        i++;
    } while (i < 2);
    func_001578D0();
}

