/* 26 functions from 0x001EB1B0 to 0x001EBA57, found by Ghidra. */
#include "common.h"

/* CRT lock table entry: lock is a CRITICAL_SECTION*, kind 1 = preallocated.
   The original code refers to the kind column (D_002AE8F4) and to the end of
   the table (D_002AEA10) by address of their own. */
struct S_LockEntry {
    void *lock;
    int kind;
};
extern S_LockEntry D_002AE8F0[36];
extern S_LockEntry D_002AE8F4[36];
extern S_LockEntry D_002AEA10[];

/* preallocated CRITICAL_SECTIONs (0x1c bytes each) */
struct S_CritSect {
    char pad[0x1c];
};
extern S_CritSect D_002F6860[];

extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);
extern "C" int __cdecl func_001F44EF(void *cs, int spinCount);
void func_001E8390(void *p);

/* CRT stdio FILE: read pointer and remaining count. */
struct S_File {
    char *ptr;
    int cnt;
};

/* _CRT_DOUBLE / _CRT_FLOAT: copied by value into scanf's output. */
struct S_CrtDouble {
    double x;
};
struct S_CrtFloat {
    float f;
};

extern int D_002AEA38;
extern unsigned short *D_002AEA30;
extern char D_002AEA3C;

int __cdecl func_001ED552(S_File *f);
int __cdecl func_001E8D25(int c);
int __cdecl func_001EC5F1(int c, int mask);
int __cdecl func_001F4874(S_CrtDouble *out, char *str);
int __cdecl func_001F48A1(S_CrtFloat *out, char *str);

/* float-to-text converters behind func_001EB786 (_cftoe, _cftof, _cftog) */
char *__cdecl func_001EB5A0(double *arg, char *buffer, int precision, int caps);
char *__cdecl func_001EB6A7(double *arg, char *buffer, int precision);
void __cdecl func_001EB6F9(double *arg, char *buffer, int precision, int caps);

/* per-thread CRT data (_tiddata), only the fields the startup code touches */
struct S_Tiddata {
    unsigned long tid;
    unsigned long thandle;
    char pad8[0xc];
    long holdrand;
    char pad18[0x3c];
    void *pxcptacttab;
    char pad58[0x2c];
};

extern "C" unsigned long __readfsdword(unsigned long Offset);
extern "C" unsigned char __readfsbyte(unsigned long Offset);
#pragma intrinsic(__readfsdword)
#pragma intrinsic(__readfsbyte)

extern "C" void (__stdcall *_imp__KeBugCheck)(unsigned long code);

/* thread-local block: fs:[4] points at an array of these, indexed by the TLS index */
struct S_TlsBlock {
    int pad0[2];
    S_Tiddata *ptd;
};

extern volatile unsigned long D_002F41D0;
extern S_Tiddata *D_002FB360;
extern char D_002AEDD8[];
extern char D_002F69F0[];
extern volatile int D_002F69F8;

extern "C" S_Tiddata *__cdecl func_001EA1A1(unsigned int num, unsigned int size);
extern "C" unsigned long __cdecl func_001DE935(void);
void __stdcall func_001DE7E6(void *node, int add);

/* new-handler installed by set_new_handler, called by _callnewh */
extern "C" int (__cdecl *D_002F69E8)(unsigned int size);
extern "C" void *__cdecl func_001E8AA5(unsigned int size);
extern "C" int *__cdecl func_001ED075(void);
extern "C" void __cdecl func_001EB9F3(int rterrnum);
extern "C" unsigned int __cdecl func_001F4BC8(unsigned int newv, unsigned int mask);
extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void *cs);
void __cdecl func_001EB390(int locknum);
int __cdecl func_001EB314(int locknum);

/* _strflt: result of the float-to-digits conversion */
struct S_StrFlt {
    int sign;
    int decpt;
    int flag;
    char *mantissa;
};

/* "e+000" copied as 4 + 2 bytes */
struct S_ExpStr {
    char s[6];
};
extern S_ExpStr D_00295024;

