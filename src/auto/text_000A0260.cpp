/* 10 functions from 0x000A0260 to 0x000A11A0, found by Ghidra. */
#include "common.h"
struct Node_A0B { char pad[0x3c]; int id; Node_A0B* func_00192900(int); void func_00192AF0(void*,int); void func_00192A50(Node_A0B*,void*); void func_00192A90(void*); void func_00192AC0(void*); };
struct List_A0B { List_A0B* func_00157600(int); void func_001577A0(void*,int); };
struct Link_A0B { Link_A0B* func_00179820(int); void* func_0017A310(void*); };
struct World_A0B { void func_0015D850(int,int,int,int,int,int,int,int,int); void func_0015DA60(int,int,void*); };
struct Special_A0B { virtual void v0(); virtual void v1(); virtual void v2(); Special_A0B* func_001C4F40(); int func_001C4F70(int,int,int,int,int,int,int); void func_001C4FA0(int); };
struct Result_A0B { int x; Node_A0B* node; Special_A0B* special; Result_A0B* func_00193490(); };
struct Sector_A0B { char pad[0x114]; int a; int b; int c; int d; void* data; int count; char rest[0x34]; };
struct Edge_A0B { int x; char data[0x40]; int a,b; };
struct Bounds_A0B { char pad[0x538]; int a,b,c,d; };
struct Scene_A0B { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(int); virtual void v67(int); char pad[0x33c]; int count; Sector_A0B* sectors; int x348; int edges; int flag; char p354[0x30]; Edge_A0B* edge; Bounds_A0B* bounds; char p38c[0x118]; List_A0B* list; Node_A0B** nodes; Node_A0B** other; int *a,*b,*c,*d; int func_000A0BA0(); };
extern World_A0B* D_002E2930;
extern Special_A0B* D_002F07E8;
extern Result_A0B* D_002EFE78;
void func_00012140();
#include <xmmintrin.h>
#include "asm_helpers.h"

struct Vec_A0260 {
    f32 x, y, z, w;
};

static inline void Init_A0260(Vec_A0260 *v)
{
    v->x = v->y = v->z = 0.0f;
    v->w = 1.0f;
}

static inline void Cross_A0260(Vec_A0260 *out, Vec_A0260 *a, Vec_A0260 *b)
{
    Vec_A0260 *pa = a, *pb = b;
    __m128 va = _mm_loadu_ps(&pa->x);
    __m128 vb = _mm_loadu_ps(&pb->x);
    __m128 sa = va, sb = vb;
    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(&out->x, va);
}

struct Cam_A0260 {
    void func_00199A70(int a, Vec_A0260 *out);
    void func_001994C0(int a, Vec_A0260 *b, Vec_A0260 *c);
    Vec_A0260 *func_00197F70(Vec_A0260 *out, Vec_A0260 *in);
};

struct Holder_A0260 {
    char pad0[4];
    Cam_A0260 *cam;
};

struct Owner_A0260 {
    char pad0[0xA04];
    Holder_A0260 *holder;
};

struct Res_A0260 {
    int func_00026500(char *name, int a);
};

extern int D_002B90EC;
extern int D_002B90E8;
extern Res_A0260 *D_002A7CB8;
extern char D_00277F44[];
extern Vec_A0260 D_002A2600;
extern Vec_A0260 D_002A25E0;

void func_00158390(int a, Vec_A0260 b, Vec_A0260 c, Vec_A0260 *out);
void func_0009F5B0(Vec_A0260 *out, Vec_A0260 *in);

/* BmxPhotoCamera */
struct C_000A0260 {
    void *vtbl;
    Owner_A0260 *f4;
    int f8;
    Cam_A0260 *fC;
    char pad10[8];
    Vec_A0260 f18;
    Vec_A0260 f28;
    int f38;
    int f3C;
    char pad40[0xC];
    f32 f4C;
    char pad50[8];
    Vec_A0260 f58;
    Vec_A0260 f68;
    Vec_A0260 f78;
    f32 f88;
    int f8C;
    int f90;
    void func_000A0260(int a1, int *a2, Vec_A0260 *a3, Vec_A0260 *a4, int *a5, Vec_A0260 *a6, Vec_A0260 *a7, int *a8);
    void func_0009FB00(Vec_A0260 a, Vec_A0260 b, Vec_A0260 c, Vec_A0260 d, int e);
};

