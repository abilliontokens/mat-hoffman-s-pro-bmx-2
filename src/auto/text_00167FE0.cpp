/* 17 functions from 0x00167FE0 to 0x00168F40, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" unsigned int strlen(const char *s);
extern "C" char *strcpy(char *dst, const char *src);
#pragma intrinsic(strlen)
#pragma intrinsic(strcpy)

int func_001EA211(int c);
int func_001E91F4(const char *s);
double func_001E9649(const char *s);
void *func_001E8AA5(unsigned int size);
int func_001ADCC0(char *dst, int n, const char *fmt, ...);
int func_00168120(const char *s);
int __stdcall func_00168A10(int a, int *out);
extern char D_00288004[];
extern char D_00288008[];

struct C_001684B0 {
    void func_001684B0(void);
};


int func_00168120(const char *s)
{
    int len;
    int isText;
    int isFloat;
    int i;

    len = strlen(s);
    isFloat = 0;
    isText = 0;
    for (i = 0; i < len; i++) {
        if (func_001EA211(s[i]) != 0) {
            isText = 1;
            i = len;
        } else if (s[i] == '.') {
            isFloat = 1;
        }
    }
    if (isText != 0) {
        return 2;
    }
    if (isFloat != 0) {
        return 1;
    }
    return 0;
}

void C_001684B0::func_001684B0(void)
{
  int func_001E8390(...);
  int in_ECX = (int)this;
  int iVar1;
  
  if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
    iVar1 = **(int **)(in_ECX + 0x20);
    if (iVar1 != 0) {
      func_001E8390(iVar1);
    }
    func_001E8390(*(undefined4 *)(in_ECX + 0x20));
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  return;
}

int __stdcall func_00168C20(int a, int b, int *out)
{
    if (func_00168A10(a, out) != 0) {
        return 1;
    }
    *out = b;
    return 0;
}

