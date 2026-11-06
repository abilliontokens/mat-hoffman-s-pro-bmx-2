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

extern signed char D_00295500[];
extern char D_00295520[];
extern char D_0029557C[];
extern unsigned short D_00295584[];
extern unsigned short *D_002AEA30;
extern int D_002AEA38;
struct CrtDouble_001F3C55 {
    unsigned long lo;
    unsigned long hi;
};
extern void (*D_002AEA14)(CrtDouble_001F3C55 *, char *, int, int, int);
extern void (*D_002AEA18)(char *);
extern void (*D_002AEA20)(char *);
void *func_001E8AA5(int size);
int func_001F4F45(unsigned short *pwc, const unsigned char *s, unsigned int n);
unsigned __int64 __stdcall func_001F58E0(unsigned __int64 dividend, unsigned __int64 divisor);
int func_001F46F0(int a, int b, int c);
short func_001F59DC(int a, void *b);

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

struct FloatFormat {
 int maxexp, minexp, precision, shift, bits, bias;
};

struct STRFLT {
    int sign;
    int decpt;
    int flag;
    char *mantissa;
};

extern char D_000FFFFF;
extern char D_0000FFFF;

void func_001F494D(LD10 *dst, unsigned long *src);
int func_001F5C49(LD10 ld, int ndigits, int flags, FOS *fos);

