#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// at least 8 characters long
// at least 1 uppercase letter
// at least 1 lowercase letter
// at least 1 digit
// at least 1 symbol

bool is_valid_password(char *s);

int main(void) {
  char p[] = "Ax5@abcdefg";

  bool is_valid = is_valid_password(p);

  if (is_valid) {
    printf("Success! Password verified!\n");
  } else {
    printf("Invalid password.\n");
  }

  return 0;
}

bool is_valid_password(char *s) {
  int len = strlen(s);
  if (len < 8) {
    return false;
  };

  bool has_upper = false;
  bool has_lower = false;
  bool has_digit = false;
  bool has_symbol = false;
  for (int i = 0; i < len; i++) {
    if (isupper(s[i])) {
      has_upper = true;
    } else if (islower(s[i])) {
      has_lower = true;
    } else if (isdigit(s[i])) {
      has_digit = true;
    } else if (ispunct(s[i])) {
      has_symbol = true;
    }
  }

  if (!has_upper) {
    return false;
  } else if (!has_lower) {
    return false;
  } else if (!has_digit) {
    return false;
  } else if (!has_symbol) {
    return false;
  }

  return true; 
}