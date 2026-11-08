/* 9 functions from 0x000B8AD0 to 0x000B9AD0, found by Ghidra. */
#include "common.h"
#include <math.h>
#include "asm_helpers.h"
struct C_000B8C80 {
    char pad0[0x9C];
    int unk9C;
    void func_000B8C80(int a0);
};


struct BmxUIGlobalManager {
    void *vtbl;
    void *func_000B9A60(int a0);
    void func_001BC770(int a0);
    void *func_000B9AA0(int flags);
    void func_001BC7A0();
};
void func_001E891B(void *);
struct C_000B8AD0 {
    char pad0[0x50];
    int unk50;
    int unk54;
    void func_000B8AD0(int a0, int a1);
    void func_000B67C0();
};
struct Obj1A4100 {
    void func_001A4100(int a0, int a1, int a2);
};
struct C_000B9A80 {
    char pad0[0x30];
    Obj1A4100 *unk30;
    void func_000B9A80(int a0, int a1);
};
struct TireVec {
    float x,y,z,w;
    TireVec() {}
    TireVec(float a,float b,float c,float d=1.0f):x(a),y(b),z(c),w(d) {}
    TireVec operator+(const TireVec &b) const { return TireVec(x+b.x,y+b.y,z+b.z); }
    TireVec operator-(const TireVec &b) const { return TireVec(x-b.x,y-b.y,z-b.z); }
    TireVec operator*(float s) const { return TireVec(x*s,y*s,z*s); }
    float dot(const TireVec &b) const { return x*b.x+y*b.y+z*b.z; }
};
struct TireTransform {
    TireVec *func_00197F70(TireVec *,const TireVec *);
    TireVec *func_00198040(TireVec *,const TireVec *);
    TireVec func_00197F70(const TireVec &);
    TireVec func_00198040(const TireVec &);
    void func_001994C0(int,TireVec *,TireVec *);
};
struct TireBody {
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
    virtual void v30();
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
    virtual void v41();
    virtual void GetVelocity(TireVec *);
    virtual void v43();
    virtual void GetAngularVelocity(TireVec *);
    char pad4[0x24]; float f28;
    char pad2C[0x104]; TireVec f130;
    char pad140[0x50]; TireVec f190;
    char pad1A0[0x70]; float f210;
    char pad214[0x18]; TireTransform *f22C;
    char pad230[8]; TireVec f238,f248;
    char pad258[0x10]; TireVec f268;
    void func_0001C710(TireVec);
    void func_0001E0A0(TireVec);
    void func_0001C750(TireVec,TireVec);
};
float func_0001C870(float,float,float,float,float);
float func_0014F7E0(float);
float func_0014FB30(float);
void func_0014F760(int,float *,float *,float *);
extern float D_00275BF4,D_00275AEC,D_0027D5E0,D_00275BF8,D_00275544;
/* BmxTireModel, vtable slot 13 (SIMD-heavy tire/contact update) */
struct C_000B8C90 {
    char pad0[0x28];
    int f28;
    int f2C;
    int f30;
    int f34;
    float f38;
    float f3C;
    float f40;
    float f44;
    char pad48[0x1C];
    float f64[4];
    float f74[4];
    float f84[4];
    char pad94[8];
    unsigned char *f9C;
    unsigned char *fA0;
    float fA4, fA8, fAC, fB0, fB4;
    void func_000B8C90(float dt);
};

extern int D_0027D5FC;

struct C_000B8B60 {
    void *vtbl;
    char pad4[0x20];
    int u[32];
    C_000B8B60 *func_000B8B60(int a0);
    void func_00157600(int a0);
};
extern int D_002A3084, D_002A3088, D_002A308C, D_002A3090;
extern int D_002A3064, D_002A3068, D_002A306C, D_002A3070;

struct C_000B9A30 {
    void *vtbl;
    void *func_000B9A30(int flags);
};

