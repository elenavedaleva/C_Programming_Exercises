#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Anagram example
// Listen = Silent

bool is_anagram(char *s1, char *s2);

int main(void) {
  char s1[] = "Listen";
  char s2[] = "Silent";

  if (is_anagram(s1, s2)) {
    printf("'%s' and '%s' are anagrams!\n", s1, s2);
  } else {
    printf("'%s' and '%s' are NOT anagrams!\n", s1, s2);   
  }

  return 0;
}

bool is_anagram(char *s1, char *s2) {
  int l1 = strlen(s1);
  int l2 = strlen(s2);
  if (l1 != l2) return false;
  for (int i = 0; i < l1; i++) {
    bool found = false;
    for (int j = 0; j < l2; j++) {
      if (!found && tolower(s1[i]) == tolower(s2[j])) found = true;
      else if (found && tolower(s1[i]) == tolower(s2[j])) return false;
    }
    if (!found) return false;
  }
  return true;
}