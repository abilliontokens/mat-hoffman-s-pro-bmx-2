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

extern "C" unsigned char _BitScanForward(unsigned long *index, unsigned long mask);
#pragma optimize("y", on)
int __fastcall func_001E2770(unsigned long mask)
{
    unsigned long index;
    _BitScanForward(&index, mask);
    return (int)index;
}
#pragma optimize("", on)
int __stdcall func_001E2774(const char *name)
{
    S_AnsiString target;
    S_AnsiString entryStr;
    S_SectionEntry *entry;
    S_SectionEntry *end;
    RtlInitAnsiString(&target, name);
    entry = D_00010120;
    end = entry + D_0001011C;
    while (entry < end) {
        RtlInitAnsiString(&entryStr, entry->name);
        if (RtlEqualString(&target, &entryStr, 1) != 0) {
            return (int)entry;
        }
        entry = entry + 1;
    }
    func_001DD62B(0x490);
    return -1;
}

extern "C" int (__stdcall *_imp__XeLoadSection)(void *section);
#pragma optimize("y", on)
int __stdcall func_001E27DB(int *section)
{
    int result;
    result = _imp__XeLoadSection(section);
    if (result < 0) {
        func_001DD659(result);
        return 0;
    }
    return section[1];
}
#pragma optimize("", on)

#pragma optimize("y", on)
int __stdcall func_001E281A(const char *name)
{
    int result;
    result = func_001E2774(name);
    if (result != -1) {
        return func_001E27DB((int *)result);
    }
    return 0;
}

int __stdcall func_001E27FC(int *section);
int __stdcall func_001E2835(const char *name)
{
    int result;
    result = func_001E2774(name);
    if (result != -1) {
        return func_001E27FC((int *)result);
    }
    return 0;
}

#pragma optimize("", on)
