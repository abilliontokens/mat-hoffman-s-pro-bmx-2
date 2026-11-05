/* 20 functions from 0x001F4B08 to 0x001F58D5, found by Ghidra. */
#include "common.h"

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

/* the CRT's per-handle table: 0x28 bytes an entry, osfile flags at +4 */
struct ioinfo {
    int osfhnd;
    char osfile;
    char pipech;
    char pad6[0x22];
};

extern ioinfo *D_002FB260[64];
extern unsigned int D_002FB240;
extern int D_002F6858;
void *func_001E8AA5(int size);
void func_001EE782(int fh);

/* _sopen's helper takes shflag in ecx and the rest on the stack, caller cleans up */
struct S_001F54D0 {
    int func_001F54D0(int *unlockFlag, int *fh, const char *path, int oflag, int pmode, ...);
};

extern char D_002FB000[0x101];
extern char D_002FB120[0x18];
extern int D_002FB104;
extern int D_002FAFF0;
extern int D_002FAFE8;

/* CRT run-time error message table */
struct S_002AEF98 {
    int num;
    const char *msg;
};
extern S_002AEF98 D_002AEF98[0x12];

/* CRT FILE */
struct S_001F4_FILE {
    char *ptr;
    int cnt;
    char *base;
    int flag;
    int file;
    int charbuf;
    int bufsiz;
    char *tmpfname;
};

unsigned int func_001F4BC8(unsigned int newv, unsigned int mask)
{
    unsigned int func_001F4B96(unsigned int newv, unsigned int mask);

    return func_001F4B96(newv, mask & 0xfff7ffff);
}

#pragma intrinsic(memset)
void func_001F4BDE(void)
{
    memset(D_002FB000, 0, 0x101);
    memset(D_002FB120, 0, 0x18);
    D_002FB104 = 0;
    D_002FAFF0 = 0;
    D_002FAFE8 = 0;
}
void func_001F4E30(void) {
    int func_001EB302(...);
    func_001EB302(13);
}

void func_001F4E8B(int rterrnum)
{
    void __stdcall func_001DF5F4(const char *msg);
    unsigned int i;

    for (i = 0; i < 0x12; i++) {
        if (rterrnum == D_002AEF98[i].num) {
            break;
        }
    }
    if (rterrnum == D_002AEF98[i].num) {
        func_001DF5F4(D_002AEF98[i].msg);
    }
}

void func_001F4EB7(void)
{
    extern void (*D_002F6A68)(void);
    void func_001F4E8B(int rterrnum);

    func_001F4E8B(0xfc);
    if (D_002F6A68 != 0) {
        D_002F6A68();
    }
    func_001F4E8B(0xff);
}

int func_001F4ED9(int ch, S_001F4_FILE *stream)
{
    void func_001F57BB(S_001F4_FILE *stream);

    if (ch == -1) {
        return -1;
    }
    if (!((stream->flag & 1) || ((stream->flag & 0x80) && !(stream->flag & 2)))) {
        return -1;
    }
    if (stream->base == 0) {
        func_001F57BB(stream);
    }
    if (stream->ptr == stream->base) {
        if (stream->cnt) {
            return -1;
        }
        stream->ptr++;
    }
    if (stream->flag & 0x40) {
        if (*--stream->ptr != (char)ch) {
            ++stream->ptr;
            return -1;
        }
    } else {
        *--stream->ptr = (char)ch;
    }
    stream->cnt++;
    stream->flag &= ~0x10;
    stream->flag |= 1;
    return ch & 0xff;
}

__int64 func_001F5829(int fh, __int64 pos, int mthd)
{
    int func_001EE6CE(int fh);
    int *func_001ED075(void);
    int __stdcall func_001DD3A1(int h, long lo, long *hi, int mthd);
    int func_001DD603(void);
    void func_001ED087(int err);
    __int64 newpos = pos;
    int osfhandle;
    int dosretval;

    osfhandle = func_001EE6CE(fh);
    if (osfhandle == -1) {
        *func_001ED075() = 9;
        return -1;
    }
    if ((*(long *)&newpos = func_001DD3A1(osfhandle, *(long *)&newpos,
                                          ((long *)&newpos) + 1, mthd)) == -1 &&
        (dosretval = func_001DD603()) != 0) {
        func_001ED087(dosretval);
        return -1;
    }
    D_002FB260[fh >> 5][fh & 0x1f].osfile &= 0xfd;
    return newpos;
}

int func_001F58AA(unsigned char *s, unsigned short wc)
{
    int *func_001ED075(void);

    if (s == 0) {
        return 0;
    }
    if (wc > 0xff) {
        *func_001ED075() = 0x2a;
        return -1;
    }
    *s = (unsigned char)wc;
    return 1;
}

