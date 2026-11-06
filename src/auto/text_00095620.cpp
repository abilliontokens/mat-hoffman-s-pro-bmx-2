/* 9 functions from 0x00095620 to 0x00096450, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_00096020_Item { char pad[0xa0]; char name[1]; };
struct S_00096020_List { char pad[0x24]; int count; S_00096020_Item **items; };
struct S_00096020_Manager {
 void func_0001B910(S_00096020_Item *);
 void func_0001B820(S_00096020_Item *);
 void func_0001BDB0(int);
 int func_0001B900(S_00096020_Item *);
 void func_0001B9E0(S_00096020_Item *, int, int);
};
struct S_00096020_Owner { char pad[0x3ac]; S_00096020_List *list; char pad3b0[0xd4]; S_00096020_Manager *manager; };
struct S_00096020_Arg { char pad[0x64]; S_00096020_Owner *owner; };
struct C_00096020 { char pad[0x300]; int count; char names[0x1680]; void func_00096020(S_00096020_Arg *arg); };
int func_001EA426(const char *, const char *);
struct S_00096200_Manager {
 void func_0001B910(S_00096020_Item *);
 void func_0001B820(S_00096020_Item *);
 void func_0001B9E0(S_00096020_Item *, int, int);
 void func_0001BDB0(int);
 void func_0001BB00(int, char *, int);
};
/* object driven by func_00095D70 (virtual slots 5, 6, 30 and 32) */
struct S_00095D70_Obj {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
 virtual void v4(); virtual void v5(int a); virtual void v6(); virtual void v7();
 virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
 virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
 virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
 virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
 virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
 virtual void v32();
};
struct S_00095D70_Group { int count; S_00095D70_Obj **items; };
struct S_00095D70_Table { char pad[0x28]; S_00095D70_Group **items; };
struct S_00095D70_Sink { void func_00094E40(int, int, int); };
struct S_00095D70_Mid { char pad[0x2fc]; S_00095D70_Sink *f2fc; };
struct S_00096200_Owner { char pad[0x3ac]; S_00096020_List *list; char pad3b0[0x10]; S_00095D70_Table *f3c0; char pad3c4[0xc0]; S_00096200_Manager *manager; };
struct S_00096200_Player { char pad[0x64]; S_00096200_Owner *owner; char pad68[0x160]; int f1c8; void func_00052630(char *); };
struct S_00096200_Game { char pad[0x2a4]; S_00096200_Player *player; char pad2a8[0x38]; S_00095D70_Mid *f2e0; };
/* per-slot state at +0x300 (12 slots, 0x78 byte strings) */
struct C_00095D70 {
 char pad[0x300];
 int count;
 union {
  char names[0x1680];
  struct {
   char s304[12][0x78];
   char s8A4[12][0x78];
   char sE44[12][0x78];
   char s13E4[12][0x78];
  };
 };
 int f1984[12];
 union {
  char f19B4[0xb40];
  struct {
   char s19B4[12][0x78];
   char s1F54[12][0x78];
  };
 };
 int f24F4[12];
 int f2524[12];
 char pad2554[0x6458 - 0x2554];
 S_00095D70_Obj *objs[12];
 void func_00095D70(void);
};
extern S_00096200_Game *D_002A8490;
struct S_00096200_Obj { void func_001B65D0(); };
struct C_00096200 { void func_00096200(int idx); };
struct C_00095BC0 {
    char fields[0x6454];
    C_00095BC0 *func_00095BC0();
};
struct S_00095A00_Vt {
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
    virtual int v30(int a, int b);
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual int v41(int a);
};

struct S_00095A00_Sub {
    int count;
    void *data;
    void func_001CDED0(int n);
    void func_001CBCF0(int n);
    void func_00094F10();
};

struct C_00095A00 {
    char pad0[0x30];
    int f30;
    int f34;
    int f38;
    char pad3C[0x14];
    S_00095A00_Vt *f50;
    int f54;
    char pad58[0x10];
    S_00095A00_Sub f68;
    int func_00095A00(int n);
    int func_000952F0(void);
    int func_00095880();
    int func_00095250(int n);
    int func_000952A0(int n);
    int func_000955C0(int n);
};
void *func_001E8A44(unsigned int size);
int func_001E891B(...);
/* growable int array: bit 0 of flags = owns data */
struct S_00095880_Array {
    int count;
    int *data;
    int growth;
    int capacity;
    unsigned char flags;
    void func_001CDED0(int n);
};
int func_00011260(int a, int b);

