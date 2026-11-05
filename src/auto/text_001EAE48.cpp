/* 13 functions from 0x001EAE48 to 0x001EB1AD, found by Ghidra. */
#include "common.h"

void func_001EAEC3(void) {
    int func_001EB390(...);
    func_001EB390(8);
}

void func_001EAECC(void) {
    int func_001EB302(...);
    func_001EB302(8);
}

void func_001EAF7F(int code) {
    int func_001EAED5(...);
    func_001EAED5(code, 1);
}

extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *cs);
void func_001EB138(int i, char *s) {
    int func_001EB390(...);
    if (i < 20) {
        func_001EB390(i + 16);
    } else {
        RtlEnterCriticalSection(s + 0x20);
    }
}

