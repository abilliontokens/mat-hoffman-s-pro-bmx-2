/* 7 functions from 0x00189060 to 0x0018A010, found by Ghidra. */
#include "common.h"

void *func_001E8A44(int size);

struct C_00185B10 {
    virtual int dummy0(int param_1);
    C_00185B10 *func_00185B10(void);
};

struct C_00157600 {
    void func_00157600(int param_1);
};

extern int D_00289ABC;
extern int D_00289BFC;
extern int D_00289C9C;
extern int D_00289D8C;

struct SceneSound {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual int dummy27(int a);
    char pad4[0x24 - 4];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
};

struct BasicScene;

extern int D_0027B160;

struct SceneLoader {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual int dummy27(BasicScene *scene, int a, void *b, int c);
    SceneLoader *func_001B6E70(int a);
};

struct SceneItem {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2(BasicScene *scene);
};

struct SceneGroup {
    char pad0[0x24];
    int count;
    SceneItem **items;
};

struct SceneSlot {
    char pad0[0x38];
    int f38;
};

struct SceneEntry {
    char pad0[0x14c];
    unsigned char flags;
    char pad14d[0x160 - 0x14d];
};

int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_0028A388[];
extern char D_0028A374[];
extern char D_0028A35C[];
extern int D_0028A0D4;

struct S_00189B60_Vec4 {
    float x, y, z, w;
    S_00189B60_Vec4(float x_, float y_, float z_, float w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct C_0015E0F0 {
    int func_0015E0F0(int a);
};
extern C_0015E0F0 *D_002E2930;

struct C_00189B60_Node;

struct C_0017A4D0 {
    C_00189B60_Node *func_0017A4D0(int a);
};

struct C_00167760 {
    C_00167760 *func_00167760(int a);
    C_00167760 *func_00167D10(C_00189B60_Node *owner, const char *name);
};

/* per-slot loaded object of the scene */
struct C_00189B60_Node {
    C_00189B60_Node *func_0017ABE0(const char *name);
    void func_0017A8F0(S_00189B60_Vec4 *a, S_00189B60_Vec4 *b, int c);
};

struct BasicScene {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual void dummy27();
    virtual void dummy28();
    virtual void dummy29();
    virtual void dummy30();
    virtual void dummy31();
    virtual void dummy32();
    virtual void dummy33();
    virtual void dummy34();
    virtual void dummy35();
    virtual void dummy36();
    virtual void dummy37();
    virtual void dummy38();
    virtual void dummy39();
    virtual void dummy40();
    virtual void dummy41();
    virtual void dummy42();
    virtual void dummy43();
    virtual void dummy44();
    virtual int dummy45();
    virtual void dummy46();
    virtual void dummy47();
    virtual void dummy48();
    virtual void dummy49();
    virtual void dummy50();
    virtual void dummy51();
    virtual void dummy52();
    virtual void dummy53();
    virtual void dummy54();
    virtual void dummy55();
    virtual void dummy56();
    virtual void dummy57();
    virtual void dummy58();
    virtual void dummy59();
    virtual void dummy60();
    char pad4[0x28 - 4];
    int f28;
    int f2c;
    char pad30[0x340 - 0x30];
    int f340;
    SceneEntry *f344;
    int f348;
    char pad34c[0x394 - 0x34c];
    C_00185B10 *f394;
    SceneSound *f398;
    SceneSound *f39c;
    SceneSound *f3a0;
    SceneSound *f3a4;
    SceneGroup **f3a8;
    char pad3ac[0x3b4 - 0x3ac];
    SceneLoader *f3b4;
    char pad3b8[0x3e4 - 0x3b8];
    int f3e4;
    char pad3e8[0x3f4 - 0x3e8];
    C_00189B60_Node *arr3f4[12];
    C_00167760 *arr424[12];
    int arr454[12];
    char pad484[0x494 - 0x484];
    int f494;
    char pad498[0x4a8 - 0x498];
    SceneSlot **f4a8;
    int func_00189B60(int n);
    void func_001898D0(void);
    int func_00189720(void);
    void func_00189770(void);
    int func_00189AA0(void);
};

int BasicScene::func_00189720(void)
{
    if (f394 == 0) {
        void *mem = func_001E8A44(0x148);
        f394 = mem != 0 ? ((C_00185B10 *)mem)->func_00185B10() : 0;
    }
    if (f394->dummy0(f28) != 0) {
        return dummy45();
    }
}

void BasicScene::func_00189770(void)
{
    SceneSound *p;
    SceneSound *q;

    p = (SceneSound *)func_001E8A44(0x2c);
    if (p != 0) {
        ((C_00157600 *)p)->func_00157600(1);
        *(void **)p = &D_00289ABC;
        p->unk24 = 0;
        p->unk28 = 0;
        q = p;
    } else {
        q = 0;
    }
    f398 = q;
    if (f398->dummy27(f2c) == 0) {
        f398->dummy2();
        f398 = 0;
    }

    p = (SceneSound *)func_001E8A44(0x30);
    if (p != 0) {
        ((C_00157600 *)p)->func_00157600(1);
        *(void **)p = &D_00289BFC;
        p->unk24 = 0;
        p->unk28 = 0;
        p->unk2C = 0;
        q = p;
    } else {
        q = 0;
    }
    f39c = q;
    if (f39c->dummy27(f2c) == 0) {
        f39c->dummy2();
        f39c = 0;
    }

    p = (SceneSound *)func_001E8A44(0x2c);
    if (p != 0) {
        ((C_00157600 *)p)->func_00157600(1);
        *(void **)p = &D_00289C9C;
        p->unk24 = 0;
        p->unk28 = 0;
        q = p;
    } else {
        q = 0;
    }
    f3a0 = q;
    if (f3a0->dummy27(f2c) == 0) {
        f3a0->dummy2();
        f3a0 = 0;
    }

    p = (SceneSound *)func_001E8A44(0x34);
    if (p != 0) {
        ((C_00157600 *)p)->func_00157600(1);
        *(void **)p = &D_00289D8C;
        p->unk24 = 0;
        p->unk28 = 0;
        p->unk2C = 0;
        p->unk30 = 0;
        q = p;
    } else {
        q = 0;
    }
    f3a4 = q;
    if (f3a4->dummy27(f2c) == 0) {
        f3a4->dummy2();
        f3a4 = 0;
    }
    dummy60();
}

int BasicScene::func_00189AA0(void)
{
    int i = 0;
    if (f3a8 != 0 && 0 < f340) {
        do {
            f348 = i;
            f4a8[i]->f38 = (f344[i].flags >> 1) & 1;
            SceneGroup *g = f3a8[i];
            if (g->count > 0) {
                int j = 0;
                if (j < g->count) {
                    do {
                        g->items[j]->dummy2(this);
                        j++;
                    } while (j < g->count);
                }
            }
            dummy36();
            i++;
        } while (i < f340);
    }
    return 1;
}