struct S_00095AB0_Vt {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(float a); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(int a); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual int v30(int a, int b); virtual void v31(int a, int b);
    virtual void v32(); virtual void v33(); virtual int v34(); virtual void v35();
    virtual void v36(); virtual int v37();
};

struct S_00095AB0_Sub {
    void func_001CDED0(int n);
};

extern float D_00275544;

struct C_00095AB0 {
    char pad0[0x28];
    S_00095AB0_Vt *f28;
    char pad2C[4];
    int f30;
    char pad34[4];
    int f38;
    int f3C;
    int f40;
    int f44;
    int f48;
    float f4C;
    S_00095AB0_Vt *f50;
    char pad54[0x14];
    S_00095AB0_Sub f68;
    int func_00095A00(int n);
    int func_000952F0(void);
    void func_00095880(void);
    void func_00157A00(float a);
    void func_00095AB0(float a);
};

extern char D_0027A2AC[], D_002A48F8[], D_0027A2F4[], D_0027A2EC[], D_0027A2DC[];
extern char D_0027A2D4[], D_00275630[], D_0027A2CC[], D_0027A2C4[];
extern "C" int func_001ADCC0(char *, int, const char *, ...);

/* the config file reader the function keeps on its stack */
struct S_00095640_Config {
    int data[0x133];
    void func_00168280();
    void func_001691E0();
    void func_00169490(char *, int);
    int func_00169710(const char *);
    void func_00168C20(const char *, int, int *);
    void func_00168BE0(const char *, const char *, char *, int);
};

/* one entry of the list at +0x54: two names and two flags */
struct S_00095640_Track {
    char name[0x32];
    char name2[0x32];
    int f64;
    int f68;
};

/* growable array of pointers: count at +0, items at +4 */
struct S_00095640_List {
    int count;
    S_00095640_Track **items;
    int growth;
    int capacity;
    S_00095640_Track *at(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            return items[i];
        }
        return 0;
    }
    int func_0015ACA0(int n);
    void Add(S_00095640_Track *t)
    {
        if (count < capacity || func_0015ACA0(count + growth)) {
            items[count++] = t;
        }
    }
};

struct S_00095640_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual int v28(int a);
    virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40();
    virtual int v41(int a);
    char pad4[0x1a8];
    S_00095640_Obj *func_001CD090(int a, void *b, int c);
    void func_001CB610(int idx, const char *name);
};

/* BmxMusicManager */
struct C_00095640 {
    char pad0[0x28];
    void *f28;
    char pad2C[0x24];
    S_00095640_Obj *f50;
    S_00095640_List tracks;
    C_00095640 *func_00095640(int a, int b, int c);
};

struct C_00095620 {
    undefined4 func_00095620(byte param_1);
};


