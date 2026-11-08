/* 3 functions from 0x001D1BD0 to 0x001D2A40, found by Ghidra. */
#include "common.h"
#include <string.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
/* 0x54-byte keyframe track: frame, x, y, w, h and alpha channels (see C_001D2A40) */
struct LoadingRecord {
    char *name;
    short frameLo, frameHi;
    short posLo[2], posHi[2];
    short sizeLo[2], sizeHi[2];
    float alphaLo, alphaHi;
    union {
        unsigned char flags;
        struct {
            unsigned char rep0 : 1, rep1 : 1, rep2 : 1, rep3 : 1, pong0 : 1, pong1 : 1, pong2 : 1, pong3 : 1;
        };
    };
    union {
        unsigned char dir;
        struct {
            unsigned char dirLow : 6, loop : 1, dirHigh : 1;
        };
    };
    unsigned short done;
    float step[6];
    float val[6];
};
extern float D_002ABC38, D_002ABC3C, D_00275544, D_00275460, D_0028F3DC;
extern char D_0028F430[], D_002769F8[], D_0028F420[], D_0028D1DC[], D_0028F410[], D_0028D1D0[];
extern char D_002764F0[], D_002769A8[], D_00276974[], D_00276968[], D_0028F404[], D_0028F3F4[];
extern char D_0028F3E0[], D_0028F3D0[], D_0028F3C8[], D_0028F3BC[], D_0028F3B4[], D_0028F3A8[];
extern char D_0028F398[], D_0028F384[], D_0028F378[], D_0028F36C[], D_0028F360[];
extern char D_0028F354[], D_0028F348[], D_0028F33C[], D_0028F328[], D_0028F318[], D_0028F30C[];
extern char D_0028F300[], D_0028F2F4[], D_0028F2E0[], D_0028F2D0[], D_0028F2C4[], D_0028F2B8[];
extern char D_0028F2AC[], D_0028F2A0[], D_0028F290[];
extern float D_002755E0;
void *func_001E8A44(int);
int func_001ADCC0(char *, int, const char *, ...);

struct Reader1D1BD0 {
    char pad[0x4cc];
    Reader1D1BD0 *func_00168280();
    int func_00169490(const char *, int);
    int func_00169710(const char *);
    void func_001691E0();
    int func_00168C20(const char *, int, int *);
    int func_00168C50(const char *, float, float *);
    void func_00168BE0(const char *, const char *, char *, int);
};

static __forceinline int Min_1D1BD0(int a, int b) { return a > b ? b : a; }
static __forceinline int Max_1D1BD0(int a, int b) { return a < b ? b : a; }
static __forceinline float MinF_1D1BD0(float a, float b) { return a < b ? a : b; }
static __forceinline float MaxF_1D1BD0(float a, float b) { return a > b ? a : b; }
extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *);
extern "C" __declspec(dllimport) void __stdcall RtlLeaveCriticalSection(void *);

int __stdcall func_001DDC28(int a);
int __stdcall func_001DDDD6(int a, int b);
int __stdcall func_001DD13C(int a);

struct C_001D27F0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001D27F0 {
    char pad0[4];
    int unk4;
    int count;
    int unkC;
    struct LoadingRecord *records;
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    int unk2C;
    char pad30[0x20];
    C_001D27F0_Obj *unk50;
    void func_001D2840(const char *name, int x, int y);
    void func_001D27F0(void);
    int func_001D1BD0(void);
};

