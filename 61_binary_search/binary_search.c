#include <stdio.h>

int binary_search(int *a, int e, int l, int r);

int main(void) {
  int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  int num = 12;

  int index = binary_search(a, num, 0, 12);

  if (index != -1) {
    printf("index of %d: %d\n", num, index);
  } else {
    printf("%d is not in the array\n", num);
  }

  return 0;
}

int binary_search(int *a, int e, int l, int r) {
  int mid = l + (r - l) / 2;

  if (l > r) return -1;

  if (a[mid] == e) return mid;
  else if (a[mid] > e) {
    return binary_search(a, e, l, mid - 1);
  } else {
    return binary_search(a, e, mid + 1, r);
  }
}