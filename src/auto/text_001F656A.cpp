/* 3 functions from 0x001F656A to 0x001F65E8, found by Ghidra. */
#include "common.h"

extern int D_002F6A48;
int func_001F65F0(const char *a, const char *b, unsigned int n);
int func_001E8D25(int c);

int func_001F6570(const char *a, const char *b, unsigned int n)
{
    int f, l;
    if (n) {
        if (!D_002F6A48)
            return func_001F65F0(a, b, n);
        do {
            f = func_001E8D25((unsigned char)*a++);
            l = func_001E8D25((unsigned char)*b++);
        } while (--n && f && f == l);
        return f - l;
    }
    return 0;
}

#pragma optimize("t", off)
#pragma optimize("y", on)
char *func_001F65C5(char *s)
{
    char *p = s;
    while (*p) {
        char c = *p;
        if (c >= 'A' && c <= 'Z')
            *p = c + 0x20;
        p++;
    }
    return s;
}
#pragma optimize("y", off)
