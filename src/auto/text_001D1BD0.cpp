/* 3 functions from 0x001D1BD0 to 0x001D2A40, found by Ghidra. */
#include "common.h"
#include <string.h>
#include <xmmintrin.h>
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
    unsigned char dir;
    unsigned short done;
    float step[6];
    float val[6];
};
extern float D_002ABC38, D_002ABC3C, D_00275544, D_00275460, D_0028F3DC;
extern char D_0028F430[], D_002769F8[], D_0028F420[], D_0028D1DC[], D_0028F410[], D_0028D1D0[];
extern char D_002764F0[], D_002769A8[], D_00276974[], D_00276968[], D_0028F404[], D_0028F3F4[];
extern char D_0028F3E0[], D_0028F3D0[], D_0028F3C8[], D_0028F3BC[], D_0028F3B4[], D_0028F3A8[];
extern char D_0028F398[], D_0028F384[], D_0028F378[], D_0028F36C[], D_0028F360[];
void *func_001E8A44(int);
int func_001ADCC0(char *, int, const char *, ...);

struct Reader1D1BD0 {
    char pad[0x4cc];
    Reader1D1BD0 *func_00168280();
    int func_00169490(const char *, int);
    int func_00169710(const char *);
    void func_001691E0();
    int func_00168C20(const char *, int, int *);
    int func_00168C50(const char *, int, float *);
    void func_00168BE0(const char *, const char *, char *, int);
};

static __forceinline int Min_1D1BD0(int a, int b) { return a > b ? b : a; }
static __forceinline int Max_1D1BD0(int a, int b) { return a < b ? b : a; }
static __forceinline float MinF_1D1BD0(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float MaxF_1D1BD0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
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