struct C_000A09F0 {
    char pad0[0x18];
    int unk18;
    int *unk1C;
    int unk20;
    int unk24;
    C_000A09F0* func_000A09F0(void);
    void func_000A0A10(void);
};

void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_00132E20_000A0260 {
    int func_00132E20(char *name);
};

extern C_00132E20_000A0260 *D_002A4334;
extern char D_00276688[];
extern char D_0027ADEC[];
extern char D_0027ADE4[];
extern char D_0027ADDC[];
extern char D_0027ADD4[];
extern char D_0027ADD0[];
extern int D_002B9118;
extern int D_002B9108;
extern int D_002B910C;
extern int D_002B911C;
extern int D_002B9114;
extern int D_002B9110;

struct C_001702B0_000A0260 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual int v27(char *name, int a);
    C_001702B0_000A0260 *func_001702B0(int a);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" int memcmp(const void *a, const void *b, unsigned int n);
extern "C" char *__cdecl strcpy(char *dst, const char *src);
#pragma intrinsic(strcpy)

extern char D_002A5558[];
extern char D_002A5348[];
extern char D_002A5450[];
extern char D_00275678[];
extern char D_002764F0[];

struct C_000A10B0_Src {
    char pad0[0x420];
    char name[0x40];         /* 0x420 */
};

struct C_000A0AE0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28();
    char pad4[0x384];        /* 0x04 */
    void *f388;              /* 0x388 */
    char pad38C[0xFC];       /* 0x38C */
    C_001702B0_000A0260 *f488; /* 0x488 */
    char pad48C[0xC4];       /* 0x48C */
    int f550;                /* 0x550 */
    C_000A0AE0 *func_000A0AE0(int a);
    int func_000A10B0(int a);
};

struct C_002A829C {
    void func_00161680(void);
};

struct C_002AA6C0 {
    void func_001B2640(void);
};

extern C_002A829C *D_002A829C;
extern C_002AA6C0 *D_002AA6C0;

struct S_000A08D0 {
    f32 f0, f1, f2, f3;
};

struct S_000A08D0_5 {
    f32 f0, f1, f2, f3, f4;
};

static S_000A08D0_5 *init_000A08D0(S_000A08D0_5 *p, f32 f1) {
    p->f0 = 0.0f;
    p->f1 = f1;
    p->f3 = 3.402823466e+38f;
    p->f4 = -3.402823466e+38f;
    p->f2 = 1.0f;
    return p;
}

struct C_000A08D0 {
    char pad0[0x38];
    int f38;
    char pad3C[0xA0];
    void *fDC;
    void *fE0;
    void func_000A00A0(S_000A08D0 s, int a5);
    int func_000A08D0(S_000A08D0 s, int a5);
};

struct C_000A0A80 {
    char pad0[0x4E0];
    int f4E0;
    char pad4E4[0x48];
    int f52C;
    int f530;
    int f534;
    int f538;
    int f53C;
    int f540;
    char pad544[0x4];
    int f548;
    int f54C;
    char pad550[0x8];
    int f558;
    char pad55C[0x8];
    int f564;
    int f568;
    int f56C;
    void func_000A0A80(void);
    void func_00182B00(void);
};


