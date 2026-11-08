/* 9 functions from 0x000AEF10 to 0x000AF900, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"

void func_001E891B(void *p);
void *func_001E8A44(int size);

extern char D_0027CC5C[5];
extern char D_0027CC54[5];
extern int D_0027C604;
extern int D_0027C1EC;
extern int D_0027C51C;
extern int D_0027CABC;

struct C_00157600 {
    void func_00157600(int param_1);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_000A0A10_Elem {
    char pad0[0x28];
    void func_000A0A10(void);
};

struct C_000AEF10 {
    void *vtbl;
    char pad4[0x24];
    C_000A0A10_Elem *unk28;
    void func_000AEF10(void);
    void func_00157660(void);
};

struct C_000ACE60_Obj {
    C_000ACE60_Obj *func_000ACE60(int param);
    void func_000ACF30(void *scene, int a, int b, int c);
};

struct C_000AF080 {
    char pad0[0x4e0];
    C_000ACE60_Obj *f4e0;
    int func_000AF080(int a, int b, int c);
};

struct C_000AF7D0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27(int a, void **b, int c, void *d);
    void func_00157600(int param_1);
    char pad4[0x20];
    int unk24;
    int unk28;
};

struct C_000AF7D0 {
    char pad0[0x28];
    int f28;
    char pad2c[0x530 - 0x2c];
    int f530;
    C_000AF7D0_Obj *f534;
    void func_000AF7D0(void);
};

struct C_000AF840_Obj {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
    void func_00157600(int param_1);
    void func_000AE780(int a);
};

struct C_000AF840 {
    char pad0[0x28];
    int f28;
    char pad2c[0x53c - 0x2c];
    C_000AF840_Obj *f53c;
    void func_000AF840(void);
};

struct C_000AEF60 {
    undefined4 func_000AEF60(byte param_1);
};

struct C_000AEF80 {
    undefined4 func_000AEF80(byte param_1);
};

extern int D_0027C594;

struct C_0027C594 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
};

struct C_000AEC90 {
    void func_000AEC90(void *param_1);
};

struct C_000AF8A0 {
    char pad0[0x28];
    void *unk28;
    char pad2C[0x548 - 0x2c];
    C_0027C594 *unk548;
    void func_000AF8A0(void);
};

extern int D_0027CA70;

#include <string.h>
#include "asm_helpers.h"

struct Vec4_000AF0D0 {
    float x, y, z, w;
    Vec4_000AF0D0() { x = y = z = 0; w = 1; }
    Vec4_000AF0D0(float ax, float ay, float az, float aw) { x = ax; y = ay; z = az; w = aw; }
};

/* config file reader, 0x4CC bytes */
struct S_000AF0D0_Stream {
    char pad0[0x4CC];
    S_000AF0D0_Stream *func_00168280(void);
    int func_00169490(const char *path, int flags);
    void func_001691E0(void);
    void func_00169710(const char *name);
    void func_00168A10(const char *key, int *dst);
    void func_00168550(const char *key, char *dst, int n);
    void func_00168BE0(const char *key, const char *def, char *dst, int n);
    void func_00168CB0(const char *key, const Vec4_000AF0D0 &def, Vec4_000AF0D0 &dst);
};

/* grind line manager */
struct S_000AF0D0_Mgr {
    S_000AF0D0_Mgr *func_00159560(int a);
    void func_001595A0(int n, void *owner);
    void *func_00159E90(char *name, Vec4_000AF0D0 *p0, Vec4_000AF0D0 *p1, char *s2, char *s3, int n);
    void func_unk(void *entry, void *node, void (*cb)(void));
};

struct S_000AF0D0_Node {
    char pad0[0x128];
    char f128[6][0x78];
};

struct S_000AF0D0_List {
    char pad0[0x24];
    int f24;
    S_000AF0D0_Node **f28;
};

struct C_000AF0D0 {
    char pad0[0x134];
    char f134[0x530 - 0x134];
    S_000AF0D0_Mgr *f530;
    S_000AF0D0_List *f534;
    int func_000AF0D0(void);
};

extern char D_002A5870[];
extern char D_00276DCC[], D_00276DBC[], D_00276DB0[], D_00276DA4[], D_00276D98[], D_00276D8C[];
extern char D_00275630[];
int func_001ADCC0(char *dst, int size, const char *fmt, ...);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
void func_000AE280(void);

template <class T>
inline T AF0D0_Min(const T &a, const T &b)
{
    return a > b ? b : a;
}

static __forceinline void AF0D0_Copy(char *dst, const char *src, int max)
{
    volatile int len = strlen(src);
    volatile int lim = max;
    volatile int res = AF0D0_Min((int)lim, (int)len);
    int n = res;
    func_001E8920(dst, src, n);
    dst[n] = 0;
}

