/* 6 functions from 0x001EA6A0 to 0x001EAADD, found by Ghidra. */
#include "common.h"
#include <stdarg.h>

/* CRT FILE, as used by the string-formatting wrappers */
struct S_001EA_FILE {
    char *ptr;
    int cnt;
    char *base;
    int flag;
    int file;
    int charbuf;
    int bufsiz;
    char *tmpfname;
};

int func_001F3C55(S_001EA_FILE *stream, const unsigned short *fmt, va_list args);
int func_001ED8A7(int ch, S_001EA_FILE *stream);

#pragma optimize("t", off)
unsigned short *func_001EA9DD(const unsigned short *wcs1, const unsigned short *wcs2)
{
    unsigned short *cp = (unsigned short *)wcs1;
    unsigned short *s1;
    unsigned short *s2;

    if (!*wcs2) {
        return (unsigned short *)wcs1;
    }
    while (*cp) {
        s1 = cp;
        s2 = (unsigned short *)wcs2;
        while (*s1 && *s2 && !(*s1 - *s2)) {
            s1++;
            s2++;
        }
        if (!*s2) {
            return cp;
        }
        cp++;
    }
    return 0;
}

int func_001EAA3B(const unsigned short *src, const unsigned short *dst)
{
    int ret = 0;
    while (!(ret = (int)(*src - *dst)) && *dst) {
        ++src;
        ++dst;
    }
    if (ret < 0) {
        ret = -1;
    } else if (ret > 0) {
        ret = 1;
    }
    return ret;
}

#pragma optimize("t", off)
int func_001EAA6D(unsigned short *buf, int count, const unsigned short *fmt, ...)
{
    S_001EA_FILE str;
    int retval;
    va_list ap;

    va_start(ap, fmt);
    str.base = (char *)buf;
    str.ptr = (char *)buf;
    str.cnt = count * 2;
    str.flag = 0x42;
    retval = func_001F3C55(&str, fmt, ap);
    if (--str.cnt >= 0) {
        *str.ptr++ = 0;
    } else {
        func_001ED8A7(0, &str);
    }
    if (--str.cnt >= 0) {
        *str.ptr++ = 0;
    } else {
        func_001ED8A7(0, &str);
    }
    return retval;
}
#pragma optimize("", on)

#pragma optimize("", on)
