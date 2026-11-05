/* 26 functions from 0x001F3B80 to 0x001F4B08, found by Ghidra. */
#include "common.h"

extern int D_002AEDA4;
extern void **D_002FB368;
extern int D_002FB36C;
void func_001EB390(int n);
void func_001EB302(int n);
int func_001E9760(void *f);
void func_001E8390(void *p);
int func_001F5059(void *ld, char **end, const char *s, int a, int b, int c, int d);

void func_001F46F0(int a, int b, int c);
short func_001F59DC(int a, void *b);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
#pragma intrinsic(memset)

struct F3Obj {
    char pad_00[0x8];
    int field_8;
    unsigned char field_c;
    char pad_0d[0x3];
};

extern "C" unsigned int strlen(const char *s);
extern "C" char *strcpy(char *dst, const char *src);
#pragma intrinsic(strlen)
#pragma intrinsic(strcpy)

void *func_001EA6A0(void *dst, const void *src, unsigned int n);

#pragma pack(push, 2)
struct LD10 {
    unsigned long lo;
    unsigned long hi;
    unsigned short se;
};
#pragma pack(pop)

struct FOS {
    short exp;
    char sign;
    char manlen;
    char man[24];
};

struct STRFLT {
    int sign;
    int decpt;
    int flag;
    char *mantissa;
};

void func_001F494D(LD10 *dst, unsigned long *src);
int func_001F5C49(LD10 ld, int ndigits, int flags, FOS *fos);

int func_001F3B80(unsigned char *a, unsigned char *b) {
    unsigned char c1, c2;
    do {
        c1 = *a++;
        c2 = *b++;
        if (c1 != c2) {
            c1 = (unsigned char)(c1 - 'A' + ((c1 - 'A' < 26) ? ('a' - 'A') : 0) + 'A' - 'A');
            c2 = (unsigned char)(c2 - 'A' + ((c2 - 'A' < 26) ? ('a' - 'A') : 0));
            if (c1 != c2) return (c1 > c2) - (c1 < c2);
        }
    } while (c1 != 0);
    return 0;
}

#pragma optimize("y", on)
static void func_001F3BCE(F3Obj *o, int arg, int *cnt);
void func_001F3BF3(int *cnt, int arg, int count, F3Obj *o);
void func_001F3BCE(F3Obj *o, int arg, int *cnt) {
    if ((o->field_c & 0x40) == 0 || o->field_8 != 0) {
        if (func_001F59DC(arg, o) == -1) { *cnt |= -1; return; }
    }
    *cnt += 1;
}
void func_001F3BF3(int *cnt, int arg, int count, F3Obj *o) {
    while (count > 0) {
        count--;
        func_001F3BCE(o, arg, cnt);
        if (*cnt == -1) break;
    }
}

void func_001F3C18(unsigned short *str, int len, F3Obj *f, int *pnum)
{
    if ((f->field_c & 0x40) && f->field_8 == 0) {
        *pnum += len;
        return;
    }
    while (len > 0) {
        len--;
        func_001F3BCE(f, *str, pnum);
        str++;
        if (*pnum == -1) break;
    }
}

extern "C" unsigned long __cdecl _exception_code(void);
int __stdcall func_001F4419(int *p)
{
    int r;
    __try {
        (void)*(volatile int *)p;
        r = 1;
    } __except (_exception_code() == 0xC0000005) {
        r = 0;
    }
    return r;
}

int func_001F445B(void)
{
    int count = 0;
    int i;
    func_001EB390(1);
    __try {
        for (i = 3; i < D_002FB36C; i++) {
            if (D_002FB368[i] != 0) {
                if (*((unsigned char *)D_002FB368[i] + 0xc) & 0x83) {
                    if (func_001E9760(D_002FB368[i]) != -1) count++;
                }
                if (i >= 20) {
                    func_001E8390(D_002FB368[i]);
                    D_002FB368[i] = 0;
                }
            }
        }
    } __finally {
        func_001EB302(1);
    }
    return count;
}

#pragma optimize("", on)
void func_001F44D6(void) {
    int func_001EB302(...);
    func_001EB302(1);
}

extern "C" __declspec(dllimport) void __stdcall RtlInitializeCriticalSection(void *cs);
int __stdcall func_001F44DF(void *cs, int spinCount);
extern int (__stdcall *D_002F6A60)(void *a, int b);
void __stdcall func_001DD62B(int code);
int func_001F5AA1(unsigned int oldval, unsigned int mask, unsigned int *p);
#pragma optimize("sy", on)
int __stdcall func_001F44DF(void *cs, int spinCount)
{
    RtlInitializeCriticalSection(cs);
    return 1;
}

