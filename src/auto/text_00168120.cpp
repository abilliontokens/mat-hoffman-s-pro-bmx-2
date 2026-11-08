/* 17 functions from 0x00167FE0 to 0x00168F40, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
#include "asm_helpers.h"
extern "C" unsigned int strlen(const char *s);
extern "C" char *strcpy(char *dst, const char *src);
extern "C" void *memset(void *dst, int c, unsigned int n);
#pragma intrinsic(memset)
#pragma intrinsic(strlen)
#pragma intrinsic(strcpy)
extern "C" int strcmp(const char *s1, const char *s2);
#pragma intrinsic(strcmp)

void func_000347F0(char *s);
int func_001EA426(const char *a, const char *b);
int func_001EA211(int c);
int func_001E91F4(const char *s);
double func_001E9649(const char *s);
void *func_001E8AA5(unsigned int size);
int func_001ADCC0(char *dst, int n, const char *fmt, ...);
int func_00168120(const char *s);
int __stdcall func_00168A10(int a, int *out);
int __stdcall func_00168550(int a, char *dst, int d);
int __stdcall func_00168550(void *a, char *dst, int d);
int __stdcall func_00168550(float a, char *dst, int d);
int __stdcall func_00168550(const char *a, char *dst, int d);
extern char D_00288004[];
extern char D_00288008[];
int func_001F6570(const char *a, const char *b, int n);
int func_001E9576(const char *s, char **end, int base);
extern char D_00288024[];
extern char D_00288020[];
extern char D_0028801C[];
extern char D_00288018[];
extern char D_00288014[];
extern char D_00288010[];
struct S_00168CB0_V3 { float x, y, z; };
static __forceinline float tokf_00168CB0(char *s, const char *delim);
extern char D_00275630[];
extern char D_002869B4[];
extern char D_002869B8[];
char *func_001E95A4(char *s, const char *delim);
static __forceinline float tokf_00168CB0(char *s, const char *delim)
{
    return (float)func_001E9649(func_001E95A4(s, delim));
}

extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
#pragma intrinsic(memcpy)
char *func_001E8920(char *dst, const char *src, int n);
extern char D_0028800C[];

/* 8-byte string tokenizer state (strtok-like) */
struct S_00168550_Tokenizer {
    double align;
    void Tokenizer_SetString(const char *str);
    char *func_001B4A70(const char *delims);
};

static __inline int Min_00168550(int a, int b) { return a > b ? b : a; }
static __forceinline int min_168550(const int &a, const int &b) { return AsmMinI(a, b); }
static __forceinline int clamp_168550(const char *s, int size)
{
    int n = strlen(s);

    if (size != -1) {
        n = AsmMinI(n, size - 1);
    }
    return n;
}
static __forceinline void makeKey_168550(char *key, const char *name)
{
    char *p = (char *)name;
    int delta = key - p;
    char c;

    do {
        c = *p;
        p[delta] = c;
        p++;
    } while (c);
    func_000347F0(key);
}
static __forceinline int store_168550(char *dst, char *s, int size)
{
    int n;

    if (*s == '"') {
        s++;
    }
    n = strlen(s) - 1;
    if (n >= 0 && s[n] == '"') {
        s[n] = 0;
    }
    if (size != -1) {
        func_001E8920(dst, s, size);
        n = min_168550(size - 1, strlen(s));
        dst[n] = 0;
    } else {
        strcpy(dst, s);
    }
    return 1;
}

struct C_001684B0 {
    char pad0[0x1c];
    int f1c;
    char **f20;
    void func_001684B0(void);
    void func_001684F0(int count);
};

struct C_00168B90 {
    int func_00168B90(void *a, float *out);
    int func_00168BE0(int a, const char *src, char *dst, int d);
};

struct C_00168280 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    char *f18;
    int f1c;
    char **f20;
    char f24;
    char pad25[0x3ff];
    int f424;
    int f428;
    int f42c;
    int f430;
    int f434;
    int f438[32];
    int f4b8;
    int f4bc;
    char *f4c0;
    int f4c4;
    char *f4c8;
    C_00168280 *func_00168280(void);
    int func_00168300(const char *name);
    int func_00168550(const char *name, char *dst, int size);
    int func_00168A10(const char *name, int *out);
    int func_00168B90(const char *name, float *out);
    int func_00168BE0(const char *name, const char *src, char *dst, int d);
    int func_00168C50(const char *name, float def, float *out);
    int func_00168CB0(const char *name, const float *def, float *out);
    int func_00168D70(const char *name, float *out, int count);
    int func_00168E70(const char *name, const int *def, int *out);
};


void func_00161910(float a, float *s, float *c);
void func_00161910(float a, float *c, float *s);

int __stdcall func_00168550(int a, char *dst, int d);
int __stdcall func_00168550(void *a, char *dst, int d);

int func_00168120(const char *s)
{
    int len;
    int isText;
    int isFloat;
    int i;

    len = strlen(s);
    isFloat = 0;
    isText = 0;
    for (i = 0; i < len; i++) {
        if (func_001EA211(s[i]) != 0) {
            isText = 1;
            i = len;
        } else if (s[i] == '.') {
            isFloat = 1;
        }
    }
    if (isText != 0) {
        return 2;
    }
    if (isFloat != 0) {
        return 1;
    }
    return 0;
}

