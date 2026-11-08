/* 14 functions from 0x001C26B0 to 0x001C36B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
extern float D_00275544;
u32 func_001DC974(void);
void *__stdcall func_001FF410(void *buffer, int flags);
extern char D_0027DE5C[];
extern char D_0027DE4C[];
extern char D_0027DE38[];
extern char D_0027DE2C[];
extern char D_00282890[];
extern char D_00282880[];
extern char D_0028E27C[];
extern char D_002828C0[];
extern char D_0028E264[];
extern char D_0028E24C[];
extern char D_00282898[];
extern char D_00282854[];
extern char D_0028283C[];
extern char D_0027DE44[];
extern char D_0028282C[];
extern char D_002828B0[];
extern char D_0028948C[];
extern char D_00275630[];
extern char D_0027DE24[];
extern char D_0027C294[];
extern int D_0028F5EC, D_0028F5E8, D_0028F5E4, D_0028F5E0, D_0028F5DC;
extern char *D_002A8490;
extern "C" void *func_001E8A44(unsigned int);
extern "C" void *func_001E8AA5(unsigned int);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, int arg);
struct Font_001C26B0 {
    float func_0018C210();
};
struct L_001C26B0 {
    float def[4];
    float v1[4];
    float v0[4];
    int has;
    float v2[4];
    char kind[20];
    char text[480];
};
extern char D_0028281C[];
extern char D_00282810[];
extern char D_00282800[];
extern char D_002827EC[];
struct C_001C26B0 {
    C_001C26B0 *func_001C26B0(C_001C26B0 *p, int a);
    C_001C26B0 *func_001C26B0(int a, C_001C26B0 *p);
    void func_001BF600(C_001C26B0 *p);
    int func_00168550(const char *key, void *dst, int n);
    void func_00168BE0(const char *key, void *a, void *b, int c);
    int func_00168C20(const char *key, int def, void *dst);
    void func_00168C50(const char *key, int def, void *dst);
    int func_00168CB0(const char *key, void *def, void *dst);
    void func_000979C0(char *text, int *out);
    void func_001C01E0(char *text);
    C_001C26B0 *func_001B12C0(int a);
    void func_001B13A0(char *a, char *b, int c, int d);
    void func_001577A0(C_001C26B0 *elem, int a);
    void func_001B1860(int a0, float a1, int a2, float a3, int a4, int a5, float a6, int a7, float a8, int a9, int a10, int a11, int a12);
    void func_001B17D0(char *text);
    void func_001B19A0(int a);
    void func_001B2270(int a);
    void func_001B19C0(int a, int b, int c);
    void func_001B1AB0(int a, int b);
    void func_001B1BF0(int a);
    char data[0x1B0];
};

struct C_00199650 {
    void func_00199650(void *p);
};

struct C_00157A00 {
    void func_00157A00(int p);
};

struct UIWidgetStaticUserRotate {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x28];
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    char pad40[0x28];
    C_00199650 *f68;
    int f6c;
    char pad70[0x28];
    int f98;
    int f9c;
    int fA0;
    int fA4;
    char padA8[0x138];
    int f1E0;
    int f1E4;
    int f1E8;
    char pad1EC[0x54];
    float f240;
    u32 f244;
    void func_001C0B00(int p);
    void func_001C0B70(int p);
    void func_001C0BE0(int p);
    void func_00157A00(int p);
    int func_001C13A0(void);
    int func_001C1490(void);
    void func_001C2F90(int p);
    void func_001C32E0(void);
    void func_001C33A0(void);
    void func_001C3440(int p);

    void SyncOn(void)
    {
        f2c = 1;
        if (f30 == 0 || f34 == 0) {
            if (f30 != 0) {
                v7();
            }
            if (f34 != 0) {
                v5();
            }
        }
    }

    void SyncOff(void)
    {
        f2c = 0;
        if (f38 == 0 || f3c == 0) {
            if (f38 != 0) {
                v7();
            }
            if (f3c != 0) {
                v5();
            }
        }
    }

    void Dispatch(int p)
    {
        if (f1E0 != 0) {
            func_001C2F90(p);
        } else {
            func_00157A00(p);
        }
    }
};

static inline void CopyMem(void *dst, const void *src, unsigned int n)
{
    memcpy(dst, src, n);
}

struct C_001C35B0 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    void *f14;
    void func_001C35B0(void *src, int index, unsigned int count);
};

struct C_001C2F70 {
    undefined4 func_001C2F70(void);
};

extern int D_0028DF04;
extern int D_0028D804;
extern int D_0028DFE4;
void func_001E891B(void *p);

struct DelObj_001C34D0 {
    virtual void Destroy(int a0);
};

/* UIWidgetIcon */
struct C_001C34D0 {
    void *vtbl;
    char pad4[0x68 - 4];
    DelObj_001C34D0 *f68;
    void func_00157660(void);
    void *func_001C34D0(int flags);
};

