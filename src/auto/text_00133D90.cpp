/* 10 functions from 0x00133D90 to 0x00134A10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern float D_00275544;
extern int D_0028464C;

void func_001E8390(void *p);
void func_001E891B(void *p);

struct C_001349F0 {
    undefined4 func_001349F0(byte param_1);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00193500 {
    void func_00193500(void);
};

struct C_00133210 {
    void func_00133210(void);
};

struct Coll_00133D90 {
    char pad0[0x28];
    float f28;
    float f2C;
    float f30;
    char pad34[0x48 - 0x34];
    float f48;
};

struct C_00133E60 {
    void *vtbl;
    char pad4[0x74];
    void *f78;
    char pad7C[0x84 - 0x7C];
    void *f84;
    char pad88[0x90 - 0x88];
    void *f90;
    char pad94[0x98 - 0x94];
    C_00193500 *f98;
    void func_00133E60(void);
};

struct Obj_00133ED0 {
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
    void func_00133ED0(void);
};


void Obj_00133ED0::func_00133ED0(void)
{
    v32();
    ((C_00133210 *)this)->func_00133210();
}

undefined4 C_001349F0::func_001349F0(byte param_1)
{
  int func_00133E60(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00133E60();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
