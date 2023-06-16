#include <stdio.h>
#include <stdlib.h>

int *make_copy(int *array, int length);

int main(void) {
  int a[] = {1,2,3,4,5};

  int *a_copy = make_copy(a, 5);

  for (int i = 0; i < 5; i++) {
    printf("a_copy[%d] = %d\n", i, a_copy[i]);
  }

  free(a_copy);

  return 0;
}

int *make_copy(int *array, int length) {
  int *new_array = malloc(sizeof(int) * length);

  for (int i = 0; i < length; i++) {
    new_array[i] = array[i];
  }
  return new_array;
}