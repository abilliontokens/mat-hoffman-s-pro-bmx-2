/* 20 functions from 0x0001D280 to 0x0001E260, found by Ghidra. */
#include "common.h"
#include <algorithm>
#include "asm_helpers.h"
struct C_0001E0A0 {
    char pad0[0x140];
    float unk140;
    float unk144;
    float unk148;
    void func_0001E0A0(float a0, float a1, float a2, int a3);
};

struct C_0001DFF0 {
    int unk0;
    void func_0001DFF0(void);
};

extern unsigned int D_002A0C18[];

static inline unsigned int swap32(unsigned int x)
{
    unsigned char b0 = (unsigned char)x;
    unsigned char b1 = (unsigned char)(x >> 8);
    unsigned char b2 = (unsigned char)(x >> 16);
    unsigned char b3 = (unsigned char)(x >> 24);
    return ((b0 << 8 | b1) << 8 | b2) << 8 | b3;
}

#define SWAP32B(x) (((((unsigned char)(x) << 8 | (unsigned char)((x) >> 8)) << 8 | (unsigned char)((x) >> 16)) << 8) | (unsigned char)((x) >> 16 >> 8))

#define SWAP32B(x) (((((unsigned char)(x) << 8 | (unsigned char)((x) >> 8)) << 8 | (unsigned char)((x) >> 16)) << 8) | (unsigned char)((x) >> 16 >> 8))

#define SWAP32(x) (((((x) & 0xff) << 8 | ((x) >> 8) & 0xff) << 8 | ((x) >> 16) & 0xff) << 8 | ((x) >> 24))

struct C_0001E0E0 {
    int unk0;
    int nbits;
    unsigned int *data;
    char pad0c[0x0c];
    int fill;
    void func_0001E0E0(int n);
};

extern int D_00275F18;

struct C_0001D690 {
    void *func_0001D690(unsigned char param_1);
};

struct C_0001D420_Sub {
    char pad0[0x40];
    int func_001CBCF0(int param);
};

struct C_0001D420 {
    char pad0[0x30];
    C_0001D420_Sub sub30;
    C_0001D420_Sub sub70;
    int func_0001D420(int param);
};

struct C_0001DF80_Sub30 {
    char pad0[0x40];
    void func_001CDED0(int param);
};

struct C_0001DF80_Arr {
    int n;
    int *arr;
    int base;
    int cap;
    int func_0015ACA0(int idx);
};

struct C_0001D6B0_Item {
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
virtual int v27();
virtual void v28();
virtual void v29();
virtual void v30();
virtual void v31();
virtual void v32();
virtual void v33();
virtual int v34();
char pad4[0x90]; int unk94; int unk98; char pad9c[0x104]; int unk1a0; char pad1a4[0x14]; int unk1b8;
void func_001A1930(int, int*); void func_001A1540(float*,float*); void func_001A1E60();
};
struct C_0001D6B0_B4 { void func_001CBFE0(float*,float*); void func_001CBF60(); };
struct C_0001D6B0 {
char pad0[0x2c]; int unk2c; char pad30[0x18]; int unk48,unk4c,unk50,unk54,unk58,unk5c; int unk60[4]; int n; C_0001D6B0_Item **arr; char pad78[0xc]; C_0001DF80_Arr a84; char pad94[4]; C_0001DF80_Arr a98; char pada8[0xc]; C_0001D6B0_B4 *b4;
C_0001D6B0_Item *at(int i) { if(n>0 && arr && i<n) return arr[i]; return 0; }
void func_0001D6B0();
};
extern "C" void *func_001E8A44(unsigned int);
extern "C" void func_001E891B(void*);
extern "C" int func_0001CBC0(const void*,const void*);
extern "C" void func_001E8550(void*,unsigned int,unsigned int,int (*)(const void*,const void*));

