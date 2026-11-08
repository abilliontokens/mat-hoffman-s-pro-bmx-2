/* 8 functions from 0x001467A0 to 0x00147550, found by Ghidra. */
#include "common.h"
struct S_1472_Config {
 void func_00168C20(const void *, int, int *);
 void func_00168BE0(const char *, const void *, char *, int);
 void func_00168C50(const void *, int, int *);
};
extern int D_002862D4, D_002862C4, D_00286264, D_0028624C, D_00286234, D_00286224, D_00286214;
extern int D_00286204, D_002861F4, D_002861E4, D_002861D8, D_002861C0, D_002861B4, D_002861A4;
extern int D_00286194, D_0028618C, D_00286184;
int func_00144BF0(char *, int, int, int);
extern "C" int func_001EA426(const char *, const char *);

/* DXRenderPrologue */
struct C_00146E50 {
 void *vtbl;
 int f4;
 int f8;
 char padC[4];
 int f10;
 int f14;
 char pad18[4];
 int f1C;
 int f20;
 int f24;
 int f28;
 unsigned int bit0 : 1;
 unsigned int rest2C : 31;
 int f30;
 void D_00011420(struct S_1472_Config *cfg);
 int func_00146E50(struct S_1472_Config *cfg);
};
struct S_1472_Object {
 char pad[0xec]; void *fEC;
 S_1472_Object *func_0014A3A0();
 void func_00149620(int,int,int,int,int,int);
 void func_00149E70(int,int,int);
};
struct S_1472_Aux {
 S_1472_Aux *func_00142C70();
 void func_00142C80(const void *,int);
};
extern int D_00286338, D_00286280, D_00286328, D_002862B0, D_0028629C;
extern int D_00286318, D_00276F28, D_00275630, D_00286304;
extern int D_002F0BB8;
extern char *D_002A71C0;
void func_001ADCC0(char *,int,const void *,const void *);
int func_00144AE0(char *,int,int,int);
void *func_001E8A44(int);

extern int D_0028634C;
extern int D_00284E94;
extern int D_0028617C;
extern int D_00286170;
extern int D_002862FC;
extern int D_002862F0;

struct C_001B01D0 { void func_001B01D0(); };
struct C_001B0180 { void func_001B0180(); };
struct C_001B01B0 { void func_001B01B0(); };

void __stdcall func_00200390(int a, int b);

struct S_002EFDB8 {
    char pad0[0x28];
    int f28;
    int f2C;
    char pad30[0x54 - 0x30];
    int *f54;
    int *f58;
};
extern S_002EFDB8 *D_002EFDB8;

