/* 2 functions from 0x001396D0 to 0x00139B50, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern float D_00275544;
extern const float D_002755E8;
extern const float D_00275994;
struct CsGlobal { char pad[0x124]; int f124; };
extern CsGlobal *D_002A8490;
struct CsValue { int id; float time; int f8; };
struct CsTrack { int id; char pad[0x18]; };
struct CsCue { int id; float start; float end; int fc; };
struct CsClip { int func_000B5870(); };
struct CsItem {
    float end;
    int trackCount;
    int cueCount;
    int fc;
    int valueCount;
    int mode;
    CsValue *values;
    CsClip *clip;
    CsTrack *tracks;
    CsCue *cues;
    int f28;
};
struct CsCam { void func_0019AC50(); };
struct CsActor { CsCam *pad0; CsCam *cam; void func_001670C0(float, int, int); };
struct CsChild {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(int); virtual void v6(); virtual int v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    char pad4[0x1c8];
    unsigned char f1cc;
    char pad1cd[3];
    int f1d0;
    char pad1d4[8];
    float f1dc;
};
struct CsGroup { int f0; CsChild **children; int pad8[2]; int count; };
struct CsGroups { char pad[0x28]; CsGroup **groups; };
struct CsPlayer { void func_001A4100(int, int, int); };
struct CsTimer { void func_001C4E70(float); };
struct CutScene {
    void *vtbl;
    char pad4[0x20];
    int f24;
    float f28;
    float f2c;
    float f30;
    int f34;
    int f38;
    int f3c;
    CsItem *f40;
    int f44;
    int f48;
    int f4c;
    CsTimer *f50;
    int f54;
    CsActor **f58;
    int f5c;
    CsGroups *f60;
    int f64;
    int f68;
    int f6c;
    int f70;
    int f74;
    int f78;
    CsPlayer *f7c;
    CsChild **f80;
    int f84;
    void (*f88)(int, int);
    int f8c;
    int func_00157A00(float dt);
    void func_001390A0(int index);
    void func_00139360(int oldIndex, int index);
    void func_001395D0();
    int func_001396D0(float dt);
};
struct C_00139B30 {
    undefined4 func_00139B30(byte param_1);
};

static __forceinline float Scale_001396D0(float v)
{
    return v * D_002755E8 * D_00275994;
}


int CutScene::func_001396D0(float dt)
{
    CsValue *v;
    int i, k, id, next;

    if (D_002A8490->f124 == 1) {
        return 1;
    }
    if (f34 == 0) {
        if (f24 == -1) {
            func_00139360(-1, 0);
        }
        if (f40[f24].values != 0) {
            if (f74 == 1) {
                if (f40[f24].values->time != D_00275544) {
                    f40[f24].values->time -= dt;
                    v = f40[f24].values;
                    if (v->time < D_00275544) {
                        if (v->id >= 0 && f7c != 0) {
                            f7c->func_001A4100(v->id, 0, 0);
                        }
                        f40[f24].values->time = 0;
                    }
                }
            } else {
                for (i = 0; i < f40[f24].valueCount; i++) {
                    if (f40[f24].values[i].time != D_00275544) {
                        f40[f24].values[i].time -= dt;
                        v = &f40[f24].values[i];
                        if (v->time < D_00275544) {
                            id = v->id;
                            if (id >= 0 && f80[id] != 0 && !f80[id]->v7()) {
                                f80[id]->v5(0);
                            }
                            f40[f24].values[i].time = 0;
                        }
                    }
                }
            }
        }
        f28 += dt;
        if (f40[f24].mode == 1) {
            if (!(f28 > f40[f24].end)) {
                goto play;
            }
        } else if (f40[f24].clip->func_000B5870()) {
            goto play;
        }
        next = f24 + 1;
        f28 = 0;
        if (next >= f3c) {
            if (f38 == 0) {
                f34 = 1;
                func_001390A0(f24);
                func_001395D0();
                if (f88 != 0) {
                    f88(f8c, f24);
                }
            } else {
                func_00139360(f24, 0);
            }
        } else {
            func_00139360(f24, next);
        }
play:
        if (f34 == 0) {
            for (i = 0; i < f40[f24].trackCount; i++) {
                f58[f40[f24].tracks[i].id]->func_001670C0(dt, 0, 0);
                f58[f40[f24].tracks[i].id]->cam->func_0019AC50();
            }
            for (i = 0; i < f40[f24].cueCount; i++) {
                if (f28 >= f40[f24].cues[i].start) {
                    CsGroup *grp = f60->groups[f40[f24].cues[i].id];
                    for (k = 0; k < grp->count; k++) {
                        CsChild *c = grp->children[k];
                        if (c->f1cc & 2) {
                            continue;
                        }
                        if (c->f1d0 == 1 && c->f1dc <= D_00275544) {
                            continue;
                        }
                        c->v31();
                        grp->children[k]->v32();
                        grp->children[k]->v30();
                        grp->children[k]->v6();
                    }
                }
                if (f40[f24].cues[i].end != D_00275544 && f28 >= f40[f24].cues[i].end) {
                    CsGroup *grp = f60->groups[f40[f24].cues[i].id];
                    for (k = 0; k < grp->count; k++) {
                        CsChild *c = grp->children[k];
                        if (c->f1cc & 2) {
                            c->v31();
                            grp->children[k]->v4();
                        }
                    }
                }
            }
        }
    }
    if (f2c >= D_00275544) {
        f50->func_001C4E70(f2c * D_002755E8 * D_00275994);
        if (f2c == D_00275544) {
            f2c = -1.0f;
        } else {
            f2c -= dt;
            if (f2c <= f30) {
                f2c = f30;
            }
        }
    }
    return func_00157A00(dt);
}

undefined4 C_00139B30::func_00139B30(byte param_1)
{
  int func_00138890(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00138890();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
