/* 2 functions from 0x0008BCD0 to 0x0008CC50, found by Ghidra. */
#include "common.h"
#include <string.h>
extern int D_0028F5DC;
extern char D_00279EE0[];
extern int *D_002A8490;
extern int *D_002F07B8;
extern int D_0028F5E0;
extern int D_0028F5EC;
extern char D_00278690[];
extern char D_0027958C[];
extern char D_002786B0[];
extern char D_00279F28[];
extern char D_00279F18[];
extern char D_00279F10[];
extern char D_00279F08[];
extern char D_00279EFC[];
extern char D_00279EE8[];

struct Str_0008BCD0 {
    int a[4];
    char c;
};
extern Str_0008BCD0 D_00278664;
extern Str_0008BCD0 D_002A60B0;

void *func_001E8A44(unsigned int size);

struct Elem_0008BCD0 {
    char pad0[0x28];
    int x;
    int y;
    char pad30[4];
    float f34;
    unsigned int argb;
    float m3c;
    float m40;
    float m44;
    float m48;
    char pad4c[0xc];
    unsigned char flags;
    Elem_0008BCD0 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
    void SetPos(int nx, int ny) {
        if (x != nx) {
            x = nx;
            flags |= 1;
        }
        if (y != ny) {
            y = ny;
            flags |= 1;
        }
    }
    void SetX(int nx) {
        if (x != nx) {
            x = nx;
            flags |= 1;
        }
    }
    void SetF34(float v) {
        if (f34 != v) {
            f34 = v;
            flags |= 1;
        }
    }
    void SetIdentity() {
        m40 = 0;
        m44 = 0;
        flags |= 4;
        m3c = 1.0f;
        m48 = 1.0f;
    }
    void SetAlpha(unsigned char a) {
        flags |= 2;
        ((unsigned char *)&argb)[3] = a;
    }
};

struct Text_0008BCD0 {
    char pad0[4];
    int x;
    int y;
    char pad0c[0x30];
    int f3c;
    char pad40[4];
    int color;
    unsigned int argb;
    char pad4c[2];
    unsigned char flags;
    Text_0008BCD0 *func_001D5E90();
    void func_001D5FA0(int font, char *name, int size, int z);
    void func_0005E840(int a);
    void SetPos(int nx, int ny) {
        if (x != nx || y != ny) {
            x = nx;
            y = ny;
            flags |= 6;
        }
    }
    void SetColor(int c) {
        if (color != c) {
            color = c;
            flags |= 6;
        }
    }
    void SetArgb(unsigned int c) {
        if (argb != c) {
            flags |= 8;
            argb = (argb & c) | (c & 0xffffff);
        }
    }
    void Set3C(int v) {
        if (f3c != v) {
            f3c = v;
            flags |= 4;
        }
    }
};

struct Win_0008BCD0 {
    Win_0008BCD0 *func_001B12C0(int a);
    void func_001B13A0(char *a, char *b, int c, int d);
    void func_001B19C0(int a, int b, int c);
    void func_001B2270(unsigned int c);
    void func_001B19A0(int a);
    void func_001B1AB0(int a, int b);
    void func_001B17D0(int a);
};

struct Res_0008BCD0 {
    void func_0018C780(int n, void *names, int a);
    int *func_0018C160(char *name);
};

struct C_0008BCD0 {
    void *vtbl;
    char pad4[0x20];
    Text_0008BCD0 *unk24;
    Text_0008BCD0 *unk28;
    Text_0008BCD0 *unk2c;
    Text_0008BCD0 *unk30;
    Text_0008BCD0 *unk34;
    Elem_0008BCD0 *unk38;
    Elem_0008BCD0 *unk3c;
    Elem_0008BCD0 *unk40;
    Elem_0008BCD0 *unk44;
    Elem_0008BCD0 *unk48;
    Elem_0008BCD0 *unk4c;
    Elem_0008BCD0 *unk50;
    Win_0008BCD0 *unk54;
    void func_0008BCD0();
    void func_001577A0(Win_0008BCD0 *w, int a);
};
