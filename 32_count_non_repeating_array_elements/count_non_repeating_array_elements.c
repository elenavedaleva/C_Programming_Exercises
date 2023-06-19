#include <stdio.h>
#include <stdbool.h>

int count_non_repeating_elements(int *array, int length);

int main(void) {
  int array[] = {1,3,5,7,3,5,3,6,6,4,2,9};

  int count = count_non_repeating_elements(array, 12);
  printf("# non-repeating elements: %d\n", count);

  return 0;
}

int count_non_repeating_elements(int *array, int length) {
  int count = 0;
  for (int i = 0; i < length; i++) {
    bool is_non_repeating = true;
    for (int j = 0; j < length; j++) {
      if(i == j) continue;
      if (array[i] == array[j]) {
        is_non_repeating = false;
        break;
      }
    }
    if (is_non_repeating) count++;
  }
  return count;
}