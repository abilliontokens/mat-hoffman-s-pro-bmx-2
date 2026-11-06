/* 8 functions from 0x000BDF30 to 0x000BEE30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_0027DB74[];
extern char D_0027DB8C[];
extern char D_0027DDE0[];
void func_001E891B(void *p);
char *func_001E8920(char *dst, const char *src, int n);
extern "C" int strlen(const char *s);

template <class T> inline T Min(const T &a, const T &b) { return a > b ? b : a; }

struct S_000BE1D0_Slot {
    char pad0[0x5d4];
    char f5D4[8];
    char f5DC[8];
    int f5E4;
};

struct S_000BE1D0_Slots {
    S_000BE1D0_Slot *func_0005C020(int a);
};

struct S_000BDF30_Config {
    char pad0[0x324];
    int f324;
};

struct S_000BDF30_Game {
    char pad0[0x234];
    int f234;
    char pad238[0xa8];
    S_000BDF30_Config *f2E0;
    char pad2E4[8];
    void *f2EC;
};

struct S_000BDF30_Audio {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
};

extern S_000BDF30_Game *D_002A8490;
extern S_000BDF30_Audio *D_002EFDB8;

/* BmxVideoPlayer: video setup, this in ecx, three stack args (second is the file name) */
struct C_000BE640 {
    void func_000BE640(char *a, char *b, int c);
    void func_001BCC90(void *p);
    void func_000BADB0();
};

struct S_000BDF30_Entry {
    char name[0x104];
    char f104[0x1c];
    int *f120;
    char pad124[0x84];
};

/* 0x120-byte item, display text at +0x104 */
struct S_000BE020_Item {
    char pad0[0x104];
    char name[0x1c];
};

struct S_000BDF30_Lookup {
    int func_0001B3C0(void *entry);
};

struct S_000BDF30_Names {
    char pad0[0x484];
    S_000BDF30_Lookup *f484;
};

/* 0x1a8-byte element of the array at f27C */
struct C_000BA2D0 {
    char pad0[0x1a8];
    void func_000BA2D0();
};

struct C_00136300 {
    void func_00136300();
};

struct C_0013B210 {
    void func_0013B340();
};

struct C_0018C120 {
    void func_0018C120();
};

struct C_001BCC40 {
    void func_001BCC40();
};

