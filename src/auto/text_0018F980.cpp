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
    void *func_0018E1D0(void);
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
struct C_1900E0_Ctx {
    void func_0018F4D0(unsigned int flags);
    void func_0018F390(char *name, unsigned int flags, void *p);
};
struct C_1900E0_Fn {
    char pad0[0x14];
    void (__cdecl *fn)(C_190200_Rec *rec, C_1900E0_Ctx *ctx);
    char pad18[0xc];
};
struct C_00190200 {
    char pad0[0x158];
    C_190200_Ent *named;
    char pad15c[8];
    C_190200_Tab *f164;
    char pad168[8];
    C_1900E0_Fn *f170;
    int func_0018E7D0(int kind, C_190200_Rec *buf, int *out);
    void func_001900E0(int a0, int a1, int a2, C_190200_Rec *rec, unsigned int flags, int a5, C_1900E0_Ctx *ctx);
    void func_00190200(int a0, int a1, int a2, C_190200_Src *src, C_190200_Rec *rec, unsigned int flags);
    void func_00190200(int a0, int a1, int a2, int a3, int a4, unsigned int a5);
};
#include <string.h>
#include "asm_helpers.h"
struct Node0018FF10 { char name[0x10c]; Node0018FF10 *next; };
struct Ent0018FF10 { char pad[0x48]; Node0018FF10 *volatile node; char pad2[0x60 - 0x4c]; };
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
    Node0018FF10 *volatile head;
    Node0018FF10 *volatile tail;
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
    volatile int f8;
    char padC[4];
    volatile int f10;
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
    volatile int f24;
    volatile char name[0x104];
    volatile int f12c;
    volatile int f130;
    volatile int f134;
    volatile int f138;
    volatile int f13c;
    volatile int f140;
    volatile int f144;
    volatile int f148;
    C_0018F980_Obj *f14c;
    char pad150[8];
    void *volatile f158;
    volatile int f15c;
    volatile int f160;
    void *volatile f164;
    volatile int f168;
    volatile int f16c;
    void *volatile f170;
    volatile int f174;
    volatile int f178;
    void *volatile f17c;
    volatile int f180;
    volatile int f184;
    void func_0018D5C0(char *name, int type, int max, int a, int b, int c, int d, int e);
    void func_0018D7B0(const char *name, int index, int b, int c, int d);
    void func_001D3F50();
    void func_0018F980(int a1, char *str);
};

void C_0018F980::func_0018F980(int a1, char *str)
{
    C_0018F980_Obj *p;
    const char *s1;
    const char *end;
    char c;
    int slen;
    int lim;
    int n;

    this->f24 = a1;
    end = str;
    s1 = end + 1;
    do {
        c = *end++;
    } while (c != 0);
    slen = end - s1;
    lim = 0x103;
    n = AsmMinI(lim, slen);
    func_001E8920((char *)this->name, str, n);
    this->name[n] = 0;
    this->f12c = 4;
    this->f130 = 4;
    this->f134 = 4;
    this->f140 = 4;
    this->f144 = 4;
    this->f148 = 4;
    this->f138 = 8;
    this->f13c = 1;
    this->f168 = 0;
    this->f16c = this->f168 + 10;
    this->f164 = func_001E8AA5(this->f16c * 0x38);
    this->f15c = 0;
    this->f160 = this->f15c + 0x32;
    this->f158 = func_001E8AA5(this->f160 * 0x60);
    this->f174 = 0;
    this->f178 = this->f174 + 10;
    this->f170 = func_001E8AA5(this->f178 * 0x24);
    this->f180 = 0;
    this->f184 = this->f180 + 10;
    this->f17c = func_001E8AA5(this->f184 * 8);
    p = (C_0018F980_Obj *)func_001E8A44(0x190);
    this->f14c = p ? p->Init() : 0;
    this->f14c->f8 = 1;
    this->f14c->f10 = 0;
    this->func_0018D5C0(D_0027D1D8, 0, 0, 0, 0, (int)func_00012140, (int)func_00192300, (int)func_00012140);
    this->func_0018D5C0(D_0027D21C, 1, 0, 4, 1, (int)func_00191610, (int)func_001916E0, (int)func_00191640);
    this->func_0018D5C0(D_0027D240, 2, 0, 4, 1, (int)func_001917E0, (int)D_00191890, (int)func_00191810);
    this->func_0018D5C0(D_0028A834, 3, 0, 4, 0x60, (int)D_00191950, (int)func_001919A0, (int)func_00191970);
    this->func_0018D5C0(D_0028A82C, 4, 0, 8, 1, (int)D_00191A40, (int)D_00191B10, (int)D_00191A70);
    this->func_0018D5C0(D_0028A824, 5, 0, 1, 0, (int)func_00191DA0, (int)D_00191E50, (int)func_00191DD0);
    this->func_0018D5C0(D_0027D1FC, 6, 0, 4, 0, (int)func_00191F20, (int)D_00191FD0, (int)func_00191F50);
    this->func_0018D5C0(D_0028A81C, 7, 0, 4, 0, (int)func_00191C20, (int)D_00191CD0, (int)func_00191C50);
    this->func_0018D5C0(D_0028A810, 8, 0, 4, 0x60, (int)func_00012140, (int)D_001920A0, (int)func_00012140);
    this->func_0018D5C0(D_0028AA6C, 9, 4, 0x10, 0, (int)D_001920E0, (int)func_00192300, (int)D_00192130);
    this->func_0018D7B0(D_0028AA6C, 0, (int)D_0027FC6C, 1, 0);
    this->func_0018D7B0(D_0028AA6C, 1, (int)D_0028AA68, 1, 4);
    this->func_0018D7B0(D_0028AA6C, 2, (int)D_0028AA64, 1, 8);
    this->func_0018D7B0(D_0028AA6C, 3, (int)D_002790E0, 1, 0xc);
    this->func_0018D5C0(D_0028AA58, 9, 0x10, 0x40, 0, (int)func_00192310, (int)func_00192300, (int)func_00012140);
    this->func_0018D7B0(D_0028AA58, 0, (int)D_0028AA54, 1, 0);
    this->func_0018D7B0(D_0028AA58, 1, (int)D_0028AA50, 1, 0x10);
    this->func_0018D7B0(D_0028AA58, 2, (int)D_0028AA4C, 1, 0x20);
    this->func_0018D7B0(D_0028AA58, 3, (int)D_0028AA48, 1, 0x30);
    this->func_0018D7B0(D_0028AA58, 4, (int)D_0028AA44, 1, 4);
    this->func_0018D7B0(D_0028AA58, 5, (int)D_0028AA40, 1, 0x14);
    this->func_0018D7B0(D_0028AA58, 6, (int)D_0028AA3C, 1, 0x24);
    this->func_0018D7B0(D_0028AA58, 7, (int)D_0028AA38, 1, 0x34);
    this->func_0018D7B0(D_0028AA58, 8, (int)D_0028AA34, 1, 8);
    this->func_0018D7B0(D_0028AA58, 9, (int)D_0028AA30, 1, 0x18);
    this->func_0018D7B0(D_0028AA58, 10, (int)D_0028AA2C, 1, 0x28);
    this->func_0018D7B0(D_0028AA58, 11, (int)D_0028AA28, 1, 0x38);
    this->func_0018D7B0(D_0028AA58, 12, (int)D_0028AA24, 1, 0xc);
    this->func_0018D7B0(D_0028AA58, 13, (int)D_0028AA20, 1, 0x1c);
    this->func_0018D7B0(D_0028AA58, 14, (int)D_0028AA1C, 1, 0x2c);
    this->func_0018D7B0(D_0028AA58, 15, (int)D_0028AA18, 1, 0x3c);
    this->func_001D3F50();
}

