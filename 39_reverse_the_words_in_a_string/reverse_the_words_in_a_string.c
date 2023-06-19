#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse_words(char *s);

int main(void) {
  char s[] = "What a beautiful life!";

  printf("Before: '%s'\n", s);
  reverse_words(s);
  printf("After: '%s'\n", s);

  return 0;
}

void reverse_words(char *s) {
  int len = strlen(s);
  int i = 0;
  int j = 0;
  char temp[100];

  for (i = 0; i < len; i++) {
    while (!(ispunct(s[i])) && !(isspace(s[i]))) {
      temp[j++] = s[i++];
    }
    while (j > 0) {
      s[i - j] = temp[j - 1];
      j--;
    }
  }
}