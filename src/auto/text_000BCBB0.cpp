/* 1 function from 0x000BCBB0 to 0x000BDF30, found by Ghidra. */
#include "common.h"
#include "string.h"
extern char D_002A64D0[];
extern char D_0027DDC4[];
extern char D_0027DDAC[];
extern char D_0027DDA4[];
extern char D_0027DD94[];
extern char D_0027DD8C[];
extern char D_00276980[];
extern char D_0027DD80[];
extern char D_0027DD7C[];
extern char D_0027DD74[];
extern char D_0027DD6C[];
extern char D_0027DD5C[];
extern char D_0027DD4C[];
extern char D_0027DD44[];
extern char D_0027DD34[];
extern char D_0027DD2C[];
extern char D_0027DD20[];
extern char D_0027DD10[];
extern char D_0027DD04[];
extern char D_0027DCF4[];
extern char D_0027DCE8[];
extern char D_0027DCD8[];
extern char D_0027DCCC[];
extern char D_0027DCBC[];
extern char D_0027DCAC[];
extern char D_0027DC9C[];
extern char D_0027DC8C[];
extern char D_0027DC78[];
extern char D_0027DC60[];
extern char D_0027DC48[];
extern char D_0027DC30[];
void *func_001E8A44(unsigned);
int func_001ADCC0(char*, unsigned, const char*, ...);
int func_001EA426(const char*,const char*);
extern char D_0027DC18[];
void func_001E891B(void*);
struct Progress_BCBB0 { int func_0005C1D0(int); void func_0005C1E0(int); char *func_0005C020(int); void func_0005C170(int,int); void func_0005C1B0(int,int); };
struct Game_BCBB0 { char pad[0x2c0]; Progress_BCBB0 *f2c0; char pad2c4[0x14]; int f2d8; char pad2dc[0x48]; int f324; };
struct Global_BCBB0 { char pad[0x2e0]; Game_BCBB0 *f2e0; };
extern Global_BCBB0 *D_002A8490;
struct Parser_BCBB0 {
void func_001691E0();
Parser_BCBB0 *func_00168280();
void func_00169490(const char*,int);
void func_00169710(const char*);
void func_00168A10(const char*,int*);
void func_00168B90(const char*,float*);
void func_00168550(const char*,char*,int);
void func_00168C50(const char*,int,void*);
};
struct Entry_BCBB0 { char name[0x104]; char pad104[8]; int f10c,f110; char **f114; int *f118; int f11c; int *f120; int f124,f128; int *f12c; float f130[3][5]; float f16c[3][5]; };
static inline Entry_BCBB0 *allocate_entries_BCBB0(int n) {
int *raw=(int*)func_001E8A44(n*0x1a8+4);
if(!raw) return 0;
*raw=n;
Entry_BCBB0 *entries=(Entry_BCBB0*)(raw+1);
Entry_BCBB0 *entry=entries;
for(int i=n-1;i>=0;i--,entry++) { entry->f114=0; entry->f118=0; entry->f120=0; entry->f12c=0; }
return entries;
}
struct Item_BCBB0 { char name[0x104]; char pad104[8]; float f10c,f110,f114,f118,f11c; };
struct Loader_BCBB0 {
char pad0[0x27c]; Entry_BCBB0 *f27c; Item_BCBB0 *f280; int f284,f288,f28c,f290,f294; char pad298[12]; int f2a4;
void func_000BCBB0();
};


