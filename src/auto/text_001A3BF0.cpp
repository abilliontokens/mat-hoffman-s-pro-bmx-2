/* 18 functions from 0x001A3BF0 to 0x001A4B60, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_00275678[];
extern char D_002A48F8[];

struct C_001A40E0 {
    undefined4 func_001A40E0(byte param_1);
};

struct S_001A3BF0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6(int a);
    virtual int v7();
};

struct S_001A3BF0_Item {
    S_001A3BF0_Obj *obj;
};

struct C_001A3BF0 {
    char pad0[0x1c0];
    int f1c0;
    S_001A3BF0_Item **f1c4;

    S_001A3BF0_Item *Item(int i)
    {
        int n = *(volatile int *)&f1c0;

        if (n > 0 && f1c4 != 0 && i < n) {
            return f1c4[i];
        }
        return 0;
    }

    int func_001A3BF0(int idx);
};

struct Obj_001A4A20 {
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
};

struct Inner_001A4A20 {
    char pad0[0x28];
    Obj_001A4A20 *f28;
    Obj_001A4A20 *f2c;
};

struct C_001A4A20 {
    char pad0[0x24];
    Inner_001A4A20 *f24;
    void func_001A4A20(void);
};

struct S36_1A {
    int f[9];
};

struct S16_1A {
    int a;
    int b;
    int c;
    int d;
};

struct C_001A4440_Holder;

/* 12-byte entry allocated per section of the file */
struct S_001A3DA0_Item {
    int f0;
    int f4;
    int f8;
};

/* 12-byte record at self+0x1d0 + 12*i, 1-based */
struct S_001A3DA0_Rec {
    int f0;
    float f4;
    int f8;
};

struct C_001A4590 {
    char pad0[0x24];
    int f24;
    char pad28[0x3c - 0x28];
    char f3c[0x9c - 0x3c];
    char name9c[0x104];
    unsigned char f1a0;
    char pad1a1[3];
    C_001A4440_Holder *f1a4;
    char pad1a8[0x1c8 - 0x1a8];
    char list1c8[0x10];
    char pad1d8[0x2cc - 0x1d8];
    int f2cc;
    int pad2d0;
    int f2d4;
    void func_001A1FB0(int a0, int a1, S36_1A s0, S16_1A s1, S16_1A s2, int a19, int a20, int a21, int a22, int a23);
    int func_001A3DA0(int volatile a0);
    C_001A4590 *func_001A4590(int a0, int a1, int a2, int a3, S36_1A s0, S16_1A s1, S16_1A s2, int a21, int a22, int a23, int a24, int a25);
};

/* local scratch object built on the stack (size 0x4cc) */
struct C_00168280 {
    int data[0x133];
    C_00168280 *func_00168280(void);
    int func_00169490(char *buf, int flag);
    void func_001691E0(void);
    int func_00169710(char *buf);
    int func_00168C20(const char *key, int def, int *out);
    int func_00168C50(const char *key, int def, float *out);
    int func_00168BE0(const char *key, const char *def, char *dst, int size);
    int func_00168550(const char *key, char *out, int def);
};

extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);
extern char D_0028B7CC[], D_00284BE8[], D_0028B7B8[], D_00284AB0[], D_00275630[], D_0027A1F8[];
extern char D_00287DA0[], D_0028B7B0[], D_0028B7A0[], D_0028B798[], D_0028B78C[];

struct C_001A4210_Scene {
    void func_0001DF80(void *obj, int a);
};
struct C_001A4210_Root { char pad0[4]; C_001A4210_Scene *f4; };
extern C_001A4210_Root *D_002A8490;
extern char D_0028B824[], D_0028B818[], D_0028B80C[], D_0028B800[], D_0028B7F4[];
extern char D_0028B7E8[], D_0028B7E0[], D_00289930[];
extern "C" void *func_001E8A44(unsigned int size);

