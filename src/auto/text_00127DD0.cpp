/* 7 functions from 0x00127DD0 to 0x00128930, found by Ghidra. */
#include "common.h"

#include <string.h>
struct S_00128630_V3 { float x,y,z; };
struct S_00128630_V3i { int x,y,z; };
struct S_00128630_Entry { int data[13]; };
void func_00126DD0(S_00128630_Entry *,int,void *,void *,void *,float *,float *,int);
void func_001271E0(S_00128630_Entry *,int,void *,float *,int *);
void *func_001E8AA5(unsigned int);
void func_001E8390(void *);
extern float D_00275544;
void func_001E891B(void *p);

struct S_00127DD0_V4 {
    float x;
    float y;
    float z;
    float w;
};

struct S_00127DD0_Entry {
    S_00127DD0_V4 a;
    S_00127DD0_V4 b;
};

/* binary tree node: split value, two vec4s of payload, two children */
struct S_00127DD0_Node {
    float split;
    S_00127DD0_V4 a;
    S_00127DD0_V4 b;
    int unk24;
    S_00127DD0_Node *left;
    S_00127DD0_Node *right;
};

struct S_00128480_Entry {
    float split, length;
    unsigned short left, right;
    union {
        struct { int a, b, c; float x, y, z; };
        struct { S_00128630_V3 va, vb; };
        struct { S_00128630_V3i ia, ib; };
    };
};
extern "C" float __cdecl sqrtf(float);
#pragma intrinsic(sqrtf)

struct C_00128910 {
    char pad0[0xC];
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
    C_00128910* func_00128910(void);
};


#include <xmmintrin.h>
extern float D_002755E8;

static inline float Sqrt_00128480(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x)); return r; }