extern "C" void *_func_001E8A44(int);
extern "C" int _func_001ADCC0(char *, int, const char *, ...);
extern "C" void* _func_001E8A44(int);
extern "C" int _func_001ADCC0(char*, int, const char*, ...);
void Loader_BCBB0::func_000BCBB0() {
char buf[260], name[260]; int i,j,k;
Parser_BCBB0 *p=(Parser_BCBB0*)func_001E8A44(0x4cc);
if(p) p=p->func_00168280(); else p=0;
if(f2a4) func_001ADCC0(buf,260,D_0027DDC4,D_002A64D0);
else func_001ADCC0(buf,260,D_0027DDAC,D_002A64D0);
p->func_00169490(buf,0);
p->func_00169710(D_0027DDA4);
p->func_00168A10(D_0027DD94,&f294);
f280=(Item_BCBB0*)func_001E8A44(f294*0x120);
for(i=0;i<f294;i++) {
func_001ADCC0(buf,260,D_0027DD8C,i+1); p->func_00169710(buf);
p->func_00168550(D_00276980,f280[i].name,-1);
p->func_00168550(D_0027DD80,f280[i].pad104,-1);
p->func_00168B90(D_0027DD7C,&f280[i].f10c);
p->func_00168B90(D_0027DD74,&f280[i].f110);
p->func_00168B90(D_0027DD6C,&f280[i].f114);
p->func_00168B90(D_0027DD5C,&f280[i].f118);
p->func_00168B90(D_0027DD4C,&f280[i].f11c);
}
if(!D_002A8490->f2e0->f324) {
p->func_00169710(D_0027DD44);
p->func_00168A10(D_0027DD34,&f290);
int n=f290; int *raw=(int*)func_001E8A44(n*0x1a8+4);
Entry_BCBB0 *entries;
if(raw) { *raw=n; entries=(Entry_BCBB0*)(raw+1);
Entry_BCBB0 *entry=entries; for(i=n-1;i>=0;i--,entry++) { entry->f114=0; entry->f118=0; entry->f120=0; entry->f12c=0; }
} else entries=0;
f27c=entries;
for(i=0;i<f290;i++) {
#define E ((Entry_BCBB0 *)((char *)f27c + i*0x1a8))
func_001ADCC0(buf,260,D_0027DD2C,i+1); p->func_00169710(buf);
p->func_00168550(D_00276980,E->name,-1);
p->func_00168550(D_0027DD80,E->pad104,-1);
p->func_00168A10(D_0027DD20,&E->f10c);
p->func_00168A10(D_0027DD10,&E->f110);
E->f114=(char**)func_001E8A44(E->f110*4);
E->f118=(int*)func_001E8A44(E->f110*4);
for(j=0;j<E->f110;j++) {
E->f114[j]=(char*)func_001E8A44(260);
func_001ADCC0(buf,260,D_0027DD04,j+1);
p->func_00168550(buf,E->f114[j],-1);
func_001ADCC0(buf,260,D_0027DCF4,j+1);
p->func_00168A10(buf,&E->f118[j]);
}
p->func_00168A10(D_0027DD94,&E->f11c);
E->f120=(int*)func_001E8A44(E->f11c*4);
E->f12c=(int*)func_001E8A44(E->f11c*4);
for(j=0;j<E->f11c;j++) {
func_001ADCC0(buf,260,D_0027DCE8,j+1); p->func_00168550(buf,name,-1);
for(k=0;k<f294;k++) if(!func_001EA426(name,f280[k].name)) { E->f120[j]=k; break; }
func_001ADCC0(buf,260,D_0027DCD8,j+1); p->func_00168A10(buf,&E->f12c[j]);
func_001ADCC0(buf,260,D_0027DCCC,j+1); p->func_00168C50(buf,0,&E->f130[j][0]);
func_001ADCC0(buf,260,D_0027DCBC,j+1); p->func_00168C50(buf,0,&E->f16c[j][0]);
func_001ADCC0(buf,260,D_0027DCAC,j+1); p->func_00168C50(buf,0,&E->f130[j][1]);
func_001ADCC0(buf,260,D_0027DC9C,j+1); p->func_00168C50(buf,0,&E->f16c[j][1]);
func_001ADCC0(buf,260,D_0027DC8C,j+1); p->func_00168C50(buf,0,&E->f130[j][2]);
func_001ADCC0(buf,260,D_0027DC78,j+1); p->func_00168C50(buf,0,&E->f16c[j][2]);
func_001ADCC0(buf,260,D_0027DC60,j+1); p->func_00168C50(buf,0,&E->f130[j][3]);
func_001ADCC0(buf,260,D_0027DC48,j+1); p->func_00168C50(buf,0,&E->f16c[j][3]);
func_001ADCC0(buf,260,D_0027DC30,j+1); p->func_00168C50(buf,0,&E->f130[j][4]);
func_001ADCC0(buf,260,D_0027DC18,j+1); p->func_00168C50(buf,0,&E->f16c[j][4]);
}E->f128=E->f120[0]; E->f124=0;
#undef E
}
} else {
char *selected=D_002A8490->f2e0->f2c0->func_0005C020(D_002A8490->f2e0->f2d8);
p->func_00169710(D_0027DD44); p->func_00168A10(D_0027DD34,&f290);
int *raw=(int*)func_001E8A44(0x1ac);
if(raw) { *raw=1; f27c=(Entry_BCBB0*)(raw+1); f27c[0].f114=0; f27c[0].f118=0; f27c[0].f120=0; f27c[0].f12c=0; } else f27c=0;
for(i=0;i<f290;i++) {
func_001ADCC0(buf,260,D_0027DD2C,i+1); p->func_00169710(buf);
p->func_00168550(D_00276980,f27c[0].name,-1);
p->func_00168550(D_0027DD80,f27c[0].pad104,-1);
p->func_00168A10(D_0027DD20,&f27c[0].f10c);
if(strcmp(f27c[0].pad104,selected+0x5d4)) continue;
p->func_00168A10(D_0027DD10,&f27c[0].f110);
f27c[0].f114=(char**)func_001E8A44(f27c[0].f110*4);
f27c[0].f118=(int*)func_001E8A44(f27c[0].f110*4);
for(j=0;j<f27c[0].f110;j++) {
f27c[0].f114[j]=(char*)func_001E8A44(260);
func_001ADCC0(buf,260,D_0027DD04,j+1);
p->func_00168550(buf,f27c[0].f114[j],-1);
func_001ADCC0(buf,260,D_0027DCF4,j+1);
p->func_00168A10(buf,&f27c[0].f118[j]);
}
p->func_00168A10(D_0027DD94,&f27c[0].f11c);
f27c[0].f120=(int*)func_001E8A44(f27c[0].f11c*4);
f27c[0].f12c=(int*)func_001E8A44(f27c[0].f11c*4);
for(j=0;j<f27c[0].f11c;j++) {
func_001ADCC0(buf,260,D_0027DCE8,j+1); p->func_00168550(buf,name,-1);
for(k=0;k<f294;k++) if(!func_001EA426(name,f280[k].name)) { f27c[0].f120[j]=k; break; }
func_001ADCC0(buf,260,D_0027DCD8,j+1); p->func_00168A10(buf,&f27c[0].f12c[j]);
if(!strcmp(f280[f27c[0].f120[j]].pad104,selected+0x5dc)) f288=j;
func_001ADCC0(buf,260,D_0027DCCC,j+1); p->func_00168B90(buf,&f27c[0].f130[j][0]);
func_001ADCC0(buf,260,D_0027DCBC,j+1); p->func_00168B90(buf,&f27c[0].f16c[j][0]);
func_001ADCC0(buf,260,D_0027DCAC,j+1); p->func_00168B90(buf,&f27c[0].f130[j][1]);
func_001ADCC0(buf,260,D_0027DC9C,j+1); p->func_00168B90(buf,&f27c[0].f16c[j][1]);
func_001ADCC0(buf,260,D_0027DC8C,j+1); p->func_00168B90(buf,&f27c[0].f130[j][2]);
func_001ADCC0(buf,260,D_0027DC78,j+1); p->func_00168B90(buf,&f27c[0].f16c[j][2]);
func_001ADCC0(buf,260,D_0027DC60,j+1); p->func_00168B90(buf,&f27c[0].f130[j][3]);
func_001ADCC0(buf,260,D_0027DC48,j+1); p->func_00168B90(buf,&f27c[0].f16c[j][3]);
func_001ADCC0(buf,260,D_0027DC30,j+1); p->func_00168B90(buf,&f27c[0].f130[j][4]);
func_001ADCC0(buf,260,D_0027DC18,j+1); p->func_00168B90(buf,&f27c[0].f16c[j][4]);
}break;
}
f284=i;
f28c=*(int*)(selected+0x5e4);
Entry_BCBB0 *e=D_002A8490->f2e0->f324==1 ? f27c : &f27c[f284];
e->f124=f28c; e=D_002A8490->f2e0->f324==1 ? f27c : &f27c[f284]; e->f128=e->f120[f288]; f290=1;
}
if(p) {p->func_001691E0();func_001E891B(p);}
int count=0;
for(i=0;i<f290;i++) if(!D_002A8490->f2e0->f2c0->func_0005C1D0(i)) count++;
if(count==16) for(i=0;i<f290;i++) if(!f27c[i].f10c) D_002A8490->f2e0->f2c0->func_0005C1E0(i);
for(i=0;i<f290;i++) { int slot; int zeros=0; switch(i) {case 0: slot=0; break; case 2: slot=1; break; case 4: slot=2; break; case 5: slot=3; break; case 7: slot=4; break; case 9: slot=5; break; case 10: slot=6; break; case 11: slot=7; break; case 13: slot=8; break; case 14: slot=9; break; default: continue;}
for(j=0;j<f27c[i].f11c;j++) if(!*(int*)(D_002A8490->f2e0->f2c0->func_0005C020(slot)+0x62c+j*4)) zeros++;
if(zeros==f27c[i].f11c) for(j=0;j<f27c[i].f11c;j++) {
int flag=0; if(!f27c[i].f12c[j]) flag=1;
*(int*)(D_002A8490->f2e0->f2c0->func_0005C020(slot)+0x62c+j*4)=flag;
if(!f27c[i].f12c[j]) D_002A8490->f2e0->f2c0->func_0005C170(i,j);
}
}
for(i=0;i<f290;i++) { int slot; int zeros=0; switch(i) {case 0: slot=0; break; case 2: slot=1; break; case 4: slot=2; break; case 5: slot=3; break; case 7: slot=4; break; case 9: slot=5; break; case 10: slot=6; break; case 11: slot=7; break; case 13: slot=8; break; case 14: slot=9; break; default: continue;}
for(j=0;j<f27c[i].f110;j++) if(!*(int*)(D_002A8490->f2e0->f2c0->func_0005C020(slot)+0x638+j*4)) zeros++;
if(zeros==f27c[i].f110) for(j=0;j<f27c[i].f110;j++) {
int flag=0; if(!f27c[i].f118[j]) flag=1;
*(int*)(D_002A8490->f2e0->f2c0->func_0005C020(slot)+0x638+j*4)=flag;
if(!f27c[i].f118[j]) D_002A8490->f2e0->f2c0->func_0005C1B0(i,j);
}
}
}
