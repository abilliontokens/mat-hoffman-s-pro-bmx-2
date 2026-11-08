/* 9 functions from 0x001DF7FA to 0x001E06BC, found by Ghidra. */
#include "common.h"

struct S_HeapRoot {
    unsigned short firstSize;   /* 0x00 */
    char pad02[0x12];
    unsigned int flags;         /* 0x14 */
    char pad18[8];
    unsigned int reserveSize;   /* 0x20 */
    unsigned int commitSize;    /* 0x24 */
    char pad28[8];
    int freeTotal;              /* 0x30, granules free */
    char pad34[0x2c];
    unsigned char *bucket[0x40];    /* 0x60, indexed by block bucket */
    unsigned char freeMap[0x10];    /* 0x160, bit per small free-list size */
    char pad170[0x584 - 0x170];
    long (__stdcall *commit)(S_HeapRoot *root, unsigned int *base, unsigned int *size); /* 0x584, optional */
};

/* free-region list node of the kernel heap (address, size, next) */
struct S_FreeNode {
    S_FreeNode *next;
    unsigned int addr;
    unsigned int size;
};

/* chunk header inside a heap block (16-byte granules) */
struct S_HeapLink {
    S_HeapLink *flink;
    S_HeapLink *blink;
};
struct S_HeapEntry {
    unsigned short size;
    unsigned short prevSize;
    unsigned char bucket;
    unsigned char flags;
    char pad06[2];
    S_HeapLink link;            /* 0x08, free-list links */
};

/* kernel heap block header (16-byte granules) */
struct S_HeapBlock {
    unsigned short size;        /* 0x00, in granules */
    unsigned short prevSize;    /* 0x02 */
    unsigned char bucket;       /* 0x04 */
    unsigned char flags;        /* 0x05 */
    char pad06[0x0a];
    unsigned int tag;           /* 0x10 */
    int f14;                    /* 0x14 */
    S_HeapRoot *root;           /* 0x18 */
    unsigned int f1c;           /* 0x1c */
    unsigned char *base;        /* 0x20 */
    int pages;                  /* 0x24 */
    unsigned char *tail;        /* 0x28 */
    unsigned char *limit;       /* 0x2c */
    int spare;                  /* 0x30 */
    int count;                  /* 0x34, free nodes */
    S_FreeNode *head;           /* 0x38 */
    char pad3c[4];
    unsigned char *next;        /* 0x40 */
};

extern "C" __declspec(dllimport) long __stdcall NtAllocateVirtualMemory(void *baseAddress, unsigned int zeroBits, unsigned int *size, unsigned int allocType, unsigned int protect);
extern "C" long (__stdcall *__imp__NtAllocateVirtualMemory)(void *baseAddress, unsigned int zeroBits, unsigned int *size, unsigned int allocType, unsigned int protect);
extern "C" long (__stdcall *__imp__NtFreeVirtualMemory)(void **baseAddress, unsigned int *size, unsigned int freeType);
unsigned char *__stdcall func_001DF7FA(S_HeapRoot *root, S_HeapBlock *blk, unsigned int *size, int a3);
typedef char HeapFlag;
unsigned char *__stdcall func_001DF985(S_HeapRoot *root, unsigned char *entry, unsigned int *size, HeapFlag a3);
extern char D_0000FF00;
extern char D_0000FF01;
extern "C" unsigned long (__stdcall *_imp__RtlCompareMemoryUlong)(void *source, unsigned long length, unsigned long pattern);