struct V4_00128120 {
    float x, y, z, w;
    V4_00128120(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

struct __declspec(align(16)) M44_00128120 {
    __m128 m[4];
};

void func_0011AC30(M44_00128120 *out, M44_00128120 *in);
void func_00127DD0(int a0, int a1, int a2, S_00127DD0_Entry *e, V4_00128120 *mid, int count);

static __forceinline void Xform_00128120(float *out, const M44_00128120 *mat, const float *v)
{
    __m128 t = _mm_loadu_ps(v);
    _mm_storeh_pi((__m64 *)(out + 2), t);
    out[3] = 1.0f;
    t = _mm_loadh_pi(t, (__m64 *)(out + 2));
    __m128 r0 = _mm_mul_ps(mat->m[0], t);
    __m128 r1 = _mm_mul_ps(mat->m[1], t);
    __m128 r2 = _mm_mul_ps(mat->m[2], t);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 junk = _mm_movehl_ps(r2, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, junk);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(out, lo);
    out[3] = 1.0f;
}

void func_00128120(int a0, int a1, int a2, M44_00128120 *mat, S_00127DD0_Entry *e, int count)
{
    V4_00128120 *mid;
    M44_00128120 m;
    float *p;
    int i;
    int n;
    float sx, sy, sz;

    mid = (V4_00128120 *)func_001E8AA5(count << 4);
    for (i = 0; i + 3 < count; i += 4) {
        sx = e[i].a.x + e[i].b.x; sy = e[i].a.y + e[i].b.y; sz = e[i].a.z + e[i].b.z;
        mid[i] = V4_00128120(sx * D_002755E8, sy * D_002755E8, sz * D_002755E8, 1.0f);
        sx = e[i + 1].a.x + e[i + 1].b.x; sy = e[i + 1].a.y + e[i + 1].b.y; sz = e[i + 1].a.z + e[i + 1].b.z;
        mid[i + 1] = V4_00128120(sx * D_002755E8, sy * D_002755E8, sz * D_002755E8, 1.0f);
        sx = e[i + 2].a.x + e[i + 2].b.x; sy = e[i + 2].a.y + e[i + 2].b.y; sz = e[i + 2].a.z + e[i + 2].b.z;
        mid[i + 2] = V4_00128120(sx * D_002755E8, sy * D_002755E8, sz * D_002755E8, 1.0f);
        sx = e[i + 3].a.x + e[i + 3].b.x; sy = e[i + 3].a.y + e[i + 3].b.y; sz = e[i + 3].a.z + e[i + 3].b.z;
        mid[i + 3] = V4_00128120(sx * D_002755E8, sy * D_002755E8, sz * D_002755E8, 1.0f);
    }
    for (; i < count; i++) {
        sx = e[i].a.x + e[i].b.x; sy = e[i].a.y + e[i].b.y; sz = e[i].a.z + e[i].b.z;
        mid[i] = V4_00128120(sx * D_002755E8, sy * D_002755E8, sz * D_002755E8, 1.0f);
    }
    m = *mat;
    func_0011AC30(&m, &m);
    p = (float *)e;
    for (n = count * 2; n > 0; n--) {
        Xform_00128120(p, &m, p);
        p += 4;
    }
    func_00127DD0(a0, a1, a2, e, mid, count);
    func_001E8390(mid);
}

void func_00128440(S_00127DD0_Node *node)
{
    if (node->split >= D_00275544) {
        func_00128440(node->left);
        func_00128440(node->right);
    }
    func_001E891B(node);
}

void func_001285A0(S_00127DD0_Entry *out, S_00127DD0_Node *node, int *count)
{
    S_00127DD0_Entry *e;
    if (node->split >= D_00275544) {
        do {
            func_001285A0(out, node->left, count);
            node = node->right;
        } while (node->split >= D_00275544);
    }
    e = out + *count;
    e->a = node->a;
    e->b = node->b;
    (*count)++;
}

void func_00128630(S_00128480_Entry *nodes,S_00128630_Entry *entries,int count,void *context,int start,int *index)
{
again:
 S_00128480_Entry *node=nodes+*index;
 int nodeIndex=*index;
 int bz,by,bx;
 S_00127DD0_V4 a,b; a.x=a.y=a.z=0.0f;b.x=b.y=b.z=0.0f;b.w=1.0f;
 func_00126DD0(entries,count,context,&a,&b,&node->split,&node->length,0);
 int az=*(int*)&a.z,ay=*(int*)&a.y,ax=*(int*)&a.x;
 node->a=ax;
 bx=*(int*)&b.x;
 node->b=ay;
 by=*(int*)&b.y;
 node->c=az;
 bz=*(int*)&b.z;
 *(int*)&node->x=bx;*(int*)&node->z=bz;*(int*)&node->y=by;
 float split;int axis;
 func_001271E0(entries,count,context,&split,&axis);
 int leftCount=0,rightCount=0;
 int side=0;
 S_00128630_Entry *left=(S_00128630_Entry*)func_001E8AA5(count*52);
 S_00128630_Entry *right=(S_00128630_Entry*)func_001E8AA5(count*52);
 for(int i=0;i<count;i++) {
 switch(axis) {
 case 0:side=(*(float*)&entries[i].data[7]>split ? 1:0);break;
 case 1:side=(*(float*)&entries[i].data[8]>split ? 1:0);break;
 case 2:side=(*(float*)&entries[i].data[9]>split ? 1:0);break;
 }
 if(side) {left[leftCount++]=entries[i];} else {right[rightCount++]=entries[i];}
 }
 for(int j=0;j<leftCount;j++) entries[j]=left[j];
 for(int k=0;k<rightCount;k++) entries[leftCount+k]=right[k];
 func_001E8390(left);func_001E8390(right);
 if(!rightCount || !leftCount) {leftCount=count/2;rightCount=count-leftCount;}
 if(leftCount==1) node->left=(unsigned short)(start|0x8000);
 else {node->left=(unsigned short)++*index;func_00128630(nodes,entries,leftCount,context,start,index);}
 if(rightCount==1) nodes[nodeIndex].right=(unsigned short)((start+leftCount)|0x8000);
 else {node->right=(unsigned short)++*index;start+=leftCount;count=rightCount;entries+=leftCount;goto again;}
}

C_00128910* C_00128910::func_00128910(void) {
    unk14 = 0;
    unk10 = 0;
    unkC = 0;
    unk20 = 0;
    unk1C = 0;
    unk18 = 0;
    return this;
}
