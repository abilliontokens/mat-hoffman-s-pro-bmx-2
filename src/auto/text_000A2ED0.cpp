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
    int func_00168C20(const char *key, int v, void *dst);
    int func_00168BE0(const char *k1, const char *k2, char *dst, int size);
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
