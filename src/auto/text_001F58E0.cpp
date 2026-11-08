/* 18 functions from 0x001F58E0 to 0x001F63F6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct S_001F5975_Record {
    int code;
    int flags;
    void *record;
    void *address;
    int numParams;
    int info[15];
};

struct S_001F5975_Pointers {
    S_001F5975_Record *record;
    void *context;
};

typedef int (__stdcall *PFN_001F5975)(S_001F5975_Pointers *);

extern PFN_001F5975 D_002F6A70;
PFN_001F5975 __stdcall func_001DE7D4(PFN_001F5975 filter);
int __stdcall func_001F5975(S_001F5975_Pointers *pointers);
void func_001F6292(void);
int func_001F627B(PFN_001F5975 fn);

struct S_Ld12_001F60E2 {
    unsigned short exp;
    unsigned short mant[5];
};

extern S_Ld12_001F60E2 D_002AF038[];
extern S_Ld12_001F60E2 D_002AF198[];
void __cdecl func_001F5EC0(S_Ld12_001F60E2 *dst, S_Ld12_001F60E2 *src);

struct S_Ptd_001F6292 {
    char pad0[0x68];
    void (__cdecl *pterminate)(void);
};

S_Ptd_001F6292 *func_001EB7E9(void);
extern "C" void (__stdcall *_imp__KeBugCheck)(unsigned long code);

static __declspec(noreturn) void KeBugCheck_001F6292(unsigned long code)
{
    _imp__KeBugCheck(code);
    __debugbreak();
}
int __stdcall func_001F655B(PFN_001F5975 fn);

/* 96-bit unsigned integer, least significant word first */
struct S_U12 {
    unsigned int l[3];
};

extern char D_0000FFFF[];
extern char D_0001FFFF[];

extern "C" char *strcpy(char *dst, const char *src);
#pragma intrinsic(strcpy)
void __cdecl func_001F60E2(S_Ld12_001F60E2 *dst, int pow, unsigned int mult12);

/* 12-byte extended value: the 10 bytes of a long double at +2, two zero bytes below */
#pragma pack(push, 2)
struct S_I10_Ld12 {
    unsigned short w0;
    unsigned long lo;
    unsigned long hi;
    unsigned short exp;
};
#pragma pack(pop)

/* the long double the converter takes by value: 10 bytes padded to 12 */
struct S_I10_Ld {
    unsigned long lo;
    unsigned long hi;
    unsigned long se;
};

/* the digit string the converter fills in */
struct S_I10_Fos {
    short exp;
    char sign;
    char manlen;
    char man[24];
};
extern char D_00018000[];
/* the special-value strings ("1#QNAN", "1#INF", "1#IND", "1#SNAN") with their NULs */
struct S_I10_Str6 { char c[6]; };
struct S_I10_Str7 { char c[7]; };
extern char D_00296334[]; /* "1#QNAN" */
extern char D_0029633C[]; /* "1#INF" */
extern char D_00296344[]; /* "1#IND" */
extern char D_0029634C[]; /* "1#SNAN" */
void func_001F5B20(S_U12 *p);
void func_001F5B4E(S_U12 *p);

int func_001F5AA1(unsigned int a, unsigned int b, unsigned int *out);

struct S_001F59DC_FILE {
    char *ptr;
    int cnt;
    char *base;
    int flag;
    int file;
};

extern char *D_002FB260[];
extern char D_002AEC40[];
int func_001F58AA(char *mb, unsigned short wc);
int *func_001ED075(void);
int func_001ED8A7(int ch, S_001F59DC_FILE *stream);
int func_001F62CE(int wc, S_001F59DC_FILE *stream);

#pragma optimize("sy", on)
#pragma optimize("sy", on)
unsigned __int64 __stdcall func_001F58E0(unsigned __int64 dividend, unsigned __int64 divisor)
{
    return dividend / divisor;
}

int __stdcall func_001F5975(S_001F5975_Pointers *pointers)
{
    S_001F5975_Record *rec = pointers->record;
    if (rec->code == 0xe06d7363 && rec->numParams == 3 && rec->info[0] == 0x19930520) {
        func_001F6292();
    }
    if (D_002F6A70 != 0 && func_001F627B(D_002F6A70) != 0) {
        return D_002F6A70(pointers);
    }
    return 0;
}

undefined4 func_001F59BB(void)
{
  D_002F6A70 = func_001DE7D4(&func_001F5975);
  return 0;
}

#pragma optimize("sy", on)
PFN_001F5975 func_001F59CD(void)
{
    return func_001DE7D4(D_002F6A70);
}
int func_001F59D9(void) {
    return 0;
}