extern "C" S_StrFlt *__cdecl func_001F4A07(double x, S_StrFlt *flt, char *resultstr);
extern "C" void __cdecl func_001F48CE(char *buf, int digits, S_StrFlt *pflt);
extern "C" void *__cdecl func_001EA6A0(void *dst, const void *src, unsigned int n);
extern "C" void __cdecl func_001F4EB7(void);
extern "C" void __cdecl func_001F4E8B(int rterrnum);
extern "C" void (__cdecl *D_002AEA2C)(int code);
extern "C" unsigned int strlen(const char *s);
#pragma intrinsic(strlen)
extern "C" void *memset(void *dst, int c, unsigned int n);
#pragma intrinsic(memset)

/* _MCW_PC / _PC_53: the original takes these two by address */
extern "C" int D_00010000;
extern "C" int D_00030000;

#pragma optimize("sy", on)
int __cdecl func_001EB290(void)
{
    int locknum;
    S_CritSect *pcs;

    locknum = 0;
    pcs = D_002F6860;
    for (; locknum < 36; locknum++) {
        if (D_002AE8F4[locknum].lock == (void *)1) {
            D_002AE8F0[locknum].lock = pcs;
            pcs++;
            if (!func_001F44EF(D_002AE8F0[locknum].lock, 4000)) {
                D_002AE8F0[locknum].lock = 0;
                return 0;
            }
        }
    }
    return 1;
}

void __cdecl func_001EB2D9(void)
{
    S_LockEntry *p = D_002AE8F0;

    do {
        if (p->lock != 0 && p->kind != 1) {
            func_001E8390(p->lock);
            p->lock = 0;
        }
        p++;
    } while ((int)p < (int)D_002AEA10);
}

void __cdecl func_001EB302(int locknum)
{
    _imp__RtlLeaveCriticalSection(((void **)D_002AE8F0)[locknum * 2]);
}

int __cdecl func_001EB314(int locknum)
{
    void *pcs;

    if (D_002AE8F0[locknum].lock != 0)
        return 1;
    pcs = func_001E8AA5(0x1c);
    if (pcs == 0) {
        *func_001ED075() = 12;
        return 0;
    }
    func_001EB390(10);
    if (D_002AE8F0[locknum].lock == 0) {
        if (!func_001F44EF(pcs, 4000)) {
            func_001E8390(pcs);
            func_001EB302(10);
            *func_001ED075() = 12;
            return 0;
        }
        D_002AE8F0[locknum].lock = pcs;
    } else {
        func_001E8390(pcs);
    }
    func_001EB302(10);
    return 1;
}

void __cdecl func_001EB390(int locknum)
{
    if (D_002AE8F0[locknum].lock == 0) {
        if (!func_001EB314(locknum))
            func_001EB9F3(17);
    }
    _imp__RtlEnterCriticalSection(D_002AE8F0[locknum].lock);
}

int __cdecl func_001EB3BE(unsigned int size)
{
    if (D_002F69E8 != 0 && (*D_002F69E8)(size) != 0)
        return 1;
    return 0;
}

void __cdecl func_001EB3D9(char *buffer)
{
    char ch;

    if (func_001E8D25(*buffer) != 'e') {
        do {
            buffer++;
        } while (D_002AEA38 > 1 ? func_001EC5F1(*buffer, 4) : (*(unsigned char *)&D_002AEA30[*buffer] & 4));
    }
    ch = *buffer;
    *buffer++ = D_002AEA3C;
    do {
        char ch2 = *buffer;
        *buffer = ch;
        ch = ch2;
    } while (*buffer++);
}

void __cdecl func_001EB431(char *buf)
{
    char *stop;

    while (*buf && *buf != D_002AEA3C) {
        buf++;
    }
    if (*buf++) {
        while (*buf && *buf != 'e' && *buf != 'E') {
            buf++;
        }
        stop = buf--;
        while (*buf == '0') {
            buf--;
        }
        if (*buf == D_002AEA3C) {
            buf--;
        }
        while ((*++buf = *stop++) != '\0') {
        }
    }
}

