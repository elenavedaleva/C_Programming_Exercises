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
  int w1lc[26] = {0};
  int w2lc[26] = {0};

  for (int i = 0; i < l1; i++) {
    int lower = tolower(s1[i]);
    w1lc[lower - 'a']++;
  }
  for (int i = 0; i < l2; i++) {
    int lower = tolower(s2[i]);
    w2lc[lower - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if(w1lc[i] != w2lc[i]) return false;
  }

  return true;
}