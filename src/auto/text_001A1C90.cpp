/* 23 functions from 0x001A1C90 to 0x001A2C00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_0028B45C;
extern int D_0028B3C4;
extern int D_0028B4F4;

struct S16_1A {
    int a;
    int b;
    int c;
    int d;
};

struct ObjV23 {
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
    virtual int v23(int a0, int a1, S16_1A s, int a2);
};

struct V4_1A {
    float x, y, z, w;
    V4_1A() {}
    V4_1A(float a, float b, float c) { x = a; y = b; z = c; w = 1.0f; }
    V4_1A(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
    V4_1A operator-(V4_1A o) const { return V4_1A(x - o.x, y - o.y, z - o.z); }
    V4_1A operator*(float s) const { return V4_1A(x * s, y * s, z * s); }
};

extern V4_1A D_002A9ECC;
extern float D_00275544;
extern float D_00275460;

struct Obj199_1A {
    void func_00199A70(int a0, V4_1A *out);
};

struct C_001A2060 {
    void *vtbl;
    char pad4[0x24];
    V4_1A unk28;
    char pad38[0x38];
    V4_1A unk70;
    V4_1A unk80;
    char pad90[0x8];
    u8 unk98;
    char pad99[0x123];
    void *unk1BC;
    Obj199_1A *unk1C0;
    Obj199_1A *unk1C4;
    void func_001A2060(float dt);
    void func_00157A00(float dt);
};

struct ObjV2 {
    virtual void v0();
    virtual void v1();
    virtual int v2();
};

struct C_001A1F70 {
    void *vtbl;
    char pad4[0x1BC];
    u32 unk1C0;
    u32 unk1C4;
    C_001A1F70 *func_001A1F70(int a0, int a1, int a2, int a3);
    void func_001A1680(int a0, int a1, int a2, int a3);
};

struct C_001A1C90 {
    char pad0[0x1BC];
    ObjV23 *unk1BC;
    int func_001A1C90(int a0, int a1, S16_1A s, int a2);
};

struct Obj198_1A {
    int func_00198330(int a0);
};

struct S36_1A {
    int f[9];
};

struct C_001A1FB0 {
    void *vtbl;
    char pad4[0x1BC];
    int unk1C0;
    int unk1C4;
    C_001A1FB0 *func_001A1FB0(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23);
    void func_001A1860(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21);
    C_001A1FB0 *func_001A1FB0(int a0, int a1, S36_1A s0, S16_1A s1, S16_1A s2, int a19, int a20, int a21, int a22, int a23);
    void func_001A1860(S36_1A s0, S16_1A s1, S16_1A s2, int a19, int a20, int a21, int a22, int a23);
};

struct C_001A1E60 {
    char pad0[0x1BC];
    ObjV2 *unk1BC;
    void func_001A1E60();
};


struct C_001A2500 {
    bool func_001A2500(void);
};

struct C_001A22E0 {
    char pad0[0x1C0];
    int unk1C0;
    void func_001A22E0(int a0);
};

struct C_001A2BD0 {
    void *vtbl;
    void func_00157660();
    void *func_001A2BD0(unsigned int flags);
};

struct C_001A2210 {
    void *vtbl;
    char pad4[0x1BC];
    u32 unk1C0;
    u32 unk1C4;
    C_001A2210 *func_001A2210(int a0, int a1, int a2, int a3);
    void func_001A1680(int a0, int a1, int a2, int a3);
};

struct C_001A2250 {
    void func_001A1860(S36_1A s0, S16_1A s1, S16_1A s2, int a18, int a19, int a20, int a21, int a22);
    void func_001A1D20(int a, int b);
    C_001A2250 *func_001A2250(int a0, S36_1A s0, S16_1A s1, S16_1A s2, int a18, int a19, int a20, int a21, int a22);
};

struct C_001A23F0 {
    void func_001A1860(S36_1A s0, S16_1A s1, S16_1A s2, int a17, int a18, int a19, int a20, int a21);
    C_001A23F0 *func_001A23F0(S36_1A s0, S16_1A s1, S16_1A s2, int a17, int a18, int a19, int a20, int a21);
};

extern int D_0028B58C;
void *func_001E8A44(int size);

struct S_30D0_Block {
    int count;
    void **items;
    int cap;
    int grow;
    u8 flag;
    char pad[3];
    void init(void)
    {
        items = 0;
        count = 0;
        cap = 0;
        grow = 0;
        flag &= 0xfe;
    }
    void alloc(void)
    {
        items = (void **)func_001E8A44(4);
        cap = 16;
        grow = 1;
        flag |= 1;
    }
};

struct C_001A2470 {
    char pad0[0x1c0];
    int f1c0;
    int func_001A2470(void);
};

struct Obj_001A2480 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int flags);
    virtual void v6();
    virtual int v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16(int a0, int a1, int a2);
    void func_001CB560(Obj_001A2480 *old);
};

struct S_0001CE80 {
    char pad0[0x5c];
    int f5c;
    int func_0001CE80(Obj_001A2480 *obj, void *a, void *b, int c, int d);
};

struct Game_001A2480 {
    int f0;
    S_0001CE80 *f4;
};

extern Game_001A2480 *D_002A8490;

struct C_001A2480 {
    char pad0[0x48];
    int f48;
    int f4c;
    char pad50[0x20];
    char f70[0x10];
    char f80[0x10];
    char pad90[0x1bc - 0x90];
    Obj_001A2480 *f1bc;
    char pad1c0[0x1ec - 0x1c0];
    int f1ec;
    void func_001A2480(Obj_001A2480 *obj, int a1, int a2);
};

struct S_001CBEF0 {
    int func_001CBEF0(void);
};

struct S_001A2510_Arg {
    char pad0[0xb4];
    S_001CBEF0 *fb4;
};

struct C_001A2510 {
    S_001A2510_Arg *f0;
    int f4;
    int func_001A14A0(int a);
    int func_001A14F0(int a);
    int func_001A1450(float a);
    int func_001A1410(void);
    int func_001A2510(S_001A2510_Arg *arg, int a1, int a2);
};

struct C_001A2580 {
    void *vtbl;
    char pad4[0x1bc];
    int f1c0;
    int f1c4;
    int f1c8;
    void *f1cc;
    int f1d0;
    int f1d4;
    u8 f1d8;
    char pad1d9[0x2d0 - 0x1d9];
    int f2d0;
    char pad2d4[4];
    int f2d8;
    void func_001A1680(int a0, int a1, int a2, int a3);
    C_001A2580 *func_001A2580(int a0, int a1, int a2, int a3);
};

struct Item_1A {
    Obj_001A2480 *obj;
    int f4;
    int f8;
};

struct ItemList_1A {
    int count;
    Item_1A **data;
    Item_1A *Get(int i) {
        if (count <= 0 || data == 0 || i >= count) {
            return 0;
        }
        return data[i];
    }
};

void func_001E891B(void *p);

struct C_001A2620 {
    void *vtbl;
    char pad4[0x1c4];
    ItemList_1A items;
    void func_00157660();
    void func_001A2620();
};

struct C_001A2A10 {
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
    virtual int v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    char pad4[0x44];
    int f48;
    int f4c;
    char pad50[0x20];
    char f70[0x10];
    char f80[0x10];
    char pad90[0x1a4 - 0x90];
    S_0001CE80 *f1a4;
    char pad1a8[0x1bc - 0x1a8];
    Obj_001A2480 *f1bc;
    char pad1c0[8];
    ItemList_1A items;
    char pad1d0[0x2d8 - 0x1d0];
    int f2d8;
    int func_001A2A10(int a0);
    int func_001A2AA0(int a0);
    int func_001A2B40(int a0);
};

struct ObjV5_22F0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
};

struct C_001A22F0 {
    char pad0[0x98];
    u8 f98;
    char pad99[0x1b4 - 0x99];
    int f1b4;
    char pad1b8[4];
    ObjV5_22F0 *f1bc;
    void func_001A22F0(void);
};

/* KeyFramedAnimSoundEmitter::func_001A2690 (per-frame update) */
extern float D_002A9ED0;
extern float D_002A9ED4;
extern float D_002A9ED8;


