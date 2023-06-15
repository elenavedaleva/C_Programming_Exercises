#include <stdio.h>

int occurrences(int *array, int length, int to_find);

int main(void) {
  int myarray[] = {4,9,7,4,3,6,4,7,8,9,7};
  int to_find = 7;

  int count = occurrences(myarray, 11, to_find);
  printf("%d occurrence(s) of %d in an array\n", count, to_find);

  return 0;
}

int occurrences(int *array, int length, int to_find) {
  int count = 0;

  for (int i = 0; i < length; i++) {
    if (array[i] == to_find) count++;
  }
  return count;
}