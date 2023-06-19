#include <stdio.h>
#include <ctype.h>
#include <string.h>

void trim(char *s);

int main(void) {
  char s[] = "This is the way!   \n\n\t  ";
  printf("Before: '%s'\n", s);
  trim(s);
  printf("After: '%s'\n", s);

  return 0;
}

void trim(char *s) {
  int len = strlen(s) - 1;
  while (isspace(s[len]) && len > 0) {
    len--;
  }

  s[len + 1] = '\0';
}