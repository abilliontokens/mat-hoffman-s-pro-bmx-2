/* 18 functions from 0x001BC310 to 0x001BD080, found by Ghidra. */
#include "common.h"

extern int D_0028D334;
extern int D_0028D3B4;
extern int D_0028D44C;
extern "C" void *memset(void *dst, int c, unsigned int n);

void func_001E8390(void *p);
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct S_001BCC90_A84 {
    char pad0[0x230];
    u8 flags230;
};

extern S_001BCC90_A84 *D_002A8490;

struct S_001BCC90_F670 {
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
    virtual void vf32();
};

extern S_001BCC90_F670 *D_002F0670;

struct C_001BCC90 {
    void *vtbl;
    char pad4[0x20];
    void *f24;
    C_001BCC90 *func_001BCC90(void *param_1);
};

struct S_001BCC40_F7B8 {
    char pad0[8];
    u32 f8;
};

extern S_001BCC40_F7B8 *D_002F07B8;

struct C_001BCC40 {
    void *vtbl;
    char pad4[0x10C];
    void *f110;
    char pad114[0xC];
    void *f120;
    void func_001BCC40();
    void func_00157660();
};

struct C_00149380 {
    void func_00149380();
};

struct C_UIGlobalManagerVT {
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
    virtual void *vf28(void *a, void *b);
};

struct S_001BC710_PageObj {
    virtual void destroy(int flags);
};

extern S_001BC710_PageObj *D_002F0630;

struct S_001BC810_D8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void vf7(int a);
    virtual void vf8();
};

extern S_001BC810_D8 *D_002EFDB8;

struct S_001BC810_Item {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    char pad4[0x40];
    int f44[8];
};

/* local scratch parser object built on the stack (size 0x4cc) */
struct C_00168280 {
    char data[0x4cc];
    C_00168280 *func_00168280(void);
    int func_00169490(char *name, int flag);
    int func_00169710(char *name);
    int func_00168C20(char *key, int def, void *dst);
    void func_001691E0(void);
};

extern char D_0027A604[];
extern char D_0027D8B0[];
extern char D_00276310[];
extern char D_0027D898[];
extern char D_0027D884[];
extern char D_0027D880[];
extern char D_002A46E8[];
extern char D_00275678[];

struct C_001BC870_Tbl {
    void func_00169710(void *name);
    void func_00168550(char *key, char *dst, int size);
};

struct C_001BC870_A {
    C_001BC870_A *func_001BF6F0(int a, int b);
    void *func_001BF7C0(int a, char *name, C_001BC870_Tbl *t);
};

struct C_001BC870_B {
    C_001BC870_B *func_001BFA70(int a, int b);
    void *func_001BFB40(int a, char *name, C_001BC870_Tbl *t);
};

struct C_001BC870_C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37();
    virtual void *vf38(int a, char *name, C_001BC870_Tbl *t);
    C_001BC870_C *func_001BFDB0(int a, int b);
};

struct C_001BC870 {
    void *func_001BC870(C_001BC870_Tbl *t, void *name);
    void *func_001577A0(void *child, int b);
};

