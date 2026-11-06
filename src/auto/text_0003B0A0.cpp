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
  void func_0003B0A0();
};
struct V_0003BB60 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); };
struct Copy_0003BB60 { int a,b,c,d; };
extern char D_00276F00[];
extern int func_001E8AF0(const void*, const void*);
struct C_0003BC70 {
    undefined4 func_0003BC70(byte param_1);
};


void C_0003BB60::func_0003BB60() {
 char* p=(char*)this;
 *(Copy_0003BB60*)(*(char**)(p+0x24)+0x170)=*(Copy_0003BB60*)(p+0x4ac);
 (*(C_0003BB60**)(p+0x44))->func_0002F450(6);
 ((V_0003BB60*)this)->v40();
 (*(C_0003BB60**)(*(char**)(p+0x64)+0x4e0))->func_000A4500(0,0);
 func_000321C0(); func_0003AD50();
 (*(V_0003BB60**)(p+0x550))->v4();
 *(int*)(p+0x490)=0; *(int*)(p+0x494)=0;
 (*(V_0003BB60**)(p+0x560))->v4();
 *(int*)(p+0x284)=0;
 (*(V_0003BB60**)(p+0x58c))->v6();
 if(func_001E8AF0(*(char**)(*(char**)(p+0x64)+0x5a4)+*(int*)(p+0x47c)*72,D_00276F00)) {
 if(*(int*)(p+0x480)==0)
 (*(C_0003BB60**)(*(char**)(*(char**)(p+0x590)+0x1a4)+4))->func_001983A0();
 else
 (*(C_0003BB60**)(*(char**)(*(char**)(p+0x594)+0x1a4)+4))->func_001983A0();
 }
 func_000361F0(1);
}

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
