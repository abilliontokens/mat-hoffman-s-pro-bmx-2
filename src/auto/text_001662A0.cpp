/* 8 functions from 0x001662A0 to 0x001670C0, found by Ghidra. */
#include "common.h"
#include <string.h>
#include <new>

void func_001E891B(void *p);
void *func_001E8920(void *, const void *, unsigned int);
void *func_001E8AA5(unsigned int);
struct C_00166EB0_Config {
 void func_00169710(const char *);
 int func_00168BE0(const char *,const char *,char *,int);
 void func_00168C20(const char *,int,int *);
 int func_00168550(const char *,char *,int);
};
extern char D_00287E90[];
extern char D_00275630[];
extern char D_00277274[];
extern char D_002A46E8[];
extern char D_00284644[];
extern char D_00287E84[];
extern char D_00287E78[];
extern char D_00277288[];
extern char D_00287D8C[];
extern char D_00287D78[];
extern char D_00287D68[];
extern char D_00287D5C[];
extern char D_00287D50[];
extern char D_00287D40[];
extern char D_00287D38[];
extern char D_00287D30[];
extern char D_00287E6C[];
extern char D_00287E64[];
extern char D_00287E5C[];
extern char D_00287E54[];
int func_001EA426(const char *,const char *);

struct S_00166CA0_Item {
 char data[0x40];
 void func_000264C0(S_00166CA0_Item *);
};
struct C_00166CA0_Obj {
 virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
 virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
 virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
 virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
 virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
 virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
 virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
 virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7C();
 virtual void v80(); virtual void v84(); virtual void v88();
 virtual void v8C(char *, int, int);
 char pad4[0x170];
 int f174;
 C_00166CA0_Obj(int);
 int func_00198270();
};
struct C_00166CA0_Base {
 void func_001577A0(C_00166CA0_Obj *, int);
};
extern char D_002A5EA0[];
void func_00164270(int, int, int);
void *func_001E8A44(unsigned int);
template <class T> inline T min_00166CA0(T a, T b) { return a > b ? b : a; }
struct C_00166CA0 {
 int *vbptr;
 C_00166CA0_Obj *f4;
 C_00166EB0_Config *f8;
 int fC;
 int f10, f14, f18;
 int f1C, f20, f24, f28, f2C;
 int f30, f34, f38;
 char pad3C[0xC];
 char f48[0x50], f98[0x50], fE8[0x50], f138[0x50];
 int f188;
 char pad18C[4];
 char f190[0x50];
 char pad1E0[8];
 int f1E8;
 int f1EC, f1F0, f1F4;
 S_00166CA0_Item *f1F8;
 int f1FC;
 void func_001662A0(int);
 void func_001646B0();
 void func_00166CA0(C_00166CA0 *, int);
 void func_00166EB0(int);
 void func_00164700();
 void func_001643A0();
 void func_00166190();
 void func_00165F70();
};

struct S_00166C80_Arg {
    char pad0[0x3c];
    int f3c;
};

int __stdcall func_00164840(S_00166C80_Arg *param_1, int param_2, int param_3);

struct C_00166C80 {
    void func_00164840(S_00166C80_Arg *param_1, int param_2, int param_3);
    void func_00166C80(S_00166C80_Arg *param_1, int param_2);
};

struct C_002EF7D0 {
    int func_00162B20(int param_1, int param_2);
};

extern C_002EF7D0 *D_002EF7D0;

struct C_00166C50 {
    char pad0[0x10];
    int f10;
    char pad14[4];
    int f18;
    char pad1c[0x30 - 0x1c];
    int f30;
    int f34;
    void func_00166C50(int param_1);
};

struct C_00166E70_Outer;

struct C_00166E70 {
    void func_00164520(void);
    void func_00157660(void);
    void *func_00166E70(int flags);
};

struct C_00166E70_Outer {
    char pad0[0x220];
    C_00166E70 sub220;
};

void C_00166C50::func_00166C50(int param_1)
{
    int r = D_002EF7D0->func_00162B20(param_1, 1);
    f10 = 0;
    f18 = r;
    f30 = 0;
    f34 = 0;
}

void C_00166C80::func_00166C80(S_00166C80_Arg *param_1, int param_2)
{
    func_00164840(param_1, param_1->f3c, param_2);
}

void *C_00166E70::func_00166E70(int flags)
{
    C_00166E70_Outer *outer = (C_00166E70_Outer *)((char *)this - 0x220);
    outer->sub220.func_00164520();
    outer->sub220.func_00157660();
    if (flags & 1) {
        func_001E891B(outer);
    }
    return outer;
}

