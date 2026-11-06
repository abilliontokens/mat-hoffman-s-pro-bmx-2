/* 31 functions from 0x001BEF90 to 0x001BFF40, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern char D_002A63C8[];
extern char D_00275678[];
extern char D_0028762C[];
extern char D_0028D774[];
extern char D_0027EF00[];
extern char D_00276F28[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
int func_001E8AF0(const char *, const char *);
void *func_001D6E20(char *name, int size, int a);

struct S_001BF090_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
struct S_001BF090_Obj2 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    void func_001D37C0();
    void func_00157810();
    void func_001D3CC0(char *p);
};
struct C_001BF090 {
    char pad0[0x168];
    S_001BF090_Obj *unk168;
    S_001BF090_Obj2 *unk16c;
    char unk170[0x104];
    int unk274;
    int unk278;
    void func_001BF030();
    int func_001BF090(char *name, int a);
};

struct C_001BF070 {
    undefined4 func_001BF070(byte param_1);
};

struct C_001BF030 {
    undefined4 func_001BF030(void);
};

struct C_001BF050 {
    undefined4 func_001BF050(int param_1);
};

struct C_001BF6A0 {
    char pad0[0x40];
    int unk40;
    void func_001BF6A0(void);
};

struct C_001BF6B0 {
    void func_001BF6B0(void);
};

struct C_001BF520 {
    undefined4 func_001BF520(byte param_1);
};

struct C_001BEF90_Sub {
    void func_001BDAB0(int);
    void func_001BDA20(void);
};

struct C_001BEF90_Obj {
    char pad0[0x2c];
    C_001BEF90_Sub **unk2C;
    void func_001BDDE0(int);
    void func_001BDBD0(void);
};

struct C_001BEF90 {
    char pad0[0x140];
    C_001BEF90_Obj **unk140;
    void func_001BEF90(int param_1);
};

struct C_001BEFC0 {
    char pad0[0x140];
    C_001BEF90_Obj **unk140;
    void func_001BEFC0(int param_1, int param_2);
};

struct C_001BF000_Global {
    virtual void vv0();
    virtual void vv1();
    virtual void vv2();
    virtual void vv3();
    virtual void v4(int a, void *b, int c, int d);
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
    char pad4[0x2c];
    int f30;
};

extern C_001BF000_Global *D_002EFDB8;

struct VCall8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

struct C_001BF6C0 {
    void **vtbl;
    char pad4[0x28];
    u32 unk2C;
    void func_001BF6C0(int enable);
};

struct C_001BF660 {
    void **vtbl;
    char pad4[0x28];
    u32 unk2C;
    char pad30[0x8];
    u32 unk38;
    u32 unk3C;
    void func_001BF660();
};

struct S_001BF600_Stream {
    void func_00168C20(void *key, int def, void *dst);
};

extern char D_0028D8D4[];
extern char D_0028D8C4[];
extern char D_0028D8B0[];
extern char D_0028D89C[];

/* UIWidgetEventHandler::func_001BF540 (slot 23) */
struct S_001BF540_Event {
    int f0;
    int f4;
    int f8;
};

struct S_001BF540_Widget {
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
    virtual void v33(S_001BF540_Event *ev, int a, int idx, int key);
    char pad4[0x28];
    int f2C;
};

struct S_001BF540_Node {
    S_001BF540_Widget *widget;
    int active;
    S_001BF540_Node *next;
};

struct S_001BF540_List {
    S_001BF540_Node *head;
};

struct S_001BF540_Owner {
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
    virtual int v28(int idx, int key);
    char pad4[0x278];
    int f27C;
};

struct S_001BF540_Mid {
    char pad0[0x118];
    S_001BF540_Owner *f118;
};

struct C_001BF540 {
    char pad0[0x24];
    S_001BF540_Mid *f24;
    char pad28[4];
    S_001BF540_List **f2C;
    int func_00157BF0(S_001BF540_Event *ev, int a);
    int func_001BF540(S_001BF540_Event *ev, int a);
};

/* UIWidgetSoultreeCharacter */
extern int D_0028DA5C;
extern int D_0028D804;
void func_001E8390(void *p);

struct S_001BFEE0_Soultree {
    void func_0019AC50(void);
};

struct S_001BFEE0_Target {
    char pad0[4];
    S_001BFEE0_Soultree *f4;
    void func_001670C0(int a, int b, int c);
};

