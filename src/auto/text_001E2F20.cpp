/* 7 functions from 0x001E2F20 to 0x001E3A20, found by Ghidra. */
#include "common.h"
#include <string.h>

extern unsigned int D_002F47D8;
extern unsigned int D_002F47DC;
extern int *D_002AE4F4;
extern int *D_002AE4F0;
extern int D_002AE4F8;
int __stdcall func_0025BBC0(int size);
void __stdcall func_0025BC30(void *p);
void __stdcall func_001E2F20(int a, unsigned int b);

extern "C" double __cdecl atan2(double, double);
extern "C" double __cdecl cos(double);
extern "C" double __cdecl sin(double);
extern double D_002766B8;
extern double D_0027F710;
extern float D_002756C8;
extern float D_002755EC;
extern float D_002755E8;

void __stdcall func_001E2F20(int a, unsigned int b)
{
    int cnt = D_002AE4F8;
    unsigned int idx = D_002F47DC;
    if (cnt == idx) {
        int *n = (int *)func_0025BBC0(cnt << 4);
        int *m;
        cnt = D_002AE4F8;
        memcpy(n, D_002AE4F0, cnt * 4);
        m = n + cnt * 2;
        memcpy(m, D_002AE4F4, cnt * 4);
        cnt += cnt;
        D_002AE4F8 = cnt;
        if (cnt != 0x40)
            func_0025BC30(D_002AE4F0);
        idx = D_002F47DC;
        D_002AE4F4 = m;
        D_002AE4F0 = n;
    }
    {
        unsigned int s = (b + 0x1f) & 0xffffffe0;
        unsigned int p = D_002F47D8;
        unsigned int t = s >> 5;
        t = (p >> 5) - t + 1;
        t &= 0x1f;
        s += t << 5;
        p += s;
        D_002F47D8 = p;
        D_002AE4F4[idx] = s;
        D_002AE4F0[idx] = a;
        D_002F47DC = idx + 1;
    }
}

int func_001E3000(void) {
    return D_002F47D8;
}

void __stdcall func_001E3010(int size) {
    int aligned = (size + 0x1f) & ~0x1f;
    int base = func_0025BBC0(D_002F47D8 + aligned);
    D_002F47D8 = 0;
    if (base != 0) {
        unsigned int count = D_002F47DC;
        if (count > 0) {
            int addr = base + aligned;
            int *sizes = D_002AE4F4;
            int diff = (char *)D_002AE4F0 - (char *)sizes;
            do {
                int *dst = *(int **)((char *)sizes + diff);
                *dst = addr;
                addr += *sizes;
                sizes++;
                count--;
            } while (count != 0);
        }
    }
    D_002F47DC = 0;
}

