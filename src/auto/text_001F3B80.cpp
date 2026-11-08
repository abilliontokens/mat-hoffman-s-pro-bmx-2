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
short func_001F59DC(unsigned short a, void *b);

struct F3Obj {
    char pad_00[0x8];
    int field_8;
    unsigned char field_c;
    char pad_0d[0x3];
};

/* _woutput flag bits, buffer sizes and va_arg helpers */
#define OUT_FL_SIGN       0x0001
#define OUT_FL_SIGNSP     0x0002
#define OUT_FL_LEFT       0x0004
#define OUT_FL_LEADZERO   0x0008
#define OUT_FL_LONG       0x0010
#define OUT_FL_SHORT      0x0020
#define OUT_FL_SIGNED     0x0040
#define OUT_FL_ALTERNATE  0x0080
#define OUT_FL_NEGATIVE   0x0100
#define OUT_FL_FORCEOCTAL 0x0200
#define OUT_FL_WIDECHAR   0x0800
#define OUT_FL_I64        0x8000
/* Never defined or called: func_001F3C55 mentions it in a dead `if (0)` so that format and argptr count as address-taken
   (kept in memory, as in the original) instead of being enregistered. */
void func_unused_001F3C55(void *, void *);
#define OUT_BUFFERSIZE    512
#define OUT_CVTBUFSIZE    349
#define out_get_int_arg(ap)   (*(int *)((*(ap) += 4) - 4))
#define out_get_wchar_arg(ap) (*(unsigned short *)((*(ap) += 4) - 4))
#define out_get_ptr_arg(ap)   (*(void **)((*(ap) += 4) - 4))
#define out_get_int64_arg(ap) (*(__int64 *)((*(ap) += 8) - 8))

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
static void func_001F3BCE(F3Obj *o, unsigned short arg, int *cnt);
static void func_001F3BF3(int *cnt, unsigned short arg, int count, F3Obj *o);
static void func_001F3C18(unsigned short *str, int len, F3Obj *f, int *pnum);
void func_001F3BCE(F3Obj *o, unsigned short arg, int *cnt) {
    if ((o->field_c & 0x40) == 0 || o->field_8 != 0) {
        if (func_001F59DC(arg, o) == -1) { *cnt |= -1; return; }
    }
    *cnt += 1;
}
void func_001F3BF3(int *cnt, unsigned short arg, int count, F3Obj *o) {
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
    while (len-- > 0) {
        func_001F3BCE(f, *str++, pnum);
        if (*pnum == -1) break;
    }
}

