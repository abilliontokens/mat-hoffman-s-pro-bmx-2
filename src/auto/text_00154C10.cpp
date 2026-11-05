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

template <class T> inline const T &Min_001554D0(const T &l, const T &r) { return r < l ? r : l; }

/* the path buffers are saved and restored with a length-clamped copy */
static __forceinline void CopyPath_001554D0(char *dst, const char *src)
{
    int n = Min_001554D0(0x103, (int)strlen(src));
    func_001E8920(dst, src, n);
    dst[n] = 0;
}

/* frame-resident temporaries of the inlined clamp (the original keeps them in stack slots) */
struct S_001554D0_Tmp {
    void * volatile self;
    volatile int s0;
    volatile int s1;
    volatile int s2;
};

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

struct S_001554D0_Root {
    char pad0[4];
    S_001554D0_Scene *f4;
};

struct S_001554D0_Global {
    char pad0[0x348];
    int f348;
    char pad34C[0x15c];
    int *f4A8;
    char pad4AC[0x14];
    int f4C0;
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
    void *mem;
    int i;

    f3C->f4->func_0019ABA0(D_002B9120->f4A8[D_002B9120->f348], 2);
    CopyPath_001554D0(buf1, D_002A5EA0);
    CopyPath_001554D0(buf2, D_002A60B0);
    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A45E0);
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    CopyPath_001554D0(D_002A5EA0, buf1);
    CopyPath_001554D0(D_002A60B0, buf2);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    mem = func_001E8A44(0x20c);
    f3B4 = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    f3B4->v4(D_002758F0, 1, 1, 0, 0);
    mem = func_001E8A44(0x20c);
    f3B8 = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
    f3B8->v4(D_002758E4, 1, 1, 0, 0);
    for (i = 0; i < 2; i++) {
        func_001ADCC0(name, 0x104, D_002758D8, i + 1);
        mem = func_001E8A44(0x20c);
        f3A0[i] = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        f3A0[i]->v4(name, 1, 1, 0, 0);
    }
    for (i = 0; i < 2; i++) {
        func_001ADCC0(name, 0x104, D_002758CC, i + 1);
        mem = func_001E8A44(0x20c);
        f3A8[i] = mem ? ((S_001554D0_Obj *)mem)->func_001CF740(D_002A8490->f4->fB4, D_002B9120->f4C0, 1) : 0;
        f3A8[i]->v4(name, 1, 1, 0, 0);
    }
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
}

