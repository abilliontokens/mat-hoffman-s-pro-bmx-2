/* 16 functions from 0x001858A0 to 0x001867D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

extern char D_00289608;
extern char D_00289614;
extern char D_00289620;
extern char D_00289628;
extern char D_00289630;
extern char D_00289638;
extern char D_00289640;
extern char D_00289650;
extern char D_002896B4;
extern char D_002896B8;
extern char D_00289830;
extern char D_002A90B4;

/* the stream/config reader passed to the load functions */
struct S_Stream {
    int func_00169710(char *name);
    void func_00168CB0(void *key, void *def, void *dst);
    void func_00168C20(void *key, int def, void *dst);
};

struct C_00185970 {
    char pad0[4];
    char f4[0x10];
    char f14[0x10];
    char f24[0x10];
    char f34[0x10];
    int f44;
    int f48;
    int func_00185970(S_Stream *stream, int n);
};

/* element called through its vtable slot 0 */
struct S_ZoneInfoItem {
    virtual void load(S_Stream *stream);
    char pad4[0x1c];
};

struct S_ZoneInfo {
    u32 vtbl;
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
};

struct C_00185B10 {
    void *vtbl;
    int f4;
    S_ZoneInfo elems[10];
    C_00185B10 *func_00185B10(void);
    int func_00185B60(S_Stream *stream);
};

struct C_001862E0 {
    void *vtbl;
    void *f4;
    void *f8;
    C_001862E0 *func_001862E0(void);
};

extern "C" int strcmp(const char *a, const char *b);
void func_001E891B(void *p);
extern int D_002896CC;
extern int D_002897FC;

struct V4Z_001858A0 {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    void Clear(void)
    {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
    }
    void Set(u32 x, u32 y, u32 z, u32 w)
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }
};

struct IB_001858A0 {
    u32 a;
    u8 b;
    void Clear(void)
    {
        a = 0;
        b = 0;
    }
    void Set(u32 x, u8 y)
    {
        a = x;
        b = y;
    }
};

struct C_00185D00 {
    void *vtbl;
    int f4;
    void **f8;
    void *fc;
    void func_00185D00(void);
};

struct C_00186170 {
    void *vtbl;
    int f4;
    V4Z_001858A0 f8;
    u32 f18;
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28;
    u8 f2c;
    char pad2d[0x38 - 0x2d];
    IB_001858A0 f38;
    V4Z_001858A0 f40;
    u32 f50;
    u8 f54;
    char pad55[0x94 - 0x55];
    V4Z_001858A0 f94;
    u32 fa4;
    char pada8[0xe8 - 0xa8];
    int fe8;
    int fec;
    u32 ff0;
    u32 ff4;
    C_00186170 *func_00186170(void);
    void func_00186210(void);
};

struct C_00186540 {
    void func_00186540(int param_1);
};


int C_00185970::func_00185970(S_Stream *stream, int n)
{
    char buf[0x104];

    func_001ADCC0(buf, 0x104, &D_00289640, n);
    stream->func_00169710(buf);
    stream->func_00168CB0(&D_00289638, &D_002A90B4, f4);
    stream->func_00168CB0(&D_00289630, &D_002A90B4, f14);
    stream->func_00168CB0(&D_00289628, &D_002A90B4, f24);
    stream->func_00168CB0(&D_00289620, &D_002A90B4, f34);
    stream->func_00168C20(&D_00289614, 0, &f44);
    stream->func_00168C20(&D_00289608, 0, &f48);
    return 1;
}

C_00185B10 *C_00185B10::func_00185B10(void)
{
    S_ZoneInfo *p;
    int n;

    vtbl = &D_002896B4;
    p = elems;
    n = 10;
    do {
        p->vtbl = (u32)&D_00289650;
        p->f8 = 0;
        p->f4 = 0x3f800000;
        p->fc = 0x3f800000;
        p->f10 = 0x3f800000;
        p->f14 = 0x3f800000;
        p->f18 = 1;
        p->f1c = 1;
        p++;
    } while (--n != 0);
    f4 = 0;
    return this;
}

int C_00185B10::func_00185B60(S_Stream *stream)
{
    char buf[0x104];
    int i;
    int count = 0;

    for (i = 0; i < 10; i++) {
        func_001ADCC0(buf, 0x104, &D_002896B8, i + 1);
        if (stream->func_00169710(buf)) {
            ((S_ZoneInfoItem *)&elems[f4 + i])->load(stream);
            count++;
        }
    }
    f4 += count;
    return count != 0;
}

void C_00185D00::func_00185D00(void)
{
    int i;

    vtbl = &D_002896CC;
    for (i = 0; i < f4; i++) {
        if (f8[i] != 0) {
            func_001E891B(f8[i]);
        }
    }
    if (f8 != 0) {
        func_001E891B(f8);
    }
    if (fc != 0) {
        func_001E891B(fc);
    }
}

C_00186170 *C_00186170::func_00186170(void)
{
    vtbl = &D_002897FC;
    f4 = 4;
    f8.Clear();
    f2c = (f2c & 0x84) | 4;
    f18 = 0;
    f1c = 0;
    f20 = 0;
    f28 = 0;
    f24 = 0;
    fe8 = 1;
    f38.Clear();
    f40.Clear();
    f50 = 0x3f800000;
    f94.Clear();
    fa4 = 0x3f800000;
    f54 = 0;
    fec = -1;
    ff0 = 0x3f800000;
    ff4 = 0;
    return this;
}

void C_00186170::func_00186210(void)
{
    vtbl = &D_002897FC;
    if (f18 != 0) {
        func_001E891B((void *)f18);
        f18 = 0;
    }
    if (f1c != 0) {
        func_001E891B((void *)f1c);
        f1c = 0;
    }
    if (f20 != 0) {
        func_001E891B((void *)f20);
        f20 = 0;
    }
}

int __stdcall func_00186260(const char *s)
{
    if (strcmp(s, "Ambient") == 0) {
        return 4;
    }
    if (strcmp(s, "Directional") == 0) {
        return 2;
    }
    if (strcmp(s, "ObjectPoint") == 0) {
        return 1;
    }
    if (strcmp(s, "Spotlight") == 0) {
        return 3;
    }
    return 0;
}

C_001862E0 *C_001862E0::func_001862E0(void)
{
    vtbl = &D_00289830;
    f4 = 0;
    f8 = 0;
    return this;
}

void C_00186540::func_00186540(int param_1)
{
  int func_001E8A44(...);
  int in_ECX = (int)this;
  undefined4 uVar1;
  
  *(int *)(in_ECX + 0x28) = param_1;
  if (0 < param_1) {
    uVar1 = func_001E8A44(param_1 << 4);
    *(undefined4 *)(in_ECX + 0x30) = uVar1;
    uVar1 = func_001E8A44(param_1 * 4);
    *(undefined4 *)(in_ECX + 0x34) = uVar1;
  }
  return;
}
