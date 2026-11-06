/* 5 functions from 0x000A1EF0 to 0x000A2ED0, found by Ghidra. */
#include "common.h"

struct C_000229C0 {
    virtual void vfunc0();
    virtual void vfunc4();
    virtual void vfunc8();
    int func_00022550();
    int func_00025240();
};

extern C_000229C0 *D_002B7E18;

struct C_002B9134 {
    virtual void vfunc0();
    virtual void vfunc4();
    virtual void vfunc8();
    int func_000B5020(void);
};

extern C_002B9134 *D_002B9134;

struct S_002A8490 {
    char pad0[0x2E0];
    int *f2E0;
};

extern S_002A8490 *D_002A8490;

struct C_0001B3C0_Sub { char pad0[0x28]; int *f28; };
struct C_0001B3C0 {
    char pad0[0x2C];
    C_0001B3C0_Sub *f2C;
    int func_0001B3C0(char *name);
};
struct C_Item { char pad0[4]; int f4; char f8[1]; };
struct C_Obj64 { char pad0[0x64]; int f64; };
struct C_00151130 { virtual void vdtor(int flags); void func_00151130(int a, int b, int c); };
struct C_001554D0 { void func_001554D0(int a); };
struct C_000186F0 { void func_000186F0(int a); };
struct C_00198390 { void func_00198390(void); };
struct C_00161680 { void func_00161680(void); };
struct C_001B2640 { void func_001B2640(void); };
struct S_1A4 { char pad0[4]; C_00198390 *f4; };
struct S_Ent { char pad0[0x1A4]; S_1A4 *f1A4; };
extern char D_0027AFF0[];
extern char D_0027AFE4[];
extern C_00161680 *D_002A829C;
extern C_001B2640 *D_002AA6C0;
extern "C" int func_001ADCC0(char *buf, int n, char *fmt, int v);

extern "C" char * __cdecl strcpy(char *, const char *);
struct Reader2 {
    int func_00169710(const void *name);
    void func_00168C20(const void *name, int def, void *out);
    void func_00168C50(const void *name, int def, void *out);
    void func_00168C50(const void *name, float def, void *out);
    void func_00168550(const void *name, void *buf, int size);
    void func_00168A10(const void *name, int *out);
    void func_00168CB0(const void *name, void *def, void *out);
    void func_00168BE0(const void *name, const void *def, void *buf, int size);
};
struct C_00152E30 { C_00152E30 *func_00152E30(int a); void func_00150F60(int i, int v); };
struct C_00049BD0 { C_00049BD0 *func_00049BD0(void); };
struct C_000185A0 { C_000185A0 *func_000185A0(int a); void func_000198E0(Reader2 *r, void *e); };
struct C_00155450 { C_00155450 *func_00155450(int a); void func_001561A0(Reader2 *r, void *e); };
struct Obj6F4 {
    char pad0[0x5c4];
    int f5c4;
    char pad5c8[0x114];
    char f6dc[0x10];
    int f6ec, f6f0;
};
struct Item90 { char pad0[8]; char name[0x78]; int f80; int pad84; int f88; int f8c; };
struct SelE { int pad0; int f4; char pad8[0x10]; char s18[1]; };
struct EList { int cnt; char pad4[0x2fc]; int arr[8]; };
#define ELIST ((EList *)((int **)((char *)D_002A8490 + 0x2e0))[0])
struct Sel { char pad0[0x24]; int cnt; SelE **arr; };
extern "C" int func_001EA426(const char *a, const char *b);
extern char D_0027AFD8[], D_00277C7C[], D_00277C6C[], D_00277C5C[], D_00277C4C[], D_0027AFCC[], D_0027AFB8[];
extern char D_0027AFA8[], D_0027618C[], D_0027AF9C[], D_0027AF90[], D_0027AF74[], D_0027AF68[], D_0027AF5C[];
extern char D_0027AF50[], D_0027AF44[], D_0027AF38[], D_0027AF24[], D_00275630[], D_0027AF14[], D_002764F0[];
extern char D_0027AF08[], D_0027AEF8[], D_00275AC0[], D_0027AEEC[];
void *func_001E8A44(int size);