struct R146_Call { void func_0014A650(int); void func_00142D00(int); };
struct R146_Entry { int a; int value; int c,d; };
struct R146_Table { char pad[0x14]; R146_Entry *entries; void func_0014A8A0(); void func_00142D20(); };
extern R146_Table *D_002A751C, *D_002A6D84, *D_002AA6C0;
struct R146_Vector { int x,y,z,w; };
struct R146_Constant { int index; R146_Vector value; };
struct R146_State { int stage,state; unsigned value; };
struct R146_Pair { int state; unsigned value; };
struct R146_Texture { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual R146_Texture *v4(int); char pad[0xb4]; int texture, palette; };
struct C_001467A0 {
 char pad[0xa]; unsigned char count; char padb[0xd]; short textures[4];
 char colors[4]; short pad24, id26,id28,pad2a;
 R146_State *states; R146_Pair *render; R146_Constant *constants;
 int stateCount,renderCount,constantCount,save44,save48;
 int func_001AFF80(int);
 void func_001467A0();
};
void __stdcall func_00200510(int,int);
void __stdcall func_001FD8E0(int,unsigned);
void __stdcall func_001FDA60(int,unsigned);
void __stdcall func_001FDAA0(int,unsigned);
void __stdcall func_001FD9F0(int,int,unsigned);
void __fastcall func_001FD020(int,unsigned);
void __fastcall func_001FEC30(int,R146_Vector *);
void __fastcall func_001FEBD0(int,R146_Vector *);
extern unsigned D_0020C6DC,D_0020C6E0[],D_0020C710[],D_002751E8[],D_002752F0[],D_0020C8E0[];
extern "C" unsigned __imp__PsCreateSystemThreadEx[];
extern int D_00040000;
void __stdcall func_001FCFF0(unsigned);
void __stdcall func_001FD890(unsigned);
void __stdcall func_001FD400(unsigned);
void __stdcall func_001FD770(unsigned);
void __stdcall func_001FD7C0(unsigned);
void __stdcall func_001FD820(unsigned);
void __stdcall func_001FD500(unsigned);
void __stdcall func_001FE490(unsigned);
void __stdcall func_001FE520(unsigned);
void __stdcall func_001FE5B0(unsigned);
void __stdcall func_001FD450(unsigned);
void __stdcall func_001FD4C0(unsigned);
void __stdcall func_001FD540(unsigned);
void __stdcall func_001FD690(unsigned);
void __stdcall func_001FD710(unsigned);
void __stdcall func_001FD380(unsigned);
void __stdcall func_001FE810(unsigned);
void __stdcall func_001FE890(unsigned);
void __stdcall func_001FE790(unsigned);
void __stdcall func_001FE7D0(unsigned);
void __stdcall func_001FD3C0(unsigned);
void __stdcall func_001FD5A0(unsigned);
void __stdcall func_001FE8E0(unsigned);
void __stdcall func_001FD610(unsigned);
void __stdcall func_001FE620(unsigned);
void __stdcall func_001FE650(unsigned);
void __stdcall func_001FE6C0(unsigned);
void __stdcall func_001FE730(unsigned);
void __stdcall func_001FE750(unsigned);
void __stdcall func_001FE770(unsigned);

struct C_00147490 {
    void *vtbl;
    C_00147490 *func_00147490();
};

struct S_001474B0_Sub {
    char pad0[0xC];
    int fC;
};

struct S_001474B0_Res {
    char pad0[0x1C];
    char *f1C;
    S_001474B0_Sub *f20;
    void func_001AFEC0();
};

struct S_001474B0_Elem {
    char pad0[0x24];
    unsigned char f24;
    S_001474B0_Res *func_001B0130(unsigned int key);
};

struct S_001474B0_Target {
    void func_00149310(int a, int b, int c, int d);
};

struct S_001474B0_Tbl {
    char pad0[0x10];
    S_001474B0_Target *f10[1];
};

extern S_001474B0_Tbl *D_002F0630;

struct C_001474B0 {
    char pad0[0x50];
    int f50;
    S_001474B0_Elem *f54[32];
    int fD4[32];
    void func_001474B0(int a, int b, unsigned int key);
};

struct C_00146E20 {
    void *vtbl;
    char pad4[0x8];
    void *vtbl2;
    char pad10[0x8];
    int unk18;
    C_00146E20 *func_00146E20();
};

struct C_00147280 {
    void *vtbl;
    void *vtbl2;
    void *unk8;
    C_00147280 *func_00147280();
    int func_001472B0(struct S_1472_Config *cfg);
    void D_00011420(struct S_1472_Config *cfg);
};

struct C_00146DC0 {
    char pad0[0xA];
    u8 unkA;
    char padB[0xD];
    short unk18;
    char pad1A[0x2A];
    int unk44;
    int unk48;
    void func_00146DC0();
};

