/* 1 function from 0x0007EE80 to 0x00082250, found by Ghidra. */
#include "common.h"

#include <string.h>
#include "asm_helpers.h"

extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
#pragma intrinsic(strlen)

/* text widget: set text / refresh / set colour / set alpha */
struct S_7EE80_Text {
    void func_0005E840(const char *s);
    void func_001D6600(void);
    void func_0005E9A0(unsigned int color);
    void func_0005E9D0(float alpha);
};

/* string table entry (stride 8, only the pointer is read here) */
struct S_7EE80_Str {
    const char *s;
};

struct S_7EE80_StrTbl {
    char pad0[4];
    S_7EE80_Str *f4;
};

/* menu controller object (func_000976A0 & co.) */
struct S_7EE80_Ctl {
    int func_000976A0(void);
    int func_00097FD0(void);
    int func_00097C60(void);
    const char **func_00097C20(void);
};

struct S_7EE80_CtlHolder {
    char pad0[0x1c0];
    S_7EE80_Ctl *f1c0;
};

/* object the menu manager returns for this screen */
struct S_7EE80_Obj {
    char pad0[0x5e8];
    int f5e8;
    int f5ec[8];
};

/* the menu manager (D_002A8490->f2e0) */
struct S_7EE80_Mgr {
    char pad0[0x48];
    int f48;
    char pad4C[0x2c0 - 0x4c];
    S_7EE80_Obj *func_0005C020(void *arg);
    char pad2C4[0x2d8 - 0x2c4];
    void *f2D8;
};

struct S_7EE80_Root {
    char pad0[0x2e0];
    S_7EE80_Mgr *f2E0;
    char pad2E4[4];
    S_7EE80_StrTbl *f2E8;
};

extern S_7EE80_Root *D_002A8490;

struct C_0007EE80 {
    char pad0[0x64];
    int f64;
    char pad68[0x84 - 0x68];
    S_7EE80_Text *f84;
    char pad88[0x1d0 - 0x88];
    S_7EE80_CtlHolder *f1d0;
    char pad1d4[0x200 - 0x1d4];
    S_7EE80_Text *f200;
    S_7EE80_Text *f204;
    char pad208[0x21c - 0x208];
    int f21c;
    char pad220[0x2bc - 0x220];
    int f2bc;
    void func_0007EE80(void);
};

/* copy a table string into a buffer, clamped to cap (the original inlines
   strlen + min + strncpy + NUL) */
static __forceinline void StrCopyV_0007EE80(char *dst, const char *src, int cap)
{
    int len = strlen(src);
    int n = AsmMinI(cap, len);
    func_001E8920(dst, src, n);
    dst[n] = 0;
}
