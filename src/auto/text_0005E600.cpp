/* 13 functions from 0x0005E600 to 0x0005F3C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
extern "C" void *memset(void *dst, int c, unsigned int n);
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
extern int D_00278484;
extern int D_002A1CB0;
extern int D_002A1CB4;
extern int D_002A1CB8;
extern int D_002A1CBC;

struct C_0005E600 {
    int w[0x38];
    void func_00157600(int a0);
    C_0005E600 *func_0005E600(int a0);
};

struct C_0005E9D0 {
    void func_0005E9D0(float param_1);
};

struct C_0005E9F0 {
    void func_0005E9F0(int param_1);
};

void func_001E891B(void *p);

static inline const int &imin(const int &a, const int &b) { return b < a ? b : a; }

extern "C" unsigned int strlen(const char *s);
extern "C" int strcmp(const char *a, const char *b);
char *func_001E8920(char *dst, const char *src, int n);

extern int D_0027850C;
extern int D_0027857C;

struct C_0005ECA0 {
    void *vtbl;
    char pad4[0x14];
    int unk18;
    char pad1C[8];
    int unk24[8];
    int unk44[8];
    int unk64[8];
    int unk84[4];
    int unk94[2];
    char pad9C[0xAC - 0x9C];
    int unkAC[5];
    int unkC0[5];
    int unkD4[2];
    int unkDC[2];
    int unkE4[2];
    int unkEC;
    int unkF0;
    int unkF4;
    int unkF8;
    int unkFC;
    int unk100;
    int unk104;
    int unk108;
    int unk10C;
    int unk110;
    int unk114;
    int unk118;
    int unk11C;
    int unk120;
    int unk124;
    char pad128[4];
    int unk12C;
    int unk130;
    void func_00157600(int a0);
    C_0005ECA0 *func_0005ECA0(int a0);
};

struct C_0005E840 {
    char *unk0;
    char pad4[0x4A];
    u8 unk4e;
    u8 unk4f;
    u8 unk50;
    void func_0005E840(const char *name);
};

struct C_0005E790 {
    int unk0;
    void func_00157660(void);
    void *func_0005E790(int flags);
};

struct C_0005E7C0 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x4c];
    unsigned char f58;
    void func_0005E7C0(float param_1, float param_2);
};

struct C_0005E800 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x4c];
    unsigned char f58;
    void func_0005E800(int param_1, int param_2);
};

struct C_0005E960 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x42];
    unsigned char f4e;
    void func_0005E960(int param_1, int param_2);
};

union U_0005E9A0_Color {
    unsigned int raw;
    struct {
        unsigned int lo : 24;
        unsigned int hi : 8;
    } b;
};

struct C_0005E9A0 {
    char pad0[0x48];
    U_0005E9A0_Color f48;
    char pad4c[2];
    unsigned char f4e;
    void func_0005E9A0(unsigned int param_1);
};

struct C_0005E920 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x42];
    unsigned char f4e;
    void func_0005E920(float param_1, float param_2);
};

struct C_5EA10_Pos {
    char pad0[0x24];
    float f24;
};

struct C_5EA10_Rider {
    char pad0[0x9E8];
    C_5EA10_Pos *f9E8;
    C_5EA10_Pos *f9EC;
};

struct C_5EA10_Riders {
    char pad0[0x1A8];
    C_5EA10_Rider *f1A8[8];
};

struct C_5EA10_Game {
    char pad0[0x4E0];
    C_5EA10_Riders *f4E0;
};

struct C_5EA10_Players {
    char pad0[0x64];
    C_5EA10_Game *f64;
    char pad68[0x90 - 0x68];
    int f90;
};

struct C_5EA10_Mode {
    char pad0[4];
    int f4;
    char pad8[0x300 - 8];
    int f300[8];
};

struct C_5EA10_Pad {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual int v44();
};

struct C_5EA10_Event {
    int f0;
    int type;
    int pad;
    int one;
    int flags;
};

struct C_5EA10_Params {
    int one;
    float scale;
    int z[4];
};

struct C_00135D30 {
    void func_00135D30(int dir, C_5EA10_Event *ev, int pad);
};

struct C_5EA10_Input {
    char pad0[0x14];
    C_5EA10_Pad *f14[8];
    char pad34[0xCC0 - 0x34];
    C_00135D30 *fCC0;
};

struct C_5ED_Data {
    char pad0[0xAC8];
    int fAC8;
    char padACC[0xE98 - 0xACC];
    int fE98;
    char padE9C[0xFC0 - 0xE9C];
    int fFC0;
};

struct C_5ED_Sub {
    char pad0[4];
    C_5ED_Data *f4;
};

struct C_5ED_Lookup {
    int *func_0018C160(int id);
    void func_0018C780(int count, int *names, int flags);
};

struct C_5EA10_Root {
    char pad0[8];
    C_5EA10_Input *f8;
    char padC[0x2A4 - 0xC];
    C_5EA10_Players *f2A4;
    char pad2A8[0x2E0 - 0x2A8];
    C_5EA10_Mode *f2E0;
    char pad2E4[4];
    C_5ED_Sub *f2E8;
    C_5ED_Lookup *f2EC;
};

struct C_5EA10_Cam {
    char pad0[0x40];
    float f40;
    float f44;
};

struct C_5EA10_World {
    char pad0[0x4E4];
    C_5EA10_Cam *f4E4;
};

extern C_5EA10_Root *D_002A8490;
extern C_5EA10_World *D_002B9120;
extern float D_00275544;
extern float D_00277FBC;
extern float D_002755E8;

struct BmxMenu {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4C();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5C(C_5EA10_Event *ev, C_5EA10_Params *p);
    char pad4[0x20];
    float f24[8];
    float f44[8];
    void func_00157A00(int a0);
    void func_0005EA10(int a0);
};

/* image widget (0x64 bytes) */
struct Img_5ED {
    char pad0[4];
    char pad4[0x24];
    int width;
    int height;
    char pad30[8];
    union {
        unsigned int color;
        struct {
            unsigned int lo : 24;
            unsigned int hi : 8;
        } cb;
    };
    float a, b, c, d;
    float w, h;
    char pad54[4];
    unsigned char flags;
    Img_5ED *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
};

