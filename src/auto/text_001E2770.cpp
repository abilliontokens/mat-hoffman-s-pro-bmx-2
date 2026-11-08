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
extern const float D_002902B8;

struct S_func_001E2B60_arg0 {
    char pad0[0x30];
    int f30;
    char pad34[0x60 - 0x34];
    int f60;
    char pad64[0x324 - 0x64];
    int f324;
    int f328;
    char pad32C[0x340 - 0x32C];
    float f340;
    int f344;
    char pad348[0x354 - 0x348];
    int *f354;
    char pad358[0x3c4 - 0x358];
    int f3c4;
    char pad3c8[0x408 - 0x3c8];
    int f408;
    int f40c;
};

struct S_func_001E2B60_arg1 {
    short *f0;
    char pad4[8 - 4];
    char *f8;
    float *fc;
    int *f10;
    char pad14[0x60 - 0x14];
    float *f60;
    char pad64[0x6c - 0x64];
    float f6c;
};

float __stdcall func_00243639(int v);

extern int D_0019660D;

static __forceinline int dither_noise_step(int &seed, int &prev)
{
    int s = seed * (int)&D_0019660D + 1013904223;
    int n;
    seed = s;
    s >>= 2;
    s += s >> 2;
    n = s - prev;
    prev = s;
    return n;
}

#define dither_noise(self) dither_noise_step((self)->f40c, (self)->f408)

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
extern "C" unsigned char _BitScanForward(unsigned long *Index, unsigned long Mask);
#pragma intrinsic(_BitScanForward)
int __fastcall func_001E2770(unsigned long mask)
{
    unsigned long index;
    if (!_BitScanForward(&index, mask))
        return 0;
    return (int)index;
}
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
    ((C_00224F6E *)(unsigned int)((__int64)(unsigned int)this - 8))->func_00224F6E(flags);
}

int __stdcall func_001E29CD(S_func_001E29CD_arg0 *obj)
{
    int n = obj->f380;
    int b = obj->f384;
    float *p;
    int v;
    double k;

    if (n >= b) {
        n = b;
    }
    switch (n) {
    case 0x40:
        v = obj->f424;
        break;
    case 0x80:
        v = obj->f420;
        break;
    case 0x100:
        v = obj->f41C;
        break;
    case 0x200:
        v = obj->f418;
        break;
    case 0x400:
        v = obj->f414;
        break;
    case 0x800:
        v = obj->f410;
        break;
    default:
        return 0x80040002;
    }
    obj->f428 = v;
    p = D_00252DE8[n >> 7];
    obj->f358 = p[0];
    obj->f35C = p[1];
    obj->f360 = -p[0];
    k = D_00275600;
    obj->f364 = p[1];
    obj->f368 = (float)(p[8] * k);

    if (obj->f388 < b) {
        b = obj->f388;
    }
    switch (b) {
    case 0x40:
        v = obj->f424 + 0x100;
        break;
    case 0x80:
        v = obj->f420 + 0x200;
        break;
    case 0x100:
        v = obj->f41C + 0x401;
        break;
    case 0x200:
        v = obj->f418 + 0x800;
        break;
    case 0x400:
        v = obj->f414 + 0x1000;
        break;
    case 0x800:
        v = obj->f410 + 0x2000;
        break;
    default:
        return 0x80040002;
    }
    obj->f42C = v;
    p = D_00252DE8[b >> 7];
    obj->f36C = p[1];
    obj->f370 = -p[0];
    obj->f374 = p[1];
    obj->f378 = p[0];
    obj->f37C = (float)(p[8] * k);
    return 0;
}

int __stdcall mix_dither_block(S_func_001E2B60_arg0 *self, S_func_001E2B60_arg1 *arg, float *gains)
{
    float level = func_00243639(self->f344);
    float inv = 1.0f / arg->f6c;
    float scale = inv * level;
    short *src = arg->f0;
    float *dst = arg->f60;
    char *flags = arg->f8;
    int *b = arg->f10;
    float *a = arg->fc;
    int seg = 0;
    int j = 0;
    int i;

    if (self->f30 == 0) {
        memset(dst, 0, self->f324 * 4);
        for (i = self->f324; i < self->f328; i++) {
            dst[i] = src[j++] * gains[i] * scale;
        }
        memset(dst + self->f328, 0, (self->f60 - self->f328) * 4);
    } else {
        float amp = self->f340 * 1.86264515e-09f;
        int n = self->f324;
        int k = 0;
        int end;
        float t;
        for (i = 0; i < n; i++) {
            dst[i] = dither_noise(self) * amp * gains[self->f324] * scale;
        }
        n = self->f3c4;
        for (; i < n; i++) {
            t = dither_noise(self) * amp;
            if (i >= self->f354[seg + 1]) {
                seg++;
            }
            dst[i] = (src[j] + t) * gains[i] * scale;
            j++;
        }
        while (i < self->f328) {
            if (i >= self->f354[seg + 1]) {
                seg++;
            }
            end = self->f354[seg + 1];
            if (end >= self->f328) {
                end = self->f328;
            }
            if (flags[seg] == 1) {
                float g = func_00243639(b[k]) * a[k] * inv * 1.86264515e-09f;
                for (; i < end; i++) {
                    dst[i] = dither_noise(self) * gains[i] * g;
                }
                k++;
            } else {
                if (self->f328 < end) {
                    end = self->f328;
                }
                for (; i < end; i++) {
                    dst[i] = (dither_noise(self) * amp + src[j]) * gains[i] * scale;
                    j++;
                }
            }
        }
        n = self->f60;
        t = scale * gains[self->f328 - 1] * amp;
        for (; i < n; i++) {
            dst[i] = dither_noise(self) * t;
        }
    }
    return 0;
}

#pragma optimize("", on)
