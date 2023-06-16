#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main(void) {
  int length = 0;

  do {
    printf("Enter sequence length: ");
    scanf("%d", &length);
    if (length < 3) {
      printf("Length must be >= 3\n");
    }
  } while (length < 3);

  for (int i = 0; i < length; i++) {
    printf("%d ", fib(i));
  }
  printf("\n");

  return 0;
}

int fib(int n) {
  if (n > 1) return fib(n - 1) + fib(n - 2);
  else if (n == 1) return 1;
  else if (n == 0) return 0;
  else {
    printf("Error: n must be >= 0\n");
    exit(-1); 
  }
}