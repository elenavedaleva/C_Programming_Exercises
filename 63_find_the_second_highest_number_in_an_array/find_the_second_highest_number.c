#include <stdio.h>
#include <stdlib.h>

int second_highest(int *a, int len);

int main(void) {
  int a[] = {1,2,3,4,5,6,7,8,9};

  int second_max = second_highest(a, 9);
  printf("Second highest: %d\n", second_max);

  return 0;
}

int second_highest(int *a, int len) {
  int max1;
  int max2;
  if (len < 2) exit(1);
  if (a[0] > a[1]) {
    max1 = a[0];
    max2 = a[1];
  } else {
    max1 = a[1];
    max2 = a[0];    
  }
  for (int i = 2; i < len; i++) {
    if (a[i] > max1) {
      max2 = max1;
      max1 = a[i];
    } else if (a[i] > max2) max2 = a[i];
  }
  return max2;
}