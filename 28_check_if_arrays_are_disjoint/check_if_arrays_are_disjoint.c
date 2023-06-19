#include <stdio.h>
#include <stdbool.h>

bool is_disjoint(int *array1, int *array2, int len1, int len2);

int main(void) {
  int array1[] = {1,3,5,7,9};
  int array2[] = {2,4,6,8,10};

  if (is_disjoint(array1, array2, 5, 5)) {
    printf("Arrays are disjoint!");
  } else {
    printf("Arrays are not disjoint!");
  }

  return 0;
}


bool is_disjoint(int *array1, int *array2, int len1, int len2) {
  for (int i = 0; i < len1; i++) {
    for (int j = 0; j < len2; j++) 
      if (array1[i] == array2[j]) return false;
  }
  return true;
}