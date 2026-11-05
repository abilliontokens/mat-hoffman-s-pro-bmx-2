/* 4 functions from 0x001DA500 to 0x001DB4D0, found by Ghidra. */
#include "common.h"

void *__stdcall func_001FF3C0(int size);
void *__stdcall func_001FF410(void *buffer, int flags);
int __fastcall func_001FEBD0(int n, void *p);
void __stdcall func_001FEE00(int index, void *ptr, int size);
void __fastcall func_001FD020(void *p, int v);
int __stdcall func_001FD770(int v);
void __stdcall func_00200390(int index, int value);
int __stdcall func_001FD8E0(int a, int b);
void __stdcall func_00200B30(int a, int b, void *c);

extern int D_002F1034;
extern int D_00040304;
extern int D_00040354;
extern int D_0020C6DC;
extern int D_0020C6E0;
extern int D_0020C6E4;
extern int D_0020CA50;
extern char D_002AC6D0[];

struct S_001DAAD0_Block {
    int d[20];
};

struct S_001DAAD0_Slot6C {
    void func_0014A650(int a0);
};

struct S_001DAAD0_Slot70 {
    void func_00142D00(int a0);
};

struct S_001DAAD0_Dev {
    char pad0[0x6C];
    S_001DAAD0_Slot6C *f6c;
    S_001DAAD0_Slot70 *f70;
};

extern S_001DAAD0_Dev *D_002EFDB8;

struct C_001DAAD0 {
    char pad0[0xEC];
    int fEC;
    int fF0;
    char padF4[0x230 - 0xF4];
    void *arr230[0x96];
    int func_001DAAD0(int a0, S_001DAAD0_Block *a1, void *a2);
};