#pragma optimize("sy", on)
#pragma optimize("y", off)
static __forceinline void FreeUnlink_001DF985(S_HeapRoot *root, S_HeapEntry *e)
{
    S_HeapLink *flink = e->link.flink;
    S_HeapLink *blink = e->link.blink;
    unsigned int len;

    blink->flink = flink;
    flink->blink = blink;
    if (flink == blink && e->size < 0x80) {
        root->freeMap[e->size >> 3] ^= (unsigned char)(1 << (e->size & 7));
    }
    if (e->flags & 4) {
        len = e->size * 16 - 0x18;
        if ((e->flags & 2) && len > 4) {
            len -= 4;
        }
        _imp__RtlCompareMemoryUlong((unsigned char *)e + 0x18, len, 0xfeeefeee);
    }
}
static __forceinline void FreeInsert_001DFD40(S_HeapRoot *root, S_HeapEntry *e, unsigned int n)
{
    S_HeapLink *list;
    S_HeapLink *blink;

    if ((unsigned short)n < 0x80) {
        list = (S_HeapLink *)((unsigned char *)root + 0x180 + (unsigned short)n * 8);
        if (list->flink == list) {
            root->freeMap[e->size >> 3] |= (unsigned char)(1 << (e->size & 7));
        }
    } else {
        S_HeapLink *head = (S_HeapLink *)((unsigned char *)root + 0x180);
        for (list = head->flink; head != list; list = list->flink) {
            if ((unsigned short)n <= ((S_HeapEntry *)((unsigned char *)list - 8))->size) {
                break;
            }
        }
    }
    blink = list->blink;
    e->link.flink = list;
    e->link.blink = blink;
    blink->flink = &e->link;
    list->blink = &e->link;
}
#pragma optimize("sy", on)
extern "C" void *__cdecl memset(void *, int, unsigned int);
void __stdcall func_001DF746(S_HeapBlock *blk, S_FreeNode *node);
void __stdcall func_001DF767(S_HeapBlock *blk, unsigned int addr, unsigned int size);
void __stdcall func_001DFC2A(S_HeapRoot *root, unsigned char *blk, unsigned int granules);

#pragma optimize("sy", on)
#pragma optimize("y", off)
unsigned char *__stdcall func_001DF7FA(S_HeapRoot *root, S_HeapBlock *blk, unsigned int *size, int a3)
{
    S_FreeNode *prev = 0;
    S_FreeNode **link = &blk->head;
    S_FreeNode *run;
    S_FreeNode *n;
    S_HeapEntry *cur;
    S_HeapEntry *ent;
    S_HeapEntry *save;
    unsigned int addr;
    long status;

    for (run = *link; run != 0; run = run->next) {
        if (run->size >= *size && (a3 == 0 || run->addr == (unsigned int)a3)) goto found;
        prev = run;
        link = &run->next;
    }
    return 0;
found:
    {
            addr = run->addr;
            if (root->commit != 0) {
                status = root->commit(root, &addr, size);
            } else {
                status = __imp__NtAllocateVirtualMemory(&addr, 0, size, 0x1000, 4);
            }
            if (status < 0) {
                return 0;
            }
            blk->spare -= *size >> 12;
            if (blk->f1c == run->size) {
                blk->f1c = 0;
            }
            cur = (S_HeapEntry *)blk->next;
            ent = (S_HeapEntry *)addr;
            if ((cur->flags & 0x10) && (unsigned char *)cur + cur->size * 16 == (unsigned char *)run->addr) {
                goto merge;
            }
            if (prev == 0) {
                cur = (S_HeapEntry *)blk->tail;
            } else {
                cur = (S_HeapEntry *)(prev->size + (*(S_FreeNode *volatile *)&prev)->addr);
            }
            if (!(cur->flags & 0x10)) {
                do {
                    save = cur;
                    cur = (S_HeapEntry *)((unsigned char *)cur + cur->size * 16);
                    if ((unsigned char *)cur >= blk->limit || cur->size == 0) {
                        if ((unsigned int)cur != addr) {
                            return 0;
                        }
                        cur = save;
                        break;
                    }
                } while (!(cur->flags & 0x10));
            }
        merge:
            cur->flags &= ~0x10;
            run->addr += *size;
            run->size -= *size;
            if (run->size == 0) {
                if (run->addr == (unsigned int)blk->limit) {
                    ent->flags = 0x10;
                    blk->next = (unsigned char *)ent;
                } else {
                    ent->flags = 0;
                    blk->next = blk->tail;
                }
                *link = run->next;
                func_001DF746(blk, run);
                blk->count--;
            } else {
                ent->flags = 0x10;
                blk->next = (unsigned char *)ent;
            }
            ent->bucket = cur->bucket;
            ent->size = (unsigned short)(*size >> 4);
            ent->prevSize = cur->size;
            if (!(ent->flags & 0x10)) {
                *(unsigned short *)((unsigned char *)ent + ent->size * 16 + 2) = ent->size;
            }
            if (blk->f1c == 0) {
                for (n = blk->head; n != 0; n = n->next) {
                    if (n->size >= blk->f1c) {
                        blk->f1c = n->size;
                    }
                }
            }
            return (unsigned char *)ent;
        }
}

