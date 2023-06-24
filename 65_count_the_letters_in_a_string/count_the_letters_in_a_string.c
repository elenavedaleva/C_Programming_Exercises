#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_letters(char *s);

int main(void) {
  char s[] = "A string with some letters 123456789 @#<>))(^*";

  int count = count_letters(s);
  printf("# of letters: %d\n", count);

  return 0;
}

int count_letters(char *s) {
  int len = strlen(s);
  int count = 0;
  for (int i = 0; i < len; i++) {
    if (isalpha(s[i])) count++;
  }
  return count;
}