/* 36 functions from 0x001E9250 to 0x001EA23F, found by Ghidra. */
#include "common.h"
#include <stdarg.h>
struct S_001E9_FILE;
extern int D_002FB36C;
extern S_001E9_FILE **D_002FB368;
void func_001EB390(int);
void func_001E9F40(void);
void func_001EB138(int, S_001E9_FILE *);
void func_001EB18A(int, S_001E9_FILE *);
int func_001E9E46(S_001E9_FILE *);

/* CRT FILE, as the stdio functions in this file use it */
struct S_001E9_FILE {
    char *ptr;
    int cnt;
    char *base;
    int flag;
    int file;
    int charbuf;
    int bufsiz;
    char *tmpfname;
};

int func_001EDD36(S_001E9_FILE *stream, const char *fmt, va_list args);
int func_001ED8A7(int ch, S_001E9_FILE *stream);
int func_001E9DE9(S_001E9_FILE *stream);
int func_001EE8F1(int fh);
long func_001E9BE4(S_001E9_FILE *stream);
long func_001EE52F(int fh, long offset, int whence);

/* the CRT's FILE (only the fields these functions touch) */
struct S_001E9714_File {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    char pad14[8];
    char *_tmpfname;
};

extern int D_002AEA38;
extern unsigned short *D_002AEA30;
extern unsigned char *D_002FB260[];
int func_001EC5F1(int, int);
int *func_001ED075(void);

/* <ctype.h> macros as the CRT expands them: D_002AEA38 = __mb_cur_max, D_002AEA30 = _pctype */
#define CT_SPACE 0x8
#define CT_DIGIT 0x4
#define CT_ALPHA 0x103
#define isspace_001E93CD(c) (D_002AEA38 > 1 ? func_001EC5F1((int)(unsigned char)(c), CT_SPACE) : (D_002AEA30[(unsigned char)(c)] & CT_SPACE))
#define isdigit_001E93CD(c) (D_002AEA30[(unsigned char)(c)] & CT_DIGIT)
#define isalpha_001E93CD(c) (D_002AEA30[(unsigned char)(c)] & CT_ALPHA)
#define toupper_001E93CD(c) (((c) >= 'a' && (c) <= 'z') ? (c) - 'a' + 'A' : (c))
int func_001EDB4B(int fh, char *buf, int cnt);
int func_001E9DE9(S_001E9714_File *stream);
void func_001ED527(S_001E9714_File *stream);
int func_001ED48C(int fh);
void func_001E8390(void *p);
void func_001EB109(S_001E9714_File *stream);
void func_001EB15B(S_001E9714_File *stream);
int func_001E9714(S_001E9714_File *stream);
int func_001EDBF6(S_001E9714_File *stream);
int func_001EDD36(S_001E9714_File *stream, const char *format, char *arglist);
void func_001EDC7E(int buffing, S_001E9714_File *stream);
extern int D_002FB364;
extern int D_002F69EC;
int __stdcall func_001E0AE0(int heap, unsigned int flags, unsigned int size);
int func_001DF5B3(void);
int func_001EB3BE(unsigned int size);
void *func_001E8AA5(unsigned int size);
char *func_001F2B32(char *out, const char *name, int len, void *(*alloc)(unsigned int), void (*release)(void *), unsigned int flags);

/* exception classes thrown by __RTtypeid: vtable, message, free flag */
struct func_001F3244 {
    void *vtbl;
    const char *what;
    int doFree;
    func_001F3244(const char *msg);
    func_001F3244(const func_001F3244 &other);
};

struct func_001F3280 {
    void *vtbl;
    const char *what;
    int doFree;
    func_001F3280(const char *msg);
    func_001F3280(const func_001F3280 &other);
};

/* MSVC RTTI complete object locator: signature, offset, cdOffset, type descriptor */
struct S_001EA038_Locator {
    int signature;
    int offset;
    int cdOffset;
    void *typeDescriptor;
};

int __stdcall func_001F64F6(const void *p, unsigned int n);
/* _CxxThrowException(object, throw info) */
__declspec(noreturn) void __stdcall func_001F32E8(void *object, const void *info);
extern char D_0029F4BC[];
extern char D_0029F4AC[];
extern "C" unsigned long __cdecl _exception_code(void);

/* std::type_info as the CRT lays it out */
struct S_001E9FA2_TypeInfo {
    void *vtbl;
    char *_m_data;
    char _m_d_name[1];
    const char *func_001E9FA2(void);
};
#include <string.h>

