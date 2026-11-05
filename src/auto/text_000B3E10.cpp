/* 3 functions from 0x000B3E10 to 0x000B4850, found by Ghidra. */
#include "common.h"
#include <string.h>
extern char D_0027D144[];
extern char D_0027D138[];
extern char D_002764F0[];
extern char D_0027D250[];
extern char D_002A5FA8[];
extern char D_002A5348[];
extern char D_0027D158[];
extern char D_002A5870[];
extern char D_0027D244[];
extern char D_0027D240[];
extern char D_0027D1A4[];
extern char D_0027D230[];
extern char D_0027D1D8[];
extern char D_0027D224[];
extern char D_0027D21C[];
extern char D_0027D210[];
extern char D_0027D204[];
extern char D_0027D1FC[];
extern char D_0027D1EC[];

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" int func_001EA426(const char *a, const char *b);

struct S_B4300_Stream {
    void func_00168BE0(const char *key, const char *def, char *dst, int n);
};

struct S_B4300_Cfg {
    char pad0[0x108];
    int f108;
    char pad10c[0x118 - 0x10c];
    int f118;
    char pad11c[0x144 - 0x11c];
    char f144;
    char pad145[0x14c - 0x145];
    char f14c[1];
};

struct C_000B4300;
typedef void (C_000B4300::*B4300_Cb)(void);

struct S_B4300_Mgr {
    int func_0018E740(void *obj, const char *name);
    void func_0018CF40(int id, B4300_Cb cb, const char *a, const char *b, const char *c, int d);
    void func_0018D330(int id, int k, const char *a, const char *b);
    void func_00191270(void *obj, const char *name, S_B4300_Stream *s, char *buf);
};

extern S_B4300_Mgr *D_002EFE08;

struct C_000B4300 {
    char pad0[0x38];
    int f38;
    char pad3c[0x40 - 0x3c];
    S_B4300_Cfg *f40;
    char pad44[0x6c - 0x44];
    int f6c;
    char pad70[0x9c - 0x70];
    char f9c[0x104];
    char f1a0;
    char pad1a1;
    char f1a2;
    char f1a3[1];
    void func_00167750(void);
    void func_000B3390(S_B4300_Stream *s);
    void func_000B2530(void);
    void func_000B25D0(void);
    C_000B4300 *func_000B4300(S_B4300_Stream *a, S_B4300_Stream *b);
};