struct C_001BFEE0 {
    char pad0[0x68];
    S_001BFEE0_Target *f68;
    void func_00157A00(int a);
    void func_001BFEE0(int a);
};

struct C_001BFE80 {
    void *vtbl;
    char pad4[0x398];
    int f39C;
    void **f3A0;
    void func_00157660(void);
    void func_001BFE80(void);
};

struct C_001BF600 {
    char pad0[0x30];
    int f30;
    int f34;
    int f38;
    int f3C;
    C_001BF600 *func_001BF600(S_001BF600_Stream *stream);
};

struct C_001BF000 {
    char pad0[0x168];
    void *unk168;
    void func_00157920();
    void func_001BF000();
};


extern int D_0028D78C;
extern float D_00275544;
extern float D_002756B8;

struct S_Vec4i_001BF930 {
    int x, y, z, w;
};

struct S_Vec4f_001BFD00 {
    float x, y, z, w;
    S_Vec4f_001BFD00() {}
    S_Vec4f_001BFD00(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct S_001BF930_Inner {
    void func_00198E60(void);
    void func_0019ABA0(int a, int b);
};

struct S_001BF930_Node {
    int pad0;
    S_001BF930_Inner *f4;
    void func_00199600(S_Vec4i_001BF930 v);
    void func_00198F50(char *a, char *b, int c, int d, int e);
    void func_00199E30(S_Vec4f_001BFD00 v, float angle);
};

/* UIWidgetSoultree (layout shared with its Lightweight/Character siblings) */
struct C_001BF930 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x64];
    S_001BF930_Node *f68;
    S_Vec4i_001BF930 f6c;
    char f7c[0x10];
    char f8c[0x10];
    float f9C;
    float fA0;
    void func_001BF930(void);
    void func_001BFCB0(void);
    void func_001BF980(float dt);
    void func_001BFD00(float dt);
    void func_001BFF10(int a, int b);
};

struct S_001BF3C0_Node {
    void *unk0;
    S_001BF3C0_Node *unk4;
    S_001BF3C0_Node *unk8;
};

struct S_001BF3C0_List {
    S_001BF3C0_Node *head;
    S_001BF3C0_Node *tail;
};

void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_001BF3A0 {
    void *vtbl;
    char pad4[0x28];
    S_001BF3C0_List **unk2C;
    void *func_001BF3A0(int a0);
    void func_00157600(int a0);
};

struct C_001BF3C0 {
    void *vtbl;
    char pad4[0x28];
    S_001BF3C0_List **unk2C;
    void func_001BF3C0(void);
    void func_00157660(void);
};

struct C_001BF430 {
    char pad0[0x24];
    int unk24;
    int unk28;
    S_001BF3C0_List **unk2C;
    void *func_001BF430(int a0, int a1);
};

struct C_001BF490_Item {
    char pad0[0x44];
    int unk44[8];
};

struct C_001BF490 {
    char pad0[0x2C];
    S_001BF3C0_List **unk2C;
    void func_001BF490(C_001BF490_Item *a0);
};

extern int D_0028D8EC;

/* UIWidgetSoultree constructor */
struct C_001BF6F0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int arr44[8];
    int f64;
    int f68;
    float f6C, f70, f74, f78;
    float f7C, f80, f84, f88;
    float f8C, f90, f94, f98;
    int f9C;
    int fA0;
    void func_00157600(int a);
    C_001BF6F0 *func_001BF6F0(int a, int b);
};

extern int D_0028D9BC;
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

/* UIWidgetSoultreeLightweight */
struct C_001BFA70 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44[8];
    int f64;
    int f68;
    float f6C[4];
    float f7C[4];
    float f8C[4];
    int f9C;
    int fA0;
    void *func_001BFA70(int a0, int a1);
    void func_00157600(int a0);
};

/* UIWidgetSoultreeCharacter */
struct C_001BFDB0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44[8];
    int f64;
    int f68;
    float a6C[4];
    float a7C[4];
    float a8C[4];
    char pad9C[0x39C - 0x9C];
    int f39C;
    int f3A0;
    void *func_001BFDB0(int a0, int a1);
    void func_00157600(int a0);
};

