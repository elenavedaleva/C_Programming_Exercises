#include <stdio.h>
#include <string.h>

int count_words(char *s);

int main(void) {
  char s[] = "What a beautiful life! Something else.";

  printf("Number of words: %d\n", count_words(s));

  return 0;
}

int count_words(char *s) {
  int len = strlen(s);
  int count = 0;
  char nonwords[] = " .,;\n\t";
  for (int i = 0; i < len; i++) {
    while (i < len) {
      if (strchr(nonwords, s[i]) != NULL) break; 
      i++; 
    }
    count++;
    while (i < len) {
      if (strchr(nonwords, s[i]) == NULL) break;
      i++;
    }
  }
  return count;
}