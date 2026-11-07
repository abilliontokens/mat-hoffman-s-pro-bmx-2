/* 30 functions from 0x0015A660 to 0x0015B660, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
#include "asm_helpers.h"

struct C_0015A660 {
    char pad0[0x28];
    float f28;
    void *func_0015A660();
};
void func_001D3F50(void);
int __stdcall func_001DD128(unsigned __int64 *p);
int __stdcall func_001DD117(unsigned __int64 *p);
extern "C" unsigned __int64 __rdtsc();
#pragma intrinsic(__rdtsc)
extern float D_00276278;

struct HMRec {
    int f00;
    int f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    int pad20;
    float f24;
    char f28[0x20];
    int f48;
    int pad4C;
};
struct HMOwner {
    char pad0[0x1934];
    int cnt;
    int cur;
};
struct HMGame {
    char pad0[0x18];
    HMOwner *f18;
    char pad1c[0x254];
    int f270;
    int f274;
};
extern char D_002875D8[];
extern char D_002875A0[];
extern float D_00275544;
extern float D_00275460;
void func_0013E260(HMOwner *o, int id, char *fmt);
void func_0013E1F0(HMOwner *o, int id, char *fmt, char *name, double a, double b, double c, double d, double e);
struct HiResMeterX {
    char pad0[0x2C];
    int count;
    int pad30;
    int id;
    HMRec recs[1];
    int func_0015A780();
};

struct C_0015A8E0 {
    int unk0;
    void func_00157660();
    void *func_0015A8E0(int flags);
};

struct ARec {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int pad20;
    int f24;
    char f28;
    char pad29[0x27];
};

struct C_0015A740 {
    char pad0[0x2C];
    int f2C;
    int f30;
    char pad34[4];
    ARec recs[150];
    void func_0015A740(void);
};

struct C_0015A910 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    unsigned char f14;
    char pad15[3];
    int f18;
    C_0015A910 *func_0015A910(int a);
    void func_0015A940(void);
    void *func_0015A970(unsigned char flags);
};

struct S_0015A9B0_Map {
    void func_00135D30(int a0, int *a1, int a2);
};
struct C_0015A9B0 {
    virtual void v0();
    virtual void v1();
    virtual int v2(int a0, int a1, int a2);
    virtual int v3(int a0, int a1, int a2);
    char pad4[0x10];
    unsigned char f14;
    char pad15[0x30b];
    int f320;
    char pad324[0x300];
    float f624;
    float f628;
    float f62C;
    float f630;
    float f634;
    float f638;
    int func_0015A9B0(int a0, int a1, int a2);
};

struct C_0015B1A0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    void *func_0015B1A0(int a);
    void func_00157600(int a);
};

struct C_0015AB70 {
    char pad0[8];
    unsigned int f8;
    char padC[0xc];
    unsigned char *f18;
    int func_0015AB70(unsigned int idx);
};

struct C_0015AC20;

struct S_0015AC20_Mid {
    char pad0[0x38];
    C_0015AC20 *f38;
};

struct S_0015AC20_Game {
    char pad0[8];
    S_0015AC20_Mid *f8;
    char pad0C[0x224];
    unsigned char f230;
};

struct C_0015AC20 {
    char pad0[0x3f8];
    int f3F8;
    char pad3FC[0x149c];
    unsigned int f1898;
    int func_0015AC20(unsigned int flags);
};

struct C_0015ABF0 {
    undefined4 func_0015ABF0(int param_1);
};

void func_001E891B(void *p);
void *func_001E8A44(int size);

/* one 0x108-byte entry of C_0015B470::f0 */
struct S_0015B470_Entry {
    char name[0x104];
    int value;
};