struct KfBase_1A2690 {
    char pad0[0x21];
    u8 flags;
};

/* animation object behind +0x2cc: virtual base carries the flag byte at +0x21 */
struct KfAnim_1A2690 : virtual KfBase_1A2690 {
    char pad4[0xC];
    int f10;
    char pad14[0x20];
    float f34;
};

struct KfEntry_1A2690 {
    int a;
    float t;
    int done;
};

struct KeyFramedAnimSoundEmitter_1A2690 {
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
    virtual int v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    char pad4[0x24];
    V4_1A f28;
    char pad38[0x10];
    int f48;
    int f4c;
    char pad50[0x20];
    V4_1A f70;
    V4_1A f80;
    char pad90[8];
    u8 f98;
    char pad99[0x1a4 - 0x99];
    S_0001CE80 *f1a4;
    char pad1a8[0x1bc - 0x1a8];
    Obj_001A2480 *f1bc;
    Obj199_1A *f1c0;
    Obj199_1A *f1c4;
    ItemList_1A items;
    char pad1d0[0x1dc - 0x1d0];
    KfEntry_1A2690 entries[20];
    KfAnim_1A2690 *f2cc;
    float f2d0;
    int f2d4;
    int f2d8;
    void func_001A1B60(Obj_001A2480 *obj);
    void func_00157A00(float dt);
    void func_001A2690(float dt);
};