struct S_0001DE30_36 { int v[9]; };
struct S_0001DE30_16 { int v[4]; };
struct C_0001DE30_Item {
    virtual void virt0(int);
    C_0001DE30_Item *func_001A2580(void *, int, int, int);
    int func_001A4590(int,int,int,int,S_0001DE30_36,S_0001DE30_16,S_0001DE30_16,int,int,int,int,int);
    void func_001A1D20(int,int);
};
struct C_0001DE30 {
    char pad0[0x70];
    C_0001DF80_Arr sub70;
    void func_001577A0(C_0001DE30_Item *,int);
    C_0001DE30_Item *func_0001DE30(int,int,int,int,int,int,S_0001DE30_36,S_0001DE30_16,S_0001DE30_16,int,int,int,int,int,int,int);
};

struct C_0001DF80 {
    char pad0[0x30];
    C_0001DF80_Sub30 sub30;
    C_0001DF80_Arr sub70;
    int func_0001DF80(int param_1, int param_2);
};

struct C_0001DFE0 {
    int unk0;
    int unk4;
    C_0001DFE0 *func_0001DFE0(void);
};

struct C_0001E030 {
    int unk0;
    void *func_0001E030(int flags);
};

struct C_0001E080 {
    int unk0;
    void *func_0001E080(int flags);
};

struct C_0001E000 {
    int unk0;
    int unk4;
    int func_0001E000(void);
};

struct C_0001E010 {
    virtual void virt0(int param_1);
    int unk4;
    int func_0001E010(void);
};

struct C_0001E050 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    C_0001E050 *func_0001E050(void);
};

struct C_0001D280_B4 {
    virtual void dummy0();
    virtual int virt1(int param_1, int param_2);
    virtual int virt2();
    C_0001D280_B4 *func_001CBD40(void);
};

struct C_0001D0B0 {
    char pad0[0x14];
    int func_0001D0B0(int param_1, int param_2);
};

struct C_0001D280 {
    virtual void dummy0();
    virtual void dummy1();
    virtual int virt2();
    char pad4[0x44];
    int unk48;
    int unk4C;
    char pad50[0x20];
    C_0001D0B0 unk70;
    C_0001D0B0 unk84;
    C_0001D0B0 unk98;
    char padAC[8];
    C_0001D280_B4 *unkB4;
    int func_001D3F50(void);
    C_0001D280 *func_0001D280(int param_1, int param_2, int param_3);
};

struct C_0001D330_Item {
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
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual void dummy27();
    virtual void dummy28();
    virtual void dummy29();
    virtual void dummy30();
    virtual void dummy31();
    virtual void dummy32();
    virtual void virt33();
};

struct C_0001D330_List {
    int count;
    C_0001D330_Item **items;
    int growBy;
    int capacity;
    C_0001D330_Item *at(int i) {
        if (count > 0 && items != 0 && i < count) {
            return items[i];
        }
        return 0;
    }
};

struct C_0001D330 {
    char pad0[0x70];
    C_0001D330_List list;
    void func_0001D330(void);
};

struct C_0001D370_Item {
    virtual void dummy0();
    virtual void dummy1();
    virtual int virt2();
    void func_00157810(void);
};

struct C_0001D370 {
    char pad0[0x30];
    int unk30;
    C_0001D370_Item **unk34;
    char pad38[0x38];
    int unk70;
    C_0001D370_Item **unk74;
    C_0001D370_Item *itemAt70(int i) {
        if (unk70 > 0 && unk74 != 0 && i < unk70) {
            return unk74[i];
        }
        return 0;
    }
    void remove30(C_0001D370_Item *item) {
        int n = unk30;
        if (n > 0) {
            for (int i = 0; i < unk30; i++) {
                if (unk34[i] == item) {
                    unk34[i] = unk34[n - 1];
                    unk30--;
                    break;
                }
            }
        }
    }
    void remove70(C_0001D370_Item *item) {
        int n = unk70;
        if (n > 0) {
            for (int j = 0; j < unk70; j++) {
                if (unk74[j] == item) {
                    unk74[j] = unk74[n - 1];
                    unk70--;
                    break;
                }
            }
        }
    }
    int func_0001D370(void);
};

#include <string.h>
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
extern "C" char *func_001E8AC0(const char *s, int c);
extern "C" int func_001EA426(const char *a, const char *b);