void func_001681A0(const char *s, int *out)
{
    char *copy;
    char *d;
    const char *p;
    char c;

    out[0] = func_00168120(s);
    switch (out[0]) {
    case 0:
        out[1] = func_001E91F4(s);
        break;
    case 1:
        *(float *)&out[1] = (float)func_001E9649(s);
        break;
    case 2:
        copy = (char *)func_001E8AA5(strlen(s) + 1);
        out[1] = (int)copy;
        p = s;
        d = copy;
        do {
            c = *p;
            p++;
            *d = c;
            d++;
        } while (c != '\0');
        break;
    }
}

void func_00168210(int type, int value, char *dst)
{
    switch (type) {
    case 0:
        func_001ADCC0(dst, 3, D_00288004, value);
        break;
    case 1:
        func_001ADCC0(dst, 3, D_00288008, *(float *)&value);
        break;
    case 2:
        strcpy(dst, (const char *)value);
        break;
    }
}

C_00168280 *C_00168280::func_00168280(void)
{
    f4 = 0;
    f8 = 0;
    fc = 0;
    f10 = 0;
    f14 = 0;
    f18 = 0;
    f1c = 0;
    f20 = 0;
    f24 = 0;
    f424 = 0;
    f428 = 0;
    f42c = 0;
    f430 = 0;
    f434 = 0;
    f0 = -1;
    memset(f438, 0, sizeof(f438));
    f4c8 = 0;
    f4b8 = 0;
    f4bc = 0;
    f4c0 = 0;
    f4c4 = 0;
    return this;
}

int C_00168280::func_00168300(const char *name)
{
    char buf[0x400];
    int lo;
    int hi;
    int mid;
    int i;
    int off;
    char *table;

    if (f4 != 0) {
        if (f4c8 != 0) {
            char *p = (char *)name;
            int delta = buf - p;
            char c;

            do {
                c = *p;
                p[delta] = c;
                p++;
            } while (c);
            func_000347F0(buf);
            lo = 0;
            hi = f10 - 1;
            mid = hi >> 1;
            table = f4c8;
            do {
                int cmp = strcmp(buf, table + mid * 0x400);

                if (cmp == 0) {
                    return mid;
                }
                if (cmp < 0) {
                    hi = mid;
                } else {
                    lo = mid;
                }
                mid = ((hi - lo) >> 1) + lo;
            } while (hi - lo > 1);
            if (strcmp(buf, table + lo * 0x400) == 0) {
                return lo;
            }
            if (strcmp(buf, table + hi * 0x400) == 0) {
                return hi;
            }
        }
        return -1;
    }
    i = 0;
    if (f10 > 0) {
        off = 0;
        do {
            if (func_001EA426(name, (char *)f18 + off + 8) == 0) {
                return i;
            }
            i++;
            off += 0x410;
        } while (i < f10);
        return -1;
    }
    return -1;
}

void C_001684B0::func_001684B0(void)
{
  int func_001E8390(...);
  int in_ECX = (int)this;
  int iVar1;
  
  if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
    iVar1 = **(int **)(in_ECX + 0x20);
    if (iVar1 != 0) {
      func_001E8390(iVar1);
    }
    func_001E8390(*(undefined4 *)(in_ECX + 0x20));
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  return;
}

void C_001684B0::func_001684F0(int count)
{
    f1c = count;
    if (count > 0) {
        f20 = (char **)func_001E8AA5(count << 2);
        f20[0] = (char *)func_001E8AA5(f1c << 10);
        for (int i = 1; i < f1c; i++) {
            f20[i] = f20[i - 1] + 0x400;
        }
    }
}

