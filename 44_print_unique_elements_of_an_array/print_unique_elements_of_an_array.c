#include <stdio.h>
#include <stdbool.h>

void print_unique(int *a, int len);

int main(void) {
  int a[] = {1,4,3,5,5,6,3,7,8,10,4};

  print_unique(a, 11);

  return 0;
}

void print_unique(int *a, int len) {
  for (int i = 0; i < len; i++) {
    bool is_unique = true;
    for (int j = 0; j < len; j++) {
      if (a[i] == a[j] && i != j) {
        is_unique = false;
        break;
      }
    }
    if (is_unique) {
      printf("%d  ", a[i]);
    }
  }
}
