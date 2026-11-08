/* 11 functions from 0x0006D3E0 to 0x0006E330, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Objective_6D {
 char pad[0x1a8]; int f1a8;
 int func_00096740();
};
struct Objectives_6D {
 int func_000976A0();
 int func_00097C60();
 Objective_6D **func_00097C20();
};
struct Text_6D {
 char pad[0x34]; int scale; char pad38[0x10]; unsigned int color; char pad4c[2]; unsigned char flags;
 void func_001D6600();
 void func_0005E840(const char *);
};
extern char D_00278AEC[];
int func_001ADCC0(char *, unsigned int, const char *, ...);

struct C_0006DF20 {
    void func_0006DF20(int param_1);
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern int D_0027850C;
extern int D_00278A7C;
extern int D_00278AF0;
extern float D_00278500;
extern int D_002B902C;
extern int D_002B9030;

struct ClampObj_0006DD40 { char pad0[0x10]; float f10, f14; };
struct MidObj_0006DD40 { ClampObj_0006DD40 *func_0018C070(); };
struct LookupObj_0006DD40 { int *func_0018C160(int); void func_0018C780(int n, int *ids, int zero); };
extern int D_002786A0, D_00278690, D_00278678;
extern float D_00275AEC;

struct S_0006D750_Obj {
    char pad0[4];
    char pad4[0x24];
    int width;
    int height;
    char pad30[8];
    union {
        unsigned int color;
        struct { unsigned int lo : 24; unsigned int hi : 8; } cb;
    };
    float a, b, c, d;
    float w, h;
    char pad54[4];
    unsigned char flags;
    S_0006D750_Obj *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
};

struct S_0006D750_Txt {
    int pad0, x, y;
    char padC[0x38];
    int align;
    unsigned int color;
    char pad4c[2];
    unsigned char flags;
    S_0006D750_Txt *func_001D5E90();
    void func_001D5FA0(int font, char *name, int size, int z);
    void func_001D6190(int a, int b, int c);
};

struct S_002A60B0 { int f0, f4, f8, fC; unsigned char f10; };
extern S_002A60B0 D_002A60B0, D_00278664;
void *func_001E8A44(int size);
extern float D_00275544, D_00278650, D_00278654, D_0027653C, D_00275800, D_00278AE8;
extern char D_00278658[], D_00278638[], D_00278608[], D_00278600[];
extern char D_00275678[], D_002A5870[], D_002A5FA8[];
extern int D_0028F5EC, D_0028F5E0;

static __forceinline void pos6D(S_0006D750_Txt *p, int x, int y) { if (p->x != x || p->y != y) { p->y = y; p->x = x; p->flags |= 6; } }
static __forceinline void align6D(S_0006D750_Txt *p, int a) { if (p->align != a) { p->align = a; p->flags |= 6; } }
static __forceinline void color6D(S_0006D750_Txt *p, unsigned int c) { if (p->color != c) { p->flags |= 8; p->color = (p->color & (c | 0xff000000)) | (c & 0xffffff); } }
static __forceinline void uv6D(S_0006D750_Obj *p) { float a = D_00278654 * p->w; p->flags |= 4; p->a = a; p->b = D_00275544 * p->w; p->c = D_0027653C * p->h; p->d = D_00275544 * p->h; }
static __forceinline void width6D(S_0006D750_Obj *p, int v) { if (p->width != v) { p->width = v; p->flags |= 1; } }
static __forceinline void height6D(S_0006D750_Obj *p, int v) { if (p->height != v) { p->height = v; p->flags |= 1; } }
struct C_001D5AD0 {
    ClampObj_0006DD40 *func_001D5AA0();
    void func_001D5AD0(void);
};

struct C_000601D0 {
    void func_000601D0(void);
};

struct C_0006E250_E8 {
    char pad0[0x160];
    C_000601D0 *f160;
    char pad164[0x5c]; Objectives_6D *p1C0;
};

struct CreatorObj {
    int func_00026500(int a, int b);
};
extern CreatorObj *D_002A7CB8;

struct C_002A8490 {
    char pad0[0x270];
    int f270;
    int f274;
    char pad278[0x70];
    int **p2E8;
    LookupObj_0006DD40 *p2EC;
};
extern C_002A8490 *D_002A8490;

struct C_0006D590_V {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

/* LevelObjectivesMenu */
struct C_0006D590 {
    void *vtbl;
    char pad4[0x20];
    u32 unk24[8];
    u32 unk44[8];
    int unk64;
    u32 unk68[15];
    C_001D5AD0 *unkA4;
    C_001D5AD0 *unkA8;
    C_001D5AD0 *unkAC;
    C_001D5AD0 *unkB0[5];
    C_001D5AD0 *unkC4[5];
    C_001D5AD0 *unkD8;
    C_001D5AD0 *unkDC;
    int unkE0;
    int unkE4;
    C_0006E250_E8 *unkE8;
    float unkEC;
    C_001D5AD0 *unkF0;
    int unkF4;
    int unkF8;
    void func_00157600(int a0);
    void func_00157660();
    void func_0006D640();
    int func_00157960();
    void func_0006DFC0();
    void func_0006DD40();
    void func_001578D0();
    C_0006D590 *func_0006D590(int a0);
    C_0006D590 *func_0006D750(C_0006E250_E8 *arg);
    void func_0006DF50();
    int func_0006E1E0();
    int func_0006E250(float dt);
};

