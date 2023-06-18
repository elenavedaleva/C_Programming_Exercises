#include <stdio.h>

double compute_area(double radius);

int main(void) {
  double radius = 0;

  printf("Enter radius: ");
  scanf("%lf", &radius);

  double area = compute_area(radius);
  printf("Area: %.2lf\n", area);

  return 0;
}

double compute_area(double radius) {
  return 3.14592 * radius * radius;
}