int C_00168280::func_00168550(const char *name, char *dst, int size)
{
    char key[0x400];
    char val[0x400];
    S_00168550_Tokenizer tok;
    char *t;
    char *e;
    char *s;
    char *p;
    char c;
    char *k2;
    int lo;
    int hi;
    int mid;
    int n;
    int i;
    int count;
    int delta;
    char **list;

    if (f4 != 0) {
        if (f1c != 0) {
            if (f1c == 1) {
                p = (char *)name;
                delta = key - p;
                do {
                    c = *p;
                    p[delta] = c;
                    p++;
                } while (c);
                func_000347F0(key);
                t = f4c0;
                if (strcmp(key, t) != 0) {
                    return 0;
                }
                s = t + *(int *)(t + 0x23);
                n = clamp_168550(s, size);
                goto copy;
            }
            p = (char *)name;
            delta = key - p;
            do {
                c = *p;
                p[delta] = c;
                p++;
            } while (c);
            k2 = key;
            func_000347F0(k2);
            lo = 0;
            hi = f1c - 1;
            mid = hi >> 1;
            t = f4c0;
            do {
                int cmp;

                e = t + mid * 0x2b;
                cmp = strcmp(key, e);
                if (cmp == 0) {
                    s = t + *(int *)(e + 0x23);
                    n = clamp_168550(s, size);
                    goto copy;
                }
                if (cmp < 0) {
                    hi = mid;
                } else {
                    lo = mid;
                }
                mid = ((hi - lo) >> 1) + lo;
            } while (hi - lo > 1);
            e = t + lo * 0x2b;
            if (strcmp(key, e) == 0) {
                s = t + *(int *)(e + 0x23);
                n = clamp_168550(s, size);
                goto copy;
            }
            e = t + hi * 0x2b;
            if (strcmp(key, e) != 0) {
                return 0;
            }
            s = t + *(int *)(e + 0x23);
            n = clamp_168550(s, size);
copy:
            memcpy(dst, s, n);
            dst[n] = 0;
            return 1;
        }
    } else {
        count = f1c;
        list = f20;
        for (i = 0; i < count; i++) {
            n = min_168550(0x3ff, strlen(list[i]));
            func_001E8920(key, list[i], n);
            key[n] = 0;
            tok.Tokenizer_SetString(key);
            s = tok.func_001B4A70(D_0028800C);
            n = min_168550(0x3ff, strlen(s));
            func_001E8920(val, s, n);
            val[n] = 0;
            s = tok.func_001B4A70(D_002869B4);
            if (s != 0 && func_001EA426(val, name) == 0) {
                return store_168550(dst, s, size);
            }
        }
    }
    dst[0] = 0;
    return 0;
}

int C_00168280::func_00168A10(const char *name, int *out)
{
    char *end;
    char buf[1024];
    if (func_00168550(name, buf, -1)) {
        if (!func_001F6570(buf, D_00288024, 1)) { *out = 1; return 1; }
        if (!func_001F6570(buf, D_00288020, 1)) { *out = 0; return 1; }
        if (!func_001EA426(buf, D_0028801C)) { *out = 1; return 1; }
        if (!func_001EA426(buf, D_00288018)) { *out = 0; return 1; }
        if (!func_001F6570(buf, D_00288014, 1)) { *out = 1; return 1; }
        if (!func_001F6570(buf, D_00288010, 1)) { *out = 0; return 1; }
        *out = func_001E9576(buf, &end, 0);
        return 1;
    }
    return 0;
}

int C_00168280::func_00168B90(const char *name, float *out)
{
    char buf[0x400];

    if (func_00168550(name, buf, -1) != 0) {
        *out = (float)func_001E9649(buf);
        return 1;
    }
    return 0;
}

int C_00168280::func_00168BE0(const char *name, const char *src, char *dst, int d)
{
    if (func_00168550(name, dst, d) != 0) {
        return 1;
    }
    strcpy(dst, src);
    return 0;
}

int __stdcall func_00168C20(int a, int b, int *out)
{
    if (func_00168A10(a, out) != 0) {
        return 1;
    }
    *out = b;
    return 0;
}

int C_00168280::func_00168C50(const char *name, float def, float *out)
{
    char buf[0x400];

    if (func_00168550(name, buf, -1) != 0) {
        *out = (float)func_001E9649(buf);
        return 1;
    }
    *out = def;
    return 0;
}

int C_00168280::func_00168CB0(const char *name, const float *def, float *out)
{
    char buf[0x184];

    if (func_00168550(name, buf, 0x80) == 0) {
        strcpy(buf, D_00275630);
        out[0] = def[0];
        out[1] = def[1];
        out[2] = def[2];
        return 0;
    } else {
        out[0] = (float)func_001E9649(func_001E95A4(buf, D_002869B8));
        out[1] = (float)func_001E9649(func_001E95A4(0, D_002869B8));
        out[2] = (float)func_001E9649(func_001E95A4(0, D_002869B4));
        return 1;
    }
}

int C_00168280::func_00168D70(const char *name, float *out, int count)
{
    char buf[0x184];
    char *s;
    int i;

    if (func_00168550(name, buf, 0x80) == 0) {
        strcpy(buf, D_00275630);
        return 0;
    }
    if (count > 1) {
        s = func_001E95A4(buf, D_002869B8);
        out[0] = (float)func_001E9649(s);
        for (i = 1; i < count - 1; i++) {
            s = func_001E95A4(0, D_002869B8);
            out[i] = (float)func_001E9649(s);
        }
        s = func_001E95A4(0, D_002869B8);
        out[count - 1] = (float)func_001E9649(s);
    } else {
        s = func_001E95A4(0, D_002869B8);
        out[0] = (float)func_001E9649(s);
    }
    return 1;
}

int C_00168280::func_00168E70(const char *name, const int *def, int *out)
{
    char buf[0x184];

    if (func_00168550(name, buf, 0x80) == 0) {
        strcpy(buf, D_00275630);
        out[0] = def[0];
        out[2] = def[2];
        out[1] = def[1];
        out[3] = def[3];
        return 0;
    }
    out[0] = func_001E91F4(func_001E95A4(buf, D_002869B8));
    out[2] = func_001E91F4(func_001E95A4(0, D_002869B8));
    out[1] = func_001E91F4(func_001E95A4(0, D_002869B8));
    out[3] = func_001E91F4(func_001E95A4(0, D_002869B4));
    return 1;
}
