/* 20 functions from 0x001F4B08 to 0x001F58D5, found by Ghidra. */
#include "common.h"
extern int D_002AEA38;
extern unsigned short *D_002AEA30;
extern char D_002AEA3C;
int func_001EC5F1(int, int);
void func_001F5B7B(char *, unsigned int, void *);
void func_001F60E2(void *, int, unsigned int);
#define DIGIT_1F(c) (D_002AEA38 > 1 ? func_001EC5F1((unsigned char)(c), 4) : (*(unsigned char *)&D_002AEA30[(unsigned char)(c)] & 4))

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

struct S_cpinfo {
    int cp;
    unsigned int names[6];
    unsigned char range[4][8];
};
extern unsigned char D_002AEE60[];
extern S_cpinfo D_002AEE68[5];
/* the same table, addressed by field (the original references these addresses by name) */
extern unsigned char D_002AEE84[];
extern unsigned int D_002AEE6C[];
extern unsigned char D_002FB001[];
extern int D_002F6A64;

struct S_mbcinfo {
    int refcount;
    int cp;
    int flag;
    int lcid;
    unsigned short names[6];
    unsigned char ctype[0x101];
    unsigned char xtype[0x100];
};
extern S_mbcinfo *D_002FAFEC;
extern int D_002F6A58;
extern unsigned short D_002FB120w[];
extern unsigned char D_002FB140[0x100];
void func_001EB390(int n);
int func_001F4C09(unsigned int cp);
void func_001E8390(void *p);
void func_001F4E30(void);

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

unsigned int func_001F4B96(unsigned int newv, unsigned int mask)
{
    unsigned int func_001F4A76(void);
    unsigned int func_001F4B08(unsigned int v);
    unsigned int cur;
    unsigned int result;
    cur = func_001F4A76();
    result = (cur & ~mask) | (newv & mask);
    func_001F4B08(result);
    return result;
}

unsigned int func_001F4BC8(unsigned int newv, unsigned int mask)
{
    unsigned int func_001F4B96(unsigned int newv, unsigned int mask);

    return func_001F4B96(newv, mask & 0xfff7ffff);
}

extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);
#pragma intrinsic(memset, memcpy)
void func_001F4BDE(void)
{
    memset(D_002FB000, 0, 0x101);
    D_002FB104 = 0;
    D_002FAFF0 = 0;
    D_002FAFE8 = 0;
    memset(D_002FB120, 0, 0x18);
}

int func_001F4C09(unsigned int cp)
{
    unsigned int i;
    unsigned int j;
    unsigned char *p;
    unsigned int c;

    if (cp == 0) goto reset;
    for (i = 0; i < 5; i++) {
        if ((unsigned int)D_002AEE68[i].cp == cp) goto found;
    }
    if (D_002F6A64 != 0) {
reset:
        func_001F4BDE();
        return 0;
    }
    return -1;
found:
    memset(D_002FB000, 0, 0x101);
    for (j = 0; j < 4; j++) {
        p = D_002AEE84 + i * 0x3c + j * 8;
        while (p[0] != 0 && p[1] != 0) {
            for (c = p[0]; c <= p[1]; c++)
                D_002FB001[c] |= D_002AEE60[j];
            p += 2;
        }
    }
    D_002FB104 = cp;
    D_002FAFF0 = 1;
    switch (cp) {
    case 0x3a4: D_002FAFE8 = 0x411; break;
    case 0x3a8: D_002FAFE8 = 0x804; break;
    case 0x3b5: D_002FAFE8 = 0x412; break;
    case 0x3b6: D_002FAFE8 = 0x404; break;
    default: D_002FAFE8 = 0; break;
    }
    memcpy(D_002FB120, (char *)D_002AEE6C + i * 0x3c, 0x18);
    return 0;
}