/* CRT FILE with a 16-bit _flag, as fread reads it */
struct S_001E97B1_File {
    char *ptr;
    int cnt;
    char *base;
    short flag;
    short pad;
    int file;
    int charbuf;
    int bufsiz;
};

int __fastcall func_001E9250(int param_1, int param_2) {
    return param_2 - 1;
}

char *func_001E9260(char *str, int ch) {
    unsigned int rep;
    unsigned int word;
    unsigned int xword;
    unsigned int test;
    unsigned int sum;
    char *p = str;
    rep = (unsigned char)ch;
    rep |= rep << 8;
    while (((unsigned int)p & 3) != 0) {
        if (*(unsigned char *)p == (unsigned char)rep) {
            return p;
        }
        if (*(unsigned char *)p == 0) {
            return 0;
        }
        p++;
    }
    rep |= rep << 16;
    for (;;) {
        word = *(unsigned int *)p;
        xword = word ^ rep;
        sum = word + 0x7efefeff;
        test = (xword + 0x7efefeff) ^ ~xword;
        p += 4;
        if ((test & 0x81010100) == 0) {
            unsigned int ztest = sum ^ ~word;
            if ((ztest & 0x81010100) == 0) {
                continue;
            }
            if ((ztest & 0x1010100) != 0) {
                return 0;
            }
            if ((sum & 0x80000000) == 0) {
                return 0;
            }
            continue;
        }
        word = *(unsigned int *)(p - 4);
        if ((unsigned char)word == (unsigned char)rep) {
            return p - 4;
        }
        if ((unsigned char)word == 0) {
            return 0;
        }
        if ((unsigned char)(word >> 8) == (unsigned char)rep) {
            return p - 3;
        }
        if ((unsigned char)(word >> 8) == 0) {
            return 0;
        }
        if ((unsigned char)(word >> 16) == (unsigned char)rep) {
            return p - 2;
        }
        if ((unsigned char)(word >> 16) == 0) {
            return 0;
        }
        if ((unsigned char)(word >> 24) == (unsigned char)rep) {
            return p - 1;
        }
        if ((unsigned char)(word >> 24) == 0) {
            return 0;
        }
    }
}

double func_001E931E(char *str, char **endptr) {
    extern int D_002AEA38;
    extern unsigned short *D_002AEA30;
    extern double D_002AEC38;
    int func_001EC5F1(int, int);
    void *func_001ED0FC(void *, char *, int, int, int);
    int *func_001ED075(void);
    struct Res {
        int flags;
        int off;
        char pad8[8];
        double val;
        char pad18[8];
    };
    char *p = str;
    char *s;
    struct Res res;
    double v;
    for (;;) {
        unsigned int t;
        if (D_002AEA38 > 1) {
            t = func_001EC5F1(*(unsigned char *)p, 8);
        } else {
            t = D_002AEA30[*(unsigned char *)p] & 8;
        }
        if (t == 0) {
            break;
        }
        p++;
    }
    s = p;
    while (*s != 0) {
        s++;
    }
    void *r = func_001ED0FC(&res, p, (int)(s - p), 0, 0);
    if (endptr != 0) {
        *endptr = p + *(int *)((char *)r + 4);
    }
    unsigned int flags = *(unsigned int *)r;
    if ((flags & 0x240) != 0) {
        v = 0.0;
        if (endptr != 0) {
            *endptr = str;
        }
        return v;
    }
    if ((flags & 0x81) == 0) {
        if ((flags & 0x100) == 0) {
            return *(double *)((char *)r + 0x10);
        }
        v = 0.0;
    } else {
        v = D_002AEC38;
        if (*p == '-') {
            v = -v;
        }
    }
    int *err = func_001ED075();
    *err = 0x22;
    return v;
}

