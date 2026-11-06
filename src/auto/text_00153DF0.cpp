/* 2 functions from 0x00153DF0 to 0x00154C10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00154BF0 {
    undefined4 func_00154BF0(byte param_1);
};

struct V153DF0 { virtual void v18(); virtual void v78(); };
struct C153DF0_Eff {
    char pad0[0x150];
    V153DF0 *f150;
    char pad154[0x38C];
    void func_001983A0();
    void func_0019AC50();
    void func_00199600(float *v);
    void func_00198F50(float *a, float *b, int c, int d, int e);
};
struct C153DF0_Game { char pad0[0x124]; int f124; char pad128[0x1BC]; int *f2E0; };
struct C153DF0_17A40 { void func_00017A40(void *a); };
struct C153DF0_B9120 { char pad0[0x4E4]; int arr[0x2E]; C153DF0_17A40 *f528; };
struct C153DF0_2C { char pad0[0x1A4]; int *f1A4_2; };
struct C153DF0_Self {
    char pad0[0x24];
    int f24;
    char pad28[4];
    C153DF0_2C *f2C;
    char pad30[0x40];
    int f74;
    int f78;
    int f7C;
    char pad80[4];
    int f84[4];
    int f94[4];
    char padA4[0x1C];
    int fC0[4];
    char padC4[4];
    int fC8[4];
    char padCC[0x0C];
    int fD8;
    int fDC;
    char padE0[0x150 - 0xE0];
    C153DF0_Eff *f150;
    float f154[4];
    float f164[4];
    float f174[4];
    float f184[4];
    char pad194[4];
    int f198;
    char pad19C[4];
    float f1A0;
    char pad1A4[0x400];
    int f5A4;
    void func_00153DF0(float dt);
};
extern C153DF0_Game *D_002A8490;
extern C153DF0_B9120 *D_002B9120;
struct X153DF0_78 { void func_0014AC30(void *a, int b); void func_00133ED0(); void func_00133F10(int a); void func_00133EF0(void *a); };
struct X153DF0_F { void *func_00197F70(void *a); };
struct X153DF0_50900 { void func_00150900(void *a, void *b); };
void func_0011CA60(float *v);
extern float D_002756DC;
extern int D_002A789C, D_002A78A0, D_002A78A4, D_002A78A8;


undefined4 C_00154BF0::func_00154BF0(byte param_1)
{
  int func_001532E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001532E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
