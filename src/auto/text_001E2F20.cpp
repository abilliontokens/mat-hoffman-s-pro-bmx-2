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

extern "C" double __cdecl atan(double);
#pragma intrinsic(atan)
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

void func_001E30E0(int n, int *hdr, float *tab)
{
    int m;
    int off;
    int off2;
    int j;
    int k;
    float step;
    float c;
    float x;

    hdr[0] = n;
    hdr[1] = 1;
    if (n > 2) {
        m = n >> 1;
        step = (float)(atan2(D_002766B8, 1.0) / m);
        tab[0] = 1.0f;
        c = (float)cos(m * step);
        tab[1] = c;
        if (m >= 4) {
            tab[2] = (float)(D_0027F710 / cos(step + step));
            tab[3] = (float)(D_0027F710 / cos(step * D_002756C8));
        }
        for (j = 4; j < m; j += 4) {
            x = j * step;
            tab[j] = (float)cos(x);
            tab[j + 1] = (float)sin(x);
            x = x * D_002755EC;
            tab[j + 2] = (float)cos(x);
            tab[j + 3] = (float)sin(x);
        }
        off = 0;
        while (m > 2) {
            off2 = off + m;
            m >>= 1;
            tab[off2 + 1] = c;
            tab[off2] = 1.0f;
            if (m >= 4) {
                tab[off2 + 2] = D_002755E8 / tab[off + 4];
                tab[off2 + 3] = D_002755E8 / tab[off + 6];
                for (k = 4; k < m; k += 4) {
                    tab[off2 + k] = tab[off + 2 * k];
                    tab[off2 + k + 1] = tab[off + 2 * k + 1];
                    tab[off2 + k + 2] = tab[off + 2 * k + 2];
                    tab[off2 + k + 3] = tab[off + 2 * k + 3];
                }
            }
            off = off2;
        }
    }
}

