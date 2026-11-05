/* 13 functions from 0x001ECD6C to 0x001ED0FA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001ECDE7(int param_1, int param_2, int param_3, int param_4)
{
    int func_001ECFB0(...);
    int func_001EC873(...);
    int func_001ECE2F(...);
    func_001ECFB0(param_1, param_2);
    func_001ECFB0(param_3, param_4);
    func_001EC873();
    func_001ECE2F();
}

#pragma optimize("s", on)
void *func_001ECFEC(unsigned int size)
{
    void func_001EB390(int);
    void func_001EB302(int);
    void *func_001DF5B3(void);
    void * __stdcall func_001E013E(void *, int, unsigned int);
    extern int D_002FB364;
    void *pvReturn;
    if (D_002FB364 == 3) {
        func_001EB390(4);
        __try {
            pvReturn = 0;
        } __finally {
            func_001EB302(4);
        }
        if (pvReturn) {
            return pvReturn;
        }
    }
    return func_001E013E(func_001DF5B3(), 0, size);
}
#pragma optimize("", on)
void func_001ED03C(void) {
    int func_001EB302(...);
    func_001EB302(4);
}

#pragma optimize("sy", on)
int func_001ED045(unsigned int c)
{
    extern int D_002AEA38;
    extern unsigned short *D_002AEA30;
    int func_001EC5F1(int, int);
    if (c > 0xff) {
        return 0;
    }
    if (D_002AEA38 > 1) {
        return func_001EC5F1(c, 8);
    }
    return D_002AEA30[c] & 8;
}
int func_001ED075(void)
{
  int func_001EB7E9(...);
  int iVar1;
  
  iVar1 = func_001EB7E9();
  return iVar1 + 8;
}

int func_001ED07E(void)
{
  int func_001EB7E9(...);
  int iVar1;
  
  iVar1 = func_001EB7E9();
  return iVar1 + 0xc;
}

void func_001ED087(unsigned int code)
{
    extern unsigned int D_002AEAD0[];
    extern unsigned int D_002AEAD4[];
    int func_001EB7E9(void);
    unsigned int i;
    *(unsigned int *)(func_001EB7E9() + 0xc) = code;
    for (i = 0; i < 0x2d; i++) {
        if (code == D_002AEAD0[i * 2]) {
            *(unsigned int *)(func_001EB7E9() + 8) = D_002AEAD4[i * 2];
            return;
        }
    }
    if (code >= 0x13 && code <= 0x24) {
        *(unsigned int *)(func_001EB7E9() + 8) = 0xd;
    } else if (code >= 0xbc && code <= 0xca) {
        *(unsigned int *)(func_001EB7E9() + 8) = 8;
    } else {
        *(unsigned int *)(func_001EB7E9() + 8) = 0x16;
    }
}

