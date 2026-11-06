/* 27 functions from 0x0008A190 to 0x0008AED0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_00278664, D_00278668, D_0027866C, D_00278670;
extern unsigned char D_00278674, D_002A60C0;
extern int D_002A60B0, D_002A60B4, D_002A60B8, D_002A60BC, D_0028F5DC;
extern char D_00278648[], D_00279C28[], D_00278638[], D_00279008[], D_00279C1C[], D_00279038[], D_00279044[], D_00279C14[], D_00279C0C[], D_002A5FA8[], D_002A5870[], D_00275678[], D_00279C00[], D_00279BF4[], D_00279BE8[], D_00279BDC[], D_00279BD0[];
void func_001ADCC0(void *, int, const void *, const void *, const void *);
extern float D_00279B5C;
extern float D_00279B58;
extern float D_00279B54;
extern float D_00279B50;
extern float D_00279B4C;
int func_001E8858(float f);
struct E190 { void func_001D5AD0(); };
struct R190 { int func_000377E0(); };
struct T190 { char pad0[0x28]; float f28; char pad2c[0xc]; unsigned int c38; char pad3c[0x1c]; unsigned char b58; void func_001D5AD0(); };
struct C_0008A190 {
    char pad0[0x34];
    E190 *e34[12];
    E190 *e64, *e68, *e6c, *e70, *e74, *e78, *e7c, *e80;
    E190 *e84[6];
    T190 *t9c;
    char pada0[0x80];
    R190 *r120;
    char pad124[4];
    int f128;
    int f12c;
    int func_0008A190();
};
extern int D_00279C3C;
extern int D_00279B64;
void func_001E891B(void *p);

extern int D_002B9090;
extern int D_002B908C;
extern int D_00279CA8;
extern float D_00275AEC;
extern int D_00278690;
extern int D_0027958C;
extern int D_00275630;
extern int D_0028F5E0;

void *func_001E8A44(int a);

struct ClampObj {
    char pad0[0x10];
    float f10;
    float f14;
};

struct LookupObj {
    int *func_0018C160(int a);
    void func_0018C780(int a, int *b, int c);
};

struct GlobalObj {
    char pad0[0x2ec];
    LookupObj *lookup;
};

extern GlobalObj *D_002A8490;

struct MidObj {
    ClampObj *func_0018C070();
};

struct CreatorObj {
    int func_00026500(int a, int b);
};

extern CreatorObj *D_002A7CB8;

struct NodeObj {
    char pad0[0x4];
    int f4;
    int f8;
    char pad0c[0x38];
    int f44;
    unsigned int u48;
    char pad4c[0x2];
    unsigned char b4e;
    void func_001D6600();
    void func_001D5FA0(int a, int b, int c, int d);
};

struct AllocObj8 {
    NodeObj *func_001D5E90();
};

struct C_0008ABA0 {
    void *vtbl;
    char pad4[0x20];
    NodeObj *unk24;
    void func_0008ABA0();
    void func_00157960();
    C_0008ABA0 *func_0008AAD0();
};

struct C_0008AC10 {
    void *vtbl;
    char pad4[0x20];
    NodeObj *unk24;
    C_0008AC10 *func_0008AC10();
};

struct C_0008ACF0 {
    void func_001578D0();
    void func_0008ACF0();
};

struct PtrObj_0008 {
    void func_001D6410();
    void func_001D6600();
};

struct SubElem_0008 {
    char pad0[0x28];
 int x28, y2c; char pad30[0x28]; unsigned char flags58; char pad59[11];
 void func_001D5810(const void *, float, float, int);
 void init(const void *name) { func_001D5810(name,20.0f,388.0f,0); if(x28!=0x42280000){x28=0x42280000;flags58|=1;} if(y2c!=0x42280000){y2c=0x42280000;flags58|=1;} }
    void func_001D5760();
    void func_001D57E0();
    ClampObj *func_001D5AA0();
    void func_001D5AD0();
};

struct C_0008AAB0 {
    void *vtbl;
    char pad4[0x20];
    void *unk24;
    C_0008AAB0 *func_0008AAB0(int a0);
    void func_00157600(int a0);
};

struct C_0008A2E0 {
    void *vtbl;
    char pad4[0x20];
    PtrObj_0008 *ptrs[5];
    SubElem_0008 elems[9];
    char pad3BC[0x100];
    int vals[5];
    char pad4D0[0x8];
    int unk4D8;
    int unk4DC;
    C_0008A2E0 *func_0008A2E0(int a0);
    void func_00157600(int a0);
    void func_00157660();
    void func_0008A350();
 C_0008A2E0 *func_0008A3B0();
    void func_0008A8C0();
    void func_0008A9B0();
    int func_0008AA70();
    void func_001578D0();
};

struct C_0008A8F0 {
    undefined4 func_0008A8F0(int param_1);
};

struct C_0008AB90 {
    char pad0[0x28];
    int unk28;
    int func_0008AB90(int a0);
};

struct C_0008A9A0 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A9A0(void);
};

struct C_0008A990 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A990(void);
};

struct C_0008A980 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A980(void);
};

struct C_0008A970 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A970(void);
};

struct C_0008A960 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A960(void);
};

struct C_0008A950 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A950(void);
};

struct C_0008A940 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A940(void);
};

struct C_0008A930 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A930(void);
};

struct C_0008A920 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A920(void);
};

struct C_0008A910 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A910(void);
};

extern int D_00279CCC;
extern int D_00279D3C;
extern int D_002B9098;
extern int D_002B9094;

struct C_0008ABF0 {
    void *vtbl;
    char pad4[0x20];
    void *unk24;
    C_0008ABF0 *func_0008ABF0(int a0);
    void func_00157600(int a0);
};

struct C_0008AD60 {
    void *vtbl;
    char pad4[0x20];
    NodeObj *unk24;
    void func_0008AD60();
    void func_00157960();
};

struct C_0008ADB0 {
    void *vtbl;
    char pad4[0x20];
    void *unk24;
    void *unk28;
    void *unk2c;
    void *unk30;
    void *unk34;
    char pad38[0x4];
    void *unk3c;
    void *unk40;
    void *unk44;
    int unk48;
    int unk4c;
    int unk50;
    int unk54;
    C_0008ADB0 *func_0008ADB0(int a0);
    void func_00157600(int a0);
};

struct VirtObj_0008 {
    virtual void v0(int a);
};

struct C_0008ADF0 {
    void *vtbl;
    char pad4[0x20];
    PtrObj_0008 *unk24;
    PtrObj_0008 *unk28;
    PtrObj_0008 *unk2c;
    PtrObj_0008 *unk30;
    PtrObj_0008 *unk34;
    PtrObj_0008 *unk38;
    VirtObj_0008 *unk3c;
    VirtObj_0008 *unk40;
    VirtObj_0008 *unk44;
    void func_0008ADF0();
    void func_00157660();
};


int C_0008A190::func_0008A190()
{
 int i; for(i=0;i<12;i++) e34[i]->func_001D5AD0();
 if(f128){e68->func_001D5AD0();e70->func_001D5AD0();}else{e64->func_001D5AD0();e6c->func_001D5AD0();}
 if(f12c){e78->func_001D5AD0();e80->func_001D5AD0();}else{e74->func_001D5AD0();e7c->func_001D5AD0();}
 for(i=0;i<6;i++)e84[i]->func_001D5AD0();
 int n=r120->func_000377E0(); float v=(float)n*D_00279B5C; float t=D_00279B58*v;
 T190 *o=t9c; if(t!=o->f28){o->f28=t;o->b58|=1;}
 unsigned int col;
 if(v<=D_00279B54){col=((int)(double(v)*D_00279B50)<<16)|0xff00ff00;}
 else{int m=-(int)((v-D_00279B54)*D_00279B4C);col=(~(m<<8)&0xffffff00)|0xffff0000;}
 o=t9c;unsigned int old=o->c38;o->c38=old^((o->c38^col)&0xffffff);o->b58|=2;
 t9c->func_001D5AD0();return 1;
}

C_0008A2E0 *C_0008A2E0::func_0008A2E0(int a0) {
    func_00157600(1);
    vtbl = &D_00279B64;
    int i;
    for (i = 0; i < 9; i++) {
        elems[i].func_001D5760();
    }
    for (i = 0; i < 5; i++) {
        ptrs[i] = 0;
        vals[i] = -1;
    }
    unk4D8 = 1;
    unk4DC = 10;
    return this;
}

void C_0008A2E0::func_0008A350() {
    vtbl = &D_00279B64;
    int i;
    for (i = 0; i < 5; i++) {
        PtrObj_0008 *p = ptrs[i];
        if (p != 0) {
            p->func_001D6410();
            func_001E891B(p);
        }
    }
    SubElem_0008 *e = elems + 9;
    i = 9;
    do {
        e--;
        e->func_001D57E0();
        i--;
    } while (i != 0);
    func_00157660();
}

C_0008A2E0 *C_0008A2E0::func_0008A3B0() { int key; int *found; int resource; void *m; NodeObj *p;
 D_002A60B0=D_00278664; D_002A60B4=D_00278668; D_002A60B8=D_0027866C; D_002A60BC=D_00278670; D_002A60C0=D_00278674;
elems[0].func_001D5810(D_00278648,20.0f,388.0f,0);
elems[1].func_001D5810(D_00279C28,20.0f,388.0f,0);
elems[2].func_001D5810(D_00278638,20.0f,388.0f,0);
elems[3].func_001D5810(D_00279008,20.0f,388.0f,0);
elems[4].init(D_00279C1C);
elems[5].init(D_00279038);
elems[6].init(D_00279044);
elems[7].init(D_00279C14);
elems[8].init(D_00279C0C);
func_001ADCC0(&D_002A60B0,260,D_00275678,D_002A5870,D_002A5FA8); key=(int)&D_00278690; D_002A8490->lookup->func_0018C780(1,&key,0); found=D_002A8490->lookup->func_0018C160((int)&D_00278690); resource=found?*found:0;
m=func_001E8A44(0x60); p=m?((AllocObj8*)m)->func_001D5E90():0; ptrs[0]=(PtrObj_0008*)p; p->func_001D5FA0(resource,(int)&D_00278690,15,(int)D_00279C00); p=(NodeObj*)ptrs[0]; if(p->f4!=1113325568 || p->f8!=0x43c70000){p->f4=1113325568;p->f8=0x43c70000;p->b4e|=6;} p=(NodeObj*)ptrs[0]; if(p->u48!=0xffcccccc){p->b4e|=8;p->u48=(p->u48&0xffcccccc)|0xcccccc;} p=(NodeObj*)ptrs[0]; if(p->f44!=D_0028F5DC){p->f44=D_0028F5DC;p->b4e|=6;}
m=func_001E8A44(0x60); p=m?((AllocObj8*)m)->func_001D5E90():0; ptrs[1]=(PtrObj_0008*)p; p->func_001D5FA0(resource,(int)&D_00278690,15,(int)D_00279BF4); p=(NodeObj*)ptrs[1]; if(p->f4!=1126039552 || p->f8!=0x43c70000){p->f4=1126039552;p->f8=0x43c70000;p->b4e|=6;} p=(NodeObj*)ptrs[1]; if(p->u48!=0xffcccccc){p->b4e|=8;p->u48=(p->u48&0xffcccccc)|0xcccccc;} p=(NodeObj*)ptrs[1]; if(p->f44!=D_0028F5DC){p->f44=D_0028F5DC;p->b4e|=6;}
m=func_001E8A44(0x60); p=m?((AllocObj8*)m)->func_001D5E90():0; ptrs[2]=(PtrObj_0008*)p; p->func_001D5FA0(resource,(int)&D_00278690,15,(int)D_00279BE8); p=(NodeObj*)ptrs[2]; if(p->f4!=1133477888 || p->f8!=0x43c70000){p->f4=1133477888;p->f8=0x43c70000;p->b4e|=6;} p=(NodeObj*)ptrs[2]; if(p->u48!=0xffcccccc){p->b4e|=8;p->u48=(p->u48&0xffcccccc)|0xcccccc;} p=(NodeObj*)ptrs[2]; if(p->f44!=D_0028F5DC){p->f44=D_0028F5DC;p->b4e|=6;}
m=func_001E8A44(0x60); p=m?((AllocObj8*)m)->func_001D5E90():0; ptrs[3]=(PtrObj_0008*)p; p->func_001D5FA0(resource,(int)&D_00278690,15,(int)D_00279BDC); p=(NodeObj*)ptrs[3]; if(p->f4!=1137639424 || p->f8!=0x43c70000){p->f4=1137639424;p->f8=0x43c70000;p->b4e|=6;} p=(NodeObj*)ptrs[3]; if(p->u48!=0xffcccccc){p->b4e|=8;p->u48=(p->u48&0xffcccccc)|0xcccccc;} p=(NodeObj*)ptrs[3]; if(p->f44!=D_0028F5DC){p->f44=D_0028F5DC;p->b4e|=6;}
m=func_001E8A44(0x60); p=m?((AllocObj8*)m)->func_001D5E90():0; ptrs[4]=(PtrObj_0008*)p; p->func_001D5FA0(resource,(int)&D_00278690,15,(int)D_00279BD0); p=(NodeObj*)ptrs[4]; if(p->f4!=1141342208 || p->f8!=0x43c70000){p->f4=1141342208;p->f8=0x43c70000;p->b4e|=6;} p=(NodeObj*)ptrs[4]; if(p->u48!=0xffcccccc){p->b4e|=8;p->u48=(p->u48&0xffcccccc)|0xcccccc;} p=(NodeObj*)ptrs[4]; if(p->f44!=D_0028F5DC){p->f44=D_0028F5DC;p->b4e|=6;}
return this; }

void C_0008A2E0::func_0008A8C0() {
    int i;
    for (i = 0; i < 5; i++) {
        if (vals[i] >= 0) {
            ptrs[i]->func_001D6600();
        }
    }
}

undefined4 C_0008A8F0::func_0008A8F0(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 == 0) {
    return 0;
  }
  *(int *)(in_ECX + 0x4d0) = param_1;
  return 1;
}

void C_0008A910::func_0008A910(void) {
    unk4D8 = 1;
}

void C_0008A920::func_0008A920(void) {
    unk4D8 = 2;
}

void C_0008A930::func_0008A930(void) {
    unk4D8 = 3;
}

void C_0008A940::func_0008A940(void) {
    unk4D8 = 4;
}

void C_0008A950::func_0008A950(void) {
    unk4D8 = 6;
}

void C_0008A960::func_0008A960(void) {
    unk4D8 = 5;
}

void C_0008A970::func_0008A970(void) {
    unk4D8 = 7;
}

void C_0008A980::func_0008A980(void) {
    unk4D8 = 8;
}

void C_0008A990::func_0008A990(void) {
    unk4D8 = 9;
}

void C_0008A9A0::func_0008A9A0(void) {
    unk4D8 = 10;
}

void C_0008A2E0::func_0008A9B0() {
    int *r = D_002A8490->lookup->func_0018C160((int)&D_00278690);
    MidObj *mid = (MidObj *)(r ? *r : 0);
    ClampObj *o = mid->func_0018C070();
    if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
    if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
    SubElem_0008 *e = elems;
    int n = 9;
    do {
        ClampObj *o2 = e->func_001D5AA0();
        if (D_00275AEC > o2->f10) *(int *)&o2->f10 = 0x41200000;
        if (D_00275AEC < o2->f14 || o2->f14 > o2->f10) *(int *)&o2->f14 = 0x41200000;
        e++;
        n--;
    } while (n != 0);
    func_001578D0();
}

int C_0008A2E0::func_0008AA70() {
    int *v = vals;
    int n = 5;
    do {
        if (*v >= 0) elems[*v].func_001D5AD0();
        v++;
        n--;
    } while (n != 0);
    return 1;
}

C_0008AAB0 *C_0008AAB0::func_0008AAB0(int a0) {
    func_00157600(1);
    vtbl = &D_00279C3C;
    unk24 = 0;
    return this;
}

C_0008ABA0 *C_0008ABA0::func_0008AAD0() {
    int *r = D_002A8490->lookup->func_0018C160((int)&D_0027958C);
    int name = r ? *r : 0;
    void *mem = func_001E8A44(0x60);
    NodeObj *o;
    if (mem) o = ((AllocObj8 *)mem)->func_001D5E90();
    else o = 0;
    unk24 = o;
    o->func_001D5FA0(name, (int)&D_0027958C, 0x4b, (int)&D_00275630);
    o = unk24;
    if (o->f4 != 0x43a00000 || o->f8 != 0x43a50000) {
        o->f4 = 0x43a00000;
        o->f8 = 0x43a50000;
        o->b4e |= 6;
    }
    o = unk24;
    if (o->u48 != 0xffff8000) {
        o->b4e |= 8;
        o->u48 = (o->u48 & 0xffff8000) | 0xff8000;
    }
    o = unk24;
    if (o->f44 != D_0028F5E0) {
        o->f44 = D_0028F5E0;
        o->b4e |= 6;
    }
    return this;
}

int C_0008AB90::func_0008AB90(int a0) {
    unk28 = a0;
    return 1;
}

void C_0008ABA0::func_0008ABA0() {
    if ((D_002B9090 & 1) == 0) {
        D_002B9090 |= 1;
        D_002B908C = D_002A7CB8->func_00026500((int)&D_00279CA8, 0);
    }
    unk24->func_001D6600();
    func_00157960();
}

C_0008ABF0 *C_0008ABF0::func_0008ABF0(int a0) {
    func_00157600(1);
    vtbl = &D_00279CCC;
    unk24 = 0;
    return this;
}

C_0008AC10 *C_0008AC10::func_0008AC10()
{
    int local = (int)&D_0027958C;
    D_002A8490->lookup->func_0018C780(1, &local, 0);
    int *r = D_002A8490->lookup->func_0018C160((int)&D_0027958C);
    int name = r ? *r : 0;
    void *mem = func_001E8A44(0x60);
    NodeObj *o;
    if (mem) o = ((AllocObj8 *)mem)->func_001D5E90();
    else o = 0;
    unk24 = o;
    o->func_001D5FA0(name, (int)&D_0027958C, 0x4b, (int)&D_00275630);
    o = unk24;
    if (o->f4 != 0x43a00000 || o->f8 != 0x43b18000) {
        o->f4 = 0x43a00000;
        o->f8 = 0x43b18000;
        o->b4e |= 6;
    }
    o = unk24;
    if (o->u48 != 0xffff8000) {
        o->b4e |= 8;
        o->u48 = (o->u48 & 0xffff8000) | 0xff8000;
    }
    o = unk24;
    if (o->f44 != D_0028F5E0) {
        o->f44 = D_0028F5E0;
        o->b4e |= 6;
    }
    return this;
}

void C_0008AD60::func_0008AD60() {
    if ((D_002B9098 & 1) == 0) {
        D_002B9098 |= 1;
        D_002B9094 = D_002A7CB8->func_00026500((int)&D_00279CA8, 0);
    }
    unk24->func_001D6600();
    func_00157960();
}

C_0008ADB0 *C_0008ADB0::func_0008ADB0(int a0) {
    func_00157600(1);
    unk24 = 0;
    unk28 = 0;
    unk2c = 0;
    unk30 = 0;
    unk34 = 0;
    unk3c = 0;
    unk40 = 0;
    unk44 = 0;
    unk48 = 0;
    unk50 = 0;
    unk54 = 0;
    vtbl = &D_00279D3C;
    unk4c = 1;
    return this;
}

void C_0008ADF0::func_0008ADF0()
{
    PtrObj_0008 *p = unk24;
    vtbl = &D_00279D3C;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unk28;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unk2c;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unk30;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unk34;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unk38;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    if (unk3c) {
        unk3c->v0(1);
        unk3c = 0;
    }
    if (unk40) {
        unk40->v0(1);
        unk40 = 0;
    }
    if (unk44) {
        unk44->v0(1);
        unk44 = 0;
    }
    func_00157660();
}