struct C_000A1EF0 {
    char pad0[0x28];
    Reader2 *f28;
    char pad2C[0x388];
    Sel *f3B4;
    char pad3B8[0x124];
    char *f4DC;
    char pad4E0[4];
    Obj6F4 *f4E4[8];
    C_00155450 *f504[8];
    Item90 **f524;
    C_000185A0 *f528;
    char pad52C[0x34];
    int f560;
    void func_000A1EF0(void);
};

struct C_000A2440 {
    char pad0[0x484];
    C_0001B3C0 *f484;
    int f488;
    char pad48C[0x58];
    C_00151130 *f4E4[8];
    C_001554D0 *f504[8];
    C_Item **f524;
    C_000186F0 *f528;
    char pad52C[0x24];
    char *f550;
    char pad554[0xC];
    int f560;
    void func_000A2440(void);
};

struct C_0019ABA0 {
    void func_0019ABA0(int a, int b);
};

struct S_000A2620_Info {
    char pad0[4];
    C_0019ABA0 *f4;
};

struct C_000A2620_Child {
    char pad0[0x3C];
    S_000A2620_Info *f3C;
    void func_000114D0(int a);
};

struct C_000A2620 {
    char pad0[0x4A8];
    int *f4A8;
    char pad4AC[0xCC];
    int f578;
    C_000A2620_Child **f57C;
    void func_001577A0(C_000A2620_Child *child, int a);
    void func_000A2620(void);
};

void C_000A1EF0::func_000A1EF0(void)
{
    char buf[0x104];
    int i, n;
    f28->func_00169710(D_0027AFD8);
    f28->func_00168CB0(D_00277C7C, f4DC + 0x24, f4DC + 0x24);
    f28->func_00168CB0(D_00277C6C, f4DC + 0xa4, f4DC + 0xa4);
    f28->func_00168CB0(D_00277C5C, f4DC + 0x34, f4DC + 0x34);
    f28->func_00168CB0(D_00277C4C, f4DC + 0xb4, f4DC + 0xb4);
    f28->func_00169710(D_0027AFCC);
    f28->func_00168C20(D_0027AFB8, 0, &f560);
    if (f560 > 0) {
        for (i = 0; i < ELIST->cnt; i++) {
            void *m = func_001E8A44(0x6f4);
            C_00152E30 *o = m ? ((C_00152E30 *)m)->func_00152E30(0) : 0;
            f4E4[i] = (Obj6F4 *)o;
            o->func_00150F60(i, ELIST->arr[i]);
        }
        if (ELIST->cnt == 1) {
            f28->func_00169710(D_0027AFA8);
            f28->func_00168CB0(D_0027618C, f4E4[0]->f6dc, f4E4[0]->f6dc);
            f28->func_00168C50(D_0027AF9C, f4E4[0]->f6ec, &f4E4[0]->f6ec);
            f28->func_00168C50(D_0027AF90, f4E4[0]->f6f0, &f4E4[0]->f6f0);
            f28->func_00168C20(D_0027AF74, 0x73, &f4E4[0]->f5c4);
            f4E4[0]->f5c4--;
            i = 0;
            if (f4E4[0]->f5c4 < i) f4E4[0]->f5c4 = i;
        } else {
            f28->func_00169710(D_0027AFD8);
            f28->func_00168CB0(D_00277C7C, f4E4[0]->f6dc, f4E4[0]->f6dc);
            f28->func_00168C50(D_0027AF68, f4E4[0]->f6ec, &f4E4[0]->f6ec);
            f28->func_00168C50(D_0027AF5C, f4E4[0]->f6f0, &f4E4[0]->f6f0);
            f28->func_00168CB0(D_00277C5C, f4E4[1]->f6dc, f4E4[1]->f6dc);
            f28->func_00168C50(D_0027AF50, f4E4[1]->f6ec, &f4E4[1]->f6ec);
            f28->func_00168C50(D_0027AF44, f4E4[1]->f6f0, &f4E4[1]->f6f0);
            f28->func_00168C20(D_0027AF74, 0x73, &f4E4[0]->f5c4);
            f4E4[0]->f5c4--;
            i = 0;
            if (f4E4[0]->f5c4 < i) f4E4[0]->f5c4 = i;
            f4E4[1]->f5c4 = i;
        }
        f524 = (Item90 **)func_001E8A44(f560 * 4);
        if (f560 > i) {
            for (i = 0; i < f560; i++) {
                void *m = func_001E8A44(0x90);
                Item90 *it = m ? (Item90 *)((C_00049BD0 *)m)->func_00049BD0() : 0;
                f524[i] = it;
                func_001ADCC0(buf, 0x104, D_0027AF38, i + 1);
                f28->func_00169710(buf);
                f28->func_00168BE0(D_0027AF24, D_00275630, buf, 0x104);
                strcpy(f524[i]->name, buf);
                f28->func_00168BE0(D_0027AF14, D_002764F0, buf, 0x104);
                for (n = 0; n < f3B4->cnt; n++) {
                    if (func_001EA426(f3B4->arr[n]->s18, buf) == 0)
                        f524[i]->f80 = f3B4->arr[n]->f4;
                }
                f28->func_00168C20(D_0027AF08, 0, &f524[i]->f88);
                f28->func_00168C20(D_0027AEF8, 0, &f524[i]->f8c);
            }
        }
    }
    if (f28->func_00169710(D_00275AC0) && ELIST->cnt == 1) {
        void *m = func_001E8A44(0x77c);
        C_000185A0 *p = m ? ((C_000185A0 *)m)->func_000185A0(1) : 0;
        f528 = p;
        p->func_000198E0(f28, f4E4[0]);
    } else if (f28->func_00169710(D_0027AEEC) && ELIST->cnt > 1) {
        for (i = 0; i < ELIST->cnt; i++) {
            void *m = func_001E8A44(0x3e8);
            C_00155450 *p = m ? ((C_00155450 *)m)->func_00155450(1) : 0;
            f504[i] = p;
            p->func_001561A0(f28, f4E4[i]);
        }
    }
    ((C_00161680 *)D_002A829C)->func_00161680();
    ((C_001B2640 *)D_002AA6C0)->func_001B2640();
}

