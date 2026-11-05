/* 3 functions from 0x00033680 to 0x000342C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
typedef void (__fastcall *E34090_Fn)(void *self);
struct E34090_Obj { void func_000831E0(); void func_000843C0(); void func_000843E0(int a); };
struct E34090_T { char pad[0x67c]; int f67c; char pad680[0x958 - 0x680]; float f958; };
struct E34090_Sub { void func_000560A0(); };
struct E34090_Hold { char pad[0x50]; E34090_Sub *f50; };
struct E34090_X { void func_0001C240(); };
struct E34090_Z { void func_000A84F0(); };
struct E34090_Y {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(void *a);
};
struct E34090_L { char pad[0x24]; int count; char pad28[0x1a8 - 0x28]; E34090_T *items[1]; };
struct E34090_PP {
    void **vtbl;
    char pad4[0x3b4 - 4]; E34090_Y *f3b4; char pad3b8[0x484 - 0x3b8]; E34090_X *f484;
    char pad488[0x4e0 - 0x488]; E34090_L *f4e0; char pad4e4[0x534 - 0x4e4]; E34090_Z *f534;
    void func_000A2ED0();
};
struct E34090_M { char pad[8]; int f8; char padc[4]; int f10; };
struct E34090_G { char pad[0x124]; int f124; char pad128[0x2e0 - 0x128]; E34090_M *f2e0; };
extern E34090_G *D_002A8490;
extern int D_002AADF8;
extern void __stdcall func_00099A60(void *p);
struct E34090_Ev {
    void **vtbl;
    void func_00032220();
    char pad4[0x44 - 4]; E34090_Hold *f44; E34090_Hold *f48; char pad4c[0x64 - 0x4c]; E34090_PP *f64;
    char pad68[0x90 - 0x68]; int f90; char pad94[0xe4 - 0x94]; char *fe4;
    char padE8[0x11c - 0xe8]; int f11c; char pad120[4]; int f124; int f128; int f12c; int f130; int f134;
    char pad138[0x170 - 0x138]; E34090_Obj *f170[20]; void *f1c0; char pad1c4[4]; int f1c8;
    int func_00034090();
};
struct C_000342A0 {
    undefined4 func_000342A0(byte param_1);
};


undefined4 C_000342A0::func_000342A0(byte param_1)
{
  int func_00033220(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00033220();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
