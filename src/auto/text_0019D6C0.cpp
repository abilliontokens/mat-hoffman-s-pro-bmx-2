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

struct C_002BEAAC {
    int func_0013D310(char *a, void *b, int *c, int *d, int e);
    void func_0013C8A0(int a, void *b, int c, int d);
    void func_0013C110(int a);
};
extern C_002BEAAC *D_002BEAAC;

struct C_0019D7B0 {
    void func_0019C690(char *path, int *p);
    void func_0019D6C0(char *path, int h);
    int func_0019D7B0(int a1, char *path);
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

