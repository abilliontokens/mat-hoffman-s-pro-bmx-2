/* 5 functions from 0x001EA470 to 0x001EA5FE, found by Ghidra. */
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

int func_001EDD36(S_001EA_FILE *stream, const char *fmt, va_list args);
int func_001F3C55(S_001EA_FILE *stream, const unsigned short *fmt, va_list args);
int func_001ED8A7(int ch, S_001EA_FILE *stream);

unsigned __int64 __stdcall func_001EA470(unsigned __int64 a, unsigned __int64 b)
{
    return a * b;
}

#pragma optimize("y", on)
#pragma optimize("t", off)
unsigned short *func_001EA4A4(unsigned short *dest, const unsigned short *source, unsigned int count)
{
    unsigned short *start = dest;
    while (count && (*dest++ = *source++)) {
        count--;
    }
    if (count) {
        while (--count) {
            *dest++ = 0;
        }
    }
    return start;
}

#pragma optimize("t", off)
int func_001EA4E1(char *buf, const char *fmt, ...)
{
    S_001EA_FILE str;
    int retval;
    va_list ap;

    va_start(ap, fmt);
    str.cnt = 0x7fffffff;
    str.flag = 0x42;
    str.base = buf;
    str.ptr = buf;
    retval = func_001EDD36(&str, fmt, ap);
    if (buf) {
        if (--str.cnt >= 0) {
            *str.ptr++ = 0;
        } else {
            func_001ED8A7(0, &str);
        }
    }
    return retval;
}

#pragma optimize("t", off)
int func_001EA539(char *buf, const unsigned short *fmt, va_list ap)
{
    S_001EA_FILE str;
    int retval;

    str.base = buf;
    str.ptr = buf;
    str.flag = 0x42;
    str.cnt = 0x7fffffff;
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

#pragma optimize("y", on)
#pragma optimize("t", off)
int func_001EA5A7(char *buf, const char *fmt, va_list ap)
{
    S_001EA_FILE str;
    int retval;

    str.cnt = 0x7fffffff;
    str.flag = 0x42;
    str.base = buf;
    str.ptr = buf;
    retval = func_001EDD36(&str, fmt, ap);
    if (buf) {
        if (--str.cnt >= 0) {
            *str.ptr++ = 0;
        } else {
            func_001ED8A7(0, &str);
        }
    }
    return retval;
}
#pragma optimize("", on)

#pragma optimize("", on)

#pragma optimize("", on)

#pragma optimize("", on)

