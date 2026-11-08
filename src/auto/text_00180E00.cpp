/* 8 functions from 0x00180E00 to 0x00181DB0, found by Ghidra. */
#include "common.h"

extern int D_00289254;
extern int D_0028926C;

void func_001E891B(void *p);
void func_001E8390(void *p);

struct VObj {
    virtual void destroyObject(int flags);
};

struct C_0001DFE0 {
    void *vtbl;
    int unk4;
    void func_0001DFE0(void);
    void func_0001DFF0(void);
};

struct RODElem {
    int unk0;
    int unk4;
    VObj *unk8;
};

struct RenderableObjectData : C_0001DFE0 {
    int unk8;
    float unkC;
    RODElem *unk10;
    RenderableObjectData *func_00181410(void);
    void func_00181440(void);
};

/* 0x14-byte cell of S_00181540_Row::cells */
struct S_00181540_Cell {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
};

/* 0xc-byte row of S_00181540_Res::rows */
struct S_00181540_Row {
    int count;
    int f4;
    S_00181540_Cell *cells;
};

/* resource object owned by RenderableObject::unk1A4 */
struct S_00181540_Res {
    virtual void v0();
    virtual void v1();
    virtual int v2();
    virtual int v3();
    int f4;
    int count;
    int fC;
    S_00181540_Row *rows;
};

struct SoultreeObject {
    void func_0019ACE0(void);
};

struct RenderableObject {
    void *vtbl;
    char pad4[0x23];
    unsigned char unk27 : 2;
    unsigned char unk27_hi : 6;
    char pad28[0x159];
    unsigned char unk181 : 1;
    unsigned char unk181_hi : 7;
    char pad182[0x1e];
    unsigned char unk1A0;
    unsigned char unk1A1;
    union {
        unsigned short unk1A2;
        struct {
            unsigned short bits0 : 11;
            unsigned short bit11 : 1;
            unsigned short bits12 : 4;
        };
        struct {
            unsigned char unk1A2_lo;
            unsigned char unk1A3;
        };
    };
    S_00181540_Res *unk1A4;
    void *unk1A8;
    void *unk1AC;
    int unk1B0;
    int unk1B4;
    int *unk1B8;
    int unk1BC;
    float unk1C0;
    float unk1C4;
    float unk1C8;
    float unk1CC;
    void func_00197820(int a);
    RenderableObject *func_001814B0(int a);
    void func_00181540(void);
    RenderableObject *func_001817F0(char *name, int a, int b);
};

struct Mgr {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(void *a, int b);
    void *func_001617F0(char *name, int f);
    void func_001B26C0(int a0);
};
struct Rd {
    void func_0013C8A0(int a, void *b, int c, int d);
    void func_0013B210(void *p);
    void func_0013C110(int a);
    void func_0013B1F0(int a, void *b);
    int func_0013D310(char *a, void *b, int *c, int *d, int e);
};
extern Rd *D_002BEAAC;
extern Mgr *D_002A829C;
extern char D_002A60B0[];
extern char D_002A60AF[];
extern unsigned short D_00284644;
extern int D_002AA46C;
void *func_001E8AA5(unsigned int n);
extern "C" void *func_001E8A44(unsigned int n);
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);

extern char D_002A4C10[];
extern char D_002A4C0F[];
extern char D_0028463C;
extern char D_00284638;
extern char D_00275FB4;

int func_001E8BF0(char *dst, char *src, int n);
void func_00030F30(char *a, char *b);
int func_001EA426(char *a, char *b);
void func_00132E90(int h, void *out);
void __stdcall func_00011FF0(void *mem, int a, int b, void *cb);
void func_00011060(void);

static __forceinline void *AllocZero_00181140(int count, int mul)
{
    void *m = (void *)func_001E8A44(count * mul);

    if (m != 0) {
        func_00011FF0(m, 0x10, count, func_00011060);
        return m;
    }
    return 0;
}

