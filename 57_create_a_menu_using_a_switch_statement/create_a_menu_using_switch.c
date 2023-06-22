#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
  double balance = 0, amount = 0;
  int choice = 0;

  while (true) {
    printf("1) Deposit\n");
    printf("2) Withdraw\n");
    printf("3) Print Balance\n");
    printf("4) Print Balance and Quit\n");
    printf("5) Quit\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter Amount: ");
        scanf("%lf", &amount);
        balance += amount;
        break;
      case 2: 
        printf("Enter Amount: ");
        scanf("%lf", &amount);
        if (balance >= amount) balance -= amount;
        else printf("Your balance is lower than %.2lf.\n", amount);
        break;
      case 3:
        printf("%.2lf\n", balance);
        break;
      case 4: 
        printf("%.2lf\n", balance);
      case 5:
        exit(0);   
    }
  }

  return 0;
}