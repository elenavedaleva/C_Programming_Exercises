#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool remove_char(char *s, int pos);

int main(void) {
  char s[] = "12345-12345";

  if (remove_char(s, 5)) {
    printf("%s\n", s);
  } else {
    printf("error: couldn't remove a character at a specified position\n");
  }

  return 0;
}

bool remove_char(char *s, int pos) {
  int len = strlen(s);
  if (pos >= len) return false;
  for (int i = pos; i < len; i++) {
    s[i] = s[i + 1];
  }
  return true;
}