#pragma optimize("s", on)
#pragma optimize("y", off)
unsigned long func_001E93CD(const char *nptr, const char **endptr, int ibase, int flags)
{
    const char *p;
    char c;
    unsigned long number;
    unsigned int digval;
    unsigned long maxval;
    unsigned long maxrem;

    p = nptr;
    number = 0;
    c = *p++;
    for (;;) {
        unsigned int t;

        if (D_002AEA38 > 1) {
            t = func_001EC5F1((unsigned char)c, 8);
        } else {
            t = D_002AEA30[(unsigned char)c] & 8;
        }
        if (t == 0) {
            break;
        }
        c = *p++;
    }
    if (c == '-') {
        flags |= 2;
        c = *p++;
    } else if (c == '+') {
        c = *p++;
    }
    if (ibase < 0 || ibase == 1 || ibase > 36) {
        if (endptr) {
            *endptr = nptr;
        }
        return 0;
    } else if (ibase == 0) {
        if (c != '0') {
            ibase = 10;
        } else if (*p == 'x' || *p == 'X') {
            ibase = 16;
        } else {
            ibase = 8;
        }
    }
    if (ibase == 16) {
        if (c == '0' && (*p == 'x' || *p == 'X')) {
            ++p;
            c = *p++;
        }
    }
    maxval = 0xffffffffUL / ibase;
    maxrem = 0xffffffffUL % ibase;
    for (;;) {
        if (isdigit_001E93CD(c)) {
            digval = c - '0';
        } else if (isalpha_001E93CD(c)) {
            digval = toupper_001E93CD(c) - 'A' + 10;
        } else {
            break;
        }
        if (digval >= (unsigned int)ibase) {
            break;
        }
        flags |= 8;
        if (number < maxval || (number == maxval && (unsigned long)digval <= maxrem)) {
            number = number * ibase + digval;
        } else {
            flags |= 4;
        }
        c = *p++;
    }
    --p;
    if (!(flags & 8)) {
        if (endptr) {
            p = nptr;
        }
        number = 0;
    } else if ((flags & 4) ||
               (!(flags & 1) &&
                (((flags & 2) && (number > 0x80000000UL)) ||
                 (!(flags & 2) && (number > 0x7fffffffUL))))) {
        *func_001ED075() = 0x22;
        if (flags & 1) {
            number = 0xffffffffUL;
        } else if (flags & 2) {
            number = 0x80000000UL;
        } else {
            number = 0x7fffffffUL;
        }
    }
    if (endptr != 0) {
        *endptr = p;
    }
    if (flags & 2) {
        number = (unsigned long)(-(long)number);
    }
    return number;
}
#pragma optimize("", on)
/* strtoxl(nptr, endptr, ibase, flags): flags bit 0 = unsigned */
unsigned long func_001E93CD(const char *nptr, const char **endptr, int ibase, int flags);

#pragma optimize("s", on)
long func_001E9576(const char *nptr, const char **endptr, int ibase) {
    return func_001E93CD(nptr, endptr, ibase, 0);
}
#pragma optimize("s", on)
unsigned long func_001E958D(const char *nptr, const char **endptr, int ibase) {
    return func_001E93CD(nptr, endptr, ibase, 1);
}
#pragma optimize("s", on)
#pragma optimize("y", off)
char *func_001E95A4(char *string, const char *control) {
    int func_001EB7E9(void);
    unsigned char *str;
    const unsigned char *ctrl = (const unsigned char *)control;
    unsigned char map[32];
    int count;
    char *ptd = (char *)func_001EB7E9();
    for (count = 0; count < 32; count++)
        map[count] = 0;
    do {
        map[*ctrl >> 3] |= (1 << (*ctrl & 7));
    } while (*ctrl++);
    if (string)
        str = (unsigned char *)string;
    else
        str = *(unsigned char **)(ptd + 0x18);
    while ((map[*str >> 3] & (1 << (*str & 7))) && *str)
        str++;
    string = (char *)str;
    for (; *str; str++) {
        if (map[*str >> 3] & (1 << (*str & 7))) {
            *str++ = '\0';
            break;
        }
    }
    *(unsigned char **)(ptd + 0x18) = str;
    if (string == (char *)str)
        return 0;
    else
        return string;
}

#pragma optimize("y", off)
double func_001E9649(char *str) {
    extern int D_002AEA38;
    extern unsigned short *D_002AEA30;
    int func_001EC5F1(int, int);
    void *func_001ED0FC(void *, char *, int, int, int);
    struct Res {
        char pad0[0x10];
        double val;
    };
    char *p = str;
    struct Res res;
    void *r;

    for (;;) {
        unsigned int t;
        if (D_002AEA38 > 1) {
            t = func_001EC5F1(*(unsigned char *)p, 8);
        } else {
            t = D_002AEA30[*(unsigned char *)p] & 8;
        }
        if (t == 0) {
            break;
        }
        p++;
    }
    r = func_001ED0FC(&res, p, (int)strlen(p), 0, 0);
    return *(double *)((char *)r + 0x10);
}
int func_001E96A5(int a0, int a1, int a2) {
    int func_001ED2E9(void);
    int *func_001ED075(void);
    void func_001EB15B(int);
    int func_001ED181(int, int, int, int);
    int h;
    int result;

    h = func_001ED2E9();
    if (h == 0) {
        *func_001ED075() = 0x18;
        return 0;
    }
    __try {
        result = func_001ED181(a0, a1, a2, h);
    } __finally {
        func_001EB15B(h);
    }
    return result;
}

