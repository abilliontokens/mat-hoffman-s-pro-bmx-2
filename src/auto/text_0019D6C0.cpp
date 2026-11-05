/* 9 functions from 0x0019D6C0 to 0x0019DEF0, found by Ghidra. */
#include "common.h"

extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);

extern char D_002A4C10[];
extern char D_002A4C0F[];
extern char D_00284644;
extern char D_0028463C;
extern char D_00284638;
extern int D_00275FB4;

void func_001E8BF0(char *dst, void *src, int n);
void func_00030F30(char *s, void *p);
int func_001EA426(void *a, void *b);
void func_00132E90(int a, void *b);
void *func_001E8AA5(int size);

struct C_002BEAAC {
    int func_0013D310(char *a, void *b, int *c, int *d, int e);
    void func_0013C8A0(int a, void *b, int c, int d);
    void func_0013C110(int a);
    void func_0013B1F0(int a, void *b);
    void func_0013B210(void *a);
};

void func_001E8390(void *p);
void func_001E891B(void *p);

struct C_0019DC80_Item {
    virtual void v0();
    virtual void v1();
    virtual int v2();
};

struct S_0019DC80_Res {
    char pad0[0xC];
    void *fC;
    void *f10;
    void *f14;
    void *f18;
    void *f1C;
    void *f20;
    void *f24;
    void *f28;
    int f2C;
};

struct C_0019DC80 {
    char pad0[0x54];
    void *f54;
    char pad58[0x138];
    int f190;
    void *f194;
    void *f198;
    int pad19C;
    C_0019DC80_Item **f1A0;
    S_0019DC80_Res *f1A4;
    void func_0019DC80(void);
    void func_00132EB0(int a0);
    C_0019DC80 *func_0019DA80(int a0);
};

extern int D_0028B25C;
extern int D_002A9D38;
extern int D_002A9D3C;
extern int D_002A9D40;
extern int D_002A9D44;
extern C_002BEAAC *D_002BEAAC;

struct C_000264C0 {
    void func_000264C0(void *m);
};

struct S_Vec3i {
    int x, y, z;
};

struct S_0019D6C0_Obj {
    int f0;
    int f4;
    u16 f8;
    u16 fA;
    int fC;
    int f10;
    S_Vec3i f14;
    u16 f20;
    char pad22[0xE];
    char f30[0x40];
    int f70;
    char pad74[0xC];
};

struct C_0019D7B0 {
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
    char pad4[0x4C];
    int f50;
    char pad54[0x9C];
    char fF0[0x40];
    char pad130[0x80];
    S_Vec3i f1B0;
    u16 f1BC;
    u16 pad1BE;
    char *f1C0;
    int f1C4;
    int f1C8;
    u16 f1CC;
    u16 f1CE;
    int pad1D0;
    S_0019D6C0_Obj *f1D4;
    void func_0019C690(char *path, int *p);
    void func_0019CCE0(int h);
    void func_0019D6C0(char *path, int h);
    int func_0019D7B0(int a1, char *path);
};

struct C_00199C20 {
    void func_00199C20(int a, void *out);
};

struct __declspec(align(16)) S_Matrix16 {
    f32 m[16];
};

struct C_0019DEC0 {
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
    virtual void v31(void *a);
    char pad4[0x198];
    C_00199C20 *f19C;
    void func_0019DEC0(void);
};

struct C_0019DE30_Obj {
    void func_0019CBF0(int a0, int a1);
};

struct C_0019DE30 {
    char pad0[0xA4];
    u16 fA4;
    u8 fA6;
    u8 fA7;
    char padA8[0xE8];
    int f190;
    char pad194[0xC];
    C_0019DE30_Obj **f1A0;
    void func_0019DE30(int a0, int a1);
    void func_00157A00(int a0);
    void func_0019DE80(int a0);
};

void C_0019D7B0::func_0019D6C0(char *path, int h)
{
    v27();
    f1C0 = path;
    func_0019CCE0(h);
    f1D4 = (S_0019D6C0_Obj *)func_001E8AA5(0x80);
    f1D4->f0 = 0;
    f1D4->f4 = f50;
    f1D4->fC = f1C4;
    f1D4->f10 = f1C8;
    f1D4->f8 = f1CC;
    f1D4->fA = f1CE;
    f1D4->f14 = f1B0;
    f1D4->f20 = f1BC;
    ((C_000264C0 *)f1D4->f30)->func_000264C0(fF0);
    f1D4->f70 = 1;
    D_002BEAAC->func_0013B1F0(h, f1D4);
}

