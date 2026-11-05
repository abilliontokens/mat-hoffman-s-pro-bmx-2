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
extern int D_002F6A84;
extern int D_002F6848;
int *func_001ED075(void);
int *func_001ED07E(void);
int func_001EE7A4(void);
int func_001DD603(void);
void func_001ED087(int err);
void func_001EE63F(int fh, int hfile);
int func_001EE4BD(int fh, int off, int whence);
int func_001ED633(int fh, void *buf, unsigned int cnt);
int func_001F6158(int fh, int size);
int func_001ED40B(int fh);
int __stdcall func_001DCC3C(const char *path, unsigned int access, unsigned int share, void *sa,
                            unsigned int create, unsigned int attrib, void *tmpl);

/* _sopen's helper takes shflag in ecx and the rest on the stack, caller cleans up */
struct S_001F54D0 {
    int func_001F54D0(int *unlockFlag, int *fh, const char *path, int oflag, int pmode, ...);
};

extern char D_002FB000[0x101];
extern char D_002FB120[0x18];
extern int D_002FB104;
extern int D_002FAFF0;
extern int D_002FAFE8;

/* CRT run-time error table: {num, msg} pairs, 8 bytes each */
extern int D_002AEF98[];
extern const char *D_002AEF9C[];

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

int func_001F4E39(void)
{
    extern int D_002FB378;
    void func_001F4D18(int a);

    if (D_002FB378 == 0) {
        D_002FB104 = -3;
        func_001F4D18(0);
        D_002FB378 = 1;
    }
    return 0;
}

