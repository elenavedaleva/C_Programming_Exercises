#include <stdio.h>
#include <string.h>

int largest_word(char *s);

int main(void) {
  char s[] = "What a beautiful life!";

  printf("The longest word is %d characters long.\n", largest_word(s));

  return 0;
}

int largest_word(char *s) {
  int len = strlen(s);
  int l = 0;
  int max = 0;
  char nonwords[] = " ,.!;\n\t";
  int i = 0;
  while (i < len) {
    l = 0;
    while (i < len) {
      if (strchr(nonwords, s[i]) != NULL) break;
      l++;
      i++;
    }
    if (l > max) max = l;
    while (i < len) {
      if (strchr(nonwords, s[i]) == NULL) break;
      i++;
    }
  }
  return max;
}