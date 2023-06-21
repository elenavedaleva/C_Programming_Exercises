#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_repeat(char *s);

int main(void) {
  char s1[] = "abcdefghijklmnopjklmop";
  char s2[] = "abcdefghijklmnop";
  print_repeat(s1);
  print_repeat(s2);

  return 0;
}

void print_repeat(char *s) {
  int len = strlen(s);
  bool found_repeat = false;
  for (int i = 0; i < len; i++) {
    char c = s[i];
    for (int j = 0; j < len; j++) {
      if (c == s[j] && i != j) {
        found_repeat = true;
        break;
      }
    }
    if (found_repeat) {
      printf("%c\n", c);
      break;
    }
  }
  if (!found_repeat) {
    printf("No repeating character found.\n");
  }
}