/* mesh/anim block loaded from file, fields at +0x70.. */
struct S_00181140_Loaded {
    char pad0[0x70];
    void *f70;
    void *f74;
    void *f78;
    int f7c;
    char pad80[4];
    void *f84;
    void *f88;
    void *f8c;
    void *f90;
    S_00181140_Loaded *func_00134980(void);
};

struct S_00180E00_Mat {
    float m[16];
};

/* owner of the loaded block: +0x54 block, +0xb0 matrix, +0xf8 count, +0xfc/+0x100 pools, +0x104 source id */
struct C_00181140 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void Reset();
    char pad4[0x50];
    S_00181140_Loaded *f54;
    char pad58[0x58];
    S_00180E00_Mat matB0;
    short fF0;
    char padF2[2];
    int fF4;
    int fF8;
    void *fFC;
    void *f100;
    int f104;
    void func_00180600(int a, int b);
    int func_00181140(int a1, char *path, int a3);
    void func_00180E00(int a1, int a2, int a3, int a4);
};

extern char D_002A5EA0[];
extern char D_002A5E9F[];
extern char D_00289328[];
extern char D_00289324[];
extern char D_00289320[];
extern char D_0028931C[];
extern char D_00289318[];
extern char D_00289314[];
extern char D_00289310[];
int func_001E8D25(int c);
void func_001D3F50(void);
void func_0014FF00(char *a, int b, int c, char *d, int e);
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
struct Obj5B570 { int func_0015B570(char *a); };
extern Obj5B570 *D_002E28F4;
struct Vec16_17 { int v[4]; };
struct Res17;
struct RObj17 {
    virtual void v0(); virtual void v1(); virtual int s2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void s33(void *a); virtual void v34(); virtual void v35();
    virtual void s36(int a); virtual void s37(void *a); virtual void v38(); virtual void v39();
    virtual void v40();
    char pad4[0x12c];
    Vec16_17 m130; Vec16_17 m140;
    char pad150[0x20];
    int f170; void *f174;
    char pad178[8];
    unsigned char f180; unsigned char f181;
    char pad182[2];
    int f184;
    char pad188[8];
    int f190;
    char pad194[0xf];
    unsigned char f1A3;
    Res17 *f1A4;
    void *f1A8;
    void *f1AC;
    char pad1B0[4];
    int f1B4;
    int *f1B8;
    RObj17 *func_00197820(int a);
    void func_0019ADF0(void *a);
    void func_001982A0(void *a, void *b);
    int func_0019B1A0(int a, void *b);
    void func_001816A0(void *a);
};
struct ResRow17 { int count; };
struct Res17 {
    virtual void v0(); virtual void s1(); virtual void v2(); virtual void v3(); virtual void s4(int a, int b);
    char pad4[0xc];
    ResRow17 *f10;
    RObj17 *f14;
    Res17 *func_00143520();
};

struct Loader {
    char pad[0x1b4];
    int count;
    void **items;
    void func_001816A0(void *stream);
};

#include <xmmintrin.h>
#include <string.h>
#include "asm_helpers.h"

inline void *operator new(unsigned int, void *p) { return p; }