int func_001F3C55(F3Obj *f, unsigned short *format, char *argptr)
{
    int hexadd;
    unsigned short ch;
    int flags;
    int state;
    int chclass;
    int radix;
    int charsout;
    int fldwidth;
    int precision;
    unsigned short prefix[2];
    int prefixlen;
    int capexp;
    int no_output;
    union {
        char *sz;
        unsigned short *wz;
    } text;
    int textlen;
    union {
        char sz[OUT_BUFFERSIZE];
        unsigned short wz[OUT_BUFFERSIZE];
    } buffer;
    unsigned short wchar;
    int bufferiswide;
    char *heapbuf;
    int padding;

    if (0)
        func_unused_001F3C55(&format, &argptr);
    textlen = 0;
    charsout = 0;
    heapbuf = 0;
    state = 0;

    while ((ch = *format++) != 0 && charsout >= 0) {
        chclass = (ch < 0x20 || ch > 0x78) ? 0 : D_00295500[ch] & 0xf;
        state = (signed char)D_00295520[chclass * 8 + state] >> 4;
        switch (state) {
        case 1:
            prefixlen = fldwidth = no_output = capexp = 0;
            flags = 0;
            precision = -1;
            bufferiswide = 0;
            break;
        case 2:
            switch (ch) {
            case ' ':
                flags |= OUT_FL_SIGNSP;
                break;
            case '#':
                flags |= OUT_FL_ALTERNATE;
                break;
            case '+':
                flags |= OUT_FL_SIGN;
                break;
            case '-':
                flags |= OUT_FL_LEFT;
                break;
            case '0':
                flags |= OUT_FL_LEADZERO;
                break;
            }
            break;
        case 3:
            if (ch == '*') {
                fldwidth = out_get_int_arg(&argptr);
                if (fldwidth < 0) {
                    flags |= OUT_FL_LEFT;
                    fldwidth = -fldwidth;
                }
            } else {
                fldwidth = fldwidth * 10 + (ch - '0');
            }
            break;
        case 4:
            precision = 0;
            break;
        case 5:
            if (ch == '*') {
                precision = out_get_int_arg(&argptr);
                if (precision < 0)
                    precision = -1;
            } else {
                precision = precision * 10 + (ch - '0');
            }
            break;
        case 6:
            switch (ch) {
            case 'I':
                if (*format == '6' && *(format + 1) == '4') {
                    format += 2;
                    flags |= OUT_FL_I64;
                } else if (*format == '3' && *(format + 1) == '2') {
                    format += 2;
                    flags &= ~OUT_FL_I64;
                } else if (*format != 'd' && *format != 'i' && *format != 'o' &&
                           *format != 'u' && *format != 'x' && *format != 'X') {
                    state = 0;
                    goto NORMAL_STATE;
                }
                break;
            case 'h':
                flags |= OUT_FL_SHORT;
                break;
            case 'l':
                flags |= OUT_FL_LONG;
                break;
            case 'w':
                flags |= OUT_FL_WIDECHAR;
                break;
            }
            break;
        case 0:
        NORMAL_STATE:
            bufferiswide = 1;
            func_001F3BCE(f, ch, &charsout);
            break;
        case 7:
            switch (ch) {
            case 'C':
                if (!(flags & (OUT_FL_SHORT | OUT_FL_LONG | OUT_FL_WIDECHAR)))
                    flags |= OUT_FL_SHORT;
            case 'c':
                bufferiswide = 1;
                wchar = out_get_wchar_arg(&argptr);
                if (flags & OUT_FL_SHORT) {
                    char mbc[2];
                    mbc[0] = (char)wchar;
                    mbc[1] = 0;
                    if (func_001F4F45(buffer.wz, (const unsigned char *)mbc, D_002AEA38) < 0)
                        no_output = 1;
                } else {
                    buffer.wz[0] = wchar;
                }
                text.wz = buffer.wz;
                textlen = 1;
                break;
            case 'Z': {
                struct CountString {
                    short Length;
                    short MaximumLength;
                    char *Buffer;
                } *pstr;
                pstr = (CountString *)out_get_ptr_arg(&argptr);
                if (pstr == 0 || pstr->Buffer == 0) {
                    text.sz = D_0029557C;
                    textlen = strlen(text.sz);
                } else {
                    if (flags & OUT_FL_WIDECHAR) {
                        text.wz = (unsigned short *)pstr->Buffer;
                        textlen = pstr->Length / 2;
                        bufferiswide = 1;
                    } else {
                        bufferiswide = 0;
                        text.sz = pstr->Buffer;
                        textlen = pstr->Length;
                    }
                }
                break;
            }
            case 'S':
                if (!(flags & (OUT_FL_SHORT | OUT_FL_LONG | OUT_FL_WIDECHAR)))
                    flags |= OUT_FL_SHORT;
            case 's': {
                int i;
                char *p;
                unsigned short *pwch;
                i = (precision == -1) ? 0x7fffffff : precision;
                text.sz = (char *)out_get_ptr_arg(&argptr);
                if (flags & OUT_FL_SHORT) {
                    if (text.sz == 0)
                        text.sz = D_0029557C;
                    p = text.sz;
                    for (textlen = 0; textlen < i && *p; textlen++) {
                        if (D_002AEA30[(unsigned char)*p] & 0x8000)
                            ++p;
                        ++p;
                    }
                } else {
                    if (text.wz == 0)
                        text.wz = D_00295584;
                    bufferiswide = 1;
                    pwch = text.wz;
                    while (i-- && *pwch)
                        ++pwch;
                    textlen = pwch - text.wz;
                }
                break;
            }
            case 'n': {
                void *p = out_get_ptr_arg(&argptr);
                if (flags & OUT_FL_SHORT)
                    *(short *)p = (short)charsout;
                else
                    *(int *)p = charsout;
                no_output = 1;
                break;
            }
            case 'E':
            case 'G':
                capexp = 1;
                ch += 'a' - 'A';
            case 'e':
            case 'f':
            case 'g': {
                CrtDouble_001F3C55 tmp;
                flags |= OUT_FL_SIGNED;
                text.sz = buffer.sz;
                if (precision < 0)
                    precision = 6;
                else if (precision == 0 && ch == 'g')
                    precision = 1;
                else if (precision > OUT_BUFFERSIZE)
                    precision = OUT_BUFFERSIZE;
                if (precision > OUT_BUFFERSIZE - OUT_CVTBUFSIZE) {
                    heapbuf = (char *)func_001E8AA5(OUT_CVTBUFSIZE + precision);
                    if (heapbuf != 0)
                        text.sz = heapbuf;
                    else
                        precision = OUT_BUFFERSIZE - OUT_CVTBUFSIZE;
                }
                tmp = *(CrtDouble_001F3C55 *)((argptr += 8) - 8);
                (*D_002AEA14)(&tmp, text.sz, (char)ch, precision, capexp);
                if ((flags & OUT_FL_ALTERNATE) && precision == 0)
                    (*D_002AEA20)(text.sz);
                if (ch == 'g' && !(flags & OUT_FL_ALTERNATE))
                    (*D_002AEA18)(text.sz);
                if (*text.sz == '-') {
                    flags |= OUT_FL_NEGATIVE;
                    ++text.sz;
                }
                textlen = strlen(text.sz);
                break;
            }
            case 'd':
            case 'i':
                flags |= OUT_FL_SIGNED;
            case 'u':
                radix = 10;
                goto COMMON_INT;
            case 'p':
                precision = 8;
            case 'X':
                hexadd = 'A' - '9' - 1;
                goto COMMON_HEX;
            case 'x':
                hexadd = 'a' - '9' - 1;
            COMMON_HEX:
                radix = 16;
                if (flags & OUT_FL_ALTERNATE) {
                    prefix[0] = '0';
                    prefix[1] = (unsigned short)('x' - 'a' + '9' + 1 + hexadd);
                    prefixlen = 2;
                }
                goto COMMON_INT;
            case 'o':
                radix = 8;
                if (flags & OUT_FL_ALTERNATE)
                    flags |= OUT_FL_FORCEOCTAL;
            COMMON_INT: {
                unsigned __int64 number;
                int digit;
                if (flags & OUT_FL_I64) {
                    number = out_get_int64_arg(&argptr);
                } else if (flags & OUT_FL_SHORT) {
                    if (flags & OUT_FL_SIGNED)
                        number = (short)out_get_int_arg(&argptr);
                    else
                        number = (unsigned short)out_get_int_arg(&argptr);
                } else {
                    if (flags & OUT_FL_SIGNED)
                        number = (long)out_get_int_arg(&argptr);
                    else
                        number = (unsigned long)out_get_int_arg(&argptr);
                }
                if ((flags & OUT_FL_SIGNED) && (__int64)number < 0) {
                    number = -(__int64)number;
                    flags |= OUT_FL_NEGATIVE;
                }
                if (!(flags & OUT_FL_I64))
                    number &= 0xffffffff;
                if (precision < 0) {
                    precision = 1;
                } else {
                    flags &= ~OUT_FL_LEADZERO;
                    if (precision > OUT_BUFFERSIZE)
                        precision = OUT_BUFFERSIZE;
                }
                if (number == 0)
                    prefixlen = 0;
                text.sz = &buffer.sz[OUT_BUFFERSIZE - 1];
                while (precision-- > 0 || number != 0) {
                    digit = (int)(number % radix) + '0';
                    number /= radix;
                    if (digit > '9')
                        digit += hexadd;
                    *text.sz-- = (char)digit;
                }
                textlen = (int)&buffer.sz[OUT_BUFFERSIZE - 1] - (int)text.sz;
                ++text.sz;
                if (flags & OUT_FL_FORCEOCTAL) {
                    if (*text.sz != '0' || textlen == 0) {
                        *--text.sz = '0';
                        ++textlen;
                    }
                }
                break;
            }
            }
            if (!no_output) {
                if (flags & OUT_FL_SIGNED) {
                    if (flags & OUT_FL_NEGATIVE) {
                        prefix[0] = '-';
                        prefixlen = 1;
                    } else if (flags & OUT_FL_SIGN) {
                        prefix[0] = '+';
                        prefixlen = 1;
                    } else if (flags & OUT_FL_SIGNSP) {
                        prefix[0] = ' ';
                        prefixlen = 1;
                    }
                }
                padding = fldwidth - prefixlen - textlen;
                if (!(flags & (OUT_FL_LEFT | OUT_FL_LEADZERO)))
                    func_001F3BF3(&charsout, ' ', padding, f);
                func_001F3C18(prefix, prefixlen, f, &charsout);
                if ((flags & OUT_FL_LEADZERO) && !(flags & OUT_FL_LEFT))
                    func_001F3BF3(&charsout, '0', padding, f);
                if (!bufferiswide && textlen > 0) {
                    char *p = text.sz;
                    int i = textlen;
                    int retval;
                    while (i-- > 0) {
                        retval = func_001F4F45(&wchar, (const unsigned char *)p, D_002AEA38);
                        if (retval <= 0)
                            break;
                        func_001F3BCE(f, wchar, &charsout);
                        p += retval;
                    }
                } else {
                    func_001F3C18(text.wz, textlen, f, &charsout);
                }
                if (flags & OUT_FL_LEFT)
                    func_001F3BF3(&charsout, ' ', padding, f);
            }
            if (heapbuf) {
                func_001E8390(heapbuf);
                heapbuf = 0;
            }
            break;
        }
    }
    return charsout;
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

#pragma inline_depth(0)
void func_001F44D6(void);
#pragma inline_depth(0)
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
        func_001F44D6();
    }
    return count;
}
#pragma inline_depth()
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
    unsigned int *s = src;
    int n = 3;

    do {
        *(unsigned int *)((char *)dst + ((char *)s - (char *)src)) = *s;
        s++;
    } while (--n);
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
    volatile unsigned int lo;
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