void C_000B8AD0::func_000B8AD0(int a0, int a1)
{
    unk50 = a0;
    unk54 = a1;
    func_000B67C0();
}

void func_000B8AF0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

C_000B8B60 *C_000B8B60::func_000B8B60(int a0)
{
    extern int D_0027D574;
    int *p;
    func_00157600(a0);
    vtbl = (void *)&D_0027D574;
    p = &u[16]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[20]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[24]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    u[10] = 0x3f800000; u[11] = 0x3f800000; u[12] = 0x3f800000;
    u[5] = 0x3f800000; u[6] = 0x3f800000; u[7] = 0x3f800000;
    u[0] = 0; u[1] = 0; u[2] = 0; u[4] = 0; u[3] = 0;
    u[14] = 0; u[15] = 0; u[13] = 0x40400000;
    u[8] = 0x3e800000; u[9] = 0x3e800000;
    u[16] = D_002A3084; u[17] = D_002A3088; u[18] = D_002A308C; u[19] = D_002A3090;
    u[20] = D_002A3064; u[21] = D_002A3068; u[22] = D_002A306C; u[23] = D_002A3070;
    u[24] = D_002A3064; u[25] = D_002A3068; u[26] = D_002A306C; u[27] = D_002A3070;
    u[30] = 0; u[31] = 0; u[28] = 0; u[29] = 0;
    return this;
}

void C_000B8C80::func_000B8C80(int a0) {
    unk9C = a0;
}

