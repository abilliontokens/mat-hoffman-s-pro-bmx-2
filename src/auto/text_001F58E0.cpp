/* 18 functions from 0x001F58E0 to 0x001F63F6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct S_001F5975_Record {
    int code;
    int flags;
    void *record;
    void *address;
    int numParams;
    int info[15];
};

struct S_001F5975_Pointers {
    S_001F5975_Record *record;
    void *context;
};

typedef int (__stdcall *PFN_001F5975)(S_001F5975_Pointers *);

extern PFN_001F5975 D_002F6A70;
PFN_001F5975 __stdcall func_001DE7D4(PFN_001F5975 filter);
int __stdcall func_001F5975(S_001F5975_Pointers *pointers);
void func_001F6292(void);
int func_001F627B(PFN_001F5975 fn);

undefined4 func_001F59BB(void)
{
  D_002F6A70 = func_001DE7D4(&func_001F5975);
  return 0;
}

int func_001F59D9(void) {
    return 0;
}

#pragma optimize("sy", on)
int func_001F5AA1(unsigned int a, unsigned int b, unsigned int *out)
{
    unsigned int sum = a + b;
    int overflow = 0;
    if (sum < a || sum < b) {
        overflow = 1;
    }
    *out = sum;
    return overflow;
}