void C_000A0260::func_000A0260(int a1, int *a2, Vec_A0260 *a3, Vec_A0260 *a4, int *a5, Vec_A0260 *a6, Vec_A0260 *a7, int *a8)
{
    Vec_A0260 off;
    Vec_A0260 tmp;
    Vec_A0260 right;
    Vec_A0260 up;
    Vec_A0260 side;
    Vec_A0260 pos;
    Vec_A0260 dir;
    float f;

    if (!(D_002B90EC & 1)) {
        D_002B90EC |= 1;
        D_002B90E8 = D_002A7CB8->func_00026500(D_00277F44, -1);
    }
    Init_A0260(&pos);
    Init_A0260(&dir);
    Init_A0260(&up);
    if (f8) {
        f4->holder->cam->func_00199A70(0, &pos);
        f4->holder->cam->func_001994C0(0, &dir, &up);
    } else {
        fC->func_00199A70(0, &pos);
        fC->func_001994C0(0, &dir, &up);
    }
    Init_A0260(&tmp);
    AsmVec3Cross(&tmp.x, &dir.x, &f28.x);
    f18 = pos;
    f28 = dir;
    Init_A0260(&side);
    func_00158390(f8C, D_002A2600, dir, &f68);
    func_0009F5B0(&f68, &f68);
    AsmVec3Cross(&side.x, &D_002A2600.x, &f68.x);
    func_0009F5B0(&side, &side);
    func_00158390(f90, side, f68, &f68);
    func_0009F5B0(&f68, &f68);
    AsmVec3Cross(&f78.x, &f68.x, &side.x);
    func_0009F5B0(&f78, &f78);
    Vec_A0260 tgt = D_002A25E0;
    if (f8) {
        tgt.y = D_002A25E0.y + f88;
        tgt = *f4->holder->cam->func_00197F70(&off, &tgt);
    } else {
        tgt = pos;
    }
    f = f4C;
    off.x = f68.x * f;
    off.y = f68.y * f;
    off.z = f68.z * f;
    tmp.x = tgt.x - off.x;
    tmp.y = tgt.y - off.y;
    tmp.z = tgt.z - off.z;
    tmp.w = 1.0f;
    f58 = tmp;
    Init_A0260(&right);
    AsmVec3Cross(&right.x, &dir.x, &up.x);
    func_0009FB00(right, tgt, dir, up, a1);
    *a2 = 0;
    if (a5)
        *a5 = f3C;
    if (a3)
        *a3 = f58;
    if (a6)
        *a6 = f68;
    if (a7)
        *a7 = f78;
    if (a4)
        *a4 = tgt;
    if (a8)
        *a8 = 0;
    if (f38)
        f38 = 0;
}

int C_000A08D0::func_000A08D0(S_000A08D0 s, int a5) {
    S_000A08D0_5 *p = (S_000A08D0_5 *)func_001E8A44(0x14);
    fDC = p ? init_000A08D0(p, 0.02f) : 0;
    p = (S_000A08D0_5 *)func_001E8A44(0x14);
    fE0 = p ? init_000A08D0(p, 0.2f) : 0;
    func_000A00A0(s, a5);
    f38 = 1;
    return 1;
}

