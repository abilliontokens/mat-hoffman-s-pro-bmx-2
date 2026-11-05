/* 18 functions from 0x001BA560 to 0x001BB4F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001BA9A0 {
    undefined4 func_001BA9A0(byte param_1);
};

struct C_001BB4D0 {
    void func_001BB4D0(int param_1);
};

struct C_001BB2C0 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    void **f28;
    void func_001BAE30();
    void *func_001BB2C0(int flags);
};

struct C_001BB280 {
    void *vtbl;
    void func_001BA8B0();
    void *func_001BB280(unsigned int flags);
};

struct C_001BB470 {
    void *vtbl;
    char pad04[0x20];
    u8 f24;
    char pad25[0x3B];
    u8 f60;
    char pad61[0x77];
    int fD8;
    int fDC;
    int fE0;
    int fE4;
    int fE8;
    int fEC;
    u32 fF0[8];
    int f110;
    void func_00157600(int a0);
    C_001BB470(int a0);
};

void func_001E891B(void *p);

struct C_001BB2A0 {
    void func_001BA910(void);
    void *func_001BB2A0(int flags);
};

extern int D_0028CF94;
extern int D_0028CF84;
extern int D_0028D200;
extern int D_000186A0;
extern int D_0028CB80;
extern int D_0028CA64;

struct C_00157660 {
    void func_00157660(void);
};

struct C_001B4F90 {
    void func_001B4F90(void);
};

struct S_001BA910_Elem {
    void *vtbl;
    int f4;
    int f8;
};

struct C_001BA910 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    S_001BA910_Elem **f28;
    void func_001BA910(void);
};

struct S_001BA560_arg {
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
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual int v96(void *p);
};

struct S_001BA560_Node {
    int f0;
    int f4;
};

struct C_001BA560 {
    char pad0[0x10c];
    int f10c;
    char pad110[0x178];
    S_001BA560_Node *f288;
    int f28c;
    int func_001BA560(S_001BA560_arg *arg1, int arg2);
};

struct C_001BA5E0 {
    void *vtbl;
    int f4;
    char f8;
    char pad09[0x107];
    int f110;
    int f114;
    int f118;
    int f11c;
    int f120;
    int f124;
    char pad128[4];
    int f12c;
    int f130;
    int f134;
    int f138;
    int f13c;
    char pad140[4];
    int f144;
    C_001BA5E0();
    C_001BA5E0 *func_001BA5E0(void);
};

struct C_001BB300 {
    void *vtbl;
    char pad04[0x58];
    void *f5c;
    void func_001BAEC0();
    C_001BB300 *func_001BB300(byte flags);
    C_001BB300 *func_001BB2E0(byte flags);
};


int C_001BA560::func_001BA560(S_001BA560_arg *arg1, int arg2)
{
    int func_001E8A44(...);
    void func_001BA540();
    void __stdcall func_001BBAA0(void *a, void *b);
    int r = arg1->v96(&f10c);
    S_001BA560_Node *n;

    if (arg2 != 0) {
        func_001BBAA0(this, (void *)&func_001BA540);
    }
    if (r == 0)
        return 0;
    n = (S_001BA560_Node *)func_001E8A44(8);
    if (n != 0) {
        n->f0 = f28c;
        n->f4 = r;
        f288 = n;
        return 1;
    }
    f288 = 0;
    return 1;
}
inline void Init_001BA5E0(C_001BA5E0 *p)
{
    p->f4 = 0;
    p->f8 = 0;
    p->vtbl = (void *)&D_0028D200;
}

C_001BA5E0::C_001BA5E0()
{
    void *func_001E8A44(int size);
    Init_001BA5E0(this);
    f124 = 0;
    f118 = 0xa;
    f11c = (int)&D_000186A0;
    f120 = 0;
    f114 = (int)func_001E8A44(0x28);
    f13c = 0;
    f130 = 0xa;
    f134 = (int)&D_000186A0;
    f138 = 0;
    f12c = (int)func_001E8A44(0x28);
    f110 = 0;
    f144 = 0;
}

void C_001BA910::func_001BA910(void)
{
    int func_001E891B(...);
    int i;

    vtbl = (void *)&D_0028CF94;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            S_001BA910_Elem *e = f28[i];
            if (e != 0) {
                e->vtbl = (void *)&D_0028CF84;
                if (e->f8 != 0) {
                    func_001E891B(e->f8);
                    e->f8 = 0;
                }
                if (e->f4 != 0) {
                    func_001E891B(e->f4);
                    e->f4 = 0;
                }
                func_001E891B(e);
            }
        }
        func_001E891B(f28);
        f28 = 0;
    }
    ((C_00157660 *)this)->func_00157660();
}

undefined4 C_001BA9A0::func_001BA9A0(byte param_1)
{
  int func_001B8480(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001B8480();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *C_001BB2A0::func_001BB2A0(int flags)
{
    func_001BA910();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001BB2C0::func_001BB2C0(int flags) {
    func_001BAE30();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_001BB300 *C_001BB300::func_001BB2E0(byte flags)
{
    int func_001E891B(...);

    func_001BAEC0();
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}

C_001BB300 *C_001BB300::func_001BB300(byte flags)
{
    int func_001E891B(...);
    void *p = f5c;
    vtbl = (void *)&D_0028CB80;
    if (p != 0) {
        *(void **)p = (void *)&D_0028CA64;
        func_001E891B(p);
        f5c = 0;
    }
    ((C_001B4F90 *)this)->func_001B4F90();
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}

void C_001BB4D0::func_001BB4D0(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xf0 + param_1 * 4) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  return;
}
