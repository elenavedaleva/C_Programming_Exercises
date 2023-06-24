#include <stdio.h>

int main(void) {
  FILE *fh;

  fh = fopen("file.txt", "r");
  if (fh == NULL) {
    printf("Error opening file.\n");
    return 1;
  }
  char c;
  while ((c = fgetc(fh)) != EOF) {
    putchar(c);
  }

  fclose(fh);

  return 0;
}