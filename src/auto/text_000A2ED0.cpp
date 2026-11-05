/* 10 functions from 0x000A2ED0 to 0x000A3DE0, found by Ghidra. */
#include "common.h"
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

struct C_000B2D50 {
    void func_000B2D50(int a);
};
extern C_000B2D50 *D_002B9134;

struct C_00022B70 {
    void func_00022B70(void);
};
extern C_00022B70 *D_002B7E18;

struct C_00012420 {
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

struct C_000A2ED0 {
    char pad0[0x4c0];
    void *unk4C0;
    char pad4C4[0x568 - 0x4c4];
    int unk568;
    int *unk56C;
    char pad570[8];
    int unk578;
    C_00012420 **unk57C;
    char pad580[0x594 - 0x580];
    char *unk594;
    char pad598[0x5bc - 0x598];
    int unk5BC;
    void func_000A2ED0(void);
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

