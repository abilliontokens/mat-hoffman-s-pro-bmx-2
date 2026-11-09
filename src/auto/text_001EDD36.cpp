/* 16 functions from 0x001EDD36 to 0x001EEA34, found by Ghidra. */
#include "common.h"

int *func_001ED075(void);
int *func_001ED07E(void);
void func_001ED087(unsigned int code);
int func_001EE6CE(int fh);
int __stdcall func_001DD3A1(int a0, int a1, int a2, int a3);
int func_001DD603(void);
void func_001EB302(int locknum);
void func_001EB390(int locknum);
int func_001F44EF(void *cs, unsigned long spinCount);
int func_001EB314(int locknum);
void *func_001E8AA5(int size);
extern unsigned int D_002FB240;
extern int *D_002FB260[];
extern int *D_002FB360[];
extern char *D_002F6A28;

int __stdcall func_001DD563(int h);
int func_001EE70F(int fh);
void func_001EE782(int fh);

struct S_001EE9AB {
    int f0;
    void (__cdecl *f4)(void *);
    void **f8;
    void **fC;
};
extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);

/* lowio handle table entry (__pioinfo element), 0x28 bytes */
struct S_Ioinfo {
    int osfhnd;
    unsigned char osfile;
    unsigned char pipech;
    char pad6[2];
    int lockinitflag;
    char padC[0x1c];
};

/* CRT FILE as output.c's write helpers see it */
struct S_001EDC7E {
    int f0;
    int f4;
    int f8;
    u8 fC;
    u8 fD;
    char padE[0xA];
    int f18;
};
int func_001ED8A7(int ch, void *stream);
void func_001E8390(void *p);
int func_001F58AA(char *mb, short wc);
unsigned __int64 __stdcall func_001F58E0(unsigned __int64 dividend, unsigned __int64 divisor);

extern signed char D_00295500[];
extern char D_00295520[];
extern char D_0029557C[];
extern unsigned short D_00295584[];
extern unsigned short *D_002AEA30;
struct CrtDouble_001EDD36 {
    double x;
};
extern void (*D_002AEA14)(CrtDouble_001EDD36 *, char *, int, int, int);
extern void (*D_002AEA18)(char *);
extern void (*D_002AEA20)(char *);

/* output.c's flag bits, buffer sizes and va_arg helpers */
#define OUTA_FL_SIGN       0x0001
#define OUTA_FL_SIGNSP     0x0002
#define OUTA_FL_LEFT       0x0004
#define OUTA_FL_LEADZERO   0x0008
#define OUTA_FL_LONG       0x0010
#define OUTA_FL_SHORT      0x0020
#define OUTA_FL_SIGNED     0x0040
#define OUTA_FL_ALTERNATE  0x0080
#define OUTA_FL_NEGATIVE   0x0100
#define OUTA_FL_FORCEOCTAL 0x0200
#define OUTA_FL_WIDECHAR   0x0800
#define OUTA_FL_I64        0x8000
#define OUTA_BUFFERSIZE    512
#define OUTA_CVTBUFSIZE    349
#define outa_get_int_arg(ap)   (*(int *)((*(ap) += 4) - 4))
#define outa_get_short_arg(ap) (*(short *)((*(ap) += 4) - 4))
#define outa_get_ptr_arg(ap)   (*(void **)((*(ap) += 4) - 4))
#define outa_get_int64_arg(ap) (*(__int64 *)((*(ap) += 8) - 8))

extern "C" unsigned int strlen(const char *s);
#pragma intrinsic(strlen)

#pragma optimize("s", on)

/* write_char / write_multi_char / write_string. In the original they sit at the end of the
   previous unit (text_001ED0FC.cpp, where they are matched); these copies give _output the
   same register-based calls until the two units can be one file. */
static void func_001EDCA8(char ch, S_001EDC7E *stream, int *pcnt) {
    if ((stream->fC & 0x40) && stream->f8 == 0) {
        ++*pcnt;
        return;
    }
    if ((--stream->f4 >= 0 ? (unsigned char)(*(char *)stream->f0++ = ch)
                           : func_001ED8A7(ch, stream)) == -1) {
        *pcnt = -1;
    } else {
        ++*pcnt;
    }
}

static void func_001EDCDB(char ch, int n, S_001EDC7E *stream, int *pcnt) {
    while (n > 0) {
        n--;
        func_001EDCA8(ch, stream, pcnt);
        if (*pcnt == -1) break;
    }
}

