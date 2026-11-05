/* 36 functions from 0x001E9250 to 0x001EA23F, found by Ghidra. */
#include "common.h"
#include <stdarg.h>

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
#include <string.h>

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
void func_001E9576(int a0, int a1, int a2) {
    int func_001E93CD(int, int, int, int);
    func_001E93CD(a0, a1, a2, 0);
}
#pragma optimize("s", on)
void func_001E958D(int a0, int a1, int a2) {
    int func_001E93CD(int, int, int, int);
    func_001E93CD(a0, a1, a2, 1);
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

#pragma optimize("", on)
void func_001E9F40(void) {
    int func_001EB302(...);
    func_001EB302(1);
}

void func_001E9F99(void) {
    int func_001E9E74(...);
    func_001E9E74(1);
}

#pragma optimize("s", on)
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