unsigned short func_001F59DC(unsigned short wc, S_001F59DC_FILE *stream)
{
    if (!(stream->flag & 0x40)) {
        char *info = stream->file != -1 ? D_002FB260[stream->file >> 5] + (stream->file & 0x1f) * 0x28 : D_002AEC40;
        if (info[4] & 0x80) {
            char mb[8];
            int size = func_001F58AA(mb, wc);
            int i;
            if (size == -1) {
                *func_001ED075() = 0x2a;
                return 0xffff;
            }
            for (i = 0; i < size; i++) {
                if ((--stream->cnt >= 0 ? 0xff & (*stream->ptr++ = mb[i]) : func_001ED8A7(mb[i], stream)) == -1) {
                    return 0xffff;
                }
            }
            return wc;
        }
    }
    if ((stream->cnt -= 2) >= 0) {
        *(unsigned short *)stream->ptr = wc;
        stream->ptr += 2;
        return wc;
    }
    return func_001F62CE(wc, stream);
}

#pragma optimize("sy", on)
int func_001F5AA1(unsigned int a, unsigned int b, unsigned int *out)
{
    unsigned int sum = a + b;
    int overflow = 0;
    if (sum < a || sum < b) {
        overflow = 1;
    }
    *out = sum;
    return overflow;
}

int func_001F5AC2(S_U12 *a, S_U12 *b)
{
    if (func_001F5AA1(a->l[0], b->l[0], &a->l[0])) {
        if (func_001F5AA1(a->l[1], 1, &a->l[1])) {
            a->l[2]++;
        }
    }
    if (func_001F5AA1(a->l[1], b->l[1], &a->l[1])) {
        a->l[2]++;
    }
    return func_001F5AA1(a->l[2], b->l[2], &a->l[2]);
}

void func_001F5B20(S_U12 *p)
{
    unsigned int c0 = p->l[0] >> 31;
    unsigned int c1 = p->l[1] >> 31;

    p->l[0] += p->l[0];
    p->l[1] = (p->l[1] << 1) | c0;
    p->l[2] = (p->l[2] << 1) | c1;
}

#pragma optimize("t", on)
void func_001F5B4E(S_U12 *p)
{
    volatile unsigned int *l = p->l;
    unsigned int t = l[1];
    unsigned int l2 = l[2];
    unsigned int c1 = t << 31;
    unsigned int c2 = l2 << 31;
    t = (t >> 1) | c2;
    l[1] = t;
    t = (l[0] >> 1) | c1;
    l[2] = l2 >> 1;
    l[0] = t;
}
#pragma optimize("s", on)
extern char D_0000FFF0[];
void func_001F5B7B(char *s, unsigned int n, S_U12 *x)
{
    unsigned int exp = 0x404e;
    x->l[0] = 0; x->l[1] = 0; x->l[2] = 0;
    for (; n > 0; n--) {
        S_U12 t = *x;
        func_001F5B20(x); func_001F5B20(x); func_001F5AC2(x, &t); func_001F5B20(x);
        t.l[0] = *s; t.l[1] = 0; t.l[2] = 0; func_001F5AC2(x, &t); s++;
    }
    while (x->l[2] == 0) {
        x->l[2] = x->l[1] >> 16;
        x->l[1] = (x->l[1] << 16) | (x->l[0] >> 16);
        x->l[0] <<= 16;
        exp += (unsigned int)D_0000FFF0;
    }
    while (!(x->l[2] & 0x8000)) { func_001F5B20(x); exp += (unsigned int)D_0000FFFF; }
    *(unsigned short *)((char *)x + 10) = (unsigned short)exp;
}

