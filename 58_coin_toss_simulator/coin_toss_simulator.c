#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum coin {HEADS, TAILS} coin;

coin flip_coin();

int main(void) {
  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    if (flip_coin() == HEADS) printf("HEADS\n");
    else printf("TAILS\n");
  }

  return 0;
}

coin flip_coin() {
  if (rand() % 2 == 0) return HEADS;
  else return TAILS;
}