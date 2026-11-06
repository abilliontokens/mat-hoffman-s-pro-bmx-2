/* 6 functions from 0x000DC270 to 0x000DD1B0, found by Ghidra. */
#include "common.h"
struct C_000DC270_UI {
 char pad0[0x48]; unsigned int color; char pad4C[2]; unsigned char flags;
 void func_00093120(); void func_001B1980(); void func_0005E840(int); void func_001D6600();
 void func_001B17D0(int); void func_001B1A30(float,float,int);
 void func_001B1860(int,float,int,float,int,int,int,int,float,int,float,float,int);
 void func_00093970(float,float,int,int,int,int);
 void func_00094570(float,float,int,int,int,int);
 void func_00093A00(float,float,int,float,float,float);
 int func_000301D0();
 void Draw(int color) { func_00093A00(320,80,color,0,0,0); }
};
extern C_000DC270_UI **D_002B91AC;
extern int D_0028F5E0;
struct C_000DC270 {
 char pad0[0x124]; char *unk124; char pad128[0x18C];
 C_000DC270_UI *unk2B4; int unk2B8; C_000DC270_UI *unk2BC;
 char pad2C0[0x10]; int unk2D0; int unk2D4; int unk2D8;
 char pad2DC[0x30]; int unk30C; C_000DC270_UI *arr310[10];
 void func_000DC270();
};

extern int D_0027F84C;
void func_001E891B(void *p);
void *func_001E8A44(int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);
extern char D_00277A04;
extern char D_00277A0C;
extern int D_00080000;
extern int D_00020000;

/* D_002EFDB8 object */
struct I_002EFDB8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(int a0);
    virtual void v8();
};
extern I_002EFDB8 *D_002EFDB8;

struct C_001D4300 {
    int func_001D4590(char *out, const char *title, int a, int size);
    int func_001D4440(char *out, const char *title, int a, int size);
};

struct C_0005C020 {
    void func_0005C020(int a);
    void func_0005C6A0(void);
};

struct S_000DCC20_Sub {
    char pad0[0x2C0];
    C_0005C020 *f2C0;
    char pad2C4[0x8];
    C_001D4300 *f2CC;
    char pad2D0[0x8];
    int f2D8;
};

struct S_000DCC20_Root {
    char pad0[0x2E0];
    S_000DCC20_Sub *f2E0;
};
extern S_000DCC20_Root *D_002A8490;

struct C_000928D0 {
    int func_000928D0(void);
};

/* object whose slot 0x40 returns a writable buffer */
struct I_000DCC20_Buf {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void *v40(int a0, int a1, int a2);
    virtual void v44(int a0);
};

/* heap block released when the scope is left */
struct S_000DCC20_Mem {
    void *p;
    S_000DCC20_Mem() { p = 0; }
    ~S_000DCC20_Mem() {
        if (p != 0) {
            func_001E891B(p);
        }
    }
};

struct C_000DCC20 {
    char pad0[0x298];
    int unk298;
    char pad29C[0x20];
    C_000928D0 *unk2BC;
    char pad2C0[0x10];
    int unk2D0;
    int unk2D4;
    int unk2D8;
    int unk2DC;
    char pad2E0[0x88];
    I_000DCC20_Buf *arr368[4];
    I_000DCC20_Buf *arr378[4];
    int func_000DCC20(void);
    int func_000DCE10(void);
};

struct C_001D6410 {
    void func_001D6410(void);
};

struct DelObjC_000DC {
    virtual void Destroy(int a0);
};

/* BmxUIPageHorseWord */
struct C_000DD130 {
    void *vtbl;
    char pad4[0x2E8];
    DelObjC_000DC *unk2EC;
    char pad2F0[0x40];
    C_001D6410 *unk330;
    char pad334[0xC];
    DelObjC_000DC *arr340[2];
    void func_001BE3F0();
    void func_000DD130();
};

struct C_000DD030 {
    void *vtbl;
    char pad4[0x27C];
    int unk280;
    int unk284;
    int unk288;
    char unk28C;
    char pad28D[7];
    char unk294;
    char pad295[0x27];
    int unk2BC;
    char unk2C0;
    char pad2C1[0xF];
    int unk2D0;
    int unk2D4;
    int unk2D8;
    int unk2DC;
    int unk2E0;
    int unk2E4;
    char pad2E8[4];
    DelObjC_000DC *unk2EC;
    int unk2F0;
    int unk2F4;
    int unk2F8;
    int unk2FC;
    int unk300;
    int unk304;
    int unk308;
    int unk30C;
    int unk310;
    int unk314;
    int unk318;
    int unk31C;
    int unk320;
    int unk324;
    int unk328;
    int unk32C;
    C_001D6410 *unk330;
    int unk334;
    int unk338;
    int unk33C;
    DelObjC_000DC *unk340;
    DelObjC_000DC *unk344;
    void func_001BE360(int a);
    C_000DD030 *func_000DD030(int a);
};

struct C_000DCBF0 {
    char pad0[0x2F0];
    int unk2F0;
    int unk2F4;
    int unk2F8;
    int unk2FC;
    int unk300;
    int unk304;
    void func_000DCBF0(void);
};


