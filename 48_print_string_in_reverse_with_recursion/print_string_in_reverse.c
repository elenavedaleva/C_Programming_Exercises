#include <stdio.h>

void print_reverse(char *s); 

int main(void) {
  char s[] = "What a beautiful life!";

  print_reverse(s);
  printf("\n");

  return 0;
}

void print_reverse(char *s) {
  if (*s == '\0') return;
  print_reverse(s + 1);
  printf("%c", *s);
}