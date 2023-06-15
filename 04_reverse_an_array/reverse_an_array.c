#include <stdio.h>

void print_array(int *array, int length);

void reverse(int *array, int length);

int main(void) {
  int length = 10;
  int myarray[] = {1,2,3,4,5,6,7,8,9, 10};

  print_array(myarray, length);

  reverse(myarray, length);

  print_array(myarray, length);

  return 0;
}

void print_array(int *array, int length) {
  for (int i = 0; i < length; i++) {
    printf("%2d  ", array[i]);
  }
  printf("\n");
}

void reverse(int *array, int length) {
  for (int i = 0; i < (length / 2); i++) {
    int tmp = array[i];
    array[i] = array[(length - 1) - i];
    array[(length - 1) - i] = tmp;
  }
}