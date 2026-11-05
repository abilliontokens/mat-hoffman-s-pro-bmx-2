/* 18 functions from 0x00187670 to 0x001884F0, found by Ghidra. */
#include "common.h"

struct C_001877F0Param {
    int func_00169710(void *a);
    int func_00168C20(void *a, int b, void *c);
};

struct C_00187370 {
    virtual void func_00187390(void *a);
    int f4;
    int f8;
};

struct C_001877F0 {
    char pad0[0x24];
    int f24;
    C_00187370 *f28;
    int func_001877F0(C_001877F0Param *param);
};

extern int D_0027AEE4;
extern int D_00289C80;
extern int D_00289C70;

void func_00186D60();
void *func_001E8A44(int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);
#include "ghidra.h"
struct C_00187AF0 {
    void func_00187AF0(void);
};

struct C_001884D0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_001884D0* func_001884D0(void);
};

int func_00135C70(int param_1, int param_2, int *param_3, int param_4);

struct C_00187EE0 {
    char pad0[0x28];
    void *f28;
    char pad2c[4];
    void *f30;
    void func_00187EE0(void);
};

struct S_001878D0_Elem {
    virtual void v0();
    virtual void v1(int a, int b);
    int f4;
    int f8;
};

struct C_001878D0 {
    char pad0[0x24];
    int f24;
    S_001878D0_Elem *f28;
    int func_001878D0(int a);
};

struct C_00187910 {
    char pad0[0x2c];
    int f2c;
    int func_00157BF0(int *a, int b);
    void func_00187910(int *a, int b);
};

struct Obj_00187A40 {
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
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual int v37(int idx, char *a, char *b);
};

struct S_00187A40_Elem {
    char pad0[4];
    char f4[0x138];
    char f13c[0x2c];
};

struct Game_00187A40 {
    int f0;
    int f4;
};

extern Game_00187A40 *D_002A8490;
extern int D_00289D4C;

struct C_00187A40 {
    char pad0[0x24];
    int f24;
    S_00187A40_Elem *f28;
    int func_00187A40(int a0, Obj_00187A40 *obj);
};


int C_001877F0::func_001877F0(C_001877F0Param *param)
{
    char buf[0x104];
    int i;
    int n;
    C_00187370 *p;

    param->func_00169710((void *)&D_0027AEE4);
    param->func_00168C20((void *)&D_00289C80, 0, &f24);
    n = f24;
    if (n == 0)
        return 0;
    p = (C_00187370 *)func_001E8A44(n * 0xc);
    if (p != 0) {
        func_00011FF0(p, 0xc, n, (void *)&func_00186D60);
    } else {
        p = 0;
    }
    f28 = p;
    for (i = 0; i < f24; i++) {
        func_001ADCC0(buf, 0x104, (const char *)&D_00289C70, i + 1);
        param->func_00169710(buf);
        f28[i].func_00187390(param);
    }
    return 1;
}

int C_001878D0::func_001878D0(int a)
{
    int i;

    for (i = 0; i < f24; i++) {
        f28[i].v1(0, a);
    }
    return 1;
}

void C_00187910::func_00187910(int *a, int b)
{
    if (func_00135C70(0x1f, 0, a, 0xc) != 0) {
        f2c = (f2c + 1) % 3;
    }
    func_00157BF0(a, b);
}

int C_00187A40::func_00187A40(int a0, Obj_00187A40 *obj)
{
    char buf[0x100];
    int i;

    if (D_002A8490->f4 == 0) {
        return 0;
    }
    for (i = 0; i < f24; i++) {
        if (obj->v37(i + 1, f28[i].f4, f28[i].f13c) == 0) {
            func_001ADCC0(buf, 0x100, (const char *)&D_00289D4C, i + 1, f28[i].f4);
        }
    }
    return 1;
}

void C_00187AF0::func_00187AF0(void)
{
  int func_001E891B(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    func_001E891B(*(int *)(in_ECX + 0x28));
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  return;
}

void C_00187EE0::func_00187EE0(void)
{
    void func_001E891B(void *);

    if (f28 != 0) {
        func_001E891B(f28);
        f28 = 0;
    }
    if (f30 != 0) {
        func_001E891B(f30);
        f30 = 0;
    }
}

int __stdcall func_00188230(int a0) {
    int __stdcall func_001880A0(int);
    func_001880A0(a0);
    return 1;
}

C_001884D0* C_001884D0::func_001884D0(void) {
    extern int D_00289F70;
    unk4 = 0;
    unk0 = (int)&D_00289F70;
    unk8 = 0;
    unkC = 0;
    return this;
}

