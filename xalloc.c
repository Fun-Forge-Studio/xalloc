#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#define XCAPACITY 640000
#define XALLOCED_CAPACITY 1024
#define XFREED_CAPACITY 1024

typedef struct {
    void* start;
    size_t size;
} XChunk;

typedef struct {
    size_t count;
    XChunk chunks[XALLOCED_CAPACITY];
} ChunkList;

char x[XCAPACITY] = {0};
size_t xsize = 0;

ChunkList alloced_chunks = {0};
ChunkList freed_chunks = {0};

void chunk_list_dump(const ChunkList* list) {
    printf("Chunks (%zn):\n", list->count);
    for(size_t i = 0; i < list->count; ++i) {
        
    }
}

int chunk_list_find(const ChunkList* list, void* ptr) {
    assert(false && "chunk_list_find is not implemented");
    return -1;
}

void chunk_list_insert(ChunkList* list, void* ptr, size_t size){
    assert(false && "chunk_list_insert is not implemented");
}

void chunk_list_remove(ChunkList* list, size_t index) {
    assert(false && "chunk_list_remove is not implemented");
}

void* xalloc(size_t size) {

    if(size > 0) {
        assert(xsize + size <= XCAPACITY);
        void* ptr = x + xsize;
        xsize += size;
        chunk_list_insert(&alloced_chunks, ptr, size);
        return ptr;
    } else {
        return NULL;
    }
}

void xfree(void* ptr) {
    for(size_t i = 0; i < x_alloced_size; ++i) {
        if(x_alloced[i].start == ptr) {

        }
    }
    (void) ptr;
    assert(false && "xfree is not implemented");
}

void xcollect() {
    assert(false && "xcollect is not implemented");
}
