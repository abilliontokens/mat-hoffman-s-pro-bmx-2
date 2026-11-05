/* 19 functions from 0x0015FF80 to 0x00160D30, found by Ghidra. */
#include "common.h"
struct C_00160A60 {
    int unk0;
    int unk4;
    int unk8;
    C_00160A60* func_00160A60(void);
};

struct C_00160BF0 {
    int unk0;
    void func_00160BF0(void);
};

struct C_00160C00 {
    int f0;
    int f4;
    char pad8[0x8];
    short f10;
    char pad12[0x12];
    int f24;
    int f28;
    int f2c;
    C_00160C00 *func_00160C00(void);
};

void *func_001E8A44(int size);
extern int D_002A80C0;
extern int D_002A80CC;
extern int D_002879C4;

struct S_001607B0_Dev {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28(int a, int b, void *c);
};

void func_001E891B(void *p);

struct S_00160810_Cam {
    S_00160810_Cam *func_00193490(void);
    void func_001938C0(void *a, int b, int c, void *vecA, void *vecB, int d);
    void func_00193870(void *p);
    void func_00193500(void);
};

/* doubly linked list node and list header */
struct S_ListNode_00160A70 {
    int data;
    S_ListNode_00160A70 *prev;
    S_ListNode_00160A70 *next;
};

struct C_00160A70 {
    int count;
    S_ListNode_00160A70 *head;
    S_ListNode_00160A70 *tail;
    int func_00160A70(int data);
    int func_00160AD0(int data);
};

/* LightFlare */
struct C_00160860 {
    void *vtbl;
    char pad4[0x23];
    unsigned char f27;
    unsigned int vec[5][4];
    S_001607B0_Dev *f78;
    S_00160810_Cam *f7c;
    char pad80[4];
    int f84;
    void func_00192370(int a0);
    void func_00157960(void);
    void func_00157660(void);
    void *func_00160A00(unsigned int flags);
    int func_001607B0(void);
    void func_00160810(int a1, int a2);
    C_00160860 *func_00160860(int a0);
};


int C_00160860::func_001607B0(void)
{
    if (D_002A80C0 != 0) {
        f78->v28(0, 0, &vec[2][0]);
        f78->v28(0, 1, &vec[1][0]);
        f78->v28(0, 2, &vec[4][0]);
        f78->v28(0, 3, &vec[3][0]);
        func_00157960();
    }
    return 1;
}

void C_00160860::func_00160810(int a1, int a2)
{
    S_00160810_Cam *p = (S_00160810_Cam *)func_001E8A44(0x28);

    f7c = p ? p->func_00193490() : 0;
    f7c->func_001938C0(&vec[-1][3], a1, a2, &vec[0][0], &D_002A80CC, 0);
}

C_00160860 *C_00160860::func_00160860(int a0)
{
    unsigned int *p;

    func_00192370(a0);
    vtbl = (void *)&D_002879C4;
    p = &vec[0][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[1][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[2][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[3][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[4][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f27 |= 3;
    f78 = 0;
    f7c = 0;
    f84 = 1;
    return this;
}

C_00160A60* C_00160A60::func_00160A60(void) {
    unk0 = 0;
    unk4 = 0;
    unk8 = 0;
    return this;
}

void C_00160BF0::func_00160BF0(void) {
    extern int D_00287A44;
    unk0 = (int)&D_00287A44;
}

C_00160C00 *C_00160C00::func_00160C00(void)
{
    f0 = 0;
    f4 = 0;
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f10 = 0;
    return this;
}

