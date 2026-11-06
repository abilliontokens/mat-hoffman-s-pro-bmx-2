#ifndef BMX_HDR1_H
#define BMX_HDR1_H

struct V_THISVT {
    virtual void v0();
    virtual void v28(int a);
    virtual void v32();
    virtual void v37(int a);
};

struct V_VB {
    virtual void v0();
    virtual void v5();
};

struct S_LOOK2 {
    char pad0[0x28];
    int *f28;
};

struct C_ELEM {
    char pad0[0x1a4];
    void *f1a4;
};

#endif