int C_0019D7B0::func_0019D7B0(int a1, char *path)
{
    int h;
    int ptr;
    int vC;
    int v10;
    int v14;
    int v18;
    char buf[260];

    if (D_002A4C10[0] != 0) {
        strcpy(buf, D_002A4C10);
        if (D_002A4C0F[strlen(D_002A4C10)] != '\\')
            func_001E8BF0(buf, &D_00284644, 0x7f);
        strcat(buf, path);
    } else {
        strcpy(buf, path);
    }
    func_00030F30(buf, &D_0028463C);
    h = -1;
    ptr = 0;
    if (D_002BEAAC->func_0013D310(buf, &D_00275FB4, &h, &ptr, 1) == 0)
        return 0;
    if (ptr != 0) {
        v14 = *(int *)(ptr + 4);
        func_0019C690((char *)a1, (int *)ptr);
    } else {
        D_002BEAAC->func_0013C8A0(h, &v18, 1, 4);
        D_002BEAAC->func_0013C8A0(h, &vC, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &v10, 4, 1);
        if (v18 != 0x4d2 || func_001EA426(&vC, &D_00284638) != 0 || v10 != 1)
            D_002BEAAC->func_0013C110(h);
        func_00132E90(h, &v14);
        func_0019D6C0((char *)a1, h);
    }
    D_002BEAAC->func_0013C110(h);
    return 1;
}

void func_0019D9A0(float *out, float *a, float *b)
{
    float z = a[2] < b[2] ? a[2] : b[2];
    float y = a[1] < b[1] ? a[1] : b[1];
    float x = a[0] < b[0] ? a[0] : b[0];
    out[0] = x;
    out[3] = 1.0f;
    out[1] = y;
    out[2] = z;
}

void func_0019DA10(float *out, float *a, float *b)
{
    float z = a[2] > b[2] ? a[2] : b[2];
    float y = a[1] > b[1] ? a[1] : b[1];
    float x = a[0] > b[0] ? a[0] : b[0];
    out[0] = x;
    out[3] = 1.0f;
    out[1] = y;
    out[2] = z;
}

C_0019DC80 *C_0019DC80::func_0019DA80(int a0)
{
    int *u;
    int *p;
    func_00132EB0(a0);
    u = (int *)this;
    u[0] = (int)&D_0028B25C;
    p = &u[0xA8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xB8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xC8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0xD8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x170 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x180 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    u[0xA8 / 4] = D_002A9D38; u[0xAC / 4] = D_002A9D3C; u[0xB0 / 4] = D_002A9D40; u[0xB4 / 4] = D_002A9D44;
    u[0xB8 / 4] = D_002A9D38; u[0xBC / 4] = D_002A9D3C; u[0xC0 / 4] = D_002A9D40; u[0xC4 / 4] = D_002A9D44;
    u[0xC8 / 4] = D_002A9D38; u[0xCC / 4] = D_002A9D3C; u[0xD0 / 4] = D_002A9D40; u[0xD4 / 4] = D_002A9D44;
    u[0xD8 / 4] = D_002A9D38; u[0xDC / 4] = D_002A9D3C; u[0xE0 / 4] = D_002A9D40; u[0xE4 / 4] = D_002A9D44;
    u[0x170 / 4] = D_002A9D38; u[0x174 / 4] = D_002A9D3C; u[0x178 / 4] = D_002A9D40; u[0x17C / 4] = D_002A9D44;
    u[0x180 / 4] = D_002A9D38; u[0x184 / 4] = D_002A9D3C; u[0x188 / 4] = D_002A9D40; u[0x18C / 4] = D_002A9D44;
    u[0x190 / 4] = 0; u[0x194 / 4] = 0; u[0x198 / 4] = 0;
    u[0x19C / 4] = 0; u[0x1A0 / 4] = 0; u[0x1A4 / 4] = 0;
    u[0x50 / 4] = 1;
    return this;
}

void C_0019DC80::func_0019DC80(void)
{
    int i;

    if (f1A4 != 0) {
        f1A4->f2C--;
        if (f1A4->f2C <= 0) {
            D_002BEAAC->func_0013B210(f1A4);
            for (i = 0; i < f190; i++) {
                if (f1A0[i] != 0 && f1A0[i]->v2() == 0)
                    f1A0[i] = 0;
            }
            func_001E8390(f1A0);
            func_001E8390(f1A4->f14);
            func_001E8390(f1A4->f18);
            func_001E8390(f1A4->fC);
            func_001E8390(f1A4->f10);
            if (f1A4->f1C != 0)
                func_001E891B(f1A4->f1C);
            func_001E8390(f1A4->f20);
            func_001E8390(f1A4->f28);
            func_001E8390(f1A4->f24);
            func_001E8390(f1A4);
            f1A4 = 0;
        }
        func_001E891B(f194);
        func_001E891B(f198);
    } else {
        for (i = 0; i < f190; i++) {
            if (f1A0[i] != 0 && f1A0[i]->v2() == 0)
                f1A0[i] = 0;
        }
        func_001E8390(f1A0);
        func_001E891B(f194);
        func_001E891B(f198);
    }
    if (f54 != 0) {
        func_001E891B(f54);
        f54 = 0;
    }
}

void C_0019DE30::func_0019DE30(int a0, int a1)
{
    for (int i = 0; i < f190; i++) {
        f1A0[i]->func_0019CBF0(a0, a1);
    }
}

void C_0019DE30::func_0019DE80(int a0)
{
    if (fA6 != 0) {
        func_0019DE30(fA4, fA6);
    }
    fA7 = fA7 & 0xef;
    func_00157A00(a0);
}

void C_0019DEC0::func_0019DEC0(void) {
    S_Matrix16 m;

    f19C->func_00199C20(0, &m);
    v31(&m);
}

