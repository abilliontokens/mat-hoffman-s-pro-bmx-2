/* 5 functions from 0x000AF900 to 0x000B03A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
#include <string.h>
#include <stdlib.h>
struct Obj_B0060 {
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
 virtual void v30();
 virtual void v31(void *);
 char pad4[0x5c];
 int f60, f64, f68;
 char f6C, f6D;
 Obj_B0060 *func_0019B700(int);
 int func_00129920(int);
 int func_0019D7B0(int, const char *);
 void func_00133140(int, int);
};
struct List_B0060 {
 int count; Obj_B0060 * volatile *items; int grow, capacity;
 int func_0015ACA0(int);
 void store(Obj_B0060 *obj) { items[count]=obj; }
};
struct Group_B0060 { void func_001577A0(Obj_B0060 *, int); };
struct C_000B0060 {
 char pad0[0x3a8];
 Group_B0060 **f3A8;
 char pad3AC[0x100];
 int *f4AC;
 int func_000B0060(int, char, const char *, void *, void *, void *, int, int, List_B0060 *);
};
struct Temp_B0060 { C_000B0060 * volatile self; volatile int limit, count, len; };
struct __declspec(align(16)) Mat_B0060 { float m[16]; };
extern char D_00276D84[], D_00276D7C[], D_00276D74[], D_00276D6C[], D_00276D64[], D_0027CDFC[];
extern int D_002B9118,D_002B9108,D_002B910C,D_002B911C,D_002B9114,D_002B9110,D_002BA160;
void *func_001E8920(void *, const void *, int);
int func_001E8D25(int);
void *func_001E8A44(int);
char *func_001E8AF0(char *, const char *);
void func_000265C0(void *, void *, void *, void *, int, int);
struct S_000B0340_B {
    int unk0;
    int unk4;
};

struct S_000B0340_A {
    char pad0[0x2E0];
    S_000B0340_B *unk2E0;
};

extern S_000B0340_A *D_002A8490;

struct C_000B0340 {
    void func_000AC8F0(void);
    void func_000A2F20(void);
    void func_000AF7D0(void);
    void func_000AC890(void);
    void func_000A1E90(void);
    void func_000ACCF0(void);
    void func_000ACD50(void);
    void func_000AF8A0(void);
    void func_000ACDB0(void);
    void func_000A1EF0(void);
    void func_000B0340(void);
};

struct C_000B0320 {
    undefined4 func_000B0320(byte param_1);
};

struct C_000B0300 {
    undefined4 func_000B0300(byte param_1);
};


undefined4 C_000B0300::func_000B0300(byte param_1)
{
  int func_000AE6E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AE6E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000B0320::func_000B0320(byte param_1)
{
  int func_000AEF10(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AEF10();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_000B0340::func_000B0340(void) {
    func_000AC8F0();
    func_000A2F20();
    func_000AF7D0();
    func_000AC890();
    func_000A1E90();
    func_000ACCF0();
    func_000ACD50();
    func_000AF8A0();
    func_000ACDB0();
    if (D_002A8490->unk2E0->unk4 == 10) {
        func_000A1EF0();
    }
}