#pragma optimize("sy", on)
#pragma optimize("y", off)
unsigned char *__stdcall func_001DF985(S_HeapRoot *root, unsigned char *entry, unsigned int *size, char a3)
{
    S_HeapEntry *cur = (S_HeapEntry *)entry;
    S_HeapEntry *prev = (S_HeapEntry *)((unsigned char *)cur - cur->prevSize * 16);
    S_HeapEntry *next;

    if (prev != cur && !(prev->flags & 1) && prev->size + *size <= (unsigned int)&D_0000FF00) {
        if (a3) {
            FreeUnlink_001DF985(root, cur);
            root->freeTotal -= cur->size;
            a3 &= 0;
        }
        FreeUnlink_001DF985(root, prev);
        prev->flags = cur->flags & 0x10;
        if (prev->flags & 0x10) {
            ((S_HeapBlock *)root->bucket[prev->bucket])->next = (unsigned char *)prev;
        }
        *size += prev->size;
        root->freeTotal -= prev->size;
        cur = prev;
        cur->size = (unsigned short)*size;
        if (!(cur->flags & 0x10)) {
            *(unsigned short *)((unsigned char *)cur + *size * 16 + 2) = (unsigned short)*size;
        }
    }
    if (!(cur->flags & 0x10)) {
        next = (S_HeapEntry *)((unsigned char *)cur + *size * 16);
        if (!(next->flags & 1) && next->size + *size <= (unsigned int)&D_0000FF00) {
            if (a3) {
                FreeUnlink_001DF985(root, cur);
                root->freeTotal -= cur->size;
            }
            cur->flags = next->flags & 0x10;
            if (cur->flags & 0x10) {
                ((S_HeapBlock *)root->bucket[cur->bucket])->next = (unsigned char *)cur;
            }
            FreeUnlink_001DF985(root, next);
            *size += next->size;
            root->freeTotal -= next->size;
            cur->size = (unsigned short)*size;
            if (!(cur->flags & 0x10)) {
                *(unsigned short *)((unsigned char *)cur + *size * 16 + 2) = (unsigned short)*size;
            }
        }
    }
    return (unsigned char *)cur;
}

#pragma optimize("sy", on)
#pragma optimize("y", off)
void __stdcall func_001DFC2A(S_HeapRoot *root, unsigned char *blk, unsigned int n)
{
    S_HeapEntry *e = (S_HeapEntry *)blk;
    unsigned char bucket = e->bucket;
    unsigned short prev = e->prevSize;
    S_HeapBlock *pool = (S_HeapBlock *)root->bucket[bucket];
    unsigned char flags = e->flags;
    unsigned int sz;

    root->freeTotal += n;
    while (n != 0) {
        if (n > (unsigned int)&D_0000FF00) {
            sz = (unsigned int)&D_0000FF00;
            if (n == (unsigned int)&D_0000FF01) {
                sz -= 0x10;
            }
            e->flags = 0;
        } else {
            sz = n;
            e->flags = flags;
        }
        e->flags &= 0xf8;
        e->prevSize = prev;
        e->bucket = bucket;
        e->size = (unsigned short)sz;
        FreeInsert_001DFD40(root, e, sz);
        n -= (unsigned short)sz;
        e = (S_HeapEntry *)((unsigned char *)e + (unsigned short)sz * 16);
        prev = (unsigned short)sz;
        if ((unsigned char *)e >= pool->limit) {
            return;
        }
    }
    if (!(flags & 0x10)) {
        e->prevSize = prev;
    }
}

#pragma optimize("sy", on)

unsigned char *__stdcall func_001DFD24(unsigned char *p)
{
    unsigned char *r;
    if (p[5] & 8) {
        r = p - 0x18;
    } else {
        r = p + *(unsigned short *)p * 16 - 0x10;
    }
    return r;
}

