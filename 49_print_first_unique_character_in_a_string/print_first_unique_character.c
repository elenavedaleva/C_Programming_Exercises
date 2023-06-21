#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_first_unique(char *s);

int main(void) {
  char s1[] = "abcdefghijklmnopabcdefghi";
  char s2[] = "abcdefghiabcdefghi";
  print_first_unique(s1);
  printf("\n");
  print_first_unique(s2);

  return 0;
}

void print_first_unique(char *s) {
  int len = strlen(s);
  bool found_unique = false;
  for (int i = 0; i < len; i++) {
    bool found = true;
    char c = s[i];
    for (int j = 0; j < len; j++) {
      if (c == s[j] && i != j) {
        found = false;
        break;
      }
    }
    if (found) {
      printf("%c\n", c);
      found_unique = true;
      break;
    }
  }
  if (!found_unique) {
    printf("No unique character found.\n");
  }
}