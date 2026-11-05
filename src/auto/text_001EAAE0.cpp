/* 8 functions from 0x001EAAE0 to 0x001EAC71, found by Ghidra. */
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

/* one entry of an SEH scope table */
struct S_001EAB_Scope {
    int prevLevel;
    int filter;
    void (*handler)(void);
};

/* SEH frame as the compiler lays it out: registration record + scope table + try level */
struct S_001EAB_Frame {
    void *prev;
    void *handler;
    S_001EAB_Scope *scopeTable;
    int tryLevel;
};

/* registration record local_unwind2 links into fs:[0] */
struct S_001EAB_Reg {
    void *prev;
    void *handler;
    int level;
    S_001EAB_Frame *frame;
};

/* NLG (non-local goto) notification block */
struct S_001EAB_Nlg {
    int unk_0x0;
    int dest;
    int code;
    int frame;
};

extern S_001EAB_Nlg D_002AE660;

extern "C" unsigned long __readfsdword(unsigned long Offset);
#pragma intrinsic(__readfsdword)
void __stdcall func_001EAC02(int code);
int func_001EDD36(S_001EA_FILE *stream, const char *fmt, va_list args);
int func_001ED8A7(int ch, S_001EA_FILE *stream);


int func_001EAB4C(volatile unsigned int *record, void *frame, void *context, void **dispatcher)
{
    int result = 1;
    if (record[1] & 6) {
        *dispatcher = frame;
        result = 3;
    }
    return result;
}

int func_001EABD6(void)
{
    S_001EAB_Reg *reg = (S_001EAB_Reg *)__readfsdword(0);
    int result = 0;
    if (reg->handler == (void *)func_001EAB4C && reg->frame->tryLevel == reg->level) {
        result = 1;
    }
    return result;
}

#pragma optimize("t", off)
int func_001EAC1A(char *buf, int count, const char *fmt, ...)
{
    S_001EA_FILE str;
    int retval;
    va_list ap;

    va_start(ap, fmt);
    str.cnt = count;
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

