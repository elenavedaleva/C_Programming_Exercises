#include <stdio.h>
#include <string.h>

void remove_vowels(char *string);

int main(void) {
  char s[] = "This is the way!";
  printf("Before: '%s'\n", s);
  remove_vowels(s);
  printf("After: '%s'\n", s);

  return 0;
}

void remove_vowels(char *string) {
  int curpos = 0;
  int newpos = 0;

  while (curpos < strlen(string)) {
    if (!(string[curpos] == 'a' || string[curpos] == 'e' || 
          string[curpos] == 'o' || string[curpos] == 'i' ||
          string[curpos] == 'u')) {
      string[newpos] = string[curpos];
      newpos++;
    }    
    curpos++;
  }
  string[newpos] = '\0';
}