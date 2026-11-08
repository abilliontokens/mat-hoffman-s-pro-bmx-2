/* 4 functions from 0x00105AA0 to 0x00106810, found by Ghidra. */
#include "common.h"

struct Vec4_00105B30;
struct C_Button;
struct FX_105CB0 { void func_0001CE80(C_Button *,void *,void *,float,float); };
struct App_105CB0 { void *pad; FX_105CB0 *fx; };
extern App_105CB0 *D_002A8490;
extern const float D_00275544,D_00282A58,D_002755E0,D_002755E8,D_00275994,D_00276538,D_0027599C;
extern float D_002A3A48;
int func_00011260(int,int);
float func_00011170(void*);
union IntFloat_105CB0 { int i; float f; };
struct C_Device {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(int,Vec4_00105B30,int); virtual void v39();
    virtual void v40(); virtual void v41(int,Vec4_00105B30,int,int,int); virtual void v42(); virtual int v43(int);
    virtual void v44(Vec4_00105B30,int,int); virtual void v45(); virtual void v46(); virtual void v47(int);
};

struct C_Button {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual int v7();
    virtual void v8(int); virtual void v9(int); virtual void v10(); virtual void v11();
    virtual void v12(int); virtual void v13(); virtual void v14(int);
    virtual void v15(); virtual void v16(); virtual int v17();
};

struct C_ButtonSet {
    C_Button *func_001A2EF0(int index);
    void func_001A2DD0(int index);
    void func_001A4100(int,int,int);
};

struct C_Source {
    char pad0[0x28];
    int f28;
    char pad2C[4];
    int f30;
    char pad34[0x1C];
    int f50;
    int f54;
    char pad58[0xC];
    int f64;
    int f68;
};

struct C_001067B0 {
    char pad0[0x1E8];
    C_Source *f1E8;
    char pad1EC[0xF74];
    int f1160;
    int f1164;
    int f1168;
    int f116C;
    int f1170;
    int pad1174;
    int f1178;
    int f117C;
    int f1180;
    char pad1184[0xC0];
    C_Device *f1244;
    char pad1248[0x35C];
    C_ButtonSet *f15A4;
    int pad15A8;
    float f15AC;
    void func_001067B0(void);
    void func_00105AA0(void);
    void func_00105CB0(void);
    int &I(int off) {return *(int*)((char*)this+off);}
    float &F(int off) {return *(float*)((char*)this+off);}
    char *P(int off) {return (char*)this+off;}
};

struct Vec4_00105B30 {
    float x, y, z, w;
};

extern float D_002A3A3C;
extern float D_002A3A40;
extern float D_002A3A44;

struct C_00199A70 {
    void func_00199A70(int a, Vec4_00105B30 *v);
    void func_001994C0(int a, Vec4_00105B30 *v, void *b);
};

struct C_00105B30_1E0 {
    char pad0[0x26C];
    int f26C;
};

void func_00104A90(Vec4_00105B30 *a, Vec4_00105B30 *b);

struct C_00105B30 {
    char pad0[0x1E0];
    C_00105B30_1E0 *f1E0;
    char pad1E4[0x4C];
    C_00199A70 *f230;
    char pad234[0x600];
    Vec4_00105B30 f834;
    Vec4_00105B30 f844;
    Vec4_00105B30 f854;
    Vec4_00105B30 f864;
    char f874[0x9B8];
    int f122C;
    void func_00105B30(int unused);
};

void C_001067B0::func_00105AA0(void)
{
    f117C = f1178;
    f116C = f1168;
    f1164 = f1160;
    f1160 = f1E8->f64;
    f1178 = f1E8->f68;
    f1168 = f1E8->f50;
    f1170 = f1E8->f54;
    f1180 = f1E8->f28 != 0 && f1E8->f30 != 0;
    if (f1178 != 0) {
        f15AC = 1.0f;
    } else {
        f15AC = 0.0f;
    }
}

