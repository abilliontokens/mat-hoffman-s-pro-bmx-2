/* 4 functions from 0x0018F980 to 0x001904E0, found by Ghidra. */
#include "common.h"
struct S { char pad[0x158]; char *p158; };
int __stdcall func_0018E7D0(int, char *, int *);
void __stdcall func_0018F4D0(int);

extern char D_0000FF00;

struct C_190200_Rec {
    char name[0x40];
    int f40;
};
struct C_190200_Src {
    char pad0[0x1c];
    int f1c;
    void *func_0018E1D0(void);
};
struct C_190200_Sub {
    void *func_00191400(void);
};
struct C_190200_Dst {
    void func_000264C0(void *src);
};
struct C_190200_Elem {
    char pad0[0x18];
    unsigned int f18;
    int f1c;
    char pad20[0x130];
    C_190200_Sub f150;
    char pad151[0x6f];
    void func_0018F390(char *n, unsigned int a, void **p);
};
struct C_190200_Ent {
    int f0;
    char pad4[0x40];
    int f44;
    char pad48[0xc];
    C_190200_Elem *f54;
    char pad58[8];
};
struct C_190200_Cell {
    int f0;
    char *f4;
    unsigned int f8;
    int fc;
};
struct C_190200_Tab {
    char pad0[0x2c];
    C_190200_Cell *f2c;
    char pad30[8];
};
static __forceinline void Store_00190200(char *dst, int hi, unsigned int flags, void *val)
{
    switch (hi) {
    case 1:
    case 3:
    case 6:
    case 8:
        *(int *)dst = *(int *)val;
        break;
    case 2:
    case 7:
        *(int *)dst = *(int *)val;
        break;
    case 4:
        *(int *)dst = *(int *)val;
        ((int *)dst)[1] = ((int *)val)[1];
        break;
    case 5:
        *dst = *(char *)val;
        break;
    case 9:
        switch ((flags >> 16) & 0xff) {
        case 0:
            ((int *)dst)[0] = ((int *)val)[0];
            ((int *)dst)[1] = ((int *)val)[1];
            ((int *)dst)[2] = ((int *)val)[2];
            ((int *)dst)[3] = ((int *)val)[3];
            break;
        case 1:
            ((C_190200_Dst *)dst)->func_000264C0(val);
            break;
        }
        break;
    }
}
struct C_00190200 {
    char pad0[0x158];
    C_190200_Ent *named;
    char pad15c[8];
    C_190200_Tab *f164;
    int func_0018E7D0(int kind, C_190200_Rec *buf, int *out);
    void func_00190200(int a0, int a1, int a2, C_190200_Src *src, C_190200_Rec *rec, unsigned int flags);
    void func_00190200(int a0, int a1, int a2, int a3, int a4, unsigned int a5);
};
#include <string.h>
struct Node0018FF10 { char name[0x10c]; Node0018FF10 *next; };
struct Ent0018FF10 { char pad[0x48]; Node0018FF10 *node; char pad2[0x60 - 0x4c]; };
struct C_0013C9F0 { int func_0013C9F0(char *, char *); };
extern C_0013C9F0 *D_002BEAAC;
extern const char D_00275630[1];
extern char D_00275FB4[];
void *func_001E8A44(int size);
void func_001E891B(void *p);
void *func_001E8920(void *, const void *, int);
template <class T> inline const T &min0018FF10(const T &a, const T &b) { return b < a ? b : a; }
struct C_0018FF10 {
    char pad[0x150];
    Node0018FF10 *head;
    Node0018FF10 *tail;
    Ent0018FF10 *ents;
    int func_0018EB70(int, char *, Node0018FF10 *);
    int func_0018FF10(char *src, char *name, int idx, int *out);
};

