/* 2 functions from 0x000F2CC0 to 0x000F3C70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#define F(p,o) (*(int*)((char*)(p)+(o)))
#define P(p,o) (*(char**)((char*)(p)+(o)))
struct C_000F2CC0 {
    void func_000F2CC0();
    void func_001BEFC0(int a, int b);
    void func_000C4CE0();
};
struct X_any {
    int func_0005C1D0(int);
    int func_0005C1E0(int);
    int func_0001B3C0(int);
    void func_00093120();
    int func_00094F00();
    int func_00094EE0();
    void func_00094C60();
    void func_00094A10(void*, int);
    void func_0005E840(int);
    void func_000BF860(int, int, int, int);
    int func_0005C0E0();
    int func_0005C700();
    int func_0005C0F0();
    char* func_0005C020(int);
    void func_0005C100();
    void func_0005C710();
    void func_0005C110();
    int func_0005C330(int);
    void func_0005C340(int);
};
extern "C" char* D_002A8490;
extern "C" char* D_002B91AC;
extern "C" char D_0027DDEC;
#define LST ((X_any*)P(P(D_002A8490,0x2e0),0x2c0))
/* object behind +0x1a4 of the per-slot object: virtual base, slot 5 is called */
struct VB_000F2CC0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};
struct VD_000F2CC0 : virtual VB_000F2CC0 {
};
/* object behind D_002A8490->f4->fB4: slot 6 is called */
struct V_000F2CC0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
/* career record returned by X_any::func_0005C020: two 8x100 int tables */
struct R_000F2CC0 {
    char pad0[0x678];
    int tabA[8][100];
    char pad1[0x20];
    int tabB[8][100];
};
/* D_002A8490->f2E0: two 8-int sums at 0x34C / 0x36C */
struct G_000F2CC0 {
    char pad0[0x34c];
    int sumA[8];
    int sumB[8];
};
extern char* D_002A8490;
struct C_000F3C50 {
    undefined4 func_000F3C50(byte param_1);
};


void C_000F2CC0::func_000F2CC0()
{
    char *page = P(this, 0x124);
    int i;
    int j;
    int m;
    int k;
    int cnt;

    func_001BEFC0(1, 5);
    F(this, 0x2f4) = 0;
    for (i = 0; i < 16; i++) {
        if (!LST->func_0005C1D0(i)) {
            int slot = ((X_any *)P(P(page, 0x150), 0x484))->func_0001B3C0(F(page, 0x27c) + i * 0x1a8);
            char *obj = ((char **)P(P(P(P(page, 0x150), 0x484), 0x2c), 0x28))[slot];
            ((VD_000F2CC0 *)P(obj, 0x1a4))->v5();
        }
    }
    ((X_any *)P(page, 0x274))->func_00093120();
    if (!((X_any *)P(P(D_002A8490, 0x2e0), 0x2fc))->func_00094F00()) {
        ((X_any *)P(P(D_002A8490, 0x2e0), 0x2fc))->func_00094A10(&D_0027DDEC, 0);
        ((V_000F2CC0 *)P(P(D_002A8490, 4), 0xb4))->v6();
    }
    if (!((X_any *)P(P(D_002A8490, 0x2e0), 0x2fc))->func_00094EE0()) {
        ((X_any *)P(P(D_002A8490, 0x2e0), 0x2fc))->func_00094C60();
    }
    F(this, 0x288) = 0;
    F(this, 0x2a4) = 0;
    F(this, 0x2a0) = 0;
    F(this, 0x284) = 0;
    F(this, 0x28c) = 0;
    F(this, 0x29c) = 0;
    F(this, 0x2f0) = 0;
    F(this, 0x2ac) = 0;
    F(this, 0x2b0) = 0;
    F(this, 0x2b4) = 0;
    F(this, 0x2b8) = 0;
    F(this, 0x2c0) = 0;
    F(this, 0x2c8) = 0;
    F(this, 0x2cc) = 0;
    F(this, 0x2d0) = 0;
    F(this, 0x2d4) = 0;
    F(this, 0x2d8) = 0;
    F(this, 0x2dc) = 0;
    F(this, 0x2bc) = 1;
    F(this, 0x298) = 1;
    ((X_any *)P(D_002B91AC, 0x34))->func_0005E840(F(P(P(D_002A8490, 0x2e8), 4), 0x908));
    ((X_any *)D_002B91AC)->func_000BF860(0, 0x1eb, 0x184, 0);
    ((X_any *)P(D_002B91AC, 0x38))->func_0005E840(F(P(P(D_002A8490, 0x2e8), 4), 0x7c8));
    ((X_any *)P(D_002B91AC, 0x80))->func_0005E840(F(P(P(D_002A8490, 0x2e8), 4), 0x740));
    ((X_any *)P(D_002B91AC, 0x84))->func_0005E840(F(P(P(D_002A8490, 0x2e8), 4), 0x900));
    if (!LST->func_0005C0E0()) {
        for (i = 0; i < 10; i++) {
            if (F(LST->func_0005C020(i), 0x5e8) == 1) {
                LST->func_0005C100();
                F(this, 0x2e0) = 1;
            }
        }
    }
    if (!LST->func_0005C700()) {
        for (i = 0; i < 10; i++) {
            if (F(LST->func_0005C020(i), 0x5e8) == 1) {
                F(this, 0x2ec) = 1;
                LST->func_0005C710();
            }
        }
    }
    cnt = 0;
    if (!LST->func_0005C0F0()) {
        for (i = 0; i < 10; i++) {
            if (F(LST->func_0005C020(i), 0x5e8) == 1)
                cnt++;
        }
        if (cnt == 10) {
            LST->func_0005C110();
            F(this, 0x2e4) = 1;
        }
        if (cnt >= 5) {
            if (!LST->func_0005C330(1)) {
                F(this, 0x2e8) = 1;
                LST->func_0005C340(1);
            }
        }
    }
    if (!LST->func_0005C1D0(3)) {
        for (j = 0; j < 10; j++) {
            int a = 0;
            int b = 0;
            int c = 0;
            int d = 0;
            for (m = 0; m < 8; m++) {
                for (k = 0; k < 100; k++) {
                    if (((R_000F2CC0 *)LST->func_0005C020(j))->tabA[m][k] != 0)
                        a++;
                }
                for (k = 0; k < 100; k++) {
                    if (((R_000F2CC0 *)LST->func_0005C020(j))->tabB[m][k] != 0)
                        c++;
                }
                d += ((G_000F2CC0 *)P(D_002A8490, 0x2e0))->sumB[m];
                b += ((G_000F2CC0 *)P(D_002A8490, 0x2e0))->sumA[m];
            }
            if (c + a >= d + b) {
                LST->func_0005C1E0(3);
                F(this, 0x364) = 1;
            }
        }
    }
    if (F(this, 0x2e0) || F(this, 0x2e4) || F(this, 0x364) || F(this, 0x2e8) || F(this, 0x2ec)) {
        func_001BEFC0(1, 1);
        func_001BEFC0(1, 2);
        func_001BEFC0(1, 3);
        func_001BEFC0(1, 4);
        F(this, 0x298) = 0;
        F(this, 0x2f0) = 1;
        func_000C4CE0();
    }
    if (F(this, 0x360) == 3)
        F(this, 0x35c) = 0;
    else
        *(float *)((char *)this + 0x35c) = 1.0f;
}

undefined4 C_000F3C50::func_000F3C50(byte param_1)
{
  int func_000C5980(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C5980();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
