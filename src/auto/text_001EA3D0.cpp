/* 3 functions from 0x001EA3D0 to 0x001EA469, found by Ghidra. */
#include "common.h"

extern int D_002F6A48;
int func_001F3B80(const char *a, const char *b);
int func_001E8D25(int c);

#pragma optimize("t", off)
#pragma optimize("y", on)
char *func_001EA3D0(const char *str, const char *ctrl)
{
    unsigned char map[32];
    int i;
    for (i = 0; i < 32; i++)
        map[i] = 0;
    while (*ctrl) {
        map[(unsigned char)*ctrl >> 3] |= (1 << ((unsigned char)*ctrl & 7));
        ctrl++;
    }
    while (*str) {
        if (map[(unsigned char)*str >> 3] & (1 << ((unsigned char)*str & 7)))
            return (char *)str;
        str++;
    }
    return 0;
}

int func_001EA410(const unsigned short *s)
{
    const unsigned short *p = s;
    while (*p++) {
    }
    return (p - s) - 1;
}

int func_001EA426(const char *dst, const char *src)
{
    int f, l;
    if (!D_002F6A48)
        return func_001F3B80(dst, src);
    do {
        f = func_001E8D25((unsigned char)*dst++);
        l = func_001E8D25((unsigned char)*src++);
    } while (f && f == l);
    return f - l;
}
#pragma optimize("y", off)

#pragma optimize("y", off)
