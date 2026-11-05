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

void func_001E83DF(void) {
    int func_001EB302(...);
    func_001EB302(4);
}
