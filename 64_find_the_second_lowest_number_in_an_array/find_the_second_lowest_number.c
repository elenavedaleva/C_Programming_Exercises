#include <stdio.h>
#include <stdlib.h>

int second_lowest(int *a, int len);

int main(void) {
  int a[] = {20,4,6,3,5,8,9,7,10,15};

  int second_min = second_lowest(a, 10);
  printf("Second lowest: %d\n", second_min);

  return 0;
}

int second_lowest(int *a, int len) {
  int min1;
  int min2;
  if (len < 2) exit(1);
  if (a[0] < a[1]) {
    min1 = a[0];
    min2 = a[1];
  } else {
    min1 = a[1];
    min2 = a[0];    
  }
  for (int i = 2; i < len; i++) {
    if (a[i] < min1) {
      min2 = min1;
      min1 = a[i];
    } else if (a[i] < min2 && a[i] > min1) min2 = a[i];
  }
  return min2;
}