struct S_000BE540_Vt {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

extern C_0013B210 *D_002BEAAC;
extern int D_0027D75C;

struct C_000BBE30 {
    void *vtbl;
    char pad4[0x14C];
    S_000BDF30_Names *f150;
    char pad154[0x10C];
    S_000BE540_Vt *f260;
    char pad264[0x18];
    S_000BDF30_Entry *f27C;
    S_000BE020_Item *f280;
    int f284;
    int f288;
    int f28C;
    char pad290[0x20];
    int f2B0[8];
    int f2D0[8];
    void func_000BBA80(int idx, char *buf);
    int func_000BBE30(int show);
    int func_000BBED0(int show);
    int func_000BDF30(int show);
    int func_000BE020(int show);
    void func_000BE540();
    void func_000BE1D0(int slot);
    void func_000BC3E0(int slot);
};

struct C_000BEDA0 {
    undefined4 func_000BEDA0(byte param_1);
};

struct C_000BE510 {
    int unk0;
    void func_00157660(void);
    void *func_000BE510(int flags);
};

struct C_000BEDC0 {
    int unk0;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38[6];
    int f50[6];
    int f68[6];
    int f80;
    int f84;
    int f88[2];
    int f90[2];
    void func_00157600(void *param);
    C_000BEDC0 *func_000BEDC0(void *param);
};


int C_000BBE30::func_000BDF30(int show)
{
    char buf[0x104];
    int idx;

    if (D_002A8490->f2E0->f324 == 1) {
        return func_000BBE30(show);
    }
    func_001ADCC0(buf, 0x104, D_0027DB74, &f27C[f284].f104[0], f28C + 1);
    if (D_002A8490->f234 != 1) {
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();
    }
    idx = f150->f484->func_0001B3C0(&f27C[f284]);
    if (show != 0) {
        func_000BBA80(idx, buf);
    }
    return idx;
}

int C_000BBE30::func_000BE020(int show)
{
    char buf1[0x104];
    char buf2[0x104];
    char buf3[0x104];
    struct { C_000BBE30 * volatile self; volatile int cnt; volatile int limit; volatile int len; } t;
    char *p;
    int idx;

    t.self = this;
    if (D_002A8490->f2E0->f324 == 1) {
        return func_000BBED0(show);
    }
    func_001ADCC0(buf1, 0x104, D_0027DB8C, f280[f27C[f284].f120[f288]].name);
    t.len = strlen(t.self->f27C[t.self->f284].name);
    t.limit = 0x103;
    t.cnt = t.limit > t.len ? t.len : t.limit;
    func_001E8920(buf3, t.self->f27C[t.self->f284].name, t.cnt);
    buf3[t.cnt] = 0;
    p = buf3;
    while (*p != ' ' && *p != 0) {
        p++;
    }
    *p = 0;
    func_001ADCC0(buf2, 0x104, D_0027DDE0, buf3);
    if (D_002A8490->f234 == 1) {
    } else {
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();
    }
    idx = t.self->f150->f484->func_0001B3C0(buf2);
    if (show != 0) {
        t.self->func_000BBA80(idx, buf1);
    }
    return idx;
}

void C_000BBE30::func_000BE1D0(int slot)
{
    S_000BE1D0_Slot *s = (*(S_000BE1D0_Slots **)((char *)D_002A8490->f2E0 + 0x2c0))->func_0005C020(*(int *)((char *)D_002A8490->f2E0 + 0x2d8));
    volatile int len;
    volatile int max;
    volatile int m;
    int n;
#define COPYNAME(dst, src) len = strlen(src); max = 7; m = max > len ? len : max; n = m; func_001E8920(dst, src, n); (dst)[n] = 0;
    COPYNAME((char *)D_002A8490->f2E0 + 0x150 + slot * 8, f27C[f284].f104)
    ((int *)((char *)D_002A8490->f2E0 + 0x1b0))[slot] = f28C;
    COPYNAME((char *)D_002A8490->f2E0 + slot * 8 + 0x1f4, f280[f27C[f284].f120[f288]].name)
    if (*(int *)((char *)D_002A8490->f2E0 + 4) == 0) {
        COPYNAME(s->f5D4, f27C[f284].f104)
        s->f5E4 = f28C;
        COPYNAME(s->f5DC, f280[f27C[f284].f120[f288]].name)
    }
#undef COPYNAME
    func_000BC3E0(slot);
}

void *C_000BE510::func_000BE510(int flags) {
    extern int D_0027DB9C;
    void func_001E891B(void *);
    unk0 = (int)&D_0027DB9C;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_000BBE30::func_000BE540()
{
    int i;

    vtbl = (void *)&D_0027D75C;
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (f27C != 0) {
        int n = ((int *)f27C)[-1];
        void *base = (char *)f27C - 4;
        C_000BA2D0 *p = (C_000BA2D0 *)((char *)f27C + n * 0x1a8);
        if (--n >= 0) {
            int k = n + 1;
            do {
                p--;
                p->func_000BA2D0();
            } while (--k);
        }
        func_001E891B(base);
    }
    if (f280 != 0) {
        func_001E891B((void *)f280);
    }
    if (f260 != 0) {
        f260->v2();
        f260 = 0;
    }
    D_002BEAAC->func_0013B340();
    for (i = 0; i < 8; i++) {
        C_00136300 *p;
        p = (C_00136300 *)f2B0[i];
        if (p != 0) {
            p->func_00136300();
            func_001E891B(p);
        }
        p = (C_00136300 *)f2D0[i];
        if (p != 0) {
            p->func_00136300();
            func_001E891B(p);
        }
    }
    ((C_0018C120 *)D_002A8490->f2EC)->func_0018C120();
    ((C_001BCC40 *)this)->func_001BCC40();
}

undefined4 C_000BEDA0::func_000BEDA0(byte param_1)
{
  int func_000BE540(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000BE540();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_000BEDC0 *C_000BEDC0::func_000BEDC0(void *param)
{
    extern int D_0027DE7C;
    extern C_000BEDC0 *D_002B91AC;
    int i;

    func_00157600(param);
    unk0 = (int)&D_0027DE7C;
    D_002B91AC = this;
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f30 = 0;
    f34 = 0;
    for (i = 0; i < 6; i++) {
        f38[i] = 0;
        f50[i] = 0;
        f68[i] = 0;
    }
    f80 = 0;
    f84 = 0;
    for (i = 0; i < 2; i++) {
        f88[i] = 0;
        f90[i] = 0;
    }
    return this;
}

