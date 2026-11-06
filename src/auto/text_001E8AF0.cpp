/* 3 functions from 0x001E8AF0 to 0x001E8BE9, found by Ghidra. */
#include "common.h"

struct S_001E8B76 {
    char *cur;
    int len;
    char *start;
    int flags;
    int unk[4];
};

void func_001EBA57(struct S_001E8B76 *ctx, char *fmt, char *args);

char *func_001E8AF0(char *str, char *sub)
{
    char *s = str;
    char *s1;
    char *s2;

    if (*sub == 0)
        return str;
    for (;;) {
        char c = *s;
        for (;;) {
            s++;
            if (c == *sub)
                break;
            if (c == 0)
                return 0;
            c = *s;
        }
        s1 = s;
        s2 = sub + 1;
        while (*s2 != 0 && *s1 == *s2) {
            s1++;
            s2++;
        }
        if (*s2 == 0)
            return s - 1;
    }
}

#pragma optimize("s", on)
void func_001E8B76(char *str, char *fmt, ...)
{
    struct S_001E8B76 ctx;
    char *p;
    char *q;
    char c;

    ctx.flags = 0x49;
    ctx.start = str;
    ctx.cur = str;
    q = str + 1;
    p = str;
    do {
        c = *p;
        p++;
    } while (c != 0);
    ctx.len = p - q;
    func_001EBA57(&ctx, fmt, (char *)(&fmt + 1));
}
#pragma optimize("", on)
int func_001E8BB0(char *a, char *b, unsigned int n)
{
    if (n == 0)
        return 0;
    while (--n != 0 && *a != 0 && *a == *b) {
        a++;
        b++;
    }
    return (int)(unsigned char)*a - (int)(unsigned char)*b;
}

