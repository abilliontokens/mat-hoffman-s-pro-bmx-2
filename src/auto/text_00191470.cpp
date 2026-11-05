/* 22 functions from 0x00191470 to 0x00192470, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001923D0 {
    undefined4 func_001923D0(byte param_1);
};

extern char D_00275630;
extern int D_0028AB24;

int func_001E91F4(int p);
void func_001E8390(void *p);

struct C_0018F390 {
    void func_0018F390(char *name, int id, int *value);
};

struct C_001927A0 {
    void func_001927A0(void);
};

struct C_00192420 {
    void *vtbl;
    char pad4[0x28];
    int f2c;
    int pad30;
    int *f34;
    void func_00192420(void);
};


void func_00191C20(int name, C_0018F390 *obj)
{
    int value = func_001E91F4(name);
    obj->func_0018F390(&D_00275630, 0x700, &value);
}

int func_00192300(void) {
    return 0;
}

undefined4 C_001923D0::func_001923D0(byte param_1)
{
  int func_00157660(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00157660();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00192420::func_00192420(void)
{
    int i;

    vtbl = &D_0028AB24;
    if (f34 != 0) {
        for (i = 0; i < f2c; i++) {
            if (f34[i] != 0) {
                func_001E8390((void *)f34[i]);
            }
        }
        func_001E8390(f34);
    }
    ((C_001927A0 *)this)->func_001927A0();
}

