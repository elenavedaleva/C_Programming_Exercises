#include <stdio.h>

void insertion_sort(int *array, int length);
void print_array(int *array, int length);

int main(void) {
  int a[] = {8,4,9,5,7,6,3,2};

  print_array(a, 8);
  insertion_sort(a, 8);
  print_array(a, 8);

  return 0;
}

void insertion_sort(int *array, int length) {
  for (int i = 1; i < length; i++) {
    int key = array[i];
    int j = i - 1;
    while (j >= 0 && array[j] > key) {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = key;
  }
}

void print_array(int *array, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}