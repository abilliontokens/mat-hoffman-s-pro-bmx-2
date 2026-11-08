/* 8 functions from 0x00096450 to 0x00097050, found by Ghidra. */
#include "common.h"

void func_001E891B(void *p);
int func_001EA426(const char *a, const char *b);
extern float D_00275544;

struct C_00012140 {
    void func_00012140(void);
};

struct Q_Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(int a); };
struct Q_Click { void func_001B65D0(void); };
struct Q_Sub {
    void func_0001B9E0(void *e, int a, int b);
    void func_0001B820(void *e);
    void func_0001BDB0(int i);
    void func_0001BB00(int i, char *s, int f);
};
struct Q_List { char pad0[0x24]; int count; char **items; };
struct Q_P64 { char pad0[0x3ac]; Q_List *f3AC; char pad3B0[0xd4]; Q_Sub *f484; };
struct Q_Mgr { char pad0[0x64]; Q_P64 *f64; char pad68[0x160]; void **f1C8; };
struct Q_Vec { float x, y, z, w; };
struct Q_Actor {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(int n); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32();
    void func_001A2A10(int n);
};
struct Q_Lookup { Q_Actor *func_0001D450(char *name); };
struct Q_Indices {
    void func_0005C280(int n);
    void func_0005C1E0(int n);
    char *func_0005C020(int n);
};
struct Q_Root { char pad0[4]; Q_Lookup *f4; char pad8[0x29c]; Q_Mgr *f2A4; };
struct Q_MgrCalls {
    void func_00052630(char *s);
    void func_00032E50(Q_Vec v);
    void func_00033090(char *s, Q_Vec v, int n);
};
extern Q_Root *D_002A8490;
void __stdcall func_00052630(char *s);
extern "C" char *__cdecl strcpy(char *d, const char *s);
struct C_00096450 {
    char pad0[0x2ff8];
    char s2ff8[10][0x78];
    char s34a8[10][0x78];
    char s3958[10][0x78];
    char s3e08[10][0x78];
    char s42b8[10][0x78];
    char s4768[10][0x78];
    char pad4c18[0x50c8 - 0x4c18];
    char s50c8[10][0x78];
    char s5578[10][0x78];
    char s5a28[10][0x78];
    char s5ed8[10][0x78];
    char pad6388[0x63d8 - 0x6388];
    Q_Click *a63d8[10];
    Q_Click *a6400[10];
    Q_Obj *a6428[10];
    void func_00096450(int idx);
};

struct C_00096AB0 {
    char pad0[0x1cc];
    int f1cc;
    void func_00096AB0(void);
};

struct C_00096700 {
    char pad0[0x4880];
    C_00012140 *arr4880[12];
    void func_00096700(void);
};

struct C_00096870_Entry {
    char name[0x78];
};

struct C_00096870_Elem {
    int f0;
    char pad4[0x2550];
    int f2554;
    char pad2558[0xa0];
    C_00096870_Entry entries[131];
    char pad6360[0x28];
    void *ptrs[1];
};

struct C_00096870 {
    char pad0[0x1b8];
    int f1b8;
    char pad1bc[0x1c8 - 0x1bc];
    C_00096870_Elem **f1c8;
    void func_00096870(const char *name);
};

struct C_00096FE0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
};

struct C_00096FE0 {
    char pad0[0x1cc];
    int f1cc;
    char pad1d0[0x3ad0 - 0x1d0];
    float arr3ad0[0x378];
    C_00096FE0_Obj *arr48b0[1];
    void func_00096FE0(float dt);
};

struct C_00096740 {
    char pad0[0x48E0];
    int unk48E0;
    int func_00096740(void);
};

struct C_00096930_Elem {
    int f0;
    char pad4[0x3c];
    int f40;
    char pad44[0x6388 - 0x44];
    void *ptrs[10];
    float vals[10];
};

struct C_00096930 {
    char pad0[0x1b8];
    int f1b8;
    char pad1bc[0x1c8 - 0x1bc];
    C_00096930_Elem **f1c8;
    void func_00096930(void);
};

struct C_00096750_Elem {
    int f0;
    char pad4[0x2550];
    int f2554;
    char pad2558[0x6388 - 0x2558];
    void *ptrs[10];
};

struct C_00096750 {
    char pad0[0x1b8];
    int f1b8;
    char pad1bc[0x1c8 - 0x1bc];
    C_00096750_Elem **f1c8;
    char pad1cc[0x48e0 - 0x1cc];
    int f48e0;
    void func_00096750(void);
};


