/* 36 functions from 0x001E9250 to 0x001EA23F, found by Ghidra. */
#include "common.h"
#include <string.h>

int __fastcall func_001E9250(int param_1, int param_2) {
    return param_2 - 1;
}

char *func_001E9260(char *str, int ch) {
    unsigned int rep;
    unsigned int word;
    unsigned int xword;
    unsigned int test;
    unsigned int sum;
    char *p = str;
    rep = (unsigned char)ch;
    rep |= rep << 8;
    while (((unsigned int)p & 3) != 0) {
        if (*(unsigned char *)p == (unsigned char)rep) {
            return p;
        }
        if (*(unsigned char *)p == 0) {
            return 0;
        }
        p++;
    }
    rep |= rep << 16;
    for (;;) {
        word = *(unsigned int *)p;
        xword = word ^ rep;
        sum = word + 0x7efefeff;
        test = (xword + 0x7efefeff) ^ ~xword;
        p += 4;
        if ((test & 0x81010100) == 0) {
            unsigned int ztest = sum ^ ~word;
            if ((ztest & 0x81010100) == 0) {
                continue;
            }
            if ((ztest & 0x1010100) != 0) {
                return 0;
            }
            if ((sum & 0x80000000) == 0) {
                return 0;
            }
            continue;
        }
        word = *(unsigned int *)(p - 4);
        if ((unsigned char)word == (unsigned char)rep) {
            return p - 4;
        }
        if ((unsigned char)word == 0) {
            return 0;
        }
        if ((unsigned char)(word >> 8) == (unsigned char)rep) {
            return p - 3;
        }
        if ((unsigned char)(word >> 8) == 0) {
            return 0;
        }
        if ((unsigned char)(word >> 16) == (unsigned char)rep) {
            return p - 2;
        }
        if ((unsigned char)(word >> 16) == 0) {
            return 0;
        }
        if ((unsigned char)(word >> 24) == (unsigned char)rep) {
            return p - 1;
        }
        if ((unsigned char)(word >> 24) == 0) {
            return 0;
        }
    }
}

double func_001E931E(char *str, char **endptr) {
    extern int D_002AEA38;
    extern unsigned short *D_002AEA30;
    extern double D_002AEC38;
    int func_001EC5F1(int, int);
    void *func_001ED0FC(void *, char *, int, int, int);
    int *func_001ED075(void);
    struct Res {
        int flags;
        int off;
        char pad8[8];
        double val;
        char pad18[8];
    };
    char *p = str;
    char *s;
    struct Res res;
    double v;
    for (;;) {
        unsigned int t;
        if (D_002AEA38 > 1) {
            t = func_001EC5F1(*(unsigned char *)p, 8);
        } else {
            t = D_002AEA30[*(unsigned char *)p] & 8;
        }
        if (t == 0) {
            break;
        }
        p++;
    }
    s = p;
    while (*s != 0) {
        s++;
    }
    void *r = func_001ED0FC(&res, p, (int)(s - p), 0, 0);
    if (endptr != 0) {
        *endptr = p + *(int *)((char *)r + 4);
    }
    unsigned int flags = *(unsigned int *)r;
    if ((flags & 0x240) != 0) {
        v = 0.0;
        if (endptr != 0) {
            *endptr = str;
        }
        return v;
    }
    if ((flags & 0x81) == 0) {
        if ((flags & 0x100) == 0) {
            return *(double *)((char *)r + 0x10);
        }
        v = 0.0;
    } else {
        v = D_002AEC38;
        if (*p == '-') {
            v = -v;
        }
    }
    int *err = func_001ED075();
    *err = 0x22;
    return v;
}

#pragma optimize("s", on)
void func_001E9576(int a0, int a1, int a2) {
    int func_001E93CD(int, int, int, int);
    func_001E93CD(a0, a1, a2, 0);
}
#pragma optimize("s", on)
void func_001E958D(int a0, int a1, int a2) {
    int func_001E93CD(int, int, int, int);
    func_001E93CD(a0, a1, a2, 1);
}
#pragma optimize("s", on)
#pragma optimize("y", off)
char *func_001E95A4(char *string, const char *control) {
    int func_001EB7E9(void);
    unsigned char *str;
    const unsigned char *ctrl = (const unsigned char *)control;
    unsigned char map[32];
    int count;
    char *ptd = (char *)func_001EB7E9();
    for (count = 0; count < 32; count++)
        map[count] = 0;
    do {
        map[*ctrl >> 3] |= (1 << (*ctrl & 7));
    } while (*ctrl++);
    if (string)
        str = (unsigned char *)string;
    else
        str = *(unsigned char **)(ptd + 0x18);
    while ((map[*str >> 3] & (1 << (*str & 7))) && *str)
        str++;
    string = (char *)str;
    for (; *str; str++) {
        if (map[*str >> 3] & (1 << (*str & 7))) {
            *str++ = '\0';
            break;
        }
    }
    *(unsigned char **)(ptd + 0x18) = str;
    if (string == (char *)str)
        return 0;
    else
        return string;
}

#pragma optimize("y", off)
double func_001E9649(char *str) {
    extern int D_002AEA38;
    extern unsigned short *D_002AEA30;
    int func_001EC5F1(int, int);
    void *func_001ED0FC(void *, char *, int, int, int);
    struct Res {
        char pad0[0x10];
        double val;
    };
    char *p = str;
    char *s;
    char c;
    char *q;
    struct Res res;
    void *r;

    for (;;) {
        unsigned int t;
        if (D_002AEA38 > 1) {
            t = func_001EC5F1(*(unsigned char *)p, 8);
        } else {
            t = D_002AEA30[*(unsigned char *)p] & 8;
        }
        if (t == 0) {
            break;
        }
        p++;
    }
    s = p;
    q = s + 1;
    do {
        c = *s;
        s++;
    } while (c != 0);
    r = func_001ED0FC(&res, p, (int)(s - q), 0, 0);
    return *(double *)((char *)r + 0x10);
}
int func_001E96A5(int a0, int a1, int a2) {
    int func_001ED2E9(void);
    int *func_001ED075(void);
    void func_001EB15B(int);
    int func_001ED181(int, int, int, int);
    int h;
    int result;

    h = func_001ED2E9();
    if (h == 0) {
        *func_001ED075() = 0x18;
        return 0;
    }
    __try {
        result = func_001ED181(a0, a1, a2, h);
    } __finally {
        func_001EB15B(h);
    }
    return result;
}

#pragma optimize("y", on)
void func_001E9701(int a0, int a1) {
    int func_001E96A5(int, int, int);
    func_001E96A5(a0, a1, 0x40);
}

#pragma optimize("t", off)
int func_001E98A9(int param_1, int param_2, int param_3, int param_4) {
    int func_001EB109(int);
    int func_001EB15B(int);
    int func_001E97B1(int, int, int, int);
    int result;
    func_001EB109(param_4);
    __try {
        result = func_001E97B1(param_1, param_2, param_3, param_4);
    } __finally {
        func_001EB15B(param_4);
    }
    return result;
}

int func_001E9A0C(int param_1, int param_2, int param_3, int param_4) {
    int func_001EB109(int);
    int func_001EB15B(int);
    int func_001E98F5(int, int, int, int);
    int result;
    func_001EB109(param_4);
    __try {
        result = func_001E98F5(param_1, param_2, param_3, param_4);
    } __finally {
        func_001EB15B(param_4);
    }
    return result;
}

#pragma optimize("", on)
void func_001E9F40(void) {
    int func_001EB302(...);
    func_001EB302(1);
}

void func_001E9F99(void) {
    int func_001E9E74(...);
    func_001E9E74(1);
}

