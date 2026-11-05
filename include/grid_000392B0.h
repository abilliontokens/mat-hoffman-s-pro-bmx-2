struct S_000392B0_Vec4 {
    float x, y, z, w;
    S_000392B0_Vec4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct S_000392B0_Obj {
    char pad0[0x28];
    int f28;
    void func_00197E70(S_000392B0_Vec4 *v);
    void func_00197B40(S_000392B0_Vec4 *a, S_000392B0_Vec4 *b);
};

struct S_000392B0_Slot {
    int type;                /* 0x00 */
    int pad4;
    S_000392B0_Obj *obj;     /* 0x08 */
};

struct S_000392B0_Block {
    char pad0[0x358];
    int w;                   /* 0x358 */
    int h;                   /* 0x35C */
    int d;                   /* 0x360 */
};