struct C_001D57E0 {
    void func_001D57E0(void);
};

/* UIWidgetSelectableIcon */
struct C_001C3510 {
    void *vtbl;
    char pad4[0x68 - 4];
    char f68[0x64];
    char fCC[1];
    void func_00157660(void);
    void *func_001C3510(int flags);
};

/* DXVertexBuffer */
struct S_001C35F0_Src {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void *v4(int a, int b, int c);
    virtual int v5();
    char pad4[0x8];
    int fC;
};

struct DXVertexBuffer {
    virtual void v0();
    virtual void v1();
    virtual void *v2(void *buf, int b, int d);
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    DXVertexBuffer *func_001C3550(int type, int count);
    void *func_001C35F0(S_001C35F0_Src *src, int b, int c, int d);
    char *func_001C3650(int index, int count, int flags);
};

struct UIWidgetMovementControl {
    void func_001C0DD0(int slot, int value, int key);
    void func_001C1030(int slot, int value, int key);
    void func_001C3000(int p1, int p2, int value, int id);
    void func_001C3170(int p1, int p2, int value, int id);
};


static int lookup_001C26B0(C_001C26B0 *o, char *text)
{
    int index = 0;
    o->func_000979C0(text, &index);
    return index;
}

C_001C26B0 *C_001C26B0::func_001C26B0(int a, C_001C26B0 *p)
{
    L_001C26B0 l;
    int i;

    func_001BF600(p);
    l.v0[0] = l.v0[1] = l.v0[2] = 0; l.v0[3] = 1;
    l.v1[0] = l.v1[1] = l.v1[2] = 0; l.v1[3] = 1;
    l.v2[0] = l.v2[1] = l.v2[2] = 0; l.v2[3] = 1;
    p->func_00168550(D_0027DE5C, data + 0x70, 0x80);
    p->func_00168BE0(D_0027DE4C, data + 0x70, data + 0xf0, 0x80);
    p->func_00168C20(D_0027DE38, 0, data + 0x188);
    p->func_00168C20(D_0027DE2C, 0, data + 0x18c);
    p->func_00168BE0(D_00282880, D_00282890, l.kind, 0x14);
    p->func_00168C50(D_0028E27C, 0x3f800000, data + 0x17c);
    l.has = p->func_00168550(D_002828C0, l.text, 0x1e0);
    if (l.has) {
        *(int *)(data + 0x6c) = lookup_001C26B0((C_001C26B0 *)*(void **)(*(char **)(D_002A8490 + 0x2e8) + 0x2c), l.text);
    } else {
        *(int *)(data + 0x180) = p->func_00168C20(D_0028E264, 0, data + 0x174);
        p->func_00168C20(D_0028E24C, 0, data + 0x170);
    }
    if (*(int *)(data + 0x180) == 0) {
        i = p->func_00168C20(D_00282898, 1, data + 0x170);
    }
    p->func_00168C20(D_00282854, 0xff, data + 0x194);
    p->func_00168C50(D_0028283C, 0, data + 0x198);
    l.def[0] = 40; l.def[1] = 40; l.def[2] = 40; l.def[3] = 1;
    p->func_00168CB0(D_0027DE44, l.def, l.v0);
    *(int *)(data + 0x184) = ((((int)l.v0[0] | 0xffffff00) << 8 | ((int)l.v0[1] & 255)) << 8) | ((int)l.v0[2] & 255);
    l.def[0] = 255; l.def[1] = 255; l.def[2] = 255; l.def[3] = 1;
    if (p->func_00168CB0(D_0028282C, l.def, l.v1)) {
        *(int *)(data + 0x19c) = 1;
    }
    *(int *)(data + 0x1a0) = ((((int)l.v1[0] | 0xffffff00) << 8 | ((int)l.v1[1] & 255)) << 8) | ((int)l.v1[2] & 255);
    l.def[0] = 128; l.def[1] = 128; l.def[2] = 128; l.def[3] = 1;
    if (p->func_00168CB0(D_002828B0, l.def, l.v2)) {
        *(int *)(data + 0x1a4) = 1;
    }
    *(int *)(data + 0x1a8) = ((((int)l.v2[0] | 0xffffff00) << 8 | ((int)l.v2[1] & 255)) << 8) | ((int)l.v2[2] & 255);
    p->func_00168C20(D_0028948C, 0, data + 0x190);
    *(int *)(data + 0x28) = a;
    if (!strcmp(l.kind, "Right")) {
        *(int *)(data + 0x178) = D_0028F5EC;
    } else if (!strcmp(l.kind, "CenterBoth")) {
        *(int *)(data + 0x178) = D_0028F5E8;
    } else if (!strcmp(l.kind, "CenterVertical")) {
        *(int *)(data + 0x178) = D_0028F5E4;
    } else if (!strcmp(l.kind, "CenterHorizontal")) {
        *(int *)(data + 0x178) = D_0028F5E0;
    } else {
        *(int *)(data + 0x178) = D_0028F5DC;
    }
    if (l.has) {
        char *t = *(char **)(D_002A8490 + 0x2e8);
        char *src = *(char **)(*(char **)(t + 4) + *(int *)(data + 0x6c) * 8);
        func_001C01E0(src);
        return this;
    }
    if (*(int *)(data + 0x180) != 0) {
        *(void **)(data + 0x68) = func_001E8AA5(*(int *)(data + 0x170) * 4);
        for (i = 0; i < *(int *)(data + 0x170); i++) {
            C_001C26B0 *q = (C_001C26B0 *)func_001E8A44(0x184);
            if (q) {
                q = q->func_001B12C0(1);
            } else {
                q = 0;
            }
            (*(C_001C26B0 ***)(data + 0x68))[i] = q;
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B13A0(data + 0x70, data + 0xf0, 0, *(int *)(data + 0x174));
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B1860(0, -1, 255, 1, 0, 0, -1, 255, 1, 0, 0, 0, 0);
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B19A0(*(int *)(data + 0x178));
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B2270(*(int *)(data + 0x184));
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B17D0(D_00275630);
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B19C0(*(int *)(data + 0x188), (int)(((Font_001C26B0 *)*(void **)((*(C_001C26B0 ***)(data + 0x68))[i]->data + 0x28))->func_0018C210() * i * *(float *)(data + 0x17c)) + *(int *)(data + 0x18c), 0);
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B1AB0(*(int *)(data + 0x194), 0);
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B1BF0(*(int *)(data + 0x198));
            func_001577A0((*(C_001C26B0 ***)(data + 0x68))[i], -1);
        }
        return this;
    }
    if (i != 0) {
        *(void **)(data + 0x68) = func_001E8AA5(*(int *)(data + 0x170) * 4);
        for (i = 0; i < *(int *)(data + 0x170); i++) {
            func_001ADCC0(l.kind, 0x14, D_0027DE24, i + 1);
            p->func_00168550(l.kind, l.text, 0x1e0);
            C_001C26B0 *q = (C_001C26B0 *)func_001E8A44(0x184);
            if (q) {
                q = q->func_001B12C0(1);
            } else {
                q = 0;
            }
            (*(C_001C26B0 ***)(data + 0x68))[i] = q;
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B13A0(data + 0x70, data + 0xf0, 0, (int)strlen(l.text));
            func_001577A0((*(C_001C26B0 ***)(data + 0x68))[i], -1);
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B1860(0, -1, 255, 1, 0, 0, -1, 255, 1, 0, 0, 0, 0);
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B19A0(*(int *)(data + 0x178));
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B2270(*(int *)(data + 0x184));
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B17D0(l.text);
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B19C0(*(int *)(data + 0x188), (int)(((Font_001C26B0 *)*(void **)((*(C_001C26B0 ***)(data + 0x68))[i]->data + 0x28))->func_0018C210() * i * *(float *)(data + 0x17c)) + *(int *)(data + 0x18c), 0);
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B1AB0(*(int *)(data + 0x194), 0);
            (*(C_001C26B0 ***)(data + 0x68))[i]->func_001B1BF0(*(int *)(data + 0x198));
        }
        return this;
    }
    p->func_00168550(D_0027C294, l.text, 0x1e0);
    if (*(int *)(data + 0x190) != 0) {
        func_001C01E0(l.text);
        return this;
    }
    *(int *)(data + 0x170) = 1;
    *(void **)(data + 0x68) = func_001E8AA5(4);
    {
        C_001C26B0 *q = (C_001C26B0 *)func_001E8A44(0x184);
        if (q) {
            q = q->func_001B12C0(1);
        } else {
            q = 0;
        }
        (*(C_001C26B0 ***)(data + 0x68))[0] = q;
    }
    (*(C_001C26B0 ***)(data + 0x68))[0]->func_001B13A0(data + 0x70, data + 0xf0, 0, (int)strlen(l.text));
    func_001577A0((*(C_001C26B0 ***)(data + 0x68))[0], -1);
    (*(C_001C26B0 ***)(data + 0x68))[0]->func_001B1860(0, -1, 255, 1, 0, 0, -1, 255, 1, 0, 0, 0, 0);
    (*(C_001C26B0 ***)(data + 0x68))[0]->func_001B17D0(l.text);
    (*(C_001C26B0 ***)(data + 0x68))[0]->func_001B19A0(*(int *)(data + 0x178));
    (*(C_001C26B0 ***)(data + 0x68))[0]->func_001B2270(*(int *)(data + 0x184));
    (*(C_001C26B0 ***)(data + 0x68))[0]->func_001B19C0(*(int *)(data + 0x188), *(int *)(data + 0x18c), 0);
    (*(C_001C26B0 ***)(data + 0x68))[0]->func_001B1AB0(*(int *)(data + 0x194), 0);
    (*(C_001C26B0 ***)(data + 0x68))[0]->func_001B1BF0(*(int *)(data + 0x198));
    return this;
}

