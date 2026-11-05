/* 16 functions from 0x001E2770 to 0x001E2F1C, found by Ghidra. */
#include "common.h"

struct S_AnsiString {
    u16 length;
    u16 maxLength;
    char *buffer;
};

struct S_SectionEntry {
    char pad0[0x14];
    char *name;
    char pad18[0x20];
};

extern int D_0001011C;
extern S_SectionEntry *D_00010120;

extern "C" __declspec(dllimport) void __stdcall RtlInitAnsiString(S_AnsiString *dst, const char *src);
extern "C" __declspec(dllimport) u8 __stdcall RtlEqualString(S_AnsiString *a, S_AnsiString *b, int caseInsensitive);
extern "C" __declspec(dllimport) int __stdcall XeLoadSection(void *section);

int __stdcall func_001E2774(const char *name);
int __stdcall func_001E27DB(int *section);
void __stdcall func_001DD62B(int code);
void __stdcall func_001DD659(int code);

struct C_001E2770 {
    int func_001E2770();
};