#pragma optimize("y", on)
void func_001E9701(int a0, int a1) {
    int func_001E96A5(int, int, int);
    func_001E96A5(a0, a1, 0x40);
}

int func_001E9714(S_001E9714_File *stream) {
    int result = -1;

    if (stream->_flag & 0x83) {
        result = func_001E9DE9(stream);
        func_001ED527(stream);
        if (func_001ED48C(stream->_file) < 0) {
            result = -1;
        } else if (stream->_tmpfname != 0) {
            func_001E8390(stream->_tmpfname);
            stream->_tmpfname = 0;
        }
    }
    stream->_flag = 0;
    return result;
}

int func_001E9760(S_001E9714_File *stream) {
    int result = -1;

    if (stream->_flag & 0x40) {
        stream->_flag = 0;
    } else {
        func_001EB109(stream);
        __try {
            result = func_001E9714(stream);
        } __finally {
            func_001EB15B(stream);
        }
    }
    return result;
}

#pragma optimize("t", off)
int func_001E98A9(int param_1, int param_2, int param_3, int param_4) {
    int func_001EB109(int);
    int func_001EB15B(int);
    int func_001E97B1(int, int, int, int);
    int result;
    func_001EB109(param_4);
    __try {
        result = func_001E97B1(param_1, param_2, param_3, param_4);
    } __finally {
        func_001EB15B(param_4);
    }
    return result;
}

unsigned int func_001E98F5(const void *buffer, unsigned int size, unsigned int num, S_001E9714_File *stream) {
    const char *data = (const char *)buffer;
    unsigned int total;
    unsigned int count;
    unsigned int bufsize;
    unsigned int nbytes;
    unsigned int nwritten;
    count = total = size * num;
    if (count == 0) {
        return 0;
    }
    if (stream->_flag & 0x10c) {
        bufsize = *(int *)((char *)stream + 0x18);
    } else {
        bufsize = 0x1000;
    }
    while (count != 0) {
        if ((stream->_flag & 0x108) && stream->_cnt != 0) {
            nbytes = (count < (unsigned int)stream->_cnt) ? count : stream->_cnt;
            memcpy(stream->_ptr, data, nbytes);
            count -= nbytes;
            stream->_cnt -= nbytes;
            stream->_ptr += nbytes;
            data += nbytes;
        } else if (count >= bufsize) {
            if (stream->_flag & 0x108) {
                if (func_001E9DE9(stream)) {
                    return (total - count) / size;
                }
            }
            nbytes = bufsize ? (count - count % bufsize) : count;
            nwritten = func_001EDB4B(stream->_file, (char *)data, nbytes);
            if (nwritten == (unsigned int)-1) {
                stream->_flag |= 0x20;
                return (total - count) / size;
            }
            count -= nwritten;
            data += nwritten;
            if (nwritten < nbytes) {
                stream->_flag |= 0x20;
                return (total - count) / size;
            }
        } else {
            if (func_001ED8A7(*data, (S_001E9_FILE *)stream) == -1) {
                return (total - count) / size;
            }
            ++data;
            --count;
            bufsize = *(int *)((char *)stream + 0x18) > 0 ? *(int *)((char *)stream + 0x18) : 1;
        }
    }
    return num;
}

int func_001E9A0C(int param_1, int param_2, int param_3, int param_4) {
    int func_001EB109(int);
    int func_001EB15B(int);
    int func_001E98F5(int, int, int, int);
    int result;
    func_001EB109(param_4);
    __try {
        result = func_001E98F5(param_1, param_2, param_3, param_4);
    } __finally {
        func_001EB15B(param_4);
    }
    return result;
}

int func_001E9A58(S_001E9714_File *str, const char *format, ...) {
    S_001E9714_File *stream = str;
    int buffing;
    int retval;

    func_001EB109(str);
    __try {
        buffing = func_001EDBF6(str);
        retval = func_001EDD36(str, format, (char *)&format + sizeof(format));
        func_001EDC7E(buffing, str);
    } __finally {
        func_001EB15B(stream);
    }
    return retval;
}