extern char D_0027D1D8[], D_0027D21C[], D_0027D240[], D_0028A834[], D_0028A82C[];
extern char D_0028A824[], D_0027D1FC[], D_0028A81C[], D_0028A810[];
extern char D_0028AA6C[], D_0027FC6C[], D_0028AA68[], D_0028AA64[], D_002790E0[];
extern char D_0028AA58[], D_0028AA54[], D_0028AA50[], D_0028AA4C[], D_0028AA48[];
extern char D_0028AA44[], D_0028AA40[], D_0028AA3C[], D_0028AA38[], D_0028AA34[];
extern char D_0028AA30[], D_0028AA2C[], D_0028AA28[], D_0028AA24[], D_0028AA20[];
extern char D_0028AA1C[], D_0028AA18[];
extern char D_00191890[], D_00191950[], D_00191A40[], D_00191A70[], D_00191B10[];
extern char D_00191E50[], D_00191FD0[], D_00191CD0[], D_001920A0[], D_001920E0[];
extern char D_00192130[];
void func_00012140();
void func_00192300();
void func_00192310();
void func_00191610();
void func_001916E0();
void func_00191640();
void func_001917E0();
void func_00191810();
void func_001919A0();
void func_00191970();
void func_00191DA0();
void func_00191DD0();
void func_00191F20();
void func_00191F50();
void func_00191C20();
void func_00191C50();
void *func_001E8AA5(unsigned int size);
template <class T> inline T min0018F980(const T &a, const T &b) { return a < b ? a : b; }
struct C_0018F980_Obj {
    char pad0[8];
    int f8;
    char padC[4];
    int f10;
    char pad14[0x12c];
    int f140;
    int f144;
    int f148;
    float f14c;
    char pad150[0x40];
    __forceinline C_0018F980_Obj *Init()
    {
        f148 = 0;
        f144 = 0;
        f140 = 0;
        f14c = 1.0f;
        return this;
    }
};
struct C_0018F980 {
    char pad0[0x24];
    int f24;
    char name[0x104];
    int f12c;
    int f130;
    int f134;
    int f138;
    int f13c;
    int f140;
    int f144;
    int f148;
    C_0018F980_Obj *f14c;
    char pad150[8];
    void *f158;
    int f15c;
    int f160;
    void *f164;
    int f168;
    int f16c;
    void *f170;
    int f174;
    int f178;
    void *f17c;
    int f180;
    int f184;
    void func_0018D5C0(char *name, int type, int max, int a, int b, int c, int d, int e);
    void func_0018D7B0(const char *name, int index, int b, int c, int d);
    void func_001D3F50();
    void func_0018F980(int a1, char *str);
};

void C_00190200::func_00190200(int a0, int a1, int a2, C_190200_Src *src, C_190200_Rec *rec, unsigned int flags)
{
    int tbl;
    int idx;
    int hi;
    int srcType;
    int loc;
    void *val;

    if (rec->name[0] == '$') {
        if (func_0018E7D0(0, rec, &idx) != 1) {
            return;
        }
        tbl = named[idx].f0;
    } else {
        tbl = a0;
        idx = a1;
    }
    hi = (flags >> 8) & 0xff;
    val = src->func_0018E1D0();
    srcType = src->f1c;
    loc = rec->f40;
    switch (flags & 0xff) {
    case 2: {
        C_190200_Elem *arr = named[idx].f54;
        C_190200_Elem *e = arr + (loc & 0xff);
        if ((e->f18 & (unsigned int)&D_0000FF00) == 0x900 && srcType != e->f1c) {
            Store_00190200((char *)e->f150.func_00191400() + ((loc >> 16) & 0xff), hi, flags, val);
        } else {
            e->func_0018F390((char *)rec, flags, (void **)val);
        }
        break;
    }
    case 1: {
        C_190200_Cell *cells = f164[named[idx].f44].f2c;
        C_190200_Cell *cell = &cells[loc & 0xff];
        char *base = cell->f4;
        if ((cell->f8 & (unsigned int)&D_0000FF00) == 0x900 && srcType != cell->fc) {
            Store_00190200(base + ((loc >> 16) & 0xff) + tbl, hi, flags, val);
        } else {
            Store_00190200(base + tbl, hi, flags, val);
        }
        break;
    }
    }
}
