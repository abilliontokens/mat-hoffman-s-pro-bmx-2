/* 10 functions from 0x000A2ED0 to 0x000A3DE0, found by Ghidra. */
#include "common.h"
#include <string.h>
#include "ghidra.h"
#include "asm_helpers.h"
extern "C" int func_00135C70(int a, int b, unsigned int c, int d);
struct C_000A33F0 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0a(); virtual void v0b();
    virtual void v0c(); virtual void v0d(); virtual void v0e(); virtual void v0f();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1a(); virtual void v1b();
    virtual void v1c(); virtual void v1d(); virtual void v1e(); virtual void v1f();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25();
    virtual int v26(char *p);
    virtual void v27(); virtual void v28(); virtual void v29(); virtual void v2a();
    virtual void v2b(); virtual void v2c();
    virtual void v2d(); virtual void v2e(); virtual void v2f(); virtual void v30();
    virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
    char pad4[0x130];
    char f134[1];
    void func_00157BF0(unsigned int a, int b);
    void func_000A33F0(unsigned int a, int b);
};
struct C_000A3B60 {
    void func_000A3B60(int param_1);
};

extern char D_0027AEE4[];
extern char D_0027B190[];
extern char D_0027B17C[];
extern char D_00275630[];
extern char D_0027B168[];

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
char *func_001E8920(char *dst, const char *src, int n);
int func_001EA426(const char *a, const char *b);

template <class T> inline const T &min_ref(const T &a, const T &b)
{
    return b < a ? b : a;
}

inline void str_copy(char *dst, const char *src, int size)
{
    int n = min_ref((int)strlen(src), size - 1);
    func_001E8920(dst, src, n);
    dst[n] = 0;
}
void *func_001E83E8(void *block, unsigned int size);
struct V4_000A3780 { float x, y, z, w; V4_000A3780() { x = y = z = 0; w = 1; } V4_000A3780(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; } };
struct S_000A3780_Stream {
    char pad0[0x4CC];
    S_000A3780_Stream *func_00168280(void);
    int func_00169490(const char *path, int flags);
    void func_001691E0(void);
    void func_00169710(const char *name);
    void func_00168A10(const char *key, int *dst);
    void func_00168550(const char *key, char *dst, int n);
    void func_00168CB0(const char *key, V4_000A3780 *def, V4_000A3780 *dst);
    void func_00168CB0(const char *key, const V4_000A3780 &def, V4_000A3780 &dst);
};
struct S_000A3780_Mgr {
    void *func_00159E90(char *name, V4_000A3780 *p0, V4_000A3780 *p1, char *s2, char *s3, int n);
    void func_00159C40(void *line);
};
struct S_000A3780_Out { char pad0[0x14]; int f14; void **f18; };
struct C_000A3780 {
    char pad0[0x530];
    S_000A3780_Mgr *f530;
    int func_000A3780(int a1, const char *path, S_000A3780_Out *out);
};
extern char D_00276DCC[], D_00276DBC[], D_00276DB0[], D_00276DA4[], D_00276D98[], D_00276D8C[];
extern "C" char *func_001E8AC0(const char *s, int c);
void func_001E891B(void *ptr);
void *func_001E8A44(int size);

struct C_00094A10 {
    int func_00094A10(char *a, void *b);
};

struct S_2E0 {
    char pad0[0x2fc];
    C_00094A10 *unk2FC;
};

struct S_8490 {
    char pad0[0x2e0];
    S_2E0 *unk2E0;
};
extern S_8490 *D_002A8490;

struct S_000A3170_Val8 {
    char pad0[0x8];
    int unk8;
};
struct S_000A3170_Ent44 {
    char pad0[0x38];
    int unk38;
    char pad3C[0x4];
    S_000A3170_Val8 *unk40;
};
struct S_000A3170_Val22C {
    char pad0[0x22c];
    int unk22C;
};
struct S_000A3170_Ent48 {
    char pad0[0x3c];
    S_000A3170_Val22C *unk3C;
    char pad40[0x1a3 - 0x40];
    char name[1];
};
struct C_000B2D50 {
    char pad0[0x34];
    int unk34;
    int unk38;
    char pad3C[0x44 - 0x3c];
    S_000A3170_Ent44 **unk44;
    S_000A3170_Ent48 **unk48;
    void func_000B2D50(int a);
};
struct S_000A3170_Rec60 {
    int unk0;
    char name[0x5c];
};
struct S_000A3170_EFE08 {
    char pad0[0x158];
    S_000A3170_Rec60 *unk158;
};
extern S_000A3170_EFE08 *D_002EFE08;
struct S_000A3170_Obj {
    char pad0[0xd4];
    char name[0x2dc - 0xd4];
    int unk2DC;
};
extern C_000B2D50 *D_002B9134;

