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
void __fastcall func_001E7410(int, int, int);
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

static __declspec(noinline) void func_001E7880(int n, float *a, int nw, float *w)
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

void func_001E7D20(int n, float *a, int y, float *z)
{
    int q;

    func_001E55E0(n, a, z + (y - 2 * (n >> 2)));
    while (n > 0x200) {
        q = n >> 2;
        func_001E7D20(q, a, y, z);
        func_001E7DC0(q, a + q, y, z);
        func_001E7D20(q, a + 2 * q, y, z);
        a += 3 * q;
        func_001E55E0(q, a, z + (y - 2 * (q >> 2)));
        n = q;
    }
    func_001E7480(n, a, y, z);
}

void func_001E7DC0(int n, float *a, int y, float *z)
{
    int q = n >> 2;
    func_001E59B0(n, a, z + (y - n));
    while (n > 0x200) {
        func_001E7D20(q, a, y, z);
        func_001E7DC0(q, a + q, y, z);
        func_001E7D20(q, a + q * 2, y, z);
        a += q * 3;
        n = q;
        q = n >> 2;
        func_001E59B0(n, a, z + (y - n));
    }
    func_001E7880(n, a, y, z);
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

extern "C" void func_001E4D60(int n, float *a, float *w);
extern "C" void func_001E3A20(int n, float *a, int nw);
extern "C" void D_001E4300(void);
extern "C" void D_001E4480(void);
extern "C" void D_001E7010(void);
void __fastcall func_001E7F90(float *a, float *w, int n, int *ip, int nw)
{
    int m;
    float x0, x1;

    if (n > 32) {
        m = n >> 2;
        func_001E4D60(n, a, w + (nw - m));
        if (n > 512) {
            func_001E7D20(m, a, nw, w);
            func_001E7DC0(m, a + m, nw, w);
            func_001E7D20(m, a + 2 * m, nw, w);
            func_001E7D20(m, a + 3 * m, nw, w);
        } else if (m > 32) {
            func_001E7480(n, a, nw, w);
        } else {
            func_001E7410(n, (int)w, nw);
        }
        func_001E3A20(n, a, nw);
        return;
    }
    if (n > 8) {
        if (n == 32) {
            ((void (__fastcall *)(float *, float *))func_001E5F20)(w + nw - 8, a);
            D_001E4300();
        } else {
            ((void (__fastcall *)(float *, float *))func_001E6B50)(w, a);
            D_001E4480();
        }
        return;
    }
    if (n == 8) {
        D_001E7010();
        return;
    }
    if (n == 4) {
        x0 = a[0] - a[2];
        x1 = a[1] - a[3];
        a[0] = a[0] + a[2];
        a[1] = a[3] + a[1];
        a[2] = x0;
        a[3] = x1;
    }
}

void __fastcall func_001E30E0(int *, int);
void __fastcall func_001E3240(int *, int);
void __fastcall func_001E7E60(int, int, int, int);
void __fastcall func_001E7F90(int, int, int, int);
void __fastcall func_001E70B0(int, int);
void __fastcall func_001E7170(int, int);
extern float D_002755E8;
void __stdcall func_001E80C0(int n, int sign, int a2, int *h, int *d) {
    float *f = (float *)h;
    int q = h[0];
    if (n > q * 4) {
        q = n >> 2;
        func_001E30E0(h, q);
    }
    int r = h[1];
    if (n > r * 4) {
        r = n >> 2;
        func_001E3240(h, r);
    }
    if (sign >= 0) {
        if (n > 4) {
            func_001E7E60(n, (int)h, a2 + 8, q);
            func_001E70B0((int)(d + q), n);
        } else if (n == 4) {
            func_001E7E60(4, (int)h, a2 + 8, q);
        }
        float t = f[0] - f[1];
        f[0] = f[0] + f[1];
        f[1] = t;
    } else {
        float t = (f[0] - f[1]) * D_002755E8;
        f[1] = t;
        f[0] = f[0] - t;
        if (n > 4) {
            func_001E7170((int)(d + q), n);
            func_001E7F90(n, (int)h, a2 + 8, q);
        } else if (n == 4) {
            func_001E7F90(4, (int)h, a2 + 8, q);
        }
    }
}

void __fastcall func_001E7230(int, int);
void __cdecl func_001E7230(int, float *, int);
void __fastcall func_001E30E0(int, int *);
void __fastcall func_001E7F90(float *, float *, int, int *, int);
void __fastcall func_001E7E60(float *, float *, int, int *, int);
void __fastcall func_001E7170(float *, float *, int, int);
void __fastcall func_001E70B0(float *, float *, int, int);
struct C_001E7170 { void func_001E7170(int n, int nc); };
struct C_001E70B0 { void func_001E70B0(int n, int nc); };
void __stdcall func_001E8200(int n, int isgn, float *a, int *ip, float *w) {
    int j;
    float xr;
    float *c;
    int nw = ip[0];
    if (n > nw * 4) {
        nw = n >> 2;
        func_001E30E0(nw, ip);
    }
    int nc = ip[1];
    if (n > nc) {
        nc = n;
        func_001E3240(ip, nc);
    }
    if (isgn < 0) {
        xr = a[n - 1];
        for (j = n - 2; j >= 2; j -= 2) {
            a[j + 1] = a[j] - a[j - 1];
            a[j] = a[j - 1] + a[j];
        }
        a[1] = a[0] - xr;
        a[0] = xr + a[0];
        if (n > 4) {
            func_001E7170(w + nw, a, n, nc);
            func_001E7F90(a, w, n, ip + 2, nw);
        } else if (n == 4) {
            func_001E7F90(a, w, 4, ip + 2, nw);
        }
    }
    c = w + nw;
    func_001E7230(n, a, nc);
    if (isgn >= 0) {
        if (n > 4) {
            func_001E7E60(a, w, n, ip + 2, nw);
            func_001E70B0(c, a, n, nc);
        } else if (n == 4) {
            func_001E7E60(a, w, 4, ip + 2, nw);
        }
        xr = a[0] - a[1];
        a[0] = a[1] + a[0];
        for (j = 2; j < n; j += 2) {
            a[j - 1] = a[j] - a[j + 1];
            a[j] = a[j + 1] + a[j];
        }
        a[n - 1] = xr;
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
void func_001E83DD()
{
}

#pragma optimize("", on)

void func_001E83DF(void) {
    int func_001EB302(...);
    func_001EB302(4);
}
