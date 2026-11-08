/* 2 functions from 0x001EBA57 to 0x001EC612, found by Ghidra. */
#include "common.h"

extern unsigned short *D_002AEA30;
extern int D_002AEA38;
extern int D_002AEA3C;
extern char D_00295040[];
int __fastcall func_001EBA41(int unused, void *stream);
int func_001EA291(int c);
int func_001F4ED9(int c, void *stream);
int func_001F4F45(unsigned short *pwc, const unsigned char *s, unsigned int n);

#pragma optimize("t", off)
int func_001EBA57(void *stream, unsigned char *format, char *arglist)
{
    int count = 0;
    int ch = 0;
    int c;

    for (;;) {
        if (*format == 0) break;
        c = *format;
        if (!(D_002AEA30[c] & 8)) break;
        count--;
        count++;
        ch = func_001EBA41(0, stream);
        while (func_001EA291(ch)) {
            ch = func_001EBA41(0, stream);
        }
        if (ch != -1) {
            func_001F4ED9(ch, stream);
        }
        format++;
        if (!func_001EA291(*format)) break;
    }
    (void)arglist;
    return count;
}

int func_001EC5F1(int c, int mask)
{
    if ((unsigned)(c + 1) <= 256) {
        return D_002AEA30[c] & mask;
    }
    return 0;
}
#pragma optimize("", on)