struct C_00022B70 {
    void func_00022B70(void);
};
extern C_00022B70 *D_002B7E18;

struct S_000A3170_Val4 {
    int unk0;
    int unk4;
};
struct C_00012420 {
    char pad0[0x3c];
    S_000A3170_Val4 *unk3C;
    char pad40[0x42c - 0x40];
    char name[1];
    void func_00012420(void);
};

struct C_00169710 {
    int func_00169710(const char *name);
    int func_00168A10(const char *key, int *dst);
    int func_00168550(const char *key, char *dst, int size);
    int func_00168C20(const char *key, int v, void *dst);
    int func_00168BE0(const char *k1, const char *k2, char *dst, int size);
};

struct C_001B9D60 {
    int func_001B9D60(int a);
};

char *func_001E8AF0(char *str, const char *sub);
char *func_001EA1EE(char *str);

extern char D_00276688[];
extern char D_0027ADEC[];
extern char D_0027ADE4[];
extern char D_0027ADDC[];
extern char D_0027ADD4[];
extern char D_0027B1B0[];
extern int D_002B9118;
extern int D_002B9108;
extern int D_002B910C;
extern int D_002B911C;
extern int D_002B9114;
extern int D_002B9110;
extern int D_002BA160;

struct S_000A3C90_item {
    char pad0[0x68];
    int unk68;
    char pad6C[0x1c0 - 0x6c];
    char *unk1C0;
};

struct S_000A3C90_list {
    char pad0[0x280];
    S_000A3C90_item **unk280;
    int unk284;
};

struct C_000A3C90 : C_001B9D60 {
    char pad0[0x1a4];
    S_000A3C90_list *unk1A4;
    int func_000A3C90(int a);
};

struct C_001BC640 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_001BC640 *func_001BC640(void *param);
};
struct C_001BC670 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    void func_001D3F50();
    void func_001BC670(void *a1, void *a2);
};
struct S_000A2F20_Item {
    int unk0;
    void *unk4;
    char pad8[0x10];
    char name[1];
};
struct S_000A2F20_List {
    char pad0[0x24];
    int count;
    S_000A2F20_Item **items;
};
extern char D_0027B154[], D_0027B144[], D_0027B13C[], D_0027B12C[], D_0027B11C[];
struct C_000A2ED0 {
    char pad0[0x28];
    C_00169710 *unk28;
    char pad2C[0x3b4 - 0x2c];
    S_000A2F20_List *unk3B4;
    char pad3B8[0x4c0 - 0x3b8];
    void *unk4C0;
    char pad4C4[0x568 - 0x4c4];
    int unk568;
    int *unk56C;
    int unk570;
    C_001BC670 **unk574;
    void func_000A2F20();
    int unk578;
    C_00012420 **unk57C;
    char pad580[0x594 - 0x580];
    char *unk594;
    char pad598[0x5bc - 0x598];
    int unk5BC;
    void func_000A2ED0(void);
    void func_000A3170(void);
    void func_000A3B00(int a);
    int func_000A3BA0(C_00169710 *cfg);
    int func_000A3C50(void);
};


void C_000A2ED0::func_000A2ED0(void)
{
    int i;
    if (D_002B9134 != 0) {
        D_002B9134->func_000B2D50(1);
    }
    for (i = 0; i < unk578; i++) {
        unk57C[i]->func_00012420();
    }
    if (D_002B7E18 != 0) {
        D_002B7E18->func_00022B70();
    }
}

