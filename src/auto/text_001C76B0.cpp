/* 1 function from 0x001C76B0 to 0x001C7EB0, found by Ghidra. */
#include "common.h"
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
struct MObj { IniObj *func_00168280(); void func_00164440(int a, int b); };
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