template <class T> inline const T &minref(const T &a, const T &b) { return a > b ? b : a; }
static __forceinline int clampLength(int a, int b) { return a > b ? b : a; }

static __forceinline void stripExt(char *dst, const char *src)
{
    int len = strlen(src);
    int lim = 0x103;
    int n = *(lim > len ? &len : &lim);
    func_001E8920(dst, src, n);
    dst[n] = 0;
    char *p = func_001E8AC0(dst, '.');
    if (p) memset(p, 0, strlen(p));
}

struct C_0001D450_Sub {
    char pad0[8];
    char name[1];
};

struct C_0001D450_Item {
    char pad0[0x9c];
    char name[0x120];
    C_0001D450_Sub *unk1BC;
};

struct C_0001D450 {
    char pad0[0x70];
    volatile int unk70;
    C_0001D450_Item **unk74;
    C_0001D450_Item *itemAt(int i) {
int n = unk70;
if (n > 0 && unk74 != 0 && i < n) {
return unk74[i];
        }
        return 0;
    }
    C_0001D450_Item *func_0001D450(const char *name);
};

struct C_0001DA00_Item {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual int virt7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void virt12(int a);
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27();
    virtual int virt28();
    char pad4[0x114];
    int unk118;
};

struct C_0001DA00_List {
    int n;
    C_0001DA00_Item **arr;
    C_0001DA00_Item *at(int i) {
        if (n > 0 && arr != 0 && i < n) return arr[i];
        return 0;
    }
};

struct C_0001DA00_B4 {
    int unk0;
    C_0001DA00_List list;
};

struct C_0001DA00 {
    char pad0[0x30];
    C_0001DA00_List l30;
    char pad38[0x24];
    int unk5C;
    char pad60[0x10];
    C_0001DA00_List l70;
    char pad78[0xc];
    int unk84;
    char pad88[0x10];
    int unk98;
    char pad9C[0x10];
    int unkAC;
    char padB0[4];
    C_0001DA00_B4 *unkB4;
    void func_0001D6B0(void);
    void func_00157A00(int a);
    void func_0001DA00(int a);
};

struct C_0001DA00_Fwd;
struct S4 { int a, b, c, d; };
struct S9 { int v[9]; };

struct C_0001DCF0_Obj {
    virtual void virt0(int flags);
    C_0001DCF0_Obj *func_001A1F70(void *owner, int a, int b, int c);
    int func_001A1FB0(int p0, int p1, S9 c, S4 b, S4 a, int p21, int p22, int p25, int p26, int p27);
    void func_001A1D20(int a, int b);
};

struct C_0001DCF0 {
    char pad0[0x70];
    C_0001DF80_Arr arr70;
    void func_001577A0(C_0001DCF0_Obj *o, int n);
    C_0001DCF0_Obj *func_0001DCF0(int p0, int p1, int p2, int p3, S9 c, S4 b, S4 a, int p21, int p22, int p23, int p24, int p25, int p26, int p27);
    C_0001DCF0_Obj *func_0001DCF0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16, int p17, int p18, int p19, int p20, int p21, int p22, int p23, int p24, int p25, int p26, int p27);
};

C_0001DCF0_Obj *C_0001DCF0::func_0001DCF0(int p0, int p1, int p2, int p3, S9 c, S4 b, S4 a, int p21, int p22, int p23, int p24, int p25, int p26, int p27) {
    void *func_001E8A44(int);
    C_0001DCF0_Obj *o = (C_0001DCF0_Obj *)func_001E8A44(0x1c8);
    if (o) o = o->func_001A1F70(this, p2, p22, p21);
    if (!o) return 0;
    if (!o->func_001A1FB0(p0, p1, c, b, a, p23, p24, p25, p26, p27)) {
        o->virt0(1);
        return 0;
    }
    if (p3) {
        if (p23 & 8) o->func_001A1D20(p3, 1);
        else o->func_001A1D20(p3, 0);
    }
    C_0001DF80_Arr *array = &arr70;
    if (array->n < array->cap || array->func_0015ACA0(array->n + array->base)) {
        array->arr[array->n] = (int)o;
        array->n++;
    }
    func_001577A0(o, 2);
    return o;
}

