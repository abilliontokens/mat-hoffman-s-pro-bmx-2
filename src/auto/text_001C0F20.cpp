/* 12 functions from 0x001C0F20 to 0x001C19D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001C10D0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x28];
    int f2c;
    int f30;
    int f34;
    void func_001C10D0(void);
};

struct C_001C1110 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x28];
    int f2c;
    int f38;
    int f3c;
    void func_001C1110(void);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_00157960 {
    void func_00157960(void);
};

struct C_001C1950 {
    char pad0[0x68];
    C_001D5AD0 *f68;
    void func_001C1950(void);
};

struct C_001C1030_Handler {
    void func_001BEB90(int value);
    void func_001BEC10(int value);
    void func_001BEC90(int value, int v);
};

struct C_001C1030_Mid {
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
    virtual void v31(int a, int b, int c, int d);
    char pad4[0x114];
    C_001C1030_Handler *f118;
};

struct C_001C1030 {
    char pad0[0x24];
    C_001C1030_Mid *f24;
    char pad28[0x40];
    int f68[1];
    void func_001C1030(int slot, int value, int key);
};


void C_001C10D0::func_001C10D0(void)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0xb] = 1;
  if ((in_ECX[0xc] == 0) || (in_ECX[0xd] == 0)) {
    if (in_ECX[0xc] != 0) {
      (**(code **)(*in_ECX + 0x1c))();
    }
    if (in_ECX[0xd] != 0) {
      (**(code **)(*in_ECX + 0x14))();
    }
  }
                    
                    
  (**(code **)(*in_ECX + 0x1c))();
  return;
}

void C_001C1950::func_001C1950(void)
{
  f68->func_001D5AD0();
  ((C_00157960 *)this)->func_00157960();
}