/* growable list of named entries */
struct C_0015B470 {
    S_0015B470_Entry *f0;
    int f4;
    int f8;
    int fC;
    int f10;
    S_0015B470_Entry dflt;
    int f11C;
    int func_0015B370(int n);
    S_0015B470_Entry *at(int i)
    {
        if (i >= f4) {
            func_0015B370(i * 2 + 2);
        }
        if (i + 1 > fC) {
            fC = i + 1;
        }
        return &f0[i];
    }
    C_0015B470 *func_0015B470(void);
    void func_0015B4E0(const char *name, int value);
    int func_0015B570(const char *name);
};

/* element of the array owned by S_0015B310_Owned (virtual destructor in slot 0) */
struct S_0015B310_Elem {
    virtual ~S_0015B310_Elem();
    static void operator delete[](void *p) { func_001E891B(p); }
    static void operator delete(void *p) { func_001E891B(p); }
};

struct S_0015B310_Owned {
    virtual ~S_0015B310_Owned();
    int f4;
    S_0015B310_Elem *f8;
    static void operator delete(void *p) { func_001E891B(p); }
};

struct C_0015B310 {
    void *vtbl;
    char pad4[0x20];
    S_0015B310_Owned *f24;
    void *func_0015B310(int flags);
    void func_0015B1C0(void);
    void func_00157660(void);
};

struct C_0015B4C0 {
    void func_0015B4C0(void);
};

/* element of C_0015B150::unk8, an array allocated with new[]: destroyed
   through vtable slot 0 with the vector-delete flags */
struct S_0015B150_Elem {
    virtual void v0(int flags);
    virtual void v1(void);
};

struct C_0015B150 {
    int unk0;
    int unk4;
    int unk8;
    C_0015B150* func_0015B150(void);
    void func_0015B170(void);
    void *func_0015B2C0(unsigned int flags);
};

