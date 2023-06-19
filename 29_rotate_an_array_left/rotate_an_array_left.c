#include <stdio.h>

void rotate_left_once(int *array, int length);
void rotate_left(int *array, int length, int n);
void print_array(int *array, int length);

int main(void) {
  int array[] = {1,2,3,4,5,6};

  print_array(array, 6);
  rotate_left(array, 6, 3);
  print_array(array, 6);

  return 0;
}

void rotate_left_once(int *array, int length) {
  int tmp = array[0];
  for (int i = 0; i < (length - 1); i++) {
    array[i] = array[i + 1];
  }
  array[length - 1] = tmp;
}

void rotate_left(int *array, int length, int n) {
  for (int i = 0; i < n; i++) {
    rotate_left_once(array, length);
  }
}

void print_array(int *array, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}