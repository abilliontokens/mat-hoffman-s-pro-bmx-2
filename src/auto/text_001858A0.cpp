/* 16 functions from 0x001858A0 to 0x001867D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
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

struct S_Vec4_001858A0 {
    float x, y, z, w;
    S_Vec4_001858A0() { x = y = z = 0.0f; w = 1.0f; }
    void Set(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

extern float D_002A90B8;
extern float D_002A90BC;
extern float D_002A90C0;

extern char D_00289604;

struct PortalInfo {
    virtual void func_vslot0();
    S_Vec4_001858A0 v[4];
    int f44;
    int f48;
    PortalInfo();
};

/* the stream/config reader passed to the load functions */
struct S_Stream {
    int func_00169710(char *name);
    void func_00168CB0(void *key, void *def, void *dst);
    int func_00168C20(void *key, int def, void *dst);
    int func_00168C50(void *key, u32 def, void *dst);
};

extern char D_00289654;
extern char D_00289664;
extern char D_00289674;
extern char D_00289684;
extern char D_00289694;
extern char D_002896A4;
extern char D_00283564;

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
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
    virtual int func_00185A40(S_Stream *stream);
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
extern char D_002764F0[];
char *func_001E8920(char *dst, const char *src, int n);

static __forceinline int clamp_len_00185BF0(int limit, int len)
{
    return len < limit ? len : limit;
}

struct C_00185BF0 {
    void *vtbl;
    int f4;
    void *f8;
    int fc;
    char f10[0x104];
    char f114[0x410];
    int f524, f528, f52c, f530, f534, f538, f53c, f540, f544;
    C_00185BF0 *func_00185BF0(void);
    int func_00185D60(struct S_Stream3 *stream, int count);
};
struct S_Stream3 {
    int func_00169710(void *name);
    int func_00168C20(void *key, int def, void *dst);
    int func_00168C50(void *key, u32 def, void *dst);
    int func_00168BE0(void *key, void *def, void *dst, int n);
};
extern char D_002897EC, D_002897D8, D_002897CC, D_002897BC, D_002897AC, D_00276F28;
extern char D_002A5870, D_002895A0, D_002897A0;
extern char D_00289790, D_00289780, D_0028976C, D_00289758, D_00289744, D_0028973C;
extern char D_00289734, D_0028972C, D_00289724, D_00289714, D_00289704, D_002896F4;
extern char D_002896E8, D_002896D0;
extern float D_00278784;
extern u32 D_00289388, D_0028938C;
extern "C" char *strchr(const char *s, int c);
extern "C" int memcmp(const void *a, const void *b, unsigned n);
extern "C" int strlen(const char *s);
extern "C" void *memset(void *d, int c, unsigned n);
extern "C" char *strcpy(char *d, const char *s);
extern int D_002897FC;
#pragma intrinsic(memcmp)
static __forceinline int Cmp5_00185D60(const char *a, const char *b)
{
    return memcmp(a, b, 5);
}

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

extern char D_00289924;
extern char D_0027C494;
extern char D_00289918;
extern char D_0028990C;
extern char D_00289900;
struct S_Stream2 {
    int func_00169710(void *name);
    void func_00168BE0(void *key, void *def, void *dst, int n);
    void func_00168C50(void *key, u32 def, void *dst);
};
struct V4_186720 {
    u32 a, b, c, d;
    void Set(u32 x, u32 y, u32 z, u32 w)
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }
};
extern "C" V4_186720 *func_00182980(void *a, void *b);
struct C_00186720 {
    char pad0[4];
    V4_186720 f4;
    u32 f14;
    u32 f18;
    int func_00186720(S_Stream2 *stream);
};

struct C_00186540 {
    void func_00186540(int param_1);
};

extern char D_002898F0;
extern char D_0027D280;
extern char D_002898D0;
extern char D_002898B0;
extern char D_002867E8;
extern "C" char func_001862E0[];
void *func_001E8A44(int size);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);