unsigned char __stdcall func_001DFD40(S_HeapRoot *root, unsigned int flags, S_HeapEntry *entry, unsigned int size, unsigned int index)
{
    unsigned char eflags;
    unsigned char fflags;
    unsigned int oldSize;
    unsigned int n;
    S_HeapEntry *next;
    S_HeapEntry *split;

    if (index > *(unsigned int *)((unsigned char *)root + 0x1c)) {
        return 0;
    }
    next = (S_HeapEntry *)((unsigned char *)entry + entry->size * 16);
    eflags = entry->flags;
    if (eflags & 0x10) {
        n = ((index - entry->size) * 16 + 0xfff) & 0xfffff000;
        split = (S_HeapEntry *)func_001DF7FA(root, (S_HeapBlock *)root->bucket[entry->bucket], &n, (int)next);
        if (split == 0) {
            return 0;
        }
        n >>= 4;
        split = (S_HeapEntry *)func_001DF985(root, (unsigned char *)split, &n, 0);
        fflags = split->flags;
        if (entry->size + n < index) {
            func_001DFC2A(root, (unsigned char *)split, n);
            root->freeTotal += n;
            return 0;
        }
        n = entry->size + n;
    } else {
        fflags = next->flags;
        if (fflags & 1) {
            return 0;
        }
        n = next->size + entry->size;
        if (n < index) {
            return 0;
        }
        FreeUnlink_001DF985(root, next);
        root->freeTotal -= next->size;
    }
    oldSize = entry->size * 16 - *((unsigned char *)entry + 6);
    n -= index;
    if (n <= 2) {
        index += n;
        n = 0;
    }
    if (eflags & 2) {
        *(S_HeapEntry *)((unsigned char *)entry + index * 16 - 0x10) =
            *(S_HeapEntry *)((unsigned char *)entry + *(unsigned short *)entry * 16 - 0x10);
    }
    entry->size = (unsigned short)index;
    *((unsigned char *)entry + 6) = (unsigned char)(index * 16 - size);
    if (n == 0) {
        entry->flags |= fflags & 0x10;
        if (!(fflags & 0x10)) {
            *(unsigned short *)((unsigned char *)entry + (unsigned short)index * 16 + 2) = (unsigned short)index;
        } else {
            ((S_HeapBlock *)root->bucket[entry->bucket])->next = (unsigned char *)entry;
        }
    } else {
        split = (S_HeapEntry *)((unsigned char *)entry + index * 16);
        split->prevSize = (unsigned short)index;
        split->bucket = entry->bucket;
        if (fflags & 0x10) {
            ((S_HeapBlock *)root->bucket[split->bucket])->next = (unsigned char *)split;
            split->flags = fflags;
            split->size = (unsigned short)n;
            split->flags = fflags & 0xf8;
            FreeInsert_001DFD40(root, split, n);
            root->freeTotal += n;
        } else {
            next = (S_HeapEntry *)((unsigned char *)split + n * 16);
            if (next->flags & 1) {
                split->flags = fflags & 0xef;
                split->size = (unsigned short)n;
                *(unsigned short *)((unsigned char *)split + n * 16 + 2) = (unsigned short)n;
                split->flags &= 0xf8;
                FreeInsert_001DFD40(root, split, n);
                root->freeTotal += n;
            } else {
                fflags = next->flags;
                FreeUnlink_001DF985(root, next);
                root->freeTotal -= next->size;
                n += next->size;
                split->flags = fflags;
                if (n <= (unsigned int)&D_0000FF00) {
                    split->size = (unsigned short)n;
                    if (!(fflags & 0x10)) {
                        *(unsigned short *)((unsigned char *)split + n * 16 + 2) = (unsigned short)n;
                    } else {
                        ((S_HeapBlock *)root->bucket[split->bucket])->next = (unsigned char *)split;
                    }
                    split->flags &= 0xf8;
                    FreeInsert_001DFD40(root, split, n);
                    root->freeTotal += n;
                } else {
                    func_001DFC2A(root, (unsigned char *)split, n);
                }
            }
        }
    }
    if (flags & 8) {
        if (size > oldSize) {
            memset((unsigned char *)entry + 0x10 + oldSize, 0, size - oldSize);
        }
    }
    entry->flags = ((unsigned char)(flags >> 4) ^ entry->flags) & 0x1f ^ (unsigned char)(flags >> 4);
    return 1;
}