#pragma optimize("s", on)
#pragma optimize("y", off)
int func_001F46F0(int a, int b, int c)
{
 unsigned int x[3], saved[3];
 int *fmt=(int*)c;
 int exp=(*(unsigned short*)(a+10)&0x7fff)-0x3fff;
 unsigned int sign=*(unsigned short*)(a+10)&0x8000;
 int exponent, result;
 x[0]=*(unsigned int*)(a+6);
 x[1]=*(unsigned int*)(a+2);
 x[2]=(unsigned int)*(unsigned short*)a<<16;
 if(exp == -0x3fff) {
  exponent=0;
  if(!func_001F465C(x)) { for(int i=0;i<3;i++) x[i]=0; result=2; }
  else result=0;
 } else {
  func_001F4641(saved,x);
  if(func_001F45CF(x,fmt[2])) ++exp;
  if(exp < fmt[1]-fmt[2]) {
   for(int i=0;i<3;i++) x[i]=0; exponent=0; result=2;
  } else if(exp <= fmt[1]) {
   int shift = ((volatile int*)fmt)[1]-exp;
   func_001F4641(x,saved);
   func_001F4675(x,shift);
   func_001F45CF(x,fmt[2]);
   func_001F4675(x,fmt[3]+1);
   exponent=0; result=2;
  } else if(exp >= fmt[0]) {
   for(int i=0;i<3;i++) x[i]=0;
   ((unsigned char*)x)[3]|=0x80;
   func_001F4675(x,fmt[3]);
   exponent=fmt[5]+fmt[0]; result=1;
  } else {
   exponent=fmt[5]+exp;
   ((unsigned char*)x)[3]&=0x7f;
   func_001F4675(x,fmt[3]); result=0;
  }
 }
 unsigned int hi=(exponent<<(31-fmt[3])) | (sign?0x80000000:0) | x[0];
 if(fmt[4]==64) { ((unsigned int*)b)[1]=hi; ((unsigned int*)b)[0]=x[1]; }
 else if(fmt[4]==32) *(unsigned int*)b=hi;
 return result;
}
#pragma optimize("", on)

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

extern char D_00080000, D_00010000, D_00020000, D_00040000;
unsigned int func_001F4A76(unsigned short cw) {
    unsigned int r = 0;
    unsigned int t;
    if (cw & 1) r = 0x10;
    if (cw & 4) r |= 8;
    if (cw & 8) r |= 4;
    if (cw & 0x10) r |= 2;
    if (cw & 0x20) r |= 1;
    if (cw & 2) r |= (unsigned int)&D_00080000;
    switch (cw & 0xc00) {
    case 0: break;
    case 0x400: r |= 0x100; break;
    case 0x800: r |= 0x200; break;
    case 0xc00: r |= 0x300; break;
    }
    t = cw & 0x300;
    if (t == 0) r |= (unsigned int)&D_00020000;
    else if (t == 0x200) r |= (unsigned int)&D_00010000;
    if (cw & 0x1000) r |= (unsigned int)&D_00040000;
    return r;
}