struct S_00180E00_V4 {
    float x, y, z, w;
    S_00180E00_V4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

/* 0x30-byte tree node: two vec4s at +8 and +0x18 */
struct S_00180E00_Node {
    int pad0, pad4;
    S_00180E00_V4 a;
    S_00180E00_V4 b;
    int pad28, pad2C;
};

struct C_001805C0 {
    C_001805C0 *func_001805C0(void);
};

void func_00128120(void *tree, int *nodeCount, int *leafCount, S_00180E00_Mat *mat, int entries, int count);
void func_00128480(void *out, void *tree, int *idx, int *leaves);
void func_001285A0(void *out, void *tree, int *idx);
void func_00128440(void *tree);
void func_00128910(void);

static __forceinline S_00180E00_V4 *NewV4_00180E00(int n)
{
    void *m = func_001E8A44(n * 16);

    if (m != 0) {
        S_00180E00_V4 *p = (S_00180E00_V4 *)m;
        for (int i = n - 1; i >= 0; i--) {
            p->z = 0.0f; p->y = 0.0f; p->x = 0.0f; p->w = 1.0f;
            p++;
        }
        return (S_00180E00_V4 *)m;
    }
    return 0;
}

static __forceinline void *NewPairs_00180E00(int n)
{
    void *m = func_001E8A44(n << 5);

    if (m != 0) {
        char *p = (char *)m;
        for (int i = n - 1; i >= 0; i--) {
            func_00011FF0(p, 0x10, 2, func_00011060);
            p += 0x20;
        }
        return m;
    }
    return 0;
}

void C_00181140::func_00180E00(int a1,int a2,int a3,int a4){
 int leaves;int idx;void *obj;int leafCount;int nodeCount;S_00181140_Loaded *p;
 Reset();if(a1==1){C_001805C0*m=(C_001805C0*)func_001E8A44(36);obj=m?m->func_001805C0():0;}else obj=new(func_001E8A44(48))S_00180E00_Node;
 AsmIdentityMatrix(&matB0);
 nodeCount=0;leafCount=0;func_00128120(obj,&nodeCount,&leafCount,&matB0,a2,a1);fFC=0;fF0=(short)0x8000;fF4=a4;f104=a3;fF8=a1;leaves=-1;
 if(nodeCount>0){fF0=0;int n=nodeCount;void*m=func_001E8A44(n*36);if(m)func_00011FF0(m,36,n,func_00128910);else m=0;fFC=m;idx=0;func_00128480(fFC,obj,&idx,&leaves);}
 idx=0;f100=NewPairs_00180E00(leafCount);func_001285A0(f100,obj,&idx);func_00128440(obj);void*m=func_001E8A44(156);p=m?((S_00181140_Loaded*)m)->func_00134980():0;p->f7c=a1*3;p->f84=func_001E8A44(p->f7c*4);p->f88=func_001E8A44(p->f7c*4);p->f8c=func_001E8A44(p->f7c*4);p->f90=func_001E8A44(p->f7c*2);p->f70=NewV4_00180E00(p->f7c*2);p->f74=NewV4_00180E00(p->f7c);p->f78=NewV4_00180E00(p->f7c);f54=p;
}

int C_00181140::func_00181140(int a1, char *path, int a3)
{
    char buf[0x104];
    int h;
    int v14;
    int ptr;
    int v18;
    int vC;
    int v10;
    S_00181140_Loaded *p;
    void *m;

    if (D_002A4C10[0] != 0) {
        strcpy(buf, D_002A4C10);
        if (D_002A4C0F[strlen(D_002A4C10)] != '\\')
            func_001E8BF0(buf, (char *)&D_00284644, 0x7f);
        strcat(buf, path);
    } else {
        strcpy(buf, path);
    }
    func_00030F30(buf, &D_0028463C);
    p = 0;
    h = -1;
    ptr = 0;
    if (D_002BEAAC->func_0013D310(buf, &D_00275FB4, &h, &ptr, 1) == 0)
        return 0;
    D_002BEAAC->func_0013C8A0(h, &v18, 1, 4);
    D_002BEAAC->func_0013C8A0(h, &vC, 4, 1);
    D_002BEAAC->func_0013C8A0(h, &v10, 4, 1);
    if (v18 != 0x4d2 || func_001EA426((char *)&vC, &D_00284638) != 0 || v10 != 1)
        D_002BEAAC->func_0013C110(h);
    func_00132E90(h, &v14);
    func_00180600(a1, h);
    D_002BEAAC->func_0013C110(h);
    f104 = *(volatile int *)&a3;
    m = func_001E8A44(0x9c);
    if (m != 0)
        p = ((S_00181140_Loaded *)m)->func_00134980();
    p->f7c = fF8;
    p->f84 = func_001E8A44(p->f7c * 4);
    p->f88 = func_001E8A44(p->f7c * 4);
    p->f8c = func_001E8A44(p->f7c * 4);
    p->f90 = func_001E8A44(p->f7c * 2);
    p->f70 = AllocZero_00181140(p->f7c * 2, 16);
    p->f74 = AllocZero_00181140(p->f7c, 16);
    p->f78 = AllocZero_00181140(p->f7c, 16);
    f54 = p;
    return 1;
}

RenderableObjectData *RenderableObjectData::func_00181410(void)
{
    func_0001DFE0();
    unk8 = 0;
    unk10 = 0;
    vtbl = &D_00289254;
    unkC = 1.0f;
    return this;
}

void RenderableObjectData::func_00181440(void)
{
    vtbl = &D_00289254;
    for (int i = 0; i < unk8; i++) {
        VObj *o = unk10[i].unk8;
        if (o != 0) {
            if (((int *)o)[-1] != 0) {
                o->destroyObject(3);
            } else {
                func_001E891B((int *)o - 1);
            }
        }
    }
    if (unk10 != 0) {
        func_001E8390(unk10);
    }
    func_0001DFF0();
}

RenderableObject *RenderableObject::func_001814B0(int a)
{
    func_00197820(a);
    vtbl = &D_0028926C;
    unk27 = 3;
    unk181 = 0;
    unk1A1 = 0xff;
    unk1A2 = 0;
    unk1A4 = 0;
    unk1A8 = 0;
    unk1A0 = 0;
    unk1AC = 0;
    unk1B4 = 0;
    unk1B8 = 0;
    unk1BC = 0;
    unk1A3 |= 8;
    unk1C0 = 1.0f;
    unk1C4 = 1.0f;
    unk1C8 = 1.0f;
    unk1CC = 1.0f;
    return this;
}
void RenderableObject::func_00181540(void)
{
    int i;
    int j;
    int k;

    vtbl = &D_0028926C;
    if (unk1A4 != 0) {
        if (unk1B8 != 0) {
            for (i = 0; i < unk1B4; i++) {
                D_002A829C->func_001B26C0(unk1B8[i]);
            }
            if (unk1A4->v3() == 1) {
                for (k = 0; k < unk1B4; k++) {
                    for (i = 0; i < unk1A4->count; i++) {
                        for (j = 0; j < unk1A4->rows[i].count; j++) {
                            unk1A4->rows[i].cells[j].f4 = -1;
                        }
                    }
                }
            }
        }
        if (unk1A4->v2() == 0) {
            D_002BEAAC->func_0013B210(unk1A4);
        }
    }
    if (unk1A8 != 0) {
        func_001E891B(unk1A8);
    }
    if (unk1AC != 0) {
        func_001E891B(unk1AC);
    }
    if (unk1B8 != 0) {
        func_001E8390(unk1B8);
    }
    ((SoultreeObject *)this)->func_0019ACE0();
}

void Loader::func_001816A0(void *stream)
{
    char name[0x40];
    char path[0x104];
    int i;
    void *obj;

    D_002BEAAC->func_0013C8A0((int)stream, &count, 4, 1);
    items = (void **)func_001E8AA5(count * 4);
    for (i = 0; i < count; i++) {
        D_002BEAAC->func_0013C8A0((int)stream, name, 0x40, 1);
        if (D_002A60B0[0] != 0) {
            strcpy(path, D_002A60B0);
            if (D_002A60AF[strlen(D_002A60B0)] != '\\')
                strcat(path, "\\");
            strcat(path, name);
        } else {
            strcpy(path, name);
        }
        obj = D_002A829C->func_001617F0(path, 1);
        items[i] = obj;
        D_002A829C->v6(obj, D_002AA46C);
    }
}

RenderableObject *RenderableObject::func_001817F0(char *name, int a, int b)
{
    RObj17 &self = *(RObj17 *)this;
    RObj17 *other;
    int h;
    int v18;
    int v1c;
    char buf[0x104];
    char buf2[0x104];
    int arr[256];
    int i;

    func_001D3F50();
    other = &self;
    v18 = 0;
    if (D_002A5EA0[0] != 0) {
        strcpy(buf, D_002A5EA0);
        if (D_002A5E9F[strlen(D_002A5EA0)] != '\\') {
            char *e = buf;
            while (*e != 0)
                e++;
            *(unsigned short *)e = D_00284644;
        }
        strcat(buf, name);
    } else {
        strcpy(buf, name);
    }
    for (char *p = buf; *p != 0; p++)
        *p = (char)func_001E8D25(*p);
    func_00030F30(buf, D_00289328);
    strcpy((char *)&self + 0x28, buf);
    h = -1;
    v1c = 0;
    if (a != 0) {
        self.f181 |= 2;
        void *m = func_001E8A44(0x1a0);
        other = m ? ((RObj17 *)m)->func_00197820(1) : 0;
    }
    self.func_0019ADF0(other);
    if (D_002BEAAC->func_0013D310(buf, &D_00275FB4, &h, &v1c, 0) == 0) {
        self.s2();
        return 0;
    }
    if (v1c != 0) {
        RObj17 *src;
        self.f1A4 = (Res17 *)v1c;
        self.f1A4->s1();
        src = self.f1A4->f14;
        if (a != 0) {
            if (src->f181 & 2)
                other->s33(src->f174);
            else
                self.s33(src);
        } else {
            if (src->f181 & 2)
                self.s33(src->f174);
            else if (src->f174 != 0)
                self.s33(src);
            else {
                self.m130 = src->m130;
                self.m140 = src->m140;
                self.f184 = src->f184;
                self.f180 |= 0x24;
            }
        }
        v18 = 1;
        arr[0] = (int)other;
        other->func_001982A0(&v18, arr);
        self.f190 = v18;
        self.f1B4 = src->f1B4;
        self.f1B8 = (int *)func_001E8AA5(self.f1B4 * 4);
        memcpy(self.f1B8, src->f1B8, self.f1B4 * 4);
        for (i = 0; i < self.f1B4; i++)
            D_002A829C->v6((void *)self.f1B8[i], D_002AA46C);
        self.s37(src);
    } else {
        int vC;
        D_002BEAAC->func_0013C8A0(h, &vC, 1, 4);
        D_002BEAAC->func_0013C8A0(h, buf, 4, 1);
        if (func_001EA426((char *)&vC, D_00289324) != 0 && func_001EA426((char *)&vC, D_00289320) != 0 && func_001EA426((char *)&vC, D_0028931C) == 0)
            self.f1A3 |= 4;
        if (func_001EA426((char *)&vC, D_00289318) != 0 && func_001EA426((char *)&vC, D_00289314) != 0)
            func_001EA426((char *)&vC, D_00289310);
        if (a != 0) {
            self.f190 = other->func_0019B1A0(h, arr);
        } else {
            v18 = self.func_0019B1A0(h, arr);
        }
        int esiNew = 0;
        if (self.f1A3 & 4) {
            func_0014FF00(buf, 0, 0, buf2, 0);
            buf2[strlen(buf2) - 2] = 0;
            esiNew = D_002E28F4->func_0015B570(buf2);
        }
        self.func_001816A0((void *)h);
        self.s36(h);
        void *m = func_001E8A44(0x18);
        Res17 *res = m ? ((Res17 *)m)->func_00143520() : 0;
        self.f1A4 = res;
        res->s4(h, esiNew);
        res->f14 = &self;
        D_002BEAAC->func_0013B1F0(h, res);
        D_002BEAAC->func_0013C110(h);
        if (self.f1A8 == 0) {
            int cnt = self.f1A4->f10->count;
            self.f1A8 = func_001E8A44(cnt << 8);
            int i2;
            int j;
            for (i2 = 0; i2 < cnt; i2++) {
                for (j = 0; j < 32; j++) {
                    ((int *)self.f1A8)[i2 * 64 + j * 2] = 0x7f7fffff;
                    ((int *)self.f1A8)[i2 * 64 + j * 2 + 1] = 0x7f7fffff;
                }
            }
        }
    }
    self.f1AC = func_001E8A44(v18 * 4);
    memcpy(self.f1AC, arr, v18 * 4);
    self.f1A3 &= 0xef;
    return (RenderableObject *)&self;
}