struct S_LightStream {
    int func_00169710(void *name);
    int func_00168C20(void *key, int def, void *dst);
    int func_00168BE0(void *key, void *def, void *dst, int n);
};

/* element called through its vtable slot 0 */
struct S_LightEntry {
    virtual void func_vslot0(S_LightStream *stream, int index);
    void *f4;
    void *f8;
};

struct C_00186580 {
    char pad0[0x24];
    int f24;
    int f28;
    S_LightEntry *f2c;
    V4_186720 *f30;
    int *f34;
    int func_00186580(S_LightStream *stream);
};


struct Vec16_186330 { u32 a, b, c, d; };
struct ObjA_186330 {
    virtual void func_vslot0();
    virtual void func_vslot1();
    virtual void func_vslot2();
    ObjA_186330 *func_0015CE00(int a);
    int func_0015E990(int type, Vec16_186330 v, int a, int b, int c, int d, int e, int f, void *g, int h);
    void func_0015D070(int a, int b);
    void func_0015DAA0(int a, int b);
    void func_0015CFE0(void *p);
    void func_0015D000(int a, int b, int c);
};
struct ObjB_186330 {
    ObjB_186330 *func_00160860(int a);
    void func_001608E0(int a, void *b, int c, void *d, int e);
    void func_00160810(int a, int b);
};
struct P_186330 {
    int f0; int type; Vec16_186330 v; int f18, f1c, f20, f24, f28; u8 flags; char p2d[3];
    int f30, f34; char p38[0x1c]; char f54[0x40]; float c0, c1, c2, c3; int fa4; char fa8[0x40]; int fe8, fec, ff0, ff4;
};
struct C_00186170;
struct Light_186330 {
    void *vtbl; ObjA_186330 *f4; P_186330 *f8;
    int func_00186330(int a, int b);
};
extern int D_002E2930;
void *func_001E8A44(int size);
int func_001E8858(float f);

PortalInfo::PortalInfo()
{
    for (int i = 0; i < 4; i++) {
        v[i] = *(S_Vec4_001858A0 *)&D_002A90B4;
    }
    f44 = 0;
    f48 = 0;
}

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

int S_ZoneInfoItem::func_00185A40(S_Stream *stream)
{
    int ok = 1;

    if (!stream->func_00168C50(&D_002896A4, 0, &f8)) {
        ok = 0;
    }
    if (!stream->func_00168C50(&D_00289694, 0x3f800000, &f4)) {
        ok = 0;
    }
    if (!stream->func_00168C50(&D_00289684, 0x3f800000, &fc)) {
        ok = 0;
    }
    if (!stream->func_00168C50(&D_00283564, 0x3f800000, &f10)) {
        ok = 0;
    }
    if (!stream->func_00168C50(&D_00289674, 0x3f800000, &f14)) {
        ok = 0;
    }
    if (!stream->func_00168C20(&D_00289664, 1, &f18)) {
        ok = 0;
    }
    if (!stream->func_00168C20(&D_00289654, 1, &f1c)) {
        ok = 0;
    }
    return ok;
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
            ((S_ZoneInfoItem *)&elems[f4 + i])->func_00185A40(stream);
            count++;
        }
    }
    f4 += count;
    return count != 0;
}