#pragma optimize("s", on)
int func_001F44EF(void *a, int b)
{
    int r;
    unsigned long code;

    if (D_002F6A60 == 0) {
        D_002F6A60 = func_001F44DF;
    }
    __try {
        r = D_002F6A60(a, b);
    } __except (code = _exception_code(), 1) {
        if (code == 0xc0000017) {
            func_001DD62B(8);
        }
        r = 0;
    }
    return r;
}
#pragma optimize("", on)

#pragma optimize("sy", on)
int func_001F4550(unsigned int *p, int bit)
{
    int i;

    i = bit / 32;
    if (p[i] & ~(~0u << (31 - bit % 32))) {
        return 0;
    }
    for (i++; i < 3; i++) {
        if (p[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int func_001F4582(unsigned int *p, int bit)
{
    int i;
    int ok;

    i = bit / 32;
    ok = func_001F5AA1(p[i], 1u << (31 - bit % 32), &p[i]);
    for (i--; i >= 0 && ok != 0; i--) {
        ok = func_001F5AA1(p[i], 1, &p[i]);
    }
    return ok;
}

#pragma optimize("sy", on)
int func_001F45CF(unsigned int *x, int bits)
{
    int ret = 0;
    int pos = bits - 1;
    int sh = 31 - (pos + 1) % 32;
    int w = (pos + 1) / 32;

    if (x[w] & (1 << sh)) {
        if (func_001F4550(x, pos + 1) == 0) {
            ret = func_001F4582(x, pos);
        }
    }
    x[w] &= -1 << sh;
    for (w++; w < 3; w++) {
        x[w] = 0;
    }
    return ret;
}
#pragma optimize("", on)

#pragma optimize("", on)

#pragma optimize("", on)

#pragma optimize("sy", on)
void func_001F4641(unsigned int *dst, unsigned int *src)
{
    int i;
    unsigned int t;

    for (i = 0; i < 3; i++) {
        t = src[i];
        dst[i] = t;
    }
}
#pragma optimize("", on)

#pragma optimize("sy", on)
int func_001F465C(unsigned int *p)
{
    int i;

    for (i = 0; i < 3; i++) {
        if (p[i] != 0) {
            return 0;
        }
    }
    return 1;
}

#pragma optimize("sy", on)
void func_001F4675(unsigned int *x, int n)
{
    int w = n / 32;
    int r = n % 32;
    unsigned int mask = ~(-1 << r);
    unsigned int carry = 0;
    unsigned int v;
    unsigned int lo;
    int i;

    for (i = 0; i < 3; i++) {
        v = x[i];
        lo = v & mask;
        x[i] = (v >> r) | carry;
        carry = lo << (32 - r);
    }
    for (i = 2; i >= 0; i--) {
        if (i < w) {
            x[i] = 0;
        } else {
            x[i] = x[i - w];
        }
    }
}
#pragma optimize("", on)

#pragma optimize("", on)

int func_001F46F0(...);
#pragma optimize("y", on)
void func_001F4848(int a0, int a1) { func_001F46F0(a0, a1, (int)&D_002AEDA4); }

extern int D_002AEDBC;
void func_001F485E(int a0, int a1) { func_001F46F0(a0, a1, (int)&D_002AEDBC); }

void func_001F4874(int d, const char *s)
{
    char ld[12];
    char *end;
    func_001F5059(ld, &end, s, 0, 0, 0, 0);
    func_001F4848((int)ld, d);
}

void func_001F48A1(int d, const char *s)
{
    char ld[12];
    char *end;
    func_001F5059(ld, &end, s, 0, 0, 0, 0);
    func_001F485E((int)ld, d);
}

STRFLT *func_001F4A07(double x, STRFLT *flt, char *resultstr)
{
    LD10 ld;
    FOS fos;

    func_001F494D(&ld, (unsigned long *)&x);
    flt->flag = func_001F5C49(ld, 0x11, 0, &fos);
    flt->sign = fos.sign;
    flt->decpt = fos.exp;
    strcpy(resultstr, fos.man);
    flt->mantissa = resultstr;
    return flt;
}

#pragma optimize("", on)
void func_001F4A6D(void) {
    int func_001EB9F3(...);
    func_001EB9F3(2);
}

