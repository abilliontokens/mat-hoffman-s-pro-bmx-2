/* 5 functions from 0x000849F0 to 0x00085630, found by Ghidra. */
#include "common.h"
#include <string.h>

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_0027956C[];
extern char D_00279560[];
extern char D_00279550[];
extern char D_00277038[];

struct S_84FF0_Text {
    void func_001D6600(void);
    void func_0005E840(const char *s);
};

struct S_84FF0_F34 {
    char pad0[0x1250];
    int f1250;
};

struct S_84FF0_F38 {
    char pad0[0xA40];
    int fA40;
};

struct S_84FF0_Global {
    char pad0[0x240];
    float f240;
    char pad244[0x38];
    int f27C;
};

extern S_84FF0_Global *D_002A8490;

struct C_00084FF0 {
    char pad0[0x24];
    S_84FF0_Text *f24;
    S_84FF0_Text *f28;
    char pad2C[8];
    S_84FF0_F34 *f34;
    S_84FF0_F38 *f38;
    char pad3C[4];
    int f40;
    void func_00084FF0(void);
};

struct C_001D6410 { void func_001D6410(); };
void func_001E891B(void *);
extern int D_00279644;

struct C_00085520 {
    int vtbl;
    char pad4[0x20];
    C_001D6410 *a24[8];
    C_001D6410 *a44[8];
    C_001D6410 *a64[8];
    C_001D6410 *a84[4];
    C_001D6410 *f94;
    C_001D6410 *f98;
    C_001D6410 *f9C;
    void func_00157660();
    void func_00085520();
};

void C_00085520::func_00085520()
{
    int i;
    C_001D6410 *p;
    vtbl = (int)&D_00279644;
    for (i = 0; i < 8; i++) {
        p = a24[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
        p = a44[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
        p = a64[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
    }
    for (i = 0; i < 4; i++) {
        p = a84[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
    }
    p = f94;
    if (p) { p->func_001D6410(); func_001E891B(p); f94 = 0; }
    p = f9C;
    if (p) { p->func_001D6410(); func_001E891B(p); f9C = 0; }
    p = f98;
    if (p) { p->func_001D6410(); func_001E891B(p); f98 = 0; }
    func_00157660();
}
