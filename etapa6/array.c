#include "array.h"


void initArray(Array *a, int initialSize) {
  a->used = 0;
  a->size = initialSize;
}

void insertArray(Array *a, int element) {
    if (a->used == a->size || a->used == 0) {
        a->size *= 2;
        a->array = realloc(a->array, a->size * sizeof(int));
    }
    a->array[a->used++] = element;
}

void freeArray(Array *a) {
    free(a->array);
    a->array = NULL;
    a->used = a->size = 1;
    initArray(a,1);   
}

