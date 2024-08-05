#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#define XCAPACITY 640000
#define XALLOCED_CAPACITY 1024

typedef struct {
    void* start;
    size_t size;
} XChunk;

char x[XCAPACITY] = {0};
size_t xsize = 0;

XChunk x_alloced[XALLOCED_CAPACITY] ={0};
size_t x_alloced_size = 0;

void* xalloc(size_t size) {

    assert(xsize + size <= XCAPACITY);
    void* result = x + xsize;
    xsize += size;

    const XChunk chunk = {
        .start = result,
        .size = size,
    };
    assert(x_alloced_size < XALLOCED_CAPACITY);
    x_alloced[x_alloced_size++] = chunk;
    return result;
}

void x_dump_alloced_chunks(void) {
    printf("Allocated Chunks (%zu):\n", x_alloced_size);
    for(size_t i = 0; i < x_alloced_size; ++i) {
        printf("start: %p, size: %zu\n", x_alloced[i].start, x_alloced[i].size);
    }
}

void xfree(void* ptr) {
    (void) ptr;
    assert(false && "xfree is not implemented");
}

void xcollect() {
    assert(false && "xcollect is not implemented");
}