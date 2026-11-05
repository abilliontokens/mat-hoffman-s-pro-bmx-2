/* 13 functions from 0x001EAE48 to 0x001EB1AD, found by Ghidra. */
#include "common.h"

extern char D_002AE670[];
extern char D_002AE8D0[];
extern char D_002AE680[];
extern char D_002AE6E0[];
extern char D_002AE8F0[];
struct LockEntry {
    int f0;
    char pad4[0x24];
};
extern LockEntry *D_002FB260[];
extern int D_002FB36C;
extern int *D_002FB368;
extern double D_002766A8;
extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *cs);

void func_001EAEC3(void) {
    int func_001EB390(...);
    func_001EB390(8);
}

void func_001EAECC(void) {
    int func_001EB302(...);
    func_001EB302(8);
}

extern "C" __declspec(dllimport) void __stdcall KeBugCheck(int code);
extern int D_002F6850;
extern char D_002F684C;
extern void (**D_002FB374)(void);
extern void (**D_002FB370)(void);
extern void (*D_002A0428[])(void);
extern void (*D_002A0430[])(void);
extern void (*D_002A0434[])(void);
extern void (*D_002A043C[])(void);
void func_001EAED5(int code, int quick, int retcaller) {
    int func_001EB390(...);
    int func_001EB302(...);
    void (**p)(void);
    func_001EB390(8);
    D_002F6850 = 1;
    D_002F684C = (char)retcaller;
    if (!quick) {
        if (D_002FB374) {
            while (--D_002FB370 >= D_002FB374) {
                if (*D_002FB370) (**D_002FB370)();
            }
        }
        for (p = D_002A0428; p < D_002A0430; p++) {
            if (*p) (**p)();
        }
    }
    for (p = D_002A0434; p < D_002A043C; p++) {
        if (*p) (**p)();
    }
    if (retcaller) {
        func_001EB302(8);
        return;
    }
    KeBugCheck(0);
}

void func_001EAF7F(int code) {
    int func_001EAED5(...);
    func_001EAED5(code, 1);
}

double func_001EAF91(double x, double y) {
    double r = x;
    ((unsigned int *)&r)[1] = (((unsigned int *)&r)[1] ^ ((unsigned int *)&y)[1]) & 0x7fffffff ^ ((unsigned int *)&y)[1];
    return r;
}

int func_001EAFB2(double x) {
    int func_001F39D3(...);
    unsigned short e = ((unsigned short *)&x)[3];
    unsigned int sign = e & 0x8000;
    if ((e & 0x7ff0) == 0x7ff0) {
        int t = func_001F39D3(x);
        if (t == 1) return 0x200;
        if (t == 2) return 4;
        if (t == 3) return 2;
        return 1;
    }
    if ((e & 0x7ff0) == 0
        && ((((unsigned int *)&x)[1] & 0xfffff) != 0 || ((unsigned int *)&x)[0] != 0)) {
        return sign ? 0x10 : 0x80;
    }
    if (x == D_002766A8) {
        return sign ? 0x20 : 0x40;
    }
    return sign ? 0x8 : 0x100;
}

int func_001EB04C(void) {
    int *func_001EA1A1(...);
    int n, i, p;
    n = D_002FB36C;
    if (n == 0) {
        n = 0x200;
    } else if (n < 20) {
        n = 20;
    }
    D_002FB36C = n;
    D_002FB368 = func_001EA1A1(n, 4);
    if (D_002FB368 == 0) {
        D_002FB36C = 20;
        D_002FB368 = func_001EA1A1(20, 4);
        if (D_002FB368 == 0) {
            return 0x1a;
        }
    }
    for (i = 0, p = (int)&D_002AE670; p < (int)&D_002AE8F0; p += 0x20, i++) {
        ((int *)D_002FB368)[i] = p;
    }
    for (i = 0, p = (int)&D_002AE680; p < (int)&D_002AE6E0; p += 0x20, i++) {
        int *q = (int *)((char *)D_002FB260[i >> 5] + (i & 0x1f) * 0x28);
        if (*q == -1 || *q == 0) {
            *(int *)p = -1;
        }
    }
    return 0;
}

void func_001EB109(char *p) {
}

extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *cs);

void func_001EB138(int i, char *s) {
    int func_001EB390(...);
    if (i < 20) {
        func_001EB390(i + 16);
    } else {
        RtlEnterCriticalSection(s + 0x20);
    }
}

