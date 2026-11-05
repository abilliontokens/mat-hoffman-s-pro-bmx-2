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

extern "C" unsigned long __readfsdword(unsigned long Offset);
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
