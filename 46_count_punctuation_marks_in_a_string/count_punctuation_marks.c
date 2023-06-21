#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_punct(char *s);

int main(void) {
  char s[] = "apple, orange, banana; tea... something else";
  printf("# of punctuation marks: %d\n", count_punct(s));

  return 0;
}

int count_punct(char *s) {
  int len = strlen(s);
  int count = 0;
  for (int i = 0; i < len; i++) {
    if (ispunct(s[i])) count++;
  }
  return count;
}