struct PtrObj_0006D {
    void func_001D6410(void);
};
struct VObj_0006D {
    virtual void v0(int flags);
};
void func_001E891B(void *p);
void func_00157660(void);

struct C_00031610 {
    void func_00031610(int param_1, int param_2);
};

int func_001361E0(int, int, int *, int);
extern int D_002B9028;
extern float D_00275544;
struct HorseResultsScreen {
    char pad0[0xD0];
    int unkD0;
    C_00031610 *unkD4;
    int unkD8;
    float unkDC;
    int unkE0, unkE4, unkE8, unkEC;
    int func_0006D3E0(int *a, int b);
    int func_00157BF0(int *a, int b);
};

struct C_0006E2C0 {
    char pad0[0x64];
    int unk64;
    char pad68[0x80];
    C_00031610 *unkE8;
    int unkEC;
    char padF0[8];
    int unkF8;
    int func_0006E2C0(int *param_1, int param_2);
};

void C_0006D590::func_0006DFC0() {
 int id;
 char buf[64];
 ((Text_6D*)unkE0)->func_001D6600();
 if(unkE8->p1C0->func_000976A0()==0) id=0xd6;
 else if(unkE8->p1C0->func_000976A0()==1) id=0xd8;
 else if(unkE8->p1C0->func_000976A0()==2) id=0xda;
 else if(unkE8->p1C0->func_000976A0()==3) id=0xdc;
 ((Text_6D*)unkF4)->func_0005E840((char*)D_002A8490->p2E8[1][id*2]);
 ((Text_6D*)unkF4)->func_001D6600();
 if(unkE8->p1C0) {
 int one=0x3f800000;
 int count=unkE8->p1C0->func_00097C60();
 Objective_6D **list=unkE8->p1C0->func_00097C20();
 if(count==0) {
 Text_6D *p=(Text_6D*)unk68[0];
 p->func_0005E840((char*)D_002A8490->p2E8[1][0x1ba]);
 p=(Text_6D*)unk68[0];
 if(p->color!=0xff5eff5e) { p->flags|=8; p->color=(p->color&0xff5eff5e)|0x5eff5e; }
 p=(Text_6D*)unk68[0];
 if(p->scale!=one) {unsigned char f=(*(volatile unsigned char*)&p->flags)|6;p->scale=one;(*(volatile unsigned char*)&p->flags)=f;}
 ((Text_6D*)unk68[0])->func_001D6600();
 return;
 }
 int i=0;
 if(count>0) {
 u32 *out=unk68;
 do {
 if(!list[i]->f1a8) {
 func_001ADCC0(buf,0x104,D_00278AEC,list[i]);
 ((Text_6D*)*out)->func_0005E840(buf);
 if(list[i]->func_00096740()) {
 Text_6D *p=(Text_6D*)*out;
 if(p->color!=0xff5eff5e) {unsigned char f=(*(volatile unsigned char*)&p->flags)|8;p->color=(p->color&0xff5eff5e)|0x5eff5e;(*(volatile unsigned char*)&p->flags)=f;}
 } else {
 Text_6D *p=(Text_6D*)*out;
 if(p->color!=0xffcccccc) {unsigned char f=(*(volatile unsigned char*)&p->flags)|8;p->color=(p->color&0xffcccccc)|0xcccccc;(*(volatile unsigned char*)&p->flags)=f;}
 }
 Text_6D *p=(Text_6D*)*out;
 if(p->scale!=one) {p->flags|=6;p->scale=one;}
 ((Text_6D*)*out)->func_001D6600();
 ++out;
 }
 } while(++i<*(volatile int*)&count);
 }
 }
 }

