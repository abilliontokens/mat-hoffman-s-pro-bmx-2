/* 1 function from 0x001160C0 to 0x00117160, found by Ghidra. */
#include "common.h"
#include <string.h>
struct C_000AD5C0 { int func_000AD5C0(int,int *,int); int func_000A7570(int,int,int); void func_000A7560(); };
struct C_001C3D30 { void func_001C3D30(int); };
struct Queue_10DED0 { int count; int ids[5]; int modes[5]; int f2C; int f30; int f34; int f38[100]; int f1C8[100]; void func_00109340(int,int); };
struct Obj831549 { int func_000831C0(); };
extern float D_002755E4, D_002755E8, D_00276098, D_002756DC, D_00275460, D_00283C80, D_00278C58;
unsigned int func_001DC974();

/* input device slot: virtual 3 reads an analog value for a control code */
struct S_001160C0_Pad {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int v3(int idx, int code, float *out);
};

struct S_001160C0_Axis {
    char pad0[0x24];
    float f24;
};

/* input mapper: index lookup of a (control, device, mode) triple */
struct S_001160C0_Map {
    char pad0[0x14];
    S_001160C0_Pad *items[4];
    int func_00136170(int control, int device, int mode);
};

struct S_001160C0_Root {
    char pad0[8];
    S_001160C0_Map *f8;
    char padC[0x2a4-0xc];
    void *f2A4;
};
extern S_001160C0_Root *D_002A8490;
extern float D_00275544;

/* player controller (update) */
struct C_001160C0 {
 char pad0[0x454];
 int f454;
 char pad458[0x10];
 int f468;
 char pad46c[0x4];
 int f470;
 char pad474[0x8];
 int f47C;
 char pad480[0x74];
 int f4F4;
 int f4F8;
 char pad4fc[0xf0];
 int f5EC;
 int f5F0;
 int f5F4;
 char pad5f8[0x88];
 int f680;
 char pad684[0x18];
 int f69C;
 char pad6a0[0x64];
 int f704;
 char pad708[0x4];
 int f70C;
 char pad710[0x34];
 float f744;
 char pad748[0x20c];
 int f954;
 float f958;
 int f95C;
 float f960;
 float f964;
 float f968;
 char pad96c[0x4];
 int f970;
 char pad974[0xc];
 int f980;
 int f984;
 int f988;
 float f98C;
 int f990;
 char pad994[0x4];
 int f998;
 float f99C;
 float f9A0;
 float f9A4;
 float f9A8;
 float f9AC;
 float f9B0;
 char pad9b4[0x4];
 float f9B8;
 float f9BC;
 float f9C0;
 float f9C4;
 float f9C8;
 char pad9cc[0x4];
 int f9D0;
 int f9D4;
 int f9D8;
 char pad9dc[0x4];
 int f9E0;
 float f9E4;
 S_001160C0_Axis * f9E8;
 S_001160C0_Axis * f9EC;
 char pad9f0[0x3c];
 int fA2C;
 int fA30;
 char pada34[0x10];
 int fA44;
 char pada48[0x624];
 float f106C;
 float f1070;
 char pad1074[0x4];
 int f1078;
 char pad107c[0x8];
 int f1084;
 int f1088;
 int f108C;
 char pad1090[0x7c];
 int f110C;
 char pad1110[0x4];
 int f1114;
 int f1118;
 int f111C;
 char pad1120[0x14];
 int f1134;
 float f1138;
 char pad113c[0x8];
 float f1144;
 float f1148;
 float f114C;
 float f1150;
 float f1154;
 int f1158;
 char pad115c[0xc];
 int f1168;
 char pad116c[0xc];
 int f1178;
 char pad117c[0x60];
 int f11DC;
 char pad11e0[0xc];
 int f11EC;
 int f11F0;
 int f11F4;
 char pad11f8[0x3e0];
 int f15D8;
 char pad15dc[0x2c];
 int f1608;
 char pad160c[0x4];
 int f1610;
 char pad1614[0x14];
 int f1628;
 char pad162c[0x4];
 int f1630;
 char pad1634[0x1e68-0x1634];
 int input[32]; int prev[32];
 char pad1F68[0x201c-0x1f68]; float f201C;
 char pad2020[0x20ac-0x2020]; int f20AC;
 int func_00107FB0(); int func_001091D0();
 void func_0010DCB0(); void func_0010DED0(int,int); int func_0010E030(int,int);
 void func_001160C0(float dt);
};