C_0001DE30_Item *C_0001DE30::func_0001DE30(int a0,int a1,int a2,int a3,int a4,int a5,S_0001DE30_36 a6,S_0001DE30_16 a15,S_0001DE30_16 a19,int a23,int a24,int a25,int a26,int a27,int a28,int a29)
{
    void *func_001E8A44(unsigned int);
    C_0001DE30_Item *item = (C_0001DE30_Item *)func_001E8A44(0x2dc);
    if (item) item = item->func_001A2580(this,a4,a24,a23);
    if (!item) return 0;
    if (!item->func_001A4590(a0,a1,a2,a3,a6,a15,a19,a25,a26,a27,a28,a29)) {
        item->virt0(1);
        return 0;
    }
    if (a5) {
        if (a25 & 8) item->func_001A1D20(a5,1);
        else item->func_001A1D20(a5,0);
    }
    C_0001DF80_Arr *array = &sub70;
    if (array->n < array->cap || array->func_0015ACA0(array->n + array->base)) {
        array->arr[array->n] = (int)item;
        array->n++;
    }
    func_001577A0(item,2);
    return item;
}

C_0001D280 *C_0001D280::func_0001D280(int param_1, int param_2, int param_3) {
    void *func_001E8A44(int);
    if (func_001D3F50() == 0) {
        return 0;
    }
    void *mem = func_001E8A44(0x140);
    C_0001D280_B4 *obj = mem != 0 ? ((C_0001D280_B4 *)mem)->func_001CBD40() : 0;
    unkB4 = obj;
    if (obj == 0) {
        return 0;
    }
    if (unkB4->virt1(param_2, param_3) != 0) {
        return 0;
    }
    unk48 = param_1;
    unk4C = unkB4->virt2();
    if (unk70.func_0001D0B0(8, 16) == 0) {
        goto fail;
    }
    if (unk84.func_0001D0B0(8, 16) == 0) {
        goto fail;
    }
    if (unk98.func_0001D0B0(8, 16) == 0) {
        goto fail;
    }
    return this;
fail:
    virt2();
    return 0;
}

int C_0001D370::func_0001D370(void) {
    while (unk70 != 0) {
        C_0001D370_Item *item = itemAt70(0);
        if (item != 0) {
            remove30(item);
            remove70(item);
            item->func_00157810();
            item->virt2();
        }
    }
    return 1;
}

void C_0001D330::func_0001D330(void) {
    int i;
    for (i = 0; i < list.count; i++) {
        list.at(i)->virt33();
    }
}

int C_0001D420::func_0001D420(int param)
{
  if (param == 0) {
    return 0;
  }
  sub30.func_001CBCF0(param);
  return sub70.func_001CBCF0(param);
}

C_0001D450_Item *C_0001D450::func_0001D450(const char *name)
{
    char buf[0x104];
    char key[0x104];
    int len = strlen(name);
    int lim = 0x103;
    int sz = AsmMinI(lim, len);
    func_001E8920(key, name, sz);
    key[sz] = 0;
    char *p = func_001E8AC0(key, '.');
    if (p) memset(p, 0, strlen(p));
    for (int i = 0; i < unk70; i++) {
        C_0001D450_Item *item = itemAt(i);
        if (item) {
            const char *s = item->name;
            int len2 = strlen(s);
            int lim2 = 0x103;
            int n = AsmMinI(lim2, len2);
            func_001E8920(buf, s, n);
            buf[n] = 0;
            p = func_001E8AC0(buf, '.');
            if (p) memset(p, 0, strlen(p));
            if (func_001EA426(key, buf) == 0) return item;
            if (item->unk1BC) {
                const char *s3 = item->unk1BC->name;
                int len3 = strlen(s3);
                int lim3 = 0x103;
                int n3 = AsmMinI(lim3, len3);
                func_001E8920(buf, s3, n3);
                buf[n3] = 0;
                p = func_001E8AC0(buf, '.');
                if (p) memset(p, 0, strlen(p));
                if (func_001EA426(key, buf) == 0) return item;
            }
        }
    }
    return 0;
}

