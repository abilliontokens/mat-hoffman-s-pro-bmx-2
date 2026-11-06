/* 24 functions from 0x001ED0FC to 0x001EDD36, found by Ghidra. */
#include "common.h"

extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *);
void func_001E9DE9(void *p);
int func_001ED8A7(int ch, void *stream);
int func_001F5766(const char *path, int oflag, int shflag, int pmode);
extern int D_002F6A6C;
extern int D_002F6858;

struct S_001EDC7E {
    int f0;
    int f4;
    int f8;
    u8 fC;
    u8 fD;
    char padE[0xA];
    int f18;
};

/* CRT FILE (_iobuf) */
struct S_001ED_FILE {
    char *ptr;
    int cnt;
    char *base;
    int flag;
    int file;
    int charbuf;
    int bufsiz;
};

void func_001F57BB(S_001ED_FILE *stream);

/* The CRT's per-file-handle record: D_002FB260[fh >> 5][fh & 0x1f]. */
struct S_ioinfo {
    int osfhnd;
    unsigned char osfile : 8;
    char pipech;
    char pad6[0x22];
};

#pragma optimize("y", off)
void func_001ED0FC(unsigned int *param_1, int param_2)
{
    int func_001F5059(...);
    int func_001F4848(...);
    unsigned int uVar3;
    unsigned int uVar1;
    int iVar2;
    int locals[6];
    uVar3 = 0;
    uVar1 = func_001F5059(&locals[0], &locals[5], param_2, 0, 0, 0, 0);
    if (uVar1 & 4) {
        uVar3 = 0x200;
        locals[3] = 0;
        locals[4] = 0;
    } else {
        iVar2 = func_001F4848(&locals[0], &locals[3]);
        if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
            uVar3 = 0x80;
        }
        if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
            uVar3 = uVar3 | 0x100;
        }
    }
    *param_1 = uVar3;
    param_1[1] = locals[5] - param_2;
    param_1[4] = locals[3];
    param_1[5] = locals[4];
}

void *func_001ED181(const char *path, const char *mode, int shflag, int *out)
{
    unsigned int flags;
    unsigned int fmode;
    char c;
    int ok;
    int seen[2];
    int fd;

    fmode = D_002F6A6C;
    c = *mode;
    seen[0] = 0;
    seen[1] = 0;
    if (c != 'a') {
        if (c != 'r') {
            if (c != 'w') {
                return 0;
            }
            flags = 0x301;
            fmode |= 2;
        } else {
            flags = 0;
            fmode |= 1;
        }
    } else {
        flags = 0x109;
        fmode |= 2;
    }
    ok = 1;
    for (;;) {
        mode++;
        c = *mode;
        if (c == 0 || ok == 0) {
            break;
        }
        switch (c) {
        case 'S':
            if (seen[1] == 0) {
                seen[1] = 1;
                flags |= 0x20;
            } else {
                ok = 0;
            }
            break;
        case 'R':
            if (seen[1] == 0) {
                seen[1] = 1;
                flags |= 0x10;
            } else {
                ok = 0;
            }
            break;
        case 'D':
            if ((flags & 0x40) == 0) {
                flags |= 0x40;
            } else {
                ok = 0;
            }
            break;
        case '+':
            if ((flags & 2) == 0) {
                flags &= 0xfffffffe;
                fmode &= 0xfffffffc;
                flags |= 2;
                fmode |= 0x80;
            } else {
                ok = 0;
            }
            break;
        case 'T':
            if ((flags & 0x1000) == 0) {
                flags |= 0x1000;
            } else {
                ok = 0;
            }
            break;
        default:
            ok = 0;
            break;
        case 't':
            if ((flags & 0xc000) == 0) {
                flags |= 0x4000;
            } else {
                ok = 0;
            }
            break;
        case 'n':
            if (seen[0] == 0) {
                seen[0] = 1;
                fmode &= 0xffffbfff;
            } else {
                ok = 0;
            }
            break;
        case 'c':
            if (seen[0] == 0) {
                seen[0] = 1;
            } else {
                ok = 0;
                break;
            }
            fmode |= 0x4000;
            break;
        case 'b':
            if ((flags & 0xc000) == 0) {
                flags |= 0x8000;
            } else {
                ok = 0;
            }
            break;
        }
    }
    fd = func_001F5766(path, flags, shflag, 0x1a4);
    if (fd < 0) {
        return 0;
    }
    D_002F6858++;
    out[3] = fmode;
    out[1] = 0;
    out[0] = 0;
    out[2] = 0;
    out[7] = 0;
    out[4] = fd;
    return out;
}

#pragma optimize("", on)
void func_001ED402(void) {
    int func_001EB302(...);
    func_001EB302(1);
}

