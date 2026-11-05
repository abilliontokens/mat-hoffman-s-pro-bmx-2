/* 15 functions from 0x001A2C00 to 0x001A3BF0, found by Ghidra. */
#include "common.h"

struct S_001A2C00_Snd {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6(int a);
};

struct S_001A2C00_Elem {
    int f0;
    S_001A2C00_Snd *f4;
};

struct S_001A2C00_List {
    int count;
    S_001A2C00_Elem **items;

    S_001A2C00_Elem *at(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            return items[i];
        }
        return 0;
    }

    void removeAt(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            items[i] = items[count - 1];
            count--;
        }
    }
};

struct ResponseEmitter {
    char pad0[0x1a0];
    u8 f1a0;
    char pad1a1[0x1b4 - 0x1a1];
    int f1b4;
    char pad1b8[0x1bc - 0x1b8];
    S_001A2C00_Snd *f1bc;
    int f1c0;
    S_001A2C00_List list1c4;
    char pad1cc[0x1d8 - 0x1cc];
    S_001A2C00_List list1d8;
    void func_001A2DD0(int id);
    void func_001A2E80(void);
    S_001A2C00_Snd *func_001A2EF0(int id);
    int func_001A2F70(void);
};

int ResponseEmitter::func_001A2F70(void)
{
    f1c0 = 0;
    func_001A2E80();
    f1a0 &= 0xef;
    if (f1bc == 0) {
        return 0;
    }
    if (f1b4 != 0) {
        f1b4 = 0;
    }
    return f1bc->v6(0);
}