#pragma auto_inline(off)
int func_001F4D18(int cp)
{
    int retval = -1;
    S_mbcinfo *mbc;
    int i;

    func_001EB390(13);
    __try {
        D_002F6A64 = 0;
        if (cp == -4) {
            D_002F6A64 = 1;
            cp = D_002F6A58;
        }
        if (cp != D_002FB104) {
            mbc = D_002FAFEC;
            if (mbc == 0 || mbc->refcount != 0) {
                mbc = (S_mbcinfo *)func_001E8AA5(0x220);
            }
            if (mbc != 0) {
                retval = func_001F4C09(cp);
                if (retval == 0) {
                    mbc->refcount = 0;
                    mbc->cp = D_002FB104;
                    mbc->flag = D_002FAFF0;
                    mbc->lcid = D_002FAFE8;
                    for (i = 0; i < 5; i++)
                        mbc->names[i] = ((unsigned short *)D_002FB120)[i];
                    for (i = 0; i < 0x101; i++)
                        mbc->ctype[i] = D_002FB000[i];
                    for (i = 0; i < 0x100; i++)
                        mbc->xtype[i] = D_002FB140[i];
                    D_002FAFEC = mbc;
                }
            }
            if (retval == -1 && mbc != D_002FAFEC)
                func_001E8390(mbc);
        } else {
            retval = 0;
        }
    } __finally {
        int func_001EB302(int);
        func_001EB302(13);
    }
    return retval;
}
#pragma auto_inline(on)
#pragma auto_inline(off)
void func_001F4E30(void) {
    int func_001EB302(...);
    func_001EB302(13);
}
#pragma auto_inline(on)

