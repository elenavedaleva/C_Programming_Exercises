#include <stdio.h>
#include <string.h>

void char_replace(char *string, char replace, char new);

int main(void) {
  char s[] = "Replace a character";

  printf("Before: %s\n", s);
  char_replace(s, 'a', 'o');
  printf("After: %s\n", s);  

  return 0;
}

void char_replace(char *string, char replace, char new) {
  int length = strlen(string);
  for (int i = 0; i < length; i++) {
    if (string[i] == replace) string[i] = new;
  }
}