C_00185BF0 *C_00185BF0::func_00185BF0(void)
{
    vtbl = (void *)&D_002896CC;
    f4 = 0;
    f8 = 0;
    fc = 0;
    {
        int limit = 0x103;
        int count = AsmMinI(limit, 4);
        func_001E8920(f10, (const char *)&D_002764F0, count);
        f10[count] = 0;
    }
    {
        int limit = 0x103;
        int count = AsmMinI(limit, 4);
        func_001E8920(f114, (const char *)&D_002764F0, count);
        f114[count] = 0;
    }
    f524 = 0;
    f528 = 0;
    f52c = 0;
    f530 = 0;
    f534 = 0;
    f538 = 0;
    f53c = 0;
    f540 = 0;
    f544 = 0;
    return this;
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

char *func_001E8AC0(const char *s, int c);
int C_00185BF0::func_00185D60(S_Stream3 *stream, int count)
{
    char buf2[0x104];
    char buf[0x104];
    int i;
    float *fp = (float *)this;
#define F8 (*(void ***)&f8)
#define FC (*(int **)&fc)
    if (!stream->func_00169710(&D_002897EC))
        return 0;
    stream->func_00168C20(&D_002897D8, 1, &f4);
    if (f4 > 0) {
        F8 = (void **)func_001E8A44(f4 * 4);
        for (i = 0; i < f4; i++) {
            F8[i] = func_001E8A44(0x104);
            func_001ADCC0(buf, 0x104, &D_002867E8, &D_002897CC, i + 1);
            if (!stream->func_00168BE0(buf, &D_002764F0, F8[i], -1) && i == 0) {
                func_001ADCC0(buf, 0x104, &D_00276F28, &D_002897CC);
                stream->func_00168BE0(buf, &D_002764F0, F8[0], -1);
            }
        }
        if (count > 0) {
            FC = (int *)func_001E8A44(count * 4);
            for (i = 0; i < count; i++) {
                func_001ADCC0(buf2, 0x104, &D_002867E8, &D_002897BC, i + 1);
                stream->func_00168C20(buf2, 1, FC + i);
                FC[i]--;
            }
        }
    }
    if (f4 == 1 && F8 && !strcmp((const char *)F8[0], "none")) {
        func_001E891B(F8[0]);
        F8[0] = 0;
        f4 = 0;
    }
    char *name = (char *)this + 0x31c;
    stream->func_00168BE0(&D_002897AC, &D_002764F0, name, -1);
    if (strcmp(name, "none")) {
        char *dot = func_001E8AC0(name, '.');
        if (dot)
            memset(dot, 0, strlen(dot));
        strcpy(buf2, name);
        func_001ADCC0(name, 0x104, &D_002895A0, &D_002A5870, buf2);
    }
    stream->func_00168BE0(&D_002897A0, &D_002764F0, &f10, -1);
    stream->func_00168C50(&D_00289790, 0, &f524);
    stream->func_00168C50(&D_00289780, 0, &f528);
    stream->func_00168C50(&D_0028976C, 0, &f52c);
    stream->func_00168C50(&D_00289758, 0, &f530);
    stream->func_00168C50(&D_00289744, 0, &f534);
    if (!stream->func_00168C50(&D_0028973C, 0, &f538))
        fp[0x538 / 4] = -fp[0x534 / 4];
    if (!stream->func_00168C50(&D_00289734, 0, &f53c))
        fp[0x53c / 4] = *(float volatile *)((char *)this + 0x52c) * fp[0x524 / 4] * D_00278784 + fp[0x534 / 4];
    if (!stream->func_00168C50(&D_0028972C, 0, &f540))
        fp[0x540 / 4] = -fp[0x534 / 4];
    if (!stream->func_00168C50(&D_00289724, 0, &f544))
        fp[0x544 / 4] = *(float volatile *)((char *)this + 0x530) * fp[0x528 / 4] * D_00278784 + fp[0x534 / 4];
    if (!stream->func_00168C50(&D_00289714, 0, (char *)this + 0x548))
        *(u32 *)((char *)this + 0x548) = 0x42c00000;
    stream->func_00168C50(&D_00289704, D_00289388, (char *)this + 0x54c);
    stream->func_00168C50(&D_002896F4, D_0028938C, (char *)this + 0x550);
    stream->func_00168BE0(&D_002896E8, &D_002764F0, f114, -1);
    stream->func_00168BE0(&D_002896D0, &D_002764F0, (char *)this + 0x420, -1);
    return 1;
}

C_00186170 *C_00186170::func_00186170(void)
{
    vtbl = &D_002897FC;
    f4 = 4;
    memset(&f8, 0, 16);
    f18 = 0;
    f1c = 0;
    f20 = 0;
    f28 = 0;
    f24 = 0;
    f2c = (f2c & 0x84) | 4;
    fe8 = 1;
    memset(&f38, 0, 5);
    memset(&f40, 0, 16);
    f50 = 0x3f800000;
    memset(&f94, 0, 16);
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

int Light_186330::func_00186330(int a, int b)
{
    u8 fl = f8->flags;
    if ((fl & 4) || (fl & 0x10)) {
        ObjA_186330 *o = (ObjA_186330 *)func_001E8A44(0xd0);
        o = o ? o->func_0015CE00(1) : 0;
        f4 = o;
        P_186330 *p = f8;
        u8 g = p->flags;
        if (!f4->func_0015E990(p->type, p->v, p->f18, p->f1c, p->f20, p->f28, (g >> 6) & 1, 0, (g & 8) ? p->f54 : 0, a)) {
            f4->func_vslot2();
            P_186330 *q = f8;
            f4 = 0;
            if (q) { ((C_00186170 *)q)->func_00186210(); func_001E891B(q); }
            f8 = 0;
            return 0;
        }
        if (f8->type == 3) f4->func_0015D070(f8->f30, f8->f34);
    }
    ((ObjA_186330 *)D_002E2930)->func_0015DAA0((int)f4, f8->f24);
    P_186330 *r = f8;
    if (r->flags & 0x10) {
        int c = (int)r->c0 & 0xff;
        c |= (int)r->c3 << 8;
        c = (c << 8) | ((int)r->c1 & 0xff);
        c = (c << 8) | ((int)r->c2 & 0xff);
        a = c;
        ObjB_186330 *ob = (ObjB_186330 *)func_001E8A44(0x88);
        ob = ob ? ob->func_00160860(1) : 0;
        ob->func_001608E0(f8->f18, &a, f8->fa4, f8->fa8, f8->fe8);
        ob->func_00160810(((int *)*(int *)(b + 0x4a8))[f8->f24], 1);
        f4->func_0015CFE0(ob);
    }
    if (f8->flags & 0x20) f4->func_0015D000(f8->fec, f8->ff0, f8->ff4);
    P_186330 *d = f8;
    if (d) { ((C_00186170 *)d)->func_00186210(); func_001E891B(d); }
    f8 = 0;
    return 1;
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

int C_00186580::func_00186580(S_LightStream *stream)
{
    char buf2[0x40];
    char buf[0x40];
    char tmp[0x10];
    int i;
    int n;

    if (!stream->func_00169710(&D_002898F0)) {
        return 0;
    }
    stream->func_00168C20(&D_0027D280, 0, &f24);
    n = f24;
    int *raw = (int *)func_001E8A44(n * 12 + 4);
    S_LightEntry *arr;
    if (raw) {
        arr = (S_LightEntry *)(raw + 1);
        *raw = n;
        func_00011FF0(arr, 12, n, func_001862E0);
    } else {
        arr = 0;
    }
    f2c = arr;
    for (i = 0; i < f28; i++) {
        func_001ADCC0(buf, 0x40, &D_002867E8, &D_002898D0, i + 1);
        if (stream->func_00168BE0(buf, &D_0027C494, buf2, -1)) {
            V4_186720 t = *func_00182980(tmp, buf2);
            f30[i] = t;
        } else {
            f30[i].a = 0xc3800000;
        }
        func_001ADCC0(buf, 0x40, &D_002867E8, &D_002898B0, i + 1);
        stream->func_00168C20(buf, 1, &f34[i]);
    }
    for (i = 0; i < f24; i++) {
        f2c[i].func_vslot0(stream, i);
    }
    return 1;
}

int C_00186720::func_00186720(S_Stream2 *stream)
{
    char buf[0x104];
    char tmp[0x10];

    if (!stream->func_00169710(&D_00289924)) {
        return 0;
    }
    stream->func_00168BE0(&D_00289918, &D_0027C494, buf, -1);
    V4_186720 t = *func_00182980(tmp, buf);
    f4 = t;
    stream->func_00168C50(&D_0028990C, 0x3f800000, &f14);
    stream->func_00168C50(&D_00289900, 0x3f000000, &f18);
    return 1;
}