extern char D_0028D42C[];
extern char D_002769F8[];
extern char D_0027D8FC[];
extern char D_0027D8F0[];
extern char D_0027D8D8[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8AA5(unsigned int size);

struct S_001BC710_F24 {
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
    void func_00157810();
};

/* UIGlobalManager */
struct C_UIGlobalManager {
    void *vtbl;
    char pad4[0x20];
    S_001BC710_F24 *f24;
    int f28;
    S_001BC810_Item **f2C;
    int func_001BC7F0(void *a);
    C_UIGlobalManager *func_001BC770(void *param);
    void func_001BC7A0();
    void func_001BC810();
    void *func_001BCA30(unsigned int flags);
    void *func_001BCBE0(void *a1, void *a2, int a3);
    int func_001BCA90();
    S_001BC810_Item *func_001BC870(C_00168280 *parser, char *name);
    void func_00157660();
};

struct V4_001BC310 {
    float x, y, z, w;
    V4_001BC310() { x = y = z = 0; w = 1.0f; }
};

struct V4Raw_001BC310 {
    float x, y, z, w;
};

struct S_001BC310_Cam {
    void func_00199A70(int a, V4_001BC310 *out);
    void func_001994C0(int a, V4_001BC310 *p, V4_001BC310 *q);
    void func_00199790(int a, V4_001BC310 *pos);
    void func_00199110(int a, V4_001BC310 *p, V4_001BC310 *q, int b, int c, int d);
};

struct S_001BC310_View {
    char pad0[0x22c];
    S_001BC310_Cam *f22c;
};

struct S_001BC310_Ctx {
    char pad0[0x64];
    S_001BC310_View *f64;
};

struct M44_001BC310 {
    float m[16];
};

struct S_001BC310_Xf {
    char pad0[0xb0];
    M44_001BC310 mat;
    float *Mat() { return mat.m; }
};

struct S_001BC310_Node {
    char pad0[0x2e4];
    S_001BC310_Xf *f2e4;
    char pad2e8[4];
    u8 f2ec;
    float *M() { return f2e4->mat.m; }
};

struct S_001BC310_Pair {
    char pad0[0x24];
    S_001BC310_Node *f24;
    S_001BC310_Node *f28;
};

static __forceinline M44_001BC310 *GetMat_001BC310(S_001BC310_Node *n)
{
    return &n->f2e4->mat;
}

static __forceinline void MulT_001BC310(V4Raw_001BC310 *out, V4_001BC310 *v, float *m)
{
    out->x = v->y * m[4] + v->z * m[8] + v->x * m[0];
    out->y = v->y * m[5] + v->z * m[9] + v->x * m[1];
    out->z = v->y * m[6] + v->z * m[10] + v->x * m[2];
}

static __forceinline void Mul_001BC310(V4_001BC310 *out, V4Raw_001BC310 *v, float *m)
{
    out->x = v->y * m[1] + v->z * m[2] + v->x * m[0];
    out->y = v->y * m[5] + v->z * m[6] + v->x * m[4];
    out->z = v->y * m[9] + v->z * m[10] + v->x * m[8];
}

void func_0011F4B0(float *out, V4_001BC310 *pos, float *m);
void func_00030AC0(float *out, float *v, float *m);
void func_001BC310(S_001BC310_Ctx *a0, S_001BC310_Node *p2, S_001BC310_Pair *p3, int flag);

static __forceinline void Step1_001BC310(V4_001BC310 *D, V4_001BC310 *A, V4_001BC310 *C, V4_001BC310 *B, V4Raw_001BC310 *E1, V4Raw_001BC310 *E2, float *m)
{
    func_0011F4B0(&D->x, A, m);
    E1->x = C->x * m[0] + (C->z * m[8] + C->y * m[4]);
    E1->y = C->x * m[1] + (C->z * m[9] + C->y * m[5]);
    E1->z = C->x * m[2] + (C->z * m[10] + C->y * m[6]);
    E2->x = B->x * m[0] + (B->z * m[8] + B->y * m[4]);
    E2->y = B->x * m[1] + (B->z * m[9] + B->y * m[5]);
    E2->z = B->x * m[2] + (B->z * m[10] + B->y * m[6]);
}

static __forceinline void Step2_001BC310(V4_001BC310 *A, V4_001BC310 *D, V4Raw_001BC310 *E1, V4Raw_001BC310 *E2, V4_001BC310 *F, V4_001BC310 *G, float *m)
{
    float t;
    func_00030AC0(&A->x, &D->x, m);
    t = E1->y * m[1];
    t = t + E1->z * m[2];
    F->x = t + E1->x * m[0];
    t = E1->y * m[5];
    t = t + E1->z * m[6];
    F->y = t + E1->x * m[4];
    t = E1->y * m[9];
    t = t + E1->z * m[10];
    F->z = t + E1->x * m[8];
    t = E2->y * m[1];
    t = t + E2->z * m[2];
    G->x = t + E2->x * m[0];
    t = E2->y * m[5];
    t = t + E2->z * m[6];
    G->y = t + E2->x * m[4];
    t = E2->y * m[9];
    t = t + E2->z * m[10];
    G->z = t + E2->x * m[8];
}

struct S_001BCFE0_Item {
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
};

struct C_001BCFE0 {
    char pad0[0x110];
    S_001BCFE0_Item **f110;
    int f114;
    S_001BCFE0_Item *f118;
    int f11c;
    void func_001577A0(void *p, int n);
    int func_001BCFE0(int idx);
    void func_001BCCC0(int idx);
    int func_001BD040(void);
};

struct C_00157600 {
    void func_00157600(void *param);
};

struct C_001BBAA0 {
    void func_001BBAA0(void *a, void *b);
};

struct C_001BC640 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_001BC640 *func_001BC640(void *param);
};

struct C_001BC670 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    void func_001D3F50();
    void func_001BC670(void *a1, void *a2);
};

struct C_001BC6B0 {
    void *vtbl;
    void func_00157660();
    void *func_001BC6B0(unsigned int flags);
};

