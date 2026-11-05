/* 5 functions from 0x00060370 to 0x00061300, found by Ghidra. */
#include "common.h"

extern float D_00275AEC;

struct S_00060D80_Obj {
    char pad0[0x10];
    float f10;
    float f14;
};

struct C_001D5AA0 {
    S_00060D80_Obj *func_001D5AA0(void);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct BmxSinglePlayerInGameMenu {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18();
    virtual void vf19();
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual void vf23();
    virtual void vf24();
    virtual void vf25();
    virtual void vf26();
    virtual void vf27();
    virtual void vf28();
    virtual void vf29();
    virtual void vf30();
    virtual void vf31();
    char pad4[0x90];
    C_001D5AD0 *unk94;
    C_001D5AD0 *unk98;
    char pad9C[0x10];
    C_001D5AD0 *unkAC[5];
    C_001D5AD0 *unkC0[5];
    C_001D5AD0 *unkD4;
    C_001D5AD0 *unkD8;
    C_001D5AD0 *unkDC;
    C_001D5AD0 *unkE0;
    char padE4[0x10];
    int unkF4;
    int unkF8;
    char padFC[0x10];
    C_001D5AD0 *unk10C;
    char pad110[0x4c];
    C_001D5AA0 *unk15c[10];
    void func_00060D80(void);
    int func_00061030(void);
};

void BmxSinglePlayerInGameMenu::func_00060D80(void) {
    int i;
    for (i = 0; i < 10; i++) {
        if (unk15c[i] != 0) {
            S_00060D80_Obj *p = unk15c[i]->func_001D5AA0();
            if (D_00275AEC > p->f10) {
                p->f10 = 10.0f;
            }
            if (D_00275AEC < p->f14 || p->f14 > p->f10) {
                p->f14 = 10.0f;
            }
        }
    }
}
