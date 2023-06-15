#include <stdio.h>

int sum_array(int *array, int length);

int main(void) {
  int myarray[] = {1,2,5,8,3,9,15,11,4};

  int sum = sum_array(myarray, 9);
  printf("sum: %d\n", sum);

  return 0;
}

int sum_array(int *array, int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += array[i];
  }
  return sum;
}