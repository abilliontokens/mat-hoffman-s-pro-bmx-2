/* 8 functions from 0x000BDF30 to 0x000BEE30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_0027DB74[];
extern char D_0027DB8C[];
extern char D_0027DDE0[];
extern char D_0027DDE1[];
extern void *func_001E8A44(int size);
extern int func_001E8AF0(char *s, char *ext);
void func_001E891B(void *p);
char *func_001E8920(char *dst, const char *src, int n);
extern "C" int strlen(const char *s);

template <class T> inline T Min(const T &a, const T &b) { return a > b ? b : a; }

struct S_000BE1D0_Slot {
    char pad0[0x5d4];
    char f5D4[8];
    char f5DC[8];
    int f5E4;
};

struct S_000BE1D0_Slots {
    S_000BE1D0_Slot *func_0005C020(int a);
};

struct V_F4VT {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct S_000BDF30_F4 {
    char pad0[0xb4];
    V_F4VT *vtb4;
};

struct S_000BDF30_F8 {
    char pad0[0x14];
    int arr[8];
    char pad34[0x1cc];
    int func_00135E80(int which, float v);
};

struct V_F28obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30(int a);
};

struct S_000BDF30_F2FC {
    char pad0[0x28];
    V_F28obj *f28;
    int func_00094F00();
    void func_00094A10(char *s, int f);
};

struct V_VB {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};

struct C_ELEM;
struct VB_A {
    virtual void b0();
    virtual void b1();
    virtual void b2();
    virtual void b3();
    virtual void b4();
    virtual void b5();
};
struct VB_D : virtual VB_A { };

struct S_LOOK2 {
    char pad0[0x28];
    C_ELEM **f28;
};

struct C_ELEM {
    char pad0[0x1a4];
    VB_D *f1a4;
};

struct S_000BDF30_F0 {
    char pad0[0x1dc];
    int f1DC;
};

struct S_000BDF30_Config {
    char pad0[0x18];
    int f18;
    char pad1C[0x2e0];
    S_000BDF30_F2FC *f2FC;
    char pad300[0x24];
    int f324;
    void func_0005C720();
};

struct S_000BDF30_Game {
    char pad0[4];
    S_000BDF30_F4 *f4;
    S_000BDF30_F8 *f8;
    char padC[0x228];
    int f234;
    char pad238[0xa8];
    S_000BDF30_Config *f2E0;
    char pad2E4[8];
    void *f2EC;
    S_000BDF30_F0 *f2F0;
};

struct S_000BDF30_Audio {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
    char pad4[0x2c];
    int f30;
    void func_0013C1D0(int a);
    void func_0013D780(char *name, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    void func_0013B260(int a);
    void func_0013DFF0(char *p, int a);
};

extern int D_0027DB9C;

extern S_000BDF30_Game *D_002A8490;
extern S_000BDF30_Audio *D_002EFDB8;

struct C_000BBE30;
struct S_000BDF30_Names;

/* BmxVideoPlayer: video setup, this in ecx, three stack args (second is the file name) */
struct C_000BE640 {
    virtual void v0(int a, int b);
    virtual void v1();
    virtual void v2(int a, int b, int c);
    virtual void v3(int a, int b, int c);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28(int a);
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37(int a);
    char pad0[0x14c];
    S_000BDF30_Names *f150;
    char f154[0x104];
    struct { char pad0[0x204]; int f204; int f208; } *f258;
    char pad25c[0xc];
    void *f268;
    void *f26c;
    void *f270;
    void *f274;
    char pad278[0xc];
    int f284;
    char pad288[0x24];
    void *f2ac;
    int f2B0[8];
    int f2D0[8];
    void func_000BE640(char *a, char *b, int c);
    int func_000BDF30(int show);
    int func_000BE020(int show);
    void func_001BCC90(void *p);
    void func_000BADB0();
    void func_000BCBB0();
    void func_000BABF0();
    void func_000BACE0();
    void func_000BB0C0();
};

struct S_000BDF30_Entry {
    char name[0x104];
    char f104[0x1c];
    int *f120;
    char pad124[0x84];
};

/* 0x120-byte item, display text at +0x104 */
struct S_000BE020_Item {
    char pad0[0x104];
    char name[0x1c];
};

