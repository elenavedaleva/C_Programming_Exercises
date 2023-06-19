#include <stdio.h>

int string_length(char *s);

int main(void) {
  char string[] = "Here is my string!";

  printf("length: %d\n", string_length(string));

  return 0;
}

int string_length(char *s) {
  int len = 0;
  while (s[len] != '\0') len++;
  return len;
}