/* 12 functions from 0x001414A0 to 0x00142180, found by Ghidra. */
#include "common.h"

extern "C" int strcmp(const char *a, const char *b);
extern char D_0000F005;
extern char D_0000F006;

/* the original's string literals at their own addresses */
extern char D_0028502C[];
extern char D_002857C4[];
extern char D_002857B0[];
extern char D_00285798[];
extern char D_00285780[];
extern char D_00285768[];
extern char D_00285754[];
extern char D_00285740[];
extern char D_0028572C[];

struct C_00168BE0 {
    void func_00168BE0(const char *key, const char *def, char *buf, int size);
};

struct DXParticleSimulation {
    char pad0[0x58];
    float f58;
    char pad5c[0x4c];
    int fA8;
    int func_00142150(float dt);
};

int func_001414A0(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DBLEND_ZERO") == 0) {
        out = 0;
    } else if (strcmp(buf, "D3DBLEND_ONE") == 0) {
        out = 1;
    } else if (strcmp(buf, "D3DBLEND_SRCCOLOR") == 0) {
        out = 0x300;
    } else if (strcmp(buf, "D3DBLEND_INVSRCCOLOR") == 0) {
        out = 0x301;
    } else if (strcmp(buf, "D3DBLEND_SRCALPHA") == 0) {
        out = 0x302;
    } else if (strcmp(buf, "D3DBLEND_INVSRCALPHA") == 0) {
        out = 0x303;
    } else if (strcmp(buf, "D3DBLEND_DESTALPHA") == 0) {
        out = 0x304;
    } else if (strcmp(buf, "D3DBLEND_INVDESTALPHA") == 0) {
        out = 0x305;
    } else if (strcmp(buf, "D3DBLEND_DESTCOLOR") == 0) {
        out = 0x306;
    } else if (strcmp(buf, "D3DBLEND_INVDESTCOLOR") == 0) {
        out = 0x307;
    } else if (strcmp(buf, "D3DBLEND_SRCALPHASAT") == 0) {
        out = 0x308;
    } else if (strcmp(buf, "D3DBLEND_CONSTANTCOLOR") == 0) {
        out = 0x8001;
    } else if (strcmp(buf, "D3DBLEND_INVCONSTANTCOLOR") == 0) {
        out = 0x8002;
    } else if (strcmp(buf, "D3DBLEND_CONSTANTALPHA") == 0) {
        out = 0x8003;
    } else if (strcmp(buf, "D3DBLEND_INVCONSTANTALPHA") == 0) {
        out = 0x8004;
    }
    return out;
}

int func_001416E0(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DSHADE_FLAT") == 0) {
        out = 0x1d00;
    } else if (strcmp(buf, "D3DSHADE_GOURAUD") == 0) {
        out = 0x1d01;
    }
    return out;
}

int func_00141780(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DBLENDOP_ADD") == 0) {
        out = 0x8006;
    } else if (strcmp(buf, "D3DBLENDOP_SUBTRACT") == 0) {
        out = 0x800a;
    } else if (strcmp(buf, "D3DBLENDOP_REVSUBTRACT") == 0) {
        out = 0x800b;
    } else if (strcmp(buf, "D3DBLENDOP_MIN") == 0) {
        out = 0x8007;
    } else if (strcmp(buf, "D3DBLENDOP_MAX") == 0) {
        out = 0x8008;
    } else if (strcmp(buf, "D3DBLENDOP_ADDSIGNED") == 0) {
        out = (int)&D_0000F006;
    } else if (strcmp(buf, "D3DBLENDOP_REVSUBTRACTSIGNED") == 0) {
        out = (int)&D_0000F005;
    }
    return out;
}

int func_001418C0(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DSWATH_8") == 0) {
        out = 0;
    } else if (strcmp(buf, "D3DSWATH_16") == 0) {
        out = 1;
    } else if (strcmp(buf, "D3DSWATH_32") == 0) {
        out = 2;
    } else if (strcmp(buf, "D3DSWATH_64") == 0) {
        out = 3;
    } else if (strcmp(buf, "D3DSWATH_128") == 0) {
        out = 4;
    } else if (strcmp(buf, "D3DSWATH_OFF") == 0) {
        out = 0xf;
    }
    return out;
}

int func_00141A00(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DPATCHEDGE_DISCRETE") == 0) {
        out = 0;
    } else if (strcmp(buf, "D3DPATCHEDGE_CONTINUOUS") == 0) {
        out = 1;
    }
    return out;
}

int func_00141AA0(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DFILL_POINT") == 0) {
        out = 0x1b00;
    } else if (strcmp(buf, "D3DFILL_WIREFRAME") == 0) {
        out = 0x1b01;
    } else if (strcmp(buf, "D3DFILL_SOLID") == 0) {
        out = 0x1b02;
    }
    return out;
}

int func_00141B60(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DZB_FALSE") == 0) {
        out = 0;
    } else if (strcmp(buf, "D3DZB_TRUE") == 0) {
        out = 1;
    } else if (strcmp(buf, "D3DZB_USEW") == 0) {
        out = 2;
    }
    return out;
}

int func_00141C10(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];

    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DSTENCILOP_KEEP") == 0) {
        out = 0x1e00;
    } else if (strcmp(buf, "D3DSTENCILOP_ZERO") == 0) {
        out = 0;
    } else if (strcmp(buf, "D3DSTENCILOP_REPLACE") == 0) {
        out = 0x1e01;
    } else if (strcmp(buf, "D3DSTENCILOP_INCRSAT") == 0) {
        out = 0x1e02;
    } else if (strcmp(buf, "D3DSTENCILOP_DECRSAT") == 0) {
        out = 0x1e03;
    } else if (strcmp(buf, "D3DSTENCILOP_INVERT") == 0) {
        out = 0x150a;
    } else if (strcmp(buf, "D3DSTENCILOP_INCR") == 0) {
        out = 0x8507;
    } else if (strcmp(buf, "D3DSTENCILOP_DECR") == 0) {
        out = 0x8508;
    }
    return out;
}

int func_00141D70(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DCULL_CCW") == 0) {
        out = 0x900;
    } else if (strcmp(buf, "D3DCULL_NONE") == 0) {
        out = 0x901;
    }
    return out;
}

int func_00141E10(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DCULL_NONE") == 0) {
        out = 0;
    } else if (strcmp(buf, "D3DCULL_CW") == 0) {
        out = 0x900;
    } else if (strcmp(buf, "D3DCULL_CCW") == 0) {
        out = 0x901;
    }
    return out;
}

int DXParticleSimulation::func_00142150(float dt)
{
    if (fA8 != 0) {
        f58 = dt * 1000.0f + f58;
    }
    return 1;
}