void C_000A2440::func_000A2440(void)
{
    int i;
    char buf[16];
    for (i = 0; i < f560; i++) {
        int idx = f484->func_0001B3C0(f524[i]->f8);
        if (idx > -1) {
            f524[i]->f4 = f484->f2C->f28[idx];
        }
    }
    for (i = 0; i < *D_002A8490->f2E0; i++) {
        if (f4E4[i] != 0) {
            func_001ADCC0(buf, 16, D_0027AFF0, i + 1);
            int idx = f484->func_0001B3C0(buf);
            if (idx > -1) {
                f4E4[i]->func_00151130(((C_Obj64 *)*(int *)(f550 + i * 4 + 0x44))->f64, f484->f2C->f28[idx], f488);
            } else {
                if (f4E4[i]) {
                    f4E4[i]->vdtor(1);
                }
                f4E4[i] = 0;
            }
            if (f504[i]) f504[i]->func_001554D0(f488);
        }
    }
    if (*D_002A8490->f2E0 == 1) {
        int idx = f484->func_0001B3C0(D_0027AFE4);
        if (idx > -1) {
            ((S_Ent *)f484->f2C->f28[idx])->f1A4->f4->func_00198390();
        }
    }
    if (f528) f528->func_000186F0(f488);
    D_002A829C->func_00161680();
    D_002AA6C0->func_001B2640();
}

void func_000A25E0(void)
{
    if (D_002B7E18) {
        if ((D_002B7E18->func_00025240() | D_002B7E18->func_00022550()) == 0) {
            if (D_002B7E18) {
                D_002B7E18->vfunc8();
                D_002B7E18 = 0;
            }
        }
    }
}

void C_000A2620::func_000A2620(void)
{
    int i;
    if (D_002B9134 != 0 && D_002B9134->func_000B5020() == 0) {
        D_002B9134->vfunc8();
        D_002B9134 = 0;
    }
    if (*D_002A8490->f2E0 == 1) {
        for (i = 0; i < f578; i++) {
            C_000A2620_Child *child = f57C[i];
            func_001577A0(child, -1);
            child->f3C->f4->func_0019ABA0(*f4A8, 2);
            child->func_000114D0(1);
        }
    }
}

