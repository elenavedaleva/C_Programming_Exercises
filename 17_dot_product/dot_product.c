#include <stdio.h>

float dot_product(float *v1, float *v2, int length);

int main(void) {
  float v1[] = {2,5,4};
  float v2[] = {3,2,1};

  float d_product = dot_product(v1, v2, 3);
  printf("dot product: %.2f\n", d_product);

  return 0;
}

float dot_product(float *v1, float *v2, int length) {
  float sum = 0;
  for (int i = 0; i < length; i++) {
    sum += v1[i] * v2[i];
  }
  return sum;
}