extern char D_00275AD4[];
extern char D_00275AC8[];
extern char D_0027CEE4[];
extern char D_0028D9A8[];
extern char D_0028D998[];
extern char D_0028D984[];
extern int D_00284A98;
extern char D_00284A9C;

struct S_001BF7C0_Stream {
    void func_00168CB0(void *key, const S_Vec4f_001BFD00 &def, void *dst);
    void func_00168C50(void *key, int def, void *dst);
    int func_00168550(void *key, void *dst, int size);
};

struct S_001BF7C0_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(int a, int b, int c);
    S_001BF7C0_Obj *func_00143580(int a);
};

struct C_001BF7C0 {
    char pad0[0x28];
    int f28;
    char pad2C[0x3C];
    S_001BF7C0_Obj *f68;
    float f6C[4];
    float f7C[4];
    float f8C[4];
    int f9C;
    char padA0[4];
    char fA4[0x64];
    char f108[0x64];
    void func_001BF600(void *stream);
    void func_001577A0(void *a, int b);
    C_001BF7C0 *func_001BF7C0(int a0, int a1, S_001BF7C0_Stream *stream);
    C_001BF7C0 *func_001BFB40(int a0, int a1, S_001BF7C0_Stream *stream);
};

struct S_001BF220_Ctl {
    void func_001BE290(void);
};

struct S_001BF220_Slot {
    int f0;
    int f4;
};

struct S_001BF220_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(int a);
    void func_001D3B20(char *name);
};

/* UIPage slot 34 (shared by BmxUIPageIntroMovie/Demo/Main) */
struct C_001BF220 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    char pad4[0x138];
    int f13C;
    S_001BF220_Ctl **f140;
    S_001BF220_Slot **f144;
    char pad148[0x20];
    S_001BF220_Obj *f168;
    S_001BF220_Obj *f16C;
    char f170[0x104];
    int f274;
    int f278;
    void func_001BF220(void);
};

void C_001BEF90::func_001BEF90(int param_1)
{
  unk140[param_1]->func_001BDDE0(0);
  unk140[param_1]->func_001BDBD0();
}

void C_001BEFC0::func_001BEFC0(int param_1, int param_2)
{
  unk140[param_1]->unk2C[param_2 - 1]->func_001BDAB0(0);
  unk140[param_1]->unk2C[param_2 - 1]->func_001BDA20();
}

void C_001BF000::func_001BF000(void)
{
  if (unk168 != 0) {
    D_002EFDB8->v4(0, unk168, 0, 0);
  }
  func_00157920();
}

undefined4 C_001BF030::func_001BF030(void)
{
  int __stdcall func_001577A0(int, int);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x16c) != 0) {
    func_001577A0((int)(*(int *)(in_ECX + 0x16c)), (int)(0xffffffff));
    return 1;
  }
  return 0;
}

undefined4 C_001BF050::func_001BF050(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x140) + param_1 * 4) + 0x30);
}

