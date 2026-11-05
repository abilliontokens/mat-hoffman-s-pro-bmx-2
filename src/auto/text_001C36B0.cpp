/* 36 functions from 0x001C36B0 to 0x001C4560, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001C3F10 {
    uint func_001C3F10(void);
};

struct C_001C3810 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_001C3810* func_001C3810(int a0);
};

struct C_001C37F0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_001C37F0* func_001C37F0(int a0);
};

struct C_001C3700 {
    void func_001C3700(void);
};

struct C_001C3D60 {
    void func_001C3D60(int param_1);
};

struct C_001C3D40 {
    void func_001C3D40(int param_1);
};

struct C_001C3E00 {
    int unk0;
    char pad4[0x2C];
    int unk30;
    void func_001C3E00(void);
};

struct C_001C3F50 {
    bool func_001C3F50(void);
};

struct C_001C3D30 {
    char pad0[0x10];
    int unk10;
    void func_001C3D30(int a0);
};

struct C_001C3F30 {
    undefined4 func_001C3F30(void);
};

struct C_001C3D80 {
    char pad0[0x14];
    int unk14;
    int unk18;
    void func_001C3D80(void);
};

extern int D_0028E360;
extern int D_0028E354;
extern int D_0028E2C4;
extern int D_0028E30C;
extern int D_0028E2A0;
extern int D_0028E2E8;
extern int D_0028E384;
extern int D_0028E330;
void *func_001E8A44(int size);
int __stdcall func_001FF380(int size);
void func_001E891B(void *p);
int __stdcall func_00201100(int p);

struct C_0012A330 {
    void func_0012A330(void);
};

struct C_00160B90 {
    void func_00160B90(void);
};

struct BMNode {
    void *f0;
    int f4;
    BMNode *f8;
};

struct BMHead {
    int f0;
    BMNode *f4;
};

struct BufferManager {
    int unk0;
    int f4;
    void *f8;
    int fC;
    void func_001C3AF0();
};

struct VertexBuffer {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    void func_001C3550(int a1, int a2);
};

struct IndexBuffer {
    IndexBuffer *func_0012A350(int a1, int a2);
};

struct DXVertexBufferManager {
    int unk0;
    void func_001C3BD0(void);
};

struct DXIndexBuffer {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    DXIndexBuffer *func_001C36B0(int type, int count);
};

struct DXVertexBufferCache {
    void *vtbl;
    void *f4;
    void *f8;
    int func_001C3830(int a1, int a2);
    void func_001C3980(void);
    void func_001C3A10(void);
    int func_001C3BF0(int a1, int a2);
};

struct DXIndexBufferCache {
    void *vtbl;
    void *f4;
    void *f8;
    int func_001C38D0(int a1, int a2);
    void func_001C39C0(void);
    void func_001C3A80(void);
    int func_001C3CA0(int a1, int a2);
};

struct C_001C3F40_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

struct C_001C3F40 {
    char pad0[0x58];
    C_001C3F40_Obj *f58;
    void func_001C3F40();
};

struct C_001D5760 {
    char pad0[0x28];
    int f28;
    int f2C;
    char pad30[8];
    unsigned int f38;
    int f3C;
    int f40;
    f32 f44;
    f32 f48;
    char pad4C[0xC];
    u8 b58;
    C_001D5760 *func_001D5760();
    void func_001D5810(void *a, int b, int c, int d);
};

struct ViewportFade {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x20];
    C_001D5760 *unk24;
    f32 f28;
    f32 f2C;
    f32 f30;
    int f34;
    int f38;
    int f3C;
    void func_001D3F50();
    void *func_001C40C0(int a0);
    int func_001C4180(int a0);
};

extern int D_0028E544;
extern int D_0028E53C;
extern int D_0028E5CC;
extern int D_0028E5C4;
extern f32 D_0028E3CC;
extern f32 D_002779FC;
extern f32 D_00276098;
extern f32 D_00275460;

struct FadeOut_001C41E0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x20];
    C_001D5760 *unk24;
    f32 f28;
    f32 f2C;
    f32 f30;
    int f34;
    int f38;
    int f3C;
    int func_001C41E0(int a0);
};

struct CrossFade_001C44A0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    char pad4[0x20];
    C_001D5760 *unk24;
    char pad28[0xC];
    int f34;
    void func_001D3F50();
    CrossFade_001C44A0 *func_001C44A0(int a0);
};

struct C_00160A60 {
    int unk0;
    int unk4;
    int unk8;
    C_00160A60 *func_00160A60(void);
};

struct C_00160A70 {
    int count;
    void *head;
    void *tail;
    int func_00160A70(void *p);
};

struct VideoCardFlags {
    unsigned char bit0 : 1;
    unsigned char bit1 : 1;
    unsigned char bit2 : 1;
    unsigned char bit3 : 1;
    unsigned char bit4 : 1;
    unsigned char bit5 : 1;
    unsigned char bit6 : 1;
    unsigned char bit7 : 1;
};

struct VideoCard {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    VideoCardFlags f3C;
    VideoCard *func_001C3D90(void);
    void *func_001C3E20(unsigned int flags);
};

extern int D_0028E33C;
extern int D_0028E348;
extern int D_0028E3A0;
extern int D_0028E378;
extern int D_0028E36C;
extern int D_0028E3D4;
extern char D_0028E448[];
extern char D_0028E440[];

struct IndexBufferManager {
    int unk0;
    int f4;
    void *f8;
    int fC;
    void func_001C3B60();
};

struct DXIndexBufferManager {
    int unk0;
    void func_001C3C80(void);
};

struct C_001D5350 {
    char pad0[8];
    C_001D5350 *func_001D5350();
    void func_001D53A0(const char *name);
};

/* VideoFXManager */
struct VideoFXManager {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    C_001D5350 *unk28;
    C_001D5350 *unk2C;
    int arr30[4];
    int unk40;
    int unk44;
    int arr48[4];
    int unk58;
    int arr5C[4];
    int unk6C;
    void func_00157600(int a);
    void func_001D3F50();
    VideoFXManager *func_001C3E50(int a);
    void func_001C3EA0(int n);
};


