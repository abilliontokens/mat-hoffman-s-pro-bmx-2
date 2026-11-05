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

struct S_851C0_State { char pad0[4]; int f4; };
struct S_851C0_Values { char pad0[0x10]; float f10, f14; };
struct S_851C0_Item { S_851C0_Values *func_0018C070(); };
struct S_851C0_List { S_851C0_Item **func_0018C160(const char *); };
extern char D_00279630[], D_00278690[], D_0027958C[];
extern float D_00275AEC;
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

void C_00084FF0::func_00084FF0(void)
{
    char buf[15];
    char out[15];
    int rem;
    int i;
    char *p;
    char c;

    memset(buf, 0, 15);
    memset(out, 0, 15);
    if (f40 == 1) {
        func_001ADCC0(out, 15, D_0027956C, f38->fA40, f34->f1250 / 2);
    } else if (f40 == 2) {
        func_001ADCC0(out, 15, D_00279560, (double)D_002A8490->f240);
    } else if (f40 == 3) {
        func_001ADCC0(out, 15, D_00279550, D_002A8490->f27C);
    } else {
        func_001ADCC0(buf, 15, D_00277038, f38->fA40);
        i = 0;
        rem = strlen(buf) % 3;
        if ((int)strlen(buf) > 0) {
            p = out;
            do {
                c = buf[i];
                if (c == ' ') {
                    strcat(out, &buf[i]);
                    break;
                }
                if (i > rem - 1 && i && ((i - rem) == 0 || (i - rem) % 3 == 0)) {
                    *p++ = ',';
                }
                *p++ = c;
                i++;
            } while (i < (int)strlen(buf));
        }
    }
    f24->func_001D6600();
    f28->func_0005E840(out);
    f28->func_001D6600();
}

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