void C_001467A0::func_001467A0() {
    int i;
    int resource = D_002A751C->entries[id26].value;
    if (!resource) { D_002A751C->func_0014A8A0(); resource = D_002A751C->entries[id26].value; }
    (*(R146_Call **)((char *)D_002EFDB8 + 0x6c))->func_0014A650(resource);
    resource = D_002A6D84->entries[id28].value;
    if (!resource) { D_002A6D84->func_00142D20(); resource = D_002A6D84->entries[id28].value; }
    (*(R146_Call **)((char *)D_002EFDB8 + 0x70))->func_00142D00(resource);
    for (i = 0; i < count; ++i) {
        int id = textures[i];
        if (id < 0) {
            if (id == -3) { save48 = *D_002EFDB8->f58; *D_002EFDB8->f58 = (save48 & 0xfffcffff) | (int)&D_00040000; func_00200390(i, (int)D_002EFDB8->f58); }
            else if (id == -4) { save44 = *D_002EFDB8->f54; *D_002EFDB8->f54 = (save44 & 0xfffcffff) | (int)&D_00040000; func_00200390(i, (int)D_002EFDB8->f54); }
            else if (id == -1) func_00200390(i, 0);
            else func_00200390(i, ((R146_Entry *)*(void **)(D_002A71C0 + 0x14))[-id].value);
        } else {
            R146_Texture *texture = (R146_Texture *)D_002AA6C0->entries[id].value;
            if (texture) {
                int key = func_001AFF80(i);
                texture = texture->v4(key);
                func_00200390(i, texture->texture);
                int palette = texture->palette;
                if (palette) func_00200510(i, palette);
            }
        }
    }
    for (i = 0; i < stateCount; ++i) {
        int state = states[i].state;
        R146_State *p = &states[i]; unsigned value = p->value; int stage = p->stage;
        if (state < 12) { D_0020C6DC |= 1 << stage; D_0020C6E0[stage * 32 + state] = value; }
        else if (state == 12) { D_0020C6DC |= value < 25 ? 0x800 : 0x480f; D_0020C710[stage * 32] = value; }
        else if (state < 22) { D_0020C6DC |= D_002751E8[state]; D_0020C6E0[stage * 32 + state] = value; }
        else if (state == 28) func_001FD8E0(stage, value);
        else if (state == 29) func_001FDA60(stage, value);
        else if (state == 30) func_001FDAA0(stage, value);
        else if (state <= 27) func_001FD9F0(stage, state, value);
    }
    for (i = 0; i < renderCount; ++i) {
        unsigned value = render[i].value;
        R146_Pair *p = &render[i]; int state = p->state;
        if (state < 92) func_001FD020(D_002752F0[state], value);
        else if (state < 136) { D_0020C6DC |= __imp__PsCreateSystemThreadEx[state]; D_0020C8E0[state] = value; }
        else if (state == 136) func_001FCFF0(value);
        else if (state == 137) func_001FD890(value);
        else if (state == 138) func_001FD400(value);
        else if (state == 139) func_001FD770(value);
        else if (state == 140) func_001FD7C0(value);
        else if (state == 141) func_001FD820(value);
        else if (state == 142) func_001FD500(value);
        else if (state == 143) func_001FE490(value);
        else if (state == 144) func_001FE520(value);
        else if (state == 145) func_001FE5B0(value);
        else if (state == 147) func_001FD450(value);
        else if (state == 146) func_001FD4C0(value);
        else if (state == 148) func_001FD540(value);
        else if (state == 149) func_001FD690(value);
        else if (state == 150) func_001FD710(value);
        else if (state == 151) func_001FD380(value);
        else if (state == 152) func_001FE810(value);
        else if (state == 153) func_001FE890(value);
        else if (state == 154) func_001FE790(value);
        else if (state == 155) func_001FE7D0(value);
        else if (state == 156) func_001FD3C0(value);
        else if (state == 157) func_001FD5A0(value);
        else if (state == 158) func_001FE8E0(value);
        else if (state == 159) func_001FD610(value);
        else if (state == 160) func_001FE620(value);
        else if (state == 161) func_001FE650(value);
        else if (state == 162) func_001FE6C0(value);
        else if (state == 163) func_001FE730(value);
        else if (state == 164) func_001FE750(value);
        else if (state == 165) func_001FE770(value);
    }
    i = 0;
    if (constantCount >= 4) {
        R146_Vector matrix[4];
        for (int j = 0; j < 4; ++j) { matrix[j].z = 0; matrix[j].y = 0; matrix[j].x = 0; matrix[j].w = 0x3f800000; }
        matrix[0] = constants[0].value; matrix[1] = constants[1].value;
        matrix[2] = constants[2].value; matrix[3] = constants[3].value;
        func_001FEC30(constants[0].index + 96, matrix);
        i = 4;
    }
    for (; i < constantCount; ++i) func_001FEBD0(constants[i].index + 96, &constants[i].value);
    *((char *)D_002EFDB8 + 0x90) = colors[0];
    *((char *)D_002EFDB8 + 0x91) = colors[1];
    *((char *)D_002EFDB8 + 0x92) = colors[2];
    *((char *)D_002EFDB8 + 0x93) = colors[3];
}