void C_00096450::func_00096450(int idx)
{
    char buf[0x104];
    char buf2[0x104];
    Q_Mgr *mgr;
    Q_P64 *p;
    char *e;
    int i;
    int found;
    int busy;

    strcpy(buf, s2ff8[idx]);
    mgr = D_002A8490->f2A4;
    p = mgr->f64;
    if (buf[0]) {
        found = 0;
        for (i = 0; i < p->f3AC->count && !found; i++) {
            e = p->f3AC->items[i];
            if (func_001EA426(e + 0xa0, buf) == 0) {
                p->f484->func_0001B9E0(e, 0, 0);
                found = 1;
            }
        }
    }
    strcpy(buf, s34a8[idx]);
    if (buf[0]) {
        found = 0;
        for (i = 0; i < p->f3AC->count && !found; i++) {
            e = p->f3AC->items[i];
            if (func_001EA426(e + 0xa0, buf) == 0) {
                mgr->f64->f484->func_0001B820(e);
                found = 1;
            }
        }
    }
    if (s3958[idx][0] && s3e08[idx][0]) {
        found = 0;
        for (i = 0; i < mgr->f64->f3AC->count && !found; i++) {
            e = mgr->f64->f3AC->items[i];
            if (func_001EA426(e + 0xa0, s3958[idx]) == 0) {
                mgr->f64->f484->func_0001BDB0(i);
                mgr->f64->f484->func_0001BB00(i, s3e08[idx], found);
                found = 1;
            }
        }
    }
    strcpy(buf2, s4768[idx]);
    busy = mgr->f1C8 != 0;
    if (!busy && buf2[0])
        func_00052630(buf2);
    if (s42b8[idx][0] && !D_002A8490->f2A4->f1C8)
        a6428[idx]->v5(4);
    if (s5578[idx][0] && s50c8[idx][0])
        a63d8[idx]->func_001B65D0();
    if (s5ed8[idx][0] && s5a28[idx][0])
        a6400[idx]->func_001B65D0();
}

void C_00096700::func_00096700(void) {
    int i;

    for (i = 0; i < 12; i++) {
        C_00012140 *p = arr4880[i];
        if (p != 0) {
            p->func_00012140();
            func_001E891B(p);
            arr4880[i] = 0;
        }
    }
}

int C_00096740::func_00096740(void) {
    return unk48E0;
}

void C_00096750::func_00096750(void) {
    int i;
    int j;

    for (i = 0; i < f1b8; i++) {
        C_00096750_Elem *e = f1c8[i];
        if (e->f0 == 1) {
            int ok = 1;
            for (j = 0; j < f1c8[i]->f2554; j++) {
                if (e->ptrs[j] == 0) {
                    ok = 0;
                }
            }
            if (!ok) {
                f48e0 = 0;
                f1c8[i]->ptrs[0] = 0;
                f1c8[i]->ptrs[1] = 0;
                f1c8[i]->ptrs[2] = 0;
                f1c8[i]->ptrs[3] = 0;
                f1c8[i]->ptrs[4] = 0;
                f1c8[i]->ptrs[5] = 0;
                f1c8[i]->ptrs[6] = 0;
                f1c8[i]->ptrs[7] = 0;
                f1c8[i]->ptrs[8] = 0;
                f1c8[i]->ptrs[9] = 0;
            }
        }
    }
}

void C_00096870::func_00096870(const char *name) {
    int i;
    int j;

    for (i = 0; i < f1b8; i++) {
        C_00096870_Elem *e = f1c8[i];
        if (e->f0 == 1) {
            for (j = 0; j < e->f2554; j++) {
                if (func_001EA426(f1c8[i]->entries[j].name, name) == 0) {
                    f1c8[i]->ptrs[j] = 0;
                }
                e = f1c8[i];
            }
        }
    }
}

void C_00096930::func_00096930(void) {
    int i;

    for (i = 0; i < f1b8; i++) {
        C_00096930_Elem *e = f1c8[i];
        if (e->f0 == 1) {
            e->f40 = 0;
            f1c8[i]->ptrs[0] = 0;
            f1c8[i]->vals[0] = -1.0f;
            f1c8[i]->ptrs[1] = 0;
            f1c8[i]->vals[1] = -1.0f;
            f1c8[i]->ptrs[2] = 0;
            f1c8[i]->vals[2] = -1.0f;
            f1c8[i]->ptrs[3] = 0;
            f1c8[i]->vals[3] = -1.0f;
            f1c8[i]->ptrs[4] = 0;
            f1c8[i]->vals[4] = -1.0f;
            f1c8[i]->ptrs[5] = 0;
            f1c8[i]->vals[5] = -1.0f;
            f1c8[i]->ptrs[6] = 0;
            f1c8[i]->vals[6] = -1.0f;
            f1c8[i]->ptrs[7] = 0;
            f1c8[i]->vals[7] = -1.0f;
            f1c8[i]->ptrs[8] = 0;
            f1c8[i]->vals[8] = -1.0f;
            f1c8[i]->ptrs[9] = 0;
            f1c8[i]->vals[9] = -1.0f;
        }
    }
}