struct C_001BC6E0 {
    int count;
    char *data;
    char func_001BC6E0(void *param);
};

void func_001BC310(S_001BC310_Ctx *a0, S_001BC310_Node *p2, S_001BC310_Pair *p3, int flag)
{
    if (flag != 0) {
        S_001BC310_Node *other = p3->f24;
        S_001BC310_View *view;
        float *m;
        if (p2 == other) {
            other = p3->f28;
        }
        view = a0->f64;
        V4_001BC310 A;
        view->f22c->func_00199A70(0, &A);
        V4_001BC310 C;
        V4_001BC310 B;
        view->f22c->func_001994C0(0, &C, &B);
        m = (float *)((char *)p2->f2e4 + 0xb0);
        V4_001BC310 D;
        func_0011F4B0(&D.x, &A, m);
        V4Raw_001BC310 E1;
        V4Raw_001BC310 E2;
        E1.x = C.x * m[0] + C.y * m[4] + C.z * m[8];
        E1.y = C.x * m[1] + C.y * m[5] + C.z * m[9];
        E1.z = C.x * m[2] + C.y * m[6] + C.z * m[10];
        E2.x = B.x * m[0] + B.y * m[4] + B.z * m[8];
        E2.y = B.x * m[1] + B.y * m[5] + B.z * m[9];
        E2.z = B.x * m[2] + B.y * m[6] + B.z * m[10];
        V4_001BC310 F;
        V4_001BC310 G;
        m = (float *)((char *)other->f2e4 + 0xb0);
        func_00030AC0(&A.x, &D.x, m);
        F.x = E1.x * m[0] + E1.y * m[1] + E1.z * m[2];
        F.y = E1.x * m[4] + E1.y * m[5] + E1.z * m[6];
        F.z = E1.x * m[8] + E1.y * m[9] + E1.z * m[10];
        G.x = E2.x * m[0] + E2.y * m[1] + E2.z * m[2];
        G.y = E2.x * m[4] + E2.y * m[5] + E2.z * m[6];
        G.z = E2.x * m[8] + E2.y * m[9] + E2.z * m[10];
        view->f22c->func_00199790(0, &A);
        view->f22c->func_00199110(0, &F, &G, 0, 1, 0);
        other->f2ec &= 0xfd;
    } else {
        p2->f2ec |= 2;
    }
}

C_001BC640 *C_001BC640::func_001BC640(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028D334;
    return this;
}

void C_001BC670::func_001BC670(void *a1, void *a2)
{
    f24 = (int)a1;
    f28 = (int)a2;
    ((C_001BBAA0 *)a1)->func_001BBAA0(this, (void *)&func_001BC310);
    ((C_001BBAA0 *)f28)->func_001BBAA0(this, (void *)&func_001BC310);
    func_001D3F50();
}

