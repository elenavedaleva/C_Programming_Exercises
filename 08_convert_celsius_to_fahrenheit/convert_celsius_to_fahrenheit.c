#include <stdio.h>

// Converting Cilsius to Fahrenheits:
// Multiply by 1.8 and add 32

int main(void) {
  double start = 0;
  double end = 0;
  double step = 0;

  printf("Enter start C temp: ");
  scanf("%lf", &start);

  printf("Enter end C temp: ");
  scanf("%lf", &end);

  printf("Enter step value: ");
  scanf("%lf", &step);

  printf("\n");
  printf("C        F\n");
  printf("_______________\n");
  for (double C = start; C <= end; C += step) {
    double F = (C * 1.8) + 32;
    printf("%-8.2lf %-8.2lf\n", C, F);
  }

  return 0;
}