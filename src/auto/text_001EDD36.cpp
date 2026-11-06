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
    unsigned long lo;
    unsigned long hi;
};
extern void (*D_002AEA14)(CrtDouble_001EDD36 *, char *, int, int, int);
extern void (*D_002AEA18)(char *);
extern void (*D_002AEA20)(char *);
/* Never defined or called: func_001EDD36 mentions it in a dead `if (0)` so format and argptr stay in memory. */
void func_unused_001EDD36(void *, void *);

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

int func_001EE52F(int fh, int pos, int mthd)
{
    int retval;

    if ((unsigned int)fh >= D_002FB240 ||
        (*((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) & 1) == 0) {
        *func_001ED075() = 9;
        *func_001ED07E() = 0;
        return -1;
    }
    func_001EE70F(fh);
    __try {
        if (*((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) & 1) {
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
    void *func_001E8AA5(int size);
    S_Ioinfo *p;
    char *r;
    int i;

    p = (S_Ioinfo *)func_001E8AA5(0x500);
    if (p == 0) {
        return -1;
    }
    D_002FB260[0] = (int *)p;
    D_002FB240 = 0x20;
    for (; p < (S_Ioinfo *)D_002FB260[0] + 32; p++) {
        p->osfile = 0;
        p->osfhnd = -1;
        p->lockinitflag = 0;
        p->pipech = 10;
    }
    i = 0;
    do {
        r = (char *)D_002FB260[0] + i;
        i += 0x28;
        r[4] = 0xc1;
    } while (i < 0x78);
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