void *C_001BC6B0::func_001BC6B0(unsigned int flags)
{
    void func_001E891B(void *);

    vtbl = (void *)&D_0028D334;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

char C_001BC6E0::func_001BC6E0(void *param)
{
    int func_001E8BB0(...);
    char *func_001E83E8(...);
    void func_001E8920(...);
    int i;

    for (i = 0; i < count; i++) {
        if (func_001E8BB0(param, data + i * 0x80, 0x80) == 0)
            return i;
    }
    count = count + 1;
    data = func_001E83E8(data, count * 0x80);
    memset(data + i * 0x80, 0, 0x80);
    func_001E8920(data + i * 0x80, param, 0x80);
    return count - 1;
}

C_UIGlobalManager *C_UIGlobalManager::func_001BC770(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f2C = 0;
    f28 = 0;
    f24 = 0;
    vtbl = (void *)&D_0028D3B4;
    return this;
}

void C_UIGlobalManager::func_001BC7A0()
{
    vtbl = (void *)&D_0028D3B4;
    if (f2C != 0) {
        func_001E8390(f2C);
        f2C = 0;
    }
    if (D_002F0630 != 0) {
        D_002F0630->destroy(1);
        D_002F0630 = 0;
    }
    func_00157660();
}

int C_UIGlobalManager::func_001BC7F0(void *a)
{
    if (f24 != 0) {
        f24->v36();
    }
    return 1;
}

void C_UIGlobalManager::func_001BC810()
{
    int i;

    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    for (i = 0; i < f28; i++) {
        f2C[i]->v5();
    }
    if (f24 != 0) {
        f24->func_00157810();
        f24->v2();
        f24 = 0;
    }
}

extern "C" int strcmp(const char *a, const char *b);
#pragma intrinsic(strcmp)
void *C_001BC870::func_001BC870(C_001BC870_Tbl *t, void *name)
{
    char buf[0x104];
    char path[0x104];
    t->func_00169710(name);
    t->func_00168550(D_0027A604, buf, 0x104);
    if (!strcmp(buf, "Soultree")) {
        t->func_00168550(D_00276310, buf, 0x104);
        C_001BC870_A *a = (C_001BC870_A *)func_001E8A44(0x16c);
        a = a ? a->func_001BF6F0(0, 1) : 0;
        return func_001577A0(a->func_001BF7C0(1, buf, t), -1);
    }
    if (!strcmp(buf, "Soultree_Lightweight")) {
        t->func_00168550(D_00276310, buf, 0x104);
        C_001BC870_B *b = (C_001BC870_B *)func_001E8A44(0x16c);
        b = b ? b->func_001BFA70(0, 1) : 0;
        return func_001577A0(b->func_001BFB40(2, buf, t), -1);
    }
    if (!strcmp(buf, "Soultree_Character")) {
        t->func_00168550(D_0027D880, buf, 0x104);
        func_001ADCC0(path, 0x104, D_00275678, D_002A46E8, buf);
        C_001BC870_C *c = (C_001BC870_C *)func_001E8A44(0x3a4);
        c = c ? c->func_001BFDB0(0, 1) : 0;
        return func_001577A0(c->vf38(3, path, t), -1);
    }
    return 0;
}

void *C_UIGlobalManager::func_001BCA30(unsigned int flags)
{
    vtbl = (void *)&D_0028D3B4;
    if (f2C != 0) {
        func_001E8390(f2C);
        f2C = 0;
    }
    if (D_002F0630 != 0) {
        D_002F0630->destroy(1);
        D_002F0630 = 0;
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_UIGlobalManager::func_001BCA90()
{
    C_00168280 parser;
    int result;
    int i;
    int j;
    int tmp;
    char buf[0x100];
    S_001BC810_Item *obj;

    result = 1;
    parser.func_00168280();
    if (parser.func_00169490(D_0028D42C, 0) != 0) {
        parser.func_00169710(D_002769F8);
        parser.func_00168C20(D_0027D8FC, 0, &f28);
        f2C = (S_001BC810_Item **)func_001E8AA5(f28 * 4);
        for (i = 0; i < f28; i++) {
            func_001ADCC0(buf, 0x100, D_0027D8F0, i + 1);
            obj = func_001BC870(&parser, buf);
            j = 0;
            if (obj != 0) {
                int *p = obj->f44;
                do {
                    func_001ADCC0(buf, 0x100, D_0027D8D8, j + 1);
                    parser.func_00168C20(buf, 0, &tmp);
                    *p = tmp;
                    j++;
                    p++;
                } while (j < 8);
                obj->v5();
                f2C[i] = obj;
            } else {
                f2C[i] = 0;
                result = 0;
            }
        }
    }
    parser.func_001691E0();
    return result;
}

void *C_UIGlobalManager::func_001BCBE0(void *a1, void *a2, int a3)
{
    C_00149380 *obj = (C_00149380 *)func_001E8A44(0x4010);
    if (obj != 0) {
        obj->func_00149380();
    }
    if (this->func_001BCA90() == 0) {
        return 0;
    }
    if (a3 > -1 && f24 != 0) {
        f24->v36();
    }
    ((C_UIGlobalManagerVT *)this)->vf28(a1, a2);
    return this;
}

void C_001BCC40::func_001BCC40()
{
    vtbl = (void *)&D_0028D44C;
    if (f110 != 0) {
        func_001E8390(f110);
    }
    if (f120 != 0) {
        func_001E8390(f120);
    }
    D_002F07B8->f8 = 0;
    func_00157660();
}

C_001BCC90 *C_001BCC90::func_001BCC90(void *param_1)
{
    f24 = param_1;
    if (D_002A8490->flags230 & 0x20) {
        D_002F0670->vf32();
    }
    return this;
}

void C_001BCFE0::func_001BCCC0(int idx)
{
    f11c = idx;
    f118 = f110[idx - 1];
    f118->v34();
    f118->v27();
}

int C_001BCFE0::func_001BCFE0(int idx)
{
    f110[f11c - 1]->v35();
    f110[idx - 1]->v34();
    f11c = idx;
    f118 = f110[idx - 1];
    return 1;
}

int C_001BCFE0::func_001BD040(void)
{
    int i;

    for (i = 0; i < f114; i++) {
        S_001BCFE0_Item *item = f110[i];
        if (item == 0) {
            return 0;
        }
        func_001577A0(item, -1);
    }
    return 1;
}

