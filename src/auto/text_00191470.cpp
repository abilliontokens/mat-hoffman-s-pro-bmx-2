/* 22 functions from 0x00191470 to 0x00192470, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <string.h>
struct C_001923D0 {
    undefined4 func_001923D0(byte param_1);
};

extern char D_00275630;
extern char D_00010900;
extern int D_0028AB24;
extern int D_0028AAAC;
extern char D_0028AA90;
extern unsigned char D_002A9818;

int func_001E91F4(int p);
void func_001E8390(void *p);

struct C_0018F390 {
    void func_0018F390(char *name, int id, int *value);
    void func_0018F390(char *name, int id, char *value);
};

/* 4x4 float matrix, 16-byte aligned for movaps */
__declspec(align(16)) struct S_00192310_Mat {
    float m[16];
};

struct C_00157600 {
    void func_00157600(int a);
};

struct C_002AAEC8 {
    char func_001BC6E0(char *name);
};
extern C_002AAEC8 *D_002AAEC8;

struct C_00192370 {
    void *vtbl;
    char pad4[0x20];
    unsigned short f24;
    unsigned char f26;
    unsigned char f27;
    C_00192370 *func_00192370(int a);
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

void func_00191DA0(int name, C_0018F390 *obj)
{
    char value = func_001E91F4(name);
    obj->func_0018F390(&D_00275630, 0x500, &value);
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

