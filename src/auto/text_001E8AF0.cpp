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
