/* 9 functions from 0x00095620 to 0x00096450, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_00095A00_Vt {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual int v30(int a, int b);
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual int v41(int a);
};

struct S_00095A00_Sub {
    int count;
    void *data;
    void func_001CDED0(int n);
    void func_001CBCF0(int n);
    void func_00094F10();
};

struct C_00095A00 {
    char pad0[0x30];
    int f30;
    int f34;
    int f38;
    char pad3C[0x14];
    S_00095A00_Vt *f50;
    int f54;
    char pad58[0x10];
    S_00095A00_Sub f68;
    int func_00095A00(int n);
    int func_000952F0(void);
    int func_00095880();
    int func_00095250(int n);
    int func_000952A0(int n);
    int func_000955C0(int n);
};
void *func_001E8A44(unsigned int size);
int func_001E891B(...);
struct S_00095880_Array {
    volatile int count;
    int *data;
    int growth;
    int capacity;
    unsigned char owned : 1;
    unsigned char flags : 7;
    S_00095880_Array(int n) { count = 0; owned = 0; data = (int *)func_001E8A44(n * 4); growth = 16; capacity = n; owned = 1; }
    ~S_00095880_Array() { func_001E891B(data); }
    void func_001CDED0(int n);
};
void *func_001E8A44(unsigned int size);
int func_00011260(int a, int b);

struct S_00095AB0_Vt {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(float a); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(int a); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual int v30(int a, int b); virtual void v31(int a, int b);
    virtual void v32(); virtual void v33(); virtual int v34(); virtual void v35();
    virtual void v36(); virtual int v37();
};

struct S_00095AB0_Sub {
    void func_001CDED0(int n);
};

extern float D_00275544;

struct C_00095AB0 {
    char pad0[0x28];
    S_00095AB0_Vt *f28;
    char pad2C[4];
    int f30;
    char pad34[4];
    int f38;
    int f3C;
    int f40;
    int f44;
    int f48;
    float f4C;
    S_00095AB0_Vt *f50;
    char pad54[0x14];
    S_00095AB0_Sub f68;
    int func_00095A00(int n);
    int func_000952F0(void);
    void func_00095880(void);
    void func_00157A00(float a);
    void func_00095AB0(float a);
};

struct C_00095620 {
    undefined4 func_00095620(byte param_1);
};


undefined4 C_00095620::func_00095620(byte param_1)
{
  int func_00095060(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00095060();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

extern "C" void *__cdecl memset(void *dst, int c, unsigned int n);
#pragma intrinsic(memset)
int C_00095A00::func_00095A00(int n)
{
    if (f34 == 0) {
        if (func_000952F0() == 0)
            return 0;
    } else {
        if (n < 1)
            return 0;
        if (n > f50->v41(f34))
            return 0;
    }

    S_00095A00_Sub *sub = &f68;

    if (sub->count > 0) {
        memset(sub->data, 0, sub->count * 4);
        sub->count = 0;
    }
    sub->func_001CDED0(n);
    f38 = n;
    if (f50->v30(n - 1, 1) == 0) {
        sub->func_001CBCF0(n);
        f30 = 6;
    } else {
        f30 = 2;
    }
    return 1;
}

void C_00095AB0::func_00095AB0(float a)
{
    f50->v12(a);
    if (f40 != 0) {
        f4C = f4C - a;
        if (f4C < D_00275544) {
            f28->v31(1, 1);
            f50->v18(1);
            f40 = 0;
            f44 = 1;
        }
    }
    if (f48 != 0 && f50->v37() == 0 && func_00095A00(f3C) != 0) {
        f48 = 0;
    }
    if (f50->v37() == 0 && f50->v34() == 0 && f30 == 2 && func_000952F0() > 0) {
        func_00095880();
    }
    if (f50->v37() == 0 && f30 == 6 && func_000952F0() > 0 && f50->v30(f38 - 1, 1) != 0) {
        f68.func_001CDED0(f38);
        f30 = 2;
    }
    func_00157A00(a);
}

