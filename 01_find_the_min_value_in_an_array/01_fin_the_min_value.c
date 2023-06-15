#include <stdio.h>

int find_min(int *array, int length) {
  int min;

  min = array[0];
  for (int i = 1; i < length; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

int main(void) {
  int myarray[] = {5,9,10,11,4,6,3,15};
  int min;

  min = find_min(myarray, 8);

  printf("min: %d\n", min);

  return 0;
}
