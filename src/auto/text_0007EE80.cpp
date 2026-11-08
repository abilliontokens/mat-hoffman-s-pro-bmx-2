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
    int unk4;
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

/* the sub-object whose method builds this screen's data */
struct S_7EE80_Sub {
    S_7EE80_Obj *func_0005C020(void *arg);
};

/* the menu manager (D_002A8490->f2e0) */
struct S_7EE80_Mgr {
    char pad0[0x48];
    int f48;
    char pad4C[0x2c0 - 0x4c];
    S_7EE80_Sub *f2C0;
    char pad2C4[0x2d8 - 0x2c4];
    void *f2D8;
    S_7EE80_Obj *func_0005C020(void *arg);
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

#pragma optimize("y", on)
void C_0007EE80::func_0007EE80(void)
{
    __declspec(align(8)) char small[0x40];
    char bufa[0x104];
    char buf1[0x104];
    char buf2[0x104];
    S_7EE80_Obj *obj = D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8);
    volatile int zero = 0;
    volatile int id1, id2;
    int mode = f1d0->f1c0->func_000976A0();
    switch (mode) {
    case 0:
        id1 = 0xd6;
        id2 = 0xd7;
        break;
    case 1:
        id1 = 0xd8;
        id2 = 0xd9;
        break;
    case 2:
        id1 = 0xda;
        id2 = 0xdb;
        if (f1d0->f1c0->func_00097FD0() == 1) {
            obj->f5ec[D_002A8490->f2E0->f48] = 1;
        }
        break;
    case 3:
        obj->f5ec[D_002A8490->f2E0->f48] = 1;
        id1 = 0xdc;
        id2 = 0xdd;
        if (D_002A8490->f2E0->f48 == 7) {
            int count = zero;
if (obj->f5ec[0] == 1) ++count;
if (obj->f5ec[1] == 1) ++count;
if (obj->f5ec[2] == 1) ++count;
if (obj->f5ec[3] == 1) ++count;
if (obj->f5ec[4] == 1) ++count;
if (obj->f5ec[5] == 1) ++count;
if (obj->f5ec[6] == 1) ++count;
if (obj->f5ec[7] == 1) ++count;
if (count == 8) {
                obj->f5e8 = 1;
            }
        }
        break;
    default:
        id1 = zero;
        id2 = zero;
        break;
    }
    StrCopyV_0007EE80(buf1, D_002A8490->f2E8->f4[id1].s, 0x103);
    StrCopyV_0007EE80(buf2, D_002A8490->f2E8->f4[id2].s, 0x103);
    f200->func_0005E840(buf1);
    switch (f64) {
    case 0:
        if (f21c != -1) {
            if (f1d0->f1c0->func_000976A0() == 3) {
                StrCopyV_0007EE80(bufa, D_002A8490->f2E8->f4[0xdc].s, 0x103);
                StrCopyV_0007EE80(small, D_002A8490->f2E8->f4[0xdd].s, 0x3f);
                obj->f5ec[D_002A8490->f2E0->f48] = 1;
            } else {
                const char **arr;
                int n = f1d0->f1c0->func_00097C60();
                arr = f1d0->f1c0->func_00097C20();
                StrCopyV_0007EE80(small, arr[f21c], 0x3f);
                StrCopyV_0007EE80(bufa, buf1, 0x103);
            }
            f204->func_0005E840(small);
            f204->func_001D6600();
            f200->func_0005E840(bufa);
            f200->func_001D6600();
        } else if (f1d0->f1c0->func_000976A0() == 3) {
StrCopyV_0007EE80(bufa,D_002A8490->f2E8->f4[0xdc].s,0x103);
StrCopyV_0007EE80(small,D_002A8490->f2E8->f4[0xdd].s,0x3f);
f204->func_0005E840(small); f204->func_001D6600(); f200->func_0005E840(bufa); f200->func_001D6600();
obj->f5ec[D_002A8490->f2E0->f48]=1;
}
        break;
    case 1:
        if (!f1d0->f1c0) break;
        {
            int n = f1d0->f1c0->func_00097C60();
            const char **arr = f1d0->f1c0->func_00097C20();
            f2bc = 0;
            if (!arr) {
                f200->func_0005E840(D_002A8490->f2E8->f4[0x1fb].s);
                f200->func_001D6600();
                f84->func_0005E9A0(0xff5eff5e);
                f84->func_0005E9D0(1.0f);
                f84->func_0005E840(D_002A8490->f2E8->f4[0xdd].s);
                f84->func_001D6600();
            }
        }
        break;
    }
}
#pragma optimize("", on)
