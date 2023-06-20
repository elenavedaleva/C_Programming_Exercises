#include <stdio.h>
#include <string.h>

int smallest_word(char *s);

int main(void) {
  char s[] = "What a beautiful life!";

  printf("Smallest word is %d characters long.\n", smallest_word(s));

  return 0;
}

int smallest_word(char *s) {
  int len = strlen(s);
  int min = 100000;
  int count = 0;
  char nonwords[] = " ,.;!?\n\t";
  int i = 0;
  while (i < len) {
    count = 0;
    while (i < len) {
      if (strchr(nonwords, s[i]) != NULL) break;
      i++;
      count++;
    }

    if (count < min) min = count;

    while (i < len) {
      if (strchr(nonwords, s[i]) == NULL) break;
      i++;
    }
  }
  return min;
}