int C_001D27F0::func_001D1BD0(void)
{
    Reader1D1BD0 r;
    int i;
    int v14, v18, v1c;
    float f24, a28, a2c;
    int u30, u34, u38, u3c, u40;
    char buf[0x104];
    char name[0x104];

    r.func_00168280();
    if (!r.func_00169490(D_0028F430, 0))
        goto fail;
    if (!r.func_00169710(D_002769F8))
        goto fail;
    r.func_00168C20(D_0028F420, 0, &unk4);
    r.func_00168C20(D_0028D1DC, 0, &count);
    r.func_00168C20(D_0028F410, 1, &v1c);
    {
        int n = count;
        int *p = (int *)func_001E8A44(n * 0x54 + 4);
        if (p) {
            *p = n;
            p++;
        } else {
            p = 0;
        }
        records = (LoadingRecord *)p;
    }
    for (i = 0; i < count; i++) {
        func_001ADCC0(buf, 0x104, D_0028D1D0, i + 1);
        if (r.func_00169710(buf)) {
            records[i].done = 0;
            r.func_00168BE0(D_002769A8, D_002764F0, name, -1);
            if (memcmp(D_002764F0, name, 5) == 0) {
                records[i].name = 0;
            } else {
                records[i].name = (char *)func_001E8A44(0x104);
                memcpy(records[i].name, name, 0x104);
            }
            r.func_00168C20(D_00276974, 1, &v18);
            r.func_00168C20(D_00276968, 1, &v14);
            records[i].frameLo = AsmMinI(v18 - 1, v14 - 1);
            records[i].frameHi = AsmMaxI(v18 - 1, v14 - 1);
            if (v18 <= v14) {
                records[i].dir &= ~1;
            } else {
                records[i].dir |= 1;
            }
            records[i].val[0] = (float)records[i].frameLo;
            r.func_00168C50(D_0028F404, 0, &f24);
            r.func_00168C20(D_0028F3F4, 0, &v1c);
            records[i].rep0 = v1c;
            r.func_00168C20(D_0028F3E0, 0, &v1c);
            records[i].pong0 = v1c;
            records[i].step[0] = (float)(records[i].frameHi - records[i].frameLo) / (f24 * D_0028F3DC);
            r.func_00168C20(D_0028F3D0, 0, &v18);
            r.func_00168C20(D_0028F3C8, 0, &v14);
            records[i].posLo[0] = (short)AsmMinF(v18 * D_002ABC38, v14 * D_002ABC38);
            records[i].posHi[0] = (short)AsmMaxF(v18 * D_002ABC38, v14 * D_002ABC38);
            if (v18 <= v14) {
                records[i].dir &= ~2;
            } else {
                records[i].dir |= 2;
            }
            records[i].val[1] = (float)records[i].posLo[0];
            r.func_00168C20(D_0028F3BC, 0, &v18);
            r.func_00168C20(D_0028F3B4, 0, &v14);
            records[i].posLo[1] = (short)AsmMinF(v18 * D_002ABC3C, v14 * D_002ABC3C);
            records[i].posHi[1] = (short)AsmMaxF(v18 * D_002ABC3C, v14 * D_002ABC3C);
            if (v18 <= v14) {
                records[i].dir &= ~4;
            } else {
                records[i].dir |= 4;
            }
            records[i].val[2] = (float)records[i].posLo[1];
            r.func_00168C50(D_0028F3A8, 0, &f24);
            r.func_00168C20(D_0028F398, 0, &v1c);
            records[i].rep1 = v1c;
            r.func_00168C20(D_0028F384, 0, &v1c);
            records[i].pong1 = v1c;
            if (f24 > D_00275544) {
                float k = D_00275460 / (f24 * D_0028F3DC);
                records[i].step[1] = (float)(records[i].posHi[0] - records[i].posLo[0]) * k;
                records[i].step[2] = (float)(records[i].posHi[1] - records[i].posLo[1]) * k;
            } else {
                records[i].step[1] = 0;
                records[i].step[2] = 0;
            }
            records[i].done |= 6;
            r.func_00168C20(D_0028F378, 0x20, &v18);
            r.func_00168C20(D_0028F36C, 0x20, &v14);
            records[i].sizeLo[0] = (short)AsmMinF(v18 * D_002ABC38, v14 * D_002ABC38);
            records[i].sizeHi[0] = (short)AsmMaxF(v18 * D_002ABC38, v14 * D_002ABC38);
            if (v18 <= v14) {
                records[i].dir &= ~8;
            } else {
                records[i].dir |= 8;
            }
            records[i].val[3] = (float)records[i].sizeLo[0];
            r.func_00168C20(D_0028F360, 0x20, &v18);
            r.func_00168C20(D_0028F354, 0x20, &v14);
            records[i].sizeLo[1] = (short)AsmMinF(v18 * D_002ABC3C, v14 * D_002ABC3C);
            records[i].sizeHi[1] = (short)AsmMaxF(v18 * D_002ABC3C, v14 * D_002ABC3C);
            if (v18 <= v14) {
                records[i].dir &= ~0x10;
            } else {
                records[i].dir |= 0x10;
            }
            records[i].val[4] = (float)records[i].sizeLo[1];
            r.func_00168C50(D_0028F348, 0, &f24);
            r.func_00168C20(D_0028F33C, 0, &v1c);
            records[i].rep2 = v1c;
            r.func_00168C20(D_0028F328, 0, &v1c);
            records[i].pong2 = v1c;
            if (f24 > D_00275544) {
                float k = D_00275460 / (f24 * D_0028F3DC);
                records[i].step[3] = (float)(records[i].sizeHi[0] - records[i].sizeLo[0]) * k;
                records[i].step[4] = (float)(records[i].sizeHi[1] - records[i].sizeLo[1]) * k;
            } else {
                records[i].step[3] = 0;
                records[i].step[4] = 0;
            }
            records[i].done |= 0x18;
            r.func_00168C50(D_0028F318, 100.0f, &a28);
            r.func_00168C50(D_0028F30C, 100.0f, &a2c);
            a28 *= D_002755E0;
            a2c *= D_002755E0;
            records[i].alphaLo = AsmMinF(a28, a2c);
            records[i].alphaHi = AsmMaxF(a28, a2c);
            if (a28 <= a2c) {
                records[i].dir &= ~0x20;
            } else {
                records[i].dir |= 0x20;
            }
            records[i].val[5] = a28;
            r.func_00168C50(D_0028F300, 0, &f24);
            r.func_00168C20(D_0028F2F4, 0, &v1c);
            records[i].rep3 = v1c;
            r.func_00168C20(D_0028F2E0, 0, &v1c);
            records[i].pong3 = v1c;
            if (f24 > D_00275544) {
                records[i].step[5] = (records[i].alphaHi - records[i].alphaLo) / (f24 * D_0028F3DC);
            } else {
                records[i].step[5] = 0;
            }
            records[i].done |= 0x20;
            r.func_00168C20(D_0028F2D0, 1, &v1c);
            records[i].loop = v1c;
            r.func_00168C20(D_0028F2C4, 0, &u3c);
            r.func_00168C20(D_0028F2B8, 1, &u40);
            r.func_00168C20(D_0028F2AC, 0, &u38);
            r.func_00168C20(D_0028F2A0, 1, &u30);
            r.func_00168C20(D_0028F290, 0x80, &u34);
        }
    }
    r.func_001691E0();
    return 1;
fail:
    r.func_001691E0();
    return 0;
}

void C_001D27F0::func_001D27F0(void)
{
    unk18 = 0;
    func_001DDC28(unk24);
    func_001DDDD6(unk1C, -1);
    func_001DD13C(unk1C);
    unk20 = 0;
    func_001DD13C(unk24);
    unk28 = 0;
    unk2C = 0;
    if (unk50 != 0) {
        unk50->v2();
        unk50 = 0;
    }
}

void C_001D27F0::func_001D2840(const char *name, int x, int y)
{
    int i;
    if (unk18) RtlEnterCriticalSection(pad30);
    for (i = 0; i < count; i++) {
        if (records[i].name && strcmp(name, records[i].name) == 0) {
            records[i].val[1] = x * D_002ABC38;
            records[i].val[2] = y * D_002ABC3C;
            break;
        }
    }
    if (unk18) RtlLeaveCriticalSection(pad30);
}

