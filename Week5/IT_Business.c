#include <stdio.h>

int main() {
  float account, current, amount;
  char transaction;
  int fail=0;
  scanf("%f %f", &account, &current);
  while (1) {
    scanf("%c %f", &transaction, &amount);
    if (fail == 3 || transaction == 'E') {
      break;
    }
    if (transaction == 'D') {
      if (current < amount) {
        fail = fail + 1;
      }
      else {
        fail = 0;
        current = current - amount;
        account = account + amount;
      }
    }
    else if (transaction == 'W') {
      if (account < amount) {
        fail = fail + 1;
      }
      else {
        fail = 0;
        account = account - amount;
        current = current + amount;
      }
    }
  }
  printf("%.2f\n%.2f", account, current);
  return 0;
}
