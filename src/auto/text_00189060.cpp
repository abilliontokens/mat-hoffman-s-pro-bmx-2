/* 7 functions from 0x00189060 to 0x0018A010, found by Ghidra. */
#include "common.h"

void *func_001E8A44(int size);

struct C_00185B10 {
    virtual int dummy0(int param_1);
    C_00185B10 *func_00185B10(void);
};

struct BasicScene;

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
    virtual void dummy45();
    char pad4[0x28 - 4];
    int f28;
    char pad2c[0x340 - 0x2c];
    int f340;
    SceneEntry *f344;
    int f348;
    char pad34c[0x394 - 0x34c];
    C_00185B10 *f394;
    char pad398[0x3a8 - 0x398];
    SceneGroup **f3a8;
    char pad3ac[0x4a8 - 0x3ac];
    SceneSlot **f4a8;
    void func_00189720(void);
    int func_00189AA0(void);
};