struct C_001A4210 {
    char pad0[0x24];
    int f24;
    char pad28[0x3c - 0x28];
    char f3c[0x1a0 - 0x3c];
    unsigned int f1a0;
    void *f1a4;
    char pad1a8[0x1c4 - 0x1a8];
    int cnt;
    void **items;
    int base;
    int capacity;
    char pad1d4[0x1ec - 0x1d4];
    int f1ec;
    int func_001A4210(C_00168280 *obj, int a1, int a2);
};

struct C_001A4640 {
    int func_001A4640(int a1, int a2, int a3);
};

/* (0, 0, 0, 1) vector, stored z, y, x, w */
struct V4_001A46F0 {
    float x;
    float y;
    float z;
    float w;
    V4_001A46F0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    V4_001A46F0(int) { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

struct C_001A46F0 {
    V4_001A46F0 a;
    V4_001A46F0 b;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    C_001A46F0();
};

struct C_001A4420 {
    undefined4 func_001A4420(byte param_1);
};

struct C_001CFE90 {
    int func_001CFE90(int a1, int a2, int a3, int a4, int a5, int a6);
};

struct C_001A4440_Holder {
    char pad0[0xb4];
    C_001CFE90 *fb4;
};

struct C_001A4440_List {
    int count;
    void **items;
    int base;
    int capacity;
    int func_0015ACA0(int a);
};

struct C_001A4440 {
    undefined4 func_001A4440(int a1, int a2, int *a3);
};

struct C_001A4500 {
    char pad0[0x24];
    int f24;
    char pad28[0x48 - 0x28];
    int f48;
    int f4c;
    char pad50[0x1a4 - 0x50];
    C_001A4440_Holder *f1a4;
    char pad1a8[0x1c0 - 0x1a8];
    char pad1c0[0x14];
    C_001A4440_List list1;
    char pad1e4[4];
    C_001A4440_List list2;
    undefined4 func_001A4500(int a1, int *a2, int a3);
};
struct C_001A4B30 {
    void func_001A4B30(void);
};

struct C_001A3D80 {
    undefined4 func_001A3D80(byte param_1);
};

struct C_001A4100_Obj {
    void func_001CB560(C_001A4100_Obj *old);
};

struct C_001A4100_Item {
    int f0;
    C_001A4100_Obj *f4;
};

struct C_001A4100_List {
    char pad0[1];
    void func_001CDED0(C_001A4100_Item *item);
};

struct C_001A4100 {
    char pad0[0x1BC];
    C_001A4100_Obj *f1BC;
    char pad1C0[4];
    int f1C4;
    C_001A4100_Item **f1C8;
    char pad1CC[0x1D8 - 0x1CC];
    C_001A4100_List f1D8;

    C_001A4100_Item *Item(int i)
    {
        int n = *(volatile int *)&f1C4;

        if (n > 0 && f1C8 != 0 && i < n) {
            return f1C8[i];
        }
        return 0;
    }

    int func_001A2480(C_001A4100_Obj *obj, int a1, int a2);
    int func_001A4100(int key, int a1, int a2);
};

extern int D_0028B84C;
extern u32 D_002A9F40[4];
extern void *D_002EFE78;

struct V4_001A3BF0 {
    float x, y, z, w;
};

extern float D_002A9F44;
extern float D_002A9F48;
extern float D_002A9F4C;

struct C_00132EB0 {
    void func_00132EB0(int a);
};

struct SphereCollisionObject {
    void *vtbl;
    char pad4[0x4c];
    int f50;
    char pad54[0xa8 - 0x54];
    float fA8;
    float fAC;
    float fB0;
    float fB4;
    char padB8[0x100 - 0xb8];
    float f100;
    float f104;
    float f108;
    float f10C;
    float f110;
    SphereCollisionObject *func_001A4A50(int param);
    void func_001A4AE0(u32 *pos, float *radius);
};

struct VT_001A4790;

struct Shape_001A4790 {
    char pad0[0x28];
    VT_001A4790 *f28;
    VT_001A4790 *f2C;
};

struct Mat_001A4790 {
    Mat_001A4790 *next;
    Shape_001A4790 *f4;
};

struct VT_001A4790 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(void *a, void *b, int c, int d);
    virtual int v12();
};

struct C_001A4790 {
    u32 vec0[4];
    u32 vec10[4];
    u32 f20;
    Shape_001A4790 *f24;
    VT_001A4790 *f28;
    void *f2C;
    Mat_001A4790 *f30;
    int f34;
    int f38;
    int f3C;
    void func_001A4790(void *a1, u32 flags, u32 *a3, u32 *a4, int a5, int a6, int a7);
    int func_001A4840(void);
};

extern Shape_001A4790 *D_002EFE4C;


int C_001A3BF0::func_001A3BF0(int idx)
{
    S_001A3BF0_Obj *obj;

    if (idx < 1 || idx > f1c0) {
        return 0;
    }
    obj = Item(idx - 1)->obj;
    if (obj->v7()) {
        return obj->v6(0);
    }
    return 1;
}

undefined4 C_001A3D80::func_001A3D80(byte param_1)
{
  int func_001A2620(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001A2620();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_001A4590::func_001A3DA0(int volatile a0)
{
    struct {
        C_001A4590 * volatile self;
        union {
            int len;
            int i;
        };
        int b;
        int c;
        int a;
        int d;
        int limit;
        int cnt;
    } t;
    struct {
        char buf2[0x104];
        char buf[0x104];
        char buf3[0x104];
    } s;
    C_00168280 obj;
    int j;
    int n;

    t.self = this;
    obj.func_00168280();
    t.len = strlen((const char *)a0);
    t.limit = 0x103;
    t.cnt = AsmMinI(t.limit, t.len);
    n = t.cnt;
    func_001E8920(t.self->name9c, (const char *)a0, n);
    t.self->name9c[n] = 0;
    func_001ADCC0(s.buf, 0x104, D_00275678, D_002A48F8, a0);
    if (obj.func_00169490(s.buf, 0) == 0) {
        obj.func_001691E0();
        return 0;
    }
    func_001ADCC0(s.buf2, 0x104, D_0028B7CC);
    if (obj.func_00169710(s.buf2) != 0) {
        obj.func_00168C20(D_00284BE8, 0, &t.a);
        obj.func_00168C20(D_0028B7B8, 0, &t.b);
        for (t.i = 1; t.i <= t.a; t.i++) {
            func_001ADCC0(s.buf2, 0x104, D_00284AB0, t.i);
            if (obj.func_00169710(s.buf2) != 0) {
                S_001A3DA0_Item *item;
                C_001A4590 *p;
                C_001A4440_List *list;
                unsigned int flags;

                obj.func_00168BE0(D_0027A1F8, D_00275630, s.buf3, -1);
                obj.func_00168C20(D_00287DA0, 0, &t.c);
                obj.func_00168C20(D_0028B7B0, 0, &t.d);
                item = (S_001A3DA0_Item *)func_001E8A44(0xc);
                item->f4 = t.c;
                item->f8 = t.d;
                p = t.self;
                flags = 1;
                if ((p->f1a0 & 8) == 0) {
                    flags = 9;
                }
                if (t.c != 0) {
                    flags |= 0x80;
                }
                item->f0 = p->f1a4->fb4->func_001CFE90(p->f24, (int)s.buf3, flags, 1, (int)p->f3c, 0);
                list = (C_001A4440_List *)t.self->list1c8;
                if (list->count >= list->capacity) {
                    if (!list->func_0015ACA0(list->base + list->count)) {
                        continue;
                    }
                }
                list->items[list->count] = item;
                list->count++;
            }
        }
        for (j = 1; j <= t.b; j++) {
            func_001ADCC0(s.buf2, 0x104, D_0028B7A0, j);
            if (obj.func_00169710(s.buf2) != 0) {
                S_001A3DA0_Rec *r = (S_001A3DA0_Rec *)((char *)t.self + 0x1d0) + j;

                obj.func_00168C20(D_0028B798, -1, &r->f0);
                r = (S_001A3DA0_Rec *)((char *)t.self + 0x1d0) + j;
                obj.func_00168C50(D_0028B78C, 0, &r->f4);
                r = (S_001A3DA0_Rec *)((char *)t.self + 0x1d0) + j;
                r->f8 = 0;
            }
        }
        t.self->f2d4 = t.b;
    }
    obj.func_001691E0();
    return 1;
}

undefined4 C_001A40E0::func_001A40E0(byte param_1)
{
  int func_001A2CF0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_001A2CF0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_001A4100::func_001A4100(int key, int a1, int a2)
{
    int result = 0;
    int i;

    for (i = 0; i < f1C4; i++) {
        if (Item(i)->f0 == key) {
            C_001A4100_Obj *obj;

            result = func_001A2480(Item(i)->f4, a1, a2);
            f1D8.func_001CDED0(Item(i));
            obj = Item(i)->f4;
            if (obj != 0 && f1BC != obj) {
                obj->func_001CB560(f1BC);
            }
            f1BC = obj;
        }
    }
    return result;
}

int C_001A4210::func_001A4210(C_00168280 *obj, int a1, int a2)
{
    char path[0x104];
    char name[0x104];
    int count;
    int a, b, c;

    if (obj == 0) {
        return 0;
    }
    func_001ADCC0(path, 0x104, D_0028B824, a1);
    if (obj->func_00169710(path)) {
        obj->func_00168C20(D_0028B818, 0, &count);
        obj->func_00168C20(D_0028B80C, 0, &f1ec);
        if (a2 != -1 && a2 < count) {
            count = a2;
        }
        for (int i = 1; i <= count; i++) {
            func_001ADCC0(path, 0x104, D_0028B800, a1, i);
            if (obj->func_00169710(path)) {
                obj->func_00168550(D_0028B7F4, name, -1);
                obj->func_00168C20(D_0028B7E8, 0, &a);
                obj->func_00168C20(D_0028B7E0, 0, &b);
                obj->func_00168C20(D_00289930, 0, &c);
                int *e = (int *)func_001E8A44(8);
                e[0] = i;
                unsigned int flags = (c != 0) + 1;
                if (a) flags |= 0x40;
                if (b) flags |= 0x80;
                if (!(f1a0 & 8)) flags |= 8;
                e[1] = ((C_001A4440_Holder *)f1a4)->fb4->func_001CFE90(f24, (int)name, flags, 7, (int)f3c, 0);
                C_001A4440_List *l = (C_001A4440_List *)&cnt;
                if (l->count >= l->capacity) {
                    if (!l->func_0015ACA0(l->base + l->count)) {
                        continue;
                    }
                }
                l->items[l->count] = e;
                l->count++;
            }
        }
        if (f1ec) {
            D_002A8490->f4->func_0001DF80(this, 0);
        }
    }
    return 1;
}

undefined4 C_001A4420::func_001A4420(byte param_1)
{
  int func_001A3210(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_001A3210();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_001A4440::func_001A4440(int a1, int a2, int *a3)
{
  int func_001E8A44(...);
  int in_ECX = (int)this;
  C_001A4440_List *list;
  int *piVar2;
  int iVar1;
  int iVar3;

  if (a3 != 0) {
    *(int *)(in_ECX + 0x48) = a3[3];
    *(int *)(in_ECX + 0x4c) = a3[4];
  }
  iVar3 = in_ECX + 0x3c;
  iVar1 = ((C_001A4440_Holder *)*(int *)(in_ECX + 0x1a4))->fb4->func_001CFE90(*(int *)(in_ECX + 0x24), a2, 9, 1, iVar3, 0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)func_001E8A44(0x10);
  piVar2[1] = a1;
  *piVar2 = iVar1;
  if (a3 != 0) {
    piVar2[2] = a3[3];
    piVar2[3] = a3[4];
  } else {
    piVar2[2] = 0;
    piVar2[3] = 0;
  }
  list = (C_001A4440_List *)(in_ECX + 0x1c0);
  if (list->count >= list->capacity) {
    if (!list->func_0015ACA0(list->base + list->count)) {
      return 1;
    }
  }
  list->items[list->count] = piVar2;
  list->count++;
  return 1;
}

undefined4 C_001A4500::func_001A4500(int a1, int *a2, int a3)
{
  int in_ECX = (int)this;
  C_001A4440_List *list;
  void **items;
  int iVar1;

  *(int *)(in_ECX + 0x48) = a2[9];
  *(int *)(in_ECX + 0x4c) = a2[10];
  iVar1 = ((C_001A4440_Holder *)*(int *)(in_ECX + 0x1a4))->fb4->func_001CFE90(*(int *)(in_ECX + 0x24), a1, 0x89, 1, in_ECX + 0x3c, 0);
  if (iVar1 == 0) {
    return 0;
  }
  *a2 = iVar1;
  if (a3 != 0) {
    list = (C_001A4440_List *)(in_ECX + 0x1d4);
  } else {
    list = (C_001A4440_List *)(in_ECX + 0x1e8);
  }
  if (list->count >= list->capacity) {
    if (!list->func_0015ACA0(list->base + list->count)) {
      return 1;
    }
  }
  items = (void **)*(void * volatile *)&list->items;
  items[list->count] = a2;
  list->count++;
  return 1;
}

C_001A4590 *C_001A4590::func_001A4590(int a0, int a1, int a2, int a3, S36_1A s0, S16_1A s1, S16_1A s2, int a21, int a22, int a23, int a24, int a25)
{
    func_001A1FB0(a2, a3, s0, s1, s2, a21, a22, a23, a24, a25);
    f2cc = a1;
    return func_001A3DA0(a0) ? this : 0;
}

int C_001A4640::func_001A4640(int a1, int a2, int a3)
{
    char buf[0x104];
    C_00168280 obj;
    int r;

    obj.func_00168280();
    func_001ADCC0(buf, 0x104, D_00275678, D_002A48F8, a1);
    if (obj.func_00169490(buf, 0) == 0) {
        obj.func_001691E0();
        return 0;
    }
    r = ((C_001A4210 *)this)->func_001A4210(&obj, a2, a3);
    obj.func_001691E0();
    return r;
}

void C_001A4790::func_001A4790(void *a1, u32 flags, u32 *a3, u32 *a4, int a5, int a6, int a7)
{
    V4_001A3BF0 *d;

    f3C = a7;
    if (a1 == 0) {
        a1 = D_002EFE78;
    }
    f2C = a1;
    f30 = (Mat_001A4790 *)a1;
    d = (V4_001A3BF0 *)&vec0[0];
    *d = *(V4_001A3BF0 *)a3;
    d = (V4_001A3BF0 *)&vec10[0];
    *d = *(V4_001A3BF0 *)a4;
    f34 = a5;
    f38 = a6;
    f20 = flags;
    f24 = ((Mat_001A4790 *)a1)->f4;
    f28 = 0;
    if (flags & 1) {
        f28 = ((Shape_001A4790 *)f24)->f28;
    }
    if (f28 == 0 && (flags & 2)) {
        f28 = ((Shape_001A4790 *)f24)->f2C;
    }
    ((VT_001A4790 *)f28)->v11(this, d, a5, a6);
}

int C_001A4790::func_001A4840(void)
{
    int r = f28->v12();

    if (r == 0) {
        if (f28 == f24->f28) {
            f28 = 0;
            if ((f20 & 2) && f24->f2C != f24->f28) {
                f28 = f24->f2C;
            }
        } else {
            f28 = 0;
        }
        if (f28 == 0) {
            if (f30 != 0) {
                f30 = f30->next;
                if (f30 != 0) {
                    f24 = f30->f4;
                    if (f20 & 1) {
                        f28 = f24->f28;
                    }
                    if (f28 == 0 && (f20 & 2)) {
                        f28 = f24->f2C;
                    }
                }
            }
            if (f28 == 0) {
                if (f3C != 0 && D_002EFE4C != 0 && f24 != D_002EFE4C) {
                    f24 = D_002EFE4C;
                    if (f20 & 1) {
                        f28 = f24->f28;
                    }
                    if (f28 == 0 && (f20 & 2)) {
                        f28 = f24->f2C;
                    }
                }
                if (f28 == 0) {
                    return 0;
                }
            }
        }
        if (f34 != 0) {
            V4_001A46F0 mn;
            V4_001A46F0 mx;
            float *lo;
            float *hi;

            f28->v11(this, &vec10[0], (int)&mn, (int)&mx);
            lo = (float *)f34;
            hi = (float *)f38;
            if (mn.x < lo[0]) {
                lo[0] = mn.x;
            }
            lo = (float *)f34;
            if (mn.y < lo[1]) {
                lo[1] = mn.y;
            }
            lo = (float *)f34;
            if (mn.z < lo[2]) {
                lo[2] = mn.z;
            }
            hi = (float *)f38;
            if (mx.x > hi[0]) {
                hi[0] = mx.x;
            }
            hi = (float *)f38;
            if (mx.y > hi[1]) {
                hi[1] = mx.y;
            }
            hi = (float *)f38;
            if (mx.z > hi[2]) {
                hi[2] = mx.z;
            }
        } else {
            f28->v11(this, &vec10[0], 0, 0);
        }
        r = f28->v12();
    }
    return r;
}

void C_001A4A20::func_001A4A20(void)
{
    if (f24->f28 != 0) {
        f24->f28->v14();
    }
    if (f24->f2c != 0 && f24->f2c != f24->f28) {
        f24->f2c->v14();
    }
}

SphereCollisionObject *SphereCollisionObject::func_001A4A50(int param)
{
    u32 *p;

    ((C_00132EB0 *)this)->func_00132EB0(param);
    vtbl = &D_0028B84C;
    p = (u32 *)&fA8;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    fA8 = *(float *)&D_002A9F40[0];
    fAC = D_002A9F44;
    fB0 = D_002A9F48;
    fB4 = D_002A9F4C;
    f100 = 0;
    f104 = 0;
    f108 = 0;
    f10C = 0;
    f110 = 0;
    f50 = 5;
    return this;
}

void SphereCollisionObject::func_001A4AE0(u32 *pos, float *radius)
{
    if (pos != 0) {
        V4_001A3BF0 *p = (V4_001A3BF0 *)&fA8;

        *p = *(V4_001A3BF0 *)pos;
    }
    if (radius != 0) {
        float r = *radius;

        f100 = r;
        f104 = r * r;
    }
}

C_001A46F0::C_001A46F0()
{
    V4_001A46F0 t;

    t.x = -3.402823466e+38f;
    t.y = -3.402823466e+38f;
    t.z = -3.402823466e+38f;
    a = t;
    V4_001A46F0 u(0);
    b = u;
    f20 = 0.0f;
    f24 = 0.0f;
    f28 = 0.0f;
    f34 = 0.0f;
    f38 = 0.0f;
}

void C_001A4B30::func_001A4B30(void)
{
  int func_00133D80(...);
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xa7) = *(byte *)(in_ECX + 0xa7) & 0xdf;
  func_00133D80(*(undefined4 *)(in_ECX + 0x54));
  *(undefined4 *)(*(int *)(in_ECX + 0x54) + 4) = 0;
  return;
}

