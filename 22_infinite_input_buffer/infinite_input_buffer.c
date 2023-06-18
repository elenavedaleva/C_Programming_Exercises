#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_buffer(int *buffer, int length);

int main(void) {
  int size = 2;
  int *buffer = malloc(sizeof(int) * size);

  int input = 0;
  int num_data = 0;

  while (true) {
    if (num_data == size) {
      size *= 2;
      buffer = realloc(buffer, sizeof(int) * size);
    }
    printf("Enter (-1 to quit): ");
    scanf("%d", &input);
    if (input == -1) break;
    
    buffer[num_data++] = input;
  }

  print_buffer(buffer, num_data);

  return 0;
}

void print_buffer(int *buffer, int length) {
  printf("\nBuffer: ");
  for (int i = 0; i < length; i++) {
    printf("%d ", buffer[i]);
  }
  printf("\n");
}