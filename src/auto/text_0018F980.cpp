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

void C_00190200::func_00190200(int a0, int a1, int a2, int a3, int a4, unsigned int a5)
{
    int tbl;
    void *val;
    char *dst;

    if (((C_190200_Rec *)a4)->name[0] == '$') {
        if (func_0018E7D0(0, (C_190200_Rec *)a4, &a0) != 1) {
            return;
        }
        tbl = named[a0].f0;
    } else {
        tbl = a0;
        a0 = a1;
    }
    a1 = (a5 >> 8) & 0xff;
    val = ((C_190200_Src *)a3)->func_0018E1D0();
    a3 = ((C_190200_Src *)a3)->f1c;
    a4 = ((C_190200_Rec *)a4)->f40;
    switch (a5 & 0xff) {
    case 2: {
        C_190200_Elem *arr = named[a0].f54;
        C_190200_Elem *e = arr + (a4 & 0xff);
        if ((e->f18 & (unsigned int)&D_0000FF00) == 0x900 && a3 != e->f1c) {
            dst = (char *)e->f150.func_00191400() + ((a4 >> 16) & 0xff);
            switch (a1) {
            case 1:
            case 3:
            case 6:
            case 8:
                *(int *)dst = *(int *)val;
                return;
            case 2:
            case 7:
                *(int *)dst = *(int *)val;
                return;
            case 4:
                *(int *)dst = *(int *)val;
                ((int *)dst)[1] = ((int *)val)[1];
                return;
            case 5:
                *dst = *(char *)val;
                return;
            case 9:
                switch ((a5 >> 16) & 0xff) {
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
                return;
            }
        } else {
            e->func_0018F390((char *)a4, a5, (void **)val);
        }
        break;
    }
    case 1: {
        C_190200_Cell *cells = f164[named[a0].f44].f2c;
        C_190200_Cell *cell = &cells[a4 & 0xff];
        char *base = cell->f4;
        if ((cell->f8 & (unsigned int)&D_0000FF00) == 0x900 && a3 != cell->fc) {
            dst = base + ((a4 >> 16) & 0xff) + tbl;
        } else {
            dst = base + tbl;
        }
        switch (a1) {
        case 1:
        case 3:
        case 6:
        case 8:
            *(int *)dst = *(int *)val;
            return;
        case 2:
        case 7:
            *(int *)dst = *(int *)val;
            return;
        case 4:
            *(int *)dst = *(int *)val;
            ((int *)dst)[1] = ((int *)val)[1];
            return;
        case 5:
            *dst = *(char *)val;
            return;
        case 9:
            switch ((a5 >> 16) & 0xff) {
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
            return;
        }
        break;
    }
    }
}
