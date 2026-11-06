/* 4 functions from 0x00154C10 to 0x00155890, found by Ghidra. */
#include "common.h"

#include <string.h>

extern int D_00286DD4;

void *func_001E8A44(unsigned int size);
int func_001ADCC0(char *dst, int size, const char *fmt, ...);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);

extern char D_002A5EA0[], D_002A60B0[], D_002A45E0[], D_002A5870[], D_00275678[];
extern char D_002A5FA8[], D_002A47F0[], D_002A48F8[], D_002A5348[];
extern char D_002758F0[], D_002758E4[], D_002758D8[], D_002758CC[];

/* the path buffers are saved and restored with a length-clamped copy; the original
   keeps the clamp's operands and result in three stack slots (len/limit/result) */
static __forceinline void CopyPathV_001554D0(char *dst, const char *src, volatile int &len, volatile int &lim, volatile int &res)
{
    int ma, mb, n;
    len = strlen(src);
    lim = 0x103;
    ma = lim;
    mb = len;
    res = ma > mb ? mb : ma;
    n = res;
    func_001E8920(dst, src, n);
    dst[n] = 0;
}

/* menu object (0x20c bytes) created through func_001CF740 */
struct S_001554D0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(const char *s, int a, int b, int c, int d);
    S_001554D0_Obj *func_001CF740(void *a, int b, int c);
};

struct S_001554D0_Cam {
    void func_0019ABA0(int a, int b);
};

struct S_001554D0_Owner {
    char pad0[4];
    S_001554D0_Cam *f4;
};

struct S_001554D0_Scene {
    char pad0[0xb4];
    void *fB4;
};

struct S_154C10_Dbg {
    char pad0[0x1934];
    int f1934;
};

struct S_154C10_Notify {
    void func_0004AB90(int a);
};

struct S_001554D0_Root {
    char pad0[4];
    S_001554D0_Scene *f4;
    char pad8[0x10];
    S_154C10_Dbg *f18;
    char pad1C[0x124 - 0x1c];
    int f124;
    char pad128[0x2a4 - 0x128];
    S_154C10_Notify *f2A4;
    char pad2A8[0x2e0 - 0x2a8];
    int *f2E0;
};

struct V4_154C10 {
    float x, y, z, w;
};

struct S_154C10_Tbl {
    char pad0[0x24];
    V4_154C10 pts[1];
};

struct S_154C10_Anim {
    int func_0001BE90(void *obj, int a, int b, int c);
};

struct S_001554D0_Global {
    char pad0[0x348];
    int f348;
    char pad34C[0x484 - 0x34c];
    S_154C10_Anim *f484;
    char pad488[0x4a8 - 0x488];
    int *f4A8;
    char pad4AC[0x14];
    int f4C0;
    char pad4C4[0x4dc - 0x4c4];
    S_154C10_Tbl *f4DC;
};

extern S_001554D0_Global *D_002B9120;
extern S_001554D0_Root *D_002A8490;

struct C_001554D0 {
    char pad0[0x3c];
    S_001554D0_Owner *f3C;
    char pad40[0x360];
    S_001554D0_Obj *f3A0[2];
    S_001554D0_Obj *f3A8[2];
    char pad3B0[4];
    S_001554D0_Obj *f3B4;
    S_001554D0_Obj *f3B8;
    void func_001554D0(int a0);
};

struct C_001C7310 {
    void func_001C7310(void *param);
};

struct C_00155450 {
    void *vtbl;
    char pad4[0x380];
    int f384, f388, f38C, f390, f394, f398, f39C, f3A0;
    int f3A4, f3A8, f3AC, f3B0, f3B4, f3B8;
    char pad3BC[0x28];
    int f3E4;
    C_00155450 *func_00155450(void *param);
};

C_00155450 *C_00155450::func_00155450(void *param)
{
    ((C_001C7310 *)this)->func_001C7310(param);
    f384 = 0;
    f388 = 0;
    f38C = 0;
    f390 = 0;
    f394 = 0;
    f398 = 0;
    f39C = 0;
    f3A0 = 0;
    f3A8 = 0;
    f3A4 = 0;
    f3AC = 0;
    f3B0 = 0;
    f3B4 = 0;
    f3B8 = 0;
    f3E4 = 0;
    vtbl = (void *)&D_00286DD4;
    return this;
}

void C_001554D0::func_001554D0(int a0)
{
    char buf1[0x104];
    char buf2[0x104];
    char name[0x104];
    struct { C_001554D0 * volatile self; volatile int s0; volatile int s1; volatile int s2; } t;
    void *mem;
    int off;
    int k;

    t.self = this;
    f3C->f4->func_0019ABA0(D_002B9120->f4A8[D_002B9120->f348], 2);
    CopyPathV_001554D0(buf1, D_002A5EA0, t.s2, t.s1, t.s0);
    CopyPathV_001554D0(buf2, D_002A60B0, t.s0, t.s1, t.s2);
    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A45E0);
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    CopyPathV_001554D0(D_002A5EA0, buf1, t.s0, t.s1, t.s2);
    CopyPathV_001554D0(D_002A60B0, buf2, t.s0, t.s1, t.s2);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    mem = func_001E8A44(0x20c);
    t.self->f3B4 = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    t.self->f3B4->v4(D_002758F0, 1, 1, 0, 0);
    mem = func_001E8A44(0x20c);
    t.self->f3B8 = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    t.self->f3B8->v4(D_002758E4, 1, 1, 0, 0);
    k = 0;
    off = 0x3a0;
    do {
        k++;
        func_001ADCC0(name, 0x104, D_002758D8, k);
        mem = func_001E8A44(0x20c);
        *(S_001554D0_Obj **)((char *)t.self + off) = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        (*(S_001554D0_Obj **)((char *)t.self + off))->v4(name, 1, 1, 0, 0);
        off += 4;
    } while (off < 0x3a8);
    k = 0;
    off = 0x3a8;
    do {
        k++;
        func_001ADCC0(name, 0x104, D_002758CC, k);
        mem = func_001E8A44(0x20c);
        *(S_001554D0_Obj **)((char *)t.self + off) = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        (*(S_001554D0_Obj **)((char *)t.self + off))->v4(name, 1, 1, 0, 0);
        off += 4;
    } while (off < 0x3b0);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
}

