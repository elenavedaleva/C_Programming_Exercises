#include <stdio.h>
#include <string.h>
#include <ctype.h>

void count_occurrences(char *s);

int main(void) {
  char s[] = "abcdefghiabcabjklnaaffcdeide";
  count_occurrences(s);

  return 0;
}

void count_occurrences(char *s) {
  int len = strlen(s);
  int ch_counts[26] = {0}; 
  for (int i = 0; i < len; i++) {
    int lower = tolower(s[i]);
    ch_counts[lower - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (ch_counts[i]) {
      printf("'%c' - %d\n", (i + 'a'), ch_counts[i]);
    }
  }
}