void __cdecl func_001EB496(int flag, char *argument, char *number)
{
    S_CrtDouble dblval;
    S_CrtFloat fltval;

    if (flag) {
        func_001F4874(&dblval, number);
        *(S_CrtDouble *)argument = dblval;
    } else {
        func_001F48A1(&fltval, number);
        *(S_CrtFloat *)argument = fltval;
    }
}

static __declspec(noinline) void func_001EB4D4(char *s, int dist)
{
    if (dist != 0) {
        func_001EA6A0(s + dist, s, strlen(s) + 1);
    }
}

static __declspec(noinline) char *func_001EB4F7(char *buf, int ndec, int caps, S_StrFlt *pflt, char g_fmt)
{
    char *p;
    char *q;
    int expo;

    if (g_fmt) {
        func_001EB4D4(buf + (pflt->sign == '-'), ndec > 0);
    }
    p = buf;
    if (pflt->sign == '-') {
        *p++ = '-';
    }
    if (ndec > 0) {
        *p = *(p + 1);
        p++;
        *p = D_002AEA3C;
    }
    q = p + ndec + (g_fmt == 0);
    *(S_ExpStr *)q = D_00295024;
    if (caps) {
        *q = 'E';
    }
    q++;
    if (*pflt->mantissa != '0') {
        expo = pflt->decpt - 1;
        if (expo < 0) {
            expo = -expo;
            *q = '-';
        }
        q++;
        if (expo >= 100) {
            *q += (char)(expo / 100);
            expo %= 100;
        }
        q++;
        if (expo >= 10) {
            *q += (char)(expo / 10);
            expo %= 10;
        }
        *++q += (char)expo;
    }
    return buf;
}

char *__cdecl func_001EB5A0(double *pvalue, char *buf, int ndec, int caps)
{
    typedef S_StrFlt *(__cdecl *Fltout2Fn)(S_CrtDouble, S_StrFlt *, char *);
    char resultstr[24];
    S_StrFlt flt;

    ((Fltout2Fn)func_001F4A07)(*(S_CrtDouble *)pvalue, &flt, resultstr);
    func_001F48CE(buf + (flt.sign == '-') + (ndec > 0), ndec + 1, &flt);
    func_001EB4F7(buf, ndec, caps, &flt, 0);
    return buf;
}

static __declspec(noinline) char *func_001EB600(S_StrFlt *pflt, char *buf, int ndec, char g_fmt)
{
    char *p;
    int dist;
    int expo;
    int pad;

    expo = pflt->decpt - 1;
    if (g_fmt && expo == ndec) {
        p = (char *)((pflt->sign == '-') + expo + buf);
        *p = '0';
        p[1] &= 0;
    }
    p = buf;
    if (pflt->sign == '-') {
        *p = '-';
        p++;
    }
    dist = 1;
    if (pflt->decpt <= 0) {
        func_001EB4D4(p, dist);
        *p = '0';
        p++;
    } else {
        p += pflt->decpt;
    }
    if (ndec > 0) {
        func_001EB4D4(p, dist);
        *p = D_002AEA3C;
        p++;
        pad = pflt->decpt;
        if (pad < 0) {
            pad = -pad;
            if (g_fmt || ndec >= pad) {
                ndec = pad;
            }
            dist = ndec;
            func_001EB4D4(p, dist);
            memset(p, '0', dist);
        }
    }
    return buf;
}

char *__cdecl func_001EB6A7(double *arg, char *buffer, int precision)
{
    typedef S_StrFlt *(__cdecl *Fltout2Fn)(S_CrtDouble, S_StrFlt *, char *);
    S_StrFlt flt;
    char resultstr[24];

    ((Fltout2Fn)func_001F4A07)(*(S_CrtDouble *)arg, &flt, resultstr);
    func_001F48CE(buffer + (flt.sign == '-'), flt.decpt + precision, &flt);
    func_001EB600(&flt, buffer, precision, 0);
    return buffer;
}

