#include <stdio.h>

void print_until_newline(char *s);

int main(void) {
  char s[] = "What a beautiful life!\n Something else...";
  print_until_newline(s);
  printf("\n");

  return 0;
}

void print_until_newline(char *s) {
  int i = 0;
  while (s[i] != '\n' && s[i] != '\0') {
    putchar(s[i]);
    i++;
  }
}