void C_00146DC0::func_00146DC0()
{
    int i = 0;
    short *p;
    if (0 < unkA) {
        p = &unk18;
        do {
            int v = *p;
            if (v == -3) {
                func_00200390(i, 0);
                *D_002EFDB8->f58 = unk48;
            } else if (v == -4) {
                func_00200390(i, 0);
                *D_002EFDB8->f54 = unk44;
            }
            i++;
            p++;
        } while (i < unkA);
    }
}

C_00146E20 *C_00146E20::func_00146E20()
{
    ((C_001B0180 *)this)->func_001B0180();
    *(void *volatile *)((char *)this + 0xc) = (void *)&D_00284E94;
    vtbl = (void *)&D_0028617C;
    vtbl2 = (void *)&D_00286170;
    unk18 = 0;
    return this;
}

int C_00146E50::func_00146E50(S_1472_Config *cfg)
{
    struct {
        int v0c, v10, v14, v18, v1c, v20, v24, v28, v2c, v30, v34, v38, v3c, v40, v44, v48, v4c;
        char bufB[0x80];
        char bufA[0x80];
    } t;

    D_00011420(cfg);
    t.v10 = 0;
    t.v3c = 0;
    t.v38 = 6;
    t.v20 = 0x2e;
    t.v44 = 1;
    t.v28 = 1;
    t.v40 = 0;
    t.v0c = 0;
    t.v14 = 0;
    t.v30 = 0;
    t.v24 = ((unsigned char *)D_002EFDB8)[0x2e];
    t.v2c = ((unsigned char *)D_002EFDB8)[0x2d];
    t.v34 = D_002EFDB8->f2C & 0xff;
    t.v1c = D_002EFDB8->f28;
    t.v4c = 0;
    t.v48 = 0;
    t.v18 = 0;
    cfg->func_00168BE0((const char *)&D_002862D4, &D_00275630, t.bufA, -1);
    cfg->func_00168BE0((const char *)&D_002862C4, &D_00275630, t.bufB, -1);
    cfg->func_00168C20(&D_002862B0, t.v10, &t.v10);
    cfg->func_00168C20(&D_0028629C, t.v3c, &t.v3c);
    cfg->func_00168C20(&D_00286280, t.v38, &t.v38);
    cfg->func_00168C20(&D_00286264, t.v48, &t.v48);
    cfg->func_00168C20(&D_0028624C, t.v20, &t.v20);
    cfg->func_00168C20(&D_00286234, t.v44, &t.v44);
    cfg->func_00168C20(&D_00286224, t.v28, &t.v28);
    cfg->func_00168C20(&D_00286214, t.v40, &t.v40);
    cfg->func_00168C20(&D_00286204, t.v0c, &t.v0c);
    cfg->func_00168C20(&D_002861F4, t.v14, &t.v14);
    cfg->func_00168C20(&D_002861E4, t.v30, &t.v30);
    cfg->func_00168C50(&D_002861D8, t.v1c, &t.v1c);
    cfg->func_00168C20(&D_002861C0, t.v4c, &t.v4c);
    cfg->func_00168C20(&D_002861B4, t.v24, &t.v24);
    cfg->func_00168C20(&D_002861A4, t.v2c, &t.v2c);
    cfg->func_00168C20(&D_00286194, t.v34, &t.v34);
    cfg->func_00168C20(&D_0028618C, t.v18, &t.v18);
    f4 = t.v10;
    f8 = t.v3c;
    bit0 = t.v18;
    if (t.bufA[0] == '&') {
        f10 = func_00144AE0(t.bufA, t.v10, t.v3c, t.v38);
    }
    if (t.bufB[0] == '&') {
        f14 = func_00144BF0(t.bufB, f4, f8, t.v20);
    } else if (func_001EA426(t.bufB, (const char *)&D_00286184) == 0) {
        f14 = 0;
    }
    f1C = (t.v44 != 0 ? 0xf0 : 0) | (t.v28 != 0 ? 3 : 0);
    f20 = ((((t.v40 & 0xff) | (t.v30 << 8)) << 8 | (t.v0c & 0xff)) << 8) | (t.v14 & 0xff);
    f28 = 0;
    f24 = t.v1c;
    f30 = (t.v24 << 16) | (t.v2c << 8) | (t.v34 & 0xff);
    return 1;
}