void __cdecl func_001EB6F9(double *arg, char *buffer, int precision, int caps)
{
    typedef S_StrFlt *(__cdecl *Fltout2Fn)(S_CrtDouble, S_StrFlt *, char *);
    S_StrFlt flt;
    char resultstr[24];
    char *p;
    char c;
    int oldexpo;
    int expo;
    char shorter;

    ((Fltout2Fn)func_001F4A07)(*(S_CrtDouble *)arg, &flt, resultstr);
    oldexpo = flt.decpt - 1;
    p = buffer + (flt.sign == '-');
    func_001F48CE(p, precision, &flt);
    expo = flt.decpt - 1;
    shorter = (char)(oldexpo < expo);
    if (expo < -4 || expo >= precision) {
        func_001EB4F7(buffer, precision, caps, &flt, 1);
    } else {
        if (shorter) {
            do {
                c = *p++;
            } while (c != 0);
            p[-2] &= c;
        }
        func_001EB600(&flt, buffer, precision, 1);
    }
}

void __cdecl func_001EB786(double *arg, char *buffer, int format, int precision, int caps)
{
    if (format == 'e' || format == 'E') {
        func_001EB5A0(arg, buffer, precision, caps);
    } else if (format == 'f') {
        func_001EB6A7(arg, buffer, precision);
    } else {
        func_001EB6F9(arg, buffer, precision, caps);
    }
}

#pragma optimize("y", on)

void __cdecl func_001EB7D7(void)
{
    func_001F4BC8((unsigned int)&D_00010000, (unsigned int)&D_00030000);
}

S_Tiddata * __cdecl func_001EB7E9(void)
{
    S_Tiddata **slot;
    S_Tiddata *ptd;
    S_TlsBlock **base;
    unsigned long idx;

    if (__readfsbyte(0x24) >= 2) {
        _imp__KeBugCheck(10);
    }
    if (*(int *)(__readfsdword(0x28) + 0x28) != 0) {
        idx = D_002F41D0;
        base = (S_TlsBlock **)__readfsdword(4);
        slot = &base[idx]->ptd;
    } else {
        slot = &D_002FB360;
    }
    ptd = *slot;
    if (ptd == 0) {
        ptd = func_001EA1A1(1, 0x84);
        if (ptd != 0) {
            *slot = ptd;
            ptd->pxcptacttab = D_002AEDD8;
            ptd->holdrand = 1;
            ptd->tid = func_001DE935();
            ptd->thandle = (unsigned long)-1;
        } else {
            func_001EB9F3(0x10);
        }
    }
    return ptd;
}

void func_001EB977(void) {
    int func_001EB302(...);
    func_001EB302(13);
}

int __cdecl func_001EB980(void)
{
    S_Tiddata *ptd;
    int *tls;
    unsigned long idx;
    int **base;

    if (func_001EB290() == 0) {
        func_001EB2D9();
        return 0;
    }
    ptd = func_001EA1A1(1, 0x84);
    idx = D_002F41D0;
    base = (int **)__readfsdword(4);
    tls = base[idx];
    tls[2] = (int)ptd;
    if (ptd == 0) {
        ptd->pxcptacttab = D_002AEDD8;
        ptd->holdrand = 1;
    }
    ptd->tid = func_001DE935();
    ptd->thandle = (unsigned long)-1;
    D_002F69F8 = 0;
    func_001DE7E6(D_002F69F0, 1);
    return 0;
}

void __cdecl func_001EB9F3(int rterrnum)
{
    func_001F4EB7();
    func_001F4E8B(rterrnum);
    D_002AEA2C(0xff);
}

int __fastcall func_001EBA0F(int unused, int c)
{
    int digit;

    if (D_002AEA38 > 1) {
        digit = func_001EC5F1(c, 4);
    } else {
        digit = *(unsigned char *)&D_002AEA30[c] & 4;
    }
    if (digit == 0) {
        c = (c & ~0x20) - 7;
    }
    return c;
}

int __fastcall func_001EBA41(int unused, S_File *f)
{
    if (--f->cnt >= 0) {
        return (unsigned char)*f->ptr++;
    }
    return func_001ED552(f);
}

