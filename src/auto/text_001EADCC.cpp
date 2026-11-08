/* 1 function from 0x001EADCC to 0x001EAE45, found by Ghidra. */
#include "common.h"

extern "C" void __cdecl longjmp(void *buf, int val);
void func_001EADCC(void *buf, int val)
{
    longjmp(buf, val);
}