#pragma optimize("a", on)
int __cdecl func_001F5C49(unsigned long lo, unsigned long hi, unsigned long se, int ndigits, unsigned int flags, S_I10_Fos *fos)
{
    struct L_I10 { S_U12 tmp; unsigned char tenth[12]; S_I10_Ld12 ld12; int cnt; int retval; } L;
    int cnt8;
    int nd;
    unsigned long *plo = &lo;
    char *p;
    char *r;
    char *man;
    char c;
    int e;
    int n;
    short decexp;
    unsigned short sign;
    unsigned short expn;

    L.tenth[0] = 0xcc; L.tenth[1] = 0xcc; L.tenth[2] = 0xcc; L.tenth[3] = 0xcc;
    L.tenth[4] = 0xcc; L.tenth[5] = 0xcc; L.tenth[6] = 0xcc; L.tenth[7] = 0xcc;
    L.tenth[8] = 0xcc; L.tenth[9] = 0xcc; L.tenth[10] = 0xfb; L.tenth[11] = 0x3f;
    L.retval = 1;
    sign = (unsigned short)(se & 0x8000);
    expn = (unsigned short)(se & 0x7fff);
    if (sign) {
        fos->sign = '-';
    } else {
        fos->sign = ' ';
    }
    if (expn == 0 && hi == 0 && *plo == 0) {
        goto zero_digit;
    }
    if (expn == 0x7fff) {
        fos->exp = 1;
        if ((hi == 0x80000000 && *plo == 0) || (hi & 0x40000000)) {
            if (sign && hi == 0xc0000000 && *plo == 0) {
                *(S_I10_Str6 *)fos->man = *(S_I10_Str6 *)D_00296344;
                fos->manlen = 5;
            } else if (hi == 0x80000000 && *plo == 0) {
                *(S_I10_Str6 *)fos->man = *(S_I10_Str6 *)D_0029633C;
                fos->manlen = 5;
            } else {
                *(S_I10_Str7 *)fos->man = *(S_I10_Str7 *)D_00296334;
                fos->manlen = 6;
            }
        } else {
            *(S_I10_Str7 *)fos->man = *(S_I10_Str7 *)D_0029634C;
            fos->manlen = 6;
        }
        L.retval = 0;
    } else {
        L.ld12.w0 = 0;
        L.ld12.lo = *plo;
        L.ld12.hi = hi;
        L.ld12.exp = expn;
        decexp = (short)(((((expn >> 8) + (int)(hi >> 24) * 2) * 0x4d) + expn * 0x4d10 - 0x134312f4) >> 16);
        func_001F60E2((S_Ld12_001F60E2 *)&L.ld12, -decexp, 1);
        if (L.ld12.exp >= 0x3fff) {
            decexp++;
            func_001F5EC0((S_Ld12_001F60E2 *)&L.ld12, (S_Ld12_001F60E2 *)L.tenth);
        }
        fos->exp = decexp;
        if (flags & 1) {
            ndigits += decexp;
            if (ndigits <= 0) {
zero_digit:
                fos->man[0] = '0';
                goto zero_tail;
            }
        }
        if (ndigits > 0x15) {
            ndigits = 0x15;
        }
        e = L.ld12.exp - 0x3ffe;
        L.ld12.exp = 0;
        cnt8 = 8;
        do {
            func_001F5B20((S_U12 *)&L.ld12);
        } while (--cnt8);
        if (e < 0) {
            n = -e & 0xff;
            while (n > 0) {
                func_001F5B4E((S_U12 *)&L.ld12);
                n--;
            }
        }
        nd = ndigits + 1;
        p = fos->man;
        if (nd > 0) {
            L.cnt = nd;
            do {
                L.tmp = *(S_U12 *)&L.ld12;
                func_001F5B20((S_U12 *)&L.ld12);
                func_001F5B20((S_U12 *)&L.ld12);
                func_001F5AC2((S_U12 *)&L.ld12, &L.tmp);
                func_001F5B20((S_U12 *)&L.ld12);
                *p++ = *((unsigned char *)&L.ld12 + 11) + '0';
                *((unsigned char *)&L.ld12 + 11) = 0;
            } while (--L.cnt);
        }
        man = fos->man;
        r = p;
        r--;
        c = *r;
        r--;
        if (c >= '5') {
            do {
                if (*r != '9') {
                    break;
                }
                *r = '0';
                r--;
            } while (r >= man);
            if (r < man) {
                r++;
                fos->exp++;
            }
            (*r)++;
        } else {
            do {
                if (*r != '0') {
                    break;
                }
                r--;
            } while (r >= man);
            if (r < man) {
                *man = '0';
                goto zero_tail;
            }
        }
        fos->manlen = (char)(r - fos->man + 1);
        fos->man[fos->manlen] = 0;
    }
    return L.retval;
zero_tail:
    fos->exp = 0;
    fos->man[1] = 0;
    fos->sign = ' ';
    fos->manlen = 1;
    return 1;
}
#pragma optimize("a", off)

