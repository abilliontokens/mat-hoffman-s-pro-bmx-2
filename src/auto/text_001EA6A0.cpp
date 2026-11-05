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