/* text widget (0x60 bytes) */
struct Txt_5ED {
    int pad0, x, y;
    char padC[0x38];
    int align;
    unsigned int color;
    char pad4c[2];
    unsigned char flags;
    Txt_5ED *func_001D5E90();
    void func_001D5FA0(int font, char *name, int size, int z);
    void func_0005E840(int str);
};

extern "C" void *func_001E8A44(unsigned int size);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" char *strcpy(char *dst, const char *src);
extern char D_002786A0[], D_00278690[], D_00278678[], D_00278658[], D_00278648[], D_00278638[], D_00278624[], D_00278608[], D_00278600[];
extern char D_002A60B0[], D_002A5FA8[], D_002A5870[], D_00275678[];
struct Path17_5ED { char c[17]; };
extern Path17_5ED D_00278664;
extern int D_0028F5E0;
extern float D_00278650;

static __forceinline void pos5ED(Txt_5ED *p, int x, int y) { if (p->x != x || p->y != y) { p->y = y; p->x = x; p->flags |= 6; } }
static __forceinline void align5ED(Txt_5ED *p, int a) { if (p->align != a) { p->align = a; p->flags |= 6; } }
static __forceinline void color5ED(Txt_5ED *p, unsigned int c) { if (p->color != c) { p->flags |= 8; p->color = (p->color & (c | 0xff000000)) | (c & 0xffffff); } }
static __forceinline void uv5ED(Img_5ED *p) { float a = 127.0f * p->w; p->flags |= 4; p->a = a; p->b = 0.0f * p->w; p->c = 15.0f * p->h; p->d = 0.0f * p->h; }
static __forceinline void width5ED(Img_5ED *p, int v) { if (p->width != v) { p->width = v; p->flags |= 1; } }
static __forceinline void height5ED(Img_5ED *p, int v) { if (p->height != v) { p->height = v; p->flags |= 1; } }