void C_000A2ED0::func_000A2F20()
{
    if (unk28->func_00169710(D_0027B154)) {
        int count;
        unk28->func_00168A10(D_0027B144, &count);
        if (count > 0) {
            int start, end;
            if (!unk574) {
                start = 0;
                end = unk570 = count;
                unk574 = (C_001BC670 **)func_001E8A44(count * 4);
            } else {
                start = unk570;
                end = unk570 = count + start;
                unk574 = (C_001BC670 **)func_001E83E8(unk574, end * 4);
            }
            for (int i = start; i < end; i++) {
                char section[120];
                func_001ADCC0(section, 120, D_0027B13C, i + 1);
                C_001BC640 *obj = (C_001BC640 *)func_001E8A44(0x2c);
                if (obj) obj = obj->func_001BC640((void *)1);
                else obj = 0;
                unk574[i] = (C_001BC670 *)obj;
                if (unk28->func_00169710(section)) {
                    char first[120], second[120];
                    unk28->func_00168550(D_0027B12C, first, 120);
                    unk28->func_00168550(D_0027B11C, second, 120);
                    int searching = 1;
                    int n = unk3B4->count;
                    void *a = 0, *b = 0;
                    for (int j = 0; j < n && searching; j++) {
                        char *name = unk3B4->items[j]->name;
                        if (strcmp(name, "") != 0) {
                            if (func_001E8AF0(name, first)) a = unk3B4->items[j]->unk4;
                            else if (func_001E8AF0(name, second)) b = unk3B4->items[j]->unk4;
                            if (a && b) searching = 0;
                        }
                    }
                    if (a && b) unk574[i]->func_001BC670(a, b);
                }
            }
        }
    }
}

void C_000A2ED0::func_000A3170(void)
{
    int i;
    if (!unk3B4) {
        return;
    }
    for (i = 0; i < unk3B4->count; i++) {
        if (((S_000A3170_Obj *)unk3B4->items[i]->unk4)->name[0] != 0 &&
            ((S_000A3170_Obj *)unk3B4->items[i]->unk4)->unk2DC == 0) {
            char name[0x104];
            char buf[0x104];
            int lim; int n;
            unsigned long len;
            unsigned long index;
            int found;
            int j;
            strcpy(name, ((S_000A3170_Obj *)unk3B4->items[i]->unk4)->name);
            found = 0;
            if (D_002B9134 != 0) {
                for (j = 0; j < D_002B9134->unk38 && !found; j++) {
                    len = strlen(D_002B9134->unk48[j]->name);
                    lim = 0x103;
                    n = AsmMinI(lim, len);
                    func_001E8920(buf, D_002B9134->unk48[j]->name, n);
                    buf[n] = 0;
                    if (func_001EA426(buf, name) == 0) {
                        ((S_000A3170_Obj *)unk3B4->items[i]->unk4)->unk2DC = D_002B9134->unk48[j]->unk3C->unk22C;
                        found = 1;
                    }
                }
                for (j = 0; j < D_002B9134->unk34 && !found; j++) {
                    index = D_002B9134->unk44[j]->unk38;
                    if (func_001EA426(D_002EFE08->unk158[index].name, name) == 0) {
                        ((S_000A3170_Obj *)unk3B4->items[i]->unk4)->unk2DC = D_002B9134->unk44[j]->unk40->unk8;
                        found = 1;
                    }
                }
            }
            for (j = 0; j < unk578 && !found; j++) {
                if (func_001EA426(unk57C[j]->name, name) == 0) {
                    ((S_000A3170_Obj *)unk3B4->items[i]->unk4)->unk2DC = unk57C[j]->unk3C->unk4;
                    found = 1;
                }
            }
        }
    }
}

void C_000A33F0::func_000A33F0(unsigned int a, int b)
{
    if (func_00135C70(0x14, 0, a, 0xc)) {
        if (v26(f134)) {
            v2b();
            v38();
            func_00157BF0(a, b);
        }
    }
}

