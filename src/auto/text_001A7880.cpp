/* 5 functions from 0x001A7880 to 0x001A8720, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028BF14;
extern int D_002AA140;
extern int D_002AA144;
extern int D_002AA148;
extern int D_002AA14C;
int func_001A7FE0();

struct C_00157600 {
    void func_00157600(int param);
};

struct C_001334E0 {
    char pad0[0x74];
    int unk74;
    void func_001334E0(int a0);
};

struct C_001A86D0_Body {
    void *vtbl;
    char pad4[0x24];
    void *f24;
    char pad28[0x38];
    void *f60;
    void *f64;
    void *f68;
    char pad6C[0x10];
    void *f7C;
    char pad80[0x1C];
    void *f9C;
};

struct SpringCollisionDetectionModel {
    void *vtbl;
    char pad4[0x24];
    void *f24;
    int f28;
    int f2C;
    char pad30[0x4];
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    void *f54;
    int f58;
    int f5C;
    int f60;
    void *f64;
    int f68;
    SpringCollisionDetectionModel *func_001A8630(int param_1);
    void func_001A86D0(int param_1);
};
struct C_001A7FC0 {
    undefined4 func_001A7FC0(byte param_1);
};


undefined4 C_001A7FC0::func_001A7FC0(byte param_1)
{
  int func_001A7260(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001A7260();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
