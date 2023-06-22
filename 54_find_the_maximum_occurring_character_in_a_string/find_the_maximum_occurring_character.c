#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_max_char(char *s);

int main(void) {
  char s[] = "abcdefghabcdefghabccccdafgh";
  print_max_char(s);

  return 0;
}

void print_max_char(char *s) {
  int len = strlen(s);
  int max_count;
  int max_char;
  char unique[len];
  int counted = 0;
  for (int i = 0; i < len; i++) {
    bool already_counted = false;
    for (int j = 0; j < counted; j++) {
      if (s[i] == unique[j]) {
        already_counted = true;
        break;
      }
    }
    if (already_counted) continue;

    int count = 0;
    for (int j = 0; j < len; j++) {
      if (s[i] == s[j]) count++;
    }

    unique[counted++] = s[i];

    if (counted == 1) {
      max_count = count;
      max_char = s[i];
    } else if (count > max_count) {
      max_count = count;
      max_char = s[i];      
    }
  }
  if (len > 0) {
    printf("'%c' - %d\n", max_char, max_count);
  } else {
    printf("error: string has 0 length\n");
  }
}