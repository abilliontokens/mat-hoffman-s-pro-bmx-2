/* 17 functions from 0x00091820 to 0x00092810, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00091820 {
    undefined4 func_00091820(byte param_1);
};

extern int D_00279C3C;
extern int D_0027993C;
extern int D_002799BC;
void func_001E891B(void *p);
void func_0008BBE0();

struct C_000927F0 {
    void *func_000927F0(unsigned int flags);
};

extern int D_00279DEC;

struct C_0008ADF0 {
    void func_0008ADF0();
};

struct C_00092790 {
    void *vtbl;
    void *func_00092790(int flags);
};

struct C_000927B0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    void func_00157660();
    void *func_000927B0(int flags);
};

struct C_001D6410 {
    void func_001D6410();
};

struct C_001D57E0 {
    void func_001D57E0();
};

struct C_00091900_Item {
    virtual void destroyObject(int flags);
};

struct C_00092710 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    void func_00157660();
    void *func_00092710(int flags);
};

struct C_000918C0 {
    char pad0[0x88];
    void func_00157660();
    void *func_000918C0(int flags);
};

struct C_00091900 {
    void *vtbl;
    char pad4[0x24];
    C_00091900_Item *f28;
    C_00091900_Item *f2c;
    void func_00157660();
    void *func_00091900(int flags);
};

struct C_00091950 {
    void *vtbl;
    char pad4[0x28];
    C_00091900_Item *f2c;
    void func_00157660();
    void *func_00091950(int flags);
};

extern int D_00279CCC;

struct C_00091860 {
    void func_000864D0();
    void *func_00091860(int flags);
};

struct C_00091A00 {
    void func_0008A350();
    void *func_00091A00(int flags);
};

struct C_00092750 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    void func_00157660();
    void *func_00092750(int flags);
};

/* string-id table reached through D_002A8490->f2e8->f4 (raw byte offsets) */
struct S_00091A20_Strs { char raw[0x1300]; };
struct S_00091A20_Mgr { int pad0; S_00091A20_Strs *f4; };

struct S_002A8490 {
    char pad0[0x274];
    int unk274;
    char pad278[0x2e8 - 0x278];
    S_00091A20_Mgr *f2e8;
};
extern S_002A8490 *D_002A8490;

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_000919B0 {
    void func_0008A190();
    void func_00089FA0();
    void func_00157960();
    int func_000919B0();
};

struct C_00091840 {
    void func_00085520();
    void *func_00091840(int flags);
};

struct C_00091880 {
    void func_00086E00();
    void *func_00091880(int flags);
};

struct C_000918A0 {
    void func_00087700();
    void *func_000918A0(int flags);
};

struct C_00091990 {
    void func_00089210();
    void *func_00091990(int flags);
};

/* UI element with position/text setters */
struct S_00091A20_Elem {
    void func_0005E800(int x, int y);
    void func_0005E960(int x, int y);
    void func_0005E840(int s);
};

/* EditorFooterOverlay: five labels f24..f34, one icon per slot chosen from the 8 icon objects at +0x38+k*0x64 */
struct C_00091A20 {
    void *vtbl;
    char pad4[0x20];
    S_00091A20_Elem *f24;
    S_00091A20_Elem *f28;
    S_00091A20_Elem *f2c;
    S_00091A20_Elem *f30;
    S_00091A20_Elem *f34;
    char pad38[0x4bc - 0x38];
    int f4bc;
    int f4c0;
    int f4c4;
    int f4c8;
    int f4cc;
    char pad4d0[8];
    int f4d8;
    int f4dc;
    int func_00091A20();
    void func_0008AA70();
    void func_0008A8C0();
    int func_00157960();
};

#define EFO_ICON(off) ((S_00091A20_Elem *)((char *)this + (off)))
#define EFO_STR(off) (*(int *)((char *)D_002A8490->f2e8->f4 + (off)))
#define EFO_SLOT(field, v, off, x, lab, lx) \
    field = (v); \
    EFO_ICON(off)->func_0005E800((x), 0x184); \
    lab->func_0005E960((lx), 0x18e);


