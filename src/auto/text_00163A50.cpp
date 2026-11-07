/* 15 functions from 0x00163A50 to 0x001648E0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
struct S_Vec4_1640D0 {
    float x, y, z, w;
};

struct C_1640D0_Obj {
    S_Vec4_1640D0 func_00197F70(float *vin);
    S_Vec4_1640D0 func_00198120(float *p);
};

void func_001640D0(C_1640D0_Obj *a1, C_1640D0_Obj *a2, int axis, S_Vec4_1640D0 *out);

struct C_00164820 {
    char pad0[0x10];
    int unk10;
    char pad14[0x4];
    int unk18;
    char pad1C[0x14];
    int unk30;
    int unk34;
    void func_00164820(int a0);
};

extern int D_00287E38[];
extern int D_00287DCC;

struct C_00157600_164440 {
    void func_00157600(int a);
};

struct C_00164440 {
    int *vbptr;
    char pad4[0x8];
    int fC, f10, f14, f18, f1C, f20, f24, f28, f2C, f30, f34, f38;
    char pad3C[0xC];
    char f48;
    char pad49[0x4F];
    char f98;
    char pad99[0x4F];
    char fE8;
    char padE9[0x4F];
    char f138;
    char pad139[0x57];
    char f190;
    char pad191[0x4F];
    int f1E0, f1E4, f1E8, f1EC, f1F0, f1F4, f1F8, f1FC, f200, f204, f208, f20C, f210, f214, f218, f21C;
    C_00164440 *func_00164440(int a, int mostDerived);
};

extern int D_00287DBC;
extern float D_00275544;
extern float D_00275460;
extern float D_002755EC;
void *func_001E8AA5(int size);
void func_001ADCC0(char *buf, int size, const char *fmt, int n);

struct C_00199BE0 {
    void func_00199BE0(void *p);
};

struct C_001646B0 {
    char pad0[0x1e8];
    int f1e8;
    int f1ec;
    char pad1f0[8];
    int f1f8;
    void func_001646B0(void);
};

struct S_00163DC0_Flags {
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 1;
};

struct S_00163DC0_Res {
    char *f0;
    char pad4[0x20];
    S_00163DC0_Flags f24;
    char pad25[3];
    int f28;
    int f2C;
    int f30;
    int f34;
    float f38;
    float f3C;
    int f40;
    S_00163DC0_Res *func_00162790(void);
};

/* loader settings: parser at +8, defaults at +0x20.., base path at +0x190 */
struct S_00163A50_Arg {
    char pad0[8];
    struct C_00163DC0_Parser *f8;
    char padC[0x20 - 0xC];
    int f20;
    int f24;
    int f28;
    int f2C;
    char pad30[0x190 - 0x30];
    char f190[1];
};

struct C_00163DC0_Parser {
    int func_00169710(const char *section);
    void func_00168BE0(const char *key, const char *def, char *out, int max);
    void func_00168C20(const char *key, int def, int *out);
    int func_00168C50(const char *key, int def, float *out);
    int func_00168550(const char *key, char *out, int max);
};

enum LoadResult { kLoadFailed, kLoadOk };

struct C_00163A50 {
    int f0;
    int f4;
    char pad8[0x10];
    void **f18;
    void *func_00163A50(void *a, void *b);
    void func_00162A80(void *p);
    S_00163DC0_Res *func_00162B20(const char *name, int a);
    LoadResult func_00163780(const char *path, S_00163DC0_Res *res);
    LoadResult func_00162FB0(S_00163A50_Arg *a1, const char *path, S_00163DC0_Res *res);
    void func_00162B70(const char *path, S_00163DC0_Res *res);
    void *func_00163DC0(C_00163DC0_Parser *parser, const char *section, const char *prefix);
};

