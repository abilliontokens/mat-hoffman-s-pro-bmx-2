/* 3 functions from 0x0003B0A0 to 0x0003BC90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0003BB60 {
 void func_0003BB60();
 void func_0002F450(int);
 void func_000A4500(int, int);
 void func_000321C0();
 void func_0003AD50();
 void func_001983A0();
 void func_000361F0(int);
};
struct V_0003BB60 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); };
struct Copy_0003BB60 { int a,b,c,d; };
extern char D_00276F00[];
extern int func_001E8AF0(const void*, const void*);
struct C_0003BC70 {
    undefined4 func_0003BC70(byte param_1);
};


undefined4 C_0003BC70::func_0003BC70(byte param_1)
{
  int func_000380B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000380B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