int __stdcall func_001E013E(int a, int b, unsigned char *p)
{
    int r;
    unsigned char flags = p[-0xb];
    if (!(flags & 1)) {
        r = -1;
    } else if (flags & 8) {
        r = *(int *)(p - 0x18) - *(unsigned short *)(p - 0x10);
    } else {
        r = *(unsigned short *)(p - 0x10) * 16 - p[-0xa];
    }
    return r;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
unsigned char __stdcall func_001E016D(S_HeapRoot *root, unsigned int blkAddr, unsigned char bucket, int a3, unsigned char *base, unsigned int start, unsigned int end)
{
    struct { int granules; int pages; } t;
    S_HeapBlock *blk = (S_HeapBlock *)blkAddr;
    int pageSize = 0x1000;
    unsigned short prev;
    int rest;
    unsigned char *tail;
    unsigned int cur;

    *(volatile int *)&t.pages = (int)(end - (unsigned int)base) / pageSize;
    tail = (unsigned char *)((blkAddr + 0x57) & 0xfffffff0);
    cur = start;
    _ReadWriteBarrier();
    if ((unsigned char *)root == base) {
        prev = root->firstSize;
    } else {
        prev = 0;
    }
    *(volatile int *)&t.granules = (int)((unsigned int)tail - (unsigned int)blk) >> 4;
    if ((unsigned int)tail + 0x10 >= cur) {
        if ((unsigned int)tail + 0x10 >= end) {
            return 0;
        }
        blkAddr = (unsigned int)tail - cur + 0x10;
        if (__imp__NtAllocateVirtualMemory(&start, 0, &blkAddr, pageSize, 4) < 0) {
            return 0;
        }
        cur = start += blkAddr;
    }
    rest = (int)(end - cur) / pageSize;
    blk->prevSize = prev;
    blk->size = (unsigned short)t.granules;
    blk->f14 = a3;
    blk->root = root;
    blk->base = base;
    blk->limit = base + t.pages * 0x1000;
    blk->flags = 1;
    blk->bucket = bucket;
    blk->tag = 0xffeeffee;
    blk->tail = tail;
    blk->pages = t.pages;
    blk->spare = rest;
    if (rest != 0) {
        func_001DF767(blk, cur, rest << 12);
    }
    root->bucket[bucket] = (unsigned char *)blk;
    tail[5] = 0x10;
    blk->next = tail;
    *(unsigned short *)(tail + 2) = blk->size;
    tail[4] = bucket;
    func_001DFC2A(root, tail, (int)(cur - (unsigned int)tail) >> 4);
    return 1;
}
unsigned char *__stdcall func_001E028B(S_HeapRoot *heap, unsigned int size)
{
    unsigned int pages = (size + 0xfff) >> 12;
    unsigned int bytes = pages << 12;
    unsigned char firstFree = 0x40;
    unsigned char i;
    S_HeapBlock *cur;
    unsigned int allocSize;
    unsigned int commit;
    unsigned int total;
    long status;
    unsigned char *r;

    for (i = 0; i < 0x40; i++) {
        cur = (S_HeapBlock *)heap->bucket[i];
        if (cur != 0) {
            if (pages <= (unsigned int)cur->spare && bytes <= cur->f1c) {
                r = func_001DF7FA(heap, cur, &bytes, 0);
                if (r != 0) {
                    bytes >>= 4;
                    r = func_001DF985(heap, r, &bytes, 0);
                    func_001DFC2A(heap, r, bytes);
                    return r;
                }
            }
        } else {
            if (firstFree == 0x40) {
                firstFree = i;
            }
        }
    }
    if (firstFree == 0x40 || !(heap->flags & 2)) {
        return 0;
    }
    cur = 0;
    total = size + 0x1000;
    if (total > heap->reserveSize) {
        size = total;
        allocSize = total;
    } else {
        size = total;
        allocSize = heap->reserveSize;
    }
    status = NtAllocateVirtualMemory(&cur, 0, &allocSize, 0x2000, 4);
    while (status < 0) {
        if (allocSize == size) {
            break;
        }
        allocSize >>= 1;
        if (allocSize < size) {
            allocSize = size;
        }
        status = NtAllocateVirtualMemory(&cur, 0, &allocSize, 0x2000, 4);
    }
    if (status < 0) {
        return 0;
    }
    heap->reserveSize += allocSize;
    commit = size;
    if (size <= heap->commitSize) {
        commit = heap->commitSize;
    }
    status = NtAllocateVirtualMemory(&cur, 0, &commit, 0x1000, 4);
    if (status >= 0) {
        if (!func_001E016D(heap, (unsigned int)cur, firstFree, 0, (unsigned char *)cur, (unsigned int)cur + commit, (unsigned int)cur + allocSize)) {
            status = 0xc0000017;
        }
        if (status >= 0) {
            return cur->tail;
        }
    }
    __imp__NtFreeVirtualMemory((void **)&cur, &allocSize, 0x8000);
    return 0;
}

#pragma optimize("y", off)
S_FreeNode *__stdcall func_001DF626(S_HeapBlock *blk);
#pragma optimize("y", off)
void __stdcall func_001E0412(S_HeapRoot *heap, S_HeapEntry *entry, unsigned int size)
{
    if (heap->commit) { func_001DFC2A(heap, (unsigned char *)entry, size); return; }
    S_HeapEntry *previous = 0;
    S_HeapBlock *block = (S_HeapBlock *)heap->bucket[entry->bucket];
    unsigned int base = ((unsigned int)entry + 0xfff) & 0xfffff000;
    unsigned short first = (int)(base - (unsigned int)entry) >> 4;
    if (first == 1) {
        base += 0x1000;
        first = 0x101;
    } else if (entry->prevSize && base == (unsigned int)entry) {
        previous = entry - entry->prevSize;
    }
    S_HeapEntry *end = entry + size;
    S_HeapEntry *following = 0;
    unsigned int bytes = (unsigned int)end & 0xfffff000;
    unsigned short last = (int)((unsigned int)end - bytes) >> 4;
    if (last == 1) {
        bytes -= 0x1000;
        last = 0x101;
    } else if (last == 0 && !(entry->flags & 0x10)) {
        following = end;
    }
    unsigned int lastCount = last;
    unsigned int lastBytes = lastCount << 4;
    end = (S_HeapEntry *)((unsigned char *)end - lastBytes);
    if (bytes > base) bytes -= base; else bytes = 0;
    S_FreeNode *node;
    long status;
    if (bytes == 0 || (node = func_001DF626(block)) == 0) goto fallback;
    status = __imp__NtFreeVirtualMemory((void **)&base, &bytes, 0x4000);
    func_001DF746(block, node);
    if (status < 0) goto fallback;
    func_001DF767(block, base, bytes);
    block->spare += bytes >> 12;
    if (first) {
        entry->flags = 0x10;
        entry->size = first;
        heap->freeTotal += first;
        block->next = (unsigned char *)entry;
        entry->flags &= 0xf8;
        S_HeapLink *list;
        if (first < 0x80) {
            list = (S_HeapLink *)((unsigned char *)heap + 0x180 + first * 8);
            if (list->flink == list)
                heap->freeMap[entry->size >> 3] |= (unsigned char)(1 << (entry->size & 7));
        } else {
            S_HeapLink *head = (S_HeapLink *)((unsigned char *)heap + 0x180);
            for (list = head->flink; list != head; list = list->flink) {
                if (first <= ((S_HeapEntry *)((unsigned char *)list - 8))->size) break;
            }
        }
        S_HeapLink *blink = list->blink;
        entry->link.flink = list;
        entry->link.blink = blink;
        blink->flink = &entry->link;
        list->blink = &entry->link;
    } else if (previous) {
        previous->flags |= 0x10;
        block->next = (unsigned char *)previous;
    } else if ((unsigned int)block->next >= base && (unsigned int)block->next < base + bytes) {
        block->next = block->tail;
    }
    if (last) {
        end->prevSize = 0;
        end->bucket = block->bucket;
        end->flags = 0;
        end->size = last;
        *(unsigned short *)((unsigned char *)end + lastBytes + 2) = last;
        end->flags &= 0xf8;
        S_HeapLink *list;
        if (last < 0x80) {
            list = (S_HeapLink *)((unsigned char *)heap + 0x180 + lastCount * 8);
            if (list->flink == list)
                heap->freeMap[end->size >> 3] |= (unsigned char)(1 << (end->size & 7));
        } else {
            S_HeapLink *head = (S_HeapLink *)((unsigned char *)heap + 0x180);
            for (list = head->flink; list != head; list = list->flink) {
                if (last <= ((S_HeapEntry *)((unsigned char *)list - 8))->size) break;
            }
        }
        S_HeapLink *blink = list->blink;
        end->link.flink = list;
        end->link.blink = blink;
        blink->flink = &end->link;
        list->blink = &end->link;
        heap->freeTotal += lastCount;
    } else if (following) {
        following->prevSize = 0;
    }
    return;
fallback:
    func_001DFC2A(heap, (unsigned char *)entry, size);
}
#pragma optimize("", on)

