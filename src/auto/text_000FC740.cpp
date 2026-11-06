/* 3 functions from 0x000FC740 to 0x000FCB00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000FCAE0 {
    undefined4 func_000FCAE0(byte param_1);
};

struct C_000FC740_Widget {
    void func_001B1980(void);
    void func_001B1B30(float a, int b);
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_000FC800_Pane {
    void func_00093120(void);
    void func_00093A00(float x, float y, int c, int a, int b, int d);
    void func_00094690(float x, float y, int c, int a, int b, int d);
    void func_00093890(float x, float y, int c, int a, int b, int d);
    void func_000942F0(float x, float y, int c, int a, int b, int d);
    void func_00094410(float x, float y, int c, int a, int b, int d);
    void func_00093F30(float x, float y, int c, int a, int b, float t);
    void func_00093E80(float x, float y, int c, int a, int b, float t);
    void func_000941A0(int v, float x, float y, int c, int a, int b, int d);
    void func_00093970(float x, float y, int c, int a, int b, float t);
};
extern int D_0028F5E0;
extern int D_002A3854;

struct C_000FC800 {
    char pad0[0x4e4];
    int f4e4;
    char pad4e8[4];
    int f4ec;
    int f4f0;
    int f4f4;
    C_000FC800_Pane *f4f8;
    int f4fc;
    int f500;
    int f504;
    int f508;
    char pad50c[4];
    int f510;
    char pad514[0x52c - 0x514];
    int f52c;
    int f530;
    char pad534[4];
    int f538;
    char pad53c[0x558 - 0x53c];
    int f558;
    char pad55c[0x57c - 0x55c];
    int f57c;
    int f580;
    char pad584[0x590 - 0x584];
    int f590;
    char pad594[4];
    int f598;
    char pad59c[0x5b4 - 0x59c];
    int f5b4;
    void func_000D0110(void);
    void func_000F83C0(void);
    void func_000D0D60(void);
    void func_000FC740(void);
    void func_000D0D20(void);
    void func_00157960(void);
    void func_000FC800(void);
};

struct C_000FC740 {
    char pad0[0x48c];
    int f48c;
    int f490;
    char pad494[0x30];
    int f4c4;
    int f4c8;
    int f4cc;
    int f4d0;
    float f4d4;
    char pad4d8[0xbc];
    C_000FC740_Widget *f594;
    int f598;
    void func_000FC740(void);
    void func_000FA620(void);
    void func_001BEE50(int a, int b, int c);
    void func_000CEA00(int a);
};


void C_000FC740::func_000FC740(void)
{
    f4c4 = 0xff;
    f4c8 = 0;
    f4cc = 0;
    f4d0 = 0;
    f4d4 = 0.25f;
    func_000FA620();
    func_001BEE50(1, f48c, f490);
    func_000CEA00(f490);
    f594->func_001B1980();
    f594->func_001B1B30(0.75f, 0);
    f594->func_001B2270(0xffcccccc);
    f594->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0, 1.0f, 0, 0.25f, 0, 0);
    f598 = 0;
}

void C_000FC800::func_000FC800(void)
{
    func_000D0110();
    func_000F83C0();
    if (f590 != 0) {
        if (f598 == 0) {
            func_000D0D60();
        }
    } else if (f598 != 0) {
        func_000FC740();
    }
    if (f530 != 0) {
        f4f8->func_00093120();
        f4f8->func_00093A00(320.0f, 80.0f, D_0028F5E0, 0, 0, 0);
    } else if (f5b4 != 0) {
        f4f8->func_00093120();
        f4f8->func_00094690(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
    } else if (f558 != 0 && f510 == 0) {
        func_000D0D20();
    } else if (f4e4 != 0) {
        f4f8->func_00093120();
        f4f8->func_00093890(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
    }
    if (f57c != 0) {
        f4f8->func_00093120();
        f4f8->func_000942F0(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
    }
    if (f580 != 0) {
        f4f8->func_00093120();
        f4f8->func_00094410(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
    }
    if (f4f4 != 0) {
        if (f504 != 0) {
            f4f8->func_00093120();
            f4f8->func_00093F30(320.0f, 100.0f, D_0028F5E0, 1, 0, 0.25f);
            f504 = 0;
        }
        if (f508 != 0) {
            f4f8->func_00093120();
            f4f8->func_00093F30(320.0f, 100.0f, D_0028F5E0, 0, 1, 0.25f);
            f508 = 0;
        }
    }
    if (f4f0 != 0) {
        if (f4fc != 0) {
            f4f8->func_00093120();
            if (D_002A3854 == 0) {
                f4f8->func_00093E80(320.0f, 100.0f, D_0028F5E0, 1, 0, 0.25f);
                f4fc = 0;
            }
            D_002A3854 = 0;
        }
        if (f500 != 0) {
            f4f8->func_00093120();
            f4f8->func_00093E80(320.0f, 100.0f, D_0028F5E0, 0, 1, 0.25f);
            f500 = 0;
        }
    }
    if (f4ec != 0) {
        f4f8->func_00093120();
        f4f8->func_000941A0(f52c, 320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
    }
    if (f538 != 0) {
        f4f8->func_00093120();
        f4f8->func_00093970(320.0f, 100.0f, D_0028F5E0, 0, 1, 0.25f);
    }
    func_00157960();
}

undefined4 C_000FCAE0::func_000FCAE0(byte param_1)
{
  int func_000D0FD0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D0FD0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
