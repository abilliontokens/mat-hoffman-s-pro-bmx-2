/* 11 functions from 0x001E7480 to 0x001E83E8, found by Ghidra. */
#include "common.h"

extern int D_002FB364;
void func_001EB390(int n);
int func_001EB302(...);
int func_001DF5B3(void);
int __stdcall func_001DF59C(int heap, int flags, void *p);

void __fastcall func_001E4500(float *dst, int, int, int, int, int, int);
void __fastcall func_001E7D20(int, float *, int, int, int);
void __fastcall func_001E7DC0(int, float *, int, int, int);
void __fastcall func_001E7410(int, int, int, int, int, int);
void __fastcall func_001E32D0(int, int);
void __fastcall func_001E5F20(float *, int, int, int, int);
void __fastcall func_001E4220(float *);
void __fastcall func_001E6B50(float *, int, int, int);
void __fastcall func_001E6F70(float *);
void __fastcall func_001E7480(int, int, float *, int, int, int);
void func_001E7D20(int n, float *a, int y, float *z);
void func_001E7DC0(int n, float *a, int y, float *z);
extern "C" void func_001E55E0(int n, float *a, float *w);
extern "C" void func_001E59B0(int n, float *a, float *w);
extern "C" void func_001E5F20(float *a, float *w);
extern "C" void func_001E64D0(float *a, float *w);
extern "C" void func_001E6B50(float *a, float *w);
extern "C" void func_001E6D40(float *a, float *w);
void func_001E7480(int n, float *a, int nw, float *w)
{
    int j, k, m, mh;

    m = n >> 2;
    mh = n >> 3;
    while (m > 128) {
        for (k = m; k < n; k *= 4) {
            for (j = k - m; j < n; j += 4 * k) {
                func_001E55E0(m, a + j, w + (nw - mh));
                func_001E59B0(m, a + j + 2 * k, w + (nw - m));
                func_001E55E0(m, a + j + 3 * k, w + (nw - mh));
            }
        }
        func_001E55E0(m, a + (n - m), w + (nw - mh));
        mh = m >> 1;
        m = m >> 2;
    }
    for (k = m; k < n; k *= 4) {
        for (j = k - m; j < n; j += 4 * k) {
            func_001E55E0(m, a + j, w + (nw - mh));
            if (m == 128) {
                func_001E5F20(a + j, w + nw);
                func_001E64D0(a + j, w + nw);
                func_001E5F20(a + j, w + nw);
                func_001E5F20(a + j, w + nw);
            } else {
                func_001E6B50(a + j, w + nw);
                func_001E6D40(a + j, w + nw);
                func_001E6B50(a + j, w + nw);
                func_001E6B50(a + j, w + nw);
            }
            func_001E59B0(m, a + j + 2 * k, w + (nw - m));
            func_001E55E0(m, a + j + 3 * k, w + (nw - mh));
        }
    }
    func_001E55E0(m, a + (n - m), w + (nw - mh));
    if (m == 128) {
        func_001E5F20(a + (n - m), w + nw);
        func_001E64D0(a + (n - m), w + nw);
        func_001E5F20(a + (n - m), w + nw);
        func_001E5F20(a + (n - m), w + nw);
    } else {
        func_001E6B50(a + (n - m), w + nw);
        func_001E6D40(a + (n - m), w + nw);
        func_001E6B50(a + (n - m), w + nw);
        func_001E6B50(a + (n - m), w + nw);
    }
}

