#include <stdio.h>
#include <string.h>
#include <ctype.h>

void letter_flip(char *s);

int main(void) {
  char s[] = "abcdeABCDE";

  printf("before: %s\n", s);
  letter_flip(s);
  printf("after: %s\n", s);

  return 0;
}

void letter_flip(char *s) {
  int length = strlen(s);

  for (int i = 0; i < length; i++) {
    if (islower(s[i])) {
      s[i] = toupper(s[i]);
    }
    else if (isupper(s[i])) {
      s[i] = tolower(s[i]);
    }
  }
}