#include <stdio.h>
#include <ctype.h>

void trim_whitespace(char *s);

int main(void) {
  char s[] = " \n\n\t  What a wonderful life!";

  printf("Before: '%s'\n", s);
  trim_whitespace(s);
  printf("After: '%s'\n", s);

  return 0;
}

void trim_whitespace(char *s) {
  int pos = 0;
  while (isspace(s[pos])) pos++;
  if (pos != 0) {
    int i = 0;
    while (s[pos] != '\0') {
      s[i++] = s[pos++];
    }
    s[i] = '\0';
  }
}