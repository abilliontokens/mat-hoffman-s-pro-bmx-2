/* 3 functions from 0x000F4BA0 to 0x000F58F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern float D_0027DE74, D_00278C48;

struct S_000F4BA0_Obj301D0 {
    int func_000301D0(void);
};

struct S_000F4BA0_B {
    char pad0[0x74];
    S_000F4BA0_Obj301D0 *unk74;
};

struct S_000F4BA0_Item {
    void func_00103260(int a);
    void func_00103350(void);
};

struct S_000F4BA0_Owner {
    char pad0[0x25c];
    S_000F4BA0_B *unk25c;
    char pad260[0x2a4 - 0x260];
    int unk2a4;
    S_000F4BA0_Item *func_000BA9B0(int id);
};

struct BmxUIPageOptions {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(int, int);
    char pad4[0x124 - 4];
    S_000F4BA0_Owner *unk124;
    char pad128[0x148 - 0x128];
    int unk148[8];
    char pad168[0x280 - 0x168];
    int unk280, unk284;
    int unk288, unk28c;
    float unk290;
    int unk294, unk298, unk29c, unk2a0, unk2a4;
    char pad2a8[0x2b0 - 0x2a8];
    int unk2b0;
    char pad2b4[0x2bc - 0x2b4];
    float unk2bc;
    int unk2c0, unk2c4, unk2c8, unk2cc;
    float unk2d0, unk2d4;
    unsigned char *unk2d8;
    void func_000F4BA0(float dt);
    void func_001BEE50(int a, int b, int c);
    void func_001BED00(float dt);
};

struct C_000F4DE0 {
    undefined4 func_000F4DE0(byte param_1);
};

struct F4E_Obj {
    void func_001B1980();
    void func_001B1A30(int a, int b, int c);
    void func_001B2270(int a);
    void func_001B1860(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
};

struct C_000F4E00 {
    char pad0[0x2a4];
    int f2A4;
    char pad2A8[0x2c4 - 0x2a8];
    int f2C4;
    char pad2C8[0x2d8 - 0x2c8];
    F4E_Obj *a2D8[23];
    void func_000F4E00();
    void func_000CA9B0();
    void func_000C9860();
    void func_000C98D0();
    void func_000CAA10();
    void func_000CA940();
    void func_000CA8D0();
};


undefined4 C_000F4DE0::func_000F4DE0(byte param_1)
{
  int func_000C9050(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C9050();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
