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
    volatile int t[5];
    int u[5];
    int cnt, i, flag, s, n, v;

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
        u[0] = -1;
        u[1] = -1;
        u[2] = -1;
        u[3] = -1;
        u[4] = -1;
        v = t[0];
        if (v == -1) { if (cnt != 0 && u[cnt - 1] != -1) u[cnt++] = -1; } else if (cnt == 0 || u[cnt - 1] != v) u[cnt++] = v;
        v = t[1];
        if (v == -1) { if (cnt != 0 && u[cnt - 1] != -1) u[cnt++] = -1; } else if (cnt == 0 || u[cnt - 1] != v) u[cnt++] = v;
        v = t[2];
        if (v == -1) { if (cnt != 0 && u[cnt - 1] != -1) u[cnt++] = -1; } else if (cnt == 0 || u[cnt - 1] != v) u[cnt++] = v;
        v = t[3];
        if (v == -1) { if (cnt != 0 && u[cnt - 1] != -1) u[cnt++] = -1; } else if (cnt == 0 || u[cnt - 1] != v) u[cnt++] = v;
        v = t[4];
        if (v == -1) { if (cnt != 0 && u[cnt - 1] != -1) u[cnt++] = -1; } else if (cnt == 0 || u[cnt - 1] != v) u[cnt++] = v;
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
        if (s == 4) { *out = 4; func_000A7500(); return 8; }
        if (s == 6) { *out = 6; func_000A7500(); return 8; }
        if (s == 7) { *out = 7; func_000A7500(); return 8; }
        if (s == 5) { *out = 5; func_000A7500(); return 8; }
        if (s == 1) { *out = 1; func_000A7500(); return 8; }
        if (s == 0) { *out = 0; func_000A7500(); return 8; }
        if (s == 2) { *out = 2; func_000A7500(); return 8; }
        if (s == 3) { *out = 3; func_000A7500(); return 8; }
        *out = 0;
        return 8;
    }
    return 0;
}
