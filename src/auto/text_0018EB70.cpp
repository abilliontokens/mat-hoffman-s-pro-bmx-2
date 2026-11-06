/* 5 functions from 0x0018EB70 to 0x0018F980, found by Ghidra. */
#include "common.h"
#include <string.h>
extern char D_00288030[],D_0028AA08[],D_0028AA04[],D_0028A83C[],D_002869B8[],D_0028A9FC[],D_0028A9F8[],D_00277038[];
extern char *D_002A96C0;
extern char *D_002A96C4[];
extern "C" void *func_001E8AA5(int);
extern "C" void *func_001E8A44(int);
extern "C" int func_001E91F4(const char *);
extern "C" int func_001ADCC0(char *,int,const char *,...);
struct File_0018EB70 {
 void func_0013C8A0(int,void*,int,int);
 void func_0013AFF0(int,int,int);
 int func_0013AFD0(int);
 int func_0013AFB0(int);
 void func_0013C110(int);
};
extern File_0018EB70 *D_002BEAAC;
struct Parser_0018EB70 {
 char *start,*current;
 char *func_0018E640(char*);
};
struct Node_0018EB70 {
 char data[0x24]; int f24,f28; Node_0018EB70 *next;
};
struct Result_0018EB70 {
 char data[0x104]; Node_0018EB70 *first,*last; int count;
};
struct C_0018EB70 {
 int func_0018EB70(int,char*,Result_0018EB70*);
 void func_0018DE60(char*,Node_0018EB70*,int,int,char*,int);
};
extern "C" int func_001E8390(void *);
extern "C" void *func_001E83E8(void *,int);
static inline const int &minref(const int &a,const int &b){return a<b?a:b;}
extern char D_00275630[];
struct C_00191470 {
    void func_00191470(unsigned int b);
};
struct C_0018F4D0 {
    char pad0[0x20];
    int f20;
    int f24;
    char *f28;
    char f2C;
    char pad2D[0x12C - 0x2D];
    int f12C;
    int f130;
    int f134;
    int f138;
    int f13C;
    char f140;
    char pad141[0x150 - 0x141];
    void func_0018E250(char *a, unsigned int b);
    void func_0018F4D0(unsigned int a);
    void func_0018F610(unsigned int a, unsigned int b);
    void func_0018F390(char *n, unsigned int a, void **p);
};
struct C_00191420 {
    void func_00191420(char *n, unsigned int a, void **p);
};
static inline int minv(const int &x, const int &y) { return x < y ? x : y; }
extern "C" void *func_001E8920(void *d, const void *s, int n);
struct C_0018F350 {
    char pad0[0x18];
    int unk18;
    int unk1C;
    char pad20[0x148];
    int unk168;
    int unk16C;
    int unk170;
    int unk174;
    int unk178;
    int unk17C;
    C_0018F350* func_0018F350(void);
};


C_0018F350* C_0018F350::func_0018F350(void) {
    unk178 = 0;
    unk174 = 0;
    unk170 = 0;
    unk17C = 1065353216;
    unk18 = 0;
    unk1C = 0;
    unk168 = 0;
    unk16C = 0;
    return this;
}

void C_0018F4D0::func_0018F4D0(unsigned int a)
{
    switch ((a >> 8) & 0xff) {
    case 1:
        f20 = 0;
        break;
    case 2:
        f24 = 0;
        break;
    case 3:
        f28 = D_00275630;
        f2C = 0;
        break;
    case 4:
        f138 = 0;
        f13C = 0;
        break;
    case 5:
        f140 = 0;
        break;
    case 6:
        f12C = 0;
        break;
    case 7:
        f130 = 0;
        break;
    case 8:
        f134 = 0;
        break;
    case 9:
        ((C_00191470 *)((char *)this + 0x150))->func_00191470(a);
        break;
    }
    func_0018E250(D_00275630, a);
}

void C_0018F4D0::func_0018F610(unsigned int a, unsigned int b)
{
    unsigned int t = *((unsigned char *)this + 0x19);
    float &vf = *(float *)&f20;
    int &vi = f24;
    double &vd = *(double *)&f138;
    unsigned char &vb = *(unsigned char *)&f140;
    unsigned int &vu = *(unsigned int *)&f130;
    switch ((b >> 8) & 0xff) {
    case 1:
        switch (t) {
        case 1: vf = vf; break;
        case 2: vf = (float)vi; break;
        case 4: vf = (float)vd; break;
        case 5: vf = (float)vb; break;
        case 7: vf = (float)vu; break;
        }
        break;
    case 2:
        switch (t) {
        case 1: vi = (int)vf; break;
        case 2: vi = vi; break;
        case 4: vi = (int)vd; break;
        case 5: vi = vb; break;
        case 7: vi = vu; break;
        }
        break;
    case 4:
        switch (t) {
        case 1: vd = vf; break;
        case 2: vd = vi; break;
        case 4: vd = vd; break;
        case 5: vd = vb; break;
        case 7: vd = vu; break;
        }
        break;
    case 5:
        switch (t) {
        case 1: vb = (unsigned char)(int)vf; break;
        case 2: vb = (unsigned char)vi; break;
        case 4: vb = (unsigned char)(int)vd; break;
        case 5: vb = vb; break;
        case 7: vb = (unsigned char)vu; break;
        }
        break;
    case 7:
        switch (t) {
        case 1: vu = (int)vf; break;
        case 2: vu = vi; break;
        case 4: vu = (int)vd; break;
        case 5: vu = vb; break;
        case 7: vu = vu; break;
        }
        break;
    }
    func_0018E250((char *)a, b);
}