void func_000A0980(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

C_000A09F0* C_000A09F0::func_000A09F0(void) {
    unk18 = 0;
    unk1C = 0;
    unk20 = 0;
    unk24 = 0;
    return this;
}

void C_000A09F0::func_000A0A10(void) {
    if (unk20) {
        func_001E891B((void *)unk20);
        unk20 = 0;
    }
    if (unk1C) {
        for (int i = 0; i < unk18; i++) {
            if (unk1C[i]) {
                func_001E891B((void *)unk1C[i]);
                unk1C[i] = 0;
            }
        }
        func_001E891B(unk1C);
        unk1C = 0;
    }
}

void C_000A0A80::func_000A0A80(void) {
    f4E0 = 0;
    f530 = 0;
    f534 = 0;
    f564 = 0;
    f568 = 0;
    f56C = 0;
    f52C = 0;
    f538 = 0;
    f53C = 0;
    f540 = 0;
    f548 = 0;
    f54C = 0;
    f558 = 0;
    func_00182B00();
}

C_000A0AE0 *C_000A0AE0::func_000A0AE0(int a)
{
    v28();
    D_002B9118 = D_002A4334->func_00132E20(D_00276688);
    D_002B9108 = D_002A4334->func_00132E20(D_0027ADEC);
    D_002B910C = D_002A4334->func_00132E20(D_0027ADE4);
    D_002B911C = D_002A4334->func_00132E20(D_0027ADDC);
    D_002B9114 = D_002A4334->func_00132E20(D_0027ADD4);
    D_002B9110 = D_002A4334->func_00132E20(D_0027ADD0);
    f550 = a;
    return this;
}

void func_000A0B80(void) {
    D_002A829C->func_00161680();
    D_002AA6C0->func_001B2640();
}

int Scene_A0B::func_000A0BA0() {
Link_A0B* p=0;
List_A0B* l=(List_A0B*)func_001E8A44(0x24); list=l?l->func_00157600(1):0;
nodes=(Node_A0B**)func_001E8A44(count*4); other=(Node_A0B**)func_001E8A44(count*4);
D_002E2930->func_0015D850(count,bounds->a,0xff7fffff,bounds->c,bounds->b,0x7f7fffff,bounds->d,0x42c80000,1);
for(int i=0;i<count;i++){Node_A0B* n=(Node_A0B*)func_001E8A44(0xa0); nodes[i]=n?n->func_00192900(1):0; n=(Node_A0B*)func_001E8A44(0xa0); other[i]=n?n->func_00192900(1):0; nodes[i]->id=i;other[i]->id=i;if(sectors[i].count>0)nodes[i]->func_00192AF0(sectors[i].data,sectors[i].count);}
if(edges>0){int j=0; do {p=(Link_A0B*)func_001E8A44(0xb8); p=p?p->func_00179820(1):0; list->func_001577A0(p->func_0017A310(edge[j].data),0);int a=edge[j].a-1,b=edge[j].b-1;nodes[a]->func_00192A50(nodes[b],p);other[a]->func_00192A50(other[b],p);nodes[b]->func_00192A50(nodes[a],p);other[b]->func_00192A50(other[a],p);if(D_002E2930)D_002E2930->func_0015DA60(a,b,p);++j;}while(j<edges);}
func_001E891B(edge);p=0;edge=0;
if(count==1 && sectors->c==2 && sectors->a==2){Special_A0B* p=(Special_A0B*)func_001E8A44(0x8b8);D_002F07E8=p?p->func_001C4F40():0;if(!D_002F07E8->func_001C4F70(bounds->a,0xff7fffff,bounds->c,bounds->b,0x7f7fffff,bounds->d,0x42c00000))func_00012140();D_002F07E8->func_001C4FA0(5000);nodes[0]->id=0;other[0]->id=0;nodes[0]->func_00192A90(D_002F07E8);nodes[0]->func_00192AC0(D_002F07E8);other[0]->func_00192A90(D_002F07E8);other[0]->func_00192AC0(D_002F07E8);list->func_001577A0(nodes[0],0);list->func_001577A0(other[0],0);D_002F07E8->v2();}
else {a=(int*)func_001E8A44(count*4);b=(int*)func_001E8A44(count*4);c=(int*)func_001E8A44(count*4);d=(int*)func_001E8A44(count*4);for(int i=0;i<count;i++){list->func_001577A0(nodes[i],1024);list->func_001577A0(other[i],0);a[i]=0;b[i]=0;c[i]=0;d[i]=0;v66(i);v67(i);}if(flag)v65();}
Result_A0B* r=(Result_A0B*)func_001E8A44(0x28);D_002EFE78=r?r->func_00193490():0;D_002EFE78->node=other[0];D_002EFE78->special=D_002F07E8;return 1;
}

extern "C" int strcmp(const char *a, const char *b);
int C_000A0AE0::func_000A10B0(int a)
{
    char buf[0x104];
    C_001702B0_000A0260 *pm;

    func_001ADCC0(D_002A5558, 0x104, D_00275678, D_002A5348, D_002A5450);
    if (f388 == 0) {
        return 1;
    }
    if (strcmp((char *)f388 + 0x420, "none") != 0) {
        strcpy(buf, (char *)f388 + 0x420);
        pm = (C_001702B0_000A0260 *)func_001E8A44(0x174);
        f488 = pm ? pm->func_001702B0(1) : 0;
        if (f488->v27(buf, a) == 0) {
            f488->v2();
            f488 = 0;
            return 0;
        }
        D_002A829C->func_00161680();
        D_002AA6C0->func_001B2640();
        return 1;
    }
    return 0;
}