int C_0018FF10::func_0018FF10(char *src, char *volatile name, volatile int idx, int *volatile out)
{
    char *key = name;
    C_0018FF10 *volatile self = this;
    struct { volatile int a, b, r; } t;
    Node0018FF10 *n;
    int count;
    int found = 0;
    if (!key || strcmp(key, "") == 0) return 0;
    for (n = this->head; n; n = n->next) {
        if (!strcmp(key, n->name)) { found = 1; break; }
    }
    if (!found) {
        int id = D_002BEAAC->func_0013C9F0(key, D_00275FB4);
        if (id == -1) { *out = 0; return 0; }
        n = (Node0018FF10 *)func_001E8A44(0x110);
        if (self->func_0018EB70(id, src, n) != 1) {
            func_001E891B(n);
            *out = 0;
            return 0;
        }
        t.a = strlen(name);
        t.b = 0x103;
        {
            int vb = t.b;
            int va = t.a;
            t.r = vb > va ? va : vb;
        }
        count = t.r;
        func_001E8920(n, name, count);
        ((volatile char *)n->name)[count] = 0;
        self->ents[idx].node = n;
        C_0018FF10 *s = self;
        Node0018FF10 *tl = s->tail;
        if (!tl) { s->head = n; self->tail = n; *out = 1; return 1; }
        tl->next = n;
        self->tail = n;
        *out = 1;
        return 1;
    } else {
        this->ents[idx].node = n;
        *out = 0;
        return 1;
    }
}

void C_00190200::func_001900E0(int a0, int a1, int a2, C_190200_Rec *rec, unsigned int flags, int a5, C_1900E0_Ctx *ctx)
{
 int tbl; int idx;
 if(rec->name[0]=='$') {
  if(func_0018E7D0(0,rec,&idx)==1) tbl=named[idx].f0;
  else { ctx->func_0018F4D0(flags); return; }
 } else { tbl=a0; idx=a2; }
 C_1900E0_Ctx *c = ctx;
 register int original=flags;
 switch(original&255) {
 case 2: {
 flags=rec->f40;
 unsigned int offset=(unsigned int)rec->f40 >> 16;
 C_190200_Elem *base=named[idx].f54;
 offset &= 255;
 char *ptr=(char *)(base+(flags&255))->func_0018E1D0()+(unsigned char)offset;
 c->func_0018F390((char *)D_00275630,original&0xffff00,ptr); break;
 }
 case 1: {
 register flags=rec->f40;
 C_190200_Cell *cells=f164[named[idx].f44].f2c;
 char *ptr=cells[flags&255].f4+((flags>>16)&255)+tbl;
 c->func_0018F390((char *)D_00275630,original&0xffff00,ptr); break;
 }
 case 0: f170[a5].fn(rec,c); break;
 }
}

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
