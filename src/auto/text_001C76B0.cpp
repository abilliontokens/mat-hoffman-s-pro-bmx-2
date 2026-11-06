/* 1 function from 0x001C76B0 to 0x001C7EB0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
extern int D_002A4334;
extern int D_002F088C;
extern int D_002EF7D0;
extern char D_0028E838[];
extern char D_00287E90[];
extern char D_0028E82C[];
extern char D_0028E820[];
extern char D_0028E814[];
extern char D_0028E808[];
extern char D_0028E7FC[];
extern char D_0028E7F0[];
extern char D_0027BC8C[];
extern char D_0028E7D8[];
extern char D_0028E7D0[];
extern char D_0028E7C4[];
extern char D_00277298[];
extern char D_00277288[];
extern char D_00276980[];
struct IniObj {
    void func_00169490(int a, int b);
    int func_00169710(char *s);
    void func_00168550(char *k, void *out, int dflt);
    void func_00168A10(char *k, int *out);
    void func_00168C20(char *k, int a, int *out);
    void func_001691E0();
};
struct RegObj { IniObj *func_00132E20(char *s); };
struct MObj { IniObj *func_00168280(); IniObj *func_00164440(int a, int b); };
struct G162Obj { int func_00162B20(char *s, int a); };
struct Node170 { char pad0[0x40]; int f40; char pad44[0x170 - 0x44]; Node170 *f170; };
struct Sub4 {
    char pad0[0x180];
    unsigned char b180;
    void func_00199BE0(float *m);
    Node170 *func_00198330(char *s);
};
struct Sub3C {
    void **vtbl;
    Sub4 *f4;
    void func_001673B0(char *s, int a, int b, int c, int d);
    void func_001646B0();
};
struct Elem58 {
    char name[0x40];
    int f40; int f44; int f48; int f4C; int f50; int f54;
    void func_001C6870();
};
struct CtorObj {
    void func_0019FD20(int v0, int v1, int v2, int v3, Node170 *a, Node170 *b, int c);
};
struct Obj {
    char pad0[0x3C];
    Sub3C *f3C;
    Node170 *f40;
    Node170 *f44;
    CtorObj *f48;
    CtorObj *f4C;
    char pad50[0x70 - 0x50];
    int v70[4];
    char pad80[0xA0 - 0x80];
    int vA0[4];
    int fB0;
    char padB4[0xBC - 0xB4];
    int fBC;
    Elem58 *fC0;
    char padC4[0x37C - 0xC4];
    int f37C;
    void func_001C76B0(int a, int b, int c, int d, int e, int f2, int g, int h, int i, int j, int k, int l, int m);
};
void *func_001E8A44(int size);
void func_001E891B(void *p);
void *func_001E83E8(void *p, int size);
int func_001ADCC0(char *buf, int n, char *fmt, int a);
int func_001C7250(int a);
int func_001C64A0(int a);
void func_001577A0(void *a, int b);
int func_00162B20(char *s, int a);
int func_001EA426(char *s, void *p);

void Obj::func_001C76B0(int a, int b, int c, int d, int e, int f2, int g, int h, int i2, int j, int k, int l, int m)
{
    IniObj *ini;
    char buf1[256];
    char buf2[256];
    char buf3[256];
    char buf4[256];
    char buf5[256];
    int flag;
    int tmp14;
    int tmp10;
    int cnt;
    int n;
    float mat[16];
    float mat2[16];
    void *mem;
    D_002F088C = (int)((RegObj *)D_002A4334)->func_00132E20(D_0028E838);
    fB0 = b;
    f37C = e;
    mem = func_001E8A44(0x4cc);
    ini = mem ? ((MObj *)mem)->func_00168280() : 0;
    ini->func_00169490(a, 0);
    ini->func_00169710(D_00287E90);
    ini->func_00168550(D_0028E82C, buf1, -1);
    mem = func_001E8A44(0x244);
    f3C = mem ? (Sub3C *)((MObj *)mem)->func_00164440(1, 1) : 0;
    f3C->func_001673B0(buf2, d, 1, 1, 1);
    if (f3C == 0) {
        n = 0;
    } else {
        n = (int)f3C->vtbl[1] + (int)f3C;
    }
    func_001577A0((void *)n, -1);
    f3C->func_001646B0();
    for (n = 0; n < 16; n++)
        mat[n] = 0.0f;
    mat[0] = 1.0f; mat[5] = 1.0f; mat[10] = 1.0f; mat[15] = 1.0f;
    for (n = 0; n < 16; n++)
        mat2[n] = mat[n];
    f3C->f4->func_00199BE0(mat2);
    f3C->f4->b180 |= 8;
    ini->func_00168550(D_0028E820, buf3, -1);
    ini->func_00168550(D_0028E814, buf4, -1);
    f40 = f3C->f4->func_00198330(buf3);
    v70[0] = f2; v70[1] = g; v70[2] = h; v70[3] = i2;
    f44 = f3C->f4->func_00198330(buf4);
    vA0[0] = j; vA0[1] = k; vA0[2] = l; vA0[3] = m;
    mem = func_001E8A44(0x54);
    f48 = mem ? (CtorObj *)mem : 0;
    if (f48 != 0)
        f48->func_0019FD20(v70[0], v70[1], v70[2], v70[3], f40, f40->f170, 0);
    else
        f48 = 0;
    ((Node170 *)f48)->f40 = 0;
    mem = func_001E8A44(0x54);
    f4C = mem ? (CtorObj *)mem : 0;
    if (f4C != 0)
        f4C->func_0019FD20(vA0[0], vA0[1], vA0[2], vA0[3], f44, f44->f170, 0);
    else
        f4C = 0;
    ((Node170 *)f4C)->f40 = 0;
    flag = 0;
    ini->func_00168A10(D_0028E808, &flag);
    fBC = 0;
    func_001ADCC0(buf5, 0x100, D_0028E7FC, fBC + 1);
    if (ini->func_00169710(buf5)) {
        do {
            fC0 = (Elem58 *)func_001E83E8(fC0, (fBC + 1) * 0x58);
            fC0[fBC].f44 = 0;
            fC0[fBC].f48 = 0;
            ini->func_00168550(D_0028E7F0, &fC0[fBC], -1);
            ini->func_00168550(D_0027BC8C, buf1, -1);
            ini->func_00168A10(D_0028E7D8, &tmp14);
            ini->func_00168C20(D_0028E7D0, 1, &tmp10);
            fC0[fBC].f40 = ((G162Obj *)D_002EF7D0)->func_00162B20(buf1, 1);
            fC0[fBC].f54 = tmp10;
            if (tmp14 != 0)
                fC0[fBC].f44 = func_001C7250(fC0[fBC].f40);
            else
                fC0[fBC].f44 = func_001C64A0(fC0[fBC].f40);
            fC0[fBC].f50 = 0;
            fC0[fBC].f4C = 0;
            fC0[fBC].func_001C6870();
            fBC++;
            func_001ADCC0(buf5, 0x100, D_0028E7FC, fBC + 1);
        } while (ini->func_00169710(buf5));
    }
    if (flag == 0)
        return;
    if (ini != 0) {
        ini->func_001691E0();
        func_001E891B(ini);
    }
    mem = func_001E8A44(0x4cc);
    ini = mem ? ((MObj *)mem)->func_00168280() : 0;
    ini->func_00169490(0, (int)buf1);
    ini->func_00169710(D_00277298);
    flag = 0;
    ini->func_00168A10(D_00277288, &flag);
    cnt = flag;
    if (cnt <= 0)
        return;
    func_001ADCC0(buf5, 0x100, D_0028E7C4, 1);
    ini->func_00169710(buf5);
    ini->func_00168550(D_00276980, buf1, -1);
    for (n = 0; n < fBC; n++) {
        if (func_001EA426(buf1, &fC0[n]) == 0)
            return;
    }
    fC0 = (Elem58 *)func_001E83E8(fC0, (fBC + 1) * 0x58);
    fC0[fBC].f54 = 1;
    fC0[fBC].f44 = 0;
    fC0[fBC].f48 = 0;
    for (n = 0; buf1[n] != 0; n++)
        fC0[fBC].name[n] = buf1[n];
    fC0[fBC].name[n] = 0;
}