/* sound handle: v22 at +0x58 */
struct Snd_001A1D20 {
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
    virtual void v22(int a, int b);
};

struct SndFactory_001A1D20 {
    Snd_001A1D20 *func_001CFE90(int a1, int a2, int a3, int a4, int a5, int a6);
};

struct SndHolder_001A1D20 {
    char pad0[0xb4];
    SndFactory_001A1D20 *fb4;
};

extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);

static __inline const int &MinRef_001A1D20(const int &a, const int &b) { return (b < a) ? b : a; }

/* object with a sound: v29 at +0x74, v30 at +0x78 */
struct C_001A1D20 {
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
    virtual void v29(void *a, void *b);
    virtual void v30(void *a);
    char pad4[0x20];
    int f24;
    char pad28[0x14];
    char f3c[0xc];
    int f48;
    int f4c;
    char pad50[0x20];
    char f70[0x10];
    char f80[0x10];
    char pad90[8];
    u32 f98;
    char f9c[0x104];
    u8 f1a0;
    char pad1a1[3];
    SndHolder_001A1D20 *f1a4;
    char pad1a8[0x14];
    Snd_001A1D20 *f1bc;
    int func_001A1D20(const char *name, int b);
};

int C_001A1C90::func_001A1C90(int a0, int a1, S16_1A s, int a2) {
    if (unk1BC == 0) {
        return 0;
    }
    return unk1BC->v23(a0, a1, s, a2);
}

int C_001A1D20::func_001A1D20(const char * volatile name, int b)
{
    struct { C_001A1D20 * volatile self; volatile int len; volatile int limit; volatile int cnt; } t;
    int n, flags, a, c;
    C_001A1D20 *p;
    t.self = this;
    if (((volatile C_001A1D20 *)this)->f1bc != 0 || (f1a0 & 1)) return 0;
    flags = 0;
    if (!(f1a0 & 8)) flags = 8;
    if (b != 0 || (f98 & 8)) flags |= 0x80;
    if (f98 & 0x20) flags |= 2; else flags |= 1;
    if (f98 & 4) flags |= 0x10;
    t.self->f1bc = f1a4->fb4->func_001CFE90(f24, (int)name, flags, 3, (int)f3c, 0);
    t.len = strlen(name);
    t.limit = 0x103;
    a = t.limit; c = t.len;
    t.cnt = a > c ? c : a;
    n = t.cnt;
    func_001E8920(t.self->f9c, name, n);
    *(volatile char *)(t.self->f9c + n) = 0;
    p = t.self;
    if (p->f1bc != 0) {
        if (p->f98 & 4) p->v30(p->f3c);
        else p->f1bc->v22(p->f48, p->f4c);
        p = t.self;
        p->v29(p->f70, p->f80);
        return 1;
    }
    return 0;
}

void C_001A1E60::func_001A1E60()
{
    ObjV2 **slot = &unk1BC;
    int zero = 0;
    int r = zero;
    ObjV2 *p = *slot;
    if ((int)p != zero) {
        r = p->v2();
    }
    *slot = (ObjV2 *)zero;
    if (r != zero) {
        return;
    }
    *slot = (ObjV2 *)zero;
}

extern "C" void __fastcall func_001A1E90(int *self)
{
    self[0x1b8 / 4] = 1;
}

C_001A1F70 *C_001A1F70::func_001A1F70(int a0, int a1, int a2, int a3) {
    func_001A1680(a0, a1, a2, a3);
    unk1C0 = 0;
    unk1C4 = 0;
    vtbl = &D_0028B45C;
    return this;
}

