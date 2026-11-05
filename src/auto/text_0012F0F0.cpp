/* 8 functions from 0x0012F0F0 to 0x0012FE50, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void *func_001E8A44(int size);

struct C_0013B210 {
    int func_0013B930(int a, void *b, int c, int d);
    void func_0013C8A0(int a, void *b, int c, int d);
};
extern C_0013B210 *D_002BEAAC;
extern f32 D_00275544;

/* CarProceduralExtended */
struct C_CarProceduralExtended {
    void *vtbl;
    char pad4[0x4A8];
    u32 f4AC;
    char pad4B0[0x38];
    f32 f4E8;
    char pad4EC[0x24];
    f32 f510;
    u32 f514;
    void *f518;
    void func_0012F600(f32 param_1, int param_2);
    void func_0012FBF0(int param_1);
    void func_0012FCB0(int param_1);
};

struct C_CarProceduralExtendedVT {
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
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual f32 func_0012F670(f32 a, f32 b);
};

/* the 0x18-byte block CarProceduralExtended::f518 points to */
struct S_0012F518 {
    int count; /* number of 0x28-byte elements in arr */
    u32 f4;
    void *arr;
    u32 fC;
};

struct C_0012FE30 {
    undefined4 func_0012FE30(byte param_1);
};


void func_0012FCB0(int param_1)
{
}

undefined4 C_0012FE30::func_0012FE30(byte param_1)
{
  int func_0012EF60(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012EF60();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