undefined4 C_00091820::func_00091820(byte param_1)
{
  int func_00084980(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00084980();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *C_00091840::func_00091840(int flags) {
    func_00085520();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_00091860::func_00091860(int flags) {
    func_000864D0();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00091880::func_00091880(int flags) {
    func_00086E00();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_000918A0::func_000918A0(int flags) {
    func_00087700();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_000918C0::func_000918C0(int flags)
{
    ((C_001D57E0 *)((char *)this + 0x88))->func_001D57E0();
    ((C_001D57E0 *)((char *)this + 0x24))->func_001D57E0();
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00091900::func_00091900(int flags)
{
    vtbl = (void *)&D_0027993C;
    if (f28) {
        f28->destroyObject(1);
        f28 = 0;
    }
    if (f2c) {
        f2c->destroyObject(1);
        f2c = 0;
    }
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00091950::func_00091950(int flags)
{
    vtbl = (void *)&D_002799BC;
    if (f2c) {
        f2c->destroyObject(1);
        f2c = 0;
    }
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00091990::func_00091990(int flags) {
    func_00089210();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_000919B0::func_000919B0() {
    if (D_002A8490->unk274 != 0) return 1;
    D_002EFDB8->vf8();
    D_002EFDB8->vf7(1);
    func_0008A190();
    func_00089FA0();
    func_00157960();
}

void *C_00091A00::func_00091A00(int flags) {
    func_0008A350();
    if (flags & 1) func_001E891B(this);
    return this;
}

int C_00091A20::func_00091A20()
{
    if (D_002A8490->unk274 != 0) {
        return 1;
    }
    D_002EFDB8->vf8();
    D_002EFDB8->vf7(1);
    if (f4d8 != f4dc) {
        switch (f4d8) {
        case 1:
            f4bc = -1;
            f4c0 = -1;
            EFO_SLOT(f4c4, 4, 0x1c8, 0xd0, f2c, 0xff)
            EFO_SLOT(f4c8, 1, 0x9c, 0x197, f30, 0x1bb)
            EFO_SLOT(f4cc, 0, 0x38, 0x206, f34, 0x22a)
            f2c->func_0005E840(EFO_STR(0x1068));
            f30->func_0005E840(EFO_STR(0x1218));
            f34->func_0005E840(EFO_STR(0x7c8));
            break;
        case 2:
            EFO_SLOT(f4bc, 7, 0x2f4, 0x14, f24, 0x42)
            EFO_SLOT(f4c0, 4, 0x1c8, 0x9c, f28, 0xc9)
            EFO_SLOT(f4c4, 3, 0x164, 0x113, f2c, 0x136)
            EFO_SLOT(f4c8, 2, 0x100, 0x19e, f30, 0x1c2)
            EFO_SLOT(f4cc, 0, 0x38, 0x20d, f34, 0x230)
            f24->func_0005E840(EFO_STR(0xf08));
            f28->func_0005E840(EFO_STR(0x1078));
            f2c->func_0005E840(EFO_STR(0x1090));
            f30->func_0005E840(EFO_STR(0x1080));
            f34->func_0005E840(EFO_STR(0x7c8));
            break;
        case 3:
            f4bc = -1;
            EFO_SLOT(f4c0, 7, 0x2f4, 0x99, f28, 0xc6)
            EFO_SLOT(f4c4, 4, 0x1c8, 0x120, f2c, 0x14c)
            EFO_SLOT(f4c8, 2, 0x100, 0x197, f30, 0x1bb)
            EFO_SLOT(f4cc, 0, 0x38, 0x203, f34, 0x226)
            f24->func_0005E840(EFO_STR(0x1070));
            f28->func_0005E840(EFO_STR(0xf08));
            f2c->func_0005E840(EFO_STR(0x1078));
            f30->func_0005E840(EFO_STR(0x1080));
            f34->func_0005E840(EFO_STR(0x7c8));
            break;
        case 4:
            f4bc = -1;
            EFO_SLOT(f4c0, 7, 0x2f4, 0x99, f28, 0xc6)
            EFO_SLOT(f4c4, 4, 0x1c8, 0x120, f2c, 0x14c)
            EFO_SLOT(f4c8, 2, 0x100, 0x197, f30, 0x1bb)
            EFO_SLOT(f4cc, 0, 0x38, 0x203, f34, 0x226)
            f24->func_0005E840(EFO_STR(0x1070));
            f28->func_0005E840(EFO_STR(0xf08));
            f2c->func_0005E840(EFO_STR(0x1078));
            f30->func_0005E840(EFO_STR(0x1080));
            f34->func_0005E840(EFO_STR(0xab8));
            break;
        case 5:
            EFO_SLOT(f4bc, 0, 0x38, 0x14, f24, 0x3c)
            EFO_SLOT(f4c0, 2, 0x100, 0x7b, f28, 0xa1)
            EFO_SLOT(f4c4, 1, 0x9c, 0xf5, f2c, 0x11c)
            EFO_SLOT(f4c8, 4, 0x1c8, 0x16c, f30, 0x19c)
            f4cc = -1;
            f24->func_0005E840(EFO_STR(0x7c8));
            f28->func_0005E840(EFO_STR(0x1098));
            f2c->func_0005E840(EFO_STR(0x7f8));
            f30->func_0005E840(EFO_STR(0x1078));
            break;
        case 6:
            EFO_SLOT(f4bc, 7, 0x2f4, 0x14, f24, 0x42)
            EFO_SLOT(f4c0, 4, 0x1c8, 0x9c, f28, 0xce)
            EFO_SLOT(f4c4, 3, 0x164, 0x118, f2c, 0x140)
            EFO_SLOT(f4c8, 2, 0x100, 0x19c, f30, 0x1c5)
            EFO_SLOT(f4cc, 0, 0x38, 0x20d, f34, 0x230)
            f24->func_0005E840(EFO_STR(0xf08));
            f28->func_0005E840(EFO_STR(0x1078));
            f2c->func_0005E840(EFO_STR(0xab8));
            f30->func_0005E840(EFO_STR(0x1080));
            f34->func_0005E840(EFO_STR(0x1088));
            break;
        case 7:
            EFO_SLOT(f4bc, 7, 0x2f4, 0x14, f24, 0x42)
            EFO_SLOT(f4c0, 4, 0x1c8, 0x99, f28, 0xc6)
            EFO_SLOT(f4c4, 1, 0x9c, 0x115, f2c, 0x13d)
            EFO_SLOT(f4c8, 2, 0x100, 0x1a6, f30, 0x1c5)
            EFO_SLOT(f4cc, 0, 0x38, 0x20d, f34, 0x230)
            f24->func_0005E840(EFO_STR(0xf08));
            f28->func_0005E840(EFO_STR(0x1078));
            f2c->func_0005E840(EFO_STR(0x10a0));
            f30->func_0005E840(EFO_STR(0x1080));
            f34->func_0005E840(EFO_STR(0x7c8));
            break;
        }
    }
    return 0;
}

void *C_00092710::func_00092710(int flags)
{
    C_001D6410 *p = (C_001D6410 *)f24;
    vtbl = (void *)&D_00279C3C;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00092750::func_00092750(int flags) {
    C_001D6410 *p = (C_001D6410 *)f24;
    vtbl = (void *)&D_00279CCC;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_00092790::func_00092790(int flags)
{
    ((C_0008ADF0 *)this)->func_0008ADF0();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void *C_000927B0::func_000927B0(int flags)
{
    C_001D6410 *p = (C_001D6410 *)f24;
    vtbl = (void *)&D_00279DEC;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void *C_000927F0::func_000927F0(unsigned int flags)
{
    func_0008BBE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

