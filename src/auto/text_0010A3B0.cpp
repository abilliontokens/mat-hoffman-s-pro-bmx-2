/* 1 function from 0x0010A3B0 to 0x0010C090, found by Ghidra. */
#include "common.h"
extern char D_00275678[];
struct TexMgr_0010A3B0 {
    int func_00162B20(char* name, int flag);
};
extern TexMgr_0010A3B0* D_002EF7D0;
int func_001ADCC0(char* buf, int size, const char* fmt, ...);
struct Hud_0010A3B0 {
    void func_0010A3B0();
};
#define HI(o) (*(int*)((char*)this + (o)))
#define LOAD_TEX(o, name) \
    func_001ADCC0(buf, 0x100, D_00275678, prefix, name); \
    HI(o) = D_002EF7D0->func_00162B20(buf, 1)