int func_001ED40B(int fh)
{
    int func_001EE6CE(...);
    int __stdcall func_001DD13C(int);
    int func_001DD603(...);
    int func_001EE685(...);
    void func_001ED087(unsigned int);
    extern unsigned char *D_002FB260[];
    int err;
    if (func_001EE6CE(fh) != -1) {
        if (fh == 1 || fh == 2) {
            int other = func_001EE6CE(2);
            if (func_001EE6CE(1) == other) {
                goto zero_err;
            }
        }
        if (func_001DD13C(func_001EE6CE(fh))) {
            goto zero_err;
        }
        err = func_001DD603();
        goto done;
    }
zero_err:
    err = 0;
done:
    func_001EE685(fh);
    *(unsigned int *)(D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) &= ~0xffu;
    if (err != 0) {
        func_001ED087(err);
        return -1;
    }
    return 0;
}

int func_001ED48C(int fh)
{
    int func_001EE70F(int);
    int func_001EE782(int);
    int *func_001ED075(void);
    int *func_001ED07E(void);
    int func_001ED40B(int);
    extern unsigned int D_002FB240;
    extern S_ioinfo *D_002FB260[];
    int retval;

    if ((unsigned int)fh >= D_002FB240 ||
        (D_002FB260[fh >> 5][fh & 0x1f].osfile & 1) == 0) {
        *func_001ED075() = 9;
        *func_001ED07E() = 0;
        return -1;
    }
    func_001EE70F(fh);
    __try {
        if (D_002FB260[fh >> 5][fh & 0x1f].osfile & 1) {
            retval = func_001ED40B(fh);
        } else {
            *func_001ED075() = 9;
            retval = -1;
        }
    } __finally {
        func_001EE782(fh);
    }
    return retval;
}

void func_001ED503(void)
{
    int func_001EE782(int);
    int fh;
    func_001EE782(fh);
}

int func_001ED50B(void)
{
    int *func_001ED075(void);
    int *func_001ED07E(void);
    void __SEH_epilog(void);
    *func_001ED075() = 9;
    *func_001ED07E() = 0;
    __SEH_epilog();
    return -1;
}

void func_001ED527(int *param_1)
{
    int func_001E8390(...);
    if ((param_1[3] & 0x83) != 0 && (param_1[3] & 8) != 0) {
        func_001E8390(param_1[2]);
        *(unsigned short *)(param_1 + 3) &= 0xfbf7;
        param_1[0] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
    }
}

int func_001ED552(S_001ED_FILE *stream)
{
    int func_001ED7FC(int fh, void *buffer, unsigned cnt);
    extern char *D_002FB260[];
    extern char D_002AEC40[];
    char *info;

    if ((stream->flag & 0x83) == 0 || (stream->flag & 0x40) != 0) {
        return -1;
    }
    if ((stream->flag & 2) != 0) {
        stream->flag |= 0x20;
        return -1;
    }
    stream->flag |= 1;
    if ((stream->flag & 0x10c) == 0) {
        func_001F57BB(stream);
    } else {
        stream->ptr = stream->base;
    }
    stream->cnt = func_001ED7FC(stream->file, stream->base, stream->bufsiz);
    if (stream->cnt == 0 || stream->cnt == -1) {
        stream->flag |= stream->cnt ? 0x20 : 0x10;
        stream->cnt = 0;
        return -1;
    }
    if ((stream->flag & 0x82) == 0) {
        info = stream->file != -1 ? D_002FB260[stream->file >> 5] + (stream->file & 0x1f) * 0x28 : D_002AEC40;
        if ((info[4] & 0x82) == 0x82) {
            stream->flag |= 0x2000;
        }
    }
    if (stream->bufsiz == 0x200 && (stream->flag & 8) != 0 && (stream->flag & 0x400) == 0) {
        stream->bufsiz = 0x1000;
    }
    stream->cnt--;
    return (unsigned char)*stream->ptr++;
}

int func_001ED7FC(int fh, void *buffer, unsigned cnt)
{
    int func_001EE70F(int);
    int func_001ED633(int, void *, unsigned);
    int func_001EE782(int);
    int *func_001ED075(void);
    int *func_001ED07E(void);
    extern unsigned int D_002FB240;
    extern S_ioinfo *D_002FB260[];
    int retval;
    if ((unsigned)fh >= D_002FB240 || (D_002FB260[fh >> 5][fh & 0x1f].osfile & 1) == 0) {
        *func_001ED075() = 9;
        *func_001ED07E() = 0;
        return -1;
    }
    func_001EE70F(fh);
    __try {
        if (D_002FB260[fh >> 5][fh & 0x1f].osfile & 1) {
            retval = func_001ED633(fh, buffer, cnt);
        } else {
            *func_001ED075() = 9;
            *func_001ED07E() = 0;
            retval = -1;
        }
    }
    __finally {
        func_001EE782(fh);
    }
    return retval;
}

void func_001ED883(int fh)
{
    int func_001EE782(int);
    func_001EE782(fh);
}

