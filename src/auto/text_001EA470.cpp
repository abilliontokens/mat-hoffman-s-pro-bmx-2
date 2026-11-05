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

unsigned __int64 __stdcall func_001EA470(unsigned int lo1, unsigned int hi1, unsigned int lo2, unsigned int hi2)
{
    if (hi2 == 0 && hi1 == 0) {
        return (unsigned __int64)lo1 * lo2;
    }
    return ((unsigned __int64)(((unsigned int)(((unsigned __int64)lo1 * lo2) >> 32)) + hi1 * lo2 + lo1 * hi2) << 32) | (unsigned int)((unsigned __int64)lo1 * lo2);
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
#pragma optimize("", on)

