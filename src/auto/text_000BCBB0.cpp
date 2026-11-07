/* 1 function from 0x000BCBB0 to 0x000BDF30, found by Ghidra. */
#include "common.h"

extern "C" void *_func_001E8A44(int);
extern "C" int _func_001ADCC0(char *, int, const char *, ...);
extern "C" void* _func_001E8A44(int);
extern "C" int _func_001ADCC0(char*, int, const char*, ...);
void _func_000BCBB0(void) {
    char buf[260];
    _func_001ADCC0(buf, 0x104, "%d", 1);
}