/* in-game menu (BmxInGameMenu): builds its widgets */
struct C_0005EDC0 {
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
    char pad4[0x94 - 4];
    Img_5ED *unk94;
    Img_5ED *unk98;
    char pad9C[0x10];
    Img_5ED *unkAC[5];
    Img_5ED *unkC0[5];
    Img_5ED *unkD4;
    Img_5ED *unkD8;
    Img_5ED *unkDC;
    Img_5ED *unkE0;
    char padE4[8];
    Txt_5ED *unkEC;
    char padF0[0x14];
    void *unk104;
    char pad108[4];
    Img_5ED *unk10C;
    char pad110[0x14];
    Txt_5ED *unk124;
    C_0005EDC0 *func_0005EDC0(void *a0);
};

C_0005E600 *C_0005E600::func_0005E600(int a0)
{
    int *p;
    int i;

    func_00157600(a0);
    w[0] = (int)&D_00278484;
    p = &w[14]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &w[18]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &w[22]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &w[26]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &w[32];
    i = 4;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--i != 0);
    w[55] = 0x3f800000;
    w[54] = 0;
    w[53] = 0;
    w[52] = 0;
    w[9] = 0;
    w[10] = 1;
    w[11] = 0;
    w[12] = 0;
    w[13] = 0;
    w[14] = D_002A1CB0;
    w[15] = D_002A1CB4;
    w[16] = D_002A1CB8;
    w[17] = D_002A1CBC;
    w[18] = D_002A1CB0;
    w[19] = D_002A1CB4;
    w[20] = D_002A1CB8;
    w[21] = D_002A1CBC;
    w[22] = D_002A1CB0;
    w[23] = D_002A1CB4;
    w[24] = D_002A1CB8;
    w[25] = D_002A1CBC;
    w[26] = D_002A1CB0;
    w[27] = D_002A1CB4;
    w[28] = D_002A1CB8;
    w[29] = D_002A1CBC;
    w[30] = 0;
    w[31] = 0;
    memset(&w[32], 0, 0x40);
    w[48] = 0x3f800000;
    w[49] = 0x3f800000;
    w[50] = 0;
    w[51] = 0x424d5518;
    w[52] = D_002A1CB0;
    w[53] = D_002A1CB4;
    w[54] = D_002A1CB8;
    w[55] = D_002A1CBC;
    return this;
}

void *C_0005E790::func_0005E790(int flags)
{
    extern int D_00278484;
    unk0 = (int)&D_00278484;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0005E7C0::func_0005E7C0(float param_1, float param_2)
{
    if (f4 != param_1 || f8 != param_2) {
        f4 = param_1;
        f8 = param_2;
        f58 |= 1;
    }
}

void C_0005E800::func_0005E800(int param_1, int param_2)
{
    float f2 = (float)param_2;
    float f1 = (float)param_1;
    if (f4 == f1 && f8 == f2) {
        return;
    }
    f4 = f1;
    f8 = f2;
    f58 |= 1;
}

void C_0005E840::func_0005E840(const char *name)
{
    int len = strlen(name);

    if (unk50 == len && strcmp(unk0, name) == 0) {
        return;
    }
    int maxlen = unk4f;
    int n = AsmMinI(len, maxlen);
    unk50 = n;
    func_001E8920(unk0, name, unk50);
    unk0[unk50] = 0;
    unk4e |= 2;
    unk4e |= 4;
    unk4e |= 1;
    unk4e |= 8;
}

void C_0005E920::func_0005E920(float param_1, float param_2)
{
    if (f4 != param_1 || f8 != param_2) {
        f4 = param_1;
        f8 = param_2;
        f4e |= 6;
    }
}

void C_0005E960::func_0005E960(int param_1, int param_2)
{
    float f2 = (float)param_2;
    float f1 = (float)param_1;
    if (f4 == f1 && f8 == f2) {
        return;
    }
    f4 = f1;
    f8 = f2;
    f4e |= 6;
}

void C_0005E9A0::func_0005E9A0(unsigned int param_1)
{
    if (f48.raw != param_1) {
        f4e |= 8;
        f48.b.lo = param_1;
    }
}

void C_0005E9D0::func_0005E9D0(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x34) != param_1) {
    *(float *)(in_ECX + 0x34) = param_1;
    *(byte *)(in_ECX + 0x4e) = *(byte *)(in_ECX + 0x4e) | 6;
  }
  return;
}

void C_0005E9F0::func_0005E9F0(int param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x44) != param_1) {
    *(int *)(in_ECX + 0x44) = param_1;
    *(byte *)(in_ECX + 0x4e) = *(byte *)(in_ECX + 0x4e) | 6;
  }
  return;
}