undefined4 C_00095620::func_00095620(byte param_1)
{
  int func_00095060(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00095060();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_00095640 *C_00095640::func_00095640(int a, int b, int c)
{
    S_00095640_Config cfg;
    char buf2[0x104];
    char buf1[0x104];
    int n;
    int count;
    int i;

    cfg.func_00168280();
    S_00095640_Obj *obj = (S_00095640_Obj *)func_001E8A44(0x1ac);
    if (obj != 0)
        obj = obj->func_001CD090(b, f28, c);
    else
        obj = 0;
    f50 = obj;
    if (!f50->v28(a)) {
        cfg.func_001691E0();
        return 0;
    }
    f50->func_001CB610(0, D_0027A2AC);
    n = f50->v41(0);
    for (i = 0; i < n; i++) {
        S_00095640_Track *t = (S_00095640_Track *)func_001E8A44(0x6c);
        if (i < 12)
            t->f64 = 0;
        else
            t->f64 = i != 0x12;
        t->f68 = 1;
        tracks.Add(t);
    }
    func_001ADCC0(buf1, 0x104, D_0027A2F4, D_002A48F8);
    cfg.func_00169490(buf1, 0);
    if (cfg.func_00169710(D_0027A2EC)) {
        cfg.func_00168C20(D_0027A2DC, 0, &count);
        for (i = 1; i <= count; i++) {
            func_001ADCC0(buf2, 0x104, D_0027A2D4, i);
            cfg.func_00169710(buf2);
            cfg.func_00168BE0(D_0027A2CC, D_00275630, tracks.at(i - 1)->name, -1);
            cfg.func_00168BE0(D_0027A2C4, D_00275630, tracks.at(i - 1)->name2, -1);
        }
    }
    cfg.func_001691E0();
    return this;
}

int C_00095A00::func_00095880()
{
    if (!f50) return 0;
    int n = f34 == 0 ? f54 : f50->v41(f34);
    S_00095880_Array a;
    unsigned char t = a.flags;
    a.count = 0;
    t &= 0xfe;
    int *buf = (int *)func_001E8A44(n * 4);
    a.data = buf;
    a.growth = 16;
    a.capacity = n;
    t |= 1;
    a.flags = t;
    int count;
    if (f34 == 0) {
        if (!func_000952F0()) {
            func_001E891B(buf);
            return 0;
        }
        if (!n) {
            func_001E891B(buf);
            return 0;
        }
        if (f68.count == func_000952F0()) f68.func_00094F10();
        count = 0;
        for (int i = 1; n > 0; ++i, --n) {
            if (!func_00095250(i) && func_000952A0(i) && !func_000955C0(i)) {
                a.func_001CDED0(i);
                ++count;
            }
        }
    } else {
        if (a.capacity <= 0) {
            func_001E891B(buf);
            return 0;
        }
        if (f68.count == n) f68.func_00094F10();
        count = 0;
        for (int i = 1; n > 0; ++i, --n) {
            if (!func_000955C0(i)) {
                a.func_001CDED0(i);
                ++count;
            }
        }
    }
    int index = func_00011260(0, count - 1);
    int *d = a.data;
    int chosen = a.count > 0 && d && index < a.count ? d[index] : 0;
    f68.func_001CDED0(chosen);
    f50->v30(chosen - 1, 1);
    f30 = 2;
    f38 = chosen;
    func_001E891B(d);
    return 1;
}

extern "C" void *__cdecl memset(void *dst, int c, unsigned int n);
#pragma intrinsic(memset)
static __inline void zero_mem(void *p, unsigned int n) { memset(p, 0, n); }
int C_00095A00::func_00095A00(int n)
{
    if (f34 == 0) {
        if (func_000952F0() == 0)
            return 0;
    } else {
        if (n < 1)
            return 0;
        if (n > f50->v41(f34))
            return 0;
    }

    S_00095A00_Sub *sub = &f68;

    if (sub->count > 0) {
        memset(sub->data, 0, sub->count * 4);
        sub->count = 0;
    }
    sub->func_001CDED0(n);
    f38 = n;
    if (f50->v30(n - 1, 1) == 0) {
        sub->func_001CBCF0(n);
        f30 = 6;
    } else {
        f30 = 2;
    }
    return 1;
}

void C_00095AB0::func_00095AB0(float a)
{
    f50->v12(a);
    if (f40 != 0) {
        f4C = f4C - a;
        if (f4C < D_00275544) {
            f28->v31(1, 1);
            f50->v18(1);
            f40 = 0;
            f44 = 1;
        }
    }
    if (f48 != 0 && f50->v37() == 0 && func_00095A00(f3C) != 0) {
        f48 = 0;
    }
    if (f50->v37() == 0 && f50->v34() == 0 && f30 == 2 && func_000952F0() > 0) {
        func_00095880();
    }
    if (f50->v37() == 0 && f30 == 6 && func_000952F0() > 0 && f50->v30(f38 - 1, 1) != 0) {
        f68.func_001CDED0(f38);
        f30 = 2;
    }
    func_00157A00(a);
}

C_00095BC0 *C_00095BC0::func_00095BC0()
{
    *(int *)(fields + 0) = -1;
    *(int *)(fields + 0x40) = 0;
    *(int *)(fields + 0x44) = 0;
    fields[4] = 0;
    fields[0xc0] = 0;
    fields[0x138] = 0;
    fields[0x1b0] = 0;
    *(int *)(fields + 0x228) = 0;
    *(int *)(fields + 0x22c) = 0;
    *(int *)(fields + 0x234) = 0;
    for (int i = 0; i < 4; i++) {
        ((int *)(fields + 0x238))[i] = -1;
        ((int *)(fields + 0x248))[i] = -1;
        ((int *)(fields + 0x258))[i] = -1;
    }
    *(int *)(fields + 0x2e4) = 0;
    *(int *)(fields + 0x2e8) = 0;
    *(int *)(fields + 0x2ec) = 1;
    fields[0x48] = 0;
    *(int *)(fields + 0x268) = -1;
    fields[0x26c] = 0;
    *(int *)(fields + 0x2554) = 0;
    for (int j = 0; j < 10; j++) {
        ((int *)(fields + 0x2558))[j] = -1;
        ((int *)(fields + 0x2580))[j] = 0;
        ((int *)(fields + 0x25a8))[j] = 0;
        ((int *)(fields + 0x25d0))[j] = 0;
        fields[0x25f8 + j*0x78] = 0;
        ((int *)(fields + 0x2af8))[j] = 0;
        ((int *)(fields + 0x2b20))[j] = 0;
        fields[0x2b48 + j*0x78] = 0;
        fields[0x2ff8 + j*0x78] = 0;
        fields[0x34a8 + j*0x78] = 0;
        fields[0x3958 + j*0x78] = 0;
        fields[0x3e08 + j*0x78] = 0;
        fields[0x42b8 + j*0x78] = 0;
        fields[0x4768 + j*0x78] = 0;
        fields[0x4c18 + j*0x78] = 0;
        fields[0x50c8 + j*0x78] = 0;
        fields[0x5578 + j*0x78] = 0;
        fields[0x5a28 + j*0x78] = 0;
        fields[0x5ed8 + j*0x78] = 0;
        ((int *)(fields + 0x6388))[j] = 0;
        ((float *)(fields + 0x63b0))[j] = -1.0f;
        ((int *)(fields + 0x2aa8))[j] = -1;
        ((int *)(fields + 0x2ad0))[j] = -1;
        ((int *)(fields + 0x6428))[j] = 0;
        ((int *)(fields + 0x63d8))[j] = 0;
        ((int *)(fields + 0x6400))[j] = 0;
    }
    *(int *)(fields + 0x300) = 0;
    for (int k = 0; k < 12; k++) {
        fields[0x304 + k*0x78] = 0;
        fields[0x8a4 + k*0x78] = 0;
        fields[0xe44 + k*0x78] = 0;
        fields[0x13e4 + k*0x78] = 0;
        ((int *)(fields + 0x1984))[k] = -1;
        fields[0x1f54 + k*0x78] = 0;
        ((int *)(fields + 0x24f4))[k] = -1;
        ((int *)(fields + 0x2524))[k] = -1;
        fields[0x19b4 + k*0x78] = 0;
    }
    *(int *)(fields + 0x6450) = 0;
    *(int *)(fields + 0x2f0) = 0;
    *(int *)(fields + 0x2f4) = 0;
    *(int *)(fields + 0x2f8) = 0;
    *(int *)(fields + 0x2fc) = 0;
    return this;
}

void C_00095D70::func_00095D70(void)
{
 S_00096200_Player *p = D_002A8490->player;
 int i = 0;
 if (count <= 0) return;
 do {
 if (s304[i][0]) {
 int found = 0;
 for (int j = 0; j < p->owner->list->count && !found; ++j) {
 S_00096020_Item *item = p->owner->list->items[j];
 if (!func_001EA426(item->name, s304[i])) { p->owner->manager->func_0001B9E0(item, 0, 0); found = 1; }
 }
 }
 if (s8A4[i][0]) {
 int found = 0;
 for (int j = 0; j < p->owner->list->count && !found; ++j) {
 S_00096020_Item *item = p->owner->list->items[j];
 if (!func_001EA426(item->name, s8A4[i])) { p->owner->manager->func_0001B820(item); found = 1; }
 }
 }
 if (s13E4[i][0] && sE44[i][0]) {
 int found = 0;
 for (int j = 0; j < p->owner->list->count && !found; ++j) {
 S_00096020_Item *item = p->owner->list->items[j];
 if (!func_001EA426(item->name, s13E4[i])) {
 p->owner->manager->func_0001BDB0(j);
 p->owner->manager->func_0001BB00(j, sE44[i], found);
 found = 1;
 }
 }
 }
 if (f1984[i] != -1) {
 D_002A8490->f2e0->f2fc->func_00094E40(f1984[i], 0x64, 1);
 }
 if (s19B4[i][0] && D_002A8490->player->f1c8 == 0) {
 objs[i]->v5(4);
 }
 if (p->f1c8 == 0 && s1F54[i][0]) {
 p->func_00052630(s1F54[i]);
 }
 if (f24F4[i] != -1 && f2524[i] != -1) {
 S_00095D70_Obj *o = p->owner->f3c0->items[f24F4[i] - 1]->items[f2524[i] - 1];
 o->v32();
 o->v30();
 o->v6();
 }
 ++i;
 } while (i < count);
}

void C_00096020::func_00096020(S_00096020_Arg *arg)
{
 int i=0;
 if (count <= 0) return;
 char *name=names+0x5a0;
 do {
 char *first=name-0x5a0;
 if (*first) {
 int found=0;
 for(int j=0;j<arg->owner->list->count && !found;++j) {
 S_00096020_Item *item=arg->owner->list->items[j];
 if (!func_001EA426(item->name,first)) { arg->owner->manager->func_0001B910(item); found=1; }
 }
 }
 if (*name) {
 int found=0;
 for(int j=0;j<arg->owner->list->count && !found;++j) {
 S_00096020_Item *item=arg->owner->list->items[j];
 if (!func_001EA426(item->name,name)) { arg->owner->manager->func_0001B820(item); found=1; }
 }
 }
 if (name[0xb40] && name[0x5a0]) {
 for(int j=0;j<arg->owner->list->count;++j) {
 S_00096020_Item *item=arg->owner->list->items[j];
 if (!func_001EA426(item->name,name+0xb40)) {
 arg->owner->manager->func_0001BDB0(j);
 arg->owner->manager->func_0001B9E0(item,arg->owner->manager->func_0001B900(item),1);
 arg->owner->manager->func_0001B910(item);
 }
 }
 }
 ++i; name+=0x78;
 } while(i<count);
}

extern "C" char *__cdecl strcpy(char *, const char *);
#pragma intrinsic(strcpy)
void C_00096200::func_00096200(int idx)
{
 char buf[0x104];
 strcpy(buf, (char *)this + idx * 0x78 + 0x2ff8);
 S_00096200_Player *p = D_002A8490->player;
 S_00096200_Owner *o = p->owner;
 if (buf[0]) {
  int found = 0;
  for (int j = 0; j < o->list->count && !found; ++j) {
   S_00096020_Item *item = o->list->items[j];
   if (!func_001EA426(item->name, buf)) { p->owner->manager->func_0001B910(item); found = 1; }
  }
 }
 strcpy(buf, (char *)this + idx * 0x78 + 0x34a8);
 if (buf[0]) {
  int found = 0;
  for (int j = 0; j < o->list->count && !found; ++j) {
   S_00096020_Item *item = o->list->items[j];
   if (!func_001EA426(item->name, buf)) { p->owner->manager->func_0001B820(item); found = 1; }
  }
 }
 if (((char *)this + idx * 0x78)[0x5578] && ((char *)this + idx * 0x78)[0x50c8])
  (*(S_00096200_Obj **)((char *)this + idx * 4 + 0x63d8))->func_001B65D0();
 if (((char *)this + idx * 0x78)[0x5ed8] && ((char *)this + idx * 0x78)[0x5a28])
  (*(S_00096200_Obj **)((char *)this + idx * 4 + 0x6400))->func_001B65D0();
 char *a = (char *)this + idx * 0x78 + 0x3958;
 if (*a) {
  char *b = (char *)this + idx * 0x78 + 0x3e08;
  if (*b) {
   int found = 0;
   for (int j = 0; j < p->owner->list->count && !found; ++j) {
    S_00096020_Item *item = p->owner->list->items[j];
    if (!func_001EA426(item->name, a)) {
     p->owner->manager->func_0001BDB0(j);
     p->owner->manager->func_0001BB00(j, b, found);
     p->owner->manager->func_0001B910(item);
     found = 1;
    }
   }
  }
 }
}