void C_000B8C90::func_000B8C90(float dt)
{
    if (f28) {
        TireBody *body=(TireBody *)f9C;
        TireVec velocity=body->f248;
        TireVec p=*(TireVec *)f74+body->f190;
        TireVec q=*(TireVec *)f84+((TireBody *)f9C)->f190;
        float sx=-45.0f,sy=-45.0f;
        TireVec cross,v,w,angular;
        cross.z=cross.y=cross.x=0; cross.w=1;
        AsmVec3Cross(&cross.x,(float *)(f9C+0x268),f74);
        v.x=velocity.x+cross.x; v.y=velocity.y+cross.y; v.z=velocity.z+cross.z;
        AsmVec3Cross(&cross.x,(float *)(f9C+0x268),f84);
        w.x=velocity.x+cross.x; w.y=velocity.y+cross.y; w.z=velocity.z+cross.z;
        if(fA0) {
            TireVec transformed=((TireBody *)f9C)->f22C->func_00197F70(p);
            TireVec otherPos=((TireBody *)fA0)->f22C->func_00197F70(((TireBody *)fA0)->f190);
            TireVec relative(transformed.x-otherPos.x,transformed.y-otherPos.y,transformed.z-otherPos.z);
            ((TireBody *)fA0)->GetAngularVelocity(&angular);
            ((TireBody *)fA0)->GetVelocity(&velocity);
            AsmVec3Cross(&cross.x,&angular.x,&relative.x);
            TireVec point(velocity.x+cross.x,velocity.y+cross.y,velocity.z+cross.z);
            TireVec otherVelocity=((TireBody *)f9C)->f22C->func_00198040(point);
            v=v-otherVelocity;
            transformed=((TireBody *)f9C)->f22C->func_00197F70(q);
            relative=transformed-otherPos;
            AsmVec3Cross(&cross.x,&angular.x,&relative.x);
            point=velocity+cross;
            otherVelocity=((TireBody *)f9C)->f22C->func_00198040(point);
            w=w-otherVelocity;
        }
        if(f30 && f2C) {
            float scale=func_0001C870(*(float *)(f9C+0x28),0,1,10,f40);
            sy=scale*D_00275BF4;
            sx=scale*f44*D_00275BF4;
        }
        TireVec side,forward;
        side.z=side.y=side.x=0; side.w=1;
        forward.z=forward.y=forward.x=0; forward.w=1;
        AsmVec3Cross(&side.x,f64,(float *)&D_002A3084);
        func_000B8AF0(&side.x,&side.x);
        AsmVec3Cross(&forward.x,(float *)&D_002A3084,&side.x);
        float dot=side.dot(((TireBody *)f9C)->f238);
        float lx=side.x*dot,ly=side.y*dot,lz=side.z*dot;
        float length=AsmSqrtF(lx*lx+ly*ly+lz*lz);
        float angle;
        if(*(float *)(f9C+0x28)<=D_00275AEC) {
            angular.z=angular.y=angular.x=0; angular.w=1;
            ((TireBody *)f9C)->f22C->func_001994C0(0,0,&angular);
            angle=func_0014F7E0(angular.x);
        } else {
            angle=(float)fabs(func_0014FB30(length/ *(float *)(f9C+0x23C)));
        }
        float camber=func_0014F7E0(f64[1]);
        if(camber>fA8 && angle>fA4 && f34) {
            ((TireBody *)f9C)->func_0001C710(TireVec(0,func_0001C870(camber,fA8,0,fAC,fB4)* *(float *)(f9C+0x210)*D_0027D5E0,0));
            sy*=fB0; sx*=fB0;
            ((TireBody *)f9C)->func_0001E0A0(TireVec(0,*(float *)(f9C+0x248)* *(float *)((char *)this+0xB8),0));
        } else {
            float mass=*(float *)(f9C+0x210)*D_00275BF8;
            float gx=*(float *)&D_002A3084*mass,gy=*(float *)&D_002A3088*mass,gz=*(float *)&D_002A308C*mass;
            float projection=gx*f64[0]+gy*f64[1]+gz*f64[2];
            TireVec gravity(gx-f64[0]*projection,gy-f64[1]*projection,gz-f64[2]*projection);
            TireVec point(0,0,0);
            ((TireBody *)f9C)->f22C->func_001994C0(0,&point,0);
            float projection2=point.dot(*(TireVec *)f64);
            float ax=f64[0]*projection2,ay=f64[1]*projection2,az=f64[2]*projection2;
            point.x-=ax; point.y-=ay; point.z-=az;
            func_000B8AF0(&point.x,&point.x);
            TireVec otherPos=point*gravity.dot(point);
            TireVec relative=gravity-otherPos;
            float scale=func_0001C870(*(float *)(f9C+0x250),0,1,20,0);
            TireVec transformed=*(TireVec *)&D_002A3064+relative*scale;
            if((float)fabs(*(float *)(f9C+0x250))<= *(float *)((char *)this+0x58) && *(float *)((char *)this+0x60)!=D_00275544)
            {
                transformed.x+=otherPos.x; transformed.y+=otherPos.y; transformed.z+=otherPos.z;
            }
            TireVec &accum=((TireBody *)f9C)->f130;
            accum.x+=transformed.x; accum.y+=transformed.y; accum.z+=transformed.z;
        }
        float sn,cs,tmp;
        func_0014F760(*(int *)((char *)this+0x5C),&sn,&cs,&tmp);
        float mass=f3C*f38;
        float force=(v.x*sn-v.z*cs)*mass;
        float second=w.x*mass;
        second*=sx;
        ((TireBody *)f9C)->func_0001C750(TireVec(force*sy,0,0),p);
        ((TireBody *)f9C)->func_0001C750(TireVec(second,0,0),q);
    }
}

void *C_000B9A30::func_000B9A30(int flags) {
    extern int D_0027D574;
    void func_00157660();
    void func_001E891B(void *);
    vtbl = (void *)&D_0027D574;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *BmxUIGlobalManager::func_000B9A60(int a0)
{
    func_001BC770(a0);
    vtbl = (void *)&D_0027D5FC;
    return this;
}

void C_000B9A80::func_000B9A80(int a0, int a1)
{
    if (unk30 != 0) {
        unk30->func_001A4100(a0, a1, 0);
    }
}

void *BmxUIGlobalManager::func_000B9AA0(int flags)
{
    vtbl = (void *)&D_0027D5FC;
    func_001BC7A0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