void C_000DCBF0::func_000DCBF0(void) {
    unk2F0 = 0;
    unk2F4 = 128;
    unk2F8 = 128;
    unk2FC = 0;
    unk300 = 1048576000;
    unk304 = 0;
}

int C_000DCC20::func_000DCC20(void)
{
    char buf[0x104];

    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    unk2D8 = 0;
    unk2DC = 1;
    void *mem = 0;
    int ret = 0;
    if (unk2D0 != 0) {
        mem = func_001E8A44((int)&D_00080000);
        func_001ADCC0(buf, 0x104, &D_00277A04, &D_00277A0C, unk2D8);
        if (D_002A8490->f2E0->f2CC->func_001D4590((char *)unk2BC->func_000928D0(), buf, (int)mem, (int)&D_00080000) == 1) {
            for (int i = 0; i < 4; i++) {
                void *dst = arr368[i]->v40(0, 0, 0);
                memcpy(dst, (char *)mem + i * (int)&D_00020000, 0x20000);
            }
            func_001ADCC0(buf, 0x104, &D_00277A04, &D_00277A0C, unk2DC);
            if (D_002A8490->f2E0->f2CC->func_001D4590((char *)unk2BC->func_000928D0(), buf, (int)mem, (int)&D_00080000) == 1) {
                for (int i = 0; i < 4; i++) {
                    void *dst = arr378[i]->v40(0, 0, 0);
                    memcpy(dst, (char *)mem + i * (int)&D_00020000, 0x20000);
                }
                unk298 = 0;
            } else {
                unk298 = 0;
                goto done;
            }
        } else {
            unk298 = 0;
            goto done;
        }
    }
    ret = 1;
done:
    if (mem != 0) {
        func_001E891B(mem);
    }
    return ret;
}

int C_000DCC20::func_000DCE10(void)
{
    char buf[0x104];
    void *mem = 0;
    int ret;

    if (unk2D0 != 0) {
        mem = func_001E8A44((int)&D_00080000);
        int src, dst;
        if (unk2D8 > unk2DC) {
            src = 4;
            dst = 0;
        } else {
            src = 0;
            dst = 4;
        }
        int i;
        for (i = 0; i < 4; i++) {
            void *s = arr368[src + i]->v40(0, 0, 0);
            void *d = arr368[dst + i]->v40(0, 0, 0);
            memcpy(d, s, 0x20000);
            arr368[src + i]->v44(0);
            arr368[dst + i]->v44(0);
        }
        func_001ADCC0(buf, 0x104, &D_00277A04, &D_00277A0C, unk2D8);
        int r = D_002A8490->f2E0->f2CC->func_001D4590((char *)unk2BC->func_000928D0(), buf, (int)mem, (int)&D_00080000);
        if (r != 1) {
            if (r == -1) {
                int *tmp = (int *)func_001E8A44((int)&D_00080000);
                int *z = tmp;
                int n;
                for (n = (int)&D_00020000; n > 0; n--) {
                    *z++ = 0;
                }
                D_002A8490->f2E0->f2CC->func_001D4440((char *)unk2BC->func_000928D0(), buf, (int)tmp, (int)&D_00080000);
                func_001E891B(tmp);
            } else {
                ret = 0;
                goto done;
            }
        }
        D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8);
        D_002A8490->f2E0->f2C0->func_0005C6A0();
        for (i = 0; i < 4; i++) {
            void *d = arr368[src + i]->v40(0, 0, 0);
            memcpy(d, (char *)mem + i * (int)&D_00020000, 0x20000);
            arr368[src + i]->v44(0);
        }
    }
    ret = 1;
done:
    if (mem != 0) {
        func_001E891B(mem);
    }
    return ret;
}

C_000DD030 *C_000DD030::func_000DD030(int a)
{
    func_001BE360(a);
    unk280 = 0;
    unk328 = 0;
    unk32C = 0;
    unk330 = 0;
    unk2EC = 0;
    unk284 = 0;
    unk320 = 0;
    unk324 = 0;
    unk28C = 0;
    unk294 = 0;
    unk2BC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    unk2DC = 0;
    unk2E0 = 0;
    unk2D8 = 0;
    unk2E4 = 0;
    unk2C0 = 0;
    unk2F0 = 0;
    unk2F8 = 0;
    unk2FC = 0;
    unk2F4 = 0;
    unk334 = 0;
    unk30C = 0;
    unk310 = 0;
    unk314 = 0;
    unk31C = 0;
    unk318 = 0;
    unk33C = 0;
    unk338 = 0;
    vtbl = &D_0027F84C;
    unk288 = 1;
    DelObjC_000DC **p = &unk340;
    for (int i = 0; i < 2; i++)
        p[i] = 0;
    unk300 = 0;
    unk308 = 0;
    unk304 = 0;
    return this;
}

void C_000DD130::func_000DD130()
{
    C_001D6410 *p = unk330;
    vtbl = &D_0027F84C;
    if (p != 0) {
        p->func_001D6410();
        func_001E891B(p);
    }
    if (unk2EC != 0) {
        unk2EC->Destroy(1);
        unk2EC = 0;
    }
    for (int i = 0; i < 2; i++) {
        if (arr340[i] != 0) {
            arr340[i]->Destroy(1);
            arr340[i] = 0;
        }
    }
    func_001BE3F0();
}