C_00147280 *C_00147280::func_00147280()
{
    ((C_001B01B0 *)this)->func_001B01B0();
    *(void *volatile *)((char *)this + 0x4) = (void *)&D_00284E94;
    vtbl = (void *)&D_002862FC;
    vtbl2 = (void *)&D_002862F0;
    unk8 = 0;
    return this;
}

int C_00147280::func_001472B0(S_1472_Config *cfg)
{
    int count, height, width, index, mode;
    char name[64], key[64];
    D_00011420(cfg);
    width = 256; height = 256; mode = 6; index = 0; count = 1;
    cfg->func_00168C20(&D_00286338, 0, &index);
    cfg->func_00168C20(&D_00286280, mode, &mode);
    cfg->func_00168C20(&D_00286328, count, &count);
    cfg->func_00168C20(&D_002862B0, width, &width);
    cfg->func_00168C20(&D_0028629C, height, &height);
    func_001ADCC0(key, 64, &D_00276F28, &D_00286318);
    cfg->func_00168BE0(key, &D_00275630, name, -1);
    int selected;
    if (name[0] == '&') selected = func_00144AE0(name, 0, 0, 0);
    else selected = index;
    if (count) {
        if (count > 8) count = 8;
        if (index) {
            S_1472_Object *obj = (S_1472_Object *)func_001E8A44(244);
            if (obj) obj = obj->func_0014A3A0(); else obj = 0;
            unk8 = obj;
            obj->func_00149620(D_002F0BB8, width, height, 6, count, 0);
            obj = (S_1472_Object *)unk8;
            obj->func_00149E70(*(int *)(*(char **)(D_002A71C0 + 20) - selected * 16 + 4), width, height);
            S_1472_Aux *aux = (S_1472_Aux *)func_001E8A44(240);
            if (aux) aux = aux->func_00142C70(); else aux = 0;
            aux->func_00142C80(&D_00286304, 0);
            ((S_1472_Object *)unk8)->fEC = aux;
        }
    }
    return 1;
}

C_00147490 *C_00147490::func_00147490()
{
    ((C_001B01D0 *)this)->func_001B01D0();
    vtbl = (void *)&D_0028634C;
    return this;
}

void C_001474B0::func_001474B0(int a, int b, unsigned int key)
{
    int i;
    for (i = 0; i < f50; i++) {
        S_001474B0_Elem *e = f54[i];
        if ((e->f24 & 2) != 0) {
            S_001474B0_Res *r = e->func_001B0130(key);
            char *p1 = 0;
            S_001474B0_Sub *p2 = 0;
            if (r != 0) {
                r->func_001AFEC0();
                if (r->f1C != 0) {
                    p1 = r->f1C + 0x1c;
                }
                if (r->f20 != 0) {
                    p2 = (S_001474B0_Sub *)((char *)r->f20 + 0xc);
                }
            }
            D_002F0630->f10[fD4[i]]->func_00149310(a, b, (int)p1, (int)p2);
        }
    }
}