void BmxMenu::func_0005EA10(int a0)
{
    int used[4];
    C_5EA10_Event ev;
    C_5EA10_Params params;
    int i;
    int moved;
    float x;
    float y;
    int pad;
    C_5EA10_Root *root;

    used[0] = 0;
    used[1] = 0;
    used[2] = 0;
    used[3] = 0;
    for (i = 0; root = D_002A8490, i < root->f2A4->f90; i++) {
        C_5EA10_Mode *mode = root->f2E0;
        if (mode->f4 == 10) {
            x = D_002B9120->f4E4->f44;
            y = D_002B9120->f4E4->f40;
        } else {
            C_5EA10_Rider *r = D_002A8490->f2A4->f64->f4E0->f1A8[i];
            x = r->f9E8->f24;
            y = r->f9EC->f24;
        }
        pad = mode->f300[i];
        moved = 0;
        if (root->f8->f14[pad]->v44() != 0) {
            int *u = &used[pad];
            if (*u == 0) {
                if (x < D_00275544) {
                    if (x <= D_00277FBC && f24[i] > D_00277FBC) {
                        D_002A8490->f8->fCC0->func_00135D30(0, &ev, pad);
                        moved = 1;
                    }
                } else if (x >= D_002755E8 && f24[i] < D_002755E8) {
                    D_002A8490->f8->fCC0->func_00135D30(1, &ev, pad);
                    moved = 1;
                }
                if (y < D_00275544) {
                    if (y <= D_00277FBC && f44[i] > D_00277FBC) {
                        D_002A8490->f8->fCC0->func_00135D30(2, &ev, pad);
                        moved = 1;
                    }
                } else if (y >= D_002755E8 && f44[i] < D_002755E8) {
                    D_002A8490->f8->fCC0->func_00135D30(3, &ev, pad);
                    moved = 1;
                }
                if (moved) {
                    ev.one = 1;
                    params.one = 1;
                    ev.type = 2;
                    ev.pad = pad;
                    ev.flags = 0x80000000;
                    params.scale = 1.0f;
                    params.z[0] = 0;
                    params.z[1] = 0;
                    params.z[2] = 0;
                    params.z[3] = 0;
                    v5C(&ev, &params);
                }
                *u = 1;
                f24[i] = x;
                f44[i] = y;
            }
        }
    }
    func_00157A00(a0);
}