extern char D_00284A98[], D_00276980[], D_002764EC[], D_00287DA8[], D_00287DA0[], D_002764D8[], D_00287D8C[], D_00287D78[], D_00287D68[], D_00287D5C[], D_00287D50[], D_00287D40[], D_00287D38[], D_00287D30[], D_00287D10[], D_00287D28[];
extern char D_00287D20[];
extern float D_00278C48;
extern float D_002755E8;
void *func_001E8A44(unsigned int size);
void *func_001E83E8(void *p, unsigned int size);
void func_00030F30(char *dst, const char *src);
extern "C" char *__cdecl strcat(char *, const char *);

void func_001E891B(void *p);
void func_001E8390(void *p);

struct C_0013B210 {
    void func_0013B210(void *p);
};
extern C_0013B210 *D_002BEAAC;

struct C_00164520 {
    void func_00164520(void);
};

int func_001EA426(const char *a, const char *b);

struct V4_00164650 {
    float x, y, z, w;
};

struct M16_00164650 {
    float m[16];
};

struct S_00164650_Scale {
    char pad0[0x38];
    float f38;
};

struct S_00164650_Obj {
    void func_00197EA0(void *p);
    void func_00197B90(void *p);
    void func_00197E70(void *p);
};

struct S_00164270_Node {
    char pad0[0x28];
    char name[0x14c];
    S_00164270_Node *f174, *f178;
};
void func_001EA1EE(char *);
void *func_001E8920(void *, const void *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
extern "C" char *__cdecl strcpy(char *, const char *);


/* 0x40-byte entry; the name is at +0 */
struct S_00164650_Item {
    char name[0x34];
    S_00164650_Obj *f34;
    char pad38[8];
};

struct C_00164650 {
    char pad0[0x10];
    int f10;
    char pad14[4];
    S_00164650_Scale *f18;
    S_00164650_Scale *f1c;
    char pad20[0x10];
    int f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    char pad48[0x1e8 - 0x48];
    int f1e8;
    S_00164650_Item *f1ec;
    char pad1f0[8];
    M16_00164650 *f1f8;
    char pad1fc[4];
    V4_00164650 *f200;
    V4_00164650 *f204;
    unsigned char func_00164650(const char *name);
    void func_00164700(void);
    void func_00164770(void);
    void func_00164840(S_00164650_Scale *scale, float time, int rescale);
};

extern C_00163A50 *D_002EF7D0;

struct C_001643A0 {
    char pad0[0x14];
    int f14;
    int f18;
    char pad1c[0x1c4];
    int f1e0;
    int f1e4;
    int func_001643A0(void);
};


void *C_00163A50::func_00163A50(void *a, void *b)
{
    S_00163A50_Arg *a1 = (S_00163A50_Arg *)a;
    const char *section = (const char *)b;
    int val;
    int z;
    char str[0x40];
    char path[0x104];
    char name[0x104];
    char file[0x104];
    S_00163DC0_Res *res;
    S_00163DC0_Res *obj;

    a1->f8->func_00169710(section);
    a1->f8->func_00168BE0(D_00276980, D_00284A98, name, -1);
    res = func_00162B20(name, 0);
    if (res != 0) {
        return res;
    }
    obj = (S_00163DC0_Res *)func_001E8A44(0x44);
    res = obj != 0 ? obj->func_00162790() : 0;
    res->f40 = 0;
    f4 += 0x44;
    res->f0 = (char *)func_001E8A44(strlen(name) + 1);
    strcpy(res->f0, name);
    a1->f8->func_00168BE0(D_002764EC, D_00284A98, file, -1);
    path[0] = 0;
    strcat(path, a1->f190);
    strcat(path, file);
    z = 0;
    a1->f8->func_00168C20(D_00287DA8, z, &res->f34);
    a1->f8->func_00168C20(D_00287DA0, z, &val);
    res->f24.b0 = val;
    a1->f8->func_00168C20(D_002764D8, 0xf, &res->f30);
    a1->f8->func_00168C20(D_00287D8C, a1->f20, &val);
    res->f24.b1 = val;
    a1->f8->func_00168C20(D_00287D78, a1->f24, &val);
    res->f24.b2 = val;
    if (a1->f8->func_00168550(D_00287D68, str, -1)) {
        if (func_001EA426(str, D_00287D5C) == 0) {
            res->f28 = z;
        } else if (func_001EA426(str, D_00287D50) == 0) {
            z = 1;
            res->f28 = 1;
            z = 0;
        } else {
            res->f28 = a1->f28;
        }
    } else {
        res->f28 = a1->f28;
    }
    if (a1->f8->func_00168550(D_00287D40, str, -1)) {
        if (func_001EA426(str, D_00287D38) == 0) {
            res->f2C = z;
        } else if (func_001EA426(str, D_00287D30) == 0) {
            res->f2C = 1;
        } else {
            res->f2C = a1->f2C;
        }
    } else {
        res->f2C = a1->f2C;
    }
    func_00030F30(path, D_00287D28);
    if (func_00163780(path, res) != z) goto loaded;
    func_00030F30(path, D_00287D20);
    if (func_00162FB0(a1, path, res) == z) goto loaded;
    func_00030F30(path, D_00287D28);
    func_00162B70(path, res);
loaded:
    if (a1->f8->func_00168C50(D_00287D10, 0, &res->f3C) == 0) {
        float t = res->f38;
        t *= D_00278C48;
        res->f3C = t;
        if (t > D_002755E8) {
            res->f3C = 0.5f;
        }
    }
    f18 = (void **)func_001E83E8(f18, f0 * 4 + 4);
    f18[f0] = res;
    f0++;
    return f18[f0 - 1];
}

void *C_00163A50::func_00163DC0(C_00163DC0_Parser *parser, const char *section, const char *prefix)
{
    int val;
    char str[0x40];
    char path[0x104];
    char name[0x104];
    char file[0x104];
    S_00163DC0_Res *res;
    S_00163DC0_Res *obj;

    parser->func_00169710(section);
    parser->func_00168BE0(D_00276980, D_00284A98, name, -1);
    res = func_00162B20(name, 0);
    if (res != 0) {
        return res;
    }
    obj = (S_00163DC0_Res *)func_001E8A44(0x44);
    res = obj != 0 ? obj->func_00162790() : 0;
    res->f40 = 0;
    f4 += 0x44;
    res->f0 = (char *)func_001E8A44(strlen(name) + 1);
    strcpy(res->f0, name);
    parser->func_00168BE0(D_002764EC, D_00284A98, file, -1);
    path[0] = 0;
    strcat(path, prefix);
    strcat(path, file);
    parser->func_00168C20(D_00287DA8, 0, &res->f34);
    parser->func_00168C20(D_00287DA0, 0, &val);
    res->f24.b0 = val;
    parser->func_00168C20(D_002764D8, 0xf, &res->f30);
    parser->func_00168C20(D_00287D8C, 1, &val);
    res->f24.b1 = val;
    parser->func_00168C20(D_00287D78, 1, &val);
    res->f24.b2 = val;
    if (parser->func_00168550(D_00287D68, str, -1) && func_001EA426(str, D_00287D5C) != 0) {
        res->f28 = func_001EA426(str, D_00287D50) == 0;
    } else {
        res->f28 = 0;
    }
    if (parser->func_00168550(D_00287D40, str, -1)) {
        if (func_001EA426(str, D_00287D38) == 0) {
            res->f2C = 0;
        } else {
            func_001EA426(str, D_00287D30);
            res->f2C = 1;
        }
    } else {
        res->f2C = 1;
    }
    if (parser->func_00168C50(D_00287D10, 0, &res->f3C) == 0) {
        float t = (float)res->f34 / res->f30 * D_00278C48;
        res->f3C = t;
        if (t > D_002755E8) {
            res->f3C = 0.5f;
        }
    }
    func_00030F30(path, D_00287D28);
    if (func_00163780(path, res) == 0) {
        return 0;
    }
    f18 = (void **)func_001E83E8(f18, f0 * 4 + 4);
    f18[f0] = res;
    f0++;
    return f18[f0 - 1];
}

void func_001640D0(C_1640D0_Obj *a1, C_1640D0_Obj *a2, int axis, S_Vec4_1640D0 *out)
{
    *out = a2->func_00197F70((float *)out);
    *out = a1->func_00198120((float *)out);
    if (axis == 0)
        out->x = -out->x;
    else if (axis == 1)
        out->y = -out->y;
    else if (axis == 2)
        out->z = -out->z;
    *out = a1->func_00197F70((float *)out);
    *out = a2->func_00198120((float *)out);
}

void func_001641B0(int mode, float *v)
{
    float x = v[1];
    float y = v[2];
    float z = v[3];

    if (mode == 0) {
        x = -x;
    } else if (mode == 1) {
        y = -y;
    } else if (mode == 2) {
        z = -z;
    }
    v[1] = -x;
    v[2] = -y;
    v[3] = -z;
}

float func_00164220(float a, float b, float c)
{
    float t;

    if (c < a) {
        return D_00275544;
    }
    if (c >= b) {
        return D_00275460;
    }
    t = (c - a) / (b - a);
    return (D_002755EC - (t + t)) * t * t;
}

int func_00164270(int index, S_00164650_Item *items, S_00164270_Node *node)
{
    items[index].f34 = (S_00164650_Obj *)node;
    *(int *)items[index].pad38 = 0;
    *(int *)(items[index].pad38 + 4) = 0;
    func_001EA1EE(node->name);
    volatile int lengths[2];
    lengths[0] = strlen(node->name);
    lengths[1] = 49;
    int y = lengths[1];
    int x = lengths[0];
    int length = y <= x ? y : x;
    func_001E8920(items[index].name, node->name, length);
    items[index].name[length] = 0;
    ++index;
    S_00164270_Node *p;
    for (p = node->f178; p; p = p->f178) {
        items[index].f34 = (S_00164650_Obj *)p;
        func_001EA1EE(p->name);
        strcpy(items[index].name, p->name);
        *(int *)items[index].pad38 = 0;
        *(int *)(items[index].pad38 + 4) = 0;
        ++index;
    }
    if (node->f174) index = func_00164270(index, items, node->f174);
    for (p = node->f178; p; p = p->f178) {
        if (p->f174) index = func_00164270(index, items, p->f174);
    }
    return index;
}

int C_001643A0::func_001643A0(void)
{
    char buf[0x50];
    int i;

    f18 = 0;
    if (f14 == 0) {
        return 0;
    }
    if (f1e0 != 0) {
        f1e4 = (int)func_001E8AA5(f14 * 4);
    }
    for (i = 0; i < f14; i++) {
        func_001ADCC0(buf, 0x50, (const char *)&D_00287DBC, i + 1);
        void *p = D_002EF7D0->func_00163A50(this, buf);
        if (p != 0) {
            *(int *)((char *)p + 0x40) += 1;
            if (f1e0 != 0) {
                ((void **)f1e4)[i] = p;
            }
        }
    }
    return 1;
}

C_00164440 *C_00164440::func_00164440(int a, int mostDerived)
{
    volatile int local = 0;
    if (mostDerived != 0) {
        vbptr = D_00287E38;
        ((C_00157600_164440 *)((char *)this + 0x220))->func_00157600(a);
    }
    *(void **)((char *)this + vbptr[1]) = (void *)&D_00287DCC;
    f10 = 1;
    f20 = 1;
    f24 = 1;
    f2C = 1;
    f1E0 = 1;
    fC = 0;
    f14 = 0;
    f18 = 0;
    f34 = 0;
    f28 = 0;
    f1C = 0;
    f38 = 0;
    f30 = 0;
    f48 = 0;
    f98 = 0;
    fE8 = 0;
    f138 = 0;
    f190 = 0;
    f1EC = 0;
    f1F8 = 0;
    f200 = 0;
    f204 = 0;
    f1FC = 0;
    f1E4 = 0;
    f1F0 = 0;
    f1F4 = 0;
    f208 = 0;
    f20C = 0;
    f214 = 0;
    f210 = 0;
    f218 = 0;
    f21C = 0;
    return this;
}

void C_00164520::func_00164520(void)
{
    int *p = (int *)this;
    int i;
    *(void **)((char *)this - 0x220 + ((int *)p[-0x88])[1]) = (void *)&D_00287DCC;
    p[-0x82] = 0;
    if (p[-0xC] != 0)
        func_001E891B((void *)p[-0xC]);
    if (p[-0xA] != 0)
        func_001E8390((void *)p[-0xA]);
    if (p[-8] != 0)
        func_001E8390((void *)p[-8]);
    if (p[-7] != 0)
        func_001E8390((void *)p[-7]);
    if (p[-0xF] != 0) {
        for (i = 0; i < p[-0x83]; i++)
            D_002EF7D0->func_00162A80(((void **)p[-0xF])[i]);
        func_001E8390((void *)p[-0xF]);
    }
    if (p[-4] != 0) {
        for (i = 0; i < p[-5]; i++)
            func_001E891B(((void **)p[-4])[i]);
        func_001E8390((void *)p[-4]);
        p[-4] = 0;
    }
    p[-5] = 0;
    if (p[-3] != 0)
        func_001E8390((void *)p[-3]);
    if (p[-1] != 0) {
        func_001E8390((void *)p[-1]);
        p[-1] = 0;
    }
    if (p[-0xD] != 0)
        func_001E891B((void *)p[-0xD]);
    D_002BEAAC->func_0013B210((char *)this - 0x220);
}

unsigned char C_00164650::func_00164650(const char *name)
{
    int i;
    for (i = 0; i != f1e8; i++) {
        if (func_001EA426(f1ec[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

void C_001646B0::func_001646B0(void)
{
    int i;
    for (i = 0; i < f1e8; i++) {
        C_00199BE0 *p = *(C_00199BE0 **)(f1ec + i * 0x40 + 0x34);
        p->func_00199BE0((void *)(f1f8 + i * 0x40));
    }
}

void C_00164650::func_00164700(void)
{
    int i;
    if (f1f8 == 0) {
        f1f8 = (M16_00164650 *)func_001E8AA5(f1e8 << 6);
    }
    for (i = 0; i < f1e8; i++) {
        f1ec[i].f34->func_00197EA0(&f1f8[i]);
    }
}

void C_00164650::func_00164770(void)
{
    int i;
    if (f200 == 0) {
        f200 = (V4_00164650 *)func_001E8AA5(f1e8 << 4);
    }
    if (f204 == 0) {
        f204 = (V4_00164650 *)func_001E8AA5(f1e8 << 4);
    }
    for (i = 0; i < f1e8; i++) {
        f1ec[i].f34->func_00197B90(&f200[i]);
        f1ec[i].f34->func_00197E70(&f204[i]);
    }
}

void C_00164820::func_00164820(int a0) {
    unk10 = 0;
    unk18 = a0;
    unk30 = 0;
    unk34 = 0;
}

void C_00164650::func_00164840(S_00164650_Scale *scale, float time, int rescale) {
float ratio;
if(rescale != 0) { float r=f34/f18->f38; ratio=r*scale->f38; }
if(time != D_00275544) {
f44=time; f3c=time+f34; f38=f34; f40=f34;
f1c=*(S_00164650_Scale **)&time;
if(f1c==0 || f30!=0) { f1c=0; func_00164770(); }
f30=1;
} else f30=0;
f10=0; f18=scale; f34=0;
if(rescale!=0) f34=ratio;
}