undefined4 C_001C2F70::func_001C2F70(void)
{
  int __stdcall func_001C04D0(int);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x6c) != 0) {
    func_001C04D0((int)(*(int *)(in_ECX + 0x6c)));
  }
  return 1;
}

void UIWidgetStaticUserRotate::func_001C2F90(int p)
{
    if (fA4 == 0) {
        if (f98 != 0) {
            func_001C0B00(p);
        }
        if (f9c != 0) {
            func_001C0B70(p);
        }
        if (fA0 != 0) {
            func_001C0BE0(p);
        }
        if (f68 != 0) {
            f68->func_00199650(&f6c);
        }
    }
    func_00157A00(p);
}

void UIWidgetMovementControl::func_001C3000(int p1, int p2, int value, int id)
{
    switch (id) {
    case 0x2c: func_001C0DD0(0, value, 10); break;
    case 0x2d: func_001C0DD0(1, value, 11); break;
    case 0x2e: func_001C0DD0(2, value, 8); break;
    case 0x2f: func_001C0DD0(3, value, 9); break;
    case 0x30: func_001C0DD0(4, value, 2); break;
    case 0x31: func_001C0DD0(5, value, 1); break;
    case 0x32: func_001C0DD0(6, value, 3); break;
    case 0x33: func_001C0DD0(7, value, 0); break;
    case 0x34: func_001C0DD0(8, value, 6); break;
    case 0x35: func_001C0DD0(9, value, 5); break;
    case 0x36: func_001C0DD0(10, value, 14); break;
    case 0x37: func_001C0DD0(11, value, 7); break;
    case 0x38: func_001C0DD0(12, value, 4); break;
    case 0x39: func_001C0DD0(13, value, 15); break;
    case 0x3a: func_001C0DD0(14, value, 13); break;
    case 0x3b: func_001C0DD0(15, value, 12); break;
    }
}

