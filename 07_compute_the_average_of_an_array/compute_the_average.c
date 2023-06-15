#include <stdio.h>

double sum(double *array, int length);
double average(double *array, int length);

int main(void) {
  double myarray[] = {5.2, 6.3, 9.0, 3.2, 4.5, 7.4};

  double myarray_average = average(myarray, 6);
  printf("average: %.2f\n", myarray_average);

  return 0;
}

double sum(double *array, int length) {
  double sum = 0.0;
  for (int i = 0; i < length; i++) {
    sum += array[i];
  }
  return sum;
}

double average(double *array, int length) {
  return sum(array, length) / length;
}