struct C_00135D90 {
    void func_00135D90(int a, int b);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_00030F30(char *dst, const char *src);
extern char D_00275678[];
extern char D_002A5EA0[];
extern char D_0028775C[];
extern int D_00275FB4;

struct C_0013B210 {
    int func_0013C9F0(char *name, int *mode);
    void func_0013C8A0(int h, void *buf, int size, int count);
    void func_0013C110(int h);
};
extern C_0013B210 *D_002BEAAC;

struct C_0015B210 {
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
    virtual void v27(int h);
    C_0015B210 *func_0015B210(char *name);
};

/* growable array of pointers */
struct S_0015A660_List {
    int count;
    void **data;
    int f8;
    int capacity;
    unsigned char f10 : 1;
    int func_0015ACA0(int n);
    void *at(int i)
    {
        if (count > 0 && data != 0 && i < count) {
            return data[i];
        }
        return 0;
    }
};

struct C_001D1480 {
    void func_001D1480(void);
};

struct JoystickDevice;

/* binding registered with a JoystickDevice list */
struct C_00135D70 {
    JoystickDevice *f0;
    char pad4[4];
    int f8;
    char padC[0x10];
    int f1C;
    int f20;
    void func_00135D70(int a0, int a1);
};

struct C_001D1460 {
    void func_001D1460(int a);
};

struct S_0015AD10_Pair {
    int a;
    int b;
};

struct S_0015AD10_Ent {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
};

/* event record filled in by JoystickDevice::func_0015AE60 */
struct S_0015AE60_Out {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
};

struct S_0015AD10_Dev {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual int dummy22(void *a, int b);
};

struct JoystickDevice {
    void *vtbl;
    char pad4[0x18];
    S_0015AD10_Pair pairs[6][16];
    int f31C;
    int f320;
    S_0015AD10_Ent ents[32];
    int f624[6];
    S_0015A660_List lists[6];
    unsigned char f6B4 : 1;
    JoystickDevice *func_0015AD10(int a);
    void func_0015AE20(void);
    int func_0015AE60(int idx, unsigned int flags, S_0015AE60_Out *out);
    void *func_0015B010(unsigned int flags);
    void func_0015AFC0(int idx, int a, int b);
    int func_0015B060(C_00135D70 *p, int a, int b);
};


void *C_0015A660::func_0015A660()
{
 C_0015A660 *volatile self=this;
 unsigned __int64 freq, prev, cur;
 volatile unsigned __int64 t0, t1;
 __int64 total;
 func_001D3F50();
 if (func_001DD128(&freq)) {
 total=0;
 func_001DD117(&prev);
 t0=__rdtsc();
 while (total < (__int64)freq) {
 func_001DD117(&cur);
 total += cur-prev;
 prev=cur;
 }
 t1=__rdtsc();
 t1-=t0;
 self->f28=D_00276278/(__int64)t1;
 return self;
 }
 return 0;
}

void C_0015A740::func_0015A740(void)
{
    for (int i = 0; i < 150; i++) {
        recs[i].f08 = 0;
        recs[i].f0C = 0;
        recs[i].f00 = 0;
        recs[i].f04 = 0;
        recs[i].f10 = 0;
        recs[i].f14 = 0;
        recs[i].f18 = 0;
        recs[i].f1C = 0;
        recs[i].f24 = 0;
        recs[i].f28 = 0;
    }
    f2C = 0;
    f30 = 0;
}

int HiResMeterX::func_0015A780()
{
 extern HMGame *D_002A8490;
 HMGame *g=D_002A8490;
 if(g->f274==g->f270-1) {
 HMOwner *o=g->f18;
 if(o) {
 if(id<0) { int t=o->cnt; o->cnt=t+1; id=t; }
 o=D_002A8490->f18;
 int cur=o->cur;
 if(cur==id) func_0013E260(o,id,D_002875D8);
 int i=0;
 if(count>0) {
 int *key=&recs[0].f48;
 do {
 int id2=*key;
 if(id2==-1) id2=id;
 if(((float *)key)[-16]>D_00275544) {
 if(id2!=cur) {
 ((float *)key)[-16]=0; ((float *)key)[-15]=0; key[-18]=0; key[-17]=0;
 ((float *)key)[-14]=0; ((float *)key)[-13]=0; ((float *)key)[-12]=0; ((float *)key)[-11]=0; ((float *)key)[-9]=0;
 } else {
 float v[3]; v[0]=((float *)key)[-15]/((float *)key)[-16];
 v[1]=((float *)key)[-11]; v[1]+=D_00275460; ((float *)key)[-11]=v[1];
 v[2]=(((float *)key)[-12]+=((float *)key)[-13]); v[2]/=v[1];
 func_0013E1F0(D_002A8490->f18,id2,D_002875A0,(char *)(key-8),((float *)key)[-14],((float *)key)[-13],v[2],((float *)key)[-9],v[0]);
 }
 }
 ++i; key+=20;
 }while(i<count);
 }
 }
 for(int j=0;j<count;++j) {recs[j].f10=0;recs[j].f14=0;}
 }
 return 1;
}

void *C_0015A8E0::func_0015A8E0(int flags) {
    extern int D_00287534;
    void func_001E891B(void *);
    unk0 = (int)&D_00287534;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0015A910 *C_0015A910::func_0015A910(int a)
{
    extern int D_00287640;
    f14 &= 0xc0;
    f18 = 0;
    f4 = 0;
    f8 = 0;
    vtbl = (void *)&D_00287640;
    fC = a;
    f10 = -1;
    return this;
}

void C_0015A910::func_0015A940(void)
{
    extern int D_00287640;
    void func_001E8390(void *);
    vtbl = (void *)&D_00287640;
    if (f18 != 0) {
        func_001E8390((void *)f18);
    }
    f18 = 0;
}

void *C_0015A910::func_0015A970(unsigned char flags)
{
    extern int D_00287640;
    void func_001E8390(void *);
    void func_001E891B(void *);
    vtbl = (void *)&D_00287640;
    if (f18 != 0) {
        func_001E8390((void *)f18);
    }
    f18 = 0;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_0015A9B0::func_0015A9B0(int a0, int a1, int a2)
{
    extern S_0015AC20_Game *D_002A8490;
    extern float D_00287654;
    extern float D_00287650;
    if (a0 < 0) {
        switch (a0) {
        case -2:
            if ((f14 & 1) && f624 < D_00287654) return 1;
            break;
        case -3:
            if ((f14 & 1) && f624 > D_00287650) return 1;
            break;
        case -4:
            if ((f14 & 2) && f628 < D_00287654) return 1;
            break;
        case -5:
            if ((f14 & 2) && f628 > D_00287650) return 1;
            break;
        case -6:
            if ((f14 & 4) && f62C < D_00287654) return 1;
            break;
        case -7:
            if ((f14 & 4) && f62C > D_00287650) return 1;
            break;
        case -8:
            if ((f14 & 8) && f630 < D_00287654) return 1;
            break;
        case -9:
            if ((f14 & 8) && f630 > D_00287650) return 1;
            break;
        case -10:
            if ((f14 & 0x10) && f634 < D_00287654) return 1;
            break;
        case -11:
            if ((f14 & 0x10) && f634 > D_00287650) return 1;
            break;
        case -12:
            if ((f14 & 0x20) && f638 < D_00287654) return 1;
            break;
        case -13:
            if ((f14 & 0x20) && f638 > D_00287650) return 1;
            break;
        }
        return 0;
    }
    S_0015A9B0_Map *m = *(S_0015A9B0_Map **)((char *)D_002A8490->f8 + 0xcc0);
    if (m == 0) return 0;
    m->func_00135D30(a0, &a0, f320);
    if (a0 == -1) return 0;
    return v3(a0, a1, a2);
}

int C_0015AB70::func_0015AB70(unsigned int idx)
{
    if (idx >= f8) {
        return 0;
    }
    if (f18 == 0) {
        return 0;
    }
    return f18[idx * 0xc] & 2;
}

undefined4 C_0015ABF0::func_0015ABF0(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 != 0) {
    *(byte *)(in_ECX + 0x6b4) = *(byte *)(in_ECX + 0x6b4) | 4;
    return 1;
  }
  *(byte *)(in_ECX + 0x6b4) = *(byte *)(in_ECX + 0x6b4) & 0xfb;
  return 1;
}

int C_0015AC20::func_0015AC20(unsigned int flags)
{
    extern S_0015AC20_Game *D_002A8490;
    unsigned char bit = (D_002A8490->f230 >> 2) & 1;

    if (bit == 0 && (flags & 0x80)) {
        return 0;
    }
    if (flags == 0x3f) {
        return 1;
    }
    if (bit == 0 || flags != 0x80) {
        if (flags == 0x80000000) {
            return f1898 == 0;
        }
    } else if (f3F8 == 1) {
        return 1;
    }
    if (flags & 0x40) {
        return (f1898 | 0x40) == flags;
    }
    return (f1898 & flags) != 0;
}

int S_0015A660_List::func_0015ACA0(int n)
{
    void *func_001E8A44(int size);
    void func_001E891B(void *p);
    void **p;
    void **old;

    if (n <= capacity) {
        return 0;
    }
    p = (void **)func_001E8A44(n * 4);
    if (p == 0) {
        return 0;
    }
    memcpy(p, data, capacity * 4);
    old = data;
    data = p;
    func_001E891B(old);
    capacity = n;
    return 1;
}

JoystickDevice *JoystickDevice::func_0015AD10(int a)
{
    extern int D_00287674;
    extern int D_00287658;
    extern S_0015AC20_Game *D_002A8490;
    int i;
    int j;

    ((C_001D1460 *)this)->func_001D1460(2);
    vtbl = (void *)&D_00287674;
    for (i = 0; i < 6; i++) {
        lists[i].data = 0;
        lists[i].count = 0;
        lists[i].f8 = 0;
        lists[i].capacity = 0;
        lists[i].f10 = 0;
    }
    f320 = a;
    f31C = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 16; j++) {
            pairs[i][j].a = 0;
            pairs[i][j].b = 0;
        }
    }
    for (i = 0; i < 6; i++) {
        S_0015A660_List *l = &lists[i];
        f624[i] = 0;
        l->data = (void **)func_001E8A44(4);
        l->f8 = 1;
        l->capacity = 1;
        l->f10 = 1;
    }
    for (i = 0; i < 32; i++) {
        ents[i].a = 0;
        ents[i].b = 0;
    }
    f6B4 = ((S_0015AD10_Dev *)D_002A8490)->dummy22(&D_00287658, 0);
    return this;
}

