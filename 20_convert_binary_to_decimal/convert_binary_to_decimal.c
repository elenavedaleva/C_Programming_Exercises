#include <stdio.h>
#include <string.h>

int convert(char *string);

int main(void) {
  char bin_string[] = "1001";

  int decimal = convert(bin_string);
  printf("'%s'  ->  %d\n", bin_string, decimal);

  return 0;
}

int convert(char *string) {
  int length = strlen(string);
  int total = 0;
  int power = 1;
  for(int i = (length - 1); i >= 0; i--) {
    if (string[i] == '1') {
      total += power;
    }
    power *= 2;
  }
  return total;
}