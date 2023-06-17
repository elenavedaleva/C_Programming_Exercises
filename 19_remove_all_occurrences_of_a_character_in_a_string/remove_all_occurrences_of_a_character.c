#include <stdio.h>

void remove_char(char *string, char r);

int main(void) {
  char s[] = "This is my string!";
  char r = 's';

  printf("Before: %s\n", s);
  remove_char(s, r);
  printf("After: %s\n", s);

  return 0;
}

void remove_char(char *string, char r) {
  int pos = 0;
  while (string[pos] != '\0') {
    if (string[pos] == r) {
      int newpos = pos;
      while (string[newpos] != '\0') {
        string[newpos] = string[newpos + 1];
        newpos++;
      }
    } else pos++;
  }
}