void JoystickDevice::func_0015AE20(void)
{
    extern int D_00287674;
    void func_001E891B(void *p);
    S_0015A660_List *l;
    int i;

    vtbl = (void *)&D_00287674;
    l = &lists[6];
    i = 6;
    do {
        l--;
        func_001E891B(l->data);
    } while (--i != 0);
    ((C_001D1480 *)this)->func_001D1480();
}

int JoystickDevice::func_0015AE60(int idx, unsigned int flags, S_0015AE60_Out *out)
{
    extern S_0015AC20_Game *D_002A8490;
    C_0015AC20 *input = D_002A8490->f8->f38;

    if (input != 0) {
        if (input->func_0015AC20(flags) == 0) {
            return 0;
        }
    } else if (flags != 0 && flags != 0x80000000 && flags != 0x3f) {
        return 0;
    }
    if (ents[idx].a == 1) {
        if (out != 0) {
            out->f0 = 1;
            out->f4 = ents[idx].b;
            out->f8 = ents[idx].c;
            out->fC = ents[idx].d;
            out->f10 = ents[idx].e;
            out->f14 = ents[idx].f;
        }
        return 1;
    }
    if (out != 0) {
        out->f0 = 1;
        out->f4 = 0;
        out->f8 = 0;
        out->fC = 0;
        out->f10 = 0;
        out->f14 = 0;
    }
    return 0;
}

