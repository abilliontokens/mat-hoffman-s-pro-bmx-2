/* 1 function from 0x001C76B0 to 0x001C7EB0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
struct __declspec(align(16)) Mtx { float m[16]; };
struct V4 { int v[4]; };
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
struct Node170 { char pad0[0x40]; int f40; char pad44[0x170 - 0x44]; Node170 *f170; Node170 *func_0019FD20(V4 v, Node170 *a, Node170 *b, Node170 *c); };
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
struct Obj {
    char pad0[0x3C];
    Sub3C *f3C;
    Node170 *f40;
    Node170 *f44;
    Node170 *f48;
    Node170 *f4C;
    char pad50[0x70 - 0x50];
    V4 v70;
    char pad80[0xA0 - 0x80];
    V4 vA0;
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
void __stdcall func_001577A0(void *a, int b);
int func_00162B20(char *s, int a);
int func_001EA426(char *s, void *p);
extern "C" char *strcpy(char *dst, const char *src);
#pragma intrinsic(strcpy)

void Obj::func_001C76B0(int a, int b, int c, int d, int e, int f2, int g, int h, int i2, int j, int k, int l, int m)
{
    IniObj *ini;
    Node170 *s1;
    Node170 *s2;
    Node170 *node;
    char buf5[256];
    char buf1[256];
    char buf2[256];
    char buf3[256];
    char buf4[256];
    int flag;
    int flag2;
    int tmp14;
    int tmp10;
    int n;
    Mtx mat;
    Mtx mat2;
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
    f3C->func_001673B0(buf1, d, 1, 1, 1);
    func_001577A0(f3C ? (void *)((char *)f3C + (int)f3C->vtbl[1]) : 0, -1);
    f3C->func_001646B0();
    AsmIdentityMatrix(&mat);
    mat2 = mat;
    f3C->f4->func_00199BE0(mat2.m);
    f3C->f4->b180 |= 8;
    ini->func_00168550(D_0028E820, buf4, -1);
    ini->func_00168550(D_0028E814, buf3, -1);
    f40 = f3C->f4->func_00198330(buf4);
    v70.v[0] = f2;
    v70.v[1] = g;
    v70.v[2] = h;
    v70.v[3] = i2;
    f44 = f3C->f4->func_00198330(buf3);
    vA0.v[0] = j;
    vA0.v[1] = k;
    vA0.v[2] = l;
    vA0.v[3] = m;
    s1 = f40->f170;
    s2 = s1->f170;
    node = (Node170 *)func_001E8A44(0x54);
    f48 = node ? node->func_0019FD20(v70, f40, s1, s2) : 0;
    f48->f40 = 0;
    s1 = f44->f170;
    s2 = s1->f170;
    node = (Node170 *)func_001E8A44(0x54);
    f4C = node ? node->func_0019FD20(vA0, f44, s1, s2) : 0;
    f4C->f40 = 0;
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
            ini->func_00168550(D_0027BC8C, buf2, -1);
            ini->func_00168A10(D_0028E7D8, &tmp14);
            ini->func_00168C20(D_0028E7D0, 1, &tmp10);
            fC0[fBC].f40 = ((G162Obj *)D_002EF7D0)->func_00162B20(buf2, 1);
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
    ini->func_00169490((int)buf1, 0);
    ini->func_00169710(D_00277298);
    flag2 = 0;
    ini->func_00168A10(D_00277288, &flag2);
    if (flag2 <= 0)
        return;
    n = 1;
    func_001ADCC0(buf5, 0x100, D_0028E7C4, n);
    ini->func_00169710(buf5);
    ini->func_00168550(D_00276980, buf2, -1);
    for (n = 0; n < fBC; n++) {
        if (func_001EA426(buf2, &fC0[n]) == 0)
            return;
    }
    fC0 = (Elem58 *)func_001E83E8(fC0, (fBC + 1) * 0x58);
    fC0[fBC].f54 = 1;
    fC0[fBC].f44 = 0;
    fC0[fBC].f48 = 0;
    strcpy(fC0[fBC].name, buf2);
    fC0[fBC].f40 = ((G162Obj *)D_002EF7D0)->func_00162B20(buf2, 1);
    fC0[fBC].f50 = 0;
    fC0[fBC].f4C = 0;
    fC0[fBC].func_001C6870();
    fBC++;
    if (ini != 0) {
        ini->func_001691E0();
        func_001E891B(ini);
    }
}