#pragma optimize("a", on)
void __cdecl func_001F5EC0(S_Ld12_001F60E2 *px, S_Ld12_001F60E2 *py)
{
    unsigned int expsum;
    int i;
    unsigned short *q;
    unsigned short *pxs;
    unsigned short *pys;
    int sticky = 0;
    int roffs;
    int j;
    unsigned int sign;
    unsigned short expy, expx;
    unsigned int *px32 = (unsigned int *)px;
    unsigned int *py32 = (unsigned int *)py;
    unsigned char tm[12];

    *(unsigned int *)(tm + 0) = 0;
    *(unsigned int *)(tm + 4) = 0;
    *(unsigned int *)(tm + 8) = 0;
    expy = *(unsigned short *)((char *)py + 10);
    expx = *(unsigned short *)((char *)px + 10);
    sign = ((unsigned int)expy ^ (unsigned int)expx);
    expy &= 0x7fff;
    expx &= 0x7fff;
    sign &= 0x8000;
    expsum = (unsigned short)(expx + expy);
    if (expx >= 0x7fff || expy >= 0x7fff || (unsigned short)expsum > 0xbffd) {
        goto overflow;
    }
    if ((unsigned short)expsum <= 0x3fbf) {
        px32[2] = 0;
        px32[1] = 0;
        px32[0] = 0;
        return;
    }
    if (expx == 0) {
        expsum++;
        if (!(px32[2] & 0x7fffffff) && px32[1] == 0 && px32[0] == 0) {
            expsum = 0;
            goto store_sign;
        }
    }
    if (expy == 0) {
        expsum++;
        if (!(py32[2] & 0x7fffffff) && py32[1] == 0 && py32[0] == 0) {
            px32[2] = 0;
            px32[1] = 0;
            px32[0] = 0;
            return;
        }
    }
    q = (unsigned short *)tm + 2;
    roffs = 0;
    i = 5;
    while (i > 0) {
        pxs = (unsigned short *)((char *)px + roffs * 2);
        pys = (unsigned short *)((char *)py + 8);
        j = i;
        while (j > 0) {
            if (func_001F5AA1(*(unsigned int *)(q - 2), (unsigned int)*pxs * (unsigned int)*pys, (unsigned int *)(q - 2))) {
                ++*q;
            }
            pxs++;
            pys--;
            j--;
        }
        q++;
        roffs++;
        i--;
    }
    expsum += 0xc002;
    while ((short)expsum > 0 && !(tm[11] & 0x80)) {
        func_001F5B20((S_U12 *)tm);
        expsum += (int)D_0000FFFF;
    }
    if ((short)expsum <= 0) {
        expsum += (int)D_0000FFFF;
        if ((short)expsum < 0) {
            unsigned int n = (unsigned short)-expsum;
            expsum += n;
            do {
                if (tm[0] & 1) {
                    sticky++;
                }
                func_001F5B4E((S_U12 *)tm);
            } while (--n);
            if (sticky) {
                tm[0] |= 1;
            }
        }
    }
    if (*(unsigned short *)tm > 0x8000 || (*(unsigned int *)tm & (unsigned int)D_0001FFFF) == (unsigned int)D_00018000) {
        if (*(unsigned int *)(tm + 2) == 0xffffffff) {
            *(unsigned int *)(tm + 2) = 0;
            if (*(unsigned int *)(tm + 6) == 0xffffffff) {
                *(unsigned int *)(tm + 6) = 0;
                if (*(unsigned short *)(tm + 10) == 0xffff) {
                    expsum++;
                    *(unsigned short *)(tm + 10) = 0x8000;
                } else {
                    (*(unsigned short *)(tm + 10))++;
                }
            } else {
                (*(unsigned int *)(tm + 6))++;
            }
        } else {
            (*(unsigned int *)(tm + 2))++;
        }
    }
    if ((unsigned short)expsum >= 0x7fff) {
        goto overflow;
    }
    *(unsigned short *)px = *(unsigned short *)(tm + 2);
    *(unsigned int *)((char *)px + 2) = *(unsigned int *)(tm + 4);
    *(unsigned int *)((char *)px + 6) = *(unsigned int *)(tm + 8);
store_sign:
    *(unsigned short *)((char *)px + 10) = expsum | sign;
    return;
overflow:
    px32[1] = 0;
    px32[0] = 0;
    px32[2] = (-(unsigned int)(sign != 0) & 0x80000000) + 0x7fff8000;
}
#pragma optimize("a", off)
void __cdecl func_001F60E2(S_Ld12_001F60E2 *dst, int pow, unsigned int mult12)
{
    S_Ld12_001F60E2 tmp;
    S_Ld12_001F60E2 *tbl = D_002AF038 - 8;
    if (pow != 0) {
        if (pow < 0) {
            pow = -pow;
            tbl = D_002AF198 - 8;
        }
        if (mult12 == 0) {
            dst->exp = 0;
        }
        while (pow != 0) {
            int idx = pow & 7;
            pow >>= 3;
            tbl += 7;
            if (idx != 0) {
                S_Ld12_001F60E2 *p = tbl + idx;
                if (p->exp >= 0x8000) {
                    tmp = *p;
                    *(long *)&tmp.mant[0] -= 1;
                    p = &tmp;
                }
                func_001F5EC0(dst, p);
            }
        }
    }
}

extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
long func_001EE4BD(int fh, long pos, int mthd);
int func_001E9D87(int fh, int mode);
int func_001ED9C0(int fh, const void *buf, unsigned cnt);
unsigned long *func_001ED07E(void);
long func_001EE6CE(int fh);
int __stdcall func_001DD31D(long h);
unsigned long func_001DD603(void);
int func_001F6158(int filedes, long size)
{
    long filend;
    long extend;
    long place;
    int cnt;
    int oldmode;
    int retval = 0;
    char blk[0x1000];

    if ((place = func_001EE4BD(filedes, 0L, 1)) == -1 ||
        (filend = func_001EE4BD(filedes, 0L, 2)) == -1)
        return -1;

    extend = size - filend;

    if (extend > 0) {
        memset(blk, 0, 0x1000);
        oldmode = func_001E9D87(filedes, 0x8000);
        do {
            cnt = (extend >= 0x1000) ? 0x1000 : (int)extend;
            if ((cnt = func_001ED9C0(filedes, blk, cnt)) == -1) {
                if (*func_001ED07E() == 5)
                    *func_001ED075() = 13;
                retval = cnt;
                break;
            }
        } while ((extend -= cnt) > 0);
        func_001E9D87(filedes, oldmode);
    } else if (extend < 0) {
        func_001EE4BD(filedes, size, 0);
        retval = func_001DD31D(func_001EE6CE(filedes)) ? 0 : -1;
        if (retval == -1) {
            *func_001ED075() = 13;
            *func_001ED07E() = func_001DD603();
        }
    }

    func_001EE4BD(filedes, place, 0);
    return retval;
}

int func_001F627B(PFN_001F5975 fn)
{
    int valid = 1;

    if (func_001F655B(fn) != 0) {
        valid = 0;
    }
    return valid;
}

#pragma optimize("sy", on)
void func_001F6292(void)
{
    if (func_001EB7E9()->pterminate != 0) {
        __try {
            func_001EB7E9()->pterminate();
        } __except (1) {
        }
    }
    KeBugCheck_001F6292(0xc0000144);
}

int func_001F57FF(int fh);
void func_001F57BB(S_001F59DC_FILE *stream);
int func_001EDB4B(int fh, char *buf, int cnt);
int func_001EE52F(int fh, int off, int origin);
extern S_001F59DC_FILE D_002AE690;
extern S_001F59DC_FILE D_002AE6B0;
extern char D_0000FFFF[];
int func_001F62CE(int wc, S_001F59DC_FILE *stream)
{
    int fh;
    int charcount;
    int written;

    fh = stream->file;
    if (!(stream->flag & 0x82) || (stream->flag & 0x40)) {
        stream->flag |= 0x20;
        return (int)D_0000FFFF;
    }
    if (stream->flag & 1) {
        stream->cnt = 0;
        if (!(stream->flag & 0x10)) {
            stream->flag |= 0x20;
            return (int)D_0000FFFF;
        }
        stream->ptr = stream->base;
        stream->flag &= ~1;
    }
    stream->flag |= 2;
    stream->flag &= ~0x10;
    stream->cnt = 0;
    written = charcount = 0;
    if (!(stream->flag & 0x10c) &&
        !((stream == &D_002AE690 || stream == &D_002AE6B0) && func_001F57FF(fh))) {
        func_001F57BB(stream);
    }
    if (stream->flag & 0x108) {
        charcount = stream->ptr - stream->base;
        stream->ptr = stream->base + 2;
        stream->cnt = *(int *)((char *)stream + 0x18) - 2;
        if (charcount > 0) {
            written = func_001EDB4B(fh, stream->base, charcount);
        } else {
            char *info = fh != -1 ? D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 : D_002AEC40;
            if (info[4] & 0x20) {
                func_001EE52F(fh, 0, 2);
            }
        }
        *(unsigned short *)stream->base = (unsigned short)wc;
    } else {
        unsigned short c[2];
        c[0] = (unsigned short)wc;
        charcount = 2;
        written = func_001EDB4B(fh, (char *)c, charcount);
    }
    if (written != charcount) {
        stream->flag |= 0x20;
        return (int)D_0000FFFF;
    }
    return wc & (int)D_0000FFFF;
}