int func_001F3B80(unsigned char *a, unsigned char *b)
{
    unsigned char hi;
    unsigned char lo = 0xff;
    unsigned char t;

    for (;;) {
        if (lo == 0)
            return 0;
        lo = *b++;
        hi = *a++;
        if (hi == lo)
            continue;
        t = lo - 0x41;
        lo = t + (-(t < 0x1a) & 0x20) + 0x41;
        t = hi - 0x41;
        hi = t + (-(t < 0x1a) & 0x20) + 0x41;
        if (hi == lo)
            continue;
        return (hi < lo) ? -1 : 1;
    }
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

int func_001F3C55(F3Obj *o, unsigned short *fmt, unsigned int *args)
{
    unsigned short buffer[255];
    unsigned short *text = 0;
    unsigned short *allocbuf = 0;
    int count = 0;
    int textlen = 0;
    int flags = 0;
    int width = 0;
    int prec = -1;
    int suppress = 0;
    int state = 0;
    int pad = 0;
    unsigned short ch;

    ch = *fmt;
    if (ch == 0) return count;
    for (;;) {
        fmt++;
        if (count < 0) break;
        {
            int cls = 0;
            int act;
            if (ch >= 0x20 && ch <= 0x78) cls = D_00295500[ch] & 0xf;
            act = (signed char)D_00295520[state * 8 + cls] >> 4;
            state = act;
            switch (act) {
            case 0:
                func_001F3BCE(o, ch, &count);
                break;
            case 1:
                prec = -1;
                pad = 0;
                textlen = 0;
                width = 0;
                suppress = 0;
                flags = 0;
                break;
            case 2: {
                int d = ch - 0x20;
                if (d == 0) flags |= 2;
                else if (d == 3) flags |= 0x80;
                else if (d == 8) flags |= 8;
                else {
                    d -= 2;
                    if (d == 0) flags |= 1;
                    else if (d == 2) flags |= 4;
                }
                break;
            }
            case 3:
                if (ch == 0x2a) {
                    width = (int)*args++;
                    if (width < 0) {
                        flags |= 4;
                        width = -width;
                    }
                } else {
                    width = (ch - 0x30) + width * 10;
                }
                break;
            case 4:
                prec = 0;
                break;
            case 5:
                if (ch == 0x2a) {
                    prec = (int)*args++;
                    if (prec < 0) prec = -1;
                } else {
                    prec = (ch - 0x30) + prec * 10;
                }
                break;
            case 6:
                if (ch == 0x49) {
                    if (fmt[0] == 0x36 && fmt[1] == 0x34) {
                        fmt += 2;
                        flags |= 0x8000;
                    } else if (fmt[0] == 0x33 && fmt[1] == 0x32) {
                        fmt += 2;
                        flags &= ~0x8000;
                    } else if (ch != 0x64 && ch != 0x69 && ch != 0x6f && ch != 0x75 && ch != 0x78 && ch != 0x58) {
                        state = 0;
                        suppress = 1;
                        func_001F3BCE(o, ch, &count);
                    }
                } else if (ch == 0x68) {
                    flags |= 0x20;
                } else if (ch == 0x6c) {
                    flags |= 0x10;
                } else if (ch == 0x77) {
                    flags |= 0x800;
                }
                break;
            case 7: {
                unsigned int c = ch;
                if (c < 0x65) {
                    if (c == 0x58) {
                        goto do_int;
                    } else if (c == 0x43 || c == 0x45 || c == 0x47) {
                        goto do_float;
                    } else if (c == 0x63) {
                        unsigned short wc = (unsigned short)*args++;
                        suppress = 1;
                        text = buffer;
                        buffer[0] = wc;
                        if (flags & 0x20) {
                            char tmpc[2];
                            tmpc[0] = (char)wc;
                            tmpc[1] = 0;
                            if (func_001F4F45(buffer, (unsigned char *)tmpc, 1) < 0) textlen = 1;
                            else textlen = 1;
                        }
                        textlen = 1;
                        goto output;
                    }
                } else if (c == 0x65 || c == 0x67) {
                    goto do_float;
                } else if (c == 0x69 || c == 0x64) {
                    goto do_int;
                } else if (c == 0x6e) {
                    if (flags & 0x20) *(short *)*args = (short)count;
                    else *(int *)*args = count;
                    args++;
                    suppress = 1;
                    goto output;
                } else if (c == 0x6f || c == 0x75 || c == 0x78) {
                    goto do_int;
                } else if (c == 0x70) {
                    prec = 8;
                    flags |= 0x40;
                    goto do_int;
                } else if (c == 0x73) {
                    goto do_str;
                }
                goto output;
            do_str: {
                    unsigned short *s = (unsigned short *)*args++;
                    if (s == 0) s = D_00295584;
                    suppress = 1;
                    text = s;
                    textlen = 0;
                    if (flags & 0x20) {
                        unsigned short *p = s;
                        int lim = prec;
                        if (lim < 0) lim = 0x7fffffff;
                        while (lim > 0 && *p != 0) { p++; lim--; textlen++; }
                    } else {
                        unsigned short *p = s;
                        while (*p != 0) { p++; textlen++; }
                        if (prec >= 0 && textlen > prec) textlen = prec;
                    }
                    goto output;
                }
            do_float: {
                    suppress = 1;
                    text = buffer;
                    goto output;
                }
            do_int: {
                    unsigned __int64 val;
                    unsigned __int64 base;
                    int neg = 0;
                    suppress = 1;
                    flags |= 0x40;
                    if (ch == 0x64 || ch == 0x69) {
                        if (flags & 0x8000) {
                            val = *(unsigned __int64 *)args;
                            args += 2;
                            if ((__int64)val < 0) { neg = 1; val = -val; }
                        } else if (flags & 0x20) {
                            short sv = (short)*args++;
                            val = (unsigned int)(sv < 0 ? -sv : sv);
                            neg = sv < 0;
                        } else {
                            int sv = (int)*args++;
                            val = (unsigned int)(sv < 0 ? -sv : sv);
                            neg = sv < 0;
                        }
                        base = 10;
                    } else {
                        if (flags & 0x8000) {
                            val = *(unsigned __int64 *)args;
                            args += 2;
                        } else if (flags & 0x20) {
                            val = (unsigned short)*args++;
                        } else {
                            val = *args++;
                        }
                        base = (ch == 0x6f) ? 8 : ((ch == 0x75) ? 10 : 16);
                    }
                    if (prec < 0) prec = 1;
                    else flags &= ~8;
                    if (prec > 0x200) prec = 0x200;
                    {
                        unsigned short *p = &buffer[254];
                        unsigned short *end = p;
                        if (val == 0 && prec == 0) {
                            textlen = 0;
                        } else {
                            while (val != 0 || prec > 0) {
                                unsigned int digit = (unsigned int)(val % base);
                                val = func_001F58E0(val, base);
                                digit += 0x30;
                                if (digit > 0x39) digit += (ch == 0x58) ? 7 : 0x27;
                                *p = (unsigned short)digit;
                                p--;
                                prec--;
                            }
                            textlen = (int)(end - p);
                        }
                        text = p + 1;
                        if (neg) {
                            flags |= 0x100;
                        }
                    }
                    goto output;
                }
            output:
                break;
            }
            }
        }
        if (!suppress) {
            int adj = width - pad - textlen;
            if (flags & 0x40) {
                if (!(flags & 0x100)) {
                    if (flags & 1) { pad = 1; }
                    else if (flags & 2) { pad = 1; }
                }
            }
            if (!(flags & 0xc)) func_001F3BF3(&count, 0x20, adj, o);
            if ((flags & 8) && !(flags & 4)) func_001F3BF3(&count, 0x30, adj, o);
            if (textlen > 0) {
                func_001F3C18(text, textlen, o, &count);
            }
            if (flags & 4) func_001F3BF3(&count, 0x20, adj, o);
        }
        if (allocbuf != 0) {
            func_001E8390(allocbuf);
            allocbuf = 0;
        }
        ch = *fmt;
        if (ch == 0) break;
    }
    return count;
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
void func_001F4641(unsigned int *src, unsigned int *dst)
{
    int bias = (int)dst - (int)src;
    int i;
    unsigned int t;

    for (i = 0; i < 3; i++) {
        t = src[i];
        *(unsigned int *)((char *)&src[i] + bias) = t;
    }
}
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
    unsigned int mask = ~(-1 << (n % 32));
    unsigned int carry = 0;
    unsigned int v;
    unsigned int lo;
    int i;

    for (i = 0; i < 3; i++) {
        v = x[i];
        lo = v & mask;
        x[i] = (v >> (n % 32)) | carry;
        carry = lo << (32 - n % 32);
    }
    for (i = 2; i >= 0; i--) {
        if (i >= n / 32) {
            x[i] = x[i - n / 32];
        } else {
            x[i] = 0;
        }
    }
}
#pragma optimize("", on)

#pragma optimize("", on)


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

void func_001F48CE(char *buf, int digits, STRFLT *pflt)
{
    char *pbuf = buf;
    char *mantissa = pflt->mantissa;

    *pbuf++ = '0';
    while (digits > 0) {
        *pbuf++ = (*mantissa) ? *mantissa++ : 0x30;
        digits--;
    }
    *pbuf = '\0';
    if (digits >= 0 && *mantissa >= '5') {
        pbuf--;
        while (*pbuf == '9') {
            *pbuf = '0';
            pbuf--;
        }
        *pbuf += 1;
    }
    if (*buf == '1') {
        pflt->decpt++;
    } else {
        func_001EA6A0(buf, buf + 1, strlen(buf + 1) + 1);
    }
}

void func_001F494D(LD10 *dst, unsigned long *src)
{
    unsigned short *pus = (unsigned short *)src;
    unsigned long msb = 0x80000000;
    unsigned short exp = (pus[3] >> 4) & 0x7ff;
    unsigned int sign = pus[3] & 0x8000;
    unsigned long man_hi = src[1] & (unsigned long)&D_000FFFFF;
    unsigned long man_lo = src[0];
    unsigned short newexp;
    unsigned int e = exp;

    if (e != 0) {
        if (e != 0x7ff) {
            newexp = exp + 0x3c00;
        } else {
            newexp = 0x7fff;
        }
    } else {
        if (man_hi == 0 && man_lo == 0) {
            dst->hi = 0;
            dst->lo = 0;
            dst->se = 0;
            return;
        }
        newexp = exp + 0x3c01;
        msb = 0;
    }
    dst->hi = (man_lo >> 21) | (man_hi << 11) | msb;
    dst->lo = man_lo << 11;
    while ((dst->hi & 0x80000000) == 0) {
        dst->hi = (dst->hi << 1) | (dst->lo >> 31);
        dst->lo = dst->lo << 1;
        newexp--;
    }
    dst->se = sign | newexp;
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