void func_001E7880(int n, float *a, int nw, float *w)
{
    int h, j, k, m;
    float *tw;

    m = n >> 2;
    h = n >> 1;
    while (m > 128) {
        for (k = m; k < h; k *= 4) {
            tw = w + (nw - (m >> 1));
            for (j = k - m; j < h; j += 2 * k) {
                func_001E55E0(m, a + j, tw);
                func_001E55E0(m, a + j + h, tw);
            }
            tw = w + (nw - m);
            for (j = 2 * k - m; j < h; j += 4 * k) {
                func_001E59B0(m, a + j, tw);
                func_001E59B0(m, a + j + h, tw);
            }
        }
        m = m >> 2;
    }
    for (k = m; k < h; k *= 4) {
        tw = w + (nw - (m >> 1));
        for (j = k - m; j < h; j += 2 * k) {
            func_001E55E0(m, a + j, tw);
            if (m == 128) {
                func_001E5F20(a + j, w + nw - 8);
                func_001E64D0(a + j, w + nw - 32);
                func_001E5F20(a + j, w + nw - 8);
                func_001E5F20(a + j, w + nw - 8);
            } else {
                func_001E6B50(a + j, w + nw - 16);
                func_001E6D40(a + j, w + nw - 16);
                func_001E6B50(a + j, w + nw - 16);
                func_001E6B50(a + j, w + nw - 16);
            }
            func_001E55E0(m, a + j + h, tw);
            if (m == 128) {
                func_001E5F20(a + j + h, w + nw - 8);
                func_001E64D0(a + j + h, w + nw - 32);
                func_001E5F20(a + j + h, w + nw - 8);
                func_001E5F20(a + j + h, w + nw - 8);
            } else {
                func_001E6B50(a + j + h, w + nw - 16);
                func_001E6D40(a + j + h, w + nw - 16);
                func_001E6B50(a + j + h, w + nw - 16);
                func_001E6B50(a + j + h, w + nw - 16);
            }
        }
        tw = w + (nw - m);
        for (j = 2 * k - m; j < h; j += 4 * k) {
            func_001E59B0(m, a + j, tw);
            if (m == 128) {
                func_001E5F20(a + j, w + nw - 8);
                func_001E64D0(a + j, w + nw - 32);
                func_001E5F20(a + j, w + nw - 8);
                func_001E64D0(a + j, w + nw - 32);
            } else {
                func_001E6B50(a + j, w + nw - 16);
                func_001E6D40(a + j, w + nw - 16);
                func_001E6B50(a + j, w + nw - 16);
                func_001E6D40(a + j, w + nw - 16);
            }
            func_001E59B0(m, a + j + h, tw);
            if (m == 128) {
                func_001E5F20(a + j + h, w + nw - 8);
                func_001E64D0(a + j + h, w + nw - 32);
                func_001E5F20(a + j + h, w + nw - 8);
                func_001E64D0(a + j + h, w + nw - 32);
            } else {
                func_001E6B50(a + j + h, w + nw - 16);
                func_001E6D40(a + j + h, w + nw - 16);
                func_001E6B50(a + j + h, w + nw - 16);
                func_001E6D40(a + j + h, w + nw - 16);
            }
        }
    }
}

void __fastcall func_001E7E60(int n, int x3, int n2, int y, int z) {
    if (n > 0x20) {
        int q = n >> 2;
        int off = y - q;
        func_001E4500((float *)n2 + off, 0, 0, 0, n, q, 0);
        if (n > 0x200) {
            func_001E7D20(q, (float *)n2, y, 0, 0);
            func_001E7DC0(q, (float *)n2 + q, y, 0, 0);
            func_001E7D20(q, (float *)n2 + q * 2, y, 0, 0);
            func_001E7D20(q, (float *)n2 + q * 3, y, 0, 0);
        } else if (q > 0x20) {
            func_001E7480(q, 0, (float *)n2, n, y, 0);
        } else {
            func_001E7410(0, q, y, 0, 0, 0);
        }
        func_001E32D0(x3, n);
        return;
    }
    if (n > 8) {
        if (n == 0x20) {
            func_001E5F20((float *)n2, y, 0, 0, 0);
            func_001E4220((float *)n2);
            return;
        }
        func_001E6B50((float *)n2, n, 0, 0);
        return;
    }
    if (n == 8) {
        func_001E6F70((float *)n2);
        return;
    }
    if (n == 4) {
        float *data = (float *)n2;
        float t0 = data[0];
        float t1 = data[1];
        data[0] = data[0] + data[2];
        data[1] = data[3] + data[1];
        data[2] = t0 - data[2];
        data[3] = t1 - data[3];
    }
}

#pragma optimize("t", off)
void func_001E8390(void *p)
{
    int hdr;
    if (p == 0)
        return;
    if (D_002FB364 == 3) {
        func_001EB390(4);
        __try {
            hdr = 0;
        } __finally {
            func_001EB302(4);
        }
        if (hdr != 0)
            return;
    }
    func_001DF59C(func_001DF5B3(), 0, p);
}
#pragma optimize("", on)

void func_001E83DF(void) {
    int func_001EB302(...);
    func_001EB302(4);
}