/* one 0x160-byte record of the table at BmxScene+0x344 */
struct S_000AEFA0_Elem {
    char pad0[0x160];
};

/* CollisionObjects: made by func_00188A80, loaded through vtable slot 27 */
struct C_000AEFA0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual int v27(int a, S_000AEFA0_Elem *b, void **c);
    C_000AEFA0_Obj *func_00188A80(int a);
};

/* BmxScene */
struct C_000AEFA0 {
    char pad0[0x28];
    int f28;
    char pad2C[0x340 - 0x2C];
    int f340;
    S_000AEFA0_Elem *f344;
    char pad348[0x3B0 - 0x348];
    C_000AEFA0_Obj **f3B0;
    void func_000AEFA0(void);
};


void C_000AEF10::func_000AEF10(void) {
    C_000A0A10_Elem *p = unk28;
    vtbl = &D_0027C604;
    if (p != 0) {
        int *base = (int *)p - 1;
        int i = *base;
        C_000A0A10_Elem *e = p + i;
        while (--i >= 0) {
            e--;
            e->func_000A0A10();
        }
        func_001E891B(base);
    }
    func_00157660();
}

undefined4 C_000AEF60::func_000AEF60(byte param_1)
{
  int func_000AB490(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AB490();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000AEF80::func_000AEF80(byte param_1)
{
  int func_000AC410(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AC410();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_000AEFA0::func_000AEFA0(void)
{
    void *local = &D_0027CA70;
    int ok = 0;
    int i;
    C_000AEFA0_Obj *p;

    f3B0 = (C_000AEFA0_Obj **)func_001E8A44(f340 * 4);
    for (i = 0; i < f340; i++) {
        p = (C_000AEFA0_Obj *)func_001E8A44(0x2c);
        if (p != 0) {
            p = p->func_00188A80(1);
        } else {
            p = 0;
        }
        f3B0[i] = p;
        if (f3B0[i]->v27(f28, &f344[i], &local) == 0) {
            f3B0[i]->v2();
            f3B0[i] = 0;
        } else {
            ok++;
        }
    }
    if (ok == 0) {
        func_001E891B(f3B0);
        f3B0 = 0;
    }
}

int C_000AF080::func_000AF080(int a, int b, int c) {
    C_000ACE60_Obj *p = (C_000ACE60_Obj *)func_001E8A44(0x1e8);
    if (p != 0) {
        p = p->func_000ACE60(0);
    } else {
        p = 0;
    }
    f4e0 = p;
    p->func_000ACF30(this, a, b, c);
    return 1;
}

int C_000AF0D0::func_000AF0D0(void)
{
    S_000AF0D0_Stream *stream;
    void *mem;
    char buf[0x104];
    char parentNodeName[0x28];
    char parentName[0x28];
    char name[0x20];
    char key2[0x20];
    char key1[0x20];
    char secName[0x14];
    int count;
    int subCount;
    int total;
    int i, j;
    int len, limit, cnt, n;

    if (f530 != 0) {
        return 0;
    }
    len = strlen(D_002A5870);
    limit = 0x103;
    cnt = AsmMinI(limit, len);
    n = cnt;
    func_001E8920(buf, D_002A5870, n);
    buf[n] = 0;
    strcat(buf, f134);
    strcat(buf, ".sgr");
    mem = func_001E8A44(0x4CC);
    stream = mem != 0 ? ((S_000AF0D0_Stream *)mem)->func_00168280() : 0;
    if (stream->func_00169490(buf, 0) == 0) {
        if (stream) {
            stream->func_001691E0();
            func_001E891B(stream);
        }
        return 0;
    }
    count = 0;
    subCount = 0;
    total = 0;
    stream->func_00169710(D_00276DCC);
    stream->func_00168A10(D_00276DBC, &count);
    for (i = 0; i < count; i++) {
        func_001ADCC0(secName, 0x14, D_00276DB0, i + 1);
        stream->func_00169710(secName);
        stream->func_00168A10(D_00276DA4, &subCount);
        total += subCount - 1;
    }
    mem = func_001E8A44(0x80);
    f530 = mem != 0 ? ((S_000AF0D0_Mgr *)mem)->func_00159560(1) : 0;
    f530->func_001595A0(total, this);
    {
        Vec4_000AF0D0 pos0;
        Vec4_000AF0D0 pos1;
        for (i = 0; i < count; i++) {
            func_001ADCC0(secName, 0x14, D_00276DB0, i + 1);
            stream->func_00169710(secName);
            stream->func_00168550(D_00276D98, name, -1);
            stream->func_00168A10(D_00276DA4, &subCount);
            for (j = 0; j < subCount - 1; j++) {
                func_001ADCC0(key1, 0x1e, D_00276D8C, j + 1);
                func_001ADCC0(key2, 0x1e, D_00276D8C, j + 2);
                stream->func_00168CB0(key1, Vec4_000AF0D0(0, 0, 0, 1), pos0);
                stream->func_00168CB0(key2, Vec4_000AF0D0(0, 0, 0, 1), pos1);
                f530->func_00159E90(name, &pos0, &pos1, 0, 0, 0);
            }
        }
        if (stream) {
            stream->func_001691E0();
            func_001E891B(stream);
        }

        len = strlen(D_002A5870);
        limit = 0x103;
        cnt = AsmMinI(limit, len);
        n = cnt;
        func_001E8920(buf, D_002A5870, n);
        buf[n] = 0;
        strcat(buf, f134);
        strcat(buf, ".dgr");
        mem = func_001E8A44(0x4CC);
        stream = mem != 0 ? ((S_000AF0D0_Stream *)mem)->func_00168280() : 0;
        if (stream->func_00169490(buf, 0) == 0) {
            if (stream) {
                stream->func_001691E0();
                func_001E891B(stream);
            }
            stream = 0;
        } else if (stream) {
            count = 0;
            subCount = 0;
            stream->func_00169710(D_00276DCC);
            stream->func_00168A10(D_00276DBC, &count);
            for (i = 0; i < count; i++) {
                func_001ADCC0(secName, 0x14, D_00276DB0, i + 1);
                stream->func_00169710(secName);
                stream->func_00168A10(D_00276DA4, &subCount);
            }
            for (i = 0; i < count; i++) {
                func_001ADCC0(secName, 0x14, D_00276DB0, i + 1);
                stream->func_00169710(secName);
                stream->func_00168550(D_00276D98, name, -1);
                stream->func_00168A10(D_00276DA4, &subCount);
                stream->func_00168BE0("ParentName", D_00275630, parentName, -1);
                stream->func_00168BE0("ParentNodeName", D_00275630, parentNodeName, -1);
                for (j = 0; j < subCount - 1; j++) {
                    func_001ADCC0(key1, 0x1e, D_00276D8C, j + 1);
                    func_001ADCC0(key2, 0x1e, D_00276D8C, j + 2);
                    stream->func_00168CB0(key1, Vec4_000AF0D0(0, 0, 0, 1), pos0);
                    stream->func_00168CB0(key2, Vec4_000AF0D0(0, 0, 0, 1), pos1);
                    f530->func_00159E90(name, &pos0, &pos1, parentName, parentNodeName, 0);
                }
            }
        }
    }
    for (i = 0; i < f534->f24; i++) {
        S_000AF0D0_Node *node;
        for (j = 0; j < 6; j++) {
            node = f534->f28[i];
            if (node->f128[j][0] != 0) {
                f530->func_unk(node->f128[j], node, func_000AE280);
            }
        }
    }
    if (stream) {
        stream->func_001691E0();
        func_001E891B(stream);
    }
    return 1;
}

void C_000AF7D0::func_000AF7D0(void) {
    void *local;
    C_000AF7D0_Obj *p;

    if (f534 == 0) {
        p = (C_000AF7D0_Obj *)func_001E8A44(0x2c);
        if (p != 0) {
            p->func_00157600(1);
            *(void **)p = &D_0027C1EC;
            p->unk24 = 0;
            p->unk28 = 0;
        } else {
            p = 0;
        }
        f534 = p;
    }
    local = (void *)&D_0027CABC;
    f534->v27(f28, &local, f530, this);
}

void C_000AF840::func_000AF840(void) {
    C_000AF840_Obj *p;

    if (f53c == 0) {
        p = (C_000AF840_Obj *)func_001E8A44(0x2c);
        if (p != 0) {
            p->func_00157600(1);
            p->vtbl = &D_0027C51C;
            p->unk24 = 0;
            p->unk28 = 0;
        } else {
            p = 0;
        }
        f53c = p;
    }
    f53c->func_000AE780(f28);
}

void C_000AF8A0::func_000AF8A0(void) {
    C_0027C594 *p;
    if (unk548 == 0) {
        p = (C_0027C594 *)func_001E8A44(0x2c);
        if (p != 0) {
            ((C_00157600 *)p)->func_00157600(1);
            p->vtbl = &D_0027C594;
            p->unk24 = 0;
            p->unk28 = 0;
        } else {
            p = 0;
        }
        unk548 = p;
    }
    ((C_000AEC90 *)unk548)->func_000AEC90(unk28);
}

