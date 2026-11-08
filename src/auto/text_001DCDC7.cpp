/* 33 functions from 0x001DCDC7 to 0x001DDD84, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
#include "text_001DCDC7.h"

unsigned __int64 __rdtsc();
#pragma optimize("y", on)
#pragma optimize("s", on)
int __stdcall func_001DCDC7(int, int, int, int, int, int);
#pragma optimize("y", on)
__declspec(noinline) int __stdcall func_001DCDC7(int a0,int a1,volatile int a2,int a3,int a4,int a5) {
    typedef int (__stdcall *Progress)(__int64,__int64,__int64,__int64,u32,u32,u32,u32,int);
    u32 basic[10];
    S_AnsiString str;
    __int64 allocation;
    S_ObjectAttributes oa;
    u32 info[14];
    S_IoStatusBlock ios;
    void *buffer;
    char remove;
    u32 output,input;
    __int64 offset;
    u32 size=(u32)&D_00010000;
    oa.rootDirectory=(void *)-3; oa.attributes=0x40; oa.objectName=&str;
    buffer=_imp__MmAllocateSystemMemory(size,4);
    if(!buffer) {func_001DD62B(8);return 0;}
    void (__stdcall *init)(S_AnsiString *,const char *)=_imp__RtlInitAnsiString;
    init(&str,(const char *)a0);
    a0=_imp__NtOpenFile(&input,0x80100000,&oa,&ios,1,0x60);
    if(a0<0) { _imp__MmFreeSystemMemory(buffer,size); func_001DD659(a0); return 0; }
    a0=_imp__NtQueryInformationFile((void *)input,&ios,info,0x38,0x22);
    if(a0<0) { _imp__NtClose((void *)input); goto openFailed; }
    init(&str,(const char *)a1);
    int status;
    status=_imp__NtCreateFile(&output,0x40100000,&oa,&ios,&info[10],0x80,0,(a5&1)?2:5,0x64);
    if(status<0) { _imp__NtClose((void *)input); _imp__MmFreeSystemMemory(buffer,size); func_001DD659(status); return 0; }
    offset=0;
    if(a2) {
        int result=((Progress)*(int *)&a2)(*(__int64 *)&info[10],0,*(__int64 *)&info[10],0,1,1,input,output,a3);
        if(result==3) a2=0;
        else if(result!=0) {status=0xc0000240;goto finish;}
    }
    allocation=*(__int64 *)&info[10];
    status=_imp__NtSetInformationFile((void *)output,&ios,&allocation,8,0x14);
    if(status<0) goto finish;
    while(offset<*(__int64 *)&info[10]) {
        status=_imp__NtReadFile((void *)input,0,0,0,&ios,buffer,size,&offset);
        if(status<0) goto finish;
        a0=ios.information;
        status=_imp__NtWriteFile((void *)output,0,0,0,&ios,buffer,a0,&offset);
        if(status<0) goto finish;
        offset+=(u32)a0;
        if(a2) {
            int result=((Progress)*(int *)&a2)(*(__int64 *)&info[10],offset,*(__int64 *)&info[10],offset,1,0,input,output,a3);
            if(result==3) a2=0;
            else if(result!=0) {status=0xc0000240;break;}
        }
    }
    if(status>=0) {
        basic[0]=info[0]; basic[1]=info[1]; basic[2]=info[2]; basic[3]=info[3];
        basic[4]=info[4]; basic[5]=info[5]; basic[6]=info[6]; basic[7]=info[7]; basic[8]=info[12];
        status=_imp__NtSetInformationFile((void *)output,&ios,basic,0x28,4);
    }
finish:
    _imp__MmFreeSystemMemory(buffer,size);
    int (__stdcall *close)(void *)=_imp__NtClose;
    close((void *)input);
    int success=0;
    if(status<0) {
        remove=1;
        _imp__NtSetInformationFile((void *)output,&ios,&remove,1,0xd);
        func_001DD659(status);
    } else success=1;
    close((void *)output);
    return success;
openFailed:
    _imp__MmFreeSystemMemory(buffer,size);
    func_001DD659(a0);
    return 0;
}
#pragma optimize("y", on)
#pragma optimize("s", on)

void __stdcall func_001DD0A9(int a0, int a1, int a2) {
    func_001DCDC7(a0, a1, 0, 0, 0, a2 != 0);
}
void __stdcall func_001DD0C8(u32 *a0) {
    struct Stats {
        u32 size;
        u32 a;
        u32 b;
        u32 padC;
        u32 c;
        u32 pad14[4];
    };
    Stats stats;
    stats.size = 0x24;
    _imp__MmQueryStatistics(&stats);
    a0[1] = 0;
    a0[4] = 0;
    a0[5] = 0;
    a0[2] = stats.a << 12;
    a0[3] = stats.b << 12;
    a0[6] = 0x7ffe0000;
    a0[0] = 0x20;
    a0[7] = 0x7ffe0000 - stats.c;
}
#pragma intrinsic(__rdtsc)
int __stdcall func_001DD117(u64 *a0) {
    *a0 = __rdtsc();
    return 1;
}
int __stdcall func_001DD128(u32 *a0) {
    a0[1] = 0;
    a0[0] = 0x2bb5c755;
    return 1;
}

int __stdcall func_001DD13C(void *a0) {
    int result = _imp__NtClose(a0);
    if (result >= 0) {
        return 1;
    } else {
        func_001DD659(result);
        return 0;
    }
}

#pragma optimize("y", off)
int __stdcall func_001DD15A(void *h, void *buffer, u32 size, u32 *read, S_001DD670_Overlapped *ov)
{
    S_IoStatusBlock iosb;
    u32 offset[2];
    int status;

    if (read)
        *read = 0;
    if (ov) {
        offset[0] = ov->Offset;
        offset[1] = ov->OffsetHigh;
        ov->Internal = 0x103;
        status = _imp__NtReadFile(h, ov->hEvent, 0, ((u32)ov->hEvent & 1) ? 0 : ov, ov, buffer, size, offset);
        if (status >= 0 && status != 0x103) {
            if (read)
                *read = ov->InternalHigh;
            return 1;
        }
        if (status == 0xc0000011) {
            if (read)
                *read = 0;
            func_001DD659(0xc0000011);
            return 0;
        }
        goto fail;
    }
    status = _imp__NtReadFile(h, 0, 0, 0, &iosb, buffer, size, 0);
    if (status == 0x103)
        status = _imp__NtWaitForSingleObject(h, 0, 0);
    if (status >= 0) {
        status = iosb.status;
        if (status >= 0) {
            *read = iosb.information;
            return 1;
        }
    }
    if (status == 0xc0000011) {
        *read = 0;
        return 1;
    }
    if (((u32)status & 0xc0000000) == 0x80000000)
        *read = iosb.information;
fail:
    func_001DD659(status);
    return 0;
}
#pragma optimize("s", on)
int __stdcall func_001DD247(void *h, void *buffer, u32 size, u32 *written, S_001DD670_Overlapped *ov)
{
    S_IoStatusBlock iosb;
    u32 offset[2];
    int status;

    if (written)
        *written = 0;
    if (ov) {
        offset[0] = ov->Offset;
        offset[1] = ov->OffsetHigh;
        ov->Internal = 0x103;
        status = _imp__NtWriteFile(h, ov->hEvent, 0, ((u32)ov->hEvent & 1) ? 0 : ov, ov, buffer, size, offset);
        if (((u32)status & 0xc0000000) == 0xc0000000 || status == 0x103)
            goto fail;
        if (written)
            *written = ov->InternalHigh;
    ok:
        return 1;
    }
    status = _imp__NtWriteFile(h, 0, 0, 0, &iosb, buffer, size, 0);
    if (status == 0x103)
        status = _imp__NtWaitForSingleObject(h, 0, 0);
    if (status >= 0) {
        status = iosb.status;
        if (status >= 0) {
            *written = iosb.information;
            goto ok;
        }
    }
    if (((u32)status & 0xc0000000) == 0x80000000)
        *written = iosb.information;
fail:
    func_001DD659(status);
    return 0;
}
#pragma optimize("y", on)

int __stdcall func_001DD31D(void *a0) {
    u32 iosb[2];
    __int64 eof;
    __int64 alloc;
    __int64 pos;
    int result;
    result = _imp__NtQueryInformationFile(a0, iosb, &pos, 8, 0xe);
    if (result < 0) {
        func_001DD659(result);
        return 0;
    } else {
        int (__stdcall *setInfo)(void *, void *, void *, u32, int) = _imp__NtSetInformationFile;
        alloc = pos;
        result = setInfo(a0, iosb, &alloc, 8, 0x14);
        if (result >= 0) {
            eof = pos;
            result = setInfo(a0, iosb, &eof, 8, 0x13);
            if (result >= 0) {
                return 1;
            }
        }
        func_001DD659(result);
        return 0;
    }
}

#pragma optimize("y", off)
int __stdcall func_001DD3A1(void *h, u32 lo, u32 *hi, int method)
{
    struct NetworkOpenInfo {
        __int64 creationTime;
        __int64 lastAccessTime;
        __int64 lastWriteTime;
        __int64 changeTime;
        __int64 allocationSize;
        __int64 endOfFile;
        u32 fileAttributes;
    };
    union Large {
        __int64 q;
        struct {
            u32 lo;
            long hi;
        } s;
    };
    NetworkOpenInfo info;
    u32 iosb[2];
    Large pos;
    Large off;
    int status;

    if (hi != 0) {
        off.s.hi = *hi;
        off.s.lo = lo;
    } else {
        off.q = (long)lo;
    }
    switch (method) {
    case 0:
        pos = off;
        break;
    default:
        goto current;
    case 1:
    current:
        status = _imp__NtQueryInformationFile(h, iosb, &pos, 8, 0xe);
        if (status < 0) {
            func_001DD659(status);
            return -1;
        }
        pos.q += off.q;
        break;
    case 2:
        status = _imp__NtQueryInformationFile(h, iosb, &info, 0x38, 0x22);
        if (status < 0) {
            func_001DD659(status);
            return -1;
        }
        pos.q = info.endOfFile + off.q;
        break;
    }
    if (pos.q < 0) {
        func_001DD62B(0x83);
        return -1;
    }
    if (hi == 0 && (pos.s.hi & 0x7fffffff) != 0) {
        func_001DD62B(0x57);
        return -1;
    }
    status = _imp__NtSetInformationFile(h, iosb, &pos, 8, 0xe);
    if (status >= 0) {
        if (hi != 0) {
            *hi = pos.s.hi;
        }
        if (pos.s.lo == 0xffffffff) {
            func_001DD62B(0);
        }
        return pos.s.lo;
    }
    func_001DD659(status);
    pos.s.lo = -1;
    if (hi != 0) {
        *hi = pos.s.lo;
    }
    return pos.s.lo;
}

int __stdcall func_001DD49B(void *a0, __int64 a1, __int64 *a2, int a3) {
u32 iosb[2]; __int64 pos; char info[0x38]; int result;
switch(a3) {
case 0: pos=a1; break;
case 2: result=_imp__NtQueryInformationFile(a0,iosb,info,0x38,0x22); if(result<0) goto fail; pos=*(__int64*)(info+0x28)+a1; break;
default: goto cur;
case 1: cur: result=_imp__NtQueryInformationFile(a0,iosb,&pos,8,0xe); if(result<0) goto fail; pos+=a1; break;
}
if(pos<0) {func_001DD62B(0x83);return 0;}
result=_imp__NtSetInformationFile(a0,iosb,&pos,8,0xe);
if(result>=0){if(a2)*a2=pos;return 1;}
fail: func_001DD659(result);return 0;
}

int __stdcall func_001DD563(void *a0) {
    u32 iosb[2];
    int result = _imp__NtFlushBuffersFile(a0, iosb);
    if (result >= 0) {
        return 1;
    } else {
        func_001DD659(result);
        return 0;
    }
}

#pragma optimize("y", off)
int __stdcall func_001DD58A(void *a0, u32 *a1) {
    struct NetworkOpenInfo {
        __int64 creationTime;
        __int64 lastAccessTime;
        __int64 lastWriteTime;
        __int64 changeTime;
        __int64 allocationSize;
        __int64 endOfFile;
        u32 fileAttributes;
    };
    u32 iosb[2];
    NetworkOpenInfo info;
    int result = _imp__NtQueryInformationFile(a0, iosb, &info, 0x38, 0x22);
    if (result < 0) {
        func_001DD659(result);
        return 0;
    } else {
        *(__int64 *)a1 = info.endOfFile;
        return 1;
    }
}

#pragma optimize("y", off)
u32 __stdcall func_001DD5C8(void *a0, u32 *a1) {
    int __stdcall func_001DD58A(void *, u32 *);
    u32 size[2];
    if (func_001DD58A(a0, size) != 0) {
        if (a1 != 0) {
            a1[0] = size[1];
        }
        if (size[0] == 0xffffffff) {
            func_001DD62B(0);
        }
    } else {
        size[0] = 0xffffffff;
    }
    return size[0];
}

int func_001DD603(void)
{
    if (__readfsbyte(0x24) < 2) {
        unsigned long thread = __readfsdword(0x28);
        (void)thread;
    }
    return ((int **)__readfsdword(4))[D_002F41D0][1];
}

void __stdcall func_001DD62B(int a0)
{
    unsigned long thread;
    int idx;

    if (__readfsbyte(0x24) < 2) {
        thread = __readfsdword(0x28);
    }
    idx = D_002F41D0;
    ((int **)__readfsdword(4))[idx][1] = a0;
}

#pragma optimize("y", on)
int __stdcall func_001DD659(int a0) {
    int err = _imp__RtlNtStatusToDosError(a0);
    func_001DD62B(err);
    return err;
}

int __stdcall func_001DD670(void *a0, S_001DD670_Overlapped *a1, u32 *a2, int a3)
{
    int r;

    if (a1->Internal == 0x103) {
        if (a3 != 0) {
            void *h = a1->hEvent;
            if (h == 0) {
                h = a0;
            }
            r = func_001DDDD6(h, -1);
        } else {
            r = 0x102;
        }
        if (r == 0x102) {
            func_001DD62B(0x3e4);
            return 0;
        }
        if (r != 0) {
            return 0;
        }
    }
    *a2 = a1->InternalHigh;
    if (a1->Internal >= 0) {
        return 1;
    }
    func_001DD659(a1->Internal);
    return 0;
}

int __stdcall func_001DD6D5(void *a0, u32 *a1, u32 a2)
{
    u32 *buf = a1;

    if (func_001DD15A(a0, buf, 0x200, &a1, 0) && (u32)a1 == 0x200 && (a2 == 0 || *buf == a2)) {
        return 1;
    }
    return 0;
}

#pragma optimize("y", off)
int __stdcall func_001DD713(u32 *a0, u32 *a1)
{
    S_ObjectAttributes oa;
    S_IoStatusBlock iosb;
    int status;

    oa.rootDirectory = 0;
    oa.attributes = 0x40;
    oa.objectName = &D_0028FA80;
    status = _imp__NtCreateFile(a0, 0x80100000, &oa, &iosb, 0, 0xc, 1, 1, 0x20);
    if (status >= 0) {
        if (func_001DD6D5((void *)*a0, a1, 0) == 0) {
            status = 0xc00000e4;
            _imp__NtClose((void *)*a0);
        }
    }
    return status;
}

#pragma optimize("y", on)
int __stdcall func_001DD779(S_001DD779_Header *a0, S_001DD779_File *a1, S_001DD779_Out *a2)
{
    int result = 0;

    if (a1->f4 < a1->f8) {
        func_001DD3A1(a1->fC, (a1->f4 + 1) << 9, 0, 0);
        a1->f4++;
        result = func_001DD6D5(a1->fC, (u32 *)a0, (u32)&D_00021371);
        if (result != 0) {
            D_002ACA00 = *a0;
            func_001EA4A4(a2->fC, D_002ACB60, 0x20);
            a2->f0 = D_002ACA04;
            a2->f4 = D_002ACA08;
            a2->f8 = D_002ACB5C;
        }
    }
    return result;
}

#pragma optimize("y", on)

#pragma optimize("y", off)

#pragma optimize("y", on)

#pragma optimize("y", on)

void __stdcall func_001DD7F7(undefined4 param_1, undefined4 param_2)
{
  int __stdcall func_001DD779(int, int, int);
  undefined1 local_204 [512];
  
  func_001DD779((int)(local_204), (int)(param_1), (int)(param_2));
  return;
}

void *__stdcall func_001DD816(int a0)
{
    u32 buf[128];
    void *h;
    int status;
    S_001DD816_Obj *p = 0;

    status = func_001DD713((u32 *)&h, buf);
    if (status >= 0) {
        p = (S_001DD816_Obj *)func_001DF5B9(0, 0x10);
        if (p == 0) {
            func_001DD62B(_imp__RtlNtStatusToDosError(0xc000009a));
            _imp__NtClose(h);
            goto done;
        }
        p->signature = 0xbe4bea00;
        p->sectors = buf[1];
        p->f4 = 0;
        p->handle = h;
    } else {
        func_001DD62B(_imp__RtlNtStatusToDosError(status));
    }
    if (status >= 0 && func_001DD779((S_001DD779_Header *)buf, (S_001DD779_File *)p, (S_001DD779_Out *)a0) == 0) {
        _imp__NtClose(h);
        func_001DF5D6(p);
        p = 0;
    }
done:
    return p ? p : (void *)-1;
}

#pragma optimize("y", off)
int __stdcall func_001DD8C5(u32 id, u32 idx, u32 *out1, u32 *out2, unsigned short *name, int unused)
{
    u32 buf[0x80];
    void *h = (void *)-1;
    int ok = 1;
    int status;
    u32 n;
    u32 i;
    u32 *p;
    u32 sector;
    u32 index = idx;

    if (D_002ACA04 != id) {
        status = func_001DD713((u32 *)&h, buf);
        ok = status >= 0;
        if (ok) {
            n = buf[1];
            if (n >= 0x64) {
                n = 0x64;
            }
            i = 0;
            if (n > 0) {
                p = &buf[3];
                do {
                    if (*p == id) {
                        break;
                    }
                    i++;
                    p++;
                } while (i < n);
            }
            if (i == n) {
                ok = 0;
                func_001DD62B(0x57);
            }
        } else {
            func_001DD62B(_imp__RtlNtStatusToDosError(status));
        }
        if (ok) {
            ok = func_001DD3A1(h, index << 9, 0, 1) != -1;
            if (ok) {
                ok = func_001DD6D5(h, buf, (u32)&D_00021371);
                if (ok) {
                    D_002ACA00 = *(S_001DD779_Header *)buf;
                    if (buf[1] == id && buf[2] > index) {
                        ok = 1;
                    } else {
                        ok = 0;
                        func_001DD62B(0x57);
                    }
                }
            } else {
                func_001DD62B(0xd);
            }
        }
    }
    if (ok) {
        if (D_002AC844 != id || index < D_002AC848 * 6 || index >= D_002AC848 * 6 + 6) {
            if ((int)h == -1) {
                status = func_001DD713((u32 *)&h, buf);
                ok = status >= 0;
                if (!ok) {
                    func_001DD62B(_imp__RtlNtStatusToDosError(status));
                }
            }
            if (ok) {
                sector = (D_002ACA0C[index / 6] + 0x65) << 9;
                ok = func_001DD3A1(h, sector, 0, 0) != -1;
                if (ok) {
                    ok = func_001DD6D5(h, buf, (u32)&D_00031073);
                    if (ok) {
                        ok = buf[1] == id;
                        D_002AC840 = *(S_001DD8C5_Table *)buf;
                        if (!ok) {
                            func_001DD62B(0xd);
                        }
                    }
                } else {
                    func_001DD62B(0xd);
                }
            }
        }
    }
    if (index > D_002ACA08) {
        ok = 0;
        func_001DD62B(0x57);
    }
    if (ok) {
        u32 slot = index % 6;

        *out1 = D_002AC850[slot];
        *out2 = D_002AC868[slot];
        if (name != 0) {
            func_001EA4A4(name, D_002AC880[slot], 0x20);
        }
    }
    if ((int)h != -1) {
        func_001DD13C(h);
    }
    return ok;
}
#pragma optimize("y", on)

#pragma optimize("y", on)

u32 __stdcall func_001DDAEE(u32 id, int flag)
{
    char buf[0x104];
    S_IoStatusBlock iosb;
    S_AnsiString str;
    S_ObjectAttributes oa;
    int status;

    func_001EA4E1(buf, D_0028FAC0, D_0028FA4C, id >> 16, id);
    _imp__RtlInitAnsiString(&str, buf);
    oa.rootDirectory = 0;
    oa.attributes = 0x40;
    oa.objectName = &str;
    status = _imp__NtCreateFile(&id, 0x80100080, &oa, &iosb, 0, 0, 1, 1, (flag ? 8 : 0x20) | 0x40);
    if (status < 0) {
        func_001DD659(status);
        id = -1;
    }
    return id;
}

void __stdcall func_001DD62B(unsigned long code);
#pragma optimize("y", off)
void *__stdcall func_001DDB7E(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 lo;
    u32 hi;
    void *p;

    if (a1 != 0xffffffff) {
        a2 = 0;
        lo = a1;
        hi = a0 + a1 - 1;
    } else {
        lo = 0;
        hi = 0xffffffff;
    }
    p = _imp__MmAllocateContiguousMemoryEx(a0, lo, hi, a2, a3);
    if (p == 0) {
        func_001DD62B(8UL);
    }
    return p;
}
#pragma optimize("y", on)

void *__stdcall func_001DDBC7(int attrs, int manualReset, int initial, char *name)
{
    S_ObjectAttributes oa;
    S_AnsiString str;
    int status;

    status = _imp__NtCreateEvent((void **)&name, name ? func_001DF546(&oa, &str, name) : 0, manualReset == 0, initial);
    if (status >= 0) {
        if (status == 0x40000000) {
            func_001DD62B(0xb7);
        } else {
            func_001DD62B(0);
        }
        return name;
    } else {
        func_001DD659(status);
        return 0;
    }
}

int __stdcall func_001DDC28(void *a0) {
    int result = _imp__NtSetEvent(a0, 0);
    if (result >= 0) {
        return 1;
    } else {
        func_001DD659(result);
        return 0;
    }
}

void *__stdcall func_001DDC48(int attrs, int initialOwner, char *name)
{
    S_ObjectAttributes oa;
    S_AnsiString str;
    int status;

    status = _imp__NtCreateMutant((void **)&name, name ? func_001DF546(&oa, &str, name) : 0, initialOwner);
    if (status >= 0) {
        if (status == 0x40000000) {
            func_001DD62B(0xb7);
        } else {
            func_001DD62B(0);
        }
        return name;
    } else {
        func_001DD659(status);
        return 0;
    }
}

int __stdcall func_001DDCA0(void *a0) {
    int result = _imp__NtSetEvent(a0, 0);
    if (result >= 0) {
        return 1;
    } else {
        func_001DD659(result);
        return 0;
    }
}

int __stdcall func_001DDCC0(void *handle, int ms, int alertable)
{
    u32 timeout[2];
    void *p = func_001DF56E(timeout, ms);
    int status;

    do {
        status = _imp__NtWaitForSingleObjectEx(handle, 1, alertable, p);
        if (status < 0) {
            func_001DD659(status);
            return -1;
        }
    } while (alertable != 0 && status == 0x101);
    return status;
}

#pragma optimize("y", off)
int __stdcall func_001DDD04(u32 nCount, void **lpHandles, int bWaitAll, u32 dwMilliseconds, int bAlertable)
{
    void *__stdcall func_001DF56E(void *timeOut, u32 ms);
    void *handles[64];
    __int64 timeOut;
    void *pTimeOut;
    int status;

    if (nCount > 64) {
        func_001DD659(0xc000000d);
        return -1;
    }
    memcpy(handles, lpHandles, nCount * sizeof(void *));
    pTimeOut = func_001DF56E(&timeOut, dwMilliseconds);
    do {
        status = _imp__NtWaitForMultipleObjectsEx((char)nCount, handles, bWaitAll == 0, 1,
                                                  bAlertable, pTimeOut);
        if (status < 0) {
            func_001DD659(status);
            return -1;
        }
    } while (bAlertable != 0 && status == 0x101);
    return status;
}