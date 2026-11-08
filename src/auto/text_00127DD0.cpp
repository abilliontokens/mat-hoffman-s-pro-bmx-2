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
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

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
#include "asm_helpers.h"
extern const float D_002755E8;

static inline float Sqrt_00128480(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x)); return r; }

struct V4_00128120 {
    float x, y, z, w;
    V4_00128120(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

static inline V4_00128120 Add_00128120(const S_00127DD0_V4 &a, const S_00127DD0_V4 &b)
{
    return V4_00128120(a.x + b.x, a.y + b.y, a.z + b.z, 1.0f);
}

static inline V4_00128120 Scale4_00128120(const V4_00128120 &s, const float &k)
{
    return V4_00128120(k * s.x, k * s.y, k * s.z, 1.0f);
}

static inline S_00127DD0_V4 AddP_00128120(const S_00127DD0_V4 &a, const S_00127DD0_V4 &b)
{
    S_00127DD0_V4 r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    r.z = a.z + b.z;
    return r;
}

static inline V4_00128120 Scale_00128120(const S_00127DD0_V4 &s, float k)
{
    return V4_00128120(s.x * k, s.y * k, s.z * k, 1.0f);
}

static inline V4_00128120 ScaleD_00128120(const S_00127DD0_V4 &s)
{
    return V4_00128120(s.x * D_002755E8, s.y * D_002755E8, s.z * D_002755E8, 1.0f);
}

static inline V4_00128120 ScaleD2_00128120(const S_00127DD0_V4 &s)
{
    return V4_00128120(D_002755E8 * s.x, D_002755E8 * s.y, D_002755E8 * s.z, 1.0f);
}

struct __declspec(align(16)) M44_00128120 {
    __m128 m[4];
};

void func_0011AC30(M44_00128120 *out, M44_00128120 *in);
void func_00127DD0(int a0, int a1, int a2, S_00127DD0_Entry *e, V4_00128120 *mid, int count);

static inline void Xform_00128120(float *out, const M44_00128120 *mat, const float *v)
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

void func_00126A80(S_00127DD0_Entry *verts, int count, void *center, void *extent, void *volume, void *radius, float *matrix);
void func_00127980(S_00127DD0_Entry *e, S_00127DD0_V4 *pos, int count, int *mode, float *thr);
int func_001268E0(S_00127DD0_Entry *src, S_00127DD0_V4 *pos, S_00127DD0_Entry *outA, S_00127DD0_Entry *outB, S_00127DD0_V4 *posA, S_00127DD0_V4 *posB, int count, int *cntA, int *cntB, float thr, int mode);
void func_00127DD0(S_00127DD0_Node *node0, int *nodes, S_00127DD0_V4 *a2, S_00127DD0_Entry *e0, S_00127DD0_V4 *pos, int count0)
{
    int mode;
    float thr;
    int cntA, cntB;
    S_00127DD0_Entry *bufA, *bufB;
    S_00127DD0_V4 *posA, *posB;
    int i;
    S_00127DD0_Entry *e = e0;
    int count = count0;
    S_00127DD0_Node *node = node0;
    while (count != 1) {
        int *n4 = (int *)((char *)node + 4);
        char *n8 = (char *)node + 8;
        char *n18 = (char *)node + 0x18;
        func_00126A80(e, count * 2, n8, n18, node, n4, 0);
        func_00127980(e, pos, count, &mode, &thr);
        cntA = cntB = 0;
        bufA = (S_00127DD0_Entry *)func_001E8AA5(count << 5);
        bufB = (S_00127DD0_Entry *)func_001E8AA5(count << 5);
        posA = (S_00127DD0_V4 *)func_001E8AA5(count << 4);
        posB = (S_00127DD0_V4 *)func_001E8AA5(count << 4);
        func_001268E0(e, a2, bufA, bufB, posA, posB, count, &cntA, &cntB, thr, mode);
        for (i = 0; i < cntA; i++) {
            e[i].a = bufA[i].a;
            e[i].b = bufA[i].b;
            pos[i] = posA[i];
        }
        for (i = 0; i < cntB; i++) {
            e[cntA + i].a = bufB[i].a;
            e[cntA + i].b = bufB[i].b;
            pos[cntA + i] = posB[i];
        }
        func_001E8390(bufA);
        func_001E8390(bufB);
        func_001E8390(posA);
        func_001E8390(posB);
        if (cntB == 0 || cntA == 0) {
            cntA = count / 2;
            cntB = count - cntA;
        }
        if (cntA == 1)
            node->left = (S_00127DD0_Node *)func_001E8AA5(0x24);
        else
            node->left = (S_00127DD0_Node *)func_001E8AA5(0x30);
        if (cntB == 1)
            node->right = (S_00127DD0_Node *)func_001E8AA5(0x24);
        else
            node->right = (S_00127DD0_Node *)func_001E8AA5(0x30);
        (*nodes)++;
        func_00127DD0(node->left, nodes, a2, e, pos, cntA);
        pos += cntA;
        node = node->right;
        e += cntA;
        count = cntB;
    }
    (*nodes)++;
    node->split = -1.0f;
    node->a = e->a;
    node->b = e->b;
}

void func_00128120(int a0, int a1, int a2, M44_00128120 *mat, S_00127DD0_Entry *e, int count)
{
    V4_00128120 *mid;
    M44_00128120 m;
    int i;
    int n;
    float *p;

    mid = (V4_00128120 *)func_001E8AA5(count << 4);
    for (i = 0; i < count; i++) {
        mid[i] = Scale_00128120(AddP_00128120(e[i].a, e[i].b), 0.5f);
    }
    m = *mat;
    func_0011AC30(&m, &m);
    n = count * 2;
    if (n > 0) {
        p = (float *)e;
        do {
            AsmTransformPoint(p, p, (const float *)m.m);
            p += 4;
        } while (--n != 0);
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

void func_00128480(S_00128480_Entry *out, S_00127DD0_Node *node, int *count, int *leaves)
{
    if (node->split >= D_00275544) {
        S_00128480_Entry *e = out + *count;
        out[*count].split = node->split;
        e->length = node->a.x;
        e->a = *(int *)&node->a.y;
        e->b = *(int *)&node->a.z;
        e->c = *(int *)&node->a.w;
        e->x = node->b.y;
        e->y = node->b.z;
        e->z = node->b.w;
        float fw = node->b.w;
        float fz = node->b.z;
        float fy = node->b.y;
        e->length = AsmSqrtF(fy * fy + fz * fz + fw * fw);
        e->left = ++*count;
        func_00128480(out, node->left, count, leaves);
        if (node->left->split < D_00275544) {
            e->left = *leaves | 0x8000;
        }
        e->right = *count;
        func_00128480(out, node->right, count, leaves);
        if (node->right->split < D_00275544) {
            e->right = *leaves | 0x8000;
        }
    } else {
        ++*leaves;
    }
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
 *(int*)&node->x=bx;*(int*)&node->y=by;*(int*)&node->z=bz;
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
