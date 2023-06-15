#include <stdio.h>

int find_max(int *array, int length);

int main(void) {
  int myarray[] = {4,8,5,10,3,6,11,9};
  int max;

  max = find_max(myarray, 8);
  printf("max: %d\n", max);

  return 0;
}

int find_max(int *array, int length) {
  int max;

  max = array[0];
  for (int i = 1; i < length; i++) {
    if (array[i] > max) max = array[i];
  }
  return max;
}