DXIndexBuffer *DXIndexBuffer::func_001C36B0(int type, int count)
{
    if (type == 0x65) {
        int ok;
        int fail;
        f8 = 0x65;
        f10 = count;
        fC = 2;
        f14 = func_001FF380(count * 2);
        ok = f14 != 0;
        fail = (int)((unsigned)(ok - 1) & 0x8007000E) < 0;
        return (DXIndexBuffer *)((fail - 1) & (int)this);
    }
    return 0;
}

void C_001C3700::func_001C3700(void)
{
  int __stdcall func_00201100(int);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x14) != 0) {
    func_00201100((int)(*(int *)(in_ECX + 0x14)));
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  return;
}

C_001C37F0* C_001C37F0::func_001C37F0(int a0) {
    extern int D_0028E360;
    unk4 = a0;
    unk8 = 0;
    unkC = 0;
    unk0 = (int)&D_0028E360;
    return this;
}

C_001C3810* C_001C3810::func_001C3810(int a0) {
    extern int D_0028E378;
    unk4 = a0;
    unk8 = 0;
    unkC = 0;
    unk0 = (int)&D_0028E378;
    return this;
}

void DXVertexBufferCache::func_001C3980(void)
{
    VertexBuffer *p = (VertexBuffer *)f4;
    if (p != 0) {
        p->vtbl = &D_0028E2C4;
        if (p->f14 != 0) {
            func_00201100(p->f14);
            p->f14 = 0;
        }
        p->vtbl = &D_0028E2A0;
        p->fC = 0;
        p->f10 = 0;
        func_001E891B(p);
        f4 = 0;
    }
}

void DXIndexBufferCache::func_001C39C0(void)
{
    DXIndexBuffer *p = (DXIndexBuffer *)f4;
    if (p != 0) {
        p->vtbl = &D_0028E30C;
        if (p->f14 != 0) {
            func_00201100(p->f14);
            p->f14 = 0;
        }
        p->vtbl = &D_0028E2E8;
        p->f8 = 0;
        p->fC = 0;
        p->f10 = 0;
        func_001E891B(p);
        f4 = 0;
    }
}