C_0005ECA0 *C_0005ECA0::func_0005ECA0(int a0)
{
    int i;

    func_00157600(a0);
    vtbl = &D_0027850C;
    for (i = 0; i < 8; i++) {
        unk24[i] = 0;
        unk44[i] = 0;
    }
    vtbl = &D_0027857C;
    unkFC = 0;
    unk100 = 0;
    unk18 = -1;
    for (i = 0; i < 2; i++) {
        unkE4[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        unk84[i] = 0;
    }
    unk104 = 0;
    unk108 = 1;
    for (i = 0; i < 2; i++) {
        unk94[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        unkD4[i] = 0;
        unkDC[i] = 0;
    }
    unkF4 = 0;
    unkF0 = 0;
    unk10C = 0;
    unk110 = 0;
    unk114 = -1;
    unk11C = -1;
    unk118 = 0;
    for (i = 0; i < 5; i++) {
        unkAC[i] = 0;
        unkC0[i] = 0;
    }
    for (i = 0; i < 8; i++) {
        unk64[i] = 0;
    }
    unkEC = 0;
    unk124 = 0;
    unk120 = 0;
    unkF8 = 0;
    unk12C = 0;
    unk130 = 1;
    return this;
}

C_0005EDC0 *C_0005EDC0::func_0005EDC0(void *a0)
{
    int ids[3];
    int *r;
    int font1;
    int font2;
    int i;
    Img_5ED *o;
    Txt_5ED *t;
    C_5ED_Data *d;
    int mode;

    unk104 = a0;
    ids[0] = (int)D_002786A0;
    ids[1] = (int)D_00278690;
    ids[2] = (int)D_00278678;
    D_002A8490->f2EC->func_0018C780(3, ids, 0);
    D_002A8490->f2EC->func_0018C160((int)D_002786A0);
    r = D_002A8490->f2EC->func_0018C160((int)D_00278690);
    font1 = r ? *r : 0;
    r = D_002A8490->f2EC->func_0018C160((int)D_00278678);
    font2 = r ? *r : 0;
    memcpy(D_002A60B0, "global\\textures\\", 17);

    o = (Img_5ED *)func_001E8A44(0x64);
    unk94 = o ? o->func_001D5760() : 0;
    unk94->func_001D5810(D_00278658, 0, 0, 0);
    uv5ED(unk94);
    width5ED(unk94, 0x44200000);
    height5ED(unk94, 0x42480000);

    o = (Img_5ED *)func_001E8A44(0x64);
    unk98 = o ? o->func_001D5760() : 0;
    unk98->func_001D5810(D_00278658, 0, 398.0f, 0);
    width5ED(unk98, 0x44200000);
    height5ED(unk98, 0x42480000);
    uv5ED(unk98);

    for (i = 0; i < 5; i++) {
        float x;
        Img_5ED *n;
        o = (Img_5ED *)func_001E8A44(0x64);
        n = o ? o->func_001D5760() : 0;
        x = i * D_00278650;
        unkAC[i] = n;
        n->func_001D5810(D_00278658, x, 50.0f, 0);
        o = (Img_5ED *)func_001E8A44(0x64);
        unkC0[i] = o ? o->func_001D5760() : 0;
        unkC0[i]->func_001D5810(D_00278658, x, 366.0f, 0);
        o = unkC0[i];
        o->a = 0;
        o->b = 1.0f;
        o->c = 1.0f;
        o->d = 0;
        o->flags |= 4;
    }

    t = (Txt_5ED *)func_001E8A44(0x60);
    unkEC = t ? t->func_001D5E90() : 0;
    unkEC->func_001D5FA0(font2, D_00278678, 0x32, 0);
    pos5ED(unkEC, 0x43a00000, 0x42200000);
    color5ED(unkEC, 0xaaaaaaaa);
    align5ED(unkEC, D_0028F5E0);
    unkEC->func_0005E840(D_002A8490->f2E8->f4->fE98);

    t = (Txt_5ED *)func_001E8A44(0x60);
    unk124 = t ? t->func_001D5E90() : 0;
    unk124->func_001D5FA0(font1, D_00278690, 0x28, 0);
    pos5ED(unk124, 0x43a00000, 0x42ea0000);
    align5ED(unk124, D_0028F5E0);
    color5ED(unk124, 0xffcccccc);
    mode = D_002A8490->f2E0->f4;
    d = D_002A8490->f2E8->f4;
    unk124->func_0005E840(mode == 0 ? d->fFC0 : d->fAC8);

    o = (Img_5ED *)func_001E8A44(0x64);
    unkD4 = o ? o->func_001D5760() : 0;
    unkD4->func_001D5810(D_00278648, 491.0f, 388.0f, 0);

    o = (Img_5ED *)func_001E8A44(0x64);
    unkD8 = o ? o->func_001D5760() : 0;
    unkD8->func_001D5810(D_00278638, 370.0f, 388.0f, 0);

    o = (Img_5ED *)func_001E8A44(0x64);
    unkDC = o ? o->func_001D5760() : 0;
    unkDC->func_001D5810(D_00278624, 491.0f, 388.0f, 0);

    o = (Img_5ED *)func_001E8A44(0x64);
    unkE0 = o ? o->func_001D5760() : 0;
    unkE0->func_001D5810(D_00278608, 370.0f, 388.0f, 0);

    o = (Img_5ED *)func_001E8A44(0x64);
    unk10C = o ? o->func_001D5760() : 0;
    unk10C->func_001D5810(D_00278600, 0, 0, 0);
    {
        Img_5ED *p = unk10C;
        unsigned int c = p->color;
        p->flags |= 2;
        p->color = c & 0xff000000;
    }
    {
        Img_5ED *p = unk10C;
        unsigned char fl = p->flags;
        fl |= 2;
        *((unsigned char *)&p->color + 3) = 0x80;
        p->flags = fl;
    }
    height5ED(unk10C, 0x43e00000);
    width5ED(unk10C, 0x44200000);

    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    v27();
    return this;
}