struct S_000BDF30_Lookup {
    char pad0[0x2c];
    void *f2c;
    int func_0001B3C0(void *entry);
};

struct S_000BDF30_Names {
    char pad0[0x484];
    S_000BDF30_Lookup *f484;
};

/* 0x1a8-byte element of the array at f27C */
struct C_000BA2D0 {
    char pad0[0x1a8];
    void func_000BA2D0();
};

struct C_00136300 {
    void func_00136300();
};

struct C_0013B210 {
    void func_0013B340();
    void func_0013C1D0(int f);
    int func_0013D780(char *buf, int a, int b, int c, int d, int e, int f, int g);
    void func_0013B260(int f);
    void func_0013DFF0(char *buf, int f);
};

struct C_0018C120 {
    void func_0018C120();
};

struct C_001BCC40 {
    void func_001BCC40();
};

struct S_000BE540_Vt {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

extern C_0013B210 *D_002BEAAC;
extern int D_0027D75C;

extern char D_00276C90[];
extern char D_00276C08[];
extern char D_00276C58[];
extern char D_0027DDFC[];
extern char D_0027DE0C[];
extern char D_0027DDEC[];
extern char D_0027D68C[];
extern char D_00275678[];
extern char D_002A5348[];
extern char D_002A5FA8[];
extern char D_002A63C8[];
extern char D_002A60B0[0x104];
extern char D_00100000[];
extern char D_00040000[];
extern int D_002A64D0;
extern int D_0027DB9C;
extern void *D_002A829C;

extern "C" void __stdcall func_000BC520(int flags, void *p);
extern "C" void __stdcall func_0015B060(void *p, float a, float b);
extern "C" void __stdcall func_0012B190(int a, int b, int c, int d);
extern "C" int func_001DC974(void);

struct C_001C36B0 {
    C_001C36B0 *func_001C3E50(int a);
    void func_001C3EA0(int n);
};
struct V_80VT {
    virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5();
    virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11();
    virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17();
    virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23();
    virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29();
    virtual void u30(); virtual void u31(); virtual void u32();
};

struct C_001C4A70 { void func_001C4A70(void); };
struct C_001C4C30 { void func_001C4C30(void); };
struct C_00161870 { void func_001616F0(void); };
struct C_001D35E0 { void func_001D35E0(void); };

struct C_001D1BB0 {
    virtual void v0(int a, int b);
    virtual void v1();
    virtual void v2(int a, int b, int c);
    virtual void v3(int a, int b, int c);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
struct C_001D0FD0 {
    C_001D1BB0 *func_001D1BB0();
};

struct C_00092890 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    C_00092890 *func_00092890(int a);
    void func_00012140(void);
};

struct C_001362A0 {
    C_001362A0 *func_001362A0(float a, float b, int c, int d, int e, float f);
};

struct SH_1362 {
    void *func_001362A0(float a, float b, int c, int d, int e, float f);
};

struct C_001C3E50;
struct C_000BEDC0;
struct C_00092890;
struct C_001D1BB0;

struct C_000BBE30 {
    void *vtbl;
    char pad4[0x14C];
    S_000BDF30_Names *f150;
    char f154[0x104];
    struct { char pad0[0x204]; int f204; int f208; } *f258;
    char pad25c[4];
    S_000BE540_Vt *f260;
    char pad264[4];
    C_001C3E50 *f268;
    C_000BEDC0 *f26c;
    C_000BEDC0 *f270;
    C_00092890 *f274;
    char pad278[4];
    S_000BDF30_Entry *f27C;
    S_000BE020_Item *f280;
    int f284;
    int f288;
    int f28C;
    char pad290[0x1c];
    void *f2ac;
    int f2B0[8];
    int f2D0[8];
    void func_000BBA80(int idx, char *buf);
    int func_000BBE30(int show);
    int func_000BBED0(int show);
    int func_000BDF30(int show);
    int func_000BE020(int show);
    void func_000BE540();
    void func_000BE1D0(int slot);
    void func_000BC3E0(int slot);
    void func_000BE640(char *a, char *b, int c);
    void func_001BCC90(void *p);
    void func_000BADB0();
    void func_000BCBB0();
    void func_000BABF0();
    void func_000BACE0();
    void func_000BB0C0();
};

struct C_000BEDA0 {
    undefined4 func_000BEDA0(byte param_1);
};

struct C_000BE510 {
    int unk0;
    void func_00157660(void);
    void *func_000BE510(int flags);
};

struct C_000BEDC0 {
    int unk0;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38[6];
    int f50[6];
    int f68[6];
    int f80;
    int f84;
    int f88[2];
    int f90[2];
    C_000BEDC0 *func_00157600(void *param);
    C_000BEDC0 *func_000BEDC0(void *param);
};


int C_000BBE30::func_000BDF30(int show)
{
    char buf[0x104];
    int idx;

    if (D_002A8490->f2E0->f324 == 1) {
        return func_000BBE30(show);
    }
    func_001ADCC0(buf, 0x104, D_0027DB74, &f27C[f284].f104[0], f28C + 1);
    if (D_002A8490->f234 != 1) {
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();
    }
    idx = f150->f484->func_0001B3C0(&f27C[f284]);
    if (show != 0) {
        func_000BBA80(idx, buf);
    }
    return idx;
}

int C_000BBE30::func_000BE020(int show)
{
    char buf1[0x104];
    char buf2[0x104];
    char buf3[0x104];
    
    int cnt, limit, len;
    char *p;
    int idx;
    if (D_002A8490->f2E0->f324 == 1) return func_000BBED0(show);
    func_001ADCC0(buf1, 0x104, D_0027DB8C, f280[f27C[f284].f120[f288]].name);
    len = strlen(this->f27C[this->f284].name);
    limit = 0x103;
    cnt = AsmMinI(limit, len);
    func_001E8920(buf3, this->f27C[this->f284].name, cnt);
    buf3[cnt] = 0;
    p = buf3;
    while (*p != ' ' && *p != 0) p++;
    *p = 0;
    func_001ADCC0(buf2, 0x104, D_0027DDE0, buf3);
    if (D_002A8490->f234 != 1) {
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();
    }
    idx = this->f150->f484->func_0001B3C0(buf2);
    if (show != 0) this->func_000BBA80(idx, buf1);
    return idx;
}

void C_000BBE30::func_000BE1D0(int slot)
{
    S_000BE1D0_Slot *s = (*(S_000BE1D0_Slots **)((char *)D_002A8490->f2E0 + 0x2c0))->func_0005C020(*(int *)((char *)D_002A8490->f2E0 + 0x2d8));
    {
        int len = strlen((char *)f27C[f284].f104);
        int max = 7;
        int n = AsmMinI(max, len);
        func_001E8920((char *)D_002A8490->f2E0 + 0x150 + slot * 8, (char *)f27C[f284].f104, n);
        ((char *)D_002A8490->f2E0 + 0x150 + slot * 8)[n] = 0;
    }
    ((int *)((char *)D_002A8490->f2E0 + 0x1b0))[slot] = f28C;
    {
        int len = strlen((char *)f280[f27C[f284].f120[f288]].name);
        int max = 7;
        int n = AsmMinI(max, len);
        func_001E8920((char *)D_002A8490->f2E0 + slot * 8 + 0x1f4, (char *)f280[f27C[f284].f120[f288]].name, n);
        ((char *)D_002A8490->f2E0 + slot * 8 + 0x1f4)[n] = 0;
    }
    if (*(int *)((char *)D_002A8490->f2E0 + 4) == 0) {
        {
            int len = strlen((char *)f27C[f284].f104);
            int max = 7;
            int n = AsmMinI(max, len);
            func_001E8920(s->f5D4, (char *)f27C[f284].f104, n);
            s->f5D4[n] = 0;
        }
        s->f5E4 = f28C;
        {
            int len = strlen((char *)f280[f27C[f284].f120[f288]].name);
            int max = 7;
            int n = AsmMinI(max, len);
            func_001E8920(s->f5DC, (char *)f280[f27C[f284].f120[f288]].name, n);
            s->f5DC[n] = 0;
        }
    }
    func_000BC3E0(slot);
}

void *C_000BE510::func_000BE510(int flags) {
    extern int D_0027DB9C;
    void func_001E891B(void *);
    unk0 = (int)&D_0027DB9C;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_000BBE30::func_000BE540()
{
    int i;

    vtbl = (void *)&D_0027D75C;
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (f27C != 0) {
        int n = ((int *)f27C)[-1];
        void *base = (char *)f27C - 4;
        C_000BA2D0 *p = (C_000BA2D0 *)((char *)f27C + n * 0x1a8);
        if (--n >= 0) {
            int k = n + 1;
            do {
                p--;
                p->func_000BA2D0();
            } while (--k);
        }
        func_001E891B(base);
    }
    if (f280 != 0) {
        func_001E891B((void *)f280);
    }
    if (f260 != 0) {
        f260->v2();
        f260 = 0;
    }
    D_002BEAAC->func_0013B340();
    for (i = 0; i < 8; i++) {
        C_00136300 *p;
        p = (C_00136300 *)f2B0[i];
        if (p != 0) {
            p->func_00136300();
            func_001E891B(p);
        }
        p = (C_00136300 *)f2D0[i];
        if (p != 0) {
            p->func_00136300();
            func_001E891B(p);
        }
    }
    ((C_0018C120 *)D_002A8490->f2EC)->func_0018C120();
    ((C_001BCC40 *)this)->func_001BCC40();
}

void C_000BE640::func_000BE640(char *a, char *b, int c)
{
    char buf[0x104];
    int junk;
    int cap;
    int n;
    int len;
    int t;
    unsigned start;
    void *p;
    C_001D1BB0 *ac;

    D_002A8490->f234 = 1;
    if (D_002A8490->f2F0->f1DC) {
        p = func_001E8A44(0x54);
        if (p) {
            ac = ((C_001D0FD0 *)p)->func_001D1BB0();
        } else {
            ac = 0;
        }
        f2ac = ac;
        if (ac) {
            ac->v0((int)D_00276C90, 0);
            ac->v5();
        }
    }
    D_002BEAAC->func_0013C1D0(0x100000);
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
    {
        char *d = f154;
        char *s = a;
        char ch;
        do {
            ch = *s++;
            *d++ = ch;
        } while (ch);
    }
    func_001BCC90((void *)c);
    func_000BADB0();
    D_002EFDB8->f30 = 1;
    if (func_001E8AF0(a, D_0027D68C)) {
        func_001ADCC0(buf, 0x104, D_0027DE0C, D_002A64D0);
    } else {
        func_001ADCC0(buf, 0x104, D_0027DDFC, D_002A64D0);
    }
    if (D_002BEAAC->func_0013D780(buf, 1, 0, 0, 0, 0, 0, 0) != 0) {
        D_002BEAAC->func_0013B260(1);
    }
    ac = (C_001D1BB0 *)f2ac;
    if (D_002A8490->f2F0->f1DC) {
        if (ac) ac->v3((int)D_00276C08, 0xc8, 0x10);
        if (ac) ac->v2((int)D_00276C08, 0xd6, 0x187);
    }
    func_000BCBB0();
    if (D_002A8490->f2F0->f1DC) {
        if (ac) ac->v3((int)D_00276C08, 0xfa, 0x10);
        if (ac) ac->v2((int)D_00276C08, 0xef, 0x187);
    }
    v37(junk);
    cap = 0x103;
    if (D_002A8490->f2F0->f1DC) {
        if (ac) ac->v3((int)D_00276C08, 0x122, 0x10);
        if (ac) ac->v2((int)D_00276C08, cap, 0x187);
    }
    func_000BABF0();
    func_000BACE0();
    n = AsmMinI(cap, 9);
    func_001E8920(D_002A60B0, D_00276C58, n);
    D_002A60B0[n] = 0;
    p = func_001E8A44(0x70);
    if (p) {
        f268 = ((C_001C36B0 *)p)->func_001C3E50(1);
    } else {
        f268 = 0;
    }
    ((C_001C36B0 *)f268)->func_001C3EA0(1);
    ((C_001C4A70 *)f268)->func_001C4A70();
    ((C_001C4C30 *)f268)->func_001C4C30();
    len = strlen(D_002A63C8);
    n = AsmMinI(cap, len);
    func_001E8920(D_002A60B0, D_002A63C8, n);
    D_002A60B0[n] = 0;
    v32();
    if (D_002A8490->f2F0->f1DC) {
        if (ac) ac->v3((int)D_00276C08, 0x19c, 0x10);
        if (ac) ac->v2((int)D_00276C08, 0x140, 0x187);
    }
    D_002A8490->f2E0->func_0005C720();
    if (D_002A8490->f2E0->f2FC->func_00094F00() == 0) {
        D_002A8490->f2E0->f2FC->func_00094A10(D_0027DDEC, 0);
    }
    D_002A8490->f4->vtb4->v6();
    D_002BEAAC->func_0013DFF0((char *)&t, 1);
    D_002BEAAC->func_0013B260(0);
    D_002BEAAC->func_0013C1D0(0x40000);
    p = func_001E8A44(0x358);
    if (p) {
        f274 = ((C_00092890 *)p)->func_00092890(1);
    } else {
        f274 = 0;
    }
    ((C_00092890 *)f274)->v10();
    p = func_001E8A44(0x24);
    if (p) {
        f26c = ((C_000BEDC0 *)p)->func_00157600((void *)1);
    } else {
        f26c = 0;
    }
    p = func_001E8A44(0x48);
    if (p) {
        C_000BEDC0 *q = ((C_000BEDC0 *)p)->func_00157600((void *)1);
        q->unk0 = (int)&D_0027DB9C;
        q->f30 = 0;
        q->f24 = 1;
        q->f38[0] = 0;
        q->f28 = 0;
        q->f38[2] = 0;
        q->f38[3] = 1;
        q->f38[1] = 0;
        q->f2c = 0;
        f270 = q;
    } else {
        f270 = 0;
    }
    func_000BC520(0, this);
    func_000BB0C0();
    v28(c);
    if (D_002A8490->f2E0->f324 == 1) {
        int i1;
        int i2;
        f284 = 0;
        i1 = func_000BDF30(1);
        i2 = func_000BE020(1);
        ((S_LOOK2 *)f150->f484->f2c)->f28[i1]->f1a4->b5();
        ((S_LOOK2 *)f150->f484->f2c)->f28[i2]->f1a4->b5();
    }
    {
        int i;
        for (i = 0x2d0; i < 0x2f0; i += 4) {
            p = func_001E8A44(0x3c);
            if (p) {
                int v = D_002A8490->f8->func_00135E80(0, 0.2f);
                ((C_001362A0 *)p)->func_001362A0(-1.0f, 1.0f, 0, v, 0, 0.2f);
            } else {
                p = 0;
            }
            *(int *)((char *)this + i - 0x20) = (int)p;
            p = func_001E8A44(0x3c);
            if (p) {
                int v = D_002A8490->f8->func_00135E80(1, 0.2f);
                ((C_001362A0 *)p)->func_001362A0(-1.0f, 1.0f, 1, v, 1, 0.2f);
            } else {
                p = 0;
            }
            *(int *)((char *)this + i) = (int)p;
            if (*(int *)((char *)D_002A8490->f8 + i - 0x2bc)) {
                func_0015B060(*(void **)((char *)this + i - 0x20), 0.01f, 0.01f);
                func_0015B060(*(void **)((char *)this + i), 0.01f, 0.01f);
            }
        }
    }
    ((C_00161870 *)D_002A829C)->func_001616F0();
    if (f2ac) {
        ac = (C_001D1BB0 *)f2ac;
        start = func_001DC974();
        while ((unsigned)func_001DC974() - start < 0x11) {
        }
        ac->v6();
        ((C_001D35E0 *)ac)->func_001D35E0();
        func_001E891B(ac);
        f2ac = 0;
    }
    func_0012B190(0, 0, f258->f204, f258->f208);
    ((C_00092890 *)f274)->func_00012140();
    D_002A8490->f2E0->f2FC->f28->v30(D_002A8490->f2E0->f18);
}

undefined4 C_000BEDA0::func_000BEDA0(byte param_1)
{
  int func_000BE540(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000BE540();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_000BEDC0 *C_000BEDC0::func_000BEDC0(void *param)
{
    extern int D_0027DE7C;
    extern C_000BEDC0 *D_002B91AC;
    int i;

    func_00157600(param);
    unk0 = (int)&D_0027DE7C;
    D_002B91AC = this;
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f30 = 0;
    f34 = 0;
    for (i = 0; i < 6; i++) {
        f38[i] = 0;
        f50[i] = 0;
        f68[i] = 0;
    }
    f80 = 0;
    f84 = 0;
    for (i = 0; i < 2; i++) {
        f88[i] = 0;
        f90[i] = 0;
    }
    return this;
}
