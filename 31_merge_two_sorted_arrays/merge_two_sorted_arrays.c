#include <stdio.h>
#include <stdlib.h>

int *merge(int *a1, int *a2, int l1, int l2);

int main(void) {
  int a1[] = {1,3,5,7,9};
  int a2[] = {2,4,5,6,8};

  int *result = merge(a1, a2, 5, 5);

  for (int i = 0; i < 10; i++) {
    printf("%d  ", result[i]);
  }
  printf("\n");

  free(result);

  return 0;
}

int *merge(int *a1, int *a2, int l1, int l2) {
  int l = l1 + l2;
  int *r = malloc(sizeof(int) * l);

  int i = 0;
  int j = 0;
  int k = 0;
  while (i < l1 && j < l2) {
    if (a1[i] <= a2[j]) {
      r[k++] = a1[i++];
    } else {
      r[k++] = a2[j++];
    }
  }
  while (i < l1) {
    r[k++] = a1[i++];
  }
  while (j < l2) {
    r[k++] = a2[j++];
  }
  return r;
}