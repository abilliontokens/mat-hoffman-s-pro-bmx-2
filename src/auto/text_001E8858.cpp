/* 10 functions from 0x001E8858 to 0x001E8AB7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00294F04;
extern int D_002FB364;

int func_001DF5B3(void);
int func_001E8A52(unsigned int size);
int func_001EB3BE(unsigned int size);
int __stdcall func_001E0AE0(int heap, unsigned int flags, unsigned int size);

void func_001E891B(void *p);
void func_001E8390(void *p);
void func_001EB390(int n);
void func_001EB302(int n);
int func_001E8A79(unsigned int a, int b);

struct Class_00294F04 {
    void *vtbl;
    void *field_4;
    void func_001E88D6();
    void *func_001E88FF(unsigned int flags);
};

unsigned __int64 __ftol2(double x) { return (unsigned __int64)x; }

void func_001E88CD(void) {
    int func_001EB9F3(...);
    func_001EB9F3(25);
}

void Class_00294F04::func_001E88D6() {
    vtbl = (void *)&D_00294F04;
    func_001EB390(14);
    if (field_4) func_001E8390(field_4);
    func_001EB302(14);
}

void *Class_00294F04::func_001E88FF(unsigned int flags) {
    func_001E88D6();
    if (flags & 1) func_001E891B(this);
    return this;
}

void func_001E891B(void) {
    int func_001E8390(...);
    func_001E8390();
}

void func_001E8A44(int a0) { func_001E8A79(a0, 1); }

int func_001E8A52(unsigned int size) {
    if (size == 0) size = 1;
    if (D_002FB364 != 1) size = (size + 15) & 0xfffffff0;
    return func_001E0AE0(func_001DF5B3(), 0, size);
}

int func_001E8A79(uint param_1, int param_2)
{
  int func_001E8A52(...);
  int func_001EB3BE(...);
  int iVar1;

  if (param_1 > 0xffffffe0) {
    return 0;
  }
  do {
    iVar1 = func_001E8A52(param_1);
    if (iVar1 != 0 || param_2 == iVar1) {
      return iVar1;
    }
    iVar1 = func_001EB3BE(param_1);
  } while (iVar1 != 0);
  return 0;
}

void func_001E8AA5(undefined4 param_1)
{
  extern undefined4 D_002F69EC;
  func_001E8A79(param_1,D_002F69EC);
  return;
}