int func_001ED8A7(int ch, void *str)
{
    int func_001F57FF(int fh);
    int func_001EDB4B(int fh, char *buf, int cnt);
    int func_001EE52F(int fh, int off, int origin);
    extern S_001ED_FILE D_002AE690;
    extern S_001ED_FILE D_002AE6B0;
    extern char *D_002FB260[];
    extern char D_002AEC40[];
    S_001ED_FILE *stream;
    int fh;
    int charcount;
    int written;

    stream = (S_001ED_FILE *)str;
    fh = stream->file;
    if (!(stream->flag & 0x82) || (stream->flag & 0x40)) {
        stream->flag |= 0x20;
        return -1;
    }
    if (stream->flag & 1) {
        stream->cnt = 0;
        if (!(stream->flag & 0x10)) {
            stream->flag |= 0x20;
            return -1;
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
        stream->ptr = stream->base + 1;
        stream->cnt = stream->bufsiz - 1;
        if (charcount > 0) {
            written = func_001EDB4B(fh, stream->base, charcount);
        } else {
            char *info = fh != -1 ? D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 : D_002AEC40;
            if (info[4] & 0x20) {
                func_001EE52F(fh, 0, 2);
            }
        }
        *stream->base = (char)ch;
    } else {
        charcount = 1;
        written = func_001EDB4B(fh, (char *)&ch, charcount);
    }
    if (written != charcount) {
        stream->flag |= 0x20;
        return -1;
    }
    return ch & 0xff;
}

int func_001ED9C0(int fh, const void *buf, unsigned cnt)
{
    int func_001F5829(int, int, int, int);
    int __stdcall func_001DD247(int, const void *, int, int *, int);
    int func_001DD603(void);
    int *func_001ED075(void);
    int *func_001ED07E(void);
    void func_001ED087(unsigned int);
    extern S_ioinfo *D_002FB260[];
    int lfcount;
    int charcount;
    int written;
    unsigned long dosretval;
    char ch;
    char *p;
    char *q;
    char lfbuf[1025];

    lfcount = charcount = 0;
    if (cnt == 0) {
        return 0;
    }
    if (D_002FB260[fh >> 5][fh & 0x1f].osfile & 0x20) {
        func_001F5829(fh, 0, 0, 2);
    }
    if (D_002FB260[fh >> 5][fh & 0x1f].osfile & 0x80) {
        p = (char *)buf;
        dosretval = 0;
        while ((unsigned)(p - (char *)buf) < cnt) {
            q = lfbuf;
            while (q - lfbuf < 1024 && (unsigned)(p - (char *)buf) < cnt) {
                ch = *p++;
                if (ch == '\n') {
                    ++lfcount;
                    *q++ = '\r';
                }
                *q++ = ch;
            }
            if (func_001DD247(D_002FB260[fh >> 5][fh & 0x1f].osfhnd, lfbuf, (int)(q - lfbuf), &written, 0)) {
                charcount += written;
                if (written < q - lfbuf) {
                    break;
                }
            } else {
                dosretval = func_001DD603();
                break;
            }
        }
    } else {
        if (func_001DD247(D_002FB260[fh >> 5][fh & 0x1f].osfhnd, buf, cnt, &written, 0)) {
            dosretval = 0;
            charcount = written;
        } else {
            dosretval = func_001DD603();
        }
    }
    if (charcount == 0) {
        if (dosretval != 0) {
            if (dosretval == 5) {
                *func_001ED075() = 9;
                *func_001ED07E() = dosretval;
            } else {
                func_001ED087(dosretval);
            }
            return -1;
        } else if ((D_002FB260[fh >> 5][fh & 0x1f].osfile & 0x40) && *(char *)buf == 0x1a) {
            return 0;
        } else {
            *func_001ED075() = 0x1c;
            *func_001ED07E() = 0;
            return -1;
        }
    }
    return charcount - lfcount;
}

int func_001EDBF6(int *param_1)
{
    int func_001F57FF(...);
    int func_001E8AA5(...);
    extern int D_002AE690;
    extern int D_002AE6B0;
    extern int D_002F6858;
    extern int *D_002F69FC[];
    int **slot;
    int idx;
    if (func_001F57FF(param_1[4]) == 0) {
        return 0;
    }
    if (param_1 == &D_002AE690) {
        idx = 0;
    } else if (param_1 == &D_002AE6B0) {
        idx = 1;
    } else {
        return 0;
    }
    D_002F6858++;
    if ((*(unsigned short *)(param_1 + 3) & 0x10c) != 0) {
        return 0;
    }
    slot = &D_002F69FC[idx];
    if (*slot == 0) {
        *slot = (int *)func_001E8AA5(0x1000);
        if (*slot == 0) {
            param_1[0] = param_1[2] = (int)(param_1 + 5);
            param_1[1] = param_1[6] = 2;
            goto done;
        }
    }
    param_1[0] = param_1[2] = (int)*slot;
    param_1[1] = param_1[6] = 0x1000;
done:
    *(unsigned short *)(param_1 + 3) |= 0x1102;
    return 1;
}

void func_001EDC7E(int a, S_001EDC7E *p) {
    if (a != 0 && (p->fD & 0x10) != 0) {
        func_001E9DE9(p);
        p->fD &= 0xEE;
        p->f18 &= 0;
        p->f0 &= 0;
        p->f8 &= 0;
    }
}

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
void keep_001EDCA8(char ch, int n, char *str, S_001EDC7E *stream, int *pcnt)
{
    func_001EDCDB(ch, n, stream, pcnt);
    func_001EDCFF(str, n, stream, pcnt);
}
