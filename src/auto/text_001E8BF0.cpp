/* 2 functions from 0x001E8BF0 to 0x001E8D56, found by Ghidra. */
#include "common.h"

extern int D_002AEA38;
extern unsigned short *D_002AEA30;
int func_001EC5F1(int, int);

#pragma optimize("t", off)
char *func_001E8BF0(char *front, const char *back, unsigned int count)
{
    char *dst;
    const char *src;
    unsigned int w, t, rest;
    char c;

    if (count == 0) {
        return front;
    }
    dst = front;
    if ((unsigned int)dst & 3) {
        do {
            c = *dst++;
            if (c == 0) {
                dst--;
                goto found;
            }
        } while ((unsigned int)dst & 3);
    }
    for (;;) {
        w = *(unsigned int *)dst;
        t = (0x7efefeffU + w) ^ ~w;
        dst += 4;
        if ((t & 0x81010100) == 0) {
            continue;
        }
        w = *(unsigned int *)(dst - 4);
        if ((char)w == 0) {
            dst -= 4;
            break;
        }
        if ((char)(w >> 8) == 0) {
            dst -= 3;
            break;
        }
        if ((w & 0xff0000) == 0) {
            dst -= 2;
            break;
        }
        if ((w & 0xff000000) == 0) {
            dst -= 1;
            break;
        }
    }
found:
    src = back;
    if ((unsigned int)src & 3) {
        do {
            c = *src++;
            if (c == 0) {
                *dst = c;
                return front;
            }
            *dst++ = c;
            if (--count == 0) {
                *dst = 0;
                return front;
            }
        } while ((unsigned int)src & 3);
    }
    rest = count;
    count >>= 2;
    while (count != 0) {
        w = *(unsigned int *)src;
        t = (0x7efefeffU + w) ^ ~w;
        w = *(unsigned int *)src;
        src += 4;
        if ((t & 0x81010100) != 0) {
            if ((char)w == 0) {
                *dst = (char)w;
                return front;
            }
            if ((char)(w >> 8) == 0) {
                *(unsigned short *)dst = (unsigned short)w;
                return front;
            }
            if ((w & 0xff0000) == 0) {
                *(unsigned short *)dst = (unsigned short)w;
                dst[2] = 0;
                return front;
            }
            if ((w & 0xff000000) == 0) {
                *(unsigned int *)dst = w;
                return front;
            }
        }
        *(unsigned int *)dst = w;
        dst += 4;
        count--;
    }
    count = rest & 3;
    while (count != 0) {
        c = *src++;
        *dst++ = c;
        if (c == 0) {
            return front;
        }
        count--;
    }
    *dst = 0;
    return front;
}

int func_001E8D25(int c)
{
    int upper;
    if (D_002AEA38 > 1) {
        upper = func_001EC5F1(c, 1);
    } else {
        upper = D_002AEA30[c] & 1;
    }
    if (upper) {
        return c + 0x20;
    }
    return c;
}
#pragma optimize("", on)
