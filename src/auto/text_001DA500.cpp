/* 4 functions from 0x001DA500 to 0x001DB4D0, found by Ghidra. */
#include "common.h"
extern float D_002F08AC,D_002EFEA0,D_00278650;
extern float D_002F100C[],D_002F1014[];
extern int D_0020CA7C,D_00040350,D_00040344,D_00040348,D_0020C8E4;
extern int D_0020C6EC,D_0020C6F0,D_0020C6F4,D_002A99B0;
extern char D_002AC7D4[];
void __fastcall func_001FEC30(int,void*);
void __stdcall func_00201590(int,void*,int);
void __stdcall func_001FDA60(int,unsigned int);
struct C_001DA500 {
 char data[0x230];
 void func_001DA500();
};

void *__stdcall func_001FF3C0(int size);
void *__stdcall func_001FF410(void *buffer, int flags);
int __fastcall func_001FEBD0(int n, void *p);
void __stdcall func_001FEE00(int index, void *ptr, int size);
void __fastcall func_001FD020(void *p, int v);
int __stdcall func_001FD770(int v);
void __stdcall func_00200390(int index, int value);
int __stdcall func_001FD8E0(int a, int b);
void __stdcall func_00200B30(int a, int b, void *c);

extern int D_002F1034;
extern int D_00040304;
extern int D_00040354;
extern int D_0020C6DC;
extern int D_0020C6E0;
extern int D_0020C6E4;
extern int D_0020CA50;
extern char D_002AC6D0[];

struct S_001DAAD0_Block {
    int d[20];
};

struct S_001DAAD0_Slot6C {
    void func_0014A650(int a0);
};

struct S_001DAAD0_Slot70 {
    void func_00142D00(int a0);
};

struct S_001DAAD0_Dev {
    char pad0[0x6C];
    S_001DAAD0_Slot6C *f6c;
    S_001DAAD0_Slot70 *f70;
};

extern S_001DAAD0_Dev *D_002EFDB8;

struct C_001DB080 {
    char pad0[0xD4];
    int cur;
    char pad1[0x210 - 0xD8];
    int cnt;
    int idx;
    void func_001DB080();
};

struct C_001DAAD0 {
    char pad0[0xEC];
    int fEC;
    int fF0;
    char padF4[0x230 - 0xF4];
    void *arr230[0x96];
    int func_001DAAD0(int a0, S_001DAAD0_Block *a1, void *a2);
};

struct S_001DAC10_Tex {
    char pad0[0xB8];
    int fB8;
};

struct S_001DAC10_Entry {
    int f0; float scale,x,fC,z; char pad14[0x18];
    S_001DAC10_Tex *f2c;
    int f30;
    S_001DAC10_Tex *f34;
    S_001DAC10_Tex *f38;
    char pad3C[0x48 - 0x3C];
};

struct S_001DAC10_Mgr {
    char pad0[0x2C];
    S_001DAC10_Entry *f2c;
};

extern S_001DAC10_Mgr *D_002F08BC;
extern int D_002F1038;
extern int D_0020C760;
extern int D_0020C764;
extern float D_00275460;
void __stdcall func_001FE490(int a0);
int __stdcall func_001FCE50(int a0, int a1);
void __stdcall func_001FF940(int a0, int a1);
void __stdcall func_00201100(int a0);

struct S_001DAC10_Vert {
    float x, y, z;
    float u0, v0;
    float u1, v1;
    S_001DAC10_Vert() { x = y = z = 0; u0 = v0 = u1 = v1 = 0; }
};

struct S_001DAC10_Quad {
    S_001DAC10_Vert v[4];
};

struct S_001DAC10_Color {
    float r, g, b, a;
    S_001DAC10_Color(float r_, float g_, float b_, float a_) { r = r_; g = g_; b = b_; a = a_; }
};

struct C_001DAC10 {
    char pad0[0xD4];
    int fD4;
    char padD8[0xE8 - 0xD8];
    int fE8;
    char padEC[0xF8 - 0xEC];
    int fF8;
    char padFC[0x488 - 0xFC];
    void *arr488[6];
    void func_001DAC10();
    void DrawQuad(S_001DAC10_Vert *verts, S_001DAC10_Color *color, S_001DAC10_Entry *e, int tex)
    {
        void **p = &arr488[D_002F1038];
        int f;
        if (*p == 0)
            *p = func_001FF3C0(0x70);
        *(S_001DAC10_Quad *)func_001FF410(arr488[D_002F1038], 0) = *(S_001DAC10_Quad *)verts;
        func_001FEBD0(0x20, color);
        func_001FEE00(0, arr488[D_002F1038], 0x1c);
        func_001FD020(&D_00040304, 0);
        func_001FD020(&D_00040354, 0x207);
        f = D_0020C6DC;
        f |= 0x2000;
        D_0020C6DC = f;
        D_0020CA50 = 0;
        func_001FD770(0x1b02);
        func_00200390(0, e->f2c->fB8);
        f = D_0020C6DC;
        f |= 1;
        D_0020C6E0 = 3;
        D_0020C6DC = f;
        D_0020C6E4 = 3;
        func_00200390(1, e->f2c->fB8);
        f = D_0020C6DC;
        f |= 2;
        D_0020C760 = 3;
        D_0020C6DC = f;
        D_0020C764 = 3;
        func_00200B30(6, 4, D_002AC6D0);
        func_00201100(tex);
        if (D_002F1038 == 5)
            D_002F1038 = 0;
        else
            D_002F1038++;
    }
};

int C_001DAAD0::func_001DAAD0(int a0, S_001DAAD0_Block *a1, void *a2)
{
    void **p = &arr230[D_002F1034];
    S_001DAAD0_Block *dst;
    void *buf;
    int v;

    if (*p == 0) {
        *p = func_001FF3C0(0x50);
    }
    buf = arr230[D_002F1034];
    dst = (S_001DAAD0_Block *)func_001FF410(buf, 0);
    *dst = *a1;
    D_002EFDB8->f6c->func_0014A650(fEC);
    func_001FEBD0(0x20, a2);
    D_002EFDB8->f70->func_00142D00(fF0);
    buf = arr230[D_002F1034];
    func_001FEE00(0, buf, 0x14);
    func_001FD020(&D_00040304, 0);
    func_001FD020(&D_00040354, 0x207);
    v = D_0020C6DC;
    v |= 0x2000;
    D_0020C6DC = v;
    D_0020CA50 = 0;
    func_001FD770(0x1b02);
    func_00200390(0, a0);
    v = D_0020C6DC;
    v |= 1;
    D_0020C6E0 = 3;
    D_0020C6DC = v;
    D_0020C6E4 = 3;
    func_001FD8E0(0, 0);
    func_00200B30(6, 4, D_002AC6D0);
    if (D_002F1034 == 0x95) {
        D_002F1034 = 0;
    } else {
        D_002F1034++;
    }
    return 0;
}
