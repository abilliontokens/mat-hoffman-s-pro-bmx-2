/* 1 function from 0x000AD5C0 to 0x000ADF20, found by Ghidra. */
#include "common.h"
#include <string.h>
struct Str3 { char c[3]; };
extern Str3 D_0027B520, D_0027B518, D_0027B510, D_0027B50C;
struct T {
    int f0;
    char pad4[0x28 - 4];
    int a28[10];
    int a50[10];
    int a78[10];
    int aA0[10];
    int aC8[10];
    int aF0[10];
    int a118[10];
    int f140;
    void func_000A7650(int c);
    void func_000A7500(void);
    int func_000AD5C0(int a, int *out, int c);
};

int T::func_000AD5C0(int a, int *out, int c)
{
    char buf[3][0x104];
    volatile int t[5];
    int u[5];
    unsigned char x[3];
    int cnt, i, j, k, flag, s, n, v, r;

    func_000A7650(c);
    n = f140;
    if (n == 0)
        return 0;
    if (a == -1) {
        for (i = 0; i < 5; i++) {
            if (aF0[i])
                t[i] = a28[i];
            else
                t[i] = -2;
        }
        cnt = 0;
        flag = -1;
        v = -1;
        u[0] = v;
        u[1] = v;
        u[2] = v;
        u[3] = v;
        u[4] = v;
        v = t[0];
        if (v == -1) { if (flag != -1) { u[cnt++] = -1; flag = -1; } } else if (flag != v) { u[cnt++] = v; flag = v; }
        v = t[1];
        if (v == -1) { if (flag != -1) { u[cnt++] = -1; flag = -1; } } else if (flag != v) { u[cnt++] = v; flag = v; }
        v = t[2];
        if (v == -1) { if (flag != -1) { u[cnt++] = -1; flag = -1; } } else if (flag != v) { u[cnt++] = v; flag = v; }
        v = t[3];
        if (v == -1) { if (flag != -1) { u[cnt++] = -1; flag = -1; } } else if (flag != v) { u[cnt++] = v; flag = v; }
        v = t[4];
        if (v == -1) { if (flag != -1) { u[cnt++] = -1; flag = -1; } } else if (flag != v) { u[cnt++] = v; flag = v; }
        if (u[0] == 4) {
            if (u[1] != -1)
                return 0;
            if (u[2] == 6) {
                if (u[3] == -1 && u[4] == 6) {
                    for (i = 1; i < f140; i++)
                        a78[i] = 0;
                    return 5;
                }
                for (i = 1; i < f140; i++)
                    a78[i] = 0;
                return 2;
            }
            if (u[2] == 4 && u[3] == -1 && u[4] == 4) {
                for (i = 1; i < f140; i++)
                    a78[i] = 0;
                return 3;
            }
            return 0;
        }
        if (u[0] == 6) {
            if (u[1] != -1)
                return 0;
            if (u[2] != 4)
                return 0;
            if (u[3] == -1 && u[4] == 4) {
                for (i = 1; i < f140; i++)
                    a78[i] = 0;
                return 4;
            }
            for (i = 1; i < f140; i++)
                a78[i] = 0;
            return 1;
        }
        return 0;
    }
    if (a == 4) {
        cnt = 0;
        flag = 1;
        for (i = 0; i < 5; i++) {
            t[i] = -2;
            if (flag && (a28[i] == 4 || a28[i] == 0 || a28[i] == 3)) {
                t[cnt++] = 4;
                flag = 0;
            } else if (a28[i] == -1 && cnt != 0) {
                t[cnt++] = -1;
                flag = 1;
            }
        }
        if (t[0] == 4 && t[1] == -1 && t[2] == 4) {
            func_000A7500();
            return 6;
        }
        return 0;
    }
    if (a == 3) {
        s = f0;
        if (s == 4) { *out = 0; func_000A7500(); return 7; }
        if (s == 6) { *out = 3; func_000A7500(); return 7; }
        if (s == 7) { *out = 2; func_000A7500(); return 7; }
        if (s == 5) { *out = 5; func_000A7500(); return 7; }
        if (s == 1) { *out = 6; func_000A7500(); return 7; }
        if (s == 0) { *out = 6; func_000A7500(); return 7; }
        if (s == 2) { *out = 6; func_000A7500(); return 7; }
        if (s == 3) { *out = 6; func_000A7500(); return 7; }
        return 0;
    }
    if (a == 2) {
        s = f0;
        if (s == 4) { *out = s; func_000A7500(); return 8; }
        if (s == 6) { *out = 6; func_000A7500(); return 8; }
        if (s == 7) { *out = s; func_000A7500(); return 8; }
        if (s == 5) { *out = s; func_000A7500(); return 8; }
        if (s == 1) { *out = 1; func_000A7500(); return 8; }
        if (s == 0) { *out = s; func_000A7500(); return 8; }
        if (s == 2) { *out = s; func_000A7500(); return 8; }
        if (s == 3) { *out = 3; func_000A7500(); return 8; }
        *out = 0;
        return 8;
    }
    x[0] = 0;
    x[1] = 0;
    x[2] = 0;
    for (j = 0; j < 3; j++)
        buf[j][0] = 0;
    k = 0;
    flag = 1;
    for (i = n - 1; i >= 0; i--) {
        v = a28[i];
        if (v == -1) {
            flag = 1;
            continue;
        }
        if (flag) {
            if (k >= 3) {
                k--;
                if (k > 0)
                    memcpy(x, x + 1, k);
                break;
            }
            switch (v) {
            case 0: *(Str3 *)buf[k] = D_0027B520; x[k] = 2; break;
            case 1: *(Str3 *)buf[k] = D_0027B518; x[k] = 8; break;
            case 2: *(Str3 *)buf[k] = D_0027B510; x[k] = 0x20; break;
            case 3: *(Str3 *)buf[k] = D_0027B50C; x[k] = 0x80; break;
            case 4: strcpy(buf[k], "U"); x[k] = 1; break;
            case 5: strcpy(buf[k], "R"); x[k] = 4; break;
            case 6: strcpy(buf[k], "D"); x[k] = 0x10; break;
            case 7: strcpy(buf[k], "L"); x[k] = 0x40; break;
            default: continue;
            }
            flag = 0;
            k++;
        } else {
            switch (v) {
            case 0: *(Str3 *)buf[k - 1] = D_0027B520; x[k - 1] = 2; break;
            case 1: *(Str3 *)buf[k - 1] = D_0027B518; x[k - 1] = 8; break;
            case 2: *(Str3 *)buf[k - 1] = D_0027B510; x[k - 1] = 0x20; break;
            case 3: *(Str3 *)buf[k - 1] = D_0027B50C; x[k - 1] = 0x80; break;
            case 4: strcpy(buf[k - 1], "U"); x[k - 1] = 1; break;
            case 5: strcpy(buf[k - 1], "R"); x[k - 1] = 4; break;
            case 6: strcpy(buf[k - 1], "D"); x[k - 1] = 0x10; break;
            case 7: strcpy(buf[k - 1], "L"); x[k - 1] = 0x40; break;
            }
        }
    }
    r = (x[0] ? x[0] : 0) | (x[1] ? x[1] << 8 : 0) | (x[2] ? x[2] << 16 : 0);
    *out = r;
    if (r == 0)
        return 0;
    for (i = 1; i < f140; i++)
        a78[i] = 0;
    aA0[0] = 0;
    return 9;
}