void func_001F4E8B(int rterrnum)
{
    void __stdcall func_001DF5F4(const char *msg);
    unsigned int i;

    for (i = 0; i < 0x12; i++) {
        if (rterrnum == D_002AEF98[i * 2]) {
            break;
        }
    }
    if (rterrnum == D_002AEF98[i * 2]) {
        func_001DF5F4(D_002AEF9C[i * 2]);
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

    if (ch != -1 && ((stream->flag & 1) || ((stream->flag & 0x80) && !(stream->flag & 2)))) {
        if (stream->base == 0) {
            func_001F57BB(stream);
        }
        if (stream->ptr == stream->base) {
            if (stream->cnt) {
                return -1;
            }
            stream->ptr++;
        }
        stream->ptr--;
        if (stream->flag & 0x40) {
            if (*stream->ptr != (char)ch) {
                stream->ptr++;
                return -1;
            }
        } else {
            *stream->ptr = (char)ch;
        }
        stream->cnt++;
        stream->flag &= ~0x10;
        stream->flag |= 1;
        return ch & 0xff;
    }
    return -1;
}

int func_001F4F45(unsigned short *pwc, const unsigned char *s, unsigned int n)
{
    if (s == 0 || n == 0) {
        return 0;
    }
    if (*s == 0) {
        if (pwc != 0) {
            *pwc = 0;
        }
        return 0;
    }
    if (pwc != 0) {
        *pwc = *s;
    }
    return 1;
}

static int func_001F54D0(int *punlock_flag, int *pfh, const char *path, int oflag, int shflag, int pmode)
{
    int fh;
    int filepos;
    char fileflags;
    char isdev;
    char ch;
    int osfh;
    unsigned int fileaccess;
    unsigned int fileshare;
    unsigned int filecreate;
    unsigned int fileattrib;

    fileflags = 0;
    if ((oflag & 0x8000) == 0) {
        if (oflag & 0x4000) {
            fileflags |= 0x80;
        } else if (D_002F6A84 != 0x8000) {
            fileflags |= 0x80;
        }
    }

    switch (oflag & 3) {
    case 0:
        fileaccess = 0x80000000;
        break;
    case 1:
        fileaccess = 0x40000000;
        break;
    case 2:
        fileaccess = 0xc0000000;
        break;
    default:
        *func_001ED075() = 0x16;
        *func_001ED07E() = 0;
        return -1;
    }

    switch (shflag) {
    case 0x10:
        fileshare = 0;
        break;
    case 0x20:
        fileshare = 1;
        break;
    case 0x30:
        fileshare = 2;
        break;
    case 0x40:
        fileshare = 3;
        break;
    default:
        *func_001ED075() = 0x16;
        *func_001ED07E() = 0;
        return -1;
    }

    switch (oflag & 0x700) {
    case 0:
    case 0x400:
        filecreate = 3;
        break;
    case 0x100:
        filecreate = 4;
        break;
    case 0x500:
    case 0x700:
        filecreate = 1;
        break;
    case 0x200:
    case 0x600:
        filecreate = 5;
        break;
    case 0x300:
        filecreate = 2;
        break;
    default:
        *func_001ED075() = 0x16;
        *func_001ED07E() = 0;
        return -1;
    }

    fileattrib = 0x80;
    if (oflag & 0x100) {
        if (!((pmode & ~D_002F6848) & 0x80)) {
            fileattrib = 1;
        }
    }
    if (oflag & 0x40) {
        fileattrib |= 0x4000000;
        fileaccess |= 0x10000;
        fileshare |= 4;
    }
    if (oflag & 0x1000) {
        fileattrib |= 0x100;
    }
    if (oflag & 0x20) {
        fileattrib |= 0x8000000;
    } else if (oflag & 0x10) {
        fileattrib |= 0x10000000;
    }

    fh = func_001EE7A4();
    if (fh == -1) {
        *func_001ED075() = 0x18;
        *func_001ED07E() = 0;
        return -1;
    }

    *punlock_flag = 1;
    *pfh = fh;
    osfh = func_001DCC3C(path, fileaccess, fileshare, 0, filecreate, fileattrib, 0);
    if (osfh == -1) {
        func_001ED087(func_001DD603());
        return -1;
    }
    func_001EE63F(fh, osfh);

    fileflags |= 1;
    isdev = fileflags & 0x48;
    D_002FB260[fh >> 5][fh & 0x1f].osfile = fileflags;

    if (!isdev && (fileflags & 0x80) && (oflag & 2)) {
        filepos = func_001EE4BD(fh, -1, 2);
        if (filepos == -1) {
            if (*func_001ED07E() != 0x83) {
                func_001ED40B(fh);
                return -1;
            }
        } else {
            ch = 0;
            if (func_001ED633(fh, &ch, 1) == 0 && ch == 26) {
                if (func_001F6158(fh, filepos) == -1) {
                    func_001ED40B(fh);
                    return -1;
                }
            }
            if (func_001EE4BD(fh, 0, 0) == -1) {
                func_001ED40B(fh);
                return -1;
            }
        }
    }

    if (!isdev && (oflag & 8)) {
        D_002FB260[fh >> 5][fh & 0x1f].osfile |= 0x20;
    }
    return fh;
}

int func_001F5766(const char *path, int oflag, int shflag, int pmode)
{
    int fh;
    int retval;
    int unlockFlag = 0;

    __try {
        retval = func_001F54D0(&unlockFlag, &fh, path, oflag, shflag, pmode);
    } __finally {
        if (unlockFlag) {
            func_001EE782(fh);
        }
    }
    return retval;
}

void func_001F57BB(S_001F4_FILE *stream)
{
    D_002F6858++;
    stream->base = (char *)func_001E8AA5(0x1000);
    if (stream->base != 0) {
        stream->flag |= 8;
        stream->bufsiz = 0x1000;
    } else {
        stream->flag |= 4;
        stream->base = (char *)&stream->charbuf;
        stream->bufsiz = 2;
    }
    stream->ptr = stream->base;
    stream->cnt = 0;
}

int func_001F57FF(int fh)
{
    if ((unsigned int)fh >= D_002FB240) {
        return 0;
    }
    return D_002FB260[fh >> 5][fh & 0x1f].osfile & 0x40;
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