void UIWidgetMovementControl::func_001C3170(int p1, int p2, int value, int id)
{
    switch (id) {
    case 0x2c: func_001C1030(0, value, 10); break;
    case 0x2d: func_001C1030(1, value, 11); break;
    case 0x2e: func_001C1030(2, value, 8); break;
    case 0x2f: func_001C1030(3, value, 9); break;
    case 0x30: func_001C1030(4, value, 2); break;
    case 0x31: func_001C1030(5, value, 1); break;
    case 0x32: func_001C1030(6, value, 3); break;
    case 0x33: func_001C1030(7, value, 0); break;
    case 0x34: func_001C1030(8, value, 6); break;
    case 0x35: func_001C1030(9, value, 5); break;
    case 0x36: func_001C1030(10, value, 14); break;
    case 0x37: func_001C1030(11, value, 7); break;
    case 0x38: func_001C1030(12, value, 4); break;
    case 0x39: func_001C1030(13, value, 15); break;
    case 0x3a: func_001C1030(14, value, 13); break;
    case 0x3b: func_001C1030(15, value, 12); break;
    }
}

void UIWidgetStaticUserRotate::func_001C32E0(void)
{
    SyncOn();
    if (f1E0 == 0) {
        if (f240 > D_00275544) {
            f244 = func_001DC974();
            f1E4 = 1;
        } else {
            f1E0 = func_001C13A0();
        }
    }
    SyncOn();
    fA4 = 0;
    v7();
}

