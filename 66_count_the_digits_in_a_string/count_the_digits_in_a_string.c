#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_digits(char *s);

int main(void) {
  char s[] = "A string with some letters 123456789 @#<>))(^*";

  int count = count_digits(s);
  printf("# of digits: %d\n", count);

  return 0;
}

int count_digits(char *s) {
  int len = strlen(s);
  int count = 0;
  for (int i = 0; i < len; i++) {
    if (isdigit(s[i])) count++;
  }
  return count;
}