static __forceinline float axis_f24(const S_001160C0_Axis *p) { return p->f24; }

void C_001160C0::func_001160C0(float dt)
{
 float value[6];
 if (!(f958 > D_00275544) && f95C == 0) {
 f964 = ((volatile S_001160C0_Axis *)f9E8)->f24;
 f968 = ((volatile S_001160C0_Axis *)f9EC)->f24;
 for (int i=0; i<32; ++i) {
 if (D_002A8490->f8->items[f970]->v3(i,63,value)) {
 if (value[1] >= D_00275544) input[i]=1;
 } else {
 input[i]=0;
 if (prev[i] && value[1] > D_00275544) input[i]=1;
 }
 }
 if (input[D_002A8490->f8->func_00136170(0,2,0)]) f964=-1.0f;
 else if (input[D_002A8490->f8->func_00136170(1,2,0)]) f964=1.0f;
 if (input[D_002A8490->f8->func_00136170(2,2,0)]) f968=-1.0f;
 else if (input[D_002A8490->f8->func_00136170(3,2,0)]) f968=1.0f;

 if (input[D_002A8490->f8->func_00136170(14,2,0)]) {
 if(D_002A8490->f8->items[f970]->v3(D_002A8490->f8->func_00136170(14,2,0),63,value)) {
 if (value[1]>=D_002755E8) f9A8=1.0f; else f9A8=0.0f;
 }
 } else f9A8=0.0f;
 if (input[D_002A8490->f8->func_00136170(15,2,0)]) {
 if(D_002A8490->f8->items[f970]->v3(D_002A8490->f8->func_00136170(15,2,0),63,value)) {
 if (value[1]>=D_002755E8) f9AC=1.0f; else f9AC=0.0f;
 }
 } else f9AC=0.0f;
 int state=func_00107FB0();
 f1154=func_001DC974()*D_00276098;
 int enabled;
 if(f11DC && !f470) enabled=input[D_002A8490->f8->func_00136170(13,2,0)]!=0; else enabled=1;
 ((C_000AD5C0*)f954)->func_000A7570(state,*(int*)&f1154,enabled);
 if(f1178 && !input[D_002A8490->f8->func_00136170(19,2,0)] && state==4) {
 f9E4+=dt;
 if(f9E4>D_002756DC){ f9E0=1; ((C_000AD5C0*)f954)->func_000A7560(); }
 }else {f9E4=0;f9E0=0;}
 if(f11DC) {
 if(f470) ((C_001C3D30*)f5F4)->func_001C3D30(*(int*)&f968);
 else ((C_001C3D30*)f5EC)->func_001C3D30(*(int*)&f964);
 }else if(f454 && !input[D_002A8490->f8->func_00136170(19,2,0)])
 ((C_001C3D30*)f5F0)->func_001C3D30(*(int*)&f968);

 int action;
 if(f454 && !fA30) {
 if(f1138>=D_00275460 && f1134==-1) {
 if(input[D_002A8490->f8->func_00136170(18,2,0)] && f980 && f114C<=D_00275544) f114C=0.08f;
 else if(input[D_002A8490->f8->func_00136170(17,2,0)] && f984 && f1150<=D_00275544) f1150=0.08f;
 else if(input[D_002A8490->f8->func_00136170(19,2,0)]) {
 action=((C_000AD5C0*)f954)->func_000AD5C0(-1,0,0);
 if(action==3) {
 Obj831549 *obj=((Obj831549 **)((char*)D_002A8490->f2A4+0x170))[fA2C];
 if(!obj || !obj->func_000831C0()) action=0;
 }
 switch(action) {
 case 2: f1158=3; f1138=0; ((Queue_10DED0*)f1084)->func_00109340(1001,1);
 goto set_action_flags;
 case 3: f1158=4; f1138=0; ((Queue_10DED0*)f1084)->func_00109340(1002,0);
 set_action_flags:
 f1088=1; f108C=1; f1608=1; f1610=1; break;
 case 1: f1158=2; ((Queue_10DED0*)f1084)->func_00109340(1000,0);
 f1088=1; f108C=1; f1608=1; f1610=1; f1138=0; break;
 case 4: f1158=0; ((Queue_10DED0*)f1084)->func_00109340(1003,0);
 f1088=1; f108C=1; f1608=1; f1610=1; f1138=0; break;
 case 5: f1158=1; ((Queue_10DED0*)f1084)->func_00109340(1004,0);
 f1088=1; f108C=1; f1608=1; f1610=1; f1138=0; break;
 }
 }
 }
 } else {
 if(input[D_002A8490->f8->func_00136170(18,2,0)] && f980 && !f1168 && !f704 && !f70C && f1144<=D_00275544) f1144=0.08f;
 else if(input[D_002A8490->f8->func_00136170(17,2,0)] && f984 && !f1168 && !f704 && !f70C && f1148<=D_00275544) f1148=0.08f;
 else if((!f11DC || (f470 && (f47C==3 || f47C==4))) && !f110C && !f704 && !f70C && !f69C && !f454) {
 if(f1178 && !(f1070>D_00275544) && !input[D_002A8490->f8->func_00136170(19,2,0)] && (!f470 || (f47C!=3 && f47C!=4))) goto after_actions;
 if(f680 && ((Queue_10DED0*)f1084)->f2C!=-1) goto after_actions;
 action=((C_000AD5C0*)f954)->func_000AD5C0(-1,0,0);
 if(action==3) {
 Obj831549 *obj=((Obj831549 **)((char*)D_002A8490->f2A4+0x170))[fA2C];
 if(!obj || !obj->func_000831C0()) action=0;
 }
 switch(action) {
 case 2: f1138=0; f1158=3; ((Queue_10DED0*)f1084)->func_00109340(1001,1); break;
 case 3: f1138=0; f1158=4; ((Queue_10DED0*)f1084)->func_00109340(1002,0); break;
 case 1: f1158=2; ((Queue_10DED0*)f1084)->func_00109340(1000,0); f1138=0; break;
 case 4: f1158=0; ((Queue_10DED0*)f1084)->func_00109340(1003,0); f1138=0; break;
 case 5: f1158=1; ((Queue_10DED0*)f1084)->func_00109340(1004,0); f1138=0; break;
 }
 }
 }
 after_actions:
 int selected;
 if(f1144>D_00275544) {
 f1144-=dt;
 if(f1144<=D_00275544) {
 f1144=0;
 if(((C_000AD5C0*)f954)->func_000AD5C0(0,&selected,*(int*)&f1154)==9) {
 func_0010DCB0(); func_0010DED0(selected,0); f980=0;
 }
 }
 }
 if(f1148>D_00275544) {
 f1148-=dt;
 if(f1148<=D_00275544) {
 f1148=0;
 if(((C_000AD5C0*)f954)->func_000AD5C0(1,&selected,*(int*)&f1154)==9) {
 func_0010DCB0(); func_0010DED0(selected,1); f984=0;
 }
 }
 }
 if(f114C>D_00275544) {
 f114C-=dt;
 if(f114C<=D_00275544) {
 f114C=0;
 if(((C_000AD5C0*)f954)->func_000AD5C0(0,&selected,*(int*)&f1154)==9 && func_0010E030(selected,0)) f980=0;
 }
 }
 if(f1150>D_00275544) {
 f1150-=dt;
 if(f1150<=D_00275544) {
 f1150=0;
 if(((C_000AD5C0*)f954)->func_000AD5C0(1,&selected,*(int*)&f1154)==9 && func_0010E030(selected,1)) f984=0;
 }
 }

 if(state==4 && input[D_002A8490->f8->func_00136170(13,2,0)]) {
 if(f15D8==9 && !f454)goto do_action6;
 f9C0=1.0f;
 f9C4=0;
 }else {
 do_action6:
 f9C0=0;
 if(state==6 && input[D_002A8490->f8->func_00136170(13,2,0)] && f15D8==9 && f454) f9C4=1.0f;
 else f9C4=0;
 }
 if(!input[D_002A8490->f8->func_00136170(13,2,0)]) f988=1;
 f9C8=f9BC;
 int can=1;
 if(f11DC)can=0;
 if(f1134!=-1)can=0;
 if(f454 && fA30)can=0;
 if(f15D8==9)can=0;
 if(f11F0 && f11EC)can=0;
 if(input[D_002A8490->f8->func_00136170(13,2,0)]){
 if(f15D8==9)f106C=0.2f;
 if(can){f9BC=1.0f;f988=0;}else f9BC=0;
 }else f9BC=0;
 if(!input[D_002A8490->f8->func_00136170(19,2,0)]) {
 if(input[D_002A8490->f8->func_00136170(10,2,0)]) f99C=1.0f;
 else if(f968<D_00283C80 && !f454) f99C=1.0f; else f99C=0;
 if(f968>D_00278C58 && !f454 && func_001091D0()) f9A0=f968;
 else f9A0=0;
 }
 if(f9A4>D_00275544){f9A0=1.0f;f9A4-=dt;}
 int grounded=f454;
 f9D4=0;
 if(!grounded && f9A0>=D_002755E8 && !f20AC && !f9D0) {
 if(f9A8!=D_00275544) {
 if(f744>f201C){f964=-1.0f;f9D4=1;}
 f9A0=1.0f;f99C=0;
 }else if(f9AC!=D_00275544) {
 if(f744>f201C){f964=1.0f;f9D4=1;}
 f9A0=1.0f;f99C=0;
 }
 }
 int special=f20AC;
 if(special) {
 if(!f9D0) {
 if(!grounded && !f468 && state==4 && f9B0==D_00275544 && !f4F8 && !f4F4 && f1178) f9D0=1;
 }
 if(f9D0)f99C=0;
 if(special && !grounded && !f468 && !f4F8 && !f4F4 && f1178)goto keep_d0;
 }
 f9D0=0;
 keep_d0:
 f9B8=0;f9B0=0;
 if(!input[D_002A8490->f8->func_00136170(11,2,0)] &&
 prev[D_002A8490->f8->func_00136170(11,2,0)] && !f9D0 &&
 !input[D_002A8490->f8->func_00136170(19,2,0)]) {
 f9B0=1.0f;
if(((C_000AD5C0*)f954)->func_000AD5C0(4,&selected,0)==6)f9B8=1.0f;
 }else f9B0=0;
 if(state==-1)f990=1;
 if(!input[D_002A8490->f8->func_00136170(18,2,0)])f980=1;
 if(!input[D_002A8490->f8->func_00136170(17,2,0)])f984=1;
 if(f98C>D_00275544){f98C-=dt;if(f98C<D_00275544)f98C=0;}
 f9D8=-1;f110C=0;
 if(f11F4==1) {
 if(!f111C)f110C=input[D_002A8490->f8->func_00136170(18,2,0)];
 else f110C=input[D_002A8490->f8->func_00136170(17,2,0)];
 }
 f1114=0;
 if(input[D_002A8490->f8->func_00136170(21,2,0)] ||
 input[D_002A8490->f8->func_00136170(22,2,0)] ||
 input[D_002A8490->f8->func_00136170(20,2,0)]) {
 if(!f454) {
 f1114=1;
 int current=((Queue_10DED0*)f1084)->f2C;
 if((f11DC && f1078) || (*(volatile int*)&f454 && !fA30) || (current<1000 && current!=-1)) {
 if(!f1118 && fA44==-1) {
 int selected2;
 if(((C_000AD5C0*)f954)->func_000AD5C0(3,&selected2,0)==7) {
 f9D8=selected2; f1630=0; f1628=0;
 }
 }
 }
 }
 }
 if(fA44!=-1 && f110C)f1114=1;
 if(f960>D_00275544) {
 if(f960>D_00275544) f960-=dt;
 f964=0; f968=0;
 ((C_001C3D30*)f5F0)->func_001C3D30(0);
 ((C_001C3D30*)f5EC)->func_001C3D30(0);
 ((C_001C3D30*)f5F4)->func_001C3D30(0);
 }
 memcpy(prev,input,sizeof(input));
 if(++f998>=10)f998=0;
 }else {
 if(f958>D_00275544)f958-=dt;
 for(int j=0;j<32;++j)input[j]=0;
 f9A0=1.0f;
 }
}
