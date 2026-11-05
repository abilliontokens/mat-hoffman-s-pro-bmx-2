/* 10 functions from 0x000A2ED0 to 0x000A3DE0, found by Ghidra. */
#include "common.h"
#include <string.h>
#include "ghidra.h"
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