void JoystickDevice::func_0015AFC0(int idx, int a, int b)
{
    int i;

    for (i = 0; i < lists[idx].count; i++) {
        ((C_00135D90 *)lists[idx].at(i))->func_00135D90(a, b);
    }
}

void *JoystickDevice::func_0015B010(unsigned int flags)
{
    extern int D_00287674;
    void func_001E891B(void *p);
    S_0015A660_List *l;
    int i;

    vtbl = (void *)&D_00287674;
    l = &lists[6];
    i = 6;
    do {
        l--;
        func_001E891B(l->data);
    } while (--i != 0);
    ((C_001D1480 *)this)->func_001D1480();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int JoystickDevice::func_0015B060(C_00135D70 *p, int a, int b)
{
    S_0015A660_List *l;

    p->f1C = a;
    p->f0 = this;
    p->f20 = b;
    l = &lists[p->f8];
    if (l->count < l->capacity || l->func_0015ACA0(l->f8 + l->count)) {
        l->data[l->count] = p;
        l->count++;
    }
    switch (p->f8) {
    case 0:
        p->func_00135D70(-2, -3);
        break;
    case 1:
        p->func_00135D70(-5, -4);
        break;
    case 2:
        p->func_00135D70(-7, -6);
        break;
    case 3:
        p->func_00135D70(-9, -8);
        break;
    case 4:
        p->func_00135D70(-11, -10);
        break;
    case 5:
        p->func_00135D70(-13, -12);
        break;
    }
    return 1;
}

C_0015B150* C_0015B150::func_0015B150(void) {
    extern int D_002876E0;
    unk0 = (int)&D_002876E0;
    unk4 = 0;
    unk8 = 0;
    return this;
}

void C_0015B150::func_0015B170(void)
{
    extern int D_002876E0;
    void func_001E891B(void *p);
    int *q;

    unk0 = (int)&D_002876E0;
    if (unk8 != 0) {
        q = (int *)unk8 - 1;
        if (*q != 0) {
            ((S_0015B150_Elem *)unk8)->v0(3);
        } else {
            func_001E891B(q);
        }
    }
}

void *C_0015B1A0::func_0015B1A0(int a)
{
    extern int D_002876EC;
    func_00157600(a);
    vtbl = (void *)&D_002876EC;
    f24 = 0;
    return this;
}

void C_0015B310::func_0015B1C0(void)
{
    extern int D_002876EC;
    vtbl = (void *)&D_002876EC;
    if (f24 != 0) {
        if (f24->f8 != 0) {
            delete[] f24->f8;
        }
        if (f24 != 0) {
            delete f24;
        }
    }
    func_00157660();
}

C_0015B210 *C_0015B210::func_0015B210(char *name)
{
    char path[0x104];
    int a;
    int b;
    int id;

    func_001ADCC0(path, 0x104, D_00275678, D_002A5EA0, name);
    func_00030F30(path, D_0028775C);
    id = D_002BEAAC->func_0013C9F0(path, &D_00275FB4);
    if (id == 0) {
        return 0;
    }
    D_002BEAAC->func_0013C8A0(id, &a, 4, 1);
    D_002BEAAC->func_0013C8A0(id, &b, 4, 1);
    v27(id);
    D_002BEAAC->func_0013C110(id);
    return this;
}

void *C_0015B150::func_0015B2C0(unsigned int flags)
{
    extern int D_002876E0;
    void func_001E891B(void *p);
    int *q;

    unk0 = (int)&D_002876E0;
    if (unk8 != 0) {
        q = (int *)unk8 - 1;
        if (*q != 0) {
            ((S_0015B150_Elem *)unk8)->v0(3);
        } else {
            func_001E891B(q);
        }
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0015B310::func_0015B310(int flags)
{
    extern int D_002876EC;
    vtbl = (void *)&D_002876EC;
    if (f24 != 0) {
        if (f24->f8 != 0) {
            delete[] f24->f8;
        }
        if (f24 != 0) {
            delete f24;
        }
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_0015B470::func_0015B370(int n)
{
    S_0015B470_Entry *old;
    int m;
    int cnt;
    int i;

    if (n <= 0) {
        return 0;
    }
    if (n < f4) {
        fC = n - 1;
    }
    old = f0;
    f0 = (S_0015B470_Entry *)func_001E8A44(n * 0x108);
    if (f0 == 0) {
        return 0;
    }
    m = f4;
    cnt = AsmMinI(m, n);
    for (i = 0; i < cnt; i++) {
        f0[i] = old[i];
    }
    if (f4 < cnt && f10 != 0) {
        for (i = f4; i < cnt; i++) {
            f0[i] = dflt;
        }
    }
    func_001E891B(old);
    f4 = n;
    return 1;
}

C_0015B470 *C_0015B470::func_0015B470(void)
{
    extern undefined4 D_002E28F4;
    extern char D_000186A0;
    f10 = 0;
    f4 = 10;
    f8 = (int)&D_000186A0;
    fC = 0;
    f0 = (S_0015B470_Entry *)func_001E8A44(0xa50);
    D_002E28F4 = (undefined4)this;
    f11C = 0;
    return this;
}

void C_0015B4C0::func_0015B4C0(void)
{
  extern undefined4 D_002E28F4;
  int func_001E891B(...);
  int* in_ECX = (int*)this;
  
  D_002E28F4 = 0;
  if (*in_ECX != 0) {
    func_001E891B(*in_ECX);
  }
  return;
}

void C_0015B470::func_0015B4E0(const char *name, int value)
{
    const char *src;
    S_0015B470_Entry *e;
    char *d;
    char c;

    e = at(f11C);
    src = name;
    e->value = value;
    d = at(f11C)->name;
    do {
        c = *src++;
        *d++ = c;
    } while (c != 0);
    f11C++;
}

int C_0015B470::func_0015B570(const char *name)
{
    int i;

    for (i = 0; i < f11C; i++) {
        if (strcmp(at(i)->name, name) == 0) {
            return at(i)->value;
        }
    }
    return 0;
}

