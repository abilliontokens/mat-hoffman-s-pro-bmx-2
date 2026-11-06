/* 9 functions from 0x000733F0 to 0x00073EF0, found by Ghidra. */
#include "common.h"
#include <string.h>
struct Clamp_6A { char pad[0x10]; float f10, f14; };
struct Mid_6A { Clamp_6A *func_0018C070(); };
struct Lookup_6A { int *func_0018C160(int); };
struct Global_6A { char pad[0x2ec]; Lookup_6A *p2EC; };
extern Global_6A *D_002A8490;
extern float D_00275AEC;
extern int D_00278690, D_00278678;
struct W_6A1A0 { virtual ~W_6A1A0(); Clamp_6A *func_001D5AA0(); };
struct RunResultsMenu {
 char pad0[0x70];
 W_6A1A0 *unk70, *unk74, *unk78, *unk7C;
 char pad80[0x10];
 W_6A1A0 *unk90[5], *unkA4[5];
 void func_000733F0();
 void func_001578D0();
};
extern char D_00277038[];
int __cdecl func_001ADCC0(char *, unsigned int, const char *, ...);

extern int D_0027850C;
extern int D_00278D54;

struct C_00073AE0 {
    void *vtbl;                  /* 0x00 */
    char pad04[0x14];            /* 0x04 */
    u32 unk18;                   /* 0x18 */
    char pad1C[0x08];            /* 0x1C */
    u32 unk24[8];                /* 0x24 */
    u32 unk44[8];                /* 0x44 */
    u32 unk64[3];                /* 0x64 */
    u32 unk70[3];                /* 0x70 */
    u32 unk7C[3];                /* 0x7C */
    u32 unk88[3];                /* 0x88 */
    u32 unk94[3];                /* 0x94 */
    char padA0[0x0C];            /* 0xA0 */
    u32 unkAC[2];                /* 0xAC */
    u32 unkB4[5];                /* 0xB4 */
    u32 unkC8[5];                /* 0xC8 */
    u32 unkDC[6];                /* 0xDC */
    char padF4[0x04];            /* 0xF4 */
    u32 unkF8;                   /* 0xF8 */
    u32 unkFC;                   /* 0xFC */
    u32 unk100;                  /* 0x100 */
    u32 unk104;                  /* 0x104 */
    u32 unk108;                  /* 0x108 */
    u32 unk10C;                  /* 0x10C */
    u32 unk110;                  /* 0x110 */
    u32 unk114;                  /* 0x114 */
    u32 unk118;                  /* 0x118 */
    u32 unk11C;                  /* 0x11C */
    u32 unk120;                  /* 0x120 */
    u32 unk124;                  /* 0x124 */
    char pad128[0x04];           /* 0x128 */
    u32 unk12C[8];               /* 0x12C */
    u32 unk14C[8];               /* 0x14C */
    u32 unk16C[8];               /* 0x16C */
    char pad18C[0x08];           /* 0x18C */
    u32 unk194;                  /* 0x194 */
    u32 unk198[2];               /* 0x198 */
    u32 unk1A0[2];               /* 0x1A0 */
    u32 unk1A8;                  /* 0x1A8 */
    u32 unk1AC;                  /* 0x1AC */
    char pad1B0[0x04];           /* 0x1B0 */
    u32 unk1B4;                  /* 0x1B4 */
    u32 unk1B8;                  /* 0x1B8 */
    char pad1BC[0x04];           /* 0x1BC */
    u32 unk1C0;                  /* 0x1C0 */
    void *func_00073AE0(int param_1);
    void func_00157600(int a0);
};

extern char D_002787F0[];
extern char D_00275630[];
extern char D_00278D44[];
struct C_000737A0_UI { void func_001D6600(); void func_0005E840(const char *); };
struct C_000737A0_List { int func_00109570(); void func_001095A0(int, char *); };
struct C_000739D0 {
    char pad0[0x64];
    char *unk64;
    C_000737A0_UI *unk68;
    char pad6C[0x14];
    C_000737A0_UI *unk80;
    char pad84[4];
    C_000737A0_UI *unk88;
    char pad8C[0x2C];
    C_000737A0_UI *unkB8[4];
    void func_00063AD0(char *, C_000737A0_UI **, int, int);
    void func_00073680(int, char *);
    void func_000737A0(void);
    void func_00073620(void);
    void func_00157960(void);
    void func_000739D0(void);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_00073620 {
    char pad0[0x6C];
    int unk6C;
    C_001D5AD0 *unk70;
    C_001D5AD0 *unk74;
    C_001D5AD0 *unk78;
    C_001D5AD0 *unk7C;
    char pad80[0x10];
    C_001D5AD0 *unk90[5];
    C_001D5AD0 *unkA4[5];
    void func_00073620(void);
};

struct C_000683F0 {
    void func_000683F0(void);
};

struct C_000739F0_F64 {
    char pad0[0x190];
    C_000683F0 *unk190;
};

struct C_000739F0 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void virt4();
    char pad4[0x60];
    C_000739F0_F64 *unk64;
    char pad68[4];
    int unk6C;
    char pad70[0x14];
    float unk84;
    void func_0005EA10(float param_1);
    void func_000739F0(float param_1);
};

struct C_00031610 {
    void func_00031610(int param_1, int param_2);
};

struct C_00073A50 {
    char pad0[0x64];
    C_00031610 *unk64;
    char pad68[4];
    int unk6C;
    char pad70[0x14];
    float unk84;
    char pad88[4];
    int unk8C;
    int func_00157BF0(int *param_1, int param_2);
    int func_00073A50(int *param_1, int param_2);
};

extern int D_00278D54;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

static inline void DeleteObj(C_001D6410 *p)
{
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
}

