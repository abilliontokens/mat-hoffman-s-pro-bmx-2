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


void func_001EAB1B(void)
{
}

extern "C" void __stdcall RtlUnwind(void *frame, void *target, void *rec, void *ret);
void func_001EAB2C(void *frame)
{
    RtlUnwind(frame, 0, 0, 0);
}

int func_001EAB4C(void *record, void *frame, void *context, void **dispatcher)
{
    struct Record {
        unsigned long ExceptionCode;
        unsigned long Reserved : 1;
        unsigned long Unwinding : 1;
        unsigned long ExitUnwind : 1;
    };
    Record *r = (Record *)record;
    int result = 1;

    if (r->Unwinding || r->ExitUnwind) {
        *dispatcher = frame;
        result = 3;
    }
    return result;
}

void func_001EAB6E(S_001EAB_Frame *frame, int stop)
{
    S_001EAB_Reg reg;

    reg.frame = frame;
    reg.level = -2;
    reg.handler = (void *)func_001EAB4C;
    reg.prev = (void *)__readfsdword(0);
    while (frame->tryLevel != -1 && frame->tryLevel != stop) {
        S_001EAB_Scope *scope = &frame->scopeTable[frame->tryLevel];
        reg.level = scope->prevLevel;
        frame->tryLevel = scope->prevLevel;
        if (scope->filter == 0) {
            func_001EAC02(0x101);
            scope->handler();
        }
    }
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

void __stdcall func_001EAC02(int code)
{
    D_002AE660.dest = code;
    D_002AE660.code = code;
    D_002AE660.frame = code;
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

