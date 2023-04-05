#include <stdlib.h>
//Array to store size of array, to insert into hashtable
typedef struct {
  int *array;
  int used;
  int size;
} Array;

void initArray(Array *a, int initialSize);
void insertArray(Array *a, int element);
void freeArray(Array *a);