struct C_00073C30_V {
    virtual void destroyObject(int flags);
};

struct SPFPSResultsScreen {
    void *vtbl;
    char pad04[0x60];
    C_001D6410 *unk64[3];
    C_001D6410 *unk70[3];
    C_001D6410 *unk7C[3];
    C_001D6410 *unk88[3];
    char pad94[0xC];
    float unkA0;
    float unkA4;
    float unkA8;
    C_00073C30_V *unkAC[2];
    C_00073C30_V *unkB4[5];
    C_00073C30_V *unkC8[5];
    C_00073C30_V *unkDC[6];
    C_00073C30_V *unkF4;
    C_001D6410 *unkF8;
    C_001D6410 *unkFC;
    C_001D6410 *unk100;
    C_001D6410 *unk104;
    C_001D6410 *unk108;
    C_001D6410 *unk10C;
    C_001D6410 *unk110;
    C_001D6410 *unk114;
    C_001D6410 *unk118;
    char pad11C[0x7C];
    C_00073C30_V *unk198[2];
    C_00073C30_V *unk1A0[2];
    char pad1A8[0x14];
    C_001D6410 *unk1BC;
    void func_00157660(void);
    void func_00073C30(void);
};

void RunResultsMenu::func_000733F0() {
int ids[2]; int i; int *r; Clamp_6A *o; W_6A1A0 **e; Lookup_6A *lk;
ids[0]=(int)&D_00278678; ids[1]=(int)&D_00278690;
for(i=0;i<2;i++) { lk=D_002A8490->p2EC; r=lk->func_0018C160(ids[i]); if(r && *r) { o=((Mid_6A *)*r)->func_0018C070(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } }
if(unk78) { o=unk78->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
if(unk7C) { o=unk7C->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
e=unkA4; i=5; do { if(e[-5]) { o=e[-5]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if(*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; }while(i);
if(unk70) { o=unk70->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
if(unk74) { o=unk74->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
func_001578D0();
}

void C_00073620::func_00073620(void) {
    unk78->func_001D5AD0();
    unk7C->func_001D5AD0();
    C_001D5AD0 **ptr = &unkA4[0];
    int count = 5;
    do {
        (*(ptr - 5))->func_001D5AD0();
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    if (unk6C != 0) {
        unk74->func_001D5AD0();
        return;
    }
    unk70->func_001D5AD0();
}

char *__stdcall func_00073680(int value, char *out) {
 char buffer[64];
 int i, o, n;
 memset(buffer, 0, 64);
 *(int *)out = 0;
 func_001ADCC0(buffer, 260, D_00277038, value);
 value = strlen(buffer) % 3;
 o = 0;
 n = strlen(buffer);
 for (i = 0; i < n; i++) {
  char c = buffer[i];
  if (c == ' ') {
   strcat(out, buffer + i);
   break;
  }
  if (i > value - 1 && i != 0 && ((i - value) == 0 || (i - value) % 3 == 0)) {
   out[o++] = ',';
   out[o++] = c;
  } else {
   out[o++] = c;
  }
 }
 out[o] = 0;
 return out;
}

void C_000739D0::func_000737A0() {
    unk68->func_001D6600();
    unk88->func_001D6600();
    char number[20];
    memset(number,0,sizeof(number));
    char item[20];
    char output[260];
    char text[780];
    char *state = *(char **)(*(char **)(*(char **)(unk64 + 0x64) + 0x4E0) + 0x1A8);
    C_000737A0_List *list = *(C_000737A0_List **)(state + 0xA60);
    int count = list->func_00109570();
    if (count > 20) count = 20;
    for (int i=0;i<count;i++) {
        if (i==0) {
            list->func_001095A0(i,item);
            strcpy(text,item);
        } else {
            strcat(text," to ");
            list->func_001095A0(i,item);
            strcat(text,item);
        }
    }
    if (count>0) {
        if (strlen(text)>40) func_00063AD0(text,unkB8,40,4);
        else {
            unkB8[0]->func_0005E840(text);
            unkB8[1]->func_0005E840(D_00275630);
            unkB8[2]->func_0005E840(D_00275630);
            unkB8[3]->func_0005E840(D_00275630);
        }
        C_000737A0_UI **p=unkB8;
        int n=4;
        do { (*p)->func_001D6600(); ++p; } while(--n);
    }
    int value=*(int *)(*(char **)(*(char **)(*(char **)(unk64+0x64)+0x4E0)+0x1A8)+0xA40);
    if(value>0) func_00073680(value,number);
    else { strcpy(number,"0"); }
    func_001ADCC0(output,260,D_00278D44,number);
    unk80->func_0005E840(output);
    unk80->func_001D6600();
}

void C_000739D0::func_000739D0(void) {
    func_000737A0();
    func_00073620();
    func_00157960();
}

void C_000739F0::func_000739F0(float param_1) {
    extern float D_00278500;
    unk84 += param_1;
    if (unk6C != 0 && unk84 >= D_00278500) {
        virt4();
        unk64->unk190->func_000683F0();
    }
    func_0005EA10(param_1);
}

int C_00073A50::func_00073A50(int *param_1, int param_2) {
    extern int D_002B9040;
    int func_001361E0(int, int, int *, int);
    if (unk8C != 0) {
        D_002B9040 = param_1[2];
        unk8C = 0;
    }
    if (unk6C == 0) {
        if (func_001361E0(5, 2, param_1, -2147483648) == 0 &&
            func_001361E0(24, 2, param_1, -2147483648) == 0) {
            return func_00157BF0(param_1, param_2);
        }
        unk64->func_00031610(4, 1);
        unk6C = 1;
        unk84 = 0.0f;
    }
    return 0;
}