int func_001F4E39(void)
{
    extern int D_002FB378;
    int func_001F4D18(int a);

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

extern "C" int func_001F35C5(int, void*, unsigned int);
extern "C" void func_001F3321(void*, unsigned int*, int, int, void*, void*);
extern "C" void func_001F3AFB(unsigned int, int);
extern "C" int func_001F59D9(int*);
extern "C" void func_001F37B0(int);
extern "C" char D_0000FFFF;
extern "C" int D_002AF030;
extern "C" void func_001F4F7C(int op, int* info, unsigned short* pcw)
{
    unsigned int cw = *pcw;
    __declspec(align(16)) unsigned int rec[0x1c];
    int code;
    switch (*info) {
    case 1: case 5: code = 8; break;
    case 2: code = 4; break;
    case 3: code = 0x11; break;
    case 4: code = 0x12; break;
    case 7: *info = 1; goto done;
    case 8: code = 0x10; break;
    default: goto done;
    }
    if (func_001F35C5(code, info + 6, cw) == 0) {
        if (op == 0x10 || op == 0x16 || op == 0x1d) {
            *(double*)&rec[12] = *(double*)(info + 4);
            rec[16] = (rec[16] & ~0x1c) | 3;
        } else {
            rec[16] &= ~1;
        }
        func_001F3321(rec, &cw, code, op, info + 2, info + 6);
    }
done:
    func_001F3AFB(cw, (int)&D_0000FFFF);
    if (*info != 8 && D_002AF030 == 0 && func_001F59D9(info) != 0)
        return;
    func_001F37B0(*info);
}

#pragma optimize("y", off)
int func_001F5059(char *out, char **end, char *input, int mult, int scale, int dec, int implicit)
{
 char buf[28]; char ld[12];
 char *p=buf; int sign=0; int expsign=1; unsigned int n=0;
 int found=0; int point=0; int expfound=0; int exponent=0; int adjust=0; int result=0;
 int state=0; char c; char *s=input; char *str=s; int e; int v; int lo,hi,top,extra;
 while (*s==' ' || *s=='\t' || *s=='\n' || *s=='\r') ++s;
 while(state!=10) {
 c=*s++;
 switch(state) {
 case 0:
 if(c>='1' && c<='9') {state=3; --s; break;}
 if(c==D_002AEA3C) {state=5;break;}
 switch(c) {
 case '-': state=2; sign=0x8000;break;
 case '+': state=2;sign=0;break;
 case '0': state=1;break;
 default: --s;goto done;
 } break;
 case 1:
 found=1;
 if(c>='1' && c<='9') {state=3;--s;break;}
 if(c==D_002AEA3C) {state=4;break;}
 if(c=='+' || c=='-') {--s;state=11;break;}
 if(c=='0') {state=1;break;}
 if((c>'C' && c<='E') || (c>'c' && c<='e')) {state=6;break;}
 state=10;--s;break;
 case 2:
 if(c>='1' && c<='9') {state=3;--s;break;}
 if(c==D_002AEA3C) {state=5;break;}
 if(c=='0') {state=1;break;}
 goto maybeimplicit;
 case 3:
 found=1;
 while(DIGIT_1F(c)) {
 if(n<25) {++n;*p++=c-'0';} else ++adjust;
 c=*s++;
 }
 if(c==D_002AEA3C) {state=4;break;}
 goto afterdigits;
 case 4:
 found=1;point=1;
 if(n==0) while(c=='0') {--adjust;c=*s++;}
 while(DIGIT_1F(c)) {
 if(n<25) {++n;*p++=c-'0';--adjust;}
 c=*s++;
 }
 afterdigits:
 if(c=='+' || c=='-') {--s;state=11;break;}
 marker:
 if((c>'C' && c<='E') || (c>'c' && c<='e')) {state=6;break;}
 state=10;--s;break;
 case 5:
 point=1;
 if(DIGIT_1F(c)) {state=4;--s;break;}
 goto maybeimplicit;
 case 6:
 str=s-2;
 if(c>='1' && c<='9') {state=9;--s;break;}
 switch(c) {
 case '+': state=7;break;
 case '-':expsign=-1;state=7;break;
 case '0':state=8;break;
 default:s=str;goto done;
 } break;
 case 7:
 expfound=1;
 while(c=='0') c=*s++;
 if(c>='1' && c<='9') {state=9;--s;break;}
 state=10;--s;break;
 case 8:
 if(c>='1' && c<='9') {state=9;--s;break;}
 if(c=='0') {expfound=1;state=8;break;}
 s=str;goto done;
 case 9:
 expfound=1;v=0;
 while(DIGIT_1F(c)) {
 v=v*10+c-'0';
 if(v>5200) {v=5201;break;}
 c=*s++;
 }
 exponent=v;
 while(DIGIT_1F(c)) c=*s++;
 state=10;--s;break;
 case 11:
 maybeimplicit:
 if(implicit) {
 str=s-1;
 switch(c) {
 case '-':expsign=-1;state=7;break;
 case '+':state=7;break;
 default:s=str;goto done;
 }
 break;
 }
 state=10;--s;break;
 }
 }
 done:
 *end=s;
 if(found) {
 if(n>24) {
 if(buf[23]>=5) ++buf[23];
 n=24;--p;++adjust;
 }
 if(n>0) {
 while(*--p==0) {--n;++adjust;}
 func_001F5B7B(buf,n,ld);
 e=exponent;
 if(expsign<0) e=-e;
 e+=adjust;
 if(!expfound) e+=scale;
 if(!point) e-=dec;
 if(e>5200) {
 lo=0;top=0x7fff;hi=0x80000000;extra=0;result=2;
 } else if(e< -5200) {
 result=1;extra=0;top=0;hi=0;lo=0;
 } else {
 func_001F60E2(ld,e,mult);
 extra=*(int *)ld;lo=*(int *)(ld+2);hi=*(int *)(ld+6);top=*(int *)(ld+10);
 }
 } else {extra=0;top=0;hi=0;lo=0;}
 } else {result=4;extra=0;top=0;hi=0;lo=0;}
 top|=sign;
 *(int *)(out+6)=hi;*(int *)(out+2)=lo;*(short *)(out+10)=(short)top;*(short *)out=(short)extra;
 return result;
}
#pragma optimize("", on)

static int func_001F54D0(int *punlock_flag, int *pfh, const char *path, int oflag, int shflag, int pmode)
{
    int fh;
    int filepos;
    char fileflags;
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
    D_002FB260[fh >> 5][fh & 0x1f].osfile = fileflags;

    if (!(fileflags & 0x48) && (fileflags & 0x80) && (oflag & 2)) {
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

    if (!(fileflags & 0x48) && (oflag & 8)) {
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