void *C_0001D690::func_0001D690(unsigned char param_1)
{
  int func_0001D200(...);
  void func_001E891B(void *);

  func_0001D200();
  if ((param_1 & 1) != 0) {
    func_001E891B(this);
  }
  return this;
}

void C_0001D6B0::func_0001D6B0(){float a[4],b[4];a[0]=a[1]=a[2]=0;a[3]=1;b[0]=b[1]=b[2]=0;b[3]=1;int counts[4];int i;if(unk2c<unk58)return;for(i=0;i<n;i++){C_0001D6B0_Item*p=at(i);p->func_001A1930(unk58,unk60);if(unk58>1)for(int j=0;j<unk58;j++)if(p->unk94==unk60[j])counts[j]++;}int best=0;if(unk58>1){int max=0;for(int j=0;j<unk58;j++)if(counts[j]>max){max=counts[j];best=j;}}if(unk58>0){((C_0001D6B0_Item*)unk60[best])->func_001A1540(a,b);b4->func_001CBFE0(a,b);}b4->func_001CBF60();memset(a84.arr,0,a84.n*4);*(volatile int*)&a84.n=0;memset(*(int*volatile*)&a98.arr,0,*(volatile int*)&a98.n*4);*(volatile int*)&a98.n=0;for(i=0;i<*(volatile int*)&n;i++){C_0001D6B0_Item*p=at(i);if(!p->unk1b8)continue;if(p->unk1a0&2){if(a84.n>=a84.cap){int cap=a84.n+a84.base;if(cap<=a84.cap)goto noadd;int*v=(int*)func_001E8A44(cap*4);if(!v)goto noadd;memcpy(v,a84.arr,a84.cap*4);int*old=a84.arr;a84.arr=v;func_001E891B(old);a84.cap=cap;}a84.arr[a84.n++]=(int)p;noadd:if(p->v27()){C_0001DF80_Arr*list=&a98;if(list->n<list->cap||list->func_0015ACA0(list->n+list->base))list->arr[list->n++]=(int)p;}else if(p->v34()){C_0001DF80_Arr*list=&a98;if(list->n<list->cap||list->func_0015ACA0(list->n+list->base))list->arr[list->n++]=(int)p;}}else if(p->v27()&&!(p->unk98&0x40))p->v33();}int needed=unk4c+unk48-unk54;if(needed<0){func_001E8550(arr,n,4,func_0001CBC0);for(int m=0;m<n;m++){C_0001D6B0_Item*p=at(m);if(!p->v27()){++needed;p->func_001A1E60();--unk54;if(needed<=0)break;}}}}

extern "C" void func_0013E260(int, int, const void *);
extern "C" void func_0013E1F0(int, int, const void *, ...);
extern char *D_002A8490;
extern char D_00275F04[], D_00275EF8[], D_00275630[], D_00275EE0[], D_00275ED4[], D_00275EC4[], D_00275EB8[], D_00275EAC[], D_00275EA0[], D_00275E90[], D_00275E80[], D_00275E68[];
void C_0001DA00::func_0001DA00(int a)
{
    if (unk5C != 0) {
        func_0001D6B0();
    }
    char *g = *(char **)(D_002A8490 + 0x18);
    if (g != 0) {
        if (unkAC < 0) {
            int id = *(int *)(g + 0x1934);
            *(int *)(g + 0x1934) = id + 1;
            unkAC = id;
        }
        func_0013E260(*(int *)(D_002A8490 + 0x18), unkAC, D_00275F04);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275EF8);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275630);
        int total = 0;
        int active = 0;
        int sum = 0;
        for (int i = 0; i < unkB4->list.n; i++) {
            C_0001DA00_Item *item = unkB4->list.at(i);
            if (item) {
                total++;
                if (item->virt7()) {
                    active++;
                }
                sum += item->unk118;
            }
        }
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275EE0, total, active);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275630);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275ED4);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275EC4, l70.n);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275EB8, unk84);
        int count = 0;
        for (int j = 0; j < l70.n; j++) {
            if (l70.at(j)->virt28()) {
                count++;
            }
        }
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275EAC, count);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275EA0, unk98);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275630);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275E90, 0);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275E80, 0);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275630);
        func_0013E1F0(*(int *)(D_002A8490 + 0x18), unkAC, D_00275E68, sum);
    }
    for (int k = 0; k < l30.n; k++) {
        l30.at(k)->virt12(a);
    }
    func_00157A00(a);
}

