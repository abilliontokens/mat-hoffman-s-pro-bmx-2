/* 3 functions from 0x001D1BD0 to 0x001D2A40, found by Ghidra. */
#include "common.h"
#include <string.h>
struct LoadingRecord { const char *name; char pad4[0x3C]; float x,y,w,h,value; };
extern float D_002ABC38, D_002ABC3C;
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
    char pad0[8];
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
