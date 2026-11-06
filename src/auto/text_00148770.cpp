/* 1 function from 0x00148770 to 0x00148778, found by Ghidra. */
#include "common.h"

struct C_00149040 {
    void func_00149040(void *param);
};

struct Pad_00148770 { int a, b, c; };
struct Sec_00148770 { int d; };
struct Der_00148770 : Pad_00148770, Sec_00148770 {
    void func_00149040(void *param);
};
struct C_00148770 : Sec_00148770 {
    void func_00148770(void *param);
};

void __fastcall func_00148770(int self, int unused, void *param);
void __fastcall func_00149040(int self, int unused, void *param);

void __fastcall func_00148770(int self, int unused, void *param)
{
    func_00149040(self - 0xC, unused, param);
}
