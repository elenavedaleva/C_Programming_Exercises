#include <stdio.h>

void rotate_right_once(int *array, int length);
void rotate_right(int *array, int length, int n);
void print_array(int *array, int length);

int main(void) {
  int array[] = {1,2,3,4,5,6};

  print_array(array, 6);
  rotate_right(array, 6, 2);
  print_array(array, 6);

  return 0;
}

void rotate_right_once(int *array, int length) {
  int tmp = array[length - 1];
  for (int i = (length - 1); i > 0; i--) {
    array[i] = array[i - 1];
  }
  array[0] = tmp; 
}
void rotate_right(int *array, int length, int n)  {
  for (int i = 0; i < n; i++) {
    rotate_right_once(array, length);
  }
}
void print_array(int *array, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}