void DXVertexBufferCache::func_001C3A10(void)
{
    VertexBuffer *p = (VertexBuffer *)f4;
    vtbl = &D_0028E384;
    if (p != 0) {
        p->vtbl = &D_0028E2C4;
        if (p->f14 != 0) {
            func_00201100(p->f14);
            p->f14 = 0;
        }
        p->vtbl = &D_0028E2A0;
        p->fC = 0;
        p->f10 = 0;
        func_001E891B(p);
        f4 = 0;
    }
    {
        void *p8 = f8;
        vtbl = &D_0028E330;
        if (p8 != 0) {
            ((C_0012A330 *)p8)->func_0012A330();
            func_001E891B(p8);
            f8 = 0;
        }
    }
}

void DXIndexBufferCache::func_001C3A80(void)
{
    DXIndexBuffer *p = (DXIndexBuffer *)f4;
    vtbl = &D_0028E348;
    if (p != 0) {
        p->vtbl = &D_0028E30C;
        if (p->f14 != 0) {
            func_00201100(p->f14);
            p->f14 = 0;
        }
        p->vtbl = &D_0028E2E8;
        p->f8 = 0;
        p->fC = 0;
        p->f10 = 0;
        func_001E891B(p);
        f4 = 0;
    }
    {
        void *p8 = f8;
        vtbl = &D_0028E33C;
        if (p8 != 0) {
            ((C_0012A330 *)p8)->func_0012A330();
            func_001E891B(p8);
            f8 = 0;
        }
    }
}

void BufferManager::func_001C3AF0(void)
{
    f4 = 0;
    if (f8 != 0) {
        BMNode *node = ((BMHead *)f8)->f4;
        while (node != 0) {
            DXVertexBufferCache *cache = (DXVertexBufferCache *)node->f0;
            if (cache != 0) {
                cache->func_001C3A10();
                func_001E891B(cache);
            }
            node->f0 = 0;
            node = node->f8;
        }
        {
            void *head = f8;
            if (head != 0) {
                ((C_00160B90 *)head)->func_00160B90();
                func_001E891B(head);
            }
            f8 = 0;
        }
    }
    fC = 0;
}

void IndexBufferManager::func_001C3B60(void)
{
    f4 = 0;
    if (f8 != 0) {
        BMNode *node = ((BMHead *)f8)->f4;
        while (node != 0) {
            DXIndexBufferCache *cache = (DXIndexBufferCache *)node->f0;
            if (cache != 0) {
                cache->func_001C3A80();
                func_001E891B(cache);
            }
            node->f0 = 0;
            node = node->f8;
        }
        {
            void *head = f8;
            if (head != 0) {
                ((C_00160B90 *)head)->func_00160B90();
                func_001E891B(head);
            }
            f8 = 0;
        }
    }
    fC = 0;
}

void DXVertexBufferManager::func_001C3BD0(void)
{
    unk0 = (int)&D_0028E360;
    ((BufferManager *)this)->func_001C3AF0();
    unk0 = (int)&D_0028E354;
}

int DXVertexBufferCache::func_001C3BF0(int a1, int a2)
{
    DXVertexBufferCache *cache = (DXVertexBufferCache *)func_001E8A44(0xc);
    if (cache == 0) {
        return 0;
    }
    cache->f4 = 0;
    cache->f8 = 0;
    cache->vtbl = &D_0028E384;
    cache->func_001C3830(a1, a2);
    if (f8 == 0) {
        C_00160A60 *node = (C_00160A60 *)func_001E8A44(0xc);
        f8 = node != 0 ? (void *)node->func_00160A60() : 0;
        if (f8 == 0) {
            cache->func_001C3A10();
            func_001E891B(cache);
            return 0;
        }
    }
    if (((C_00160A70 *)f8)->func_00160A70(cache) == 0) {
        cache->func_001C3A10();
        func_001E891B(cache);
        return 0;
    }
    return 1;
}

void DXIndexBufferManager::func_001C3C80(void)
{
    unk0 = (int)&D_0028E378;
    ((IndexBufferManager *)this)->func_001C3B60();
    unk0 = (int)&D_0028E36C;
}

int DXIndexBufferCache::func_001C3CA0(int a1, int a2)
{
    DXIndexBufferCache *cache = (DXIndexBufferCache *)func_001E8A44(0xc);
    if (cache == 0) {
        return 0;
    }
    cache->f4 = 0;
    cache->f8 = 0;
    cache->vtbl = &D_0028E348;
    cache->func_001C38D0(a1, a2);
    if (f8 == 0) {
        C_00160A60 *node = (C_00160A60 *)func_001E8A44(0xc);
        f8 = node != 0 ? (void *)node->func_00160A60() : 0;
        if (f8 == 0) {
            cache->func_001C3A80();
            func_001E891B(cache);
            return 0;
        }
    }
    if (((C_00160A70 *)f8)->func_00160A70(cache) == 0) {
        cache->func_001C3A80();
        func_001E891B(cache);
        return 0;
    }
    return 1;
}