int C_000A3780::func_000A3780(int a1, const char *volatile path, S_000A3780_Out *out)
{
    V4_000A3780 pos0;
    V4_000A3780 pos1;
    char buf[0x104];
    char secName[0x14];
    char key1[0x1e];
    char name[0x1e];
    char key2[0x20];
    int count;
    int subCount;
    int total = 0;
    int idx = 0;
    int i, j;
    int len;
    int lim;
    int n;
    char *dot;
    S_000A3780_Stream *stream;

    stream = (S_000A3780_Stream *)func_001E8A44(0x4CC);
    if (stream)
        stream = stream->func_00168280();
    else
        stream = 0;
    if (stream->func_00169490(path, 0) == 0) {
        if (stream) {
            stream->func_001691E0();
            func_001E891B(stream);
        }
        return 0;
    }
    len = strlen(path);
    lim = 0x103;
    n = AsmMinI(lim, len);
    func_001E8920(buf, path, n);
    buf[n] = 0;
    dot = func_001E8AC0(buf, '.');
    if (dot) memset(dot, 0, strlen(dot));
    stream->func_00169710(D_00276DCC);
    stream->func_00168A10(D_00276DBC, &count);
    for (i = 0; i < count; i++) {
        func_001ADCC0(secName, 0x14, D_00276DB0, i + 1);
        stream->func_00169710(secName);
        stream->func_00168A10(D_00276DA4, &subCount);
        total = total + (subCount - 1);
    }
    if (out) {
        out->f14 = total;
        out->f18 = (void **)func_001E8A44(total * 4);
    }
    for (i = 0; i < count; i++) {
        func_001ADCC0(secName, 0x14, D_00276DB0, i + 1);
        stream->func_00169710(secName);
        stream->func_00168550(D_00276D98, name, -1);
        stream->func_00168A10(D_00276DA4, &subCount);
        for (j = 0; j < subCount - 1; j++) {
            void *line;
            func_001ADCC0(key1, 0x1e, D_00276D8C, j + 1);
            func_001ADCC0(key2, 0x1e, D_00276D8C, j + 2);
            stream->func_00168CB0(key1, V4_000A3780(0.0f, 0.0f, 0.0f, 1.0f), pos0);
            stream->func_00168CB0(key2, V4_000A3780(0.0f, 0.0f, 0.0f, 1.0f), pos1);
            line = f530->func_00159E90(name, &pos0, &pos1, 0, 0, a1);
            f530->func_00159C40(line);
            if (out) out->f18[idx] = line;
            idx = idx + 1;
        }
    }
    if (stream) {
        stream->func_001691E0();
        func_001E891B(stream);
    }
    return 1;
}

void C_000A2ED0::func_000A3B00(int a)
{
    if (unk568 >= unk5BC) {
        unk56C = (int *)func_001E83E8(unk56C, unk5BC * 4 + 0x28);
        unk5BC += 10;
    }
    unk56C[unk568] = a;
    unk568++;
}

void C_000A3B60::func_000A3B60(int param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x568)) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x56c) + iVar1 * 4) == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0x56c) + iVar1 * 4) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x568));
  }
  return;
}

int C_000A2ED0::func_000A3BA0(C_00169710 *cfg)
{
    char buf[0x104];
    int count;
    cfg->func_00169710(D_0027AEE4);
    cfg->func_00168C20(D_0027B190, 0, &count);
    if (count == 0) {
        return 0;
    }
    unk594 = (char *)func_001E8A44(0x104);
    func_001ADCC0(buf, 0x104, D_0027B17C);
    cfg->func_00169710(buf);
    cfg->func_00168BE0(D_0027B168, D_00275630, unk594, -1);
    return 1;
}

int C_000A2ED0::func_000A3C50(void)
{
    if (unk594 == 0) {
        return 0;
    }
    return D_002A8490->unk2E0->unk2FC->func_00094A10(unk594, unk4C0) != 0;
}

int C_000A3C90::func_000A3C90(int a)
{
    char buf[0x104];
    int ret = func_001B9D60(a);
    int i;
    for (i = 0; i < unk1A4->unk284; i++) {
        char *src = unk1A4->unk280[i]->unk1C0 + 0x28;
        char *dst = buf;
        char c;
        int v;
        do {
            c = *src++;
            *dst++ = c;
        } while (c != 0);
        func_001EA1EE(buf);
        if (func_001E8AF0(buf, D_00276688)) {
            v = D_002B9118;
        } else if (func_001E8AF0(buf, D_0027ADEC)) {
            v = D_002B9108;
        } else if (func_001E8AF0(buf, D_0027ADE4)) {
            v = D_002B910C;
        } else if (func_001E8AF0(buf, D_0027ADDC)) {
            v = D_002B911C;
        } else if (func_001E8AF0(buf, D_0027ADD4)) {
            v = D_002B9114;
        } else if (func_001E8AF0(buf, D_0027B1B0) == buf) {
            v = D_002B9110;
        } else {
            v = D_002BA160;
        }
        unk1A4->unk280[i]->unk68 = v;
    }
    return ret;
}