C_001A1FB0 *C_001A1FB0::func_001A1FB0(int a0, int a1, S36_1A s0, S16_1A s1, S16_1A s2, int a19, int a20, int a21, int a22, int a23) {
    func_001A1860(s0, s1, s2, a19, a20, a21, a22, a23);
    unk1C4 = a1;
    if (a1 != 0) {
        unk1C0 = ((Obj198_1A *)a1)->func_00198330(a0);
    } else {
        unk1C0 = 0;
    }
    return this;
}

void C_001A2060::func_001A2060(float dt)
{
    V4_1A v;
    v.x = *(float *)&D_002A9ECC;
    v.y = D_002A9ED0;
    v.z = D_002A9ED4;
    v.w = D_002A9ED8;
    if (unk1C0) {
        unk1C0->func_00199A70(0, &v);
    } else if (unk1C4) {
        unk1C4->func_00199A70(0, &v);
    } else {
        v = unk70;
    }
    unk28 = unk70;
    unk70 = v;
    V4_1A *cur = &unk70;
    V4_1A *prev = &unk28;
    if (unk1BC && !(unk98 & 2)) {
        V4_1A d;
        V4_1A o = *prev;
        d.x = cur->x - o.x;
        d.y = cur->y - o.y;
        d.w = o.w;
        d.z = cur->z - o.z;
        if (dt > D_00275544) {
            float inv = D_00275460 / dt;
            unk80 = V4_1A(d.x * inv, d.y * inv, d.z * inv, 1.0f);
        }
    }
    func_00157A00(dt);
}

C_001A2210 *C_001A2210::func_001A2210(int a0, int a1, int a2, int a3) {
    func_001A1680(a0, a1, a2, a3);
    unk1C0 = 0;
    unk1C4 = 0;
    vtbl = &D_0028B4F4;
    return this;
}

C_001A2250 *C_001A2250::func_001A2250(int a0, S36_1A s0, S16_1A s1, S16_1A s2, int a18, int a19, int a20, int a21, int a22) {
    func_001A1860(s0, s1, s2, a18, a19, a20, a21, a22);
    func_001A1D20(a0, 0);
    return this;
}

void C_001A22E0::func_001A22E0(int a0) {
    unk1C0 = a0;
}

#pragma optimize("g", off)
void C_001A22F0::func_001A22F0(void) {
    if (f1bc == 0)
        return;
    if (f98 & 8)
        f1b4 = 1;
    f1bc->v5(0);
}
#pragma optimize("", on)

C_001A23F0 *C_001A23F0::func_001A23F0(S36_1A s0, S16_1A s1, S16_1A s2, int a17, int a18, int a19, int a20, int a21) {
    func_001A1860(s0, s1, s2, a17, a18, a19, a20, a21);
    return this;
}

int C_001A2470::func_001A2470(void)
{
    f1c0 = 1;
    return 1;
}

void C_001A2480::func_001A2480(Obj_001A2480 *obj, int a1, int a2)
{
    int flags;

    if (obj != 0 && f1bc != obj) {
        obj->func_001CB560(f1bc);
    }
    f1bc = obj;
    flags = 0;
    if (a1 != 0) {
        flags = 1;
    }
    if (a2 != 0) {
        flags |= 2;
    }
    if (f1ec != 0) {
        D_002A8490->f4->func_0001CE80(obj, f70, f80, f48, f4c);
        flags |= 4;
    }
    obj->v5(flags);
}

bool C_001A2500::func_001A2500(void)
{
  int in_ECX = (int)this;
  
  return 0 < *(int *)(in_ECX + 0x1d8);
}

int C_001A2510::func_001A2510(S_001A2510_Arg *arg, int a1, int a2)
{
    if (arg != 0) {
        while (1) {
            f0 = arg;
            f4 = arg->fb4->func_001CBEF0();
            if (f4 == 0)
                break;
            if (func_001A14A0(a1) == 0)
                break;
            if (func_001A14F0(a2) == 0)
                break;
            if (func_001A1450(0.3048f) == 0)
                break;
            return func_001A1410() != 0;
        }
    }
    return 0;
}

C_001A2580 *C_001A2580::func_001A2580(int a0, int a1, int a2, int a3)
{
    S_30D0_Block *blk = (S_30D0_Block *)&f1c8;
    func_001A1680(a0, a1, a2, a3);
    f1c0 = 0;
    f1c4 = 0;
    vtbl = &D_0028B58C;
    blk->init();
    blk->alloc();
    f2d0 = 0;
    f2d8 = 1;
    return this;
}

