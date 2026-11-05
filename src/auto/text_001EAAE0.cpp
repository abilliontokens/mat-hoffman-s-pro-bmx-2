/* 8 functions from 0x001EAAE0 to 0x001EAC71, found by Ghidra. */
#include "common.h"

struct S_001EAB4C_Record {
    unsigned long ExceptionCode;
    unsigned long ExceptionFlags;
};

int func_001EAB4C(volatile unsigned int *record, void *frame, void *context, void **dispatcher)
{
    int result = 1;
    if (record[1] & 6) {
        *dispatcher = frame;
        result = 3;
    }
    return result;
}