#pragma optimize("y", off)
int func_001E9AB6(char *buf, unsigned int count, const char *fmt, va_list ap)
{
    S_001E9_FILE str;
    int retval;

    str.flag = 0x42;
    str.base = buf;
    str.ptr = buf;
    str.cnt = count;
    retval = func_001EDD36(&str, fmt, ap);
    if (buf != 0) {
        if (--str.cnt >= 0) {
            *str.ptr = 0;
        } else {
            func_001ED8A7(0, &str);
        }
    }
    return retval;
}
#pragma optimize("y", on)

int func_001E9B0C(S_001E9_FILE *str, long offset, int whence)
{
    int *func_001ED075(void);
    S_001E9_FILE *stream = str;

    if (!(stream->flag & 0x83) ||
        ((whence != 0) && (whence != 1) && (whence != 2))) {
        *func_001ED075() = 0x16;
        return -1;
    }
    stream->flag &= ~0x10;
    if (whence == 1) {
        offset += func_001E9BE4(stream);
        whence = 0;
    }
    func_001E9DE9(stream);
    if (stream->flag & 0x80) {
        stream->flag &= ~(0x2 | 0x1);
    } else if ((stream->flag & 0x1) && (stream->flag & 0x8) &&
               !(stream->flag & 0x400)) {
        stream->bufsiz = 0x200;
    }
    return func_001EE52F(stream->file, offset, whence) == -1 ? -1 : 0;
}

int func_001E9B9B(S_001E9_FILE *stream, long offset, int whence)
{
    int func_001EB109(int);
    int func_001EB15B(int);
    int result;

    func_001EB109((int)stream);
    __try {
        result = func_001E9B0C(stream, offset, whence);
    } __finally {
        func_001EB15B((int)stream);
    }
    return result;
}

long func_001E9BE4(S_001E9_FILE *stream) {
    int *func_001ED075(void);
    unsigned int offset;
    long filepos;
    char *p;
    char *end;
    unsigned int rdcnt;
    int fd = stream->file;
    if (stream->cnt < 0) {
        stream->cnt = 0;
    }
    if ((filepos = func_001EE52F(fd, 0, 1)) < 0) {
        return -1;
    }
    if (!(stream->flag & 0x108)) {
        return filepos - stream->cnt;
    }
    offset = stream->ptr - stream->base;
    if (stream->flag & 3) {
        if (D_002FB260[fd >> 5][(fd & 0x1f) * 40 + 4] & 0x80) {
            for (p = stream->base; p < stream->ptr; p++) {
                if (*p == '\n') {
                    offset++;
                }
            }
        }
    } else if (!(stream->flag & 0x80)) {
        *func_001ED075() = 0x16;
        return -1;
    }
    if (filepos == 0) {
        return offset;
    }
    if (stream->flag & 1) {
        if (stream->cnt == 0) {
            offset = 0;
        } else {
            rdcnt = stream->cnt + (stream->ptr - stream->base);
            if (D_002FB260[fd >> 5][(fd & 0x1f) * 40 + 4] & 0x80) {
                if (func_001EE52F(fd, 0, 2) == filepos) {
                    p = stream->base;
                    end = p + rdcnt;
                    for (; p < end; p++) {
                        if (*p == '\n') {
                            rdcnt++;
                        }
                    }
                    if (stream->flag & 0x2000) {
                        rdcnt++;
                    }
                } else {
                    func_001EE52F(fd, filepos, 0);
                    if (rdcnt <= 0x200 && (stream->flag & 8) && !(stream->flag & 0x400)) {
                        rdcnt = 0x200;
                    } else {
                        rdcnt = stream->bufsiz;
                    }
                    if (D_002FB260[fd >> 5][(fd & 0x1f) * 40 + 4] & 4) {
                        rdcnt++;
                    }
                }
            }
            filepos -= rdcnt;
        }
    }
    return filepos + offset;
}

int func_001E9D46(S_001E9714_File *stream) {
    int func_001E9BE4(S_001E9714_File *);
    int result;
    func_001EB109(stream);
    __try {
        result = func_001E9BE4(stream);
    } __finally {
        func_001EB15B(stream);
    }
    return result;
}

int func_001E9D87(int fh, int mode) {
    int *func_001ED075(void);
    unsigned char *pfh = D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4;
    int oldmode = *pfh & 0x80;
    if (mode == 0x8000) {
        *pfh &= 0x7f;
    } else if (mode == 0x4000) {
        *pfh |= 0x80;
    } else {
        *func_001ED075() = 0x16;
        return -1;
    }
    return oldmode ? 0x4000 : 0x8000;
}