void C_001A2620::func_001A2620()
{
    int i;

    vtbl = &D_0028B58C;
    for (i = 0; i < items.count; i++) {
        func_001E891B(items.Get(i));
    }
    func_001E891B(items.data);
    vtbl = &D_0028B3C4;
    func_00157660();
}

void KeyFramedAnimSoundEmitter_1A2690::func_001A2690(float dt)
{
    V4_1A d;
    int i;
    Item_1A *item;
    float t;
    KfAnim_1A2690 *anim;
    V4_1A *cur;
    V4_1A *prev;

    {
        V4_1A o;
        {
            V4_1A v;
            v.x = *(float *)&D_002A9ECC;
            v.y = D_002A9ED0;
            v.z = D_002A9ED4;
            v.w = D_002A9ED8;
            if (f1c0) {
                f1c0->func_00199A70(0, &v);
            } else if (f1c4) {
                f1c4->func_00199A70(0, &v);
            } else {
                v = f70;
            }
            cur = &f70;
            prev = &f28;
            *prev = *cur;
            *cur = v;
        }
        if (!(f98 & 2)) {
            o = *prev;
            d.x = cur->x - o.x;
            d.y = cur->y - o.y;
            d.z = cur->z - o.z;
            d.w = o.w;
            if (dt > D_00275544) {
                float inv = D_00275460 / dt;
                o.x = d.x * inv;
                o.y = d.y * inv;
                o.z = d.z * inv;
                o.w = 1.0f;
                f80 = o;
            }
        }
    }
    if (f2d8 != 0 && f1a4->f5c != 0) {
        anim = f2cc;
        if (anim != 0 && (anim->flags & 1) && anim->f10 == 0) {
            t = anim->f34;
            if (t < f2d0) {
                for (i = 0; i < f2d4; i++) {
                    entries[i].done = 0;
                }
            }
            for (i = 0; i < f2d4; i++) {
                if (entries[i].t < t && entries[i].done == 0) {
                    item = items.Get(entries[i].a - 1);
                    if (item->f8 != 0) {
                        if (v27() != 0) {
                            v33();
                        }
                        func_001A1B60(item->obj);
                        entries[i].done = 1;
                    } else if (f1bc != 0 && f1bc->v7() != 0) {
                        if (f1a4->func_0001CE80(item->obj, &f70, &f80, f48, f4c) != 0) {
                            item->obj->v5(4);
                        }
                        entries[i].done = 1;
                    }
                }
            }
            f2d0 = t;
        } else {
            if (f1bc != 0 && v27() != 0) {
                v33();
            }
        }
    }
    for (i = 0; i < items.count; i++) {
        item = items.Get(i);
        if (item->f4 == 0 && item->obj->v7() != 0) {
            f1a4->func_0001CE80(item->obj, &f70, &f80, f48, f4c);
        }
    }
    func_00157A00(dt);
}

int C_001A2A10::func_001A2A10(int a0)
{
    Item_1A *item;
    Obj_001A2480 *o;

    f2d8 = 0;
    if (v27() != 0) {
        f1bc->v16(0, 0x5dc, 0);
        v33();
    }
    item = items.Get(a0 - 1);
    if (item->f8 != 0) {
        o = item->obj;
        if (o != 0 && f1bc != o) {
            o->func_001CB560(f1bc);
        }
        f1bc = o;
        return 1;
    }
    return 0;
}

int C_001A2A10::func_001A2AA0(int a0)
{
    Item_1A *item;
    Obj_001A2480 *o;

    if (a0 > items.count) {
        return 0;
    }
    item = items.Get(a0 - 1);
    if (item->f8 == 0) {
        return 0;
    }
    if (v27() != 0) {
        f1bc->v16(0, 0x5dc, 0);
    }
    o = item->obj;
    if (o != 0 && f1bc != o) {
        o->func_001CB560(f1bc);
    }
    f1bc = o;
    v33();
    return 1;
}

int C_001A2A10::func_001A2B40(int a0)
{
    Item_1A *item;

    if (f1a4->f5c == 0) {
        return 0;
    }
    if (a0 <= items.count) {
        item = items.Get(a0 - 1);
        if (item->f8 == 0) {
            if (f1a4->func_0001CE80(item->obj, f70, f80, f48, f4c) != 0) {
                item->obj->v5(4);
                return 1;
            }
        }
    }
    return 0;
}

void *C_001A2BD0::func_001A2BD0(unsigned int flags)
{
    void func_001E891B(void *);

    vtbl = (void *)&D_0028B3C4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

