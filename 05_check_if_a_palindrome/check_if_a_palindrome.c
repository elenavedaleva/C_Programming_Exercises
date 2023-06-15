#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char *string);

void print(char *string);

int main(void) {
  char string1[] = "not a palindrome!";
  char string2[] = "abccba";
  char string3[] = "abcdcba";

  print(string1);
  print(string2);
  print(string3);

  return 0;
}

bool is_palindrome(char *string) {
  int length = strlen(string);
  int middle = length / 2;
  for (int i = 0; i < middle; i++) {
    if (string[i] != string[length - 1 - i]) {
      return false;
    }
  }
  return true;
}

void print(char *string) {
  if (is_palindrome(string)) {
    printf("'%s' is a palindrome!\n", string);
  } else {
    printf("'%s' is NOT a palindrome!\n", string);
  }
}