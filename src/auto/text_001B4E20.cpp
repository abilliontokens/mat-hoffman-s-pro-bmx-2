/* 20 functions from 0x001B4E20 to 0x001B5D90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001B5D00 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    int unk10C;
    char unk110;
    char pad111[0x77];
    char unk188;
    char pad189[0x77];
    int unk200;
    C_001B5D00* func_001B5D00(void);
};


extern int D_0028CB94;
extern int D_0028CA9C;
extern int D_0028CA88;
extern int D_002764F0;
extern int D_0027D880;
extern int D_0027CEF0;
extern int D_002AA9F4;
extern int D_002AA9F8;
extern int D_002AA9FC;
extern int D_002AAA00;
void func_001E891B(void *);
int func_001E9040(void *, void *);
void func_001E8920(void *, void *, int);
void __stdcall func_00168C20(void *, int, void *);

struct VObj_001B4F90 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001B57600 {
    void func_00157600(void *a);
};

struct C_001B5830 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_001B5830 *func_001B5830(void *a);
};

struct C_001B4E20 {
    void *vtbl;
    void func_001B4B80(void *a);
    void func_00168BE0(void *a, void *b, void *c, int d);
    int func_001B4E20(void *param);
};

struct C_001B4ED0 {
    void *vtbl;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    int f54;
    void func_001B4ED0();
    void func_001B4F90();
};
struct C_001B5720 {
    undefined4 func_001B5720(void);
};

struct C_001B56F0 {
    undefined4 func_001B56F0(void);
};

struct C_001B59E0 {
    int unk0;
    int unk4;
    char unk8;
    C_001B59E0* func_001B59E0(void);
};

extern int D_0028CB80;
void *func_001E8A44(int size);
int func_001EA426(void *a, void *b);

struct C_001B5790 {
    void *vtbl;
    char pad4[0x54];
    int f58;
    int f5C;
    C_001B5790 *func_001B5790(void);
};

struct C_001B5750 {
    char pad0[0x60];
    int f60;
    char pad64[0x18];
    int f7C;
    int func_001B5750(void *name);
};

struct C_00187640 {
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
    virtual int v27(void *p);
    void *func_00187640(int a);
};

struct C_001B4BE0 {
    virtual void v0(void *p);
    C_001B4BE0 *func_001B4BE0(void);
};

struct C_001B57B0 {
    char pad0[0x54];
    void *f54;
    char pad58[4];
    void *f5C;
    void func_001B57B0(void *param);
};

struct S_001B5860_Obj {
    virtual void destroy(int a);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_001B5860 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    void func_001B5860(void);
};


int C_001B4E20::func_001B4E20(void *param) {
    char buf[0x104];
    int len;
    func_001B4B80(param);
    func_00168BE0(&D_0027D880, &D_002764F0, buf, 0x104);
    len = func_001E9040(buf, &D_0027CEF0);
    if (len > 0x32) {
        len = 0x32;
    }
    func_001E8920((char *)this + 4, buf, len);
    buf[len] = 0;
    func_00168C20(&D_0028CA88, 1, (char *)this + 0x114);
    return 1;
}

void C_001B4ED0::func_001B4ED0() {
    f08 = f0C = f10 = 0;
    f14 = 0x3f800000;
    f18 = f1C = f20 = 0;
    f24 = 0x3f800000;
    f28 = f2C = f30 = 0;
    f34 = 0x3f800000;
    f44 = 0;
    f48 = 0;
    f04 = 0;
    f08 = D_002AA9F4;
    f0C = D_002AA9F8;
    f10 = D_002AA9FC;
    f14 = D_002AAA00;
    f18 = D_002AA9F4;
    f1C = D_002AA9F8;
    f20 = D_002AA9FC;
    f24 = D_002AAA00;
    f28 = D_002AA9F4;
    f2C = D_002AA9F8;
    f30 = D_002AA9FC;
    f34 = D_002AAA00;
    f38 = 0;
    f40 = 0;
    f3C = 0;
    f4C = 0;
    f50 = 0;
    f54 = 0;
    vtbl = (void *)&D_0028CA9C;
}

void C_001B4ED0::func_001B4F90() {
    vtbl = (void *)&D_0028CA9C;
    if (f50 != 0) {
        for (int i = 0; i < f4C; i++) {
            void *p = ((void **)f50)[i];
            if (p != 0) {
                func_001E891B(p);
            }
        }
        func_001E891B((void *)f50);
        f50 = 0;
    }
    if (f54 != 0) {
        ((VObj_001B4F90 *)f54)->v2();
        f54 = 0;
    }
}

undefined4 C_001B56F0::func_001B56F0(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(int *)(in_ECX + 0x1ac) + -4 +
          *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + *(int *)(in_ECX + 0x84) * 4) +
                  *(int *)(in_ECX + 0x8c) * 4) * 4);
}

undefined4 C_001B5720::func_001B5720(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(int *)(in_ECX + 0x1ac) + -4 +
          *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + *(int *)(in_ECX + 0x88) * 4) +
                  *(int *)(in_ECX + 0x90) * 4) * 4);
}

C_001B5830 *C_001B5830::func_001B5830(void *a) {
    ((C_001B57600 *)this)->func_00157600(a);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028CB94;
    return this;
}

C_001B59E0* C_001B59E0::func_001B59E0(void) {
    extern int D_0028CC28;
    unk0 = (int)&D_0028CC28;
    unk4 = 0;
    unk8 = 0;
    return this;
}

C_001B5D00* C_001B5D00::func_001B5D00(void) {
    extern int D_0028CC78;
    unk4 = 0;
    unk8 = 0;
    unk0 = (int)&D_0028CC78;
    unk10C = -1;
    unk110 = 0;
    unk188 = 0;
    unk200 = 0;
    return this;
}

