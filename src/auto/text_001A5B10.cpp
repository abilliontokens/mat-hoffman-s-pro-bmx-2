/* 18 functions from 0x001A5B10 to 0x001A6A40, found by Ghidra. */
#include "common.h"

extern int D_0028BA74;
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
    char c;

    if (maxCount <= 0) {
        return;
    }
    do {
        c = text[start + i];
        i++;
        if (c == 0) {
            break;
        }
        if (c == ' ') {
            lastSpace = start + i - 1;
        }
        if (i == width) {
            text[lastSpace] = 0;
            arr[count]->func_0005E840(text + start);
            count++;
            i = i + start - lastSpace - 1;
            start = lastSpace + 1;
        }
    } while (count < maxCount);

    if (i > 0) {
        if (count >= maxCount) {
            return;
        }
        arr[count]->func_0005E840(text + start);
        count++;
    } else {
        while (count < maxCount) {
            arr[count]->func_0005E840((char *)&D_00275630);
            count++;
        }
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

