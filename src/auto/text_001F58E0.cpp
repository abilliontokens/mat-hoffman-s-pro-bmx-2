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
    unsigned int l0 = p->l[0];
    unsigned int n0 = l0 << 1;
    unsigned int l1 = p->l[1];

    p->l[0] = n0;
    p->l[1] = (l1 << 1) | (l0 >> 31);
    p->l[2] = (p->l[2] << 1) | (l1 >> 31);
}

void func_001F5B4E(S_U12 *p)
{
    unsigned int l1 = p->l[1];
    unsigned int l2 = p->l[2];

    p->l[1] = (l1 >> 1) | (l2 << 31);
    p->l[0] = (p->l[0] >> 1) | (l1 << 31);
    p->l[2] = l2 >> 1;
}

#pragma optimize("s", on)
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
