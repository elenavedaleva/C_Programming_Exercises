#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int word_count(char *string, char *word);

int main(void) {
  char s[] = "It is in this string once!";
  char w[] = "this";

  int count = word_count(s, w);
  printf("Count: %d\n", count);

  char s2[] = "What a beautiful beautiful life!";
  char w2[] = "beautiful";

  int count2 = word_count(s2, w2);
  printf("Count: %d\n", count2);

  return 0;
}

int word_count(char *string, char *word) {
  int slen = strlen(string);
  int wlen = strlen(word);
  int end = slen - wlen + 1;
  int count = 0;

  for (int i = 0; i < end; i++) {
    bool word_found = true;
    for (int j = 0; j < wlen; j++) {
      if (word[j] != string[i + j]) {
        word_found = false;
        break;
      }
    }
    if (word_found) count++;
  }
  return count;
}