void UIWidgetStaticUserRotate::func_001C33A0(void)
{
    SyncOff();
    if (f1E8 != 0 && f1E0 != 0) {
        f1E0 = (func_001C1490() == 0);
    }
    SyncOff();
    fA4 = 1;
    v5();
}

void UIWidgetStaticUserRotate::func_001C3440(int p)
{
    if (f1E4 != 0) {
        u32 now = func_001DC974();
        if (f240 < (float)((now - f244) / 1000)) {
            f1E0 = func_001C13A0();
            f1E4 = 0;
        }
    }
    if (f1E0 != 0) {
        func_001C2F90(p);
        return;
    }
    func_00157A00(p);
}

int __stdcall func_001FF3C0(int size);
void *C_001C34D0::func_001C34D0(int flags)
{
    vtbl = &D_0028DF04;
    if (f68 != 0) {
        f68->Destroy(1);
    }
    vtbl = &D_0028D804;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001C3510::func_001C3510(int flags)
{
    vtbl = &D_0028DFE4;
    ((C_001D57E0 *)(fCC))->func_001D57E0();
    ((C_001D57E0 *)(f68))->func_001D57E0();
    vtbl = &D_0028D804;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

DXVertexBuffer *DXVertexBuffer::func_001C3550(int type, int count)
{
    int d;
    int ok;
    int fail;

    d = type;
    d -= 0x112;
    if (d == 0) {
        goto build;
    }
    d -= 0xb2;
    if (d == 0) {
        goto build;
    }
    if (d == 2) {
build:
        f10 = count;
        fC = 0x20;
        f8 = type;
        f14 = func_001FF3C0(count << 5);
        ok = f14 != 0;
        fail = (int)((unsigned)(ok - 1) & 0x8007000E) < 0;
        return (DXVertexBuffer *)((fail - 1) & (int)this);
    }
    return 0;
}

void C_001C35B0::func_001C35B0(void *src, int index, unsigned int count)
{
    int offset = fC * index;
    void *buffer = *(void *volatile *)&f14;
    char *dst = (char *)func_001FF410(buffer, 0) + offset;
    CopyMem(dst, src, count);
}

void *DXVertexBuffer::func_001C35F0(S_001C35F0_Src *src, int b, int c, int d)
{
    void *buf = src->v4(c, d / src->fC, 0x80);
    if (buf != 0) {
        void *result = v2(buf, b, d);
        if (src->v5() != 0 && result != 0) {
            return result;
        }
    }
    return 0;
}

char *DXVertexBuffer::func_001C3650(int index, int count, int flags)
{
    int offset;

    if (count == 0)
        count = f10 - index;
    if (index >= 0 && index < f10 && count + index <= f10) {
        offset = fC * index;
        return (char *)func_001FF410((void *)f14, flags) + offset;
    }
    return 0;
}