void C_001C3D30::func_001C3D30(int a0) {
    unk10 = a0;
}

void C_001C3D40::func_001C3D40(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x14) = 1;
  if (param_1 != 0) {
    *(undefined4 *)(in_ECX + 0x18) = 1;
  }
  return;
}

void C_001C3D60::func_001C3D60(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x14) = 2;
  if (param_1 != 0) {
    *(undefined4 *)(in_ECX + 0x18) = 2;
  }
  return;
}

void C_001C3D80::func_001C3D80(void) {
    unk14 = unk18;
}

VideoCard *VideoCard::func_001C3D90(void)
{
    vtbl = &D_0028E3A0;
    f30 = 0;
    f2C = 0;
    f34 = 0;
    f38 = 0;
    f3C.bit0 = 0;
    f1C = 0;
    f20 = 0;
    f4 = 0;
    f8 = 0;
    fC = 0;
    f10 = 0;
    f24 = 0;
    f28 = 0;
    f30 = (int)func_001E8A44(4);
    f34 = 1;
    f38 = 1;
    f3C.bit0 = 1;
    f14 = 2;
    f18 = 2;
    return this;
}

void C_001C3E00::func_001C3E00(void) {
    extern int D_0028E3A0;
    int func_001E891B(...);
    unk0 = (int)&D_0028E3A0;
    func_001E891B(unk30);
}

void *VideoCard::func_001C3E20(unsigned int flags)
{
    vtbl = &D_0028E3A0;
    func_001E891B((void *)f30);
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

VideoFXManager *VideoFXManager::func_001C3E50(int a)
{
    int i;
    func_00157600(a);
    vtbl = &D_0028E3D4;
    unk28 = 0;
    unk2C = 0;
    unk24 = 1;
    for (i = 0; i < 4; i++) {
        arr30[i] = 0;
        arr48[i] = 0;
        arr5C[i] = 0;
    }
    unk40 = 0;
    unk44 = 0;
    unk58 = 0;
    unk6C = 0;
    return this;
}

void VideoFXManager::func_001C3EA0(int n)
{
    unk24 = n;
    if (n > 1) {
        C_001D5350 *p = (C_001D5350 *)func_001E8A44(8);
        unk28 = p != 0 ? p->func_001D5350() : 0;
        unk28->func_001D53A0(D_0028E448);
        p = (C_001D5350 *)func_001E8A44(8);
        unk2C = p != 0 ? p->func_001D5350() : 0;
        unk2C->func_001D53A0(D_0028E440);
    }
    func_001D3F50();
}

uint C_001C3F10::func_001C3F10(void)
{
  extern undefined4 D_002F07B8;
  int in_ECX = (int)this;
  
  return *(byte *)(D_002F07B8 + 0x9d4) & 1 | *(uint *)(*(int *)(in_ECX + 0x40) + 0x40);
}

undefined4 C_001C3F30::func_001C3F30(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x40) + 0x38);
}

void C_001C3F40::func_001C3F40()
{
    f58->v4();
}

bool C_001C3F50::func_001C3F50(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x6c) != 0;
}

int ViewportFade::func_001C4180(int a0)
{
    float k = (float)a0 * D_00276098;
    f28 = 0;
    f2C = k;
    if (f3C != 0) {
        f28 = (D_00275460 - f30) * k;
    }
    if (a0 == 0) {
        f30 = 1.0f;
    } else {
        f30 = 0.0f;
    }
    f3C = 0;
    f38 = 1;
    v6();
    return 1;
}

int FadeOut_001C41E0::func_001C41E0(int a0)
{
    float k = (float)a0 * D_00276098;
    f28 = 0;
    f2C = k;
    if (f38 != 0) {
        f28 = (D_00275460 - f30) * k;
    }
    if (a0 == 0) {
        f30 = 1.0f;
    } else {
        f30 = 0.0f;
    }
    f38 = 0;
    f3C = 1;
    v6();
    return 1;
}

