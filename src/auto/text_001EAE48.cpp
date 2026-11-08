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
extern void (__stdcall *__imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *__imp__RtlLeaveCriticalSection)(void *cs);

int _func_001EAE48(int *buf, int n, int a, int b)
{
    int i;
    buf[8] = 0x56433230;
    buf[9] = 0;
    buf[6] = *(int *)0;
    if (buf[6] == -1) {
        buf[7] = -1;
    } else if (n == 0) {
        buf[7] = *(int *)(buf[9] + 0xc);
    } else {
        buf[9] = a;
        if (n == 1) {
            buf[7] = *(int *)(a + 0xc);
        } else {
            buf[7] = b;
            for (i = 0; i < n - 2 && i < 6; i++)
                buf[10 + i] = (&b)[1 + i];
        }
    }
    return 0;
}

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
    func_001EAED5(code, 1, 0);
}

double func_001EAF91(unsigned int xlo, unsigned int xhi, unsigned int ylo, unsigned int yhi) {
    union {
        double d;
        unsigned int i[2];
    } u;

    u.i[0] = xlo;
    u.i[1] = (*(volatile unsigned int *)&yhi ^ xhi) & 0x7fffffff ^ yhi;
    return u.d;
}

extern char D_000FFFFF;
int func_001EAFB2(double x) {
    int func_001F39D3(...);
    unsigned short e = ((unsigned short *)&x)[3];
    unsigned int sign;
    if ((e & 0x7ff0) == 0x7ff0) {
        switch (func_001F39D3(x)) {
        case 1: return 0x200;
        case 2: return 4;
        case 3: return 2;
        default: return 1;
        }
    }
    sign = e & 0x8000;
    if ((e & 0x7ff0) == 0
        && ((((unsigned int *)&x)[1] & (unsigned int)&D_000FFFFF) != 0 || ((unsigned int *)&x)[0] != 0)) {
        return sign ? 0x10 : 0x80;
    }
    if (x == D_002766A8) {
        return sign ? 0x20 : 0x40;
    }
    return sign ? 0x8 : 0x100;
}

int func_001EB04C(void) {
    int *func_001EA1A1(...);
    int i, p;
    if (D_002FB36C == 0) {
        D_002FB36C = 0x200;
    } else if (D_002FB36C < 20) {
        D_002FB36C = 20;
    }
    D_002FB368 = func_001EA1A1(D_002FB36C, 4);
    if (D_002FB368 == 0) {
        D_002FB36C = 20;
        D_002FB368 = func_001EA1A1(20, 4);
        if (D_002FB368 == 0) {
            return 0x1a;
        }
    }
    for (i = 0; i < 20; i++) {
        ((int *)D_002FB368)[i] = (int)D_002AE670 + i * 0x20;
    }
    i = 0;
    p = (int)D_002AE680;
    do {
        if (D_002FB260[i >> 5][i & 0x1f].f0 == -1 || D_002FB260[i >> 5][i & 0x1f].f0 == 0) {
            *(int *)p = -1;
        }
        p += 0x20;
        i++;
    } while (p < (int)D_002AE6E0);
    return 0;
}

void func_001EB0F5(void) {
    int func_001E9F99(...);
    int func_001F445B(...);
    func_001E9F99();
    if (D_002F684C != 0) {
        func_001F445B();
    }
}

void func_001EB109(char *p) {
    int func_001EB390(...);
    if (p >= D_002AE670 && p <= D_002AE8D0) {
        func_001EB390(((int)(p - D_002AE670) >> 5) + 16);
    } else {
        __imp__RtlEnterCriticalSection(p + 0x20);
    }
}

void func_001EB138(int i, char *s) {
    int func_001EB390(...);
    if (i < 20) {
        func_001EB390(i + 16);
    } else {
        __imp__RtlEnterCriticalSection(s + 0x20);
    }
}

void _func_001EB15B(char *p) {
    int func_001EB302(...);
    if (p >= D_002AE670 && p <= D_002AE8D0) {
        func_001EB302(((int)(p - D_002AE670) >> 5) + 16);
    } else {
        __imp__RtlLeaveCriticalSection(p + 0x20);
    }
}

void _func_001EB18A(int i, char *s) {
    int func_001EB302(...);
    if (i < 20) {
        func_001EB302(i + 16);
    } else {
        __imp__RtlLeaveCriticalSection(s + 0x20);
    }
}

