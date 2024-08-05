#include "xalloc.c"

int main() {
    char* root = xalloc(69);
    for(int i = 0; i < 69; ++i) {
        root[i] = i + 'A';
    }

    x_dump_alloced_chunks();

    xfree(root);

    return 0;
}