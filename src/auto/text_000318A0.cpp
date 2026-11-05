/* 30 functions from 0x000318A0 to 0x00032860, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00032720 {
    void func_00032720(void);
};

struct C_001041A0 {
    void func_001041A0(void);
};

struct C_00032550 {
    char pad0[0x1c4];
    C_001041A0 *unk1C4;
    void func_00032550(void);
};

struct C_00031F10 {
    int func_00157B90(int a, int b);
    int func_00031F10(int a, int b);
};

/* score table: type selects one of the ranked lists */
struct S_ScoreTable {
    int func_0005B960(int type, float value);
    int func_0005BA80(int type, float value, char *name);
};

struct C_00032060 {
    char pad0[0x68];
    S_ScoreTable *unk68;
    int func_00032060(int score, char *name);
    int func_000320A0(float value, char *name);
};


int C_00031F10::func_00031F10(int a, int b)
{
    return func_00157B90(a, b) != 0;
}

int C_00032060::func_00032060(int score, char *name)
{
    if (unk68->func_0005B960(3, (float)score) != 0) {
        unk68->func_0005BA80(3, (float)score, name);
        return 1;
    }
    return 0;
}

void C_00032550::func_00032550(void)
{
    if (unk1C4 != 0) {
        unk1C4->func_001041A0();
    }
}

void C_00032720::func_00032720(void)
{
  int func_0001BE50(...);
  int in_ECX = (int)this;
  
  if (*(int *)(*(int *)(in_ECX + 100) + 0x484) != 0) {
    func_0001BE50();
    return;
  }
  return;
}
