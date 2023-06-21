#include <stdio.h>
#include <math.h>

double stdev(double *a, int len);

int main(void) {
  double a[] = {9.2, 1.5, 6.7, 8.2, 5.5, 7.1};
  printf("Standard deviation: %lf\n", stdev(a, 6));

  return 0;
}

double stdev(double *a, int len) {
  double mean = 0;
  double total = 0;
  for (int i = 0; i < len; i++) total += a[i];
  mean = total / len;

  double sum = 0;
  for (int i = 0; i < len; i++) {
    sum += pow(a[i] - mean, 2);
  }
  return sqrt(sum / len);
}