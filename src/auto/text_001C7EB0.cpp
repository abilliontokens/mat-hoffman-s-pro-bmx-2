/* 3 functions from 0x001C7EB0 to 0x001C8960, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Obj { virtual ~Obj(); virtual void d1(); virtual void d2(); };
struct Pool { int func_001AC7B0(void *p, int n); void func_001B26C0(int h); };
struct Entry { char pad[0x2c]; void *e2c; void *e30; void *e34; void *e38; void *e3c; int e40; int e44; };
struct WaterBase { ~WaterBase(); };
struct Water : WaterBase {
    void *vtbl; char pad0[0x28]; Entry *entries; char pad1[8]; int count; Obj *obj3c; char pad2[0x14]; Obj **list54; int h58[4]; int n68; char pad4[0x64]; Obj **arrd0; char pad5[0x34]; void *p108; char pad6[0x114]; Obj *p220;
    ~Water();
};
struct Vec4W {
    float x; float y; float z; float w;
    Vec4W operator-(const Vec4W &b) const { Vec4W r; r.x = x - b.x; r.y = y - b.y; r.z = z - b.z; r.w = 1.0f; return r; }
    Vec4W operator+(const Vec4W &b) const { Vec4W r; r.x = x + b.x; r.y = y + b.y; r.z = z + b.z; r.w = 1.0f; return r; }
};
struct __declspec(align(16)) MatW { float m[16]; };
extern float D_00275544;
MatW func_00026960();
void func_00026960(MatW *out);
extern Vec4W D_002AB798;
struct NodeW {
    void func_00199A70(int a, Vec4W *out);
    Vec4W func_00197EC0(float *v);
    void func_00199790(int a, Vec4W *v);
    Vec4W func_00199B00(int a);
    void func_0019AC50();
    char pad0[0x1a0];
    char f1A0;
    char pad1A1[0x1f];
};
struct MgrW {
    char pad0[4];
    NodeW *unk4;
    char pad8[8];
    int unk10;
    void func_001670C0(float dt, int a, int b);
};
struct DurW { char pad0[0x38]; float dur; };
struct C67W {
    Vec4W *func_001C67C0(Vec4W *out, int p);
};
struct EntryW {
    char pad0[0x40];
    DurW *p40;
    Vec4W *p44;
    char pad48[0xc];
    int f54;
};
struct S54W { char pad0[0x40]; Vec4W v40; };
struct Obj364W {
    virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3();
    virtual void w4(); virtual void w5(); virtual void w6(); virtual void w7();
    virtual void w8(); virtual void w9(); virtual void w10(); virtual void w11();
    virtual void w12(); virtual void w13(); virtual void w14(); virtual void w15();
    virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19();
    virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23();
    virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27();
    virtual void w28(); virtual void w29(); virtual void w30();
    virtual void v31(MatW *m);
    char pad4[0x50];
    S54W *f54;
    char pad58[0x4f];
    unsigned char fA7;
    char padA8[8];
    float func_00133F10(int a);
};
struct ObjA0W { void func_001A0C90(Vec4W v); };
struct ScriptControllerW { void func_0018C900(float dt); };
struct Walker : ScriptControllerW {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void func_001C7EB0(float dt);
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(Vec4W *a, Vec4W *b, int c);
    char pad4[0x38];
    MgrW *unk3C;
    NodeW *unk40;
    NodeW *unk44;
    ObjA0W *unk48;
    ObjA0W *unk4C;
    Vec4W f50;
    Vec4W f60;
    char pad70[0x10];
    Vec4W f80;
    Vec4W f90;
    char padA0[0x10];
    int unkB0;
    float unkB4;
    int unkB8;
    int unkBC;
    EntryW *unkC0;
    int unkC4;
    int unkC8;
    float unkCC;
    int unkD0;
    Vec4W pos;
    Vec4W hist[40];
    Obj364W *unk364;
    float unk368;
    int unk36C;
    int unk370;
    int unk374;
    int unk378;
    int unk37C;
    int unk380;
    int func_001C6820(float p);
    void func_001C6EA0(NodeW *obj, Vec4W *out, Vec4W *third);
};
extern int D_0028E864, D_002F08BC;
extern Pool *D_002AA6C0, *D_002A829C;
void func_001E8390(void *);
void func_001E891B(void *);
struct C_001C8720 {
    undefined4 func_001C8720(byte param_1);
};


void Walker::func_001C7EB0(float dt)
{
    unk380 = 0;
    if (unk3C->unk10 == 0) {
        if (dt > D_00275544) {
            unk3C->func_001670C0(dt, unk378, 0);
            unkCC = dt + unkCC;
            EntryW *e = &unkC0[unkC4];
            Vec4W A;
            Vec4W B;
            Vec4W C;
            Vec4W D;
            B.w = 1.0f;
            if (e->p44 != 0 && e->p40->dur < unkCC) {
                do {
                    unkCC = unkCC - e->p40->dur;
                    B.x = pos.x - e->p44->x;
                    B.y = pos.y - e->p44->y;
                    B.z = pos.z - e->p44->z;
                    B.w = 1.0f;
                    pos = B;
                } while (e->p40->dur < unkCC);
            }
            D.z = 0.0f;
            D.y = 0.0f;
            D.x = 0.0f;
            D.w = 1.0f;
            if (e->p44 != 0) {
                D = *((C67W *)e->p44)->func_001C67C0(&A, *(int *)&unkCC);
            } else {
                D = D_002AB798;
            }
            B.x = D.x - pos.x;
            D.x = B.x;
            B.y = D.y - pos.y;
            D.y = B.y;
            B.z = D.z - pos.z;
            D.z = B.z;
            C.z = 0.0f;
            C.y = 0.0f;
            C.x = 0.0f;
            C.w = 1.0f;
            A.w = 1.0f;
            A.x = B.x + pos.x;
            pos.x = A.x;
            A.y = B.y + pos.y;
            pos.y = A.y;
            A.z = B.z + pos.z;
            pos.z = A.z;
            pos.w = A.w;
            unk3C->unk4->func_00199A70(0, &C);
            A = unk3C->unk4->func_00197EC0((float *)&D);
            D = A;
            A.x = C.x + D.x;
            A.y = C.y + D.y;
            A.z = C.z + D.z;
            C.x = A.x;
            C.y = A.y;
            C.z = A.z;
            C.w = A.w;
            Vec4W E;
            E.x = A.x;
            E.y = A.y;
            E.z = A.z;
            E.w = 1.0f;
            v29(&E, 0, 0);
            unkD0 = ((int *)&E)[1];
            unk3C->unk4->func_00199790(0, &C);
            if (e->f54 != 0) {
                int ns = func_001C6820(unkCC);
                if (ns != unkB8) {
                    int b1 = 0;
                    int b2 = 0;
                    if (unkB8 == 1) {
                        b1 = 1;
                    } else if (unkB8 == 2) {
                        b2 = 1;
                    } else if (unkB8 == 3) {
                        b2 = 1;
                        b1 = 1;
                    }
                    unkB8 = ns;
                    if (!b1) {
                        if (ns == 1 || ns == 3) {
                            func_001C6EA0(unk40, &f50, &f60);
                            A = unk40->func_00199B00(0);
                            for (int i = 9; i > 0; i--) hist[i] = hist[i - 1];
                            hist[0] = A;
                        }
                    } else {
                        if (ns == 2 || ns == 0) {
                            A = unk40->func_00199B00(0);
                            for (int i = 9; i > 0; i--) hist[20 + i] = hist[20 + i - 1];
                            hist[20] = A;
                        }
                    }
                    if (!b2) {
                        if (ns == 2 || ns == 3) {
                            func_001C6EA0(unk44, &f80, &f90);
                            A = unk44->func_00199B00(0);
                            for (int i = 9; i > 0; i--) hist[10 + i] = hist[10 + i - 1];
                            hist[10] = A;
                        }
                    } else {
                        if (ns == 1 || ns == 0) {
                            A = unk44->func_00199B00(0);
                            for (int i = 9; i > 0; i--) hist[30 + i] = hist[30 + i - 1];
                            hist[30] = A;
                        }
                    }
                }
            }
            if (unk370 != 0 && unk364 != 0) {
                C.y = C.y + unk368;
                MatW mat;
                func_00026960(&mat);
                mat.m[3] = C.x;
                mat.m[7] = C.y;
                mat.m[11] = C.z;
                unk364->v31(&mat);
                unk364->func_00133F10(0);
                if (unk364->fA7 & 0x20) {
                    Vec4W *q = &unk364->f54->v40;
                    C.x = C.x - q->x;
                    C.y = C.y - q->y;
                    C.z = C.z - q->z;
                    mat.m[3] = C.x;
                    mat.m[7] = C.y;
                    mat.m[11] = C.z;
                    unk364->v31(&mat);
                    unk364->func_00133F10(0);
                    if (unk364->fA7 & 0x20) {
                        C.x = C.x - q->x;
                        C.y = C.y - q->y;
                        C.z = C.z - q->z;
                    }
                    C.y = C.y - unk368;
                    unk3C->unk4->func_00199790(0, &C);
                }
            }
            if (unkB0 != 0 && e->f54 != 0 && unk3C->unk4->f1A0 == 0) {
                B.z = 0.0f;
                B.y = 0.0f;
                B.x = 0.0f;
                B.w = 1.0f;
                unk40->func_00199A70(0, &B);
                float saved = B.y;
                v29(&B, 0, 0);
                B.y = B.y + unkB4;
                if (B.y > saved) {
                    unk48->func_001A0C90(B);
                }
                B.z = 0.0f;
                B.y = 0.0f;
                B.x = 0.0f;
                B.w = 1.0f;
                unk44->func_00199A70(0, &B);
                saved = B.y;
                v29(&B, 0, 0);
                B.y = B.y + unkB4;
                if (B.y > saved) {
                    unk4C->func_001A0C90(B);
                }
            }
        }
    }
    if (dt > D_00275544) {
        unk3C->unk4->func_0019AC50();
    }
    ScriptControllerW::func_0018C900(dt);
}

undefined4 C_001C8720::func_001C8720(byte param_1)
{
  int func_001C75A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001C75A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

Water::~Water()
{
    vtbl = &D_0028E864;
    if (entries) {
        for (int i = 0; i < count; i++) {
            D_002AA6C0->func_001B26C0(D_002AA6C0->func_001AC7B0((char *)entries[i].e30 + 0x18, 1));
            D_002AA6C0->func_001B26C0(D_002AA6C0->func_001AC7B0((char *)entries[i].e2c + 0x18, 1));
            D_002AA6C0->func_001B26C0(D_002AA6C0->func_001AC7B0((char *)entries[i].e34 + 0x18, 1));
            D_002AA6C0->func_001B26C0(D_002AA6C0->func_001AC7B0((char *)entries[i].e38 + 0x18, 1));
            if (entries[i].e3c) {
                func_001E8390(entries[i].e3c);
                entries[i].e3c = 0;
            }
            entries[i].e40 = 0;
            entries[i].e44 = 0;
        }
        func_001E891B(entries);
        entries = 0;
    }
    if (obj3c) obj3c->d2();
    if (arrd0) {
        for (int i = 0; i < n68; i++) {
            arrd0[i]->d2();
            arrd0[i] = 0;
        }
        func_001E891B(arrd0);
        arrd0 = 0;
    }
    Obj **p = list54;
    if (p) {
        while (*p) { Obj *o = *p; p++; o->d2(); }
        func_001E891B(list54);
        list54 = 0;
    }
    int *q = h58 + 2;
    for (int k = 0; k < 2; k++, q++) {
        if (q[-2] != -1) D_002A829C->func_001B26C0(q[-2]);
        if (q[0] != -1) D_002A829C->func_001B26C0(q[0]);
    }
    if (p108) func_001E891B(p108);
    delete[] p220;
    D_002F08BC = 0;
}

