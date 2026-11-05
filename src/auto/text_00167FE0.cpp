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
    char pad0[0x1c];
    int f1c;
    int *f20;
    void func_001684B0(void);
    void func_001684F0(int count);
};

struct C_00168280 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    char f24;
    char pad25[0x3ff];
    int f424;
    int f428;
    int f42c;
    int f430;
    int f434;
    int f438[32];
    int f4b8;
    int f4bc;
    int f4c0;
    int f4c4;
    int f4c8;
    C_00168280 *func_00168280(void);
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

void func_001681A0(const char *s, int *out)
{
    char *copy;
    char *d;
    const char *p;
    char c;

    out[0] = func_00168120(s);
    switch (out[0]) {
    case 0:
        out[1] = func_001E91F4(s);
        break;
    case 1:
        *(float *)&out[1] = (float)func_001E9649(s);
        break;
    case 2:
        copy = (char *)func_001E8AA5(strlen(s) + 1);
        out[1] = (int)copy;
        p = s;
        d = copy;
        do {
            c = *p;
            p++;
            *d = c;
            d++;
        } while (c != '\0');
        break;
    }
}

void func_00168210(int type, int value, char *dst)
{
    switch (type) {
    case 0:
        func_001ADCC0(dst, 3, D_00288004, value);
        break;
    case 1:
        func_001ADCC0(dst, 3, D_00288008, *(float *)&value);
        break;
    case 2:
        strcpy(dst, (const char *)value);
        break;
    }
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

int __stdcall func_00168550(int a, char *dst, int d);
int __stdcall func_00168550(void *a, char *dst, int d);
int __stdcall func_00168BE0(int a, const char *src, char *dst, int d)
{
    if (func_00168550(a, dst, d) != 0) {
        return 1;
    }
    strcpy(dst, src);
    return 0;
}

int __stdcall func_00168C20(int a, int b, int *out)
{
    if (func_00168A10(a, out) != 0) {
        return 1;
    }
    *out = b;
    return 0;
}