undefined4 C_001BF070::func_001BF070(byte param_1)
{
  int func_001BE3F0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001BE3F0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_001BF090::func_001BF090(char *name, int a) {
    char buf[0x104];
    func_001ADCC0(buf, 0x104, D_00275678, D_002A63C8, name);
    if (unk168 != 0) {
        unk168->v2();
        unk168 = 0;
    }
    if (unk16c != 0) {
        unk16c->func_001D37C0();
        unk16c->func_00157810();
        unk16c->v2();
        unk16c = 0;
    }
    if (*name != '*') {
        if (func_001E8AF0(buf, D_0028762C)) {
            D_002EFDB8->f30 = 0;
            unk168 = (S_001BF090_Obj *)func_001D6E20(buf, 0x22b8, 0);
        }
        if (func_001E8AF0(buf, D_0028D774)) {
            D_002EFDB8->f30 = 0;
            unk168 = (S_001BF090_Obj *)func_001D6E20(buf, 0x22b8, 0);
        } else if (func_001E8AF0(buf, D_0027EF00)) {
            func_001ADCC0(unk170, 0x104, D_00276F28, buf);
            unk274 = a;
            if (unk278 != 0) {
                func_001BF030();
                if (unk16c != 0)
                    unk16c->func_001D3CC0(unk170);
            }
        }
        if (unk168 != 0 || unk170[0] != 0)
            return 1;
        return 0;
    }
    unk168 = 0;
    unk16c = 0;
    return 0;
}

void C_001BF220::func_001BF220(void)
{
    int i;
    char *name;

    v7();
    f278 = 1;
    f144[0]->f0 = -1;
    f144[0]->f4 = 0;
    f144[1]->f0 = -1;
    f144[1]->f4 = 0;
    f144[2]->f0 = -1;
    f144[2]->f4 = 0;
    f144[3]->f0 = -1;
    f144[3]->f4 = 0;
    f144[4]->f0 = -1;
    f144[4]->f4 = 0;
    f144[5]->f0 = -1;
    f144[5]->f4 = 0;
    f144[6]->f0 = -1;
    f144[6]->f4 = 0;
    f144[7]->f0 = -1;
    f144[7]->f4 = 0;
    for (i = 0; i <= f13C; i++) {
        if (f140[i] != 0) {
            f140[i]->func_001BE290();
        }
    }
    name = f170;
    if (name == f170 && f16C != 0) {
        f16C->v27(f274);
        f16C->func_001D3B20(name);
    }
    if (f168 == 0 && f16C == 0) {
        D_002EFDB8->f30 = 1;
    } else {
        D_002EFDB8->f30 = 0;
    }
}

void *C_001BF3A0::func_001BF3A0(int a0)
{
    func_00157600(a0);
    vtbl = (void *)&D_0028D78C;
    unk2C = 0;
    return this;
}

void C_001BF3C0::func_001BF3C0(void)
{
    vtbl = (void *)&D_0028D78C;
    int off = 0;
    do {
        S_001BF3C0_List *list = *(S_001BF3C0_List **)((char *)unk2C + off);
        S_001BF3C0_Node *node = list->head;
        while (node != 0) {
            S_001BF3C0_Node *cur = node;
            node = node->unk8;
            func_001E891B(cur);
        }
        func_001E891B(list);
        off += 4;
    } while (off < 0x20);
    func_001E891B(unk2C);
    unk2C = 0;
    func_00157660();
}

void *C_001BF430::func_001BF430(int a0, int a1)
{
    unk28 = a0;
    unk24 = a1;
    unk2C = (S_001BF3C0_List **)func_001E8A44(0x20);
    int off = 0;
    do {
        *(S_001BF3C0_List **)((char *)unk2C + off) = (S_001BF3C0_List *)func_001E8A44(8);
        (*(S_001BF3C0_List **)((char *)unk2C + off))->tail = 0;
        S_001BF3C0_List *list = *(S_001BF3C0_List **)((char *)unk2C + off);
        off += 4;
        list->head = 0;
    } while (off < 0x20);
    return this;
}

void C_001BF490::func_001BF490(C_001BF490_Item *a0)
{
    int off = 0;
    int * volatile flag = a0->unk44;
    do {
        if (*flag != 0) {
            S_001BF3C0_List *list = *(S_001BF3C0_List **)((char *)unk2C + off);
            if (list->head == 0) {
                S_001BF3C0_Node *node = (S_001BF3C0_Node *)func_001E8A44(0xc);
                list->head = node;
                node->unk0 = a0;
                node->unk8 = 0;
                node->unk4 = 0;
                list->tail = node;
            } else {
                list->tail->unk8 = (S_001BF3C0_Node *)func_001E8A44(0xc);
                S_001BF3C0_Node *node = list->tail->unk8;
                list->tail = node;
                node->unk0 = a0;
                list->tail->unk4 = 0;
                list->tail->unk8 = 0;
            }
        }
        off += 4;
        flag++;
    } while (off < 0x20);
}

undefined4 C_001BF520::func_001BF520(byte param_1)
{
  int func_001BF3C0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_001BF3C0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_001BF540::func_001BF540(S_001BF540_Event *ev, int a)
{
    S_001BF540_Owner *owner;
    S_001BF540_List *list;
    S_001BF540_Node *n;
    int idx;
    int key;

    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (ev->f4 == 2) {
        owner = f24->f118;
        idx = ev->f8;
        key = ev->f0;
        if (owner->f27C != 0 && owner->v28(idx, key) != 0) {
            list = f2C[idx];
            for (n = list->head; n != 0; n = n->next) {
                n->active = (n->widget->f2C != 0);
            }
            for (n = list->head; n != 0; n = n->next) {
                if (n->active != 0) {
                    n->widget->v33(ev, a, idx, key);
                }
            }
        }
    }
    return func_00157BF0(ev, a);
}

C_001BF600 *C_001BF600::func_001BF600(S_001BF600_Stream *stream)
{
    stream->func_00168C20(D_0028D8D4, 0, &f30);
    stream->func_00168C20(D_0028D8C4, 0, &f34);
    stream->func_00168C20(D_0028D8B0, 0, &f38);
    stream->func_00168C20(D_0028D89C, 0, &f3C);
    return this;
}

void C_001BF660::func_001BF660()
{
    unk2C = 0;
    if (!(unk38 && unk3C)) {
        if (unk38) {
            ((VCall8 *)this)->v7();
        }
        if (unk3C) {
            ((VCall8 *)this)->v5();
        }
    }
}

void C_001BF6A0::func_001BF6A0(void) {
    unk40 = 1;
}

void C_001BF6B0::func_001BF6B0(void)
{
  int* in_ECX = (int*)this;
  
                    
                    
  (**(code **)(*in_ECX + 0x1c))();
  return;
}

void C_001BF6C0::func_001BF6C0(int enable)
{
    if (enable != 0) {
        unk2C = 1;
        ((VCall8 *)this)->v7();
    } else {
        unk2C = 0;
        ((VCall8 *)this)->v5();
    }
}

C_001BF6F0 *C_001BF6F0::func_001BF6F0(int a, int b)
{
    int i;
    float *p;

    func_00157600(b);
    f24 = a;
    f2C = 0;
    f28 = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3C = 0;
    f40 = 0;
    for (i = 0; i < 8; i++) {
        arr44[i] = 0;
    }
    f64 = 0;
    vtbl = &D_0028D8EC;
    p = &f6C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    p = &f7C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    p = &f8C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    f68 = 0;
    p = &f6C;
    p[0] = 1.0f;
    p[1] = 1.0f;
    p[2] = 1.0f;
    p[3] = 1.0f;
    p = &f7C;
    p[3] = 1.0f;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p = &f8C;
    p[3] = 1.0f;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    f9C = 0;
    fA0 = 0;
    return this;
}

C_001BF7C0 *C_001BF7C0::func_001BF7C0(int a0, int a1, S_001BF7C0_Stream *stream)
{
    S_001BF7C0_Obj *obj;
    char *p;

    f28 = a0;
    ((C_001BF600 *)this)->func_001BF600((S_001BF600_Stream *)stream);
    stream->func_00168CB0(D_00275AD4, S_Vec4f_001BFD00(1.0f, 1.0f, 1.0f, 1.0f), f6C);
    stream->func_00168CB0(D_00275AC8, S_Vec4f_001BFD00(0.0f, 0.0f, 1.0f, 1.0f), f7C);
    stream->func_00168CB0(D_0027CEE4, S_Vec4f_001BFD00(0.0f, 0.0f, 1.0f, 1.0f), f8C);
    stream->func_00168C50(D_0028D9A8, 0, &f9C);
    p = fA4;
    if (stream->func_00168550(D_0028D998, p, 100) == 0) {
        *(int *)p = D_00284A98;
        p[4] = D_00284A9C;
    }
    p = f108;
    if (stream->func_00168550(D_0028D984, p, 100) == 0) {
        *(int *)p = D_00284A98;
        p[4] = D_00284A9C;
    }
    obj = (S_001BF7C0_Obj *)func_001E8A44(0x1e0);
    if (obj != 0) {
        obj = obj->func_00143580(1);
    } else {
        obj = 0;
    }
    f68 = obj;
    obj->v35(a1, 0, 0);
    func_001577A0(f68, -1);
    return this;
}

void C_001BF930::func_001BF930(void)
{
    v7();
    f68->func_00199600(f6c);
    f68->func_00198F50(f7c, f8c, 0, 1, 0);
}

void C_001BF930::func_001BF980(float dt)
{
    if (f9C != D_00275544) {
        fA0 = dt / (f9C * 6.2831855f) + fA0;
        if (fA0 > 6.2831855f) {
            fA0 = fA0 - 6.2831855f;
        }
        S_Vec4f_001BFD00 axis;
        axis.w = 1.0f;
        axis.z = 1.0f;
        axis.y = 0.0f;
        axis.x = 0.0f;
        if (f68 != 0) {
            f68->func_00199E30(axis, fA0);
        } else {
            f68->func_00199E30(axis, fA0);
        }
    }
}

void *C_001BFA70::func_001BFA70(int a0, int a1)
{
    float *p;

    func_00157600(a1);
    f24 = a0;
    f2C = 0;
    f28 = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3C = 0;
    f40 = 0;
    memset(f44, 0, sizeof(f44));
    f64 = 0;
    vtbl = (void *)&D_0028D9BC;
    p = f6C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    p = f7C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    p = f8C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    f68 = 0;
    p = f6C;
    p[0] = 1.0f;
    p[1] = 1.0f;
    p[2] = 1.0f;
    p[3] = 1.0f;
    p = f7C;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 1.0f;
    p = f8C;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 1.0f;
    fA0 = 0;
    f9C = 0;
    return this;
}

C_001BF7C0 *C_001BF7C0::func_001BFB40(int a0, int a1, S_001BF7C0_Stream *stream)
{
    S_001BF7C0_Obj *obj;
    void *mem;
    char *q;

    f28 = a0;
    func_001BF600(stream);
    stream->func_00168CB0(D_00275AD4, S_Vec4f_001BFD00(1.0f, 1.0f, 1.0f, 1.0f), f6C);
    stream->func_00168CB0(D_00275AC8, S_Vec4f_001BFD00(0.0f, 0.0f, 1.0f, 1.0f), f7C);
    stream->func_00168CB0(D_0027CEE4, S_Vec4f_001BFD00(0.0f, 0.0f, 1.0f, 1.0f), f8C);
    stream->func_00168C50(D_0028D9A8, 0, &f9C);
    q = fA4;
    if (stream->func_00168550(D_0028D998, q, 0x64) == 0) {
        *(int *)q = D_00284A98;
        q[4] = D_00284A9C;
    }
    q = f108;
    if (stream->func_00168550(D_0028D984, q, 0x64) == 0) {
        *(int *)q = D_00284A98;
        q[4] = D_00284A9C;
    }
    mem = func_001E8A44(0x1e0);
    if (mem != 0) {
        obj = ((S_001BF7C0_Obj *)mem)->func_00143580(1);
    } else {
        obj = 0;
    }
    f68 = obj;
    obj->v35(a1, 0, 0);
    func_001577A0(f68, 0);
    return this;
}

void C_001BF930::func_001BFCB0(void)
{
    v7();
    f68->func_00199600(f6c);
    f68->func_00198F50(f7c, f8c, 1, 0, 0);
}

void C_001BF930::func_001BFD00(float dt)
{
    if (f9C != D_00275544) {
        fA0 = dt / (f9C * 6.2831855f) + fA0;
        if (fA0 > 6.2831855f) {
            fA0 = fA0 - 6.2831855f;
        }
        if (f68 != 0) {
            f68->func_00199E30(S_Vec4f_001BFD00(0.0f, 0.0f, 1.0f, 1.0f), fA0);
        }
    }
}

void *C_001BFDB0::func_001BFDB0(int a0, int a1)
{
    float *p;

    func_00157600(a1);
    f24 = a0;
    f2C = 0;
    f28 = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3C = 0;
    f40 = 0;
    memset(f44, 0, sizeof(f44));
    f64 = 0;
    vtbl = (void *)&D_0028DA5C;
    p = a6C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    p = a7C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    p = a8C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    f68 = 0;
    p = a6C;
    p[0] = 1.0f;
    p[1] = 1.0f;
    p[2] = 1.0f;
    p[3] = 1.0f;
    p = a7C;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 1.0f;
    p = a8C;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 1.0f;
    f39C = 0;
    f3A0 = 0;
    return this;
}

void C_001BFE80::func_001BFE80(void)
{
    int i;

    vtbl = (void *)&D_0028DA5C;
    if (f39C > 0) {
        for (i = 0; i < f39C; i++) {
            func_001E8390(f3A0[i]);
        }
        func_001E8390(f3A0);
    }
    vtbl = (void *)&D_0028D804;
    func_00157660();
}

void C_001BFEE0::func_001BFEE0(int a)
{
    f68->func_001670C0(a, 0, 0);
    f68->f4->func_0019AC50();
    func_00157A00(a);
}

void C_001BF930::func_001BFF10(int a, int b)
{
    f68->f4->func_00198E60();
    f68->f4->func_0019ABA0(a, b);
}

