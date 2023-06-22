#include <stdio.h>
#include <string.h>
#include <ctype.h>

void make_lower(char *s);

int main(void) {
  char s[] = "WhAt a BeAUtiFul worLD! SomeTHING Else...";

  printf("Before: '%s'\n", s);
  make_lower(s);
  printf("After: '%s'\n", s);

  return 0;
}

void make_lower(char *s) {
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    s[i] = tolower(s[i]);
  }
}