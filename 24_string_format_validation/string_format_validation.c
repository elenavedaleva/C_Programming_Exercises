#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool is_postal_code(char *postal_code);

int main(void) {
  char code1[] = "L8K 4B6";
  char code2[] = "l8k 4b6";
  char code3[] = "L8K4B6"; 
  char code4[] = "98K 4B6";

  if (is_postal_code(code1)) {
    printf("'%s' is a postal code!\n", code1);
  } else {
    printf("'%s' is not a postal code!\n", code1);   
  }

  if (is_postal_code(code2)) {
    printf("'%s' is a postal code!\n", code2);
  } else {
    printf("'%s' is not a postal code!\n", code2);   
  }

  if (is_postal_code(code3)) {
    printf("'%s' is a postal code!\n", code3);
  } else {
    printf("'%s' is not a postal code!\n", code3);   
  }

  if (is_postal_code(code4)) {
    printf("'%s' is a postal code!\n", code4);
  } else {
    printf("'%s' is not a postal code!\n", code4);   
  }  

  return 0;
}

bool is_postal_code(char *postal_code) {
  if (strlen(postal_code) != 7) return false;
  if (!isalpha(postal_code[0])) return false;
  if (!isdigit(postal_code[1])) return false;
  if (!isalpha(postal_code[2])) return false;
  if (postal_code[3] != ' ') return false;
  if (!isdigit(postal_code[4])) return false;
  if (!isalpha(postal_code[5])) return false;
  if (!isdigit(postal_code[4])) return false;

  return true;
}