int C_0001DF80::func_0001DF80(int param_1, int param_2)
{
  C_0001DF80_Arr *a;

  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    sub30.func_001CDED0(param_1);
  }
  a = &sub70;
  if (a->n >= a->cap) {
    if (a->func_0015ACA0(a->base + a->n) == 0) {
      return 0;
    }
  }
  a->arr[a->n] = param_1;
  a->n++;
  return 1;
}

C_0001DFE0 *C_0001DFE0::func_0001DFE0(void)
{
  unk0 = (int)&D_00275F18;
  unk4 = 1;
  return this;
}

void C_0001DFF0::func_0001DFF0(void) {
    extern int D_00275F18;
    unk0 = (int)&D_00275F18;
}

int C_0001E000::func_0001E000(void) {
    return ++unk4;
}

int C_0001E010::func_0001E010(void) {
    if (--unk4 == 0) {
        virt0(1);
        return 0;
    }
    return unk4;
}

void *C_0001E030::func_0001E030(int flags) {
    extern int D_00275F18;
    void func_001E891B(void *);
    unk0 = (int)&D_00275F18;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0001E050 *C_0001E050::func_0001E050(void) {
    extern int D_00275F34;
    void func_0001DFE0(...);
    func_0001DFE0();
    unk8 = 0;
    unkC = 0;
    unk10 = 0;
    unk0 = (int)&D_00275F34;
    unk14 = 0x7f7fffff;
    return this;
}

void *C_0001E080::func_0001E080(int flags) {
    void func_0001DFF0(...);
    void func_001E891B(void *);
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0001E0A0::func_0001E0A0(float a0, float a1, float a2, int a3) {
    unk140 = a0 + unk140;
    unk144 = a1 + unk144;
    unk148 = a2 + unk148;
}

void C_0001E0E0::func_0001E0E0(int n)
{
    union { unsigned int i; unsigned short s[2]; unsigned char c[4]; } u;
    int words = (this->nbits + 31) / 32;
    unsigned int *first = this->data;
    int m = 32 - n;
    unsigned int *next;
    int i;

    u.i = *first;
    u.i = (((u.c[0] << 8 | u.c[1]) << 8 | (unsigned char)u.s[1]) << 8 | (unsigned char)(u.s[1] >> 8)) << n;
    *first = ((u.c[0] << 8 | u.c[1]) << 8 | (unsigned char)u.s[1]) << 8 | (unsigned char)(u.s[1] >> 8);
    next = first + 1;
    for (i = words - 1; i != 0; i--, next++) {
        if (*next == 0) {
            first++;
            continue;
        }
        if (*next == 0xffffffff) {
            *first |= ~D_002A0C18[m];
            *next = D_002A0C18[m];
            first++;
        } else {
            unsigned char *b = (unsigned char *)next;
            *next = ((b[0] << 8 | b[1]) << 8 | b[2]) << 8 | b[3];
            u.i = *next >> m;
            if (u.i != 0) {
                *first |= ((u.c[0] << 8 | u.c[1]) << 8 | (unsigned char)u.s[1]) << 8 | (unsigned char)(u.s[1] >> 8);
            }
            first++;
            if ((*next <<= n) == 0) continue;
            *next = ((b[0] << 8 | b[1]) << 8 | b[2]) << 8 | b[3];
        }
    }
    unsigned int t = *first;
    unsigned int mask = D_002A0C18[m];
    if (this->fill == 0) {
        *first = t & mask;
    } else {
        *first = t | ~mask;
    }
}