int func_001E9DE9(S_001E9714_File *stream) {
    int rc = 0;
    int nchar;
    if ((stream->_flag & 3) == 2 && (stream->_flag & 0x108) != 0) {
        nchar = stream->_ptr - stream->_base;
        if (nchar > 0) {
            if (func_001EDB4B(stream->_file, stream->_base, nchar) == nchar) {
                if (stream->_flag & 0x80)
                    stream->_flag &= ~2;
            } else {
                stream->_flag |= 0x20;
                rc = -1;
            }
        }
    }
    stream->_ptr = stream->_base;
    stream->_cnt = 0;
    return rc;
}

int func_001E9E46(S_001E9_FILE *str)
{
    if (func_001E9DE9(str)) {
        return -1;
    }
    if (str->flag & 0x4000) {
        return func_001EE8F1(str->file) ? -1 : 0;
    }
    return 0;
}

#pragma optimize("", on)
void func_001E9F40(void) {
    int func_001EB302(...);
    func_001EB302(1);
}

#pragma optimize("t", off)
int func_001E9F49(S_001E9714_File *stream)
{
    int func_001E9E74(int);
    int func_001E9E46(S_001E9714_File *);
    int result;

    if (stream == 0) {
        return func_001E9E74(0);
    }
    func_001EB109(stream);
    __try {
        result = func_001E9E46(stream);
    } __finally {
        func_001EB15B(stream);
    }
    return result;
}
void func_001E9F99(void) {
    int func_001E9E74(...);
    func_001E9E74(1);
}

#pragma optimize("t", off)
const char *S_001E9FA2_TypeInfo::func_001E9FA2(void)
{
    void func_001EB390(int n);
    int func_001EB302(...);
    char *und;
    char *tail;
    char *src;
    char *dst;
    char c;

    if (_m_data == 0) {
        und = func_001F2B32(0, _m_d_name + 1, 0, func_001E8AA5, func_001E8390, 0x2800);
        if (und == 0) {
            return 0;
        }
        tail = und + strlen(und);
        tail--;
        while (*tail == ' ') {
            *tail = 0;
            tail--;
        }
        func_001EB390(0xe);
        dst = _m_data = (char *)func_001E8AA5(strlen(und) + 1);
        if (dst != 0) {
            src = und;
            do {
                c = *src++;
                *dst++ = c;
            } while (c != 0);
        }
        func_001E8390(und);
        func_001EB302(0xe);
    }
    return _m_data;
}
void *func_001EA038(void *inptr)
{
    S_001EA038_Locator *locator;

    if (inptr == 0) {
        func_001F3244 e("Attempted a typeid of NULL pointer!");
        func_001F32E8(&e, D_0029F4BC);
    }
    __try {
        locator = ((S_001EA038_Locator **)*(void **)inptr)[-1];
        if (!func_001F64F6(locator->typeDescriptor, 8)) {
            return locator->typeDescriptor;
        }
        func_001F3280 e("Bad read pointer - no RTTI data!");
        func_001F32E8(&e, D_0029F4AC);
    } __except (_exception_code() == 0xc0000005) {
        func_001F3280 e("Access violation - no RTTI data!");
        func_001F32E8(&e, D_0029F4AC);
    }
}
void *func_001EA1A1(unsigned int num, unsigned int size)
{
    unsigned int total = num * size;
    void *p;

    if (total == 0) {
        total++;
    }
    for (;;) {
        p = 0;
        if (total <= 0xffffffe0) {
            if (D_002FB364 == 3) {
                total = (total + 0xf) & ~0xf;
            }
            p = (void *)func_001E0AE0(func_001DF5B3(), 8, total);
        }
        if (p != 0 || D_002F69EC == 0) {
            return p;
        }
        if (func_001EB3BE(total) == 0) {
            return 0;
        }
    }
}
char *func_001EA1EE(char *string) {
    char *cp;

    for (cp = string; *cp; ++cp) {
        if ('a' <= *cp && *cp <= 'z') {
            *cp += 'A' - 'a';
        }
    }
    return string;
}
#pragma optimize("", on)
#pragma optimize("t", off)
int func_001EA211(int c) {
    if (D_002AEA38 > 1) {
        return func_001EC5F1(c, 0x103);
    }
    return D_002AEA30[c] & 0x103;
}
#pragma optimize("", on)
