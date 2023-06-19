#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int *array, int length);
void print_array(int *array, int length);

int main(void) {
  int a[] = {3,1,2,6,9,0,4,7,8,5};

  print_array(a, 10);
  bubble_sort(a, 10);
  print_array(a, 10);

  return 0;
}

void bubble_sort(int *array, int length) {
  for (int i = 0; i < length; i++) {
    bool is_sorted = true;
    for (int j = 0; j < (length - i - 1); j++) {
      if (array[j] > array[j + 1]) {
        int tmp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = tmp;
        is_sorted = false;
      }
    }
    if (is_sorted) break;
  }
}

void print_array(int *array, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