#pragma optimize("a", on)
void C_00105B30::func_00105B30(int unused)
{
    Vec4_00105B30 v;
    Vec4_00105B30 *cur = &f834;
    Vec4_00105B30 *prev;
    Vec4_00105B30 *prev2;

    f230->func_00199A70(0, cur);
    f230->func_001994C0(0, &f854, f874);
    prev = &f844;
    if (prev->x == D_002A3A3C && prev->y == D_002A3A40 && prev->z == D_002A3A44) {
        f844 = f834;
    }
    prev2 = &f864;
    if (prev2->x == D_002A3A3C && prev2->y == D_002A3A40 && prev2->z == D_002A3A44) {
        f864 = f854;
    }
    v = f854;
    v.y = 0.0f;
    func_00104A90(&v, &v);
    f122C = f1E0->f26C;
    f844 = f834;
    f864 = v;
}
#pragma optimize("", on)
void C_001067B0::func_00105CB0(void)
{
    int range,random;
    float base,original;
    if(!f15A4) return;
    C_Button *b=f15A4->func_001A2EF0(3);
    if(!I(0x5c8) && !I(0x11dc) && !I(0x69c) &&
       ((!f1178 && f117C && F(0x5dc)>D_00275544) || (f1178 && F(0x1fa0)==D_00275544 && F(0x744)>D_00282A58))) {
        if(!b->v7()) {
            *(volatile int*)&base=b->v17();base=(float)*(int*)&base;
            original=base; base*=0.01f;
            range=(int)(base*0.5f);
            random=func_00011260(0,range);
            int value=(int)((F(0x744)-D_00275994)*range-random+original);
            int amount=(int)(F(0x744) / *(float*)(I(0x1ec)+0x3c)*D_00275994);
            if(amount>100)amount=100;else if(amount<0)amount=0;
            b->v14(value);b->v12(amount);
            D_002A8490->fx->func_0001CE80(b,P(0x834),&D_002A3A3C,10.0f,30.0f);
            f15A4->func_001A4100(3,0,0);
        } else {
            *(volatile int*)&base=b->v17();base=(float)*(int*)&base;
            original=base; base*=0.01f;
            range=(int)(base*0.5f);
            random=func_00011260(0,range);
            int value=(int)((F(0x744)-D_00275994)*range-random+original);
            int amount=(int)(F(0x744) / *(float*)(I(0x1ec)+0x3c)*D_00275994);
            if(amount>100)amount=100;else if(amount<0)amount=0;
            b->v8(value);b->v9(amount);
            D_002A8490->fx->func_0001CE80(b,P(0x834),&D_002A3A3C,10.0f,30.0f);
        }
    }
    if((f1178 && !f117C) || F(0x9a0)>D_00275544 || F(0x5dc)==D_00275544 || I(0x11dc) || I(0x69c) ||
       (f1178 && F(0x1fa0)!=D_00275544) ||
       (f1178 && F(0x1fa0)==D_00275544 && F(0x744)<D_00282A58) || I(0x5c8)) {
        if(b->v7())f15A4->func_001A2DD0(3);
    }
    if(I(0x11dc) && !I(0x470) && F(0x744)>D_00275544 && !I(0x5c8)) {
        if(!I(0x11e0)) {
            b=f15A4->func_001A2EF0(1);
            int base=b->v17();
            range=(int)((base/50)*D_00276538);
            random=func_00011260(0,range);
            int value=(int)((F(0x744)-D_0027599C)*range-random+base);
            int amount=(int)(F(0x744) / *(float*)(I(0x1ec)+0x3c)*D_00275994);
            if(amount>100)amount=100;else if(amount<0)amount=0;
            b->v14(value);b->v12(amount);
            D_002A8490->fx->func_0001CE80(b,P(0x834),&D_002A3A3C,10.0f,30.0f);
            f15A4->func_001A4100(1,0,0);
        } else {
            b=f15A4->func_001A2EF0(2);
            int value=b->v17();
            int random=func_00011260(0,(int)((value/20)*D_002755E8));
            if(func_00011260(0,1))value+=random;else value-=random;
            int amount=(int)(F(0x744) / *(float*)(I(0x1ec)+0x3c)*D_00275994);
            if(amount>100)amount=100;else if(amount<0)amount=0;
            if(!b->v7()) {
                b->v14(value);b->v12(amount);
                D_002A8490->fx->func_0001CE80(b,P(0x834),&D_002A3A3C,10.0f,30.0f);
                f15A4->func_001A4100(2,0,0);
            }else {
                b->v8(value);b->v9(amount);
                D_002A8490->fx->func_0001CE80(b,P(0x834),&D_002A3A3C,10.0f,30.0f);
            }
        }
    } else {
        if(!I(0x11dc) && I(0x11e0) && !I(0x474)) {
            D_002A8490->fx->func_0001CE80(f15A4->func_001A2EF0(6),P(0x834),&D_002A3A3C,10.0f,30.0f);
            f15A4->func_001A4100(6,0,0);
        }
        if(f15A4->func_001A2EF0(2)->v7() && (I(0x11e0)||I(0x5c8)))f15A4->func_001A2DD0(2);
    }
    if(*(int*)(I(0x20c)+0x30) && f1160 && !I(0x11d0)){
        D_002A8490->fx->func_0001CE80(f15A4->func_001A2EF0(4),P(0x834),&D_002A3A3C,10.0f,30.0f);
        f15A4->func_001A4100(4,0,0);
    }
    if(f15A4->func_001A2EF0(4)->v7()){
        D_002A8490->fx->func_0001CE80(f15A4->func_001A2EF0(4),P(0x834),&D_002A3A3C,10.0f,30.0f);
    }
    Vec4_00105B30 v;
    v=*(Vec4_00105B30*)&D_002A3A3C;
    if(!I(0x11dc) && !I(0x5c8)) {
        int src=I(0x1f0);
        if(*(int*)(src+0x30) && *(int*)(src+0x154) && *(unsigned char*)(*(int*)(src+0x154)+0x6d)>0){
            int amount=(int)(func_00011170(P(0x9c)) / *(float*)(I(0x1ec)+0x3c)*100.0f);
            if(amount<0)amount=0;else if(amount>100)amount=100;
            v=*(Vec4_00105B30*)(I(0x1f0)+0x134);
            f1244->v38(*(unsigned char*)(*(int*)(*(int*)(I(0x1f4)+0x24)+0x154)+0x6d),*(Vec4_00105B30*)(I(0x1f0)+0x134),amount);
            *(int*)(*(int*)(I(0x1f4)+0x24)+0x154)=0;
        } else if(f1178) {
            if(!f117C) {
                int amount=(int)(F(0x744) / *(float*)(I(0x1ec)+0x3c)*D_00275994);
                if(amount<0)amount=0;else if(amount>100)amount=100;
                {Vec4_00105B30*src;
                if(f1168){src=(Vec4_00105B30*)((char*)f1E8+0x120);goto copyVec;}
                if(f1170){src=(Vec4_00105B30*)((char*)f1E8+0x130);copyVec:*(int*)&v.x=*(volatile int*)&src->x;*(int*)&v.y=*(volatile int*)&src->y;*(int*)&v.z=*(volatile int*)&src->z;*(int*)&v.w=*(volatile int*)&src->w;}}
                f1244->v38(4,v,amount);
            }
        }
    }
    if(f1178 && F(0x2018)<=D_00282A58 && F(0x744)>D_00282A58) {
        D_002A8490->fx->func_0001CE80(f15A4->func_001A2EF0(5),P(0x834),&D_002A3A3C,10.0f,30.0f);
        f15A4->func_001A4100(5,0,0);
    }
    if(!I(0x5c8) && !I(0x11dc) && f1178 && F(0x744)>D_00282A58 && *(int*)((char*)f1E8+0x1d8) && *(unsigned char*)(*(int*)((char*)f1E8+0x1d8)+0x6d)>0) {
        int id=*(unsigned char*)(*(int*)((char*)f1E8+0x1d8)+0x6d);
        if(I(0x2014)>0 && I(0x2014)!=id)f1244->v47(I(0x2014));
        if(!f1244->v43(id)) {
            float value=D_00275544;
            if(F(0x744)>D_00282A58)value=F(0x744);
            if(f1168)v=*(Vec4_00105B30*)((char*)f1E8+0x120);
            else if(f1170)v=*(Vec4_00105B30*)((char*)f1E8+0x130);
            f1244->v41(id,v,(int)value,100,1);
            I(0x2014)=*(volatile int*)&id;
        }else {
            float value=D_00275544;
            if(F(0x744)>D_00282A58)value=F(0x744);
            if(f1168){Vec4_00105B30*src=(Vec4_00105B30*)((char*)f1E8+0x120);*(int*)&v.x=*(volatile int*)&src->x;*(int*)&v.y=*(volatile int*)&src->y;*(int*)&v.z=*(volatile int*)&src->z;*(int*)&v.w=*(volatile int*)&src->w;}
            else if(f1170){Vec4_00105B30*src=(Vec4_00105B30*)((char*)f1E8+0x130);*(int*)&v.x=*(volatile int*)&src->x;*(int*)&v.y=*(volatile int*)&src->y;*(int*)&v.z=*(volatile int*)&src->z;*(int*)&v.w=*(volatile int*)&src->w;}
            f1244->v44(v,(int)value,100);
            I(0x2014)=*(volatile int*)&id;
        }
    }else if(I(0x2014)){
        f1244->v47(I(0x2014));I(0x2014)=0;
    }
    if(!f1178 && I(0x2014)){f1244->v47(I(0x2014));I(0x2014)=0;}
    F(0x2018)=F(0x744);I(0x474)=I(0x470);
}

void C_001067B0::func_001067B0(void)
{
    if (f15A4->func_001A2EF0(3)->v7()) {
        f15A4->func_001A2DD0(3);
    }
    if (f15A4->func_001A2EF0(2)->v7()) {
        f15A4->func_001A2DD0(2);
    }
    f1244->v46();
}