static void func_001EDCFF(char *str, int len, S_001EDC7E *stream, int *pcnt)
{
    if ((stream->fC & 0x40) && stream->f8 == 0) {
        *pcnt += len;
        return;
    }
    while (len-- > 0) {
        func_001EDCA8(*str++, stream, pcnt);
        if (*pcnt == -1) break;
    }
}

#pragma optimize("s", on)

int func_001EDD36(S_001EDC7E *stream, const char *format, char *argptr)
{
    int hexadd;
    char ch;
    int flags;
    int capexp;
    int state;
    int chclass;
    int radix;
    int charsout;
    int fldwidth;
    int precision;
    char prefix[2];
    int prefixlen;
    int no_output;
    int textlen;
    union {
        char *sz;
        unsigned short *wz;
    } text;
    char buffer[OUTA_BUFFERSIZE];
    short wchar;
    int bufferiswide;
    char *heapbuf;
    int padding;

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
                flags |= OUTA_FL_SIGNSP;
                break;
            case '#':
                flags |= OUTA_FL_ALTERNATE;
                break;
            case '+':
                flags |= OUTA_FL_SIGN;
                break;
            case '-':
                flags |= OUTA_FL_LEFT;
                break;
            case '0':
                flags |= OUTA_FL_LEADZERO;
                break;
            }
            break;
        case 3:
            if (ch == '*') {
                fldwidth = outa_get_int_arg(&argptr);
                if (fldwidth < 0) {
                    flags |= OUTA_FL_LEFT;
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
                precision = outa_get_int_arg(&argptr);
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
                    flags |= OUTA_FL_I64;
                } else if (*format == '3' && *(format + 1) == '2') {
                    format += 2;
                    flags &= ~OUTA_FL_I64;
                } else if (*format != 'd' && *format != 'i' && *format != 'o' &&
                           *format != 'u' && *format != 'x' && *format != 'X') {
                    state = 0;
                    goto NORMAL_STATE;
                }
                break;
            case 'h':
                flags |= OUTA_FL_SHORT;
                break;
            case 'l':
                flags |= OUTA_FL_LONG;
                break;
            case 'w':
                flags |= OUTA_FL_WIDECHAR;
                break;
            }
            break;
        case 0:
        NORMAL_STATE:
            bufferiswide = 0;
            if (D_002AEA30[(unsigned char)ch] & 0x8000) {
                func_001EDCA8(ch, stream, &charsout);
                ch = *format++;
            }
            func_001EDCA8(ch, stream, &charsout);
            break;
        case 7:
            switch (ch) {
            case 'C':
                if (!(flags & (OUTA_FL_SHORT | OUTA_FL_LONG | OUTA_FL_WIDECHAR)))
                    flags |= OUTA_FL_WIDECHAR;
            case 'c':
                if (flags & (OUTA_FL_LONG | OUTA_FL_WIDECHAR)) {
                    wchar = outa_get_short_arg(&argptr);
                    textlen = func_001F58AA(buffer, wchar);
                    if (textlen < 0)
                        no_output = 1;
                } else {
                    buffer[0] = (char)outa_get_int_arg(&argptr);
                    textlen = 1;
                }
                text.sz = buffer;
                break;
            case 'Z': {
                struct CountString {
                    short Length;
                    short MaximumLength;
                    char *Buffer;
                } *pstr;
                pstr = (CountString *)outa_get_ptr_arg(&argptr);
                if (pstr == 0 || pstr->Buffer == 0) {
                    text.sz = D_0029557C;
                    textlen = strlen(text.sz);
                } else {
                    if (flags & OUTA_FL_WIDECHAR) {
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
                if (!(flags & (OUTA_FL_SHORT | OUTA_FL_LONG | OUTA_FL_WIDECHAR)))
                    flags |= OUTA_FL_WIDECHAR;
            case 's': {
                int i;
                char *p;
                unsigned short *pwch;
                i = (precision == -1) ? 0x7fffffff : precision;
                text.sz = (char *)outa_get_ptr_arg(&argptr);
                if (flags & (OUTA_FL_LONG | OUTA_FL_WIDECHAR)) {
                    if (text.wz == 0)
                        text.wz = D_00295584;
                    bufferiswide = 1;
                    pwch = text.wz;
                    while (i-- && *pwch)
                        ++pwch;
                    textlen = pwch - text.wz;
                } else {
                    if (text.sz == 0)
                        text.sz = D_0029557C;
                    p = text.sz;
                    while (i-- && *p)
                        ++p;
                    textlen = p - text.sz;
                }
                break;
            }
            case 'n': {
                void *p = outa_get_ptr_arg(&argptr);
                if (flags & OUTA_FL_SHORT)
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
                CrtDouble_001EDD36 tmp;
                flags |= OUTA_FL_SIGNED;
                text.sz = buffer;
                if (precision < 0)
                    precision = 6;
                else if (precision == 0 && ch == 'g')
                    precision = 1;
                else if (precision > OUTA_BUFFERSIZE)
                    precision = OUTA_BUFFERSIZE;
                if (precision > OUTA_BUFFERSIZE - OUTA_CVTBUFSIZE) {
                    heapbuf = (char *)func_001E8AA5(OUTA_CVTBUFSIZE + precision);
                    if (heapbuf != 0)
                        text.sz = heapbuf;
                    else
                        precision = OUTA_BUFFERSIZE - OUTA_CVTBUFSIZE;
                }
                tmp = *(CrtDouble_001EDD36 *)((argptr += 8) - 8);
                (*D_002AEA14)(&tmp, text.sz, ch, precision, capexp);
                if ((flags & OUTA_FL_ALTERNATE) && precision == 0)
                    (*D_002AEA20)(text.sz);
                if (ch == 'g' && !(flags & OUTA_FL_ALTERNATE))
                    (*D_002AEA18)(text.sz);
                if (*text.sz == '-') {
                    flags |= OUTA_FL_NEGATIVE;
                    ++text.sz;
                }
                textlen = strlen(text.sz);
                break;
            }
            case 'd':
            case 'i':
                flags |= OUTA_FL_SIGNED;
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
                if (flags & OUTA_FL_ALTERNATE) {
                    prefix[0] = '0';
                    prefix[1] = (char)('x' - 'a' + '9' + 1 + hexadd);
                    prefixlen = 2;
                }
                goto COMMON_INT;
            case 'o':
                radix = 8;
                if (flags & OUTA_FL_ALTERNATE)
                    flags |= OUTA_FL_FORCEOCTAL;
            COMMON_INT: {
                unsigned __int64 number;
                int digit;
                __int64 l;
                if (flags & OUTA_FL_I64) {
                    l = *(__int64 *)argptr;
                    argptr += 8;
                } else if (flags & OUTA_FL_SHORT) {
                    if (flags & OUTA_FL_SIGNED)
                        l = (short)outa_get_int_arg(&argptr);
                    else
                        l = (unsigned short)outa_get_int_arg(&argptr);
                } else {
                    if (flags & OUTA_FL_SIGNED)
                        l = outa_get_int_arg(&argptr);
                    else
                        l = (unsigned int)outa_get_int_arg(&argptr);
                }
                if ((flags & OUTA_FL_SIGNED) && l < 0) {
                    number = -l;
                    flags |= OUTA_FL_NEGATIVE;
                } else {
                    number = l;
                }
                if ((flags & OUTA_FL_I64) == 0)
                    number &= 0xffffffff;
                if (precision < 0) {
                    precision = 1;
                } else {
                    flags &= ~OUTA_FL_LEADZERO;
                    if (precision > OUTA_BUFFERSIZE)
                        precision = OUTA_BUFFERSIZE;
                }
                if (number == 0)
                    prefixlen = 0;
                text.sz = &buffer[OUTA_BUFFERSIZE - 1];
                while (precision-- > 0 || number != 0) {
                    digit = (int)(number % radix) + '0';
                    number /= radix;
                    if (digit > '9')
                        digit += hexadd;
                    *text.sz-- = (char)digit;
                }
                textlen = (int)&buffer[OUTA_BUFFERSIZE - 1] - (int)text.sz;
                ++text.sz;
                if (flags & OUTA_FL_FORCEOCTAL) {
                    if (*text.sz != '0' || textlen == 0) {
                        *--text.sz = '0';
                        ++textlen;
                    }
                }
                break;
            }
            }
            if (!no_output) {
                if (flags & OUTA_FL_SIGNED) {
                    if (flags & OUTA_FL_NEGATIVE) {
                        prefix[0] = '-';
                        prefixlen = 1;
                    } else if (flags & OUTA_FL_SIGN) {
                        prefix[0] = '+';
                        prefixlen = 1;
                    } else if (flags & OUTA_FL_SIGNSP) {
                        prefix[0] = ' ';
                        prefixlen = 1;
                    }
                }
                padding = fldwidth - prefixlen - textlen;
                if (!(flags & (OUTA_FL_LEFT | OUTA_FL_LEADZERO)))
                    func_001EDCDB(' ', padding, stream, &charsout);
                func_001EDCFF(prefix, prefixlen, stream, &charsout);
                if ((flags & OUTA_FL_LEADZERO) && !(flags & OUTA_FL_LEFT))
                    func_001EDCDB('0', padding, stream, &charsout);
                if (bufferiswide && textlen > 0) {
                    unsigned short *p = text.wz;
                    int retval;
                    char mbbuf[8];
                    int i = textlen;
                    while (i--) {
                        retval = func_001F58AA(mbbuf, *p++);
                        if (retval <= 0)
                            break;
                        func_001EDCFF(mbbuf, retval, stream, &charsout);
                    }
                } else {
                    func_001EDCFF(text.sz, textlen, stream, &charsout);
                }
                if (flags & OUTA_FL_LEFT)
                    func_001EDCDB(' ', padding, stream, &charsout);
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

int func_001EE4BD(int fh, int pos, int mthd)
{
    int handle;
    int newpos;
    int err;

    handle = func_001EE6CE(fh);
    if (handle == -1) {
        *func_001ED075() = 9;
        return -1;
    }
    newpos = func_001DD3A1(handle, pos, 0, mthd);
    if (newpos == -1) {
        err = func_001DD603();
    } else {
        err = 0;
    }
    if (err != 0) {
        func_001ED087(err);
        return -1;
    }
    *((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) &= 0xfd;
    return newpos;
}

void func_001EE5B6(void);
int func_001EE52F(int fh, int pos, int mthd)
{
    int retval;
    if ((unsigned int)fh >= D_002FB240 ||
        ((((S_Ioinfo *)D_002FB260[fh >> 5]) + (fh & 0x1f))->osfile & 1) == 0) {
        *func_001ED075() = 9;
        *func_001ED07E() = 0;
        return -1;
    }
    func_001EE70F(fh);
    __try {
        if ((((S_Ioinfo *)D_002FB260[fh >> 5]) + (fh & 0x1f))->osfile & 1) {
            retval = func_001EE4BD(fh, pos, mthd);
        } else {
            *func_001ED075() = 9;
            *func_001ED07E() = 0;
            retval = -1;
        }
    } __finally {
        func_001EE782(fh);
    }
    return retval;
}

void func_001EE5B6(void)
{
    func_001EE782(0);
}

int func_001EE5BE(void)
{
    int *func_001ED075(void);
    int *func_001ED07E(void);
    void func_001EAB1B(void);
    *func_001ED075() = 9;
    *func_001ED07E() = 0;
    func_001EAB1B();
    return -1;
}

int func_001EE5DA(void)
{
    S_Ioinfo *p = (S_Ioinfo *)func_001E8AA5(0x500);
    int i;

    if (p == 0)
        return -1;
    D_002FB260[0] = (int *)p;
    D_002FB240 = 0x20;
    for (; p < (S_Ioinfo *)((char *)D_002FB260[0] + 0x500); p++) {
        p->osfile = 0;
        p->osfhnd = -1;
        p->lockinitflag = 0;
        p->pipech = 10;
    }
    i = 0;
    while (i < 0x78) {
        S_Ioinfo *q = (S_Ioinfo *)D_002FB260[0];
        q = (S_Ioinfo *)((char *)q + i);
        i += 0x28;
        q->osfile = 0xc1;
    }
    return 0;
}

int func_001EE63F(int fh, int value)
{
    if ((unsigned int)fh < D_002FB240 && *(int *)((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28) == -1) {
        *(int *)((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28) = value;
        return 0;
    }
    *func_001ED075() = 9;
    *func_001ED07E() = 0;
    return -1;
}

int func_001EE685(int fh)
{
    if ((unsigned int)fh < D_002FB240 &&
        (*((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) & 1) != 0 &&
        *(int *)((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28) != -1) {
        *(int *)((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28) = -1;
        return 0;
    }
    *func_001ED075() = 9;
    *func_001ED07E() = 0;
    return -1;
}

int func_001EE6CE(int fh)
{
    if ((unsigned int)fh < D_002FB240 &&
        (*((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) & 1) != 0) {
        return *(int *)((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28);
    }
    *func_001ED075() = 9;
    *func_001ED07E() = 0;
    return -1;
}

int func_001EE70F(int fh)
{
    char *p;

    p = (char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28;
    if (*(int *)(p + 8) == 0) {
        func_001EB390(10);
        if (*(int *)(p + 8) == 0) {
            if (func_001F44EF(p + 0xc, 4000) == 0) {
                func_001EB302(10);
                return 0;
            }
            (*(int *)(p + 8))++;
        }
        func_001EB302(10);
    }
    _imp__RtlEnterCriticalSection((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 0xc);
    return 1;
}

void func_001EE782(int fh)
{
    _imp__RtlLeaveCriticalSection((char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 0xc);
}

int func_001EE7A4(void)
{
    int fh = -1;
    int i;
    int base;
    int **table;
    S_Ioinfo *p;
    void *cs;

    if (!func_001EB314(11)) {
        return fh;
    }
    func_001EB390(11);
    base = 0;
    i = 0;
    table = D_002FB260;
    do {
        if (!*table) {
            break;
        }
        for (p = (S_Ioinfo *)*table; p < (S_Ioinfo *)*table + 32; ++p) {
            if (!(p->osfile & 1)) {
                if (!p->lockinitflag) {
                    func_001EB390(10);
                    if (!p->lockinitflag) {
                        if (!func_001F44EF(p->padC, 4000)) {
                            func_001EB302(10);
                            fh = -1;
                            goto done;
                        }
                        ++p->lockinitflag;
                    }
                    func_001EB302(10);
                }
                cs = p->padC;
                _imp__RtlEnterCriticalSection(cs);
                if (!(p->osfile & 1)) {
                    p->osfhnd = -1;
                    fh = (p - (S_Ioinfo *)*table) + base;
                    break;
                }
                _imp__RtlLeaveCriticalSection(cs);
            }
        }
        if (fh != -1) {
            goto done;
        }
        base += 32;
        ++i;
        ++table;
    } while ((int)table < (int)D_002FB360);
    if ((int)table < (int)D_002FB360) {
        p = (S_Ioinfo *)func_001E8AA5(0x500);
        if (p) {
            D_002FB240 += 32;
            D_002FB260[i] = (int *)p;
            for (; p < (S_Ioinfo *)D_002FB260[i] + 32; ++p) {
                p->osfile = 0;
                p->osfhnd = -1;
                p->lockinitflag = 0;
                p->pipech = 10;
            }
            fh = i << 5;
            if (!func_001EE70F(fh)) {
                fh = -1;
            }
        }
    }
done:
    func_001EB302(11);
    return fh;
}

int func_001EE8F1(int fh)
{
    int retval;

    if ((unsigned int)fh >= D_002FB240 ||
        (((S_Ioinfo *)D_002FB260[fh >> 5] + (fh & 0x1f))->osfile & 1) == 0) {
        *func_001ED075() = 9;
        return -1;
    }
    func_001EE70F(fh);
    __try {
        if (((S_Ioinfo *)D_002FB260[fh >> 5] + (fh & 0x1f))->osfile & 1) {
            if (func_001DD563(func_001EE6CE(fh)) == 0) {
                retval = func_001DD603();
            } else {
                retval = 0;
            }
            if (retval == 0) {
                goto done;
            }
            *func_001ED07E() = retval;
        }
        *func_001ED075() = 9;
        retval = -1;
done:
        ;
    } __finally {
        func_001EE782(fh);
    }
    return retval;
}

void func_001EE98F(void)
{
    func_001EE782(0);
}

int func_001EE997(void)
{
    int __fastcall func_001EAB1B(int);
    *func_001ED075() = 9;
    return func_001EAB1B(-1);
}

void __fastcall func_001EE9AB(S_001EE9AB *list, int unused)
{
    if (list->f4 != 0) {
        while ((list->fC = list->f8) != 0) {
            list->f8 = (void **)*list->fC;
            list->f4(list->fC);
        }
    }
}

int func_001EE9D1(void)
{
    if (!*D_002F6A28)
        return 0;
    else if ((*D_002F6A28 >= '0') && (*D_002F6A28 <= '9'))
        return (unsigned long)(*(D_002F6A28++) - '0') + 1;
    else {
        unsigned long dim = 0;

        while (*D_002F6A28 != '@') {
            if (!*D_002F6A28)
                return 0;
            else if ((*D_002F6A28 >= 'A') && (*D_002F6A28 <= 'P'))
                dim = (dim << 4) + (*(D_002F6A28++) - 'A');
            else
                return -1;
        }
        if (*(D_002F6A28++) != '@')
            return -1;
        else
            return dim;
    }
}

