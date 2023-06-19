#include <stdio.h>

int sum_nums(int n);

int main(void) {
  int sum = sum_nums(5); 

  printf("sum: %d\n", sum);

  return 0;
}

int sum_nums(int n) {
  if (n > 0) {
    return sum_nums(n - 1) + n;
  } else return 0;
}