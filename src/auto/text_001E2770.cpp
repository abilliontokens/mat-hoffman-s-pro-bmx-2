/* 16 functions from 0x001E2770 to 0x001E2F1C, found by Ghidra. */
#include "common.h"
#include <string.h>
#pragma intrinsic(memcpy, memset)
extern u32 D_000417FC;
extern u32 D_00041808;

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

struct C_00224F6E {
    void func_00224F6E(unsigned int flags);
};

struct Class_002901A0 {
    void func_001E29C5(unsigned int flags);
};

extern int D_0001011C;
extern S_SectionEntry *D_00010120;

struct S_func_001E29CD_arg0 {
    char pad0[0x358];
    float f358;
    float f35C;
    float f360;
    float f364;
    float f368;
    float f36C;
    float f370;
    float f374;
    float f378;
    float f37C;
    int f380;
    int f384;
    int f388;
    char pad38C[0x410 - 0x38C];
    int f410;
    int f414;
    int f418;
    int f41C;
    int f420;
    int f424;
    int f428;
    int f42C;
};

extern float *D_00252DE8[];
extern float D_00275600;

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
extern "C" int (__stdcall *_imp__XeUnloadSection)(void *section);
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

int __stdcall func_001E27FC(int *section)
{
    int result;
    result = _imp__XeUnloadSection(section);
    if (result < 0) {
        func_001DD659(result);
        return 0;
    }
    return 1;
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

int __stdcall func_001E2850(int *section)
{
    return section[2];
}

int __stdcall func_001E285A(u32 *buffer, u32 *size, u32 value, unsigned int count, u16 *data)
{
    unsigned int origCount = count;
    int write = 0;
    u32 *p = 0;
    u16 *origData = data;
    unsigned int pass = 0;
    do {
        int n;
        int pad;
        u32 old;
        if (write) { p[0] = (u32)&D_000417FC; p[1] = value; }
        p += 2;
        n = 1;
        if (count > 0xffe) {
            unsigned int chunks = (count - 0xfff) / 0xffe + 1;
            n = chunks * 0x7ff + 1;
            do {
                if (write) {
                    p[0] = 0x5ffc1800;
                    memcpy(p + 1, data, 0x7ff * 4);
                }
                data += 0xffe;
                count -= 0xffe;
                p += 0x800;
            } while (--chunks);
        }
        {
            unsigned int dw = count >> 1;
            if (write) {
                p[0] = (dw << 18) + 0x1800 | 0x40000000;
                memcpy(p + 1, data, dw * 4);
            }
            data += dw * 2;
            n += dw;
            p += dw + 1;
        }
        if (count & 1) {
            if (write) { p[0] = (u32)&D_00041808; p[1] = *data; }
            p += 2;
            n++;
        }
        if (write) { p[0] = (u32)&D_000417FC; p[1] = 0; }
        p += 2;
        pad = 0x9f - n;
        if (pad > 0) {
            if (write) {
                p[0] = (pad << 18) + 0x100 | 0x40000000;
                memset(p + 1, 0, pad * 4);
            }
            p += pad + 1;
        }
        if (pass == 0) {
            old = *size;
            p++;
            *size = (u32)p;
            if (buffer == 0) return 0;
            if (old < (u32)p) return 0x88760829;
            p = buffer;
            count = origCount;
            write = 1;
            data = origData;
        }
    } while (++pass < 2);
    return 0;
}

void Class_002901A0::func_001E29C5(unsigned int flags)
{
    ((C_00224F6E *)((char *)this - 8))->func_00224F6E(flags);
}

#pragma optimize("", on)