void C_00096AB0::func_00096AB0(){Q_Mgr*mgr=D_002A8490->f2A4;char buf[260];int i=0;if(f1cc<=0)return;Q_Vec*v=(Q_Vec*)((char*)this+0x4100);char *e=(char*)this+0x830;char*s=(char*)this+0x48b0;int delta=buf-(char*)this-0x29f0;do{int k,found;char*o;char *name=e-1440;
if(*name){found=0;for(k=0;k<mgr->f64->f3AC->count&&!found;k++){o=mgr->f64->f3AC->items[k];if(!func_001EA426(o+160,e-1440)){mgr->f64->f484->func_0001B9E0(o,0,0);found=1;}}}
if(e[0]){found=0;for(k=0;k<mgr->f64->f3AC->count&&!found;k++){o=mgr->f64->f3AC->items[k];if(!func_001EA426(o+160,e)){mgr->f64->f484->func_0001B820(o);found=1;}}}
if(!mgr->f1C8){name=e+1440;if(*name)((Q_MgrCalls*)mgr)->func_00052630(name);}
name=e+4320;if(*name){char *replacement=e+2880;if(*replacement){found=0;for(k=0;k<mgr->f64->f3AC->count&&!found;k++){o=mgr->f64->f3AC->items[k];if(!func_001EA426(o+160,name)){mgr->f64->f484->func_0001BDB0(k);mgr->f64->f484->func_0001BB00(k,replacement,found);found=1;}}}}
name=e;if(name[5760]&&name[7200])(*(Q_Click**)(s-48))->func_001B65D0();
name=e+8640;if(*name){char c;do{c=*name;name[delta]=c;name++;}while(c);found=-1;for(k=0;k<(*(Q_List**)((char*)mgr->f64+0x3b4))->count&&found==-1;k++){o=(*(Q_List**)((char*)mgr->f64+0x3b4))->items[k];if(!func_001EA426(buf,o+24)){found=k;(*(Q_Actor**)(o+4))->v6();}}}
name=e+10080;if(*name){Q_Actor*a=D_002A8490->f4->func_0001D450(name);if(a)a->v32();}
if(e[11520]&&!D_002A8490->f2A4->f1C8){if(*(float*)(s-0xdb0)==D_00275544)(*(Q_Actor**)s)->v5(4);else *(float*)(s-0xde0)=*(float*)(s-0xdb0);}
name=e+13056;if(*name&&!D_002A8490->f2A4->f1C8){Q_Actor*a=D_002A8490->f4->func_0001D450(name);if(a&&*(int*)(s-0x7e0)!=-1)a->func_001A2A10(*(int*)(s-0x7e0));}
if(v->x!=D_00275544||v->y!=D_00275544||v->z!=D_00275544)((Q_MgrCalls*)mgr)->func_00032E50(*v);
name=e+14736;if(*name)((Q_MgrCalls*)mgr)->func_00033090(name,*(Q_Vec*)((char*)v+0x660),0);
if(*(int*)(s-144)!=-1&&*(int*)(s-96)!=-1){Q_List*l=*(Q_List**)((char*)mgr->f64+0x3c0);char*g=l->items[*(int*)(s-144)-1];Q_Actor*a=(*(Q_Actor***)(g+4))[*(int*)(s-96)-1];a->v32();a->v30();a->v6();}
if(*(int*)(s-0x46e0)!=-1)(*(Q_Indices**)((char*)mgr+104))->func_0005C280(*(int*)(s-0x46e0));if(*(int*)(s-0x4650)!=-1)(*(Q_Indices**)((char*)mgr+104))->func_0005C1E0(*(int*)(s-0x4650));
if(*(int*)(s-0x4680)!=-1){char*p=(*(Q_Indices**)((char*)mgr+104))->func_0005C020(*(int*)(*(char**)((char*)D_002A8490+736)+728));*(int*)(p+1592+*(int*)(s-0x4680)*4)=1;}
if(*(int*)(s-0x46b0)!=-1){char*p=(*(Q_Indices**)((char*)mgr+104))->func_0005C020(*(int*)(*(char**)((char*)D_002A8490+736)+728));*(int*)(p+1580+*(int*)(s-0x46b0)*4)=1;}
{Q_Vec*nv=v+1;int nd=delta-120;char*ne=e+120;v=nv;i++;s+=4;delta=nd;e=ne;}}while(i<f1cc);}

void C_00096FE0::func_00096FE0(float dt) {
    int i;

    for (i = 0; i < f1cc; i++) {
        if (arr3ad0[i] > D_00275544) {
            arr3ad0[i] -= dt;
            if (arr3ad0[i] <= D_00275544) {
                arr3ad0[i] = 0;
                arr48b0[i]